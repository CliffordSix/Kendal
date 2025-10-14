// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Engine/DeveloperSettings.h"

#include "KendalAbilitySettings.generated.h"

/**
 * Developer Settings related to Gameplay Abilities
 */
UCLASS(Config = Game, defaultconfig, meta = (DisplayName = "Kendal Ability Settings"))
class KENDALGAMEPLAYABILITIES_API UKendalAbilitySettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Gameplay Effects")
	static UGameplayEffect* GetInteractionGameplayEffect();

private:
	UPROPERTY(Config, EditAnywhere)
	TSubclassOf<UGameplayEffect> InteractionGameplayEffectClass;
};
