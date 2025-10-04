// Fill out your copyright notice in the Description page of Project Settings.

#include "KendalEquipmentViewModel.h"

void UKendalEquipmentViewModel::AddEquipmentItem(UKendalEquipmentData* Item)
{
	EquipmentItems.Add(Item);
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(EquipmentItems);
}

void UKendalEquipmentViewModel::RemoveEquipmentItem(const UKendalEquipmentData& Item)
{
}
