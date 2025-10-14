// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AbilitySystemComponent.h"
#include "CoreMinimal.h"
#include "KendalAttributeSet.h"

#include "KendalMovementAttributeSet.generated.h"

struct FGameplayAttributeData;

/**
 * Kendal Movement Attributes, used to drive values like walk speed
 */
UCLASS()
class KENDALGAMEPLAYABILITIES_API UKendalMovementAttributeSet : public UKendalAttributeSet
{
	GENERATED_BODY()

public:
	ATTRIBUTE_ACCESSORS(UKendalMovementAttributeSet, MaxWalkSpeed);

private:
	UFUNCTION()
	void OnRep_MaxWalkSpeed(const FGameplayAttributeData& OldValue);

	// Max Walk Speed Attribute
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxWalkSpeed, Category = "Kendal|Movement", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxWalkSpeed;
};
