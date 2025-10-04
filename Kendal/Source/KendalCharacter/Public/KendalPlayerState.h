// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"

#include "KendalPlayerState.generated.h"

class UKendalAbilityData;
class UKendalAbilitySystemComponent;

/**
 * Player State for Kendal Characters
 */
UCLASS()
class KENDALCHARACTER_API AKendalPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	AKendalPlayerState();

	virtual void PostInitializeComponents() override;

	UKendalAbilitySystemComponent* GetAbilitySystemComponent() const { return KendalAbilitySystemComponent.Get(); }

protected:
	UFUNCTION()
	void PawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn);

	virtual void InitialiseAbilitySystemComponent(APawn* Pawn);

private:
	UPROPERTY(VisibleAnywhere, Category = "Abilities")
	TObjectPtr<UKendalAbilitySystemComponent> KendalAbilitySystemComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Abilities", meta=(AllowPrivateAccess=true))
	TObjectPtr<UKendalAbilityData> DefaultAbilities;
};

