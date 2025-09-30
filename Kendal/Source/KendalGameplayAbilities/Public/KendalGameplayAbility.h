// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"

#include "KendalGameplayAbility.generated.h"

/**
 * EKendalAbilityActivationPolicy
 *
 *	Defines how an ability is meant to activate.
 */
UENUM(BlueprintType)
enum class EKendalAbilityActivationPolicy : uint8
{
	// Try to activate the ability when the input is triggered.
	OnInputTriggered,

	// Try to activate the ability when the input is released.
	OnInputReleased,

	// Try to activate the ability when an avatar is assigned.
	OnSpawn
};

/**
 * Base Class for Kendal Gameplay Abilities
 */
UCLASS(abstract)
class KENDALGAMEPLAYABILITIES_API UKendalGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	EKendalAbilityActivationPolicy GetActivationPolicy() const { return ActivationPolicy; }

protected:
	// Defines how this ability is meant to activate.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability Activation")
	EKendalAbilityActivationPolicy ActivationPolicy;
};
