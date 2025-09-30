// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalGameplayAbility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalGameplayAbility() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
KENDALGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UKendalGameplayAbility();
KENDALGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UKendalGameplayAbility_NoRegister();
KENDALGAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_KendalGameplayAbilities_EKendalAbilityActivationPolicy();
UPackage* Z_Construct_UPackage__Script_KendalGameplayAbilities();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EKendalAbilityActivationPolicy ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKendalAbilityActivationPolicy;
static UEnum* EKendalAbilityActivationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKendalAbilityActivationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKendalAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KendalGameplayAbilities_EKendalAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_KendalGameplayAbilities(), TEXT("EKendalAbilityActivationPolicy"));
	}
	return Z_Registration_Info_UEnum_EKendalAbilityActivationPolicy.OuterSingleton;
}
template<> KENDALGAMEPLAYABILITIES_API UEnum* StaticEnum<EKendalAbilityActivationPolicy>()
{
	return EKendalAbilityActivationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_KendalGameplayAbilities_EKendalAbilityActivationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * EKendalAbilityActivationPolicy\n *\n *\x09""Defines how an ability is meant to activate.\n */" },
#endif
		{ "ModuleRelativePath", "Public/KendalGameplayAbility.h" },
		{ "OnInputReleased.Comment", "// Try to activate the ability when the input is released.\n" },
		{ "OnInputReleased.Name", "EKendalAbilityActivationPolicy::OnInputReleased" },
		{ "OnInputReleased.ToolTip", "Try to activate the ability when the input is released." },
		{ "OnInputTriggered.Comment", "// Try to activate the ability when the input is triggered.\n" },
		{ "OnInputTriggered.Name", "EKendalAbilityActivationPolicy::OnInputTriggered" },
		{ "OnInputTriggered.ToolTip", "Try to activate the ability when the input is triggered." },
		{ "OnSpawn.Comment", "// Try to activate the ability when an avatar is assigned.\n" },
		{ "OnSpawn.Name", "EKendalAbilityActivationPolicy::OnSpawn" },
		{ "OnSpawn.ToolTip", "Try to activate the ability when an avatar is assigned." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EKendalAbilityActivationPolicy\n\n    Defines how an ability is meant to activate." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKendalAbilityActivationPolicy::OnInputTriggered", (int64)EKendalAbilityActivationPolicy::OnInputTriggered },
		{ "EKendalAbilityActivationPolicy::OnInputReleased", (int64)EKendalAbilityActivationPolicy::OnInputReleased },
		{ "EKendalAbilityActivationPolicy::OnSpawn", (int64)EKendalAbilityActivationPolicy::OnSpawn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KendalGameplayAbilities_EKendalAbilityActivationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KendalGameplayAbilities,
	nullptr,
	"EKendalAbilityActivationPolicy",
	"EKendalAbilityActivationPolicy",
	Z_Construct_UEnum_KendalGameplayAbilities_EKendalAbilityActivationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KendalGameplayAbilities_EKendalAbilityActivationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KendalGameplayAbilities_EKendalAbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KendalGameplayAbilities_EKendalAbilityActivationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KendalGameplayAbilities_EKendalAbilityActivationPolicy()
{
	if (!Z_Registration_Info_UEnum_EKendalAbilityActivationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKendalAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_KendalGameplayAbilities_EKendalAbilityActivationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKendalAbilityActivationPolicy.InnerSingleton;
}
// ********** End Enum EKendalAbilityActivationPolicy **********************************************

// ********** Begin Class UKendalGameplayAbility ***************************************************
void UKendalGameplayAbility::StaticRegisterNativesUKendalGameplayAbility()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalGameplayAbility;
UClass* UKendalGameplayAbility::GetPrivateStaticClass()
{
	using TClass = UKendalGameplayAbility;
	if (!Z_Registration_Info_UClass_UKendalGameplayAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalGameplayAbility"),
			Z_Registration_Info_UClass_UKendalGameplayAbility.InnerSingleton,
			StaticRegisterNativesUKendalGameplayAbility,
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
	return Z_Registration_Info_UClass_UKendalGameplayAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalGameplayAbility_NoRegister()
{
	return UKendalGameplayAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base Class for Kendal Gameplay Abilities\n */" },
#endif
		{ "IncludePath", "KendalGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/KendalGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base Class for Kendal Gameplay Abilities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationPolicy_MetaData[] = {
		{ "Category", "Ability Activation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines how this ability is meant to activate.\n" },
#endif
		{ "ModuleRelativePath", "Public/KendalGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how this ability is meant to activate." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKendalGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKendalGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKendalGameplayAbility_Statics::NewProp_ActivationPolicy = { "ActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalGameplayAbility, ActivationPolicy), Z_Construct_UEnum_KendalGameplayAbilities_EKendalAbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationPolicy_MetaData), NewProp_ActivationPolicy_MetaData) }; // 1911944135
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKendalGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalGameplayAbility_Statics::NewProp_ActivationPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKendalGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalGameplayAbility_Statics::ClassParams = {
	&UKendalGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKendalGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKendalGameplayAbility_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UKendalGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalGameplayAbility.OuterSingleton, Z_Construct_UClass_UKendalGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalGameplayAbility.OuterSingleton;
}
UKendalGameplayAbility::UKendalGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalGameplayAbility);
UKendalGameplayAbility::~UKendalGameplayAbility() {}
// ********** End Class UKendalGameplayAbility *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_KendalGameplayAbility_h__Script_KendalGameplayAbilities_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKendalAbilityActivationPolicy_StaticEnum, TEXT("EKendalAbilityActivationPolicy"), &Z_Registration_Info_UEnum_EKendalAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1911944135U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKendalGameplayAbility, UKendalGameplayAbility::StaticClass, TEXT("UKendalGameplayAbility"), &Z_Registration_Info_UClass_UKendalGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalGameplayAbility), 1637296220U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_KendalGameplayAbility_h__Script_KendalGameplayAbilities_2773176485(TEXT("/Script/KendalGameplayAbilities"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_KendalGameplayAbility_h__Script_KendalGameplayAbilities_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_KendalGameplayAbility_h__Script_KendalGameplayAbilities_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_KendalGameplayAbility_h__Script_KendalGameplayAbilities_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameplayAbilities_Public_KendalGameplayAbility_h__Script_KendalGameplayAbilities_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
