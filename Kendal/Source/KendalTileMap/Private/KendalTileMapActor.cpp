
#include "KendalTileMapActor.h"

#include "KendalPaperTileData.h"
#include "KendalTileMapSettings.h"
#include "PaperTileMapComponent.h"
#include "PaperTileLayer.h"
#include "PaperTileMap.h"
#include "PaperTileSet.h"
#include "Net/UnrealNetwork.h"

#if !UE_BUILD_SHIPPING
static TAutoConsoleVariable<int32> CVarKendalRecursiveTileUpdates(
	TEXT("Kendal.RecursiveTileUpdates"),
	1,
	TEXT("Use to disable recursive tile updates useful for debugging.\n")
	TEXT("  0: off \n")
	TEXT("  1: On \n")
);
#endif

// Sets default values
AKendalTileMapActor::AKendalTileMapActor()
{
	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;

	TileMapComponent = CreateDefaultSubobject<UPaperTileMapComponent>(TEXT("KendalTileMaps"));
	TileMapComponent->SetIsReplicated(true);
}

FPaperTileInfo AKendalTileMapActor::GetTileAtCoordinates(const FVector2D& Coordinates) const
{
	if (!IsValid(TileMapComponent))
	{
		return {};
	}

	return TileMapComponent->GetTile(Coordinates.X, Coordinates.Y, BaseLayerIndex);;
}

/*
 *		0 3	6
 *		1 - 7
 *		2 5 8
 *
 *		1   10000000 -> 0 (TopLeft)
 *		2   01000000 -> 1 (MiddleLeft)
 *		4   00100000 -> 2 (BottomLeft)
 *		8   00010000 -> 3 (Top)
 *		16  00001000 -> 4 (Bottom)
 *		32  00000100 -> 5 (TopRight)
 *		64  00000010 -> 6 (MiddleRight)
 *		128 00000001 -> 7 (BottomRight)
 */
void AKendalTileMapActor::UpdateTile(const int32 X, const int32 Y, const bool bUpdateAdjacent)
{
	if (!IsValid(TileMapComponent))
	{
		return;
	}

	TArray<FVector2D> ValidAdjacentTiles;
	uint8 Bitmask = 0;
	for (int32 Index = 0; Index < 8; Index++)
	{
		//Skips the target tile in the grid but preserves the 8bit bitmask
		const int32 RemappedIndex = Index >= 4 ? Index + 1 : Index;
		//Convert the index to the tile position, and centre it around the target tile
		const int32 TileX = RemappedIndex / 3 + (X - 1);
		const int32 TileY = RemappedIndex % 3 + (Y - 1);

		const auto Data = GetTileData(FVector2D(TileX, TileY));
		const auto* TileData = Data.GetPtr<FPaperTileData>();
		if (TileData == nullptr)
		{
			continue;
		}

		const FVector2D TilePosition = GetWorldPositionFromTileCoordinates(FVector2D(TileX, -TileY));
		const auto* KendalTileData = Data.GetPtr<FKendalPaperTileData>();
		constexpr uint8 Waterable = static_cast<uint8>(EKendalPaperTileInteractionFlags::Waterable);
		if (KendalTileData != nullptr && KendalTileData->InteractionFlags & Waterable)
		{
			ValidAdjacentTiles.Add(FVector2D(TileX, TileY));
			//DrawDebugBox(GetWorld(), FVector(TilePosition, 0.0f), FVector(50.0f), FColor::Blue, false, 15.0f);
			Bitmask |= (1 << Index);

#if !UE_BUILD_SHIPPING
			UE_LOG(LogTemp, Display, TEXT("Setting Bit Flag at %d,( %s ) BitMask %d"), Index, *Debug_GetTileLocationString(Index), Bitmask);
#endif
			continue;
		}

		//DrawDebugBox(GetWorld(), FVector(TilePosition, 0.0f), FVector(50.0f), FColor::Red, false, 15.0f);
	}

#if !UE_BUILD_SHIPPING
	UE_LOG(LogTemp, Display, TEXT("BitMask %d"), Bitmask);
#endif

	//TODO store this somewhere this is a bit grim 
	int32 ChosenTile = 17;
	//Represents the 4 cardinal directions in bit form
	constexpr uint8 CardinalDirections = 90;
	//Tells us if our interacted tile has any relevant tiles in the cardinal directions, if not we can ignore the lookup table
	if ((CardinalDirections & Bitmask) > 0)
	{
		const auto FlagRemapping = UKendalTileMapSettings::GetTileBitFlagMapping();
		ChosenTile = FlagRemapping.Contains(Bitmask) ? FlagRemapping[Bitmask] : ChosenTile;
	}

	if (HasAuthority())
	{
		Multicast_SetTile(X, Y, ChosenTile);
	}

	if (!bUpdateAdjacent || CVarKendalRecursiveTileUpdates.GetValueOnGameThread() == 0)
	{
		return;
	}

	for (const auto& Tile : ValidAdjacentTiles)
	{
		UpdateTile(Tile.X, Tile.Y);
	} 
}

FInstancedStruct AKendalTileMapActor::GetTileData(const FVector2D& Coordinates) const
{
	FInstancedStruct TileData {};
	const auto Tile = GetTileAtCoordinates(Coordinates);

	if (!Tile.IsValid())
	{
		return TileData;
	}

	const auto* MetaData = Tile.TileSet->GetTileMetadata(Tile.GetTileIndex());
	if (MetaData == nullptr)
	{
		return TileData;
	}

	auto* Data = MetaData->TileData.Get();
	if (Data == nullptr)
	{
		return TileData;
	}

	return Data->InstancedTileData;
}

