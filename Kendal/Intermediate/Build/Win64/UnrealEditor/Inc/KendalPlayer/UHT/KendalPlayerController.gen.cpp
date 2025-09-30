// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
KENDALGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UKendalAbilitySystemComponent_NoRegister();
KENDALPLAYER_API UClass* Z_Construct_UClass_AKendalPlayerController();
KENDALPLAYER_API UClass* Z_Construct_UClass_AKendalPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalPlayer();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKendalPlayerController Function GetAbilitySystemComponent ***************
struct Z_Construct_UFunction_AKendalPlayerController_GetAbilitySystemComponent_Statics
{
	struct KendalPlayerController_eventGetAbilitySystemComponent_Parms
	{
		UKendalAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "ModuleRelativePath", "Public/KendalPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKendalPlayerController_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalPlayerController_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UKendalAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKendalPlayerController_GetAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKendalPlayerController_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKendalPlayerController_GetAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKendalPlayerController_GetAbilitySystemComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AKendalPlayerController, nullptr, "GetAbilitySystemComponent", Z_Construct_UFunction_AKendalPlayerController_GetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKendalPlayerController_GetAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKendalPlayerController_GetAbilitySystemComponent_Statics::KendalPlayerController_eventGetAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKendalPlayerController_GetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKendalPlayerController_GetAbilitySystemComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AKendalPlayerController_GetAbilitySystemComponent_Statics::KendalPlayerController_eventGetAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKendalPlayerController_GetAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKendalPlayerController_GetAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKendalPlayerController::execGetAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UKendalAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent();
	P_NATIVE_END;
}
// ********** End Class AKendalPlayerController Function GetAbilitySystemComponent *****************

// ********** Begin Class AKendalPlayerController **************************************************
void AKendalPlayerController::StaticRegisterNativesAKendalPlayerController()
{
	UClass* Class = AKendalPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAbilitySystemComponent", &AKendalPlayerController::execGetAbilitySystemComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKendalPlayerController;
UClass* AKendalPlayerController::GetPrivateStaticClass()
{
	using TClass = AKendalPlayerController;
	if (!Z_Registration_Info_UClass_AKendalPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalPlayerController"),
			Z_Registration_Info_UClass_AKendalPlayerController.InnerSingleton,
			StaticRegisterNativesAKendalPlayerController,
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
	return Z_Registration_Info_UClass_AKendalPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AKendalPlayerController_NoRegister()
{
	return AKendalPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKendalPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Player Controller class for Kendal Pawns\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "KendalPlayerController.h" },
		{ "ModuleRelativePath", "Public/KendalPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Controller class for Kendal Pawns" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AKendalPlayerController_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 2001424687
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKendalPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AKendalPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKendalPlayerController_Statics::ClassParams = {
	&AKendalPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AKendalPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKendalPlayerController()
{
	if (!Z_Registration_Info_UClass_AKendalPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKendalPlayerController.OuterSingleton, Z_Construct_UClass_AKendalPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKendalPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKendalPlayerController);
AKendalPlayerController::~AKendalPlayerController() {}
// ********** End Class AKendalPlayerController ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalPlayer_Public_KendalPlayerController_h__Script_KendalPlayer_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKendalPlayerController, AKendalPlayerController::StaticClass, TEXT("AKendalPlayerController"), &Z_Registration_Info_UClass_AKendalPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKendalPlayerController), 2198274232U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalPlayer_Public_KendalPlayerController_h__Script_KendalPlayer_1132094301(TEXT("/Script/KendalPlayer"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalPlayer_Public_KendalPlayerController_h__Script_KendalPlayer_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalPlayer_Public_KendalPlayerController_h__Script_KendalPlayer_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
