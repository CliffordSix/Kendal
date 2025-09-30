// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalHudBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalHudBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
KENDALHUD_API UClass* Z_Construct_UClass_AKendalHudBase();
KENDALHUD_API UClass* Z_Construct_UClass_AKendalHudBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalHud();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKendalHudBase ***********************************************************
void AKendalHudBase::StaticRegisterNativesAKendalHudBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKendalHudBase;
UClass* AKendalHudBase::GetPrivateStaticClass()
{
	using TClass = AKendalHudBase;
	if (!Z_Registration_Info_UClass_AKendalHudBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalHudBase"),
			Z_Registration_Info_UClass_AKendalHudBase.InnerSingleton,
			StaticRegisterNativesAKendalHudBase,
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
	return Z_Registration_Info_UClass_AKendalHudBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AKendalHudBase_NoRegister()
{
	return AKendalHudBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKendalHudBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Kendal Specific HUD parent class\n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "KendalHudBase.h" },
		{ "ModuleRelativePath", "Public/KendalHudBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Kendal Specific HUD parent class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HudWidgetClass_MetaData[] = {
		{ "Category", "KendalHudBase" },
		{ "ModuleRelativePath", "Public/KendalHudBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HudWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KendalHudBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_HudWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HudWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKendalHudBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKendalHudBase_Statics::NewProp_HudWidgetClass = { "HudWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalHudBase, HudWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HudWidgetClass_MetaData), NewProp_HudWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKendalHudBase_Statics::NewProp_HudWidget = { "HudWidget", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalHudBase, HudWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HudWidget_MetaData), NewProp_HudWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKendalHudBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalHudBase_Statics::NewProp_HudWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalHudBase_Statics::NewProp_HudWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalHudBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKendalHudBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalHud,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalHudBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKendalHudBase_Statics::ClassParams = {
	&AKendalHudBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AKendalHudBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AKendalHudBase_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalHudBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AKendalHudBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKendalHudBase()
{
	if (!Z_Registration_Info_UClass_AKendalHudBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKendalHudBase.OuterSingleton, Z_Construct_UClass_AKendalHudBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKendalHudBase.OuterSingleton;
}
AKendalHudBase::AKendalHudBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKendalHudBase);
AKendalHudBase::~AKendalHudBase() {}
// ********** End Class AKendalHudBase *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalHud_Public_KendalHudBase_h__Script_KendalHud_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKendalHudBase, AKendalHudBase::StaticClass, TEXT("AKendalHudBase"), &Z_Registration_Info_UClass_AKendalHudBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKendalHudBase), 1931788498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalHud_Public_KendalHudBase_h__Script_KendalHud_3608770370(TEXT("/Script/KendalHud"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalHud_Public_KendalHudBase_h__Script_KendalHud_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalHud_Public_KendalHudBase_h__Script_KendalHud_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
