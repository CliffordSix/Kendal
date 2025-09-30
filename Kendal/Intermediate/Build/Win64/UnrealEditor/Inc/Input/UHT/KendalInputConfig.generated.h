// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalInputConfig.h"

#ifdef INPUT_KendalInputConfig_generated_h
#error "KendalInputConfig.generated.h already included, missing '#pragma once' in KendalInputConfig.h"
#endif
#define INPUT_KendalInputConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UInputAction;
struct FGameplayTag;

// ********** Begin ScriptStruct FKendalInputAction ************************************************
#define FID_Kendal_Source_Input_Public_KendalInputConfig_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKendalInputAction_Statics; \
	INPUT_API static class UScriptStruct* StaticStruct();


struct FKendalInputAction;
// ********** End ScriptStruct FKendalInputAction **************************************************

// ********** Begin Class UKendalInputConfig *******************************************************
#define FID_Kendal_Source_Input_Public_KendalInputConfig_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindAbilityInputActionForTag); \
	DECLARE_FUNCTION(execFindNativeInputActionForTag);


INPUT_API UClass* Z_Construct_UClass_UKendalInputConfig_NoRegister();

#define FID_Kendal_Source_Input_Public_KendalInputConfig_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKendalInputConfig(); \
	friend struct Z_Construct_UClass_UKendalInputConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INPUT_API UClass* Z_Construct_UClass_UKendalInputConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UKendalInputConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Input"), Z_Construct_UClass_UKendalInputConfig_NoRegister) \
	DECLARE_SERIALIZER(UKendalInputConfig)


#define FID_Kendal_Source_Input_Public_KendalInputConfig_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKendalInputConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKendalInputConfig(UKendalInputConfig&&) = delete; \
	UKendalInputConfig(const UKendalInputConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKendalInputConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKendalInputConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKendalInputConfig) \
	NO_API virtual ~UKendalInputConfig();


#define FID_Kendal_Source_Input_Public_KendalInputConfig_h_29_PROLOG
#define FID_Kendal_Source_Input_Public_KendalInputConfig_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_Input_Public_KendalInputConfig_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kendal_Source_Input_Public_KendalInputConfig_h_32_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_Input_Public_KendalInputConfig_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKendalInputConfig;

// ********** End Class UKendalInputConfig *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_Input_Public_KendalInputConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
