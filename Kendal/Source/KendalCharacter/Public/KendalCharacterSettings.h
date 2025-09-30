// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DeveloperSettings.h"
#include "KendalCharacterSettings.generated.h"

/**
 * Config class storing user settings for the Character Module
 */
UCLASS(Config = Game, defaultconfig, meta = (DisplayName = "Kendal Character Settings"))
class KENDALCHARACTER_API UKendalCharacterSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Input Tags")
	static FGameplayTag GetMovementInputTag();

private:
	UPROPERTY(Config, EditAnywhere)
	FGameplayTag MovementInputTag;
};
