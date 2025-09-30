// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "KendalAbilitySystemComponent.generated.h"

/*
 * Base Ability System Component for Kendal Actors
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class KENDALGAMEPLAYABILITIES_API UKendalAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UKendalAbilitySystemComponent();

	virtual void AbilityInputTagPressed(const FGameplayTag& InputTag);
	virtual void AbilityInputTagReleased(const FGameplayTag& InputTag);

	virtual void ProcessAbilityInput();

protected:
	// Handles to abilities that had their input pressed this frame.
	TArray<FGameplayAbilitySpecHandle> InputPressedSpecHandles;

	// Handles to abilities that had their input released this frame.
	TArray<FGameplayAbilitySpecHandle> InputReleasedSpecHandles;
};
