// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalPaperTileData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalPaperTileData() {}

// ********** Begin Cross Module References ********************************************************
KENDALTILEMAP_API UEnum* Z_Construct_UEnum_KendalTileMap_EKendalPaperTileInteractionFlags();
KENDALTILEMAP_API UScriptStruct* Z_Construct_UScriptStruct_FKendalPaperTileData();
PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTileData();
UPackage* Z_Construct_UPackage__Script_KendalTileMap();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EKendalPaperTileInteractionFlags ******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKendalPaperTileInteractionFlags;
static UEnum* EKendalPaperTileInteractionFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKendalPaperTileInteractionFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKendalPaperTileInteractionFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KendalTileMap_EKendalPaperTileInteractionFlags, (UObject*)Z_Construct_UPackage__Script_KendalTileMap(), TEXT("EKendalPaperTileInteractionFlags"));
	}
	return Z_Registration_Info_UEnum_EKendalPaperTileInteractionFlags.OuterSingleton;
}
template<> KENDALTILEMAP_API UEnum* StaticEnum<EKendalPaperTileInteractionFlags>()
{
	return EKendalPaperTileInteractionFlags_StaticEnum();
}
struct Z_Construct_UEnum_KendalTileMap_EKendalPaperTileInteractionFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Choppable.Name", "EKendalPaperTileInteractionFlags::Choppable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Flags for a Kendal Tile interactable state. Sets if a tile can be interacted with in a specific manner\n */" },
#endif
		{ "Mineable.Name", "EKendalPaperTileInteractionFlags::Mineable" },
		{ "ModuleRelativePath", "Public/KendalPaperTileData.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EKendalPaperTileInteractionFlags::None" },
		{ "Tillable.Name", "EKendalPaperTileInteractionFlags::Tillable" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Flags for a Kendal Tile interactable state. Sets if a tile can be interacted with in a specific manner" },
#endif
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "Waterable.Name", "EKendalPaperTileInteractionFlags::Waterable" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKendalPaperTileInteractionFlags::None", (int64)EKendalPaperTileInteractionFlags::None },
		{ "EKendalPaperTileInteractionFlags::Tillable", (int64)EKendalPaperTileInteractionFlags::Tillable },
		{ "EKendalPaperTileInteractionFlags::Mineable", (int64)EKendalPaperTileInteractionFlags::Mineable },
		{ "EKendalPaperTileInteractionFlags::Choppable", (int64)EKendalPaperTileInteractionFlags::Choppable },
		{ "EKendalPaperTileInteractionFlags::Waterable", (int64)EKendalPaperTileInteractionFlags::Waterable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KendalTileMap_EKendalPaperTileInteractionFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KendalTileMap,
	nullptr,
	"EKendalPaperTileInteractionFlags",
	"EKendalPaperTileInteractionFlags",
	Z_Construct_UEnum_KendalTileMap_EKendalPaperTileInteractionFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KendalTileMap_EKendalPaperTileInteractionFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KendalTileMap_EKendalPaperTileInteractionFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KendalTileMap_EKendalPaperTileInteractionFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KendalTileMap_EKendalPaperTileInteractionFlags()
{
	if (!Z_Registration_Info_UEnum_EKendalPaperTileInteractionFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKendalPaperTileInteractionFlags.InnerSingleton, Z_Construct_UEnum_KendalTileMap_EKendalPaperTileInteractionFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKendalPaperTileInteractionFlags.InnerSingleton;
}
// ********** End Enum EKendalPaperTileInteractionFlags ********************************************

// ********** Begin ScriptStruct FKendalPaperTileData **********************************************
static_assert(std::is_polymorphic<FKendalPaperTileData>() == std::is_polymorphic<FPaperTileData>(), "USTRUCT FKendalPaperTileData cannot be polymorphic unless super FPaperTileData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FKendalPaperTileData;
class UScriptStruct* FKendalPaperTileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FKendalPaperTileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FKendalPaperTileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKendalPaperTileData, (UObject*)Z_Construct_UPackage__Script_KendalTileMap(), TEXT("KendalPaperTileData"));
	}
	return Z_Registration_Info_UScriptStruct_FKendalPaperTileData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FKendalPaperTileData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Inherited struct which populates data about Kendal Paper 2D tiles.\n * This is information that isn't relevant to the regular paper 2D system, such\n * as Tile interaction data or state.\n */" },
#endif
		{ "ModuleRelativePath", "Public/KendalPaperTileData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Inherited struct which populates data about Kendal Paper 2D tiles.\n* This is information that isn't relevant to the regular paper 2D system, such\n* as Tile interaction data or state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EKendalPaperTileInteractionFlags" },
		{ "Category", "KendalPaperTileData" },
		{ "ModuleRelativePath", "Public/KendalPaperTileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjacentTileMapping_MetaData[] = {
		{ "Category", "KendalPaperTileData" },
		{ "ModuleRelativePath", "Public/KendalPaperTileData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InteractionFlags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AdjacentTileMapping_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AdjacentTileMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AdjacentTileMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKendalPaperTileData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKendalPaperTileData_Statics::NewProp_InteractionFlags = { "InteractionFlags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKendalPaperTileData, InteractionFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionFlags_MetaData), NewProp_InteractionFlags_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKendalPaperTileData_Statics::NewProp_AdjacentTileMapping_ValueProp = { "AdjacentTileMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKendalPaperTileData_Statics::NewProp_AdjacentTileMapping_Key_KeyProp = { "AdjacentTileMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FKendalPaperTileData_Statics::NewProp_AdjacentTileMapping = { "AdjacentTileMapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKendalPaperTileData, AdjacentTileMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjacentTileMapping_MetaData), NewProp_AdjacentTileMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKendalPaperTileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKendalPaperTileData_Statics::NewProp_InteractionFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKendalPaperTileData_Statics::NewProp_AdjacentTileMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKendalPaperTileData_Statics::NewProp_AdjacentTileMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKendalPaperTileData_Statics::NewProp_AdjacentTileMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKendalPaperTileData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKendalPaperTileData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KendalTileMap,
	Z_Construct_UScriptStruct_FPaperTileData,
	&NewStructOps,
	"KendalPaperTileData",
	Z_Construct_UScriptStruct_FKendalPaperTileData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKendalPaperTileData_Statics::PropPointers),
	sizeof(FKendalPaperTileData),
	alignof(FKendalPaperTileData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKendalPaperTileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKendalPaperTileData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKendalPaperTileData()
{
	if (!Z_Registration_Info_UScriptStruct_FKendalPaperTileData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FKendalPaperTileData.InnerSingleton, Z_Construct_UScriptStruct_FKendalPaperTileData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FKendalPaperTileData.InnerSingleton;
}
// ********** End ScriptStruct FKendalPaperTileData ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalPaperTileData_h__Script_KendalTileMap_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKendalPaperTileInteractionFlags_StaticEnum, TEXT("EKendalPaperTileInteractionFlags"), &Z_Registration_Info_UEnum_EKendalPaperTileInteractionFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2926438231U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKendalPaperTileData::StaticStruct, Z_Construct_UScriptStruct_FKendalPaperTileData_Statics::NewStructOps, TEXT("KendalPaperTileData"), &Z_Registration_Info_UScriptStruct_FKendalPaperTileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKendalPaperTileData), 1936724000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalPaperTileData_h__Script_KendalTileMap_863050494(TEXT("/Script/KendalTileMap"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalPaperTileData_h__Script_KendalTileMap_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalPaperTileData_h__Script_KendalTileMap_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalPaperTileData_h__Script_KendalTileMap_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalPaperTileData_h__Script_KendalTileMap_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
