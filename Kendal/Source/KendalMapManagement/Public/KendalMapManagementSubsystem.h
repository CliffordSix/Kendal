// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "KendalMapManagementSubsystem.generated.h"

enum class EKendalPaperTileInteractionFlags : uint8;
class AKendalTileMapActor;

/**
 * World Subsystem that can generate and pull information from its tile map actor
 */
UCLASS(Blueprintable, Abstract)
class KENDALMAPMANAGEMENT_API UKendalMapManagementSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

	virtual bool IsTickable() const override;
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
	void GetTileCoordinatesFromWorldPosition(const FVector2D& Location, int32& OutX, int32& OutY) const;
	FVector2D GetWorldPositionFromTileCoordinates(const FVector2D& Coordinates) const;
	bool IsTileInteractable(const FVector2D& Coordinates, const EKendalPaperTileInteractionFlags& InteractionFlags) const;

	UFUNCTION(Exec)
	void UpdateTile(const int32 X, const int32 Y, const int32 TileIndex) const;

	void SetTargetTile(const int32 X, const int32 Y, const FVector2D PreviousTarget) const;

	UPROPERTY(EditAnywhere, Category=TileMap)
	TSubclassOf<AKendalTileMapActor> TileMapActorClass;

	UPROPERTY(Transient)
	TObjectPtr<AKendalTileMapActor> TileMapActor;
};
