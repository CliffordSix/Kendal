// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "KendalEquipmentDataTable.generated.h"

class UKendalEquipmentData;

/*
 * Data Table for Equipment Data
 */
USTRUCT(BlueprintType)
struct FKendalEquipmentDataRow : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UKendalEquipmentData> EquipmentData;
};