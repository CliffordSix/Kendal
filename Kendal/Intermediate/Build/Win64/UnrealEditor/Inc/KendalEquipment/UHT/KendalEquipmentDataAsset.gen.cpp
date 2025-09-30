// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalEquipmentDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalEquipmentDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentData_NoRegister();
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentDataAsset();
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalEquipment();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKendalEquipmentDataAsset ************************************************
void UKendalEquipmentDataAsset::StaticRegisterNativesUKendalEquipmentDataAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalEquipmentDataAsset;
UClass* UKendalEquipmentDataAsset::GetPrivateStaticClass()
{
	using TClass = UKendalEquipmentDataAsset;
	if (!Z_Registration_Info_UClass_UKendalEquipmentDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalEquipmentDataAsset"),
			Z_Registration_Info_UClass_UKendalEquipmentDataAsset.InnerSingleton,
			StaticRegisterNativesUKendalEquipmentDataAsset,
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
	return Z_Registration_Info_UClass_UKendalEquipmentDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalEquipmentDataAsset_NoRegister()
{
	return UKendalEquipmentDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalEquipmentDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Data Asset Wrapper around Kendal EquipmentData, used to define any kinda of equipment.\n * Defines the \"default\" state of an item. These can be read from to generate InstancedAssets or data in\n * a chest the player could open.\n */" },
#endif
		{ "IncludePath", "KendalEquipmentDataAsset.h" },
		{ "ModuleRelativePath", "Public/KendalEquipmentDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data Asset Wrapper around Kendal EquipmentData, used to define any kinda of equipment.\nDefines the \"default\" state of an item. These can be read from to generate InstancedAssets or data in\na chest the player could open." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentData_MetaData[] = {
		{ "Categories", "Equipment" },
		{ "Category", "KendalEquipmentDataAsset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KendalEquipmentDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKendalEquipmentDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKendalEquipmentDataAsset_Statics::NewProp_EquipmentData = { "EquipmentData", nullptr, (EPropertyFlags)0x0116000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalEquipmentDataAsset, EquipmentData), Z_Construct_UClass_UKendalEquipmentData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentData_MetaData), NewProp_EquipmentData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKendalEquipmentDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalEquipmentDataAsset_Statics::NewProp_EquipmentData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKendalEquipmentDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalEquipmentDataAsset_Statics::ClassParams = {
	&UKendalEquipmentDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKendalEquipmentDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentDataAsset_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalEquipmentDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalEquipmentDataAsset()
{
	if (!Z_Registration_Info_UClass_UKendalEquipmentDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalEquipmentDataAsset.OuterSingleton, Z_Construct_UClass_UKendalEquipmentDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalEquipmentDataAsset.OuterSingleton;
}
UKendalEquipmentDataAsset::UKendalEquipmentDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalEquipmentDataAsset);
UKendalEquipmentDataAsset::~UKendalEquipmentDataAsset() {}
// ********** End Class UKendalEquipmentDataAsset **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentDataAsset_h__Script_KendalEquipment_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKendalEquipmentDataAsset, UKendalEquipmentDataAsset::StaticClass, TEXT("UKendalEquipmentDataAsset"), &Z_Registration_Info_UClass_UKendalEquipmentDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalEquipmentDataAsset), 2595020002U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentDataAsset_h__Script_KendalEquipment_3737399015(TEXT("/Script/KendalEquipment"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentDataAsset_h__Script_KendalEquipment_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentDataAsset_h__Script_KendalEquipment_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
