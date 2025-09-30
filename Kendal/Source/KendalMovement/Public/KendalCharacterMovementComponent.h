// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "KendalCharacterMovementComponent.generated.h"

/*
 * Extends Charactermovement component to better accomodate a top down 2d character
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class KENDALMOVEMENT_API UKendalCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UKendalCharacterMovementComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//Overriden to return false as our character cannot fall
	virtual bool IsFalling() const override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
