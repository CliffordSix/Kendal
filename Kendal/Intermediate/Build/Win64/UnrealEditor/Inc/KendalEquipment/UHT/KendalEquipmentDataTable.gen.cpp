// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalEquipmentDataTable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalEquipmentDataTable() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentData_NoRegister();
KENDALEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FKendalEquipmentDataRow();
UPackage* Z_Construct_UPackage__Script_KendalEquipment();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FKendalEquipmentDataRow *******************************************
static_assert(std::is_polymorphic<FKendalEquipmentDataRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FKendalEquipmentDataRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FKendalEquipmentDataRow;
class UScriptStruct* FKendalEquipmentDataRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FKendalEquipmentDataRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FKendalEquipmentDataRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKendalEquipmentDataRow, (UObject*)Z_Construct_UPackage__Script_KendalEquipment(), TEXT("KendalEquipmentDataRow"));
	}
	return Z_Registration_Info_UScriptStruct_FKendalEquipmentDataRow.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FKendalEquipmentDataRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Data Table for Equipment Data\n */" },
#endif
		{ "ModuleRelativePath", "Public/KendalEquipmentDataTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Data Table for Equipment Data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentData_MetaData[] = {
		{ "Category", "KendalEquipmentDataRow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KendalEquipmentDataTable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKendalEquipmentDataRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FKendalEquipmentDataRow_Statics::NewProp_EquipmentData = { "EquipmentData", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKendalEquipmentDataRow, EquipmentData), Z_Construct_UClass_UKendalEquipmentData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentData_MetaData), NewProp_EquipmentData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKendalEquipmentDataRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKendalEquipmentDataRow_Statics::NewProp_EquipmentData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKendalEquipmentDataRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKendalEquipmentDataRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KendalEquipment,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"KendalEquipmentDataRow",
	Z_Construct_UScriptStruct_FKendalEquipmentDataRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKendalEquipmentDataRow_Statics::PropPointers),
	sizeof(FKendalEquipmentDataRow),
	alignof(FKendalEquipmentDataRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKendalEquipmentDataRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKendalEquipmentDataRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKendalEquipmentDataRow()
{
	if (!Z_Registration_Info_UScriptStruct_FKendalEquipmentDataRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FKendalEquipmentDataRow.InnerSingleton, Z_Construct_UScriptStruct_FKendalEquipmentDataRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FKendalEquipmentDataRow.InnerSingleton;
}
// ********** End ScriptStruct FKendalEquipmentDataRow *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentDataTable_h__Script_KendalEquipment_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKendalEquipmentDataRow::StaticStruct, Z_Construct_UScriptStruct_FKendalEquipmentDataRow_Statics::NewStructOps, TEXT("KendalEquipmentDataRow"), &Z_Registration_Info_UScriptStruct_FKendalEquipmentDataRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKendalEquipmentDataRow), 1180948174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentDataTable_h__Script_KendalEquipment_2840230657(TEXT("/Script/KendalEquipment"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentDataTable_h__Script_KendalEquipment_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentDataTable_h__Script_KendalEquipment_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
