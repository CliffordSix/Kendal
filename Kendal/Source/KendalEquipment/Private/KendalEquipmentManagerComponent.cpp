// Fill out your copyright notice in the Description page of Project Settings.


#include "KendalEquipmentManagerComponent.h"

#include "Engine/AssetManager.h"

void UKendalEquipmentManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	const auto& AssetManager = UAssetManager::Get();

	TArray<FPrimaryAssetId> AssetIdList;
	AssetManager.GetPrimaryAssetIdList(FName("KendalEquipment"), AssetIdList);

	for (const auto& AssetId : AssetIdList)
	{
		UE_LOG(LogTemp, Display, TEXT("%s"), *AssetId.ToString());
	}
}
