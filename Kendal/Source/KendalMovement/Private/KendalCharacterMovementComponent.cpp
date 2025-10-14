// Fill out your copyright notice in the Description page of Project Settings.


#include "KendalCharacterMovementComponent.h"

#include "AttributeSet.h"
#include "AbilitySystemComponent/KendalAbilitySystemComponent.h"
#include "Attributes/KendalMovementAttributeSet.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerState.h"

UKendalCharacterMovementComponent::UKendalCharacterMovementComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UKendalCharacterMovementComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// Make sure that everything is still valid, and that we are allowed to move.
	if (!IsValid(PawnOwner))
	{
		return;
	}

	const auto* PlayerState = PawnOwner->GetPlayerState();
	if (!IsValid(PlayerState))
	{
		return;
	}

	auto* AbilitySystem = PlayerState->GetComponentByClass<UKendalAbilitySystemComponent>();
	if (IsValid(AbilitySystem))
	{
		bool bFound;
		AbilitySystem->GetGameplayAttributeValueChangeDelegate(UKendalMovementAttributeSet::GetMaxWalkSpeedAttribute()).AddUObject(this, &ThisClass::OnMaxWalkSpeedChanged);
		const auto MaxWalkSpeedValue = AbilitySystem->GetGameplayAttributeValue(UKendalMovementAttributeSet::GetMaxWalkSpeedAttribute(), bFound);
		if (bFound)
		{
			FOnAttributeChangeData Data;
			Data.NewValue = MaxWalkSpeedValue;
			Data.OldValue = MaxWalkSpeedValue;
			OnMaxWalkSpeedChanged(Data);
		}
	}
}

bool UKendalCharacterMovementComponent::IsFalling() const
{
	return Super::IsFalling();
}

void UKendalCharacterMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                                      FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
/*
	// Make sure that everything is still valid, and that we are allowed to move.
	if (!PawnOwner || !UpdatedComponent || ShouldSkipUpdate(DeltaTime))
	{
		return;
	}

	// Get (and then clear) the movement vector that we set in ACollidingPawn::Tick
	const FVector DesiredMovementThisFrame = ConsumeInputVector().GetClampedToMaxSize(1.0f) * DeltaTime * 150.0f;
	if (!DesiredMovementThisFrame.IsNearlyZero())
	{
		FHitResult Hit;
		SafeMoveUpdatedComponent(DesiredMovementThisFrame, UpdatedComponent->GetComponentRotation(), true, Hit);

		// If we bumped into something, try to slide along it
		if (Hit.IsValidBlockingHit())
		{
			SlideAlongSurface(DesiredMovementThisFrame, 1.f - Hit.Time, Hit.Normal, Hit, false);
		}
	}
	*/
}

void UKendalCharacterMovementComponent::OnMaxWalkSpeedChanged(const FOnAttributeChangeData& AttributeChangeData)
{
	MaxWalkSpeed = AttributeChangeData.NewValue;
}
