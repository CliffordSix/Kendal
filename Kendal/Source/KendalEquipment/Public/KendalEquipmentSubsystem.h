// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "KendalEquipmentSubsystem.generated.h"

class AKendalEquipmentInstanced;
/**
 * Subsystem used to spawn Equipment. Manages a pool of equipment instance actors
 */
UCLASS(Blueprintable)
class KENDALEQUIPMENT_API UKendalEquipmentSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

	void SpawnLoot(const FVector& WorldPosition, const FName& InItemId);
	void SpawnLootAtTile(const int32 X, const int32 Y, const FName& InItemId);

	void ReturnLootToPool(AKendalEquipmentInstanced& InActor);

private:
	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess))
	int32 BasePoolSize = 30;

	UPROPERTY(Transient)
	TArray<AKendalEquipmentInstanced*> EquipmentPool;
};
