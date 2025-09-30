// Fill out your copyright notice in the Description page of Project Settings.


#include "KendalPlayerController.h"

#include "KendalPlayerState.h"
#include "AbilitySystemComponent/KendalAbilitySystemComponent.h"
#include "KendalCamera/Public/KendalCameraManager.h"

AKendalPlayerController::AKendalPlayerController()
{
	PlayerCameraManagerClass = AKendalCameraManager::StaticClass();
}

UKendalAbilitySystemComponent* AKendalPlayerController::GetAbilitySystemComponent() const
{
	const AKendalPlayerState* KendalPlayerState = GetPlayerState<AKendalPlayerState>();
	return (IsValid(KendalPlayerState) ? KendalPlayerState->GetAbilitySystemComponent() : nullptr);
}

void AKendalPlayerController::PostProcessInput(const float DeltaTime, const bool bGamePaused)
{
	if (UKendalAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponent())
	{
		AbilitySystemComponent->ProcessAbilityInput();
	}

	Super::PostProcessInput(DeltaTime, bGamePaused);
}
