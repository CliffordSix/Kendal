// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalMapManagementSubsystem.h"

#ifdef KENDALMAPMANAGEMENT_KendalMapManagementSubsystem_generated_h
#error "KendalMapManagementSubsystem.generated.h already included, missing '#pragma once' in KendalMapManagementSubsystem.h"
#endif
#define KENDALMAPMANAGEMENT_KendalMapManagementSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UKendalMapManagementSubsystem ********************************************
#define FID_Kendal_Source_KendalMapManagement_Public_KendalMapManagementSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateTile);


KENDALMAPMANAGEMENT_API UClass* Z_Construct_UClass_UKendalMapManagementSubsystem_NoRegister();

#define FID_Kendal_Source_KendalMapManagement_Public_KendalMapManagementSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKendalMapManagementSubsystem(); \
	friend struct Z_Construct_UClass_UKendalMapManagementSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALMAPMANAGEMENT_API UClass* Z_Construct_UClass_UKendalMapManagementSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UKendalMapManagementSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/KendalMapManagement"), Z_Construct_UClass_UKendalMapManagementSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UKendalMapManagementSubsystem)


#define FID_Kendal_Source_KendalMapManagement_Public_KendalMapManagementSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKendalMapManagementSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKendalMapManagementSubsystem(UKendalMapManagementSubsystem&&) = delete; \
	UKendalMapManagementSubsystem(const UKendalMapManagementSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKendalMapManagementSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKendalMapManagementSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UKendalMapManagementSubsystem) \
	NO_API virtual ~UKendalMapManagementSubsystem();


#define FID_Kendal_Source_KendalMapManagement_Public_KendalMapManagementSubsystem_h_15_PROLOG
#define FID_Kendal_Source_KendalMapManagement_Public_KendalMapManagementSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalMapManagement_Public_KendalMapManagementSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalMapManagement_Public_KendalMapManagementSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalMapManagement_Public_KendalMapManagementSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKendalMapManagementSubsystem;

// ********** End Class UKendalMapManagementSubsystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalMapManagement_Public_KendalMapManagementSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
