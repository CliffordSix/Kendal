// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSprite.h"
#include "UObject/Object.h"
#include "KendalEquipmentData.generated.h"

/**
 * Kendal Equipment Data base class.
 */
UCLASS(EditInlineNew, DefaultToInstanced, CollapseCategories, DisplayName = "Single Item")
class KENDALEQUIPMENT_API UKendalEquipmentData : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION()
	FName GetEquipmentName() const { return EquipmentName; }

	UFUNCTION()
	UPaperSprite* GetSprite() const { return ItemSprite; }

	UFUNCTION()
	float GetDrawScale() const { return DrawScale; }

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess))
	FName EquipmentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess))
	TObjectPtr<UPaperSprite> ItemSprite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess))
	bool bIsUnique = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess))
	float DrawScale = 1.0f;
};

/*
 * Stackable Item root class
 */
UCLASS(DisplayName = "Stackable Item")
class KENDALEQUIPMENT_API UKendalEquipmentStackData : public UKendalEquipmentData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess))
	int32 DefaultStackSize = 1;
};
