// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalEquipmentInstanced.h"

#ifdef KENDALEQUIPMENT_KendalEquipmentInstanced_generated_h
#error "KendalEquipmentInstanced.generated.h already included, missing '#pragma once' in KendalEquipmentInstanced.h"
#endif
#define KENDALEQUIPMENT_KendalEquipmentInstanced_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AKendalEquipmentInstanced ************************************************
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_AKendalEquipmentInstanced_NoRegister();

#define FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentInstanced_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKendalEquipmentInstanced(); \
	friend struct Z_Construct_UClass_AKendalEquipmentInstanced_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALEQUIPMENT_API UClass* Z_Construct_UClass_AKendalEquipmentInstanced_NoRegister(); \
public: \
	DECLARE_CLASS2(AKendalEquipmentInstanced, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KendalEquipment"), Z_Construct_UClass_AKendalEquipmentInstanced_NoRegister) \
	DECLARE_SERIALIZER(AKendalEquipmentInstanced)


#define FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentInstanced_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AKendalEquipmentInstanced(AKendalEquipmentInstanced&&) = delete; \
	AKendalEquipmentInstanced(const AKendalEquipmentInstanced&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKendalEquipmentInstanced); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKendalEquipmentInstanced); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKendalEquipmentInstanced) \
	NO_API virtual ~AKendalEquipmentInstanced();


#define FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentInstanced_h_14_PROLOG
#define FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentInstanced_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentInstanced_h_17_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentInstanced_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AKendalEquipmentInstanced;

// ********** End Class AKendalEquipmentInstanced **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentInstanced_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
