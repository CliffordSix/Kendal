// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalInputComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalInputComponent() {}

// ********** Begin Cross Module References ********************************************************
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
INPUT_API UClass* Z_Construct_UClass_UKendalInputComponent();
INPUT_API UClass* Z_Construct_UClass_UKendalInputComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Input();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKendalInputComponent ****************************************************
void UKendalInputComponent::StaticRegisterNativesUKendalInputComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalInputComponent;
UClass* UKendalInputComponent::GetPrivateStaticClass()
{
	using TClass = UKendalInputComponent;
	if (!Z_Registration_Info_UClass_UKendalInputComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalInputComponent"),
			Z_Registration_Info_UClass_UKendalInputComponent.InnerSingleton,
			StaticRegisterNativesUKendalInputComponent,
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
	return Z_Registration_Info_UClass_UKendalInputComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalInputComponent_NoRegister()
{
	return UKendalInputComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Input Component binds the IMC\n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "KendalInputComponent.h" },
		{ "ModuleRelativePath", "Public/KendalInputComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Component binds the IMC" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKendalInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKendalInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalInputComponent_Statics::ClassParams = {
	&UKendalInputComponent::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalInputComponent()
{
	if (!Z_Registration_Info_UClass_UKendalInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalInputComponent.OuterSingleton, Z_Construct_UClass_UKendalInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalInputComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalInputComponent);
UKendalInputComponent::~UKendalInputComponent() {}
// ********** End Class UKendalInputComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_Input_Public_KendalInputComponent_h__Script_Input_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKendalInputComponent, UKendalInputComponent::StaticClass, TEXT("UKendalInputComponent"), &Z_Registration_Info_UClass_UKendalInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalInputComponent), 3697057439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_Input_Public_KendalInputComponent_h__Script_Input_2108040965(TEXT("/Script/Input"),
	Z_CompiledInDeferFile_FID_Kendal_Source_Input_Public_KendalInputComponent_h__Script_Input_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_Input_Public_KendalInputComponent_h__Script_Input_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
