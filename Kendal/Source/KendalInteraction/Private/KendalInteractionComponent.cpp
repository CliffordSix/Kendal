// Fill out your copyright notice in the Description page of Project Settings.


#include "KendalInteractionComponent.h"

#include "KendalMapManagementSubsystem.h"
#include "Engine/World.h"
#include "KendalEquipment/Public/KendalEquipmentManagerComponent.h"
#include "KendalTileMap/Public/KendalPaperTileData.h"

#if !UE_BUILD_SHIPPING
static TAutoConsoleVariable<int32> CVarKendalShowInteractionTarget(
	TEXT("Kendal.ShowInteractionTarget"),
	1,
	TEXT("Shows the target tile for the interaction system\n")
	TEXT("  0: off \n")
	TEXT("  1: On Shows the target tile\n")
);
#endif


UKendalInteractionComponent::UKendalInteractionComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UKendalInteractionComponent::SetCurrentTile(const FVector2D& InTileLocation, const FVector2D& AimDirection)
{
	TileLocation = InTileLocation;
	//UpdateAdjacentTiles();

	if (MapSubsystem.IsValid() && CVarKendalShowInteractionTarget.GetValueOnGameThread() == 1)
	{
		MapSubsystem->SetTargetTile(TileLocation.X + AimDirection.X, TileLocation.Y + AimDirection.Y, PreviousTargetLocation);
		PreviousTargetLocation = TileLocation + AimDirection;
	}
}

void UKendalInteractionComponent::UpdateAdjacentTiles() const
{
	if (!MapSubsystem.IsValid())
	{
		return;
	}

	for (int32 X = -1; X <= 1; X++)
	{
		for (int32 Y = -1; Y <= 1; Y++)
		{
			FVector2D TileCoordinates = TileLocation + FVector2D(X, Y);
			const FVector2D TilePosition = MapSubsystem->GetWorldPositionFromTileCoordinates(TileCoordinates);
			//DrawDebugBox(GetWorld(), FVector(TilePosition, 0.0f), FVector(50.0f), MapSubsystem->IsTileInteractable(TileCoordinates) ? FColor::Green : FColor::Red, false, 0.1f);
		}
	}
}

void UKendalInteractionComponent::InteractTargetTile(const FVector2D& TargetTile) const
{
	if (!MapSubsystem.IsValid())
	{
		return;
	}

	auto* Owner = GetOwner();
	if (!IsValid(Owner))
	{
		return;
	}

	const auto* EquipmentManagerComponent = Owner->GetComponentByClass<UKendalEquipmentManagerComponent>();
	if (!IsValid(EquipmentManagerComponent))
	{
		return;
	}

	EquipmentManagerComponent->GetQuickSelectIndex();

	if (MapSubsystem->IsTileInteractable(PreviousTargetLocation, EKendalPaperTileInteractionFlags::Tillable))
	{
		MapSubsystem->UpdateTile(PreviousTargetLocation.X, PreviousTargetLocation.Y, 51);
	}
}

void UKendalInteractionComponent::BeginPlay()
{
	Super::BeginPlay();

	const auto* World = GetWorld();
	if (!IsValid(World))
	{
		return;
	}

	MapSubsystem = World->GetSubsystem<UKendalMapManagementSubsystem>();
}

void UKendalInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                                FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

