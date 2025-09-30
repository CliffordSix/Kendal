// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalEquipmentManagerComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalEquipmentManagerComponent() {}

// ********** Begin Cross Module References ********************************************************
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentManagerComponent();
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentManagerComponent_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
UPackage* Z_Construct_UPackage__Script_KendalEquipment();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKendalEquipmentManagerComponent *****************************************
void UKendalEquipmentManagerComponent::StaticRegisterNativesUKendalEquipmentManagerComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalEquipmentManagerComponent;
UClass* UKendalEquipmentManagerComponent::GetPrivateStaticClass()
{
	using TClass = UKendalEquipmentManagerComponent;
	if (!Z_Registration_Info_UClass_UKendalEquipmentManagerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalEquipmentManagerComponent"),
			Z_Registration_Info_UClass_UKendalEquipmentManagerComponent.InnerSingleton,
			StaticRegisterNativesUKendalEquipmentManagerComponent,
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
	return Z_Registration_Info_UClass_UKendalEquipmentManagerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalEquipmentManagerComponent_NoRegister()
{
	return UKendalEquipmentManagerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalEquipmentManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Pawn Component used to manage equipment for a character. The intention is for players but lets not rule\n * out using this on NPCs\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "KendalEquipmentManagerComponent.h" },
		{ "ModuleRelativePath", "Public/KendalEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Pawn Component used to manage equipment for a character. The intention is for players but lets not rule\n* out using this on NPCs" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKendalEquipmentManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKendalEquipmentManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalEquipmentManagerComponent_Statics::ClassParams = {
	&UKendalEquipmentManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalEquipmentManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalEquipmentManagerComponent()
{
	if (!Z_Registration_Info_UClass_UKendalEquipmentManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalEquipmentManagerComponent.OuterSingleton, Z_Construct_UClass_UKendalEquipmentManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalEquipmentManagerComponent.OuterSingleton;
}
UKendalEquipmentManagerComponent::UKendalEquipmentManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalEquipmentManagerComponent);
UKendalEquipmentManagerComponent::~UKendalEquipmentManagerComponent() {}
// ********** End Class UKendalEquipmentManagerComponent *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentManagerComponent_h__Script_KendalEquipment_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKendalEquipmentManagerComponent, UKendalEquipmentManagerComponent::StaticClass, TEXT("UKendalEquipmentManagerComponent"), &Z_Registration_Info_UClass_UKendalEquipmentManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalEquipmentManagerComponent), 3057244345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentManagerComponent_h__Script_KendalEquipment_1893832225(TEXT("/Script/KendalEquipment"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentManagerComponent_h__Script_KendalEquipment_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentManagerComponent_h__Script_KendalEquipment_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
