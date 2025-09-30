// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "KendalTileMapActorPositionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UKendalTileMapActorPositionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Interface that can be used to get the tile position of an actor without needing to access that actor directly
 */
class KENDALTILEMAPACTORINTERFACE_API IKendalTileMapActorPositionInterface
{
	GENERATED_BODY()

public:
	virtual FVector2D GetTileMapCoordinates() const {return FVector2D::ZeroVector;};
};