void AKendalTileMapActor::GetTileCoordinatesFromWorldPosition(const FVector2D& Location, int32& OutX, int32& OutY) const
{
	if (!IsValid(TileMapComponent) || !IsValid(TileMapComponent->TileMap))
	{
		return;
	}

	TileMapComponent->TileMap->GetTileCoordinatesFromLocalSpacePosition(FVector(Location.X, 0.0f, Location.Y), OutX, OutY);
}

FVector2D AKendalTileMapActor::GetWorldPositionFromTileCoordinates(const FVector2D& Coordinates) const
{
	if (!IsValid(TileMapComponent) || !IsValid(TileMapComponent->TileMap))
	{
		return FVector2D::ZeroVector;
	}

	const FVector WorldLocation = TileMapComponent->TileMap->GetTileCenterInLocalSpace(Coordinates.X, Coordinates.Y, BaseLayerIndex);
	return FVector2D(WorldLocation.X, WorldLocation.Z);
}

void AKendalTileMapActor::BeginPlay()
{
	Super::BeginPlay();

	if (!IsValid(TileMapComponent) || !IsValid(ActiveTileMap))
	{
		return;
	}
	//AddReplicatedSubObject(TileMapComponent);

	TileMapComponent->SetTileMap(ActiveTileMap);
	TileMapComponent->SetComponentTickEnabled(true);

	for (int32 Index = 0; Index < TileMapComponent->TileMap->TileLayers.Num(); Index++)
	{
		if (TileMapComponent->TileMap->TileLayers[Index]->LayerName.EqualTo(FText::FromString("BaseLayer")))
		{
			BaseLayerIndex = Index;
			break;
		}
	}
}

void AKendalTileMapActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AKendalTileMapActor::SetTargetTile(const int32 X, const int32 Y, const FVector2D& PreviousTarget) const
{
	TileMapComponent->MakeTileMapEditable();
	ClearTargetTile(PreviousTarget);
	FPaperTileInfo NewTileInfo;
	NewTileInfo.PackedTileIndex = 0;
	NewTileInfo.TileSet = Cast<UPaperTileSet>(UKendalTileMapSettings::GetInteractionTileSet().TryLoad());
	TileMapComponent->SetTile(X, Y, InteractionLayerIndex, NewTileInfo);
}

void AKendalTileMapActor::ClearTargetTile(const FVector2D& TargetTile) const
{
	TileMapComponent->MakeTileMapEditable();
	TileMapComponent->SetTile(TargetTile.X, TargetTile.Y, InteractionLayerIndex, FPaperTileInfo());
}

void AKendalTileMapActor::Multicast_SetTile_Implementation(const int32 X, const int32 Y, const int32 TileIndex)
{
	TileMapComponent->MakeTileMapEditable();
	FPaperTileInfo NewTileInfo;
	NewTileInfo.PackedTileIndex = TileIndex;
	NewTileInfo.TileSet = Cast<UPaperTileSet>(UKendalTileMapSettings::GetTilledGroundTileSet().TryLoad());
	TileMapComponent->SetTile(X, Y, BaseLayerIndex, NewTileInfo);
}

FString AKendalTileMapActor::Debug_GetTileLocationString(const uint8 TileIndex)
{
	FString TileSlotName = "";
	switch (1 << TileIndex)
	{
	case 1:
		TileSlotName = "TopLeft";
		break;
	case 2:
		TileSlotName = "MiddleLeft";
		break;
	case 4:
		TileSlotName = "BottomLeft";
		break;
	case 8:
		TileSlotName = "Top";
		break;
	case 16:
		TileSlotName = "Bottom";
		break;
	case 32:
		TileSlotName = "TopRight";
		break;
	case 64:
		TileSlotName = "MiddleRight";
		break;
	case 128:
		TileSlotName = "BottomRight";
		break;
	default:
		break;
	}

	return TileSlotName;
}

void AKendalTileMapActor::DrawDebug(const TOptional<FVector2D>& TargetPosition) const
{
	const auto World = GetWorld();
	if (!IsValid(World) || !IsValid(TileMapComponent) || !IsValid(TileMapComponent->TileMap))
	{
		return;
	}

	const int32 Width = TileMapComponent->TileMap->MapWidth;
	const int32 Height = TileMapComponent->TileMap->MapHeight;

	constexpr int32 TileWidth = 100;
	constexpr int32 TileHeight = 100;

	const FVector2D TextOffset = FVector2D(TileWidth / 4, TileHeight / 4);
	for (int32 X = 0; X < Width; X++)
	{
		for (int32 Y = 0; Y < Height; Y++)
		{
			const FVector2D TileCenter = FVector2D((X * TileWidth), (Y * TileHeight));
			const float DistanceSquared = FVector2D::DistSquared(TileCenter, TargetPosition.GetValue());
			if (TargetPosition.IsSet() && FMath::Abs(DistanceSquared) > 500 * 500)
			{
				continue;
			}

			//DrawDebugString(World, FVector(TileCenter - TextOffset, 0.0f), FString::Printf(TEXT("(%d, %d)"), X, Y), nullptr, FColor::Blue, 0.1f, false, 1.0f);
		}
	}
}

void AKendalTileMapActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AKendalTileMapActor, TileMapComponent);
}
