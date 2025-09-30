// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KendalInteractionComponent.generated.h"

class UKendalMapManagementSubsystem;

/*
 * Interaction Component reads adjacent tiles to the player character to determine the "look at" tile
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class KENDALINTERACTION_API UKendalInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UKendalInteractionComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
						   FActorComponentTickFunction* ThisTickFunction) override;

	void SetCurrentTile(const FVector2D& InTileLocation, const FVector2D& AimDirection);
	void UpdateAdjacentTiles() const;
	void InteractTargetTile(const FVector2D& TargetTile) const;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(Transient)
	TWeakObjectPtr<UKendalMapManagementSubsystem> MapSubsystem = nullptr;

	UPROPERTY(Transient)
	FVector2D TileLocation = FVector2D::ZeroVector;

	//The last valid Interactable tile the owing actor has faced
	UPROPERTY(Transient)
	FVector2D PreviousTargetLocation = FVector2D::ZeroVector;
};
