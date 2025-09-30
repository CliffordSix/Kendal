// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalCharacterMovementComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalCharacterMovementComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
KENDALMOVEMENT_API UClass* Z_Construct_UClass_UKendalCharacterMovementComponent();
KENDALMOVEMENT_API UClass* Z_Construct_UClass_UKendalCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalMovement();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKendalCharacterMovementComponent ****************************************
void UKendalCharacterMovementComponent::StaticRegisterNativesUKendalCharacterMovementComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalCharacterMovementComponent;
UClass* UKendalCharacterMovementComponent::GetPrivateStaticClass()
{
	using TClass = UKendalCharacterMovementComponent;
	if (!Z_Registration_Info_UClass_UKendalCharacterMovementComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalCharacterMovementComponent"),
			Z_Registration_Info_UClass_UKendalCharacterMovementComponent.InnerSingleton,
			StaticRegisterNativesUKendalCharacterMovementComponent,
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
	return Z_Registration_Info_UClass_UKendalCharacterMovementComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalCharacterMovementComponent_NoRegister()
{
	return UKendalCharacterMovementComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Extends Charactermovement component to better accomodate a top down 2d character\n */" },
#endif
		{ "IncludePath", "KendalCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/KendalCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Extends Charactermovement component to better accomodate a top down 2d character" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKendalCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKendalCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalCharacterMovementComponent_Statics::ClassParams = {
	&UKendalCharacterMovementComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UKendalCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UKendalCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalCharacterMovementComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalCharacterMovementComponent);
UKendalCharacterMovementComponent::~UKendalCharacterMovementComponent() {}
// ********** End Class UKendalCharacterMovementComponent ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalMovement_Public_KendalCharacterMovementComponent_h__Script_KendalMovement_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKendalCharacterMovementComponent, UKendalCharacterMovementComponent::StaticClass, TEXT("UKendalCharacterMovementComponent"), &Z_Registration_Info_UClass_UKendalCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalCharacterMovementComponent), 3638013781U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalMovement_Public_KendalCharacterMovementComponent_h__Script_KendalMovement_2123971780(TEXT("/Script/KendalMovement"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalMovement_Public_KendalCharacterMovementComponent_h__Script_KendalMovement_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalMovement_Public_KendalCharacterMovementComponent_h__Script_KendalMovement_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
