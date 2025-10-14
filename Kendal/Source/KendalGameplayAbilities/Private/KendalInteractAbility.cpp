// Fill out your copyright notice in the Description page of Project Settings.


#include "KendalInteractAbility.h"

#include "KendalAbilitySettings.h"
#include "PaperZDAnimationComponent.h"
#include "PaperZDAnimInstance.h"

#include "KendalTileMapActorPositionInterface.h"

void UKendalInteractAbility::PreActivate(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	FOnGameplayAbilityEnded::FDelegate* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData)
{
	Super::PreActivate(Handle, ActorInfo, ActivationInfo, OnGameplayAbilityEndedDelegate, TriggerEventData);

	if (ActorInfo == nullptr || !ActorInfo->OwnerActor.IsValid())
	{
		return;
	}

	const auto* OwningPawn = Cast<APawn>(ActorInfo->AvatarActor.Get());
	if (!IsValid(OwningPawn))
	{
		return;
	}

	InteractionComponent = OwningPawn->GetComponentByClass<UKendalInteractionComponent>();
}

void UKendalInteractAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                             const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                             const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	if (ActorInfo == nullptr || !ActorInfo->OwnerActor.IsValid() || !InteractionComponent.IsValid())
	{
		K2_EndAbility();
		return;
	}

	const auto* OwningPawn = Cast<APawn>(ActorInfo->AvatarActor.Get());
	if (!ensure(IsValid(OwningPawn)))
	{
		K2_EndAbility();
		return;
	}

	auto* PaperZDAnimationComponent = OwningPawn->GetComponentByClass<UPaperZDAnimationComponent>();
	if (IsValid(PaperZDAnimationComponent))
	{
		auto* AnimInstance = PaperZDAnimationComponent->GetSequencerAnimInstance();
		AnimInstance->PlayAnimationOverride(InteractionAnimation.Get());
	}

	const FVector LastControlInputVector = OwningPawn->GetLastMovementInputVector();
	const auto* ActorTileLocationInterface = Cast<IKendalTileMapActorPositionInterface>(OwningPawn);
	if (ActorTileLocationInterface == nullptr)
	{
		K2_EndAbility();
		return;
	}

	FVector2D TileLocation = ActorTileLocationInterface->GetTileMapCoordinates();
	TileLocation += FVector2D(FMath::CeilToInt(LastControlInputVector.X), FMath::CeilToInt(LastControlInputVector.Y));

	InteractionComponent->InteractTargetTile(TileLocation);

	UGameplayEffect* InteractionEffect = UKendalAbilitySettings::GetInteractionGameplayEffect();
	FGameplayEffectSpec* GESpec = new FGameplayEffectSpec(InteractionEffect, {}, 0.f);
	const float AnimationDuration = InteractionAnimation.Get()->GetTotalDuration();
	GESpec->SetByCallerTagMagnitudes.Add(FGameplayTag::RequestGameplayTag("SetByCaller.Effect.Duration"), AnimationDuration);
	ApplyGameplayEffectSpecToOwner(Handle, ActorInfo, ActivationInfo, FGameplayEffectSpecHandle(GESpec));

	K2_EndAbility();
}
