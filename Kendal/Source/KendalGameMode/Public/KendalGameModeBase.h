// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "KendalGameModeBase.generated.h"

/**
 * Base Game mode
 */
UCLASS()
class KENDALGAMEMODE_API AKendalGameModeBase : public AGameMode
{
	GENERATED_BODY()

public:
	AKendalGameModeBase();

	virtual void PostInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(Exec)
	void SpawnLoot(const int32 X, const int32 Y, const FName& InItemId = "TestItem");
};