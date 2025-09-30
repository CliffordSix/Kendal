// Fill out your copyright notice in the Description page of Project Settings.


#include "KendalInputComponent.h"

UKendalInputComponent::UKendalInputComponent(const FObjectInitializer& ObjectInitializer)
{
}

void UKendalInputComponent::AddInputMappings(const UKendalInputConfig* InputConfig,
                                             UEnhancedInputLocalPlayerSubsystem* InputSubsystem) const
{
}

void UKendalInputComponent::RemoveInputMappings(const UKendalInputConfig* InputConfig,
	UEnhancedInputLocalPlayerSubsystem* InputSubsystem) const
{
}

void UKendalInputComponent::RemoveBinds(TArray<uint32>& BindHandles)
{
	for (uint32 Handle : BindHandles)
	{
		RemoveBindingByHandle(Handle);
	}
	BindHandles.Reset();
}
