// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "KendalAbilityData.generated.h"

/*
 * Struct representing a Gameplay Ability to be granted 
 */
USTRUCT()
struct FKendalAbilityData_GameplayAbility
{
	GENERATED_BODY()

	//Gameplay Ability Class to use
	UPROPERTY(EditDefaultsOnly, Meta = (Categories = "Abilities"))
	TSubclassOf<class UKendalGameplayAbility> AbilityClass {nullptr};

	//Gameplay tag used for the input system to bind input to an Ability
	UPROPERTY(EditDefaultsOnly, Meta = (Categories = "Input.Action"))
	FGameplayTag InputTag;
};

/**
 * Data asset containing Kendal Gameplay Ability Data
 */
UCLASS()
class KENDALGAMEPLAYABILITIES_API UKendalAbilityData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Meta = (EditInline, Categories = "Abilities"))
	TArray<FKendalAbilityData_GameplayAbility> GameplayAbilities;
};
