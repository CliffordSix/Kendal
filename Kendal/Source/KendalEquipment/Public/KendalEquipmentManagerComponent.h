// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnComponent.h"

#include "KendalEquipmentManagerComponent.generated.h"

class UKendalEquipmentData;
class UKendalEquipmentViewModel;

USTRUCT(BlueprintType)
struct FKendalInventoryItem
{
	GENERATED_BODY()

	FKendalInventoryItem()
	{
		AssetId = FPrimaryAssetId();
		Quantity = 0;
	};

	FKendalInventoryItem(const FPrimaryAssetId& InAssetId, const int32 InQuantity)
	{
		AssetId = InAssetId;
		Quantity = InQuantity;
	}

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
	FPrimaryAssetId AssetId;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
	int32 Quantity;
};

/*
 * Pawn Component used to manage equipment for a character. The intention is for players but lets not rule
 * out using this on NPCs
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class KENDALEQUIPMENT_API UKendalEquipmentManagerComponent : public UPawnComponent
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	void AddInventoryItem(const FName& ItemId);

	void IncrementQuickSelectIndex();
	void DecrementQuickSelectIndex();

	int32 GetQuickSelectIndex() const { return QuickSelectIndex; }
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category="Components")
	TArray<UKendalEquipmentData*> Inventory;

private:
	void InitializeViewModel();

	TWeakObjectPtr<UKendalEquipmentViewModel> EquipmentViewModel;

	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
	int32 InventorySize = 8;

	//Index used for the QuickSelectionBar.
	int32 QuickSelectIndex = 0;
};
