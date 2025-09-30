// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalEquipmentInstanced.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalEquipmentInstanced() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_AKendalEquipmentInstanced();
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_AKendalEquipmentInstanced_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalEquipment();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKendalEquipmentInstanced ************************************************
void AKendalEquipmentInstanced::StaticRegisterNativesAKendalEquipmentInstanced()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKendalEquipmentInstanced;
UClass* AKendalEquipmentInstanced::GetPrivateStaticClass()
{
	using TClass = AKendalEquipmentInstanced;
	if (!Z_Registration_Info_UClass_AKendalEquipmentInstanced.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalEquipmentInstanced"),
			Z_Registration_Info_UClass_AKendalEquipmentInstanced.InnerSingleton,
			StaticRegisterNativesAKendalEquipmentInstanced,
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
	return Z_Registration_Info_UClass_AKendalEquipmentInstanced.InnerSingleton;
}
UClass* Z_Construct_UClass_AKendalEquipmentInstanced_NoRegister()
{
	return AKendalEquipmentInstanced::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKendalEquipmentInstanced_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Instanced Actor for an equipment item, this would be the item found on the floor in a world waiting to be picked up.\n */" },
#endif
		{ "IncludePath", "KendalEquipmentInstanced.h" },
		{ "ModuleRelativePath", "Public/KendalEquipmentInstanced.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Instanced Actor for an equipment item, this would be the item found on the floor in a world waiting to be picked up." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KendalEquipmentInstanced" },
		{ "ModuleRelativePath", "Public/KendalEquipmentInstanced.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KendalEquipmentInstanced.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollisionComponent_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KendalEquipmentInstanced.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveScaleFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KendalEquipmentInstanced" },
		{ "ModuleRelativePath", "Public/KendalEquipmentInstanced.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollisionComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveScaleFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKendalEquipmentInstanced>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AKendalEquipmentInstanced_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalEquipmentInstanced, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKendalEquipmentInstanced_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalEquipmentInstanced, SpriteComponent), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKendalEquipmentInstanced_Statics::NewProp_SphereCollisionComponent = { "SphereCollisionComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalEquipmentInstanced, SphereCollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCollisionComponent_MetaData), NewProp_SphereCollisionComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKendalEquipmentInstanced_Statics::NewProp_CurveScaleFactor = { "CurveScaleFactor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalEquipmentInstanced, CurveScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveScaleFactor_MetaData), NewProp_CurveScaleFactor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKendalEquipmentInstanced_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalEquipmentInstanced_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalEquipmentInstanced_Statics::NewProp_SpriteComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalEquipmentInstanced_Statics::NewProp_SphereCollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalEquipmentInstanced_Statics::NewProp_CurveScaleFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalEquipmentInstanced_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKendalEquipmentInstanced_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalEquipmentInstanced_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKendalEquipmentInstanced_Statics::ClassParams = {
	&AKendalEquipmentInstanced::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AKendalEquipmentInstanced_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AKendalEquipmentInstanced_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalEquipmentInstanced_Statics::Class_MetaDataParams), Z_Construct_UClass_AKendalEquipmentInstanced_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKendalEquipmentInstanced()
{
	if (!Z_Registration_Info_UClass_AKendalEquipmentInstanced.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKendalEquipmentInstanced.OuterSingleton, Z_Construct_UClass_AKendalEquipmentInstanced_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKendalEquipmentInstanced.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKendalEquipmentInstanced);
AKendalEquipmentInstanced::~AKendalEquipmentInstanced() {}
// ********** End Class AKendalEquipmentInstanced **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentInstanced_h__Script_KendalEquipment_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKendalEquipmentInstanced, AKendalEquipmentInstanced::StaticClass, TEXT("AKendalEquipmentInstanced"), &Z_Registration_Info_UClass_AKendalEquipmentInstanced, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKendalEquipmentInstanced), 2031512175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentInstanced_h__Script_KendalEquipment_894023704(TEXT("/Script/KendalEquipment"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentInstanced_h__Script_KendalEquipment_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentInstanced_h__Script_KendalEquipment_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
