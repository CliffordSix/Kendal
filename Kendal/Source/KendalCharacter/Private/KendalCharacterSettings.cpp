// Fill out your copyright notice in the Description page of Project Settings.


#include "KendalCharacterSettings.h"

FGameplayTag UKendalCharacterSettings::GetMovementInputTag()
{
	const UKendalCharacterSettings* Settings = GetMutableDefault<UKendalCharacterSettings>();
	return Settings->MovementInputTag;
}

FGameplayTag UKendalCharacterSettings::GetQuickSelectionInputTag()
{
	const UKendalCharacterSettings* Settings = GetMutableDefault<UKendalCharacterSettings>();
	return Settings->QuickSelectionInputTag;
}
