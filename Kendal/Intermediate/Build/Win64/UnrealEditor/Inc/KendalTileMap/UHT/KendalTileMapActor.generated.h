// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalTileMapActor.h"

#ifdef KENDALTILEMAP_KendalTileMapActor_generated_h
#error "KendalTileMapActor.generated.h already included, missing '#pragma once' in KendalTileMapActor.h"
#endif
#define KENDALTILEMAP_KendalTileMapActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AKendalTileMapActor ******************************************************
#define FID_Kendal_Source_KendalTileMap_Public_KendalTileMapActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetTile_Implementation(const int32 X, const int32 Y, const int32 TileIndex); \
	DECLARE_FUNCTION(execMulticast_SetTile);


#define FID_Kendal_Source_KendalTileMap_Public_KendalTileMapActor_h_20_CALLBACK_WRAPPERS
KENDALTILEMAP_API UClass* Z_Construct_UClass_AKendalTileMapActor_NoRegister();

#define FID_Kendal_Source_KendalTileMap_Public_KendalTileMapActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKendalTileMapActor(); \
	friend struct Z_Construct_UClass_AKendalTileMapActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALTILEMAP_API UClass* Z_Construct_UClass_AKendalTileMapActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AKendalTileMapActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KendalTileMap"), Z_Construct_UClass_AKendalTileMapActor_NoRegister) \
	DECLARE_SERIALIZER(AKendalTileMapActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TileMapComponent=NETFIELD_REP_START, \
		NETFIELD_REP_END=TileMapComponent	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Kendal_Source_KendalTileMap_Public_KendalTileMapActor_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AKendalTileMapActor(AKendalTileMapActor&&) = delete; \
	AKendalTileMapActor(const AKendalTileMapActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKendalTileMapActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKendalTileMapActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKendalTileMapActor) \
	NO_API virtual ~AKendalTileMapActor();


#define FID_Kendal_Source_KendalTileMap_Public_KendalTileMapActor_h_17_PROLOG
#define FID_Kendal_Source_KendalTileMap_Public_KendalTileMapActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalTileMap_Public_KendalTileMapActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalTileMap_Public_KendalTileMapActor_h_20_CALLBACK_WRAPPERS \
	FID_Kendal_Source_KendalTileMap_Public_KendalTileMapActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalTileMap_Public_KendalTileMapActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AKendalTileMapActor;

// ********** End Class AKendalTileMapActor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalTileMap_Public_KendalTileMapActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
