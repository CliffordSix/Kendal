// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalEquipmentSubsystem.h"

#ifdef KENDALEQUIPMENT_KendalEquipmentSubsystem_generated_h
#error "KendalEquipmentSubsystem.generated.h already included, missing '#pragma once' in KendalEquipmentSubsystem.h"
#endif
#define KENDALEQUIPMENT_KendalEquipmentSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UKendalEquipmentSubsystem ************************************************
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentSubsystem_NoRegister();

#define FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKendalEquipmentSubsystem(); \
	friend struct Z_Construct_UClass_UKendalEquipmentSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UKendalEquipmentSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KendalEquipment"), Z_Construct_UClass_UKendalEquipmentSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UKendalEquipmentSubsystem)


#define FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKendalEquipmentSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKendalEquipmentSubsystem(UKendalEquipmentSubsystem&&) = delete; \
	UKendalEquipmentSubsystem(const UKendalEquipmentSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKendalEquipmentSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKendalEquipmentSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKendalEquipmentSubsystem) \
	NO_API virtual ~UKendalEquipmentSubsystem();


#define FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentSubsystem_h_13_PROLOG
#define FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKendalEquipmentSubsystem;

// ********** End Class UKendalEquipmentSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
