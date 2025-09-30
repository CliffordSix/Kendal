// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalInteractAbility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalInteractAbility() {}

// ********** Begin Cross Module References ********************************************************
KENDALGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UKendalGameplayAbility();
KENDALGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UKendalInteractAbility();
KENDALGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UKendalInteractAbility_NoRegister();
KENDALINTERACTION_API UClass* Z_Construct_UClass_UKendalInteractionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalGameplayAbilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKendalInteractAbility ***************************************************
void UKendalInteractAbility::StaticRegisterNativesUKendalInteractAbility()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalInteractAbility;
UClass* UKendalInteractAbility::GetPrivateStaticClass()
{
	using TClass = UKendalInteractAbility;
	if (!Z_Registration_Info_UClass_UKendalInteractAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalInteractAbility"),
			Z_Registration_Info_UClass_UKendalInteractAbility.InnerSingleton,
			StaticRegisterNativesUKendalInteractAbility,
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
	return Z_Registration_Info_UClass_UKendalInteractAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalInteractAbility_NoRegister()
{
	return UKendalInteractAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalInteractAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base Ability used to drive interactions with the world for a player\n */" },
#endif
		{ "IncludePath", "KendalInteractAbility.h" },
		{ "ModuleRelativePath", "Public/KendalInteractAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base Ability used to drive interactions with the world for a player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/KendalInteractAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_InteractionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKendalInteractAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UKendalInteractAbility_Statics::NewProp_InteractionComponent = { "InteractionComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalInteractAbility, InteractionComponent), Z_Construct_UClass_UKendalInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComponent_MetaData), NewProp_InteractionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKendalInteractAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalInteractAbility_Statics::NewProp_InteractionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalInteractAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKendalInteractAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UKendalGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalInteractAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalInteractAbility_Statics::ClassParams = {
	&UKendalInteractAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKendalInteractAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKendalInteractAbility_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalInteractAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalInteractAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalInteractAbility()
{
	if (!Z_Registration_Info_UClass_UKendalInteractAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalInteractAbility.OuterSingleton, Z_Construct_UClass_UKendalInteractAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalInteractAbility.OuterSingleton;
}
UKendalInteractAbility::UKendalInteractAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalInteractAbility);
UKendalInteractAbility::~UKendalInteractAbility() {}
// ********** End Class UKendalInteractAbility *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_KendalInteractAbility_h__Script_KendalGameplayAbilities_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKendalInteractAbility, UKendalInteractAbility::StaticClass, TEXT("UKendalInteractAbility"), &Z_Registration_Info_UClass_UKendalInteractAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalInteractAbility), 182710045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_KendalInteractAbility_h__Script_KendalGameplayAbilities_3307851047(TEXT("/Script/KendalGameplayAbilities"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_KendalInteractAbility_h__Script_KendalGameplayAbilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_KendalInteractAbility_h__Script_KendalGameplayAbilities_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
