// Fill out your copyright notice in the Description page of Project Settings.


#include "KendalEquipmentManagerComponent.h"

#include "KendalEquipmentDataAsset.h"
#include "KendalEquipmentViewModel.h"
#include "MVVMGameSubsystem.h"
#include "AssetRegistry/AssetData.h"
#include "Types/MVVMViewModelCollection.h"
#include "Types/MVVMViewModelContext.h"

#include "Engine/AssetManager.h"
#include "Engine/Engine.h"
#include "Engine/GameInstance.h"

void UKendalEquipmentManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	InitializeViewModel();
}

void UKendalEquipmentManagerComponent::AddInventoryItem(const FName& ItemId)
{
	const auto& AssetManager = UAssetManager::Get();

	FAssetData Data;
	AssetManager.GetPrimaryAssetData(FPrimaryAssetId("KendalEquipment", ItemId), Data);

	const UKendalEquipmentDataAsset* Object = Cast<UKendalEquipmentDataAsset>(Data.GetAsset());
	UKendalEquipmentData* Item = Object->EquipmentData;
	Inventory.Add(Item);

	if (EquipmentViewModel.IsValid())
	{
		EquipmentViewModel->AddEquipmentItem(Item);
	}
}

void UKendalEquipmentManagerComponent::IncrementQuickSelectIndex()
{
	QuickSelectIndex++;
	if (QuickSelectIndex > 9)
	{
		QuickSelectIndex = 0;
	}

	if (EquipmentViewModel.IsValid())
	{
		EquipmentViewModel->SetQuickSelectIndex(QuickSelectIndex);
	}
}

void UKendalEquipmentManagerComponent::DecrementQuickSelectIndex()
{
	QuickSelectIndex--;
	if (QuickSelectIndex < 0)
	{
		QuickSelectIndex = 9;
	}

	if (EquipmentViewModel.IsValid())
	{
		EquipmentViewModel->SetQuickSelectIndex(QuickSelectIndex);
	}
}

void UKendalEquipmentManagerComponent::InitializeViewModel()
{
	const UGameInstance* GameInstance = GetWorld()->GetGameInstance();
	if (!IsValid(GameInstance))
	{
		return;
	}

	const UMVVMGameSubsystem* ViewModelSubsystem = GameInstance->GetSubsystem<UMVVMGameSubsystem>();
	check(ViewModelSubsystem)

	UMVVMViewModelCollectionObject* GlobalViewModelCollection = ViewModelSubsystem->GetViewModelCollection();
	if (!ensure(IsValid(GlobalViewModelCollection)))
	{
		return;
	}

	EquipmentViewModel = NewObject<UKendalEquipmentViewModel>();
	FMVVMViewModelContext EquipmentViewModelContext;
	EquipmentViewModelContext.ContextClass = UKendalEquipmentViewModel::StaticClass();
	EquipmentViewModelContext.ContextName = "Equipment";
	if(EquipmentViewModelContext.IsValid())
	{
		GlobalViewModelCollection->AddViewModelInstance(EquipmentViewModelContext, EquipmentViewModel.Get());
	}
}
