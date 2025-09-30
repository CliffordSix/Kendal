// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperTileMap.h"
#include "KendalTileMap.generated.h"

/**
 * Kendal Specific child of the Paper2D tile map. Contains expanded functionality on the original system
 */
UCLASS()
class KENDALTILEMAP_API UKendalTileMap : public UPaperTileMap
{
	GENERATED_BODY()

public:
	// Mapping of materials to layers allowing for more flexible shaders on tilemaps
	UPROPERTY(Category=Setup, EditAnywhere, BlueprintReadOnly)
	TArray<TObjectPtr<UMaterialInterface>> LayerMaterials;
};
