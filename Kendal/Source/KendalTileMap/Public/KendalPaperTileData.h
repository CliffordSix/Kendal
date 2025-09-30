
#pragma once

#include "PaperTileDataAsset.h"

#include "KendalPaperTileData.generated.h"

/*
 * Flags for a Kendal Tile interactable state. Sets if a tile can be interacted with in a specific manner
 */
UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EKendalPaperTileInteractionFlags : uint8
{
	None = 0 UMETA(Hidden),
	Tillable = 1 << 0,
	Mineable = 1 << 1,
	Choppable = 1 << 2,
	Waterable = 1 << 3,
};

/*
 * Inherited struct which populates data about Kendal Paper 2D tiles.
 * This is information that isn't relevant to the regular paper 2D system, such
 * as Tile interaction data or state.
 */
USTRUCT(BlueprintType)
struct KENDALTILEMAP_API FKendalPaperTileData : public FPaperTileData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Bitmask, BitmaskEnum = EKendalPaperTileInteractionFlags))
	int32 InteractionFlags = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, int32> AdjacentTileMapping;
};
