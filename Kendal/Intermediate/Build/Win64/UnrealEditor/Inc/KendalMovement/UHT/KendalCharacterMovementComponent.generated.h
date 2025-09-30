// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalCharacterMovementComponent.h"

#ifdef KENDALMOVEMENT_KendalCharacterMovementComponent_generated_h
#error "KendalCharacterMovementComponent.generated.h already included, missing '#pragma once' in KendalCharacterMovementComponent.h"
#endif
#define KENDALMOVEMENT_KendalCharacterMovementComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UKendalCharacterMovementComponent ****************************************
KENDALMOVEMENT_API UClass* Z_Construct_UClass_UKendalCharacterMovementComponent_NoRegister();

#define FID_Kendal_Source_KendalMovement_Public_KendalCharacterMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKendalCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UKendalCharacterMovementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALMOVEMENT_API UClass* Z_Construct_UClass_UKendalCharacterMovementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UKendalCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KendalMovement"), Z_Construct_UClass_UKendalCharacterMovementComponent_NoRegister) \
	DECLARE_SERIALIZER(UKendalCharacterMovementComponent)


#define FID_Kendal_Source_KendalMovement_Public_KendalCharacterMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKendalCharacterMovementComponent(UKendalCharacterMovementComponent&&) = delete; \
	UKendalCharacterMovementComponent(const UKendalCharacterMovementComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKendalCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKendalCharacterMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKendalCharacterMovementComponent) \
	NO_API virtual ~UKendalCharacterMovementComponent();


#define FID_Kendal_Source_KendalMovement_Public_KendalCharacterMovementComponent_h_12_PROLOG
#define FID_Kendal_Source_KendalMovement_Public_KendalCharacterMovementComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalMovement_Public_KendalCharacterMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalMovement_Public_KendalCharacterMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKendalCharacterMovementComponent;

// ********** End Class UKendalCharacterMovementComponent ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalMovement_Public_KendalCharacterMovementComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
