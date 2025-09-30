// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalPlayerState.h"

#ifdef KENDALCHARACTER_KendalPlayerState_generated_h
#error "KendalPlayerState.generated.h already included, missing '#pragma once' in KendalPlayerState.h"
#endif
#define KENDALCHARACTER_KendalPlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APawn;
class APlayerState;

// ********** Begin Class AKendalPlayerState *******************************************************
#define FID_Kendal_Source_KendalCharacter_Public_KendalPlayerState_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPawnSet);


KENDALCHARACTER_API UClass* Z_Construct_UClass_AKendalPlayerState_NoRegister();

#define FID_Kendal_Source_KendalCharacter_Public_KendalPlayerState_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKendalPlayerState(); \
	friend struct Z_Construct_UClass_AKendalPlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALCHARACTER_API UClass* Z_Construct_UClass_AKendalPlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(AKendalPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KendalCharacter"), Z_Construct_UClass_AKendalPlayerState_NoRegister) \
	DECLARE_SERIALIZER(AKendalPlayerState)


#define FID_Kendal_Source_KendalCharacter_Public_KendalPlayerState_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AKendalPlayerState(AKendalPlayerState&&) = delete; \
	AKendalPlayerState(const AKendalPlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKendalPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKendalPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKendalPlayerState) \
	NO_API virtual ~AKendalPlayerState();


#define FID_Kendal_Source_KendalCharacter_Public_KendalPlayerState_h_17_PROLOG
#define FID_Kendal_Source_KendalCharacter_Public_KendalPlayerState_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalCharacter_Public_KendalPlayerState_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalCharacter_Public_KendalPlayerState_h_20_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalCharacter_Public_KendalPlayerState_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AKendalPlayerState;

// ********** End Class AKendalPlayerState *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalCharacter_Public_KendalPlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
