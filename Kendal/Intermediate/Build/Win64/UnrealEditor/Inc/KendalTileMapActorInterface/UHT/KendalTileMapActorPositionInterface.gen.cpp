// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalTileMapActorPositionInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalTileMapActorPositionInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
KENDALTILEMAPACTORINTERFACE_API UClass* Z_Construct_UClass_UKendalTileMapActorPositionInterface();
KENDALTILEMAPACTORINTERFACE_API UClass* Z_Construct_UClass_UKendalTileMapActorPositionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalTileMapActorInterface();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UKendalTileMapActorPositionInterface *********************************
void UKendalTileMapActorPositionInterface::StaticRegisterNativesUKendalTileMapActorPositionInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalTileMapActorPositionInterface;
UClass* UKendalTileMapActorPositionInterface::GetPrivateStaticClass()
{
	using TClass = UKendalTileMapActorPositionInterface;
	if (!Z_Registration_Info_UClass_UKendalTileMapActorPositionInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalTileMapActorPositionInterface"),
			Z_Registration_Info_UClass_UKendalTileMapActorPositionInterface.InnerSingleton,
			StaticRegisterNativesUKendalTileMapActorPositionInterface,
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
	return Z_Registration_Info_UClass_UKendalTileMapActorPositionInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalTileMapActorPositionInterface_NoRegister()
{
	return UKendalTileMapActorPositionInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalTileMapActorPositionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KendalTileMapActorPositionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IKendalTileMapActorPositionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKendalTileMapActorPositionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalTileMapActorInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalTileMapActorPositionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalTileMapActorPositionInterface_Statics::ClassParams = {
	&UKendalTileMapActorPositionInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalTileMapActorPositionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalTileMapActorPositionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalTileMapActorPositionInterface()
{
	if (!Z_Registration_Info_UClass_UKendalTileMapActorPositionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalTileMapActorPositionInterface.OuterSingleton, Z_Construct_UClass_UKendalTileMapActorPositionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalTileMapActorPositionInterface.OuterSingleton;
}
UKendalTileMapActorPositionInterface::UKendalTileMapActorPositionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalTileMapActorPositionInterface);
// ********** End Interface UKendalTileMapActorPositionInterface ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMapActorInterface_Public_KendalTileMapActorPositionInterface_h__Script_KendalTileMapActorInterface_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKendalTileMapActorPositionInterface, UKendalTileMapActorPositionInterface::StaticClass, TEXT("UKendalTileMapActorPositionInterface"), &Z_Registration_Info_UClass_UKendalTileMapActorPositionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalTileMapActorPositionInterface), 2930188596U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMapActorInterface_Public_KendalTileMapActorPositionInterface_h__Script_KendalTileMapActorInterface_1228022270(TEXT("/Script/KendalTileMapActorInterface"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMapActorInterface_Public_KendalTileMapActorPositionInterface_h__Script_KendalTileMapActorInterface_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMapActorInterface_Public_KendalTileMapActorPositionInterface_h__Script_KendalTileMapActorInterface_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
