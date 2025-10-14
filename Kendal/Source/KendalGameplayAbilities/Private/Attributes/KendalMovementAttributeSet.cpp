// Fill out your copyright notice in the Description page of Project Settings.

#include "Attributes/KendalMovementAttributeSet.h"

#include "Net/UnrealNetwork.h"

void UKendalMovementAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UKendalMovementAttributeSet, MaxWalkSpeed, COND_None, REPNOTIFY_Always);
}

void UKendalMovementAttributeSet::OnRep_MaxWalkSpeed(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UKendalMovementAttributeSet, MaxWalkSpeed, OldValue);
}
