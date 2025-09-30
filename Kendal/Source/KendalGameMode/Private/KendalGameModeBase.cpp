// Fill out your copyright notice in the Description page of Project Settings.


#include "KendalGameModeBase.h"

#include "KendalEquipment/Public/KendalEquipmentSubsystem.h"

AKendalGameModeBase::AKendalGameModeBase()
{
}

void AKendalGameModeBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void AKendalGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}

void AKendalGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AKendalGameModeBase::SpawnLoot(const int32 X, const int32 Y, const FName& InItemId)
{
	const auto* World = GetWorld();
	if (!IsValid(World))
	{
		return;
	}

	const auto EquipSubsystem = World->GetSubsystem<UKendalEquipmentSubsystem>();
	if (!IsValid(EquipSubsystem))
	{
		return;
	}

	EquipSubsystem->SpawnLootAtTile(X, Y, InItemId);
}
