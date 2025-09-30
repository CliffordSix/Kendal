// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "KendalCameraManager.generated.h"

/**
 * Camera Manager class for Kendal Cameras
 */
UCLASS()
class KENDALCAMERA_API AKendalCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()

public:
	virtual void DoUpdateCamera(float DeltaTime) override;
};
