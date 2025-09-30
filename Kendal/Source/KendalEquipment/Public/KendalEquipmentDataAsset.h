// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KendalEquipmentData.h"
#include "Engine/DataAsset.h"
#include "KendalEquipmentDataAsset.generated.h"

/**
 * Data Asset Wrapper around Kendal EquipmentData, used to define any kinda of equipment.
 * Defines the "default" state of an item. These can be read from to generate InstancedAssets or data in
 * a chest the player could open.
 */
UCLASS()
class KENDALEQUIPMENT_API UKendalEquipmentDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;

	UPROPERTY(EditDefaultsOnly, Instanced, Meta = (EditInline, Categories = "Equipment"))
	TObjectPtr<UKendalEquipmentData> EquipmentData;
};
