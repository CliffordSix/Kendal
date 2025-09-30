// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalPaperTileData.h"

#ifdef KENDALTILEMAP_KendalPaperTileData_generated_h
#error "KendalPaperTileData.generated.h already included, missing '#pragma once' in KendalPaperTileData.h"
#endif
#define KENDALTILEMAP_KendalPaperTileData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FKendalPaperTileData **********************************************
#define FID_Kendal_Source_KendalTileMap_Public_KendalPaperTileData_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKendalPaperTileData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPaperTileData Super;


struct FKendalPaperTileData;
// ********** End ScriptStruct FKendalPaperTileData ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalTileMap_Public_KendalPaperTileData_h

// ********** Begin Enum EKendalPaperTileInteractionFlags ******************************************
#define FOREACH_ENUM_EKENDALPAPERTILEINTERACTIONFLAGS(op) \
	op(EKendalPaperTileInteractionFlags::None) \
	op(EKendalPaperTileInteractionFlags::Tillable) \
	op(EKendalPaperTileInteractionFlags::Mineable) \
	op(EKendalPaperTileInteractionFlags::Choppable) \
	op(EKendalPaperTileInteractionFlags::Waterable) 

enum class EKendalPaperTileInteractionFlags : uint8;
template<> struct TIsUEnumClass<EKendalPaperTileInteractionFlags> { enum { Value = true }; };
template<> KENDALTILEMAP_API UEnum* StaticEnum<EKendalPaperTileInteractionFlags>();
// ********** End Enum EKendalPaperTileInteractionFlags ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
