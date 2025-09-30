// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalInputComponent.h"

#ifdef INPUT_KendalInputComponent_generated_h
#error "KendalInputComponent.generated.h already included, missing '#pragma once' in KendalInputComponent.h"
#endif
#define INPUT_KendalInputComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UKendalInputComponent ****************************************************
INPUT_API UClass* Z_Construct_UClass_UKendalInputComponent_NoRegister();

#define FID_Kendal_Source_Input_Public_KendalInputComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKendalInputComponent(); \
	friend struct Z_Construct_UClass_UKendalInputComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INPUT_API UClass* Z_Construct_UClass_UKendalInputComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UKendalInputComponent, UEnhancedInputComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Input"), Z_Construct_UClass_UKendalInputComponent_NoRegister) \
	DECLARE_SERIALIZER(UKendalInputComponent)


#define FID_Kendal_Source_Input_Public_KendalInputComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKendalInputComponent(UKendalInputComponent&&) = delete; \
	UKendalInputComponent(const UKendalInputComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKendalInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKendalInputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKendalInputComponent) \
	NO_API virtual ~UKendalInputComponent();


#define FID_Kendal_Source_Input_Public_KendalInputComponent_h_14_PROLOG
#define FID_Kendal_Source_Input_Public_KendalInputComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_Input_Public_KendalInputComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_Input_Public_KendalInputComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKendalInputComponent;

// ********** End Class UKendalInputComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_Input_Public_KendalInputComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
