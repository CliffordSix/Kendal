// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalEquipmentData.h"

#ifdef KENDALEQUIPMENT_KendalEquipmentData_generated_h
#error "KendalEquipmentData.generated.h already included, missing '#pragma once' in KendalEquipmentData.h"
#endif
#define KENDALEQUIPMENT_KendalEquipmentData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UPaperSprite;

// ********** Begin Class UKendalEquipmentData *****************************************************
#define FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDrawScale); \
	DECLARE_FUNCTION(execGetSprite); \
	DECLARE_FUNCTION(execGetEquipmentName);


KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentData_NoRegister();

#define FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKendalEquipmentData(); \
	friend struct Z_Construct_UClass_UKendalEquipmentData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentData_NoRegister(); \
public: \
	DECLARE_CLASS2(UKendalEquipmentData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KendalEquipment"), Z_Construct_UClass_UKendalEquipmentData_NoRegister) \
	DECLARE_SERIALIZER(UKendalEquipmentData)


#define FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKendalEquipmentData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKendalEquipmentData(UKendalEquipmentData&&) = delete; \
	UKendalEquipmentData(const UKendalEquipmentData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKendalEquipmentData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKendalEquipmentData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKendalEquipmentData) \
	NO_API virtual ~UKendalEquipmentData();


#define FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h_13_PROLOG
#define FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h_16_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKendalEquipmentData;

// ********** End Class UKendalEquipmentData *******************************************************

// ********** Begin Class UKendalEquipmentStackData ************************************************
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentStackData_NoRegister();

#define FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKendalEquipmentStackData(); \
	friend struct Z_Construct_UClass_UKendalEquipmentStackData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentStackData_NoRegister(); \
public: \
	DECLARE_CLASS2(UKendalEquipmentStackData, UKendalEquipmentData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KendalEquipment"), Z_Construct_UClass_UKendalEquipmentStackData_NoRegister) \
	DECLARE_SERIALIZER(UKendalEquipmentStackData)


#define FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKendalEquipmentStackData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKendalEquipmentStackData(UKendalEquipmentStackData&&) = delete; \
	UKendalEquipmentStackData(const UKendalEquipmentStackData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKendalEquipmentStackData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKendalEquipmentStackData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKendalEquipmentStackData) \
	NO_API virtual ~UKendalEquipmentStackData();


#define FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h_45_PROLOG
#define FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h_48_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKendalEquipmentStackData;

// ********** End Class UKendalEquipmentStackData **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
