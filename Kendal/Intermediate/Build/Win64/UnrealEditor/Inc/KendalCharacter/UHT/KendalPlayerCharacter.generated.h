// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalPlayerCharacter.h"

#ifdef KENDALCHARACTER_KendalPlayerCharacter_generated_h
#error "KendalPlayerCharacter.generated.h already included, missing '#pragma once' in KendalPlayerCharacter.h"
#endif
#define KENDALCHARACTER_KendalPlayerCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AKendalPlayerCharacter ***************************************************
#define FID_Kendal_Source_KendalCharacter_Public_KendalPlayerCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLastFacingDirection);


KENDALCHARACTER_API UClass* Z_Construct_UClass_AKendalPlayerCharacter_NoRegister();

#define FID_Kendal_Source_KendalCharacter_Public_KendalPlayerCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKendalPlayerCharacter(); \
	friend struct Z_Construct_UClass_AKendalPlayerCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALCHARACTER_API UClass* Z_Construct_UClass_AKendalPlayerCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AKendalPlayerCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KendalCharacter"), Z_Construct_UClass_AKendalPlayerCharacter_NoRegister) \
	DECLARE_SERIALIZER(AKendalPlayerCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AKendalPlayerCharacter*>(this); }


#define FID_Kendal_Source_KendalCharacter_Public_KendalPlayerCharacter_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AKendalPlayerCharacter(AKendalPlayerCharacter&&) = delete; \
	AKendalPlayerCharacter(const AKendalPlayerCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKendalPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKendalPlayerCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKendalPlayerCharacter) \
	NO_API virtual ~AKendalPlayerCharacter();


#define FID_Kendal_Source_KendalCharacter_Public_KendalPlayerCharacter_h_21_PROLOG
#define FID_Kendal_Source_KendalCharacter_Public_KendalPlayerCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalCharacter_Public_KendalPlayerCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalCharacter_Public_KendalPlayerCharacter_h_25_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalCharacter_Public_KendalPlayerCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AKendalPlayerCharacter;

// ********** End Class AKendalPlayerCharacter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalCharacter_Public_KendalPlayerCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
