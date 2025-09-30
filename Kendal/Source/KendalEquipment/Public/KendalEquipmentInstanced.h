// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KendalEquipmentInstanced.generated.h"

class USphereComponent;
class UPaperSpriteComponent;
/*
 * Instanced Actor for an equipment item, this would be the item found on the floor in a world waiting to be picked up.
 */
UCLASS()
class KENDALEQUIPMENT_API AKendalEquipmentInstanced : public AActor
{
	GENERATED_BODY()

public:
	AKendalEquipmentInstanced();

	virtual void BeginPlay() override;
	virtual	void Tick(float DeltaTime) override;

	void InitialiseInWorld(const FVector& WorldPosition, const FName& InItemId);

private:
	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
	FName ItemId = NAME_None;

	UPROPERTY(VisibleAnywhere, Category = "Sprite")
	TObjectPtr<UPaperSpriteComponent> SpriteComponent;

	UPROPERTY(VisibleAnywhere, Category = "Collision")
	TObjectPtr<USphereComponent> SphereCollisionComponent { nullptr };

	bool bIsActive = false;

	float CurveTime = 0.0;

	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
	float CurveScaleFactor = 200.0f;
};
