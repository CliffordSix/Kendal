// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalCharacterSettings.h"

#ifdef KENDALCHARACTER_KendalCharacterSettings_generated_h
#error "KendalCharacterSettings.generated.h already included, missing '#pragma once' in KendalCharacterSettings.h"
#endif
#define KENDALCHARACTER_KendalCharacterSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayTag;

// ********** Begin Class UKendalCharacterSettings *************************************************
#define FID_Kendal_Source_KendalCharacter_Public_KendalCharacterSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMovementInputTag);


KENDALCHARACTER_API UClass* Z_Construct_UClass_UKendalCharacterSettings_NoRegister();

#define FID_Kendal_Source_KendalCharacter_Public_KendalCharacterSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKendalCharacterSettings(); \
	friend struct Z_Construct_UClass_UKendalCharacterSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALCHARACTER_API UClass* Z_Construct_UClass_UKendalCharacterSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UKendalCharacterSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/KendalCharacter"), Z_Construct_UClass_UKendalCharacterSettings_NoRegister) \
	DECLARE_SERIALIZER(UKendalCharacterSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Kendal_Source_KendalCharacter_Public_KendalCharacterSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKendalCharacterSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKendalCharacterSettings(UKendalCharacterSettings&&) = delete; \
	UKendalCharacterSettings(const UKendalCharacterSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKendalCharacterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKendalCharacterSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKendalCharacterSettings) \
	NO_API virtual ~UKendalCharacterSettings();


#define FID_Kendal_Source_KendalCharacter_Public_KendalCharacterSettings_h_13_PROLOG
#define FID_Kendal_Source_KendalCharacter_Public_KendalCharacterSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalCharacter_Public_KendalCharacterSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalCharacter_Public_KendalCharacterSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalCharacter_Public_KendalCharacterSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKendalCharacterSettings;

// ********** End Class UKendalCharacterSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalCharacter_Public_KendalCharacterSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
