// Fill out your copyright notice in the Description page of Project Settings.


#include "KendalAbilitySettings.h"

UGameplayEffect* UKendalAbilitySettings::GetInteractionGameplayEffect()
{
	const UKendalAbilitySettings* Settings = GetMutableDefault<UKendalAbilitySettings>();
	return Settings->InteractionGameplayEffectClass->GetDefaultObject<UGameplayEffect>();
}
