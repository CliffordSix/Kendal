// Fill out your copyright notice in the Description page of Project Settings.


#include "KendalPlayerCharacter.h"

#include "KendalInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "KendalCharacterSettings.h"
#include "KendalEquipmentManagerComponent.h"
#include "KendalMapManagementSubsystem.h"
#include "KendalPlayerState.h"
#include "PaperZDAnimationComponent.h"
#include "AbilitySystemComponent/KendalAbilitySystemComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/LocalPlayer.h"
#include "Engine/World.h"
#include "GameFramework/SpringArmComponent.h"

AKendalPlayerCharacter::AKendalPlayerCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.DoNotCreateDefaultSubobject(ACharacter::CapsuleComponentName))
{
	CameraSpringArm = CreateDefaultSubobject<USpringArmComponent>("Camera Spring Arm Component");
	if (IsValid(CameraSpringArm))
	{
		CameraSpringArm->SetupAttachment(RootComponent);
		CameraSpringArm->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

		CameraComponent = CreateDefaultSubobject<UCameraComponent>("Camera Component");
		if (IsValid(CameraComponent))
		{
			CameraComponent->SetupAttachment(CameraSpringArm.Get());
		}
	}

	AnimationComponent = CreateDefaultSubobject<UPaperZDAnimationComponent>("Animation Component");

	InteractionComponent = CreateDefaultSubobject<UKendalInteractionComponent>("Interaction Component");

	GetCapsuleComponent()->SetEnableGravity(false);

	EquipmentComponent = CreateDefaultSubobject<UKendalEquipmentManagerComponent>(TEXT("EquipmentManagerComponent"));
	EquipmentComponent->SetIsReplicated(true);
}

void AKendalPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//TODO Migrate this content to a separate class which handles input management
	UKendalInputComponent* KendalInputComponent = Cast<UKendalInputComponent>(PlayerInputComponent);
	if (!ensure(IsValid(KendalInputComponent) || IsValid(InputConfig)))
	{
		return;
	}

	// This is where we actually bind and input action to a gameplay tag, which means that Gameplay Ability Blueprints will
	// be triggered directly by these input actions Triggered events. 
	TArray<uint32> BindHandles;
	KendalInputComponent->BindAbilityActions(
		InputConfig,
		this,
		&ThisClass::Input_AbilityInputTagPressed,
		&ThisClass::Input_AbilityInputTagReleased,
		BindHandles);

	KendalInputComponent->BindNativeAction(
		InputConfig,
		UKendalCharacterSettings::GetMovementInputTag(),
		ETriggerEvent::Triggered,
		this,
		&ThisClass::Move,
		true
	);

	KendalInputComponent->BindNativeAction(
		InputConfig,
		UKendalCharacterSettings::GetQuickSelectionInputTag(),
		ETriggerEvent::Triggered,
		this,
		&ThisClass::ModifyQuickSelect,
		true
	);
}

void AKendalPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(RootComponent))
	{
		RootComponent->TransformUpdated.AddUObject(this, &ThisClass::OnTransformUpdated);
	}

	//Is not locally controlled if controller is invalid
	if (!IsValid(Controller))
	{
		return;
	}

	const APlayerController* PlayerController = CastChecked<APlayerController>(Controller);
	if (!ensure(IsValid(PlayerController)))
	{
		return;
	}

	const ULocalPlayer* LocalPlayer = PlayerController->GetLocalPlayer();
	if (!ensure(IsValid(LocalPlayer)))
	{
		return;
	}

	auto* InputSubsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	if (!ensure(IsValid(InputSubsystem)) || !ensure(IsValid(DefaultMappingContext)))
	{
		return;
	}

	InputSubsystem->AddMappingContext(DefaultMappingContext, 1.0f);
}

void AKendalPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AKendalPlayerCharacter::OnTransformUpdated(USceneComponent* UpdatedComponent,
	EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{
	const UWorld* World = GetWorld();
	if (!ensure(IsValid(World)))
	{
		return;
	}

	const auto* MapSubsystem = World->GetSubsystem<UKendalMapManagementSubsystem>();
	if (!IsValid(MapSubsystem))
	{
		return;
	}

	int32 X;
	int32 Y;
	MapSubsystem->GetTileCoordinatesFromWorldPosition(FVector2D(GetActorLocation().X, GetActorLocation().Y), X, Y);
	TileLocation = FVector2D(X, -Y);

	if (IsValid(InteractionComponent))
	{
		InteractionComponent->SetCurrentTile(TileLocation, LastFacingDirection);
	}
}

void AKendalPlayerCharacter::Move(const FInputActionValue& InputActionValue)
{
	const AController* OwningController = GetController();
	if (IsValid(OwningController))
	{
		FVector Value = InputActionValue.Get<FVector>();
		Value.Normalize();
		UE_LOG(LogTemp, Display, TEXT("InputActionValue %f, %f, %f"), Value.X, Value.Y, Value.Z);
		AddMovementInput(Value, 1.0f);

		if (Value.Length() > 0)
		{
			if (LastFacingDirection.X == Value.X && LastFacingDirection.Y == Value.Y)
			{
				return;
			}
			LastFacingDirection = FVector2D(Value.X, Value.Y);
		}
	}
}

void AKendalPlayerCharacter::ModifyQuickSelect(const FInputActionValue& InputActionValue)
{
	if (!IsValid(EquipmentComponent))
	{
		return;
	}

	const float Value = InputActionValue.Get<float>();
	if (Value > 0.0f)
	{
		EquipmentComponent->IncrementQuickSelectIndex();
	}
	else
	{
		EquipmentComponent->DecrementQuickSelectIndex();
	}
}

void AKendalPlayerCharacter::Input_AbilityInputTagPressed(const FGameplayTag InputTag)
{
	const auto* KendalPlayerState = GetPlayerState<AKendalPlayerState>();
	if (!IsValid(KendalPlayerState))
	{
		return;
	}

	auto* AbilitySystemComponent = KendalPlayerState->GetAbilitySystemComponent();
	if (!IsValid(AbilitySystemComponent))
	{
		return;
	}

	AbilitySystemComponent->AbilityInputTagPressed(InputTag);
}

void AKendalPlayerCharacter::Input_AbilityInputTagReleased(const FGameplayTag InputTag)
{
	const auto* KendalPlayerState = GetPlayerState<AKendalPlayerState>();
	if (!IsValid(KendalPlayerState))
	{
		return;
	}

	auto* AbilitySystemComponent = KendalPlayerState->GetAbilitySystemComponent();
	if (!IsValid(AbilitySystemComponent))
	{
		return;
	}

	AbilitySystemComponent->AbilityInputTagReleased(InputTag);
}
