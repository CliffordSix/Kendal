// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "KendalHudBase.generated.h"

/**
 * Kendal Specific HUD parent class
 */
UCLASS()
class KENDALHUD_API AKendalHudBase : public AHUD
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> HudWidgetClass;

private:
	UPROPERTY(Transient)
	TObjectPtr<UUserWidget> HudWidget;
};
