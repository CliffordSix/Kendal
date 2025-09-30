// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalInteractionComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalInteractionComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
KENDALINTERACTION_API UClass* Z_Construct_UClass_UKendalInteractionComponent();
KENDALINTERACTION_API UClass* Z_Construct_UClass_UKendalInteractionComponent_NoRegister();
KENDALMAPMANAGEMENT_API UClass* Z_Construct_UClass_UKendalMapManagementSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKendalInteractionComponent **********************************************
void UKendalInteractionComponent::StaticRegisterNativesUKendalInteractionComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalInteractionComponent;
UClass* UKendalInteractionComponent::GetPrivateStaticClass()
{
	using TClass = UKendalInteractionComponent;
	if (!Z_Registration_Info_UClass_UKendalInteractionComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalInteractionComponent"),
			Z_Registration_Info_UClass_UKendalInteractionComponent.InnerSingleton,
			StaticRegisterNativesUKendalInteractionComponent,
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
	return Z_Registration_Info_UClass_UKendalInteractionComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalInteractionComponent_NoRegister()
{
	return UKendalInteractionComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalInteractionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Interaction Component reads adjacent tiles to the player character to determine the \"look at\" tile\n */" },
#endif
		{ "IncludePath", "KendalInteractionComponent.h" },
		{ "ModuleRelativePath", "Public/KendalInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Interaction Component reads adjacent tiles to the player character to determine the \"look at\" tile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/KendalInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/KendalInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTargetLocation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The last valid Interactable tile the owing actor has faced\n" },
#endif
		{ "ModuleRelativePath", "Public/KendalInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The last valid Interactable tile the owing actor has faced" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_MapSubsystem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousTargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKendalInteractionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UKendalInteractionComponent_Statics::NewProp_MapSubsystem = { "MapSubsystem", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalInteractionComponent, MapSubsystem), Z_Construct_UClass_UKendalMapManagementSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapSubsystem_MetaData), NewProp_MapSubsystem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKendalInteractionComponent_Statics::NewProp_TileLocation = { "TileLocation", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalInteractionComponent, TileLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileLocation_MetaData), NewProp_TileLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKendalInteractionComponent_Statics::NewProp_PreviousTargetLocation = { "PreviousTargetLocation", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalInteractionComponent, PreviousTargetLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousTargetLocation_MetaData), NewProp_PreviousTargetLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKendalInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalInteractionComponent_Statics::NewProp_MapSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalInteractionComponent_Statics::NewProp_TileLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalInteractionComponent_Statics::NewProp_PreviousTargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalInteractionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKendalInteractionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalInteractionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalInteractionComponent_Statics::ClassParams = {
	&UKendalInteractionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKendalInteractionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKendalInteractionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalInteractionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalInteractionComponent()
{
	if (!Z_Registration_Info_UClass_UKendalInteractionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalInteractionComponent.OuterSingleton, Z_Construct_UClass_UKendalInteractionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalInteractionComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalInteractionComponent);
UKendalInteractionComponent::~UKendalInteractionComponent() {}
// ********** End Class UKendalInteractionComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalInteraction_Public_KendalInteractionComponent_h__Script_KendalInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKendalInteractionComponent, UKendalInteractionComponent::StaticClass, TEXT("UKendalInteractionComponent"), &Z_Registration_Info_UClass_UKendalInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalInteractionComponent), 4141798566U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalInteraction_Public_KendalInteractionComponent_h__Script_KendalInteraction_3019974597(TEXT("/Script/KendalInteraction"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalInteraction_Public_KendalInteractionComponent_h__Script_KendalInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalInteraction_Public_KendalInteractionComponent_h__Script_KendalInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
