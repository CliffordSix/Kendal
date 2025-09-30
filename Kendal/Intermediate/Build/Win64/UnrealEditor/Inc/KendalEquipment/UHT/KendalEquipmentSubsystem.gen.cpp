// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalEquipmentSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalEquipmentSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_AKendalEquipmentInstanced_NoRegister();
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentSubsystem();
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalEquipment();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKendalEquipmentSubsystem ************************************************
void UKendalEquipmentSubsystem::StaticRegisterNativesUKendalEquipmentSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalEquipmentSubsystem;
UClass* UKendalEquipmentSubsystem::GetPrivateStaticClass()
{
	using TClass = UKendalEquipmentSubsystem;
	if (!Z_Registration_Info_UClass_UKendalEquipmentSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalEquipmentSubsystem"),
			Z_Registration_Info_UClass_UKendalEquipmentSubsystem.InnerSingleton,
			StaticRegisterNativesUKendalEquipmentSubsystem,
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
	return Z_Registration_Info_UClass_UKendalEquipmentSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalEquipmentSubsystem_NoRegister()
{
	return UKendalEquipmentSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalEquipmentSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Subsystem used to spawn Equipment. Manages a pool of equipment instance actors\n */" },
#endif
		{ "IncludePath", "KendalEquipmentSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KendalEquipmentSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subsystem used to spawn Equipment. Manages a pool of equipment instance actors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePoolSize_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "KendalEquipmentSubsystem" },
		{ "ModuleRelativePath", "Public/KendalEquipmentSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/KendalEquipmentSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BasePoolSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentPool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipmentPool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKendalEquipmentSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKendalEquipmentSubsystem_Statics::NewProp_BasePoolSize = { "BasePoolSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalEquipmentSubsystem, BasePoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePoolSize_MetaData), NewProp_BasePoolSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKendalEquipmentSubsystem_Statics::NewProp_EquipmentPool_Inner = { "EquipmentPool", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AKendalEquipmentInstanced_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKendalEquipmentSubsystem_Statics::NewProp_EquipmentPool = { "EquipmentPool", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalEquipmentSubsystem, EquipmentPool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentPool_MetaData), NewProp_EquipmentPool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKendalEquipmentSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalEquipmentSubsystem_Statics::NewProp_BasePoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalEquipmentSubsystem_Statics::NewProp_EquipmentPool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalEquipmentSubsystem_Statics::NewProp_EquipmentPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKendalEquipmentSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalEquipmentSubsystem_Statics::ClassParams = {
	&UKendalEquipmentSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKendalEquipmentSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalEquipmentSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalEquipmentSubsystem()
{
	if (!Z_Registration_Info_UClass_UKendalEquipmentSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalEquipmentSubsystem.OuterSingleton, Z_Construct_UClass_UKendalEquipmentSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalEquipmentSubsystem.OuterSingleton;
}
UKendalEquipmentSubsystem::UKendalEquipmentSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalEquipmentSubsystem);
UKendalEquipmentSubsystem::~UKendalEquipmentSubsystem() {}
// ********** End Class UKendalEquipmentSubsystem **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentSubsystem_h__Script_KendalEquipment_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKendalEquipmentSubsystem, UKendalEquipmentSubsystem::StaticClass, TEXT("UKendalEquipmentSubsystem"), &Z_Registration_Info_UClass_UKendalEquipmentSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalEquipmentSubsystem), 82373120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentSubsystem_h__Script_KendalEquipment_2663390001(TEXT("/Script/KendalEquipment"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentSubsystem_h__Script_KendalEquipment_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentSubsystem_h__Script_KendalEquipment_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
