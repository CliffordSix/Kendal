// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalTileMapSettings.h"

#ifdef KENDALTILEMAP_KendalTileMapSettings_generated_h
#error "KendalTileMapSettings.generated.h already included, missing '#pragma once' in KendalTileMapSettings.h"
#endif
#define KENDALTILEMAP_KendalTileMapSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 
struct FSoftObjectPath;

// ********** Begin Class UKendalTileMapSettings ***************************************************
#define FID_Kendal_Source_KendalTileMap_Public_KendalTileMapSettings_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInteractionTileSet); \
	DECLARE_FUNCTION(execGetTilledGroundTileSet); \
	DECLARE_FUNCTION(execGetTileBitFlagMapping);


KENDALTILEMAP_API UClass* Z_Construct_UClass_UKendalTileMapSettings_NoRegister();

#define FID_Kendal_Source_KendalTileMap_Public_KendalTileMapSettings_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKendalTileMapSettings(); \
	friend struct Z_Construct_UClass_UKendalTileMapSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALTILEMAP_API UClass* Z_Construct_UClass_UKendalTileMapSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UKendalTileMapSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/KendalTileMap"), Z_Construct_UClass_UKendalTileMapSettings_NoRegister) \
	DECLARE_SERIALIZER(UKendalTileMapSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Kendal_Source_KendalTileMap_Public_KendalTileMapSettings_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKendalTileMapSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKendalTileMapSettings(UKendalTileMapSettings&&) = delete; \
	UKendalTileMapSettings(const UKendalTileMapSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKendalTileMapSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKendalTileMapSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKendalTileMapSettings) \
	NO_API virtual ~UKendalTileMapSettings();


#define FID_Kendal_Source_KendalTileMap_Public_KendalTileMapSettings_h_28_PROLOG
#define FID_Kendal_Source_KendalTileMap_Public_KendalTileMapSettings_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalTileMap_Public_KendalTileMapSettings_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalTileMap_Public_KendalTileMapSettings_h_31_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalTileMap_Public_KendalTileMapSettings_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKendalTileMapSettings;

// ********** End Class UKendalTileMapSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalTileMap_Public_KendalTileMapSettings_h

// ********** Begin Enum EKendalBitFlags ***********************************************************
#define FOREACH_ENUM_EKENDALBITFLAGS(op) \
	op(EKendalBitFlags::None) \
	op(EKendalBitFlags::TopLeft) \
	op(EKendalBitFlags::MiddleLeft) \
	op(EKendalBitFlags::BottomLeft) \
	op(EKendalBitFlags::Top) \
	op(EKendalBitFlags::Bottom) \
	op(EKendalBitFlags::TopRight) \
	op(EKendalBitFlags::MiddleRight) \
	op(EKendalBitFlags::BottomRight) 

enum class EKendalBitFlags : uint8;
template<> struct TIsUEnumClass<EKendalBitFlags> { enum { Value = true }; };
template<> KENDALTILEMAP_API UEnum* StaticEnum<EKendalBitFlags>();
// ********** End Enum EKendalBitFlags *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
