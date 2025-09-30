// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/KendalAbilityData.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalAbilityData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
KENDALGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UKendalAbilityData();
KENDALGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UKendalAbilityData_NoRegister();
KENDALGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UKendalGameplayAbility_NoRegister();
KENDALGAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility();
UPackage* Z_Construct_UPackage__Script_KendalGameplayAbilities();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FKendalAbilityData_GameplayAbility ********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FKendalAbilityData_GameplayAbility;
class UScriptStruct* FKendalAbilityData_GameplayAbility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FKendalAbilityData_GameplayAbility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FKendalAbilityData_GameplayAbility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility, (UObject*)Z_Construct_UPackage__Script_KendalGameplayAbilities(), TEXT("KendalAbilityData_GameplayAbility"));
	}
	return Z_Registration_Info_UScriptStruct_FKendalAbilityData_GameplayAbility.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Struct representing a Gameplay Ability to be granted \n */" },
#endif
		{ "ModuleRelativePath", "Public/Data/KendalAbilityData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Struct representing a Gameplay Ability to be granted" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityClass_MetaData[] = {
		{ "Categories", "Abilities" },
		{ "Category", "KendalAbilityData_GameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Gameplay Ability Class to use\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/KendalAbilityData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay Ability Class to use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "Input.Action" },
		{ "Category", "KendalAbilityData_GameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Gameplay tag used for the input system to bind input to an Ability\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/KendalAbilityData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay tag used for the input system to bind input to an Ability" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKendalAbilityData_GameplayAbility>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKendalAbilityData_GameplayAbility, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UKendalGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityClass_MetaData), NewProp_AbilityClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKendalAbilityData_GameplayAbility, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility_Statics::NewProp_AbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility_Statics::NewProp_InputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KendalGameplayAbilities,
	nullptr,
	&NewStructOps,
	"KendalAbilityData_GameplayAbility",
	Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility_Statics::PropPointers),
	sizeof(FKendalAbilityData_GameplayAbility),
	alignof(FKendalAbilityData_GameplayAbility),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility()
{
	if (!Z_Registration_Info_UScriptStruct_FKendalAbilityData_GameplayAbility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FKendalAbilityData_GameplayAbility.InnerSingleton, Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FKendalAbilityData_GameplayAbility.InnerSingleton;
}
// ********** End ScriptStruct FKendalAbilityData_GameplayAbility **********************************

// ********** Begin Class UKendalAbilityData *******************************************************
void UKendalAbilityData::StaticRegisterNativesUKendalAbilityData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalAbilityData;
UClass* UKendalAbilityData::GetPrivateStaticClass()
{
	using TClass = UKendalAbilityData;
	if (!Z_Registration_Info_UClass_UKendalAbilityData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalAbilityData"),
			Z_Registration_Info_UClass_UKendalAbilityData.InnerSingleton,
			StaticRegisterNativesUKendalAbilityData,
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
	return Z_Registration_Info_UClass_UKendalAbilityData.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalAbilityData_NoRegister()
{
	return UKendalAbilityData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalAbilityData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Data asset containing Kendal Gameplay Ability Data\n */" },
#endif
		{ "IncludePath", "Data/KendalAbilityData.h" },
		{ "ModuleRelativePath", "Public/Data/KendalAbilityData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data asset containing Kendal Gameplay Ability Data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayAbilities_MetaData[] = {
		{ "Categories", "Abilities" },
		{ "Category", "KendalAbilityData" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/Data/KendalAbilityData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKendalAbilityData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKendalAbilityData_Statics::NewProp_GameplayAbilities_Inner = { "GameplayAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility, METADATA_PARAMS(0, nullptr) }; // 203814267
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKendalAbilityData_Statics::NewProp_GameplayAbilities = { "GameplayAbilities", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalAbilityData, GameplayAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayAbilities_MetaData), NewProp_GameplayAbilities_MetaData) }; // 203814267
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKendalAbilityData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalAbilityData_Statics::NewProp_GameplayAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalAbilityData_Statics::NewProp_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalAbilityData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKendalAbilityData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalAbilityData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalAbilityData_Statics::ClassParams = {
	&UKendalAbilityData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKendalAbilityData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKendalAbilityData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalAbilityData_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalAbilityData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalAbilityData()
{
	if (!Z_Registration_Info_UClass_UKendalAbilityData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalAbilityData.OuterSingleton, Z_Construct_UClass_UKendalAbilityData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalAbilityData.OuterSingleton;
}
UKendalAbilityData::UKendalAbilityData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalAbilityData);
UKendalAbilityData::~UKendalAbilityData() {}
// ********** End Class UKendalAbilityData *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_Data_KendalAbilityData_h__Script_KendalGameplayAbilities_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKendalAbilityData_GameplayAbility::StaticStruct, Z_Construct_UScriptStruct_FKendalAbilityData_GameplayAbility_Statics::NewStructOps, TEXT("KendalAbilityData_GameplayAbility"), &Z_Registration_Info_UScriptStruct_FKendalAbilityData_GameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKendalAbilityData_GameplayAbility), 203814267U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKendalAbilityData, UKendalAbilityData::StaticClass, TEXT("UKendalAbilityData"), &Z_Registration_Info_UClass_UKendalAbilityData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalAbilityData), 122430721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_Data_KendalAbilityData_h__Script_KendalGameplayAbilities_1840510876(TEXT("/Script/KendalGameplayAbilities"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_Data_KendalAbilityData_h__Script_KendalGameplayAbilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_Data_KendalAbilityData_h__Script_KendalGameplayAbilities_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_Data_KendalAbilityData_h__Script_KendalGameplayAbilities_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_Data_KendalAbilityData_h__Script_KendalGameplayAbilities_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
