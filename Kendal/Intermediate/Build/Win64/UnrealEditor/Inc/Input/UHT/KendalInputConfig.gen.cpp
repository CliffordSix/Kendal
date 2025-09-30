// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalInputConfig.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalInputConfig() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INPUT_API UClass* Z_Construct_UClass_UKendalInputConfig();
INPUT_API UClass* Z_Construct_UClass_UKendalInputConfig_NoRegister();
INPUT_API UScriptStruct* Z_Construct_UScriptStruct_FKendalInputAction();
UPackage* Z_Construct_UPackage__Script_Input();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FKendalInputAction ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FKendalInputAction;
class UScriptStruct* FKendalInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FKendalInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FKendalInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKendalInputAction, (UObject*)Z_Construct_UPackage__Script_Input(), TEXT("KendalInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_FKendalInputAction.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FKendalInputAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Maps Input Action to a Gameplay Tag (Shamelessly taken from Lyra)\n */" },
#endif
		{ "ModuleRelativePath", "Public/KendalInputConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Maps Input Action to a Gameplay Tag (Shamelessly taken from Lyra)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "KendalInputAction" },
		{ "ModuleRelativePath", "Public/KendalInputConfig.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "Input" },
		{ "Category", "KendalInputAction" },
		{ "ModuleRelativePath", "Public/KendalInputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKendalInputAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FKendalInputAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKendalInputAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKendalInputAction_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKendalInputAction, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKendalInputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKendalInputAction_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKendalInputAction_Statics::NewProp_InputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKendalInputAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKendalInputAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Input,
	nullptr,
	&NewStructOps,
	"KendalInputAction",
	Z_Construct_UScriptStruct_FKendalInputAction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKendalInputAction_Statics::PropPointers),
	sizeof(FKendalInputAction),
	alignof(FKendalInputAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKendalInputAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKendalInputAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKendalInputAction()
{
	if (!Z_Registration_Info_UScriptStruct_FKendalInputAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FKendalInputAction.InnerSingleton, Z_Construct_UScriptStruct_FKendalInputAction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FKendalInputAction.InnerSingleton;
}
// ********** End ScriptStruct FKendalInputAction **************************************************

// ********** Begin Class UKendalInputConfig Function FindAbilityInputActionForTag *****************
struct Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics
{
	struct KendalInputConfig_eventFindAbilityInputActionForTag_Parms
	{
		FGameplayTag InputTag;
		bool bLogNotFound;
		const UInputAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "CPP_Default_bLogNotFound", "true" },
		{ "ModuleRelativePath", "Public/KendalInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static void NewProp_bLogNotFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogNotFound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalInputConfig_eventFindAbilityInputActionForTag_Parms, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 133831994
void Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound_SetBit(void* Obj)
{
	((KendalInputConfig_eventFindAbilityInputActionForTag_Parms*)Obj)->bLogNotFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound = { "bLogNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KendalInputConfig_eventFindAbilityInputActionForTag_Parms), &Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalInputConfig_eventFindAbilityInputActionForTag_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKendalInputConfig, nullptr, "FindAbilityInputActionForTag", Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::KendalInputConfig_eventFindAbilityInputActionForTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::KendalInputConfig_eventFindAbilityInputActionForTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKendalInputConfig::execFindAbilityInputActionForTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InputTag);
	P_GET_UBOOL(Z_Param_bLogNotFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UInputAction**)Z_Param__Result=P_THIS->FindAbilityInputActionForTag(Z_Param_Out_InputTag,Z_Param_bLogNotFound);
	P_NATIVE_END;
}
// ********** End Class UKendalInputConfig Function FindAbilityInputActionForTag *******************

// ********** Begin Class UKendalInputConfig Function FindNativeInputActionForTag ******************
struct Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics
{
	struct KendalInputConfig_eventFindNativeInputActionForTag_Parms
	{
		FGameplayTag InputTag;
		bool bLogNotFound;
		const UInputAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "CPP_Default_bLogNotFound", "true" },
		{ "ModuleRelativePath", "Public/KendalInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static void NewProp_bLogNotFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogNotFound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalInputConfig_eventFindNativeInputActionForTag_Parms, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 133831994
void Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound_SetBit(void* Obj)
{
	((KendalInputConfig_eventFindNativeInputActionForTag_Parms*)Obj)->bLogNotFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound = { "bLogNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KendalInputConfig_eventFindNativeInputActionForTag_Parms), &Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalInputConfig_eventFindNativeInputActionForTag_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKendalInputConfig, nullptr, "FindNativeInputActionForTag", Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::KendalInputConfig_eventFindNativeInputActionForTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::KendalInputConfig_eventFindNativeInputActionForTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKendalInputConfig::execFindNativeInputActionForTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InputTag);
	P_GET_UBOOL(Z_Param_bLogNotFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UInputAction**)Z_Param__Result=P_THIS->FindNativeInputActionForTag(Z_Param_Out_InputTag,Z_Param_bLogNotFound);
	P_NATIVE_END;
}
// ********** End Class UKendalInputConfig Function FindNativeInputActionForTag ********************

// ********** Begin Class UKendalInputConfig *******************************************************
void UKendalInputConfig::StaticRegisterNativesUKendalInputConfig()
{
	UClass* Class = UKendalInputConfig::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindAbilityInputActionForTag", &UKendalInputConfig::execFindAbilityInputActionForTag },
		{ "FindNativeInputActionForTag", &UKendalInputConfig::execFindNativeInputActionForTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalInputConfig;
UClass* UKendalInputConfig::GetPrivateStaticClass()
{
	using TClass = UKendalInputConfig;
	if (!Z_Registration_Info_UClass_UKendalInputConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalInputConfig"),
			Z_Registration_Info_UClass_UKendalInputConfig.InnerSingleton,
			StaticRegisterNativesUKendalInputConfig,
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
	return Z_Registration_Info_UClass_UKendalInputConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalInputConfig_NoRegister()
{
	return UKendalInputConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalInputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Input Action Data Asset Contains Instance of the above struct\n */" },
#endif
		{ "IncludePath", "KendalInputConfig.h" },
		{ "ModuleRelativePath", "Public/KendalInputConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Action Data Asset Contains Instance of the above struct" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeInputActions_MetaData[] = {
		{ "Category", "KendalInputConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of input actions used by the owner.  These input actions are mapped to a gameplay tag and must be manually bound.\n" },
#endif
		{ "ModuleRelativePath", "Public/KendalInputConfig.h" },
		{ "TitleProperty", "InputAction" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of input actions used by the owner.  These input actions are mapped to a gameplay tag and must be manually bound." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputActions_MetaData[] = {
		{ "Category", "KendalInputConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of input actions used by the owner.  These input actions are mapped to a gameplay tag and are automatically bound to abilities with matching input tags.\n" },
#endif
		{ "ModuleRelativePath", "Public/KendalInputConfig.h" },
		{ "TitleProperty", "InputAction" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of input actions used by the owner.  These input actions are mapped to a gameplay tag and are automatically bound to abilities with matching input tags." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NativeInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeInputActions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKendalInputConfig_FindAbilityInputActionForTag, "FindAbilityInputActionForTag" }, // 3870831096
		{ &Z_Construct_UFunction_UKendalInputConfig_FindNativeInputActionForTag, "FindNativeInputActionForTag" }, // 2189036138
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKendalInputConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKendalInputConfig_Statics::NewProp_NativeInputActions_Inner = { "NativeInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKendalInputAction, METADATA_PARAMS(0, nullptr) }; // 659161546
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKendalInputConfig_Statics::NewProp_NativeInputActions = { "NativeInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalInputConfig, NativeInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeInputActions_MetaData), NewProp_NativeInputActions_MetaData) }; // 659161546
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKendalInputConfig_Statics::NewProp_AbilityInputActions_Inner = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKendalInputAction, METADATA_PARAMS(0, nullptr) }; // 659161546
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKendalInputConfig_Statics::NewProp_AbilityInputActions = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalInputConfig, AbilityInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputActions_MetaData), NewProp_AbilityInputActions_MetaData) }; // 659161546
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKendalInputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalInputConfig_Statics::NewProp_NativeInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalInputConfig_Statics::NewProp_NativeInputActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalInputConfig_Statics::NewProp_AbilityInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalInputConfig_Statics::NewProp_AbilityInputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalInputConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKendalInputConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalInputConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalInputConfig_Statics::ClassParams = {
	&UKendalInputConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKendalInputConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKendalInputConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalInputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalInputConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalInputConfig()
{
	if (!Z_Registration_Info_UClass_UKendalInputConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalInputConfig.OuterSingleton, Z_Construct_UClass_UKendalInputConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalInputConfig.OuterSingleton;
}
UKendalInputConfig::UKendalInputConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalInputConfig);
UKendalInputConfig::~UKendalInputConfig() {}
// ********** End Class UKendalInputConfig *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_Input_Public_KendalInputConfig_h__Script_Input_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKendalInputAction::StaticStruct, Z_Construct_UScriptStruct_FKendalInputAction_Statics::NewStructOps, TEXT("KendalInputAction"), &Z_Registration_Info_UScriptStruct_FKendalInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKendalInputAction), 659161546U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKendalInputConfig, UKendalInputConfig::StaticClass, TEXT("UKendalInputConfig"), &Z_Registration_Info_UClass_UKendalInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalInputConfig), 3528540304U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_Input_Public_KendalInputConfig_h__Script_Input_362790080(TEXT("/Script/Input"),
	Z_CompiledInDeferFile_FID_Kendal_Source_Input_Public_KendalInputConfig_h__Script_Input_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_Input_Public_KendalInputConfig_h__Script_Input_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Kendal_Source_Input_Public_KendalInputConfig_h__Script_Input_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_Input_Public_KendalInputConfig_h__Script_Input_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
