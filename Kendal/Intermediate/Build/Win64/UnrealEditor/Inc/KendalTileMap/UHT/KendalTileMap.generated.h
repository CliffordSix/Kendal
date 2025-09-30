// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalTileMap.h"

#ifdef KENDALTILEMAP_KendalTileMap_generated_h
#error "KendalTileMap.generated.h already included, missing '#pragma once' in KendalTileMap.h"
#endif
#define KENDALTILEMAP_KendalTileMap_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UKendalTileMap ***********************************************************
KENDALTILEMAP_API UClass* Z_Construct_UClass_UKendalTileMap_NoRegister();

#define FID_Kendal_Source_KendalTileMap_Public_KendalTileMap_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKendalTileMap(); \
	friend struct Z_Construct_UClass_UKendalTileMap_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALTILEMAP_API UClass* Z_Construct_UClass_UKendalTileMap_NoRegister(); \
public: \
	DECLARE_CLASS2(UKendalTileMap, UPaperTileMap, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KendalTileMap"), Z_Construct_UClass_UKendalTileMap_NoRegister) \
	DECLARE_SERIALIZER(UKendalTileMap)


#define FID_Kendal_Source_KendalTileMap_Public_KendalTileMap_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKendalTileMap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKendalTileMap(UKendalTileMap&&) = delete; \
	UKendalTileMap(const UKendalTileMap&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKendalTileMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKendalTileMap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKendalTileMap) \
	NO_API virtual ~UKendalTileMap();


#define FID_Kendal_Source_KendalTileMap_Public_KendalTileMap_h_12_PROLOG
#define FID_Kendal_Source_KendalTileMap_Public_KendalTileMap_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalTileMap_Public_KendalTileMap_h_15_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalTileMap_Public_KendalTileMap_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKendalTileMap;

// ********** End Class UKendalTileMap *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalTileMap_Public_KendalTileMap_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
