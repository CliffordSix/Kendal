// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalTileMapSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalTileMapSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
KENDALTILEMAP_API UClass* Z_Construct_UClass_UKendalTileMapSettings();
KENDALTILEMAP_API UClass* Z_Construct_UClass_UKendalTileMapSettings_NoRegister();
KENDALTILEMAP_API UEnum* Z_Construct_UEnum_KendalTileMap_EKendalBitFlags();
UPackage* Z_Construct_UPackage__Script_KendalTileMap();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EKendalBitFlags ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKendalBitFlags;
static UEnum* EKendalBitFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKendalBitFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKendalBitFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KendalTileMap_EKendalBitFlags, (UObject*)Z_Construct_UPackage__Script_KendalTileMap(), TEXT("EKendalBitFlags"));
	}
	return Z_Registration_Info_UEnum_EKendalBitFlags.OuterSingleton;
}
template<> KENDALTILEMAP_API UEnum* StaticEnum<EKendalBitFlags>()
{
	return EKendalBitFlags_StaticEnum();
}
struct Z_Construct_UEnum_KendalTileMap_EKendalBitFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bottom.Name", "EKendalBitFlags::Bottom" },
		{ "BottomLeft.Name", "EKendalBitFlags::BottomLeft" },
		{ "BottomRight.Name", "EKendalBitFlags::BottomRight" },
		{ "MiddleLeft.Name", "EKendalBitFlags::MiddleLeft" },
		{ "MiddleRight.Name", "EKendalBitFlags::MiddleRight" },
		{ "ModuleRelativePath", "Public/KendalTileMapSettings.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EKendalBitFlags::None" },
		{ "Top.Name", "EKendalBitFlags::Top" },
		{ "TopLeft.Name", "EKendalBitFlags::TopLeft" },
		{ "TopRight.Name", "EKendalBitFlags::TopRight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKendalBitFlags::None", (int64)EKendalBitFlags::None },
		{ "EKendalBitFlags::TopLeft", (int64)EKendalBitFlags::TopLeft },
		{ "EKendalBitFlags::MiddleLeft", (int64)EKendalBitFlags::MiddleLeft },
		{ "EKendalBitFlags::BottomLeft", (int64)EKendalBitFlags::BottomLeft },
		{ "EKendalBitFlags::Top", (int64)EKendalBitFlags::Top },
		{ "EKendalBitFlags::Bottom", (int64)EKendalBitFlags::Bottom },
		{ "EKendalBitFlags::TopRight", (int64)EKendalBitFlags::TopRight },
		{ "EKendalBitFlags::MiddleRight", (int64)EKendalBitFlags::MiddleRight },
		{ "EKendalBitFlags::BottomRight", (int64)EKendalBitFlags::BottomRight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KendalTileMap_EKendalBitFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KendalTileMap,
	nullptr,
	"EKendalBitFlags",
	"EKendalBitFlags",
	Z_Construct_UEnum_KendalTileMap_EKendalBitFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KendalTileMap_EKendalBitFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KendalTileMap_EKendalBitFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KendalTileMap_EKendalBitFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KendalTileMap_EKendalBitFlags()
{
	if (!Z_Registration_Info_UEnum_EKendalBitFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKendalBitFlags.InnerSingleton, Z_Construct_UEnum_KendalTileMap_EKendalBitFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKendalBitFlags.InnerSingleton;
}
// ********** End Enum EKendalBitFlags *************************************************************

// ********** Begin Class UKendalTileMapSettings Function GetInteractionTileSet ********************
struct Z_Construct_UFunction_UKendalTileMapSettings_GetInteractionTileSet_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct KendalTileMapSettings_eventGetInteractionTileSet_Parms
	{
		FSoftObjectPath ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Public/KendalTileMapSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKendalTileMapSettings_GetInteractionTileSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalTileMapSettings_eventGetInteractionTileSet_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKendalTileMapSettings_GetInteractionTileSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalTileMapSettings_GetInteractionTileSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalTileMapSettings_GetInteractionTileSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKendalTileMapSettings_GetInteractionTileSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKendalTileMapSettings, nullptr, "GetInteractionTileSet", Z_Construct_UFunction_UKendalTileMapSettings_GetInteractionTileSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalTileMapSettings_GetInteractionTileSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKendalTileMapSettings_GetInteractionTileSet_Statics::KendalTileMapSettings_eventGetInteractionTileSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalTileMapSettings_GetInteractionTileSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKendalTileMapSettings_GetInteractionTileSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKendalTileMapSettings_GetInteractionTileSet_Statics::KendalTileMapSettings_eventGetInteractionTileSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKendalTileMapSettings_GetInteractionTileSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKendalTileMapSettings_GetInteractionTileSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKendalTileMapSettings::execGetInteractionTileSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSoftObjectPath*)Z_Param__Result=UKendalTileMapSettings::GetInteractionTileSet();
	P_NATIVE_END;
}
// ********** End Class UKendalTileMapSettings Function GetInteractionTileSet **********************

// ********** Begin Class UKendalTileMapSettings Function GetTileBitFlagMapping ********************
struct Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping_Statics
{
	struct KendalTileMapSettings_eventGetTileBitFlagMapping_Parms
	{
		TMap<uint8,int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TileMap" },
		{ "ModuleRelativePath", "Public/KendalTileMapSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalTileMapSettings_eventGetTileBitFlagMapping_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKendalTileMapSettings, nullptr, "GetTileBitFlagMapping", Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping_Statics::KendalTileMapSettings_eventGetTileBitFlagMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping_Statics::KendalTileMapSettings_eventGetTileBitFlagMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKendalTileMapSettings::execGetTileBitFlagMapping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<uint8,int32>*)Z_Param__Result=UKendalTileMapSettings::GetTileBitFlagMapping();
	P_NATIVE_END;
}
// ********** End Class UKendalTileMapSettings Function GetTileBitFlagMapping **********************

// ********** Begin Class UKendalTileMapSettings Function GetTilledGroundTileSet *******************
struct Z_Construct_UFunction_UKendalTileMapSettings_GetTilledGroundTileSet_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct KendalTileMapSettings_eventGetTilledGroundTileSet_Parms
	{
		FSoftObjectPath ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Public/KendalTileMapSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKendalTileMapSettings_GetTilledGroundTileSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalTileMapSettings_eventGetTilledGroundTileSet_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKendalTileMapSettings_GetTilledGroundTileSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalTileMapSettings_GetTilledGroundTileSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalTileMapSettings_GetTilledGroundTileSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKendalTileMapSettings_GetTilledGroundTileSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKendalTileMapSettings, nullptr, "GetTilledGroundTileSet", Z_Construct_UFunction_UKendalTileMapSettings_GetTilledGroundTileSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalTileMapSettings_GetTilledGroundTileSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKendalTileMapSettings_GetTilledGroundTileSet_Statics::KendalTileMapSettings_eventGetTilledGroundTileSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalTileMapSettings_GetTilledGroundTileSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKendalTileMapSettings_GetTilledGroundTileSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKendalTileMapSettings_GetTilledGroundTileSet_Statics::KendalTileMapSettings_eventGetTilledGroundTileSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKendalTileMapSettings_GetTilledGroundTileSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKendalTileMapSettings_GetTilledGroundTileSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKendalTileMapSettings::execGetTilledGroundTileSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSoftObjectPath*)Z_Param__Result=UKendalTileMapSettings::GetTilledGroundTileSet();
	P_NATIVE_END;
}
// ********** End Class UKendalTileMapSettings Function GetTilledGroundTileSet *********************

// ********** Begin Class UKendalTileMapSettings ***************************************************
void UKendalTileMapSettings::StaticRegisterNativesUKendalTileMapSettings()
{
	UClass* Class = UKendalTileMapSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInteractionTileSet", &UKendalTileMapSettings::execGetInteractionTileSet },
		{ "GetTileBitFlagMapping", &UKendalTileMapSettings::execGetTileBitFlagMapping },
		{ "GetTilledGroundTileSet", &UKendalTileMapSettings::execGetTilledGroundTileSet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalTileMapSettings;
UClass* UKendalTileMapSettings::GetPrivateStaticClass()
{
	using TClass = UKendalTileMapSettings;
	if (!Z_Registration_Info_UClass_UKendalTileMapSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalTileMapSettings"),
			Z_Registration_Info_UClass_UKendalTileMapSettings.InnerSingleton,
			StaticRegisterNativesUKendalTileMapSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UKendalTileMapSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalTileMapSettings_NoRegister()
{
	return UKendalTileMapSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalTileMapSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Developer Settings Class for the tile Map Module\n */" },
#endif
		{ "DisplayName", "Kendal Tile Map Settings" },
		{ "IncludePath", "KendalTileMapSettings.h" },
		{ "ModuleRelativePath", "Public/KendalTileMapSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Developer Settings Class for the tile Map Module" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileBitFlagMapping_MetaData[] = {
		{ "Category", "KendalTileMapSettings" },
		{ "ModuleRelativePath", "Public/KendalTileMapSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilledGroundTileSet_MetaData[] = {
		{ "AllowedClasses", "PaperTileSet" },
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Public/KendalTileMapSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTileSet_MetaData[] = {
		{ "AllowedClasses", "PaperTileSet" },
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Public/KendalTileMapSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileBitFlagMapping_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TileBitFlagMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TileBitFlagMapping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TilledGroundTileSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionTileSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKendalTileMapSettings_GetInteractionTileSet, "GetInteractionTileSet" }, // 2973845273
		{ &Z_Construct_UFunction_UKendalTileMapSettings_GetTileBitFlagMapping, "GetTileBitFlagMapping" }, // 2927928927
		{ &Z_Construct_UFunction_UKendalTileMapSettings_GetTilledGroundTileSet, "GetTilledGroundTileSet" }, // 4238386849
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKendalTileMapSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKendalTileMapSettings_Statics::NewProp_TileBitFlagMapping_ValueProp = { "TileBitFlagMapping", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKendalTileMapSettings_Statics::NewProp_TileBitFlagMapping_Key_KeyProp = { "TileBitFlagMapping_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UKendalTileMapSettings_Statics::NewProp_TileBitFlagMapping = { "TileBitFlagMapping", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalTileMapSettings, TileBitFlagMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileBitFlagMapping_MetaData), NewProp_TileBitFlagMapping_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKendalTileMapSettings_Statics::NewProp_TilledGroundTileSet = { "TilledGroundTileSet", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalTileMapSettings, TilledGroundTileSet), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilledGroundTileSet_MetaData), NewProp_TilledGroundTileSet_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKendalTileMapSettings_Statics::NewProp_InteractionTileSet = { "InteractionTileSet", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalTileMapSettings, InteractionTileSet), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTileSet_MetaData), NewProp_InteractionTileSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKendalTileMapSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalTileMapSettings_Statics::NewProp_TileBitFlagMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalTileMapSettings_Statics::NewProp_TileBitFlagMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalTileMapSettings_Statics::NewProp_TileBitFlagMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalTileMapSettings_Statics::NewProp_TilledGroundTileSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalTileMapSettings_Statics::NewProp_InteractionTileSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalTileMapSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKendalTileMapSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalTileMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalTileMapSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalTileMapSettings_Statics::ClassParams = {
	&UKendalTileMapSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKendalTileMapSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKendalTileMapSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalTileMapSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalTileMapSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalTileMapSettings()
{
	if (!Z_Registration_Info_UClass_UKendalTileMapSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalTileMapSettings.OuterSingleton, Z_Construct_UClass_UKendalTileMapSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalTileMapSettings.OuterSingleton;
}
UKendalTileMapSettings::UKendalTileMapSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalTileMapSettings);
UKendalTileMapSettings::~UKendalTileMapSettings() {}
// ********** End Class UKendalTileMapSettings *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalTileMapSettings_h__Script_KendalTileMap_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKendalBitFlags_StaticEnum, TEXT("EKendalBitFlags"), &Z_Registration_Info_UEnum_EKendalBitFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3740162789U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKendalTileMapSettings, UKendalTileMapSettings::StaticClass, TEXT("UKendalTileMapSettings"), &Z_Registration_Info_UClass_UKendalTileMapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalTileMapSettings), 1575196318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalTileMapSettings_h__Script_KendalTileMap_2774425455(TEXT("/Script/KendalTileMap"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalTileMapSettings_h__Script_KendalTileMap_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalTileMapSettings_h__Script_KendalTileMap_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalTileMapSettings_h__Script_KendalTileMap_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalTileMapSettings_h__Script_KendalTileMap_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
