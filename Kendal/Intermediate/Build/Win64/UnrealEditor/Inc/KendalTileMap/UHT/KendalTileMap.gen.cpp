// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalTileMap.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalTileMap() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
KENDALTILEMAP_API UClass* Z_Construct_UClass_UKendalTileMap();
KENDALTILEMAP_API UClass* Z_Construct_UClass_UKendalTileMap_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMap();
UPackage* Z_Construct_UPackage__Script_KendalTileMap();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKendalTileMap ***********************************************************
void UKendalTileMap::StaticRegisterNativesUKendalTileMap()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalTileMap;
UClass* UKendalTileMap::GetPrivateStaticClass()
{
	using TClass = UKendalTileMap;
	if (!Z_Registration_Info_UClass_UKendalTileMap.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalTileMap"),
			Z_Registration_Info_UClass_UKendalTileMap.InnerSingleton,
			StaticRegisterNativesUKendalTileMap,
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
	return Z_Registration_Info_UClass_UKendalTileMap.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalTileMap_NoRegister()
{
	return UKendalTileMap::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalTileMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Kendal Specific child of the Paper2D tile map. Contains expanded functionality on the original system\n */" },
#endif
		{ "IncludePath", "KendalTileMap.h" },
		{ "ModuleRelativePath", "Public/KendalTileMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Kendal Specific child of the Paper2D tile map. Contains expanded functionality on the original system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerMaterials_MetaData[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mapping of materials to layers allowing for more flexible shaders on tilemaps\n" },
#endif
		{ "ModuleRelativePath", "Public/KendalTileMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping of materials to layers allowing for more flexible shaders on tilemaps" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKendalTileMap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKendalTileMap_Statics::NewProp_LayerMaterials_Inner = { "LayerMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKendalTileMap_Statics::NewProp_LayerMaterials = { "LayerMaterials", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalTileMap, LayerMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerMaterials_MetaData), NewProp_LayerMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKendalTileMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalTileMap_Statics::NewProp_LayerMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalTileMap_Statics::NewProp_LayerMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalTileMap_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKendalTileMap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPaperTileMap,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalTileMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalTileMap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalTileMap_Statics::ClassParams = {
	&UKendalTileMap::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKendalTileMap_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKendalTileMap_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalTileMap_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalTileMap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalTileMap()
{
	if (!Z_Registration_Info_UClass_UKendalTileMap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalTileMap.OuterSingleton, Z_Construct_UClass_UKendalTileMap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalTileMap.OuterSingleton;
}
UKendalTileMap::UKendalTileMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalTileMap);
UKendalTileMap::~UKendalTileMap() {}
// ********** End Class UKendalTileMap *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalTileMap_h__Script_KendalTileMap_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKendalTileMap, UKendalTileMap::StaticClass, TEXT("UKendalTileMap"), &Z_Registration_Info_UClass_UKendalTileMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalTileMap), 4012463413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalTileMap_h__Script_KendalTileMap_280033236(TEXT("/Script/KendalTileMap"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalTileMap_h__Script_KendalTileMap_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalTileMap_h__Script_KendalTileMap_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
