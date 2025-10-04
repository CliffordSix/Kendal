// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KendalInteractionComponent.h"
#include "KendalGameplayAbility.h"
#include "KendalInteractAbility.generated.h"

class UPaperZDAnimSequence;
/**
 * Base Ability used to drive interactions with the world for a player
 */
UCLASS()
class KENDALGAMEPLAYABILITIES_API UKendalInteractAbility : public UKendalGameplayAbility
{
	GENERATED_BODY()

public:
	virtual void PreActivate(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, FOnGameplayAbilityEnded::FDelegate* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData = nullptr) override;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	//TODO This is temporary or should be used as a fallback animation. The actual animation should be driven by the current inventory item selected
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	TObjectPtr<UPaperZDAnimSequence> InteractionAnimation;

private:
	UPROPERTY()
	TWeakObjectPtr<UKendalInteractionComponent> InteractionComponent {nullptr};
};
