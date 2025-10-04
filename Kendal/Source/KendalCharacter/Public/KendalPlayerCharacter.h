// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KendalInputConfig.h"
#include "KendalInteractionComponent.h"
#include "KendalTileMapActorPositionInterface.h"
#include "PaperCharacter.h"
#include "KendalPlayerCharacter.generated.h"

class UKendalEquipmentManagerComponent;
class UPaperZDAnimationComponent;
class UKendalAbilitySystemComponent;
class UCameraComponent;
class UInputMappingContext;
class USpringArmComponent;

/**
 * Base class for a player character
 */
UCLASS()
class KENDALCHARACTER_API AKendalPlayerCharacter : public APaperCharacter,
												   public IKendalTileMapActorPositionInterface
{
	GENERATED_BODY()

public:
	explicit AKendalPlayerCharacter(const FObjectInitializer& ObjectInitializer);

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	virtual FVector2D GetTileMapCoordinates() const override { return TileLocation; }

	UFUNCTION(BlueprintCallable)
	FVector2D GetLastFacingDirection() const { return LastFacingDirection; }

	UKendalEquipmentManagerComponent* GetEquipmentComponent() const { return EquipmentComponent.Get(); }

protected:
	virtual void OnTransformUpdated(USceneComponent* UpdatedComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport);
	virtual void Move(const FInputActionValue& InputActionValue);
	virtual void ModifyQuickSelect(const FInputActionValue& InputActionValue);

private:
	//TODO Move to a differentComponent
	void Input_AbilityInputTagPressed(const FGameplayTag InputTag);
	void Input_AbilityInputTagReleased(const FGameplayTag InputTag);

	UPROPERTY(Transient)
	FVector2D TileLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TObjectPtr<USpringArmComponent> CameraSpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TObjectPtr<UCameraComponent> CameraComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TObjectPtr<UPaperZDAnimationComponent> AnimationComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TObjectPtr<UKendalInteractionComponent> InteractionComponent;

	UPROPERTY(VisibleAnywhere, Category = "Equipment")
	TObjectPtr<UKendalEquipmentManagerComponent> EquipmentComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputSystem|Input", meta=(AllowPrivateAccess=true))
	TObjectPtr<UKendalInputConfig> InputConfig;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputSystem|Input", meta=(AllowPrivateAccess=true))
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	//Caches the last "valid" movement direction. It should never be zero
	UPROPERTY(Transient)
	FVector2D LastFacingDirection = FVector2D::ZeroVector;
};
