// Fill out your copyright notice in the Description page of Project Settings.


#include "KendalEquipmentDataAsset.h"

FPrimaryAssetId UKendalEquipmentDataAsset::GetPrimaryAssetId() const
{
	if (!IsValid(EquipmentData))
	{
		return FPrimaryAssetId();
	}

	return FPrimaryAssetId(FName("KendalEquipment"), EquipmentData->GetEquipmentName());
}
