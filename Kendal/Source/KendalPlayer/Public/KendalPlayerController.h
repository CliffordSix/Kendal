// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "KendalPlayerController.generated.h"

/**
 * Player Controller class for Kendal Pawns
 */
UCLASS()
class KENDALPLAYER_API AKendalPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AKendalPlayerController();

	UFUNCTION(BlueprintCallable, Category = "PlayerController")
	UKendalAbilitySystemComponent* GetAbilitySystemComponent() const;

	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;
};
