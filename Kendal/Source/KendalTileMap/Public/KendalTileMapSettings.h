// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "KendalTileMapSettings.generated.h"

UENUM(BlueprintType)
enum class EKendalBitFlags : uint8
{
	None = 0			UMETA(DisplayName = "None"),
	TopLeft = 1 << 0,
	MiddleLeft = 1 << 1,
	BottomLeft = 1 << 2,
	Top = 1 << 3,
	Bottom = 1 << 4,
	TopRight = 1 << 5,
	MiddleRight = 1 << 6,
	BottomRight = 1 << 7,
};

ENUM_RANGE_BY_COUNT(EKendalBitFlags, EKendalBitFlags::BottomRight)

/**
 * Developer Settings Class for the tile Map Module
 */
UCLASS(Config = Game, defaultconfig, meta = (DisplayName = "Kendal Tile Map Settings"))
class KENDALTILEMAP_API UKendalTileMapSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "TileMap")
	static TMap<uint8, int32> GetTileBitFlagMapping();

	UFUNCTION(BlueprintCallable, Category = Sprite)
	static FSoftObjectPath GetTilledGroundTileSet();

	UFUNCTION(BlueprintCallable, Category = Sprite)
	static FSoftObjectPath GetInteractionTileSet();

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

private:
	UPROPERTY(Config, EditAnywhere)
	TMap<uint8, int32> TileBitFlagMapping;

	UPROPERTY(Config, EditAnywhere, Category=Sprite, meta=(AllowedClasses="PaperTileSet"))
	FSoftObjectPath TilledGroundTileSet;

	UPROPERTY(Config, EditAnywhere, Category=Sprite, meta=(AllowedClasses="PaperTileSet"))
	FSoftObjectPath InteractionTileSet;
};
