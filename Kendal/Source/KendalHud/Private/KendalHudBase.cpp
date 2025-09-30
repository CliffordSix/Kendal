// Fill out your copyright notice in the Description page of Project Settings.


#include "KendalHudBase.h"

#include "Blueprint/UserWidget.h"

void AKendalHudBase::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PC = Cast<APlayerController>(GetOwner());

	if (!IsValid(PC))
	{
		return;
	}

	HudWidget = CreateWidget<UUserWidget>(PC, HudWidgetClass);

	if (!IsValid(HudWidget))
	{
		return;
	}

	HudWidget->AddToViewport();
}

void AKendalHudBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (!IsValid(HudWidget))
	{
		return;
	}

	HudWidget->RemoveFromParent();
}
