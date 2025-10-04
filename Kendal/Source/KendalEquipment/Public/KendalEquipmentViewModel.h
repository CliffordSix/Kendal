// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KendalEquipmentManagerComponent.h"
#include "MVVMViewModelBase.h"
#include "KendalEquipmentViewModel.generated.h"

class UKendalEquipmentData;

/**
 * Equipment ViewModel, listens to the users inventory changes.
 */
UCLASS()
class KENDALEQUIPMENT_API UKendalEquipmentViewModel : public UMVVMViewModelBase
{
	GENERATED_BODY()

public:
	void AddEquipmentItem(UKendalEquipmentData* Item);
	void RemoveEquipmentItem(const UKendalEquipmentData& Item);

private:
	UPROPERTY(BlueprintReadOnly, FieldNotify, meta=(AllowPrivateAccess))
	TArray<UKendalEquipmentData*> EquipmentItems;
};
