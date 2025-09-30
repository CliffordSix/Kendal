// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystemComponent/KendalAbilitySystemComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalAbilitySystemComponent() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
KENDALGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UKendalAbilitySystemComponent();
KENDALGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UKendalAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalGameplayAbilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKendalAbilitySystemComponent ********************************************
void UKendalAbilitySystemComponent::StaticRegisterNativesUKendalAbilitySystemComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalAbilitySystemComponent;
UClass* UKendalAbilitySystemComponent::GetPrivateStaticClass()
{
	using TClass = UKendalAbilitySystemComponent;
	if (!Z_Registration_Info_UClass_UKendalAbilitySystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalAbilitySystemComponent"),
			Z_Registration_Info_UClass_UKendalAbilitySystemComponent.InnerSingleton,
			StaticRegisterNativesUKendalAbilitySystemComponent,
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
	return Z_Registration_Info_UClass_UKendalAbilitySystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalAbilitySystemComponent_NoRegister()
{
	return UKendalAbilitySystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Base Ability System Component for Kendal Actors\n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystemComponent/KendalAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystemComponent/KendalAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Base Ability System Component for Kendal Actors" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKendalAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKendalAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalAbilitySystemComponent_Statics::ClassParams = {
	&UKendalAbilitySystemComponent::StaticClass,
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
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UKendalAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UKendalAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalAbilitySystemComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalAbilitySystemComponent);
UKendalAbilitySystemComponent::~UKendalAbilitySystemComponent() {}
// ********** End Class UKendalAbilitySystemComponent **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_AbilitySystemComponent_KendalAbilitySystemComponent_h__Script_KendalGameplayAbilities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKendalAbilitySystemComponent, UKendalAbilitySystemComponent::StaticClass, TEXT("UKendalAbilitySystemComponent"), &Z_Registration_Info_UClass_UKendalAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalAbilitySystemComponent), 244233677U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_AbilitySystemComponent_KendalAbilitySystemComponent_h__Script_KendalGameplayAbilities_4273520339(TEXT("/Script/KendalGameplayAbilities"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_AbilitySystemComponent_KendalAbilitySystemComponent_h__Script_KendalGameplayAbilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_AbilitySystemComponent_KendalAbilitySystemComponent_h__Script_KendalGameplayAbilities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
