// Fill out your copyright notice in the Description page of Project Settings.


#include "KendalEquipmentSubsystem.h"

#include "KendalEquipmentInstanced.h"
#include "KendalMapManagementSubsystem.h"

void UKendalEquipmentSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);

	EquipmentPool.Reserve(BasePoolSize);
	for (int32 i = 0; i < BasePoolSize; i++)
	{
		auto* NewItem = GetWorld()->SpawnActor<AKendalEquipmentInstanced>(FVector::ZeroVector, FRotator::ZeroRotator);
		EquipmentPool.Add(NewItem);
	}
}

void UKendalEquipmentSubsystem::SpawnLoot(const FVector& WorldPosition, const FName& InItemId)
{
	auto* NewItem = EquipmentPool[0];
	EquipmentPool.RemoveAt(0);

	//TODO Sort this out
	NewItem->InitialiseInWorld(WorldPosition, InItemId);
}

void UKendalEquipmentSubsystem::SpawnLootAtTile(const int32 X, const int32 Y, const FName& InItemId)
{
	const auto* World = GetWorld();
	if (!IsValid(World))
	{
		return;
	}

	const auto MapSubsystem = World->GetSubsystem<UKendalMapManagementSubsystem>();
	if (!IsValid(MapSubsystem))
	{
		return;
	}

	const FVector2D WorldPosition = MapSubsystem->GetWorldPositionFromTileCoordinates(FVector2D(X, Y));
	SpawnLoot(FVector(WorldPosition.X, WorldPosition.Y, 10.0f), InItemId);
}

void UKendalEquipmentSubsystem::ReturnLootToPool(AKendalEquipmentInstanced& InActor)
{
	EquipmentPool.Add(&InActor);
}
