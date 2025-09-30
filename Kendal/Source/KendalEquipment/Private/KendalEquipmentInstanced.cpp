// Fill out your copyright notice in the Description page of Project Settings.


#include "KendalEquipmentInstanced.h"

#include "KendalEquipmentDataAsset.h"
#include "PaperSpriteComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/AssetManager.h"

AKendalEquipmentInstanced::AKendalEquipmentInstanced()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = false;

	SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>("Sprite Component");
	SphereCollisionComponent = CreateDefaultSubobject<USphereComponent>("Pickup Trigger Volume");
	if (IsValid(SpriteComponent))
	{
		SphereCollisionComponent->SetupAttachment(RootComponent);
		SphereCollisionComponent->SetSphereRadius(10);
	}
}

void AKendalEquipmentInstanced::BeginPlay()
{
	Super::BeginPlay();
}

void AKendalEquipmentInstanced::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CurveTime += DeltaTime * CurveScaleFactor;
	if (CurveTime > 360.0f)
	{
		CurveTime -= 360.0f;
	}

	constexpr float DegToRad = PI/180.0f;
	const float SinCurveMappedValue = FMath::Sin(CurveTime * DegToRad);
	SetActorLocation(GetActorLocation() + (FVector::RightVector * SinCurveMappedValue));
}

void AKendalEquipmentInstanced::InitialiseInWorld(const FVector& WorldPosition, const FName& InItemId)
{
	const auto& AssetManager = UAssetManager::Get();

	ItemId = InItemId;
	if (!AssetManager.IsInitialized() || ItemId == NAME_None || !IsValid(SpriteComponent))
	{
		return;
	}

	const FPrimaryAssetId AssetId = FPrimaryAssetId("KendalEquipment", ItemId);
	FAssetData OutData;
	AssetManager.GetPrimaryAssetData(AssetId, OutData);

	const UKendalEquipmentDataAsset* EquipmentData = Cast<UKendalEquipmentDataAsset>(OutData.GetAsset());
	if (EquipmentData == nullptr)
	{
		return;
	}

	SpriteComponent->SetSprite(EquipmentData->EquipmentData->GetSprite());
	SetActorLocationAndRotation(WorldPosition, FRotator(0.0f, 180.0f, 90.0f));

	bIsActive = true;

	SpriteComponent->SetWorldScale3D(FVector::OneVector * EquipmentData->EquipmentData->GetDrawScale());
	SetActorTickEnabled(bIsActive);
}
