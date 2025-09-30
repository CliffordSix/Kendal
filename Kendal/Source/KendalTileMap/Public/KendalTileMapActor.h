#pragma once

#include <PaperTileDataAsset.h>

#include "CoreMinimal.h"
#include "PaperTileLayer.h"
#include "GameFramework/Actor.h"
#include "KendalTileMapActor.generated.h"

class UPaperTileMapComponent;
class UKendalTileMap;
//class UKendalTileMapComponent;

/*
 * Actor Class which contains the current tilemap
 */
UCLASS()
class KENDALTILEMAP_API AKendalTileMapActor : public AActor
{
	GENERATED_BODY()

public:
	AKendalTileMapActor();

	FPaperTileInfo GetTileAtCoordinates(const FVector2D& Coordinates) const;
	void UpdateTile(int32 X, int32 Y, const bool bUpdateAdjacent = false);

	FInstancedStruct GetTileData(const FVector2D& Coordinates) const;

	void GetTileCoordinatesFromWorldPosition(const FVector2D& Location, int32& OutX, int32& OutY) const;
	FVector2D GetWorldPositionFromTileCoordinates(const FVector2D& Coordinates) const;
	void DrawDebug(const TOptional<FVector2D>& TargetPosition) const;
	//Sets the "target" tile on the Interaction layer this change is not replicated and only happens for the local player
	void SetTargetTile(const int32 X, const int32 Y, const FVector2D& PreviousTarget) const;

	void ClearTargetTile(const FVector2D& TargetTile) const;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(Category=TileMap, EditAnywhere)
	TObjectPtr<UPaperTileMap> ActiveTileMap;

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetTile(const int32 X, const int32 Y, const int32 TileIndex);

	static FString Debug_GetTileLocationString(const uint8 TileIndex);

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TObjectPtr<UPaperTileMapComponent> TileMapComponent;

	int32 BaseLayerIndex = 7;
	int32 InteractionLayerIndex = 0;
};
