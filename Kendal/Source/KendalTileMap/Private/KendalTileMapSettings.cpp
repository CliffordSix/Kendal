// Fill out your copyright notice in the Description page of Project Settings.


#include "KendalTileMapSettings.h"

TMap<uint8, int32> UKendalTileMapSettings::GetTileBitFlagMapping()
{
	const UKendalTileMapSettings* Settings = GetMutableDefault<UKendalTileMapSettings>();
	return Settings->TileBitFlagMapping;
}

FSoftObjectPath UKendalTileMapSettings::GetTilledGroundTileSet()
{
	const UKendalTileMapSettings* Settings = GetMutableDefault<UKendalTileMapSettings>();
	return Settings->TilledGroundTileSet;
}

FSoftObjectPath UKendalTileMapSettings::GetInteractionTileSet()
{
	const UKendalTileMapSettings* Settings = GetMutableDefault<UKendalTileMapSettings>();
	return Settings->InteractionTileSet;
}

void UKendalTileMapSettings::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.Property == nullptr ||
		PropertyChangedEvent.Property->GetFName() != GET_MEMBER_NAME_CHECKED(UKendalTileMapSettings, TileBitFlagMapping) ||
		TileBitFlagMapping.IsEmpty())
	{
		return;
	}

	TileBitFlagMapping.KeySort([](const uint8 I, const uint8 J)
	{
		return I < J;
	});
}
