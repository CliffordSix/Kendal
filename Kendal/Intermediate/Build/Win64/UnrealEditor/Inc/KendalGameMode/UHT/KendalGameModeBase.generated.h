// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalGameModeBase.h"

#ifdef KENDALGAMEMODE_KendalGameModeBase_generated_h
#error "KendalGameModeBase.generated.h already included, missing '#pragma once' in KendalGameModeBase.h"
#endif
#define KENDALGAMEMODE_KendalGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AKendalGameModeBase ******************************************************
#define FID_Kendal_Source_KendalGameMode_Public_KendalGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnLoot);


KENDALGAMEMODE_API UClass* Z_Construct_UClass_AKendalGameModeBase_NoRegister();

#define FID_Kendal_Source_KendalGameMode_Public_KendalGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKendalGameModeBase(); \
	friend struct Z_Construct_UClass_AKendalGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALGAMEMODE_API UClass* Z_Construct_UClass_AKendalGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AKendalGameModeBase, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/KendalGameMode"), Z_Construct_UClass_AKendalGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AKendalGameModeBase)


#define FID_Kendal_Source_KendalGameMode_Public_KendalGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AKendalGameModeBase(AKendalGameModeBase&&) = delete; \
	AKendalGameModeBase(const AKendalGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKendalGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKendalGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKendalGameModeBase) \
	NO_API virtual ~AKendalGameModeBase();


#define FID_Kendal_Source_KendalGameMode_Public_KendalGameModeBase_h_12_PROLOG
#define FID_Kendal_Source_KendalGameMode_Public_KendalGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalGameMode_Public_KendalGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalGameMode_Public_KendalGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalGameMode_Public_KendalGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AKendalGameModeBase;

// ********** End Class AKendalGameModeBase ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalGameMode_Public_KendalGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
