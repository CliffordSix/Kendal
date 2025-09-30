// Fill out your copyright notice in the Description page of Project Settings.


#include "KendalMapManagementSubsystem.h"

#include "KendalPaperTileData.h"
#include "KendalTileMapActor.h"
#include "GameFramework/Character.h"

#if !UE_BUILD_SHIPPING
static TAutoConsoleVariable<int32> CVarKendalTileDebug(
	TEXT("Kendal.TileDebug"),
	0,
	TEXT("Defines the distortion/refraction quality, adjust for quality or performance.\n")
	TEXT("  0: off \n")
	TEXT("  1: On Shows debugging around Player\n")
);
#endif

void UKendalMapManagementSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UKendalMapManagementSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);

	const auto World = GetWorld();
	if (!IsValid(World))
	{
		return;
	}

	TileMapActor = World->SpawnActor<AKendalTileMapActor>(TileMapActorClass);
	if (IsValid(TileMapActor) && World->GetNetMode() < NM_Client)
	{
		TileMapActor->SetActorRotation(FRotator(0.0f, 0.0f, -90.0f));
	}
}

bool UKendalMapManagementSubsystem::IsTickable() const
{
	const auto World = GetWorld();
	if (!IsValid(World))
	{
		return false;
	}

	return !World->GetAuthGameMode();
}

void UKendalMapManagementSubsystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CVarKendalTileDebug.GetValueOnGameThread() == 0)
	{
		return;
	}

	const auto World = GetWorld();
	if (!IsValid(TileMapActor) || !IsValid(World))
	{
		return;
	}

	const auto* PlayerController = World->GetFirstPlayerController();
	if (!IsValid(PlayerController))
	{
		return;
	}

	const auto* Character = PlayerController->GetCharacter();
	if (!IsValid(Character))
	{
		return;
	}

	const TOptional<FVector2D> PlayerLocation = FVector2D(Character->GetActorLocation().X, Character->GetActorLocation().Y);
	TileMapActor->DrawDebug(PlayerLocation);
}

TStatId UKendalMapManagementSubsystem::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UKendalMapManagementSubsystem, STATGROUP_Tickables);
}

void UKendalMapManagementSubsystem::GetTileCoordinatesFromWorldPosition(const FVector2D& Location, int32& OutX,
                                                                        int32& OutY) const
{
	if (IsValid(TileMapActor))
	{
		TileMapActor->GetTileCoordinatesFromWorldPosition(Location, OutX, OutY);
	}
}

FVector2D UKendalMapManagementSubsystem::GetWorldPositionFromTileCoordinates(const FVector2D& Coordinates) const
{
	if (IsValid(TileMapActor))
	{
		FVector2D CoordinatesRemapped = FVector2D(Coordinates.X, -Coordinates.Y);
		return TileMapActor->GetWorldPositionFromTileCoordinates(CoordinatesRemapped);
	}

	return FVector2D::ZeroVector;
}

bool UKendalMapManagementSubsystem::IsTileInteractable(const FVector2D& Coordinates, const EKendalPaperTileInteractionFlags& InteractionFlags) const
{
	if (!IsValid(TileMapActor))
	{
		return false;
	}

	const auto Data = TileMapActor->GetTileData(Coordinates);
	const auto* TileData = Data.GetPtr<FPaperTileData>();
	if (TileData == nullptr)
	{
		return false;
	}

	const auto* KendalTileData = Data.GetPtr<FKendalPaperTileData>();
	if (KendalTileData != nullptr)
	{
		return KendalTileData->InteractionFlags & static_cast<uint8>(InteractionFlags);
	}

	return false;
}

void UKendalMapManagementSubsystem::UpdateTile(const int32 X, const int32 Y, const int32 TileIndex) const
{
	if (IsValid(TileMapActor))
	{
		TileMapActor->UpdateTile(X, Y, true);
	}
}

void UKendalMapManagementSubsystem::SetTargetTile(const int32 X, const int32 Y, const FVector2D PreviousTarget) const
{
	if (!IsValid(TileMapActor))
	{
		return;
	}

	if (IsTileInteractable(FVector2D(X, Y), EKendalPaperTileInteractionFlags::Tillable))
	{
		TileMapActor->SetTargetTile(X, Y, PreviousTarget);
	}
	else
	{
		TileMapActor->ClearTargetTile(PreviousTarget);
	}
}
