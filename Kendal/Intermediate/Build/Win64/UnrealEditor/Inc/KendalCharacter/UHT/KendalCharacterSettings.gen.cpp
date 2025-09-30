// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalCharacterSettings.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalCharacterSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
KENDALCHARACTER_API UClass* Z_Construct_UClass_UKendalCharacterSettings();
KENDALCHARACTER_API UClass* Z_Construct_UClass_UKendalCharacterSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalCharacter();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKendalCharacterSettings Function GetMovementInputTag ********************
struct Z_Construct_UFunction_UKendalCharacterSettings_GetMovementInputTag_Statics
{
	struct KendalCharacterSettings_eventGetMovementInputTag_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Tags" },
		{ "ModuleRelativePath", "Public/KendalCharacterSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKendalCharacterSettings_GetMovementInputTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalCharacterSettings_eventGetMovementInputTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKendalCharacterSettings_GetMovementInputTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalCharacterSettings_GetMovementInputTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalCharacterSettings_GetMovementInputTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKendalCharacterSettings_GetMovementInputTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKendalCharacterSettings, nullptr, "GetMovementInputTag", Z_Construct_UFunction_UKendalCharacterSettings_GetMovementInputTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalCharacterSettings_GetMovementInputTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKendalCharacterSettings_GetMovementInputTag_Statics::KendalCharacterSettings_eventGetMovementInputTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalCharacterSettings_GetMovementInputTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKendalCharacterSettings_GetMovementInputTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKendalCharacterSettings_GetMovementInputTag_Statics::KendalCharacterSettings_eventGetMovementInputTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKendalCharacterSettings_GetMovementInputTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKendalCharacterSettings_GetMovementInputTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKendalCharacterSettings::execGetMovementInputTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=UKendalCharacterSettings::GetMovementInputTag();
	P_NATIVE_END;
}
// ********** End Class UKendalCharacterSettings Function GetMovementInputTag **********************

// ********** Begin Class UKendalCharacterSettings *************************************************
void UKendalCharacterSettings::StaticRegisterNativesUKendalCharacterSettings()
{
	UClass* Class = UKendalCharacterSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMovementInputTag", &UKendalCharacterSettings::execGetMovementInputTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalCharacterSettings;
UClass* UKendalCharacterSettings::GetPrivateStaticClass()
{
	using TClass = UKendalCharacterSettings;
	if (!Z_Registration_Info_UClass_UKendalCharacterSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalCharacterSettings"),
			Z_Registration_Info_UClass_UKendalCharacterSettings.InnerSingleton,
			StaticRegisterNativesUKendalCharacterSettings,
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
	return Z_Registration_Info_UClass_UKendalCharacterSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalCharacterSettings_NoRegister()
{
	return UKendalCharacterSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalCharacterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Config class storing user settings for the Character Module\n */" },
#endif
		{ "DisplayName", "Kendal Character Settings" },
		{ "IncludePath", "KendalCharacterSettings.h" },
		{ "ModuleRelativePath", "Public/KendalCharacterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Config class storing user settings for the Character Module" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementInputTag_MetaData[] = {
		{ "Category", "KendalCharacterSettings" },
		{ "ModuleRelativePath", "Public/KendalCharacterSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementInputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKendalCharacterSettings_GetMovementInputTag, "GetMovementInputTag" }, // 1742770335
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKendalCharacterSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKendalCharacterSettings_Statics::NewProp_MovementInputTag = { "MovementInputTag", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalCharacterSettings, MovementInputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementInputTag_MetaData), NewProp_MovementInputTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKendalCharacterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalCharacterSettings_Statics::NewProp_MovementInputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalCharacterSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKendalCharacterSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalCharacterSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalCharacterSettings_Statics::ClassParams = {
	&UKendalCharacterSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKendalCharacterSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKendalCharacterSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalCharacterSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalCharacterSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalCharacterSettings()
{
	if (!Z_Registration_Info_UClass_UKendalCharacterSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalCharacterSettings.OuterSingleton, Z_Construct_UClass_UKendalCharacterSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalCharacterSettings.OuterSingleton;
}
UKendalCharacterSettings::UKendalCharacterSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalCharacterSettings);
UKendalCharacterSettings::~UKendalCharacterSettings() {}
// ********** End Class UKendalCharacterSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalCharacter_Public_KendalCharacterSettings_h__Script_KendalCharacter_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKendalCharacterSettings, UKendalCharacterSettings::StaticClass, TEXT("UKendalCharacterSettings"), &Z_Registration_Info_UClass_UKendalCharacterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalCharacterSettings), 4291278562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalCharacter_Public_KendalCharacterSettings_h__Script_KendalCharacter_1534062343(TEXT("/Script/KendalCharacter"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalCharacter_Public_KendalCharacterSettings_h__Script_KendalCharacter_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalCharacter_Public_KendalCharacterSettings_h__Script_KendalCharacter_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
