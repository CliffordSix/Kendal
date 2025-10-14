// Fill out your copyright notice in the Description page of Project Settings.

#include "KendalPlayerState.h"

#include "KendalGameplayAbility.h"
#include "AbilitySystemComponent/KendalAbilitySystemComponent.h"
#include "Data/KendalAbilityData.h"

AKendalPlayerState::AKendalPlayerState()
{
	KendalAbilitySystemComponent = CreateDefaultSubobject<UKendalAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	KendalAbilitySystemComponent->SetIsReplicated(true);
}

void AKendalPlayerState::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (!ensure(IsValid(KendalAbilitySystemComponent)))
	{
		return;
	}

	auto* Pawn = GetPawn();

	if (!IsValid(Pawn))
	{
		OnPawnSet.AddDynamic(this, &ThisClass::PawnSet);
	}
	else
	{
		InitialiseAbilitySystemComponent(Pawn);
	}
}

void AKendalPlayerState::PawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn)
{
	InitialiseAbilitySystemComponent(NewPawn);
}

void AKendalPlayerState::InitialiseAbilitySystemComponent(APawn* Pawn)
{
	//GetPawn probably returns nullptr here. Lyra does this too but I've no idea why can't really gate this though otherwise we won't give abilities
	KendalAbilitySystemComponent->InitAbilityActorInfo(this, Pawn);

	if (GetNetMode() >= NM_Client)
	{
		return;
	}

	if (IsValid(DefaultAbilities))
	{
		// Grant the attribute sets.
		for (const auto& [AttributeSet, DefaultAttributeData] : DefaultAbilities->GameplayAttributes)
		{
			if (!IsValid(AttributeSet))
			{
				continue;
			}

			UAttributeSet* NewSet = NewObject<UAttributeSet>(KendalAbilitySystemComponent->GetOwner(), AttributeSet);
			KendalAbilitySystemComponent->AddAttributeSetSubobject(NewSet);

			NewSet->InitFromMetaDataTable(DefaultAttributeData);
		}

		for (const auto& [AbilityClass, InputTag] : DefaultAbilities->GameplayAbilities)
		{
			if (!IsValid(AbilityClass))
			{
				continue;
			}

			UKendalGameplayAbility* AbilityCDO = AbilityClass->GetDefaultObject<UKendalGameplayAbility>();

			FGameplayAbilitySpec AbilitySpec(AbilityCDO, 0);
			AbilitySpec.SourceObject = nullptr;
			AbilitySpec.GetDynamicSpecSourceTags().AddTag(InputTag);

			KendalAbilitySystemComponent->GiveAbility(AbilitySpec);
		}
	}
}
