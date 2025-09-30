// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnComponent.h"

#include "KendalEquipmentManagerComponent.generated.h"

/*
 * Pawn Component used to manage equipment for a character. The intention is for players but lets not rule
 * out using this on NPCs
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class KENDALEQUIPMENT_API UKendalEquipmentManagerComponent : public UPawnComponent
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
};
