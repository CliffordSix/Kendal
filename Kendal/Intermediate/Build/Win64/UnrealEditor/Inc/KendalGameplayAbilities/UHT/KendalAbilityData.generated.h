// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/KendalAbilityData.h"

#ifdef KENDALGAMEPLAYABILITIES_KendalAbilityData_generated_h
#error "KendalAbilityData.generated.h already included, missing '#pragma once' in KendalAbilityData.h"
#endif
#define KENDALGAMEPLAYABILITIES_KendalAbilityData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FKendalAbilityData_GameplayAbility ********************************
#define FID_Kendal_Source_KendalGameplayAbilities_Public_Data_KendalAbilityData_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility_Statics; \
	KENDALGAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


struct FKendalAbilityData_GameplayAbility;
// ********** End ScriptStruct FKendalAbilityData_GameplayAbility **********************************

// ********** Begin Class UKendalAbilityData *******************************************************
KENDALGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UKendalAbilityData_NoRegister();

#define FID_Kendal_Source_KendalGameplayAbilities_Public_Data_KendalAbilityData_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKendalAbilityData(); \
	friend struct Z_Construct_UClass_UKendalAbilityData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UKendalAbilityData_NoRegister(); \
public: \
	DECLARE_CLASS2(UKendalAbilityData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KendalGameplayAbilities"), Z_Construct_UClass_UKendalAbilityData_NoRegister) \
	DECLARE_SERIALIZER(UKendalAbilityData)


#define FID_Kendal_Source_KendalGameplayAbilities_Public_Data_KendalAbilityData_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKendalAbilityData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKendalAbilityData(UKendalAbilityData&&) = delete; \
	UKendalAbilityData(const UKendalAbilityData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKendalAbilityData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKendalAbilityData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKendalAbilityData) \
	NO_API virtual ~UKendalAbilityData();


#define FID_Kendal_Source_KendalGameplayAbilities_Public_Data_KendalAbilityData_h_30_PROLOG
#define FID_Kendal_Source_KendalGameplayAbilities_Public_Data_KendalAbilityData_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalGameplayAbilities_Public_Data_KendalAbilityData_h_33_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalGameplayAbilities_Public_Data_KendalAbilityData_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKendalAbilityData;

// ********** End Class UKendalAbilityData *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalGameplayAbilities_Public_Data_KendalAbilityData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
