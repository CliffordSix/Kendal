// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalEquipmentData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalEquipmentData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentData();
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentData_NoRegister();
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentStackData();
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentStackData_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalEquipment();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKendalEquipmentData Function GetDrawScale *******************************
struct Z_Construct_UFunction_UKendalEquipmentData_GetDrawScale_Statics
{
	struct KendalEquipmentData_eventGetDrawScale_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KendalEquipmentData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKendalEquipmentData_GetDrawScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalEquipmentData_eventGetDrawScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKendalEquipmentData_GetDrawScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalEquipmentData_GetDrawScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalEquipmentData_GetDrawScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKendalEquipmentData_GetDrawScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKendalEquipmentData, nullptr, "GetDrawScale", Z_Construct_UFunction_UKendalEquipmentData_GetDrawScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalEquipmentData_GetDrawScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKendalEquipmentData_GetDrawScale_Statics::KendalEquipmentData_eventGetDrawScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalEquipmentData_GetDrawScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKendalEquipmentData_GetDrawScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKendalEquipmentData_GetDrawScale_Statics::KendalEquipmentData_eventGetDrawScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKendalEquipmentData_GetDrawScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKendalEquipmentData_GetDrawScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKendalEquipmentData::execGetDrawScale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDrawScale();
	P_NATIVE_END;
}
// ********** End Class UKendalEquipmentData Function GetDrawScale *********************************

// ********** Begin Class UKendalEquipmentData Function GetEquipmentName ***************************
struct Z_Construct_UFunction_UKendalEquipmentData_GetEquipmentName_Statics
{
	struct KendalEquipmentData_eventGetEquipmentName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KendalEquipmentData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKendalEquipmentData_GetEquipmentName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalEquipmentData_eventGetEquipmentName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKendalEquipmentData_GetEquipmentName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalEquipmentData_GetEquipmentName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalEquipmentData_GetEquipmentName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKendalEquipmentData_GetEquipmentName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKendalEquipmentData, nullptr, "GetEquipmentName", Z_Construct_UFunction_UKendalEquipmentData_GetEquipmentName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalEquipmentData_GetEquipmentName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKendalEquipmentData_GetEquipmentName_Statics::KendalEquipmentData_eventGetEquipmentName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalEquipmentData_GetEquipmentName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKendalEquipmentData_GetEquipmentName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKendalEquipmentData_GetEquipmentName_Statics::KendalEquipmentData_eventGetEquipmentName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKendalEquipmentData_GetEquipmentName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKendalEquipmentData_GetEquipmentName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKendalEquipmentData::execGetEquipmentName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetEquipmentName();
	P_NATIVE_END;
}
// ********** End Class UKendalEquipmentData Function GetEquipmentName *****************************

// ********** Begin Class UKendalEquipmentData Function GetSprite **********************************
struct Z_Construct_UFunction_UKendalEquipmentData_GetSprite_Statics
{
	struct KendalEquipmentData_eventGetSprite_Parms
	{
		UPaperSprite* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KendalEquipmentData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKendalEquipmentData_GetSprite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalEquipmentData_eventGetSprite_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKendalEquipmentData_GetSprite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalEquipmentData_GetSprite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalEquipmentData_GetSprite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKendalEquipmentData_GetSprite_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKendalEquipmentData, nullptr, "GetSprite", Z_Construct_UFunction_UKendalEquipmentData_GetSprite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalEquipmentData_GetSprite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKendalEquipmentData_GetSprite_Statics::KendalEquipmentData_eventGetSprite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalEquipmentData_GetSprite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKendalEquipmentData_GetSprite_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKendalEquipmentData_GetSprite_Statics::KendalEquipmentData_eventGetSprite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKendalEquipmentData_GetSprite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKendalEquipmentData_GetSprite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKendalEquipmentData::execGetSprite)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPaperSprite**)Z_Param__Result=P_THIS->GetSprite();
	P_NATIVE_END;
}
// ********** End Class UKendalEquipmentData Function GetSprite ************************************

// ********** Begin Class UKendalEquipmentData *****************************************************
void UKendalEquipmentData::StaticRegisterNativesUKendalEquipmentData()
{
	UClass* Class = UKendalEquipmentData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDrawScale", &UKendalEquipmentData::execGetDrawScale },
		{ "GetEquipmentName", &UKendalEquipmentData::execGetEquipmentName },
		{ "GetSprite", &UKendalEquipmentData::execGetSprite },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalEquipmentData;
UClass* UKendalEquipmentData::GetPrivateStaticClass()
{
	using TClass = UKendalEquipmentData;
	if (!Z_Registration_Info_UClass_UKendalEquipmentData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalEquipmentData"),
			Z_Registration_Info_UClass_UKendalEquipmentData.InnerSingleton,
			StaticRegisterNativesUKendalEquipmentData,
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
	return Z_Registration_Info_UClass_UKendalEquipmentData.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalEquipmentData_NoRegister()
{
	return UKendalEquipmentData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalEquipmentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Kendal Equipment Data base class.\n */" },
#endif
		{ "DisplayName", "Single Item" },
		{ "IncludePath", "KendalEquipmentData.h" },
		{ "ModuleRelativePath", "Public/KendalEquipmentData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Kendal Equipment Data base class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentName_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "KendalEquipmentData" },
		{ "ModuleRelativePath", "Public/KendalEquipmentData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSprite_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "KendalEquipmentData" },
		{ "ModuleRelativePath", "Public/KendalEquipmentData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUnique_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "KendalEquipmentData" },
		{ "ModuleRelativePath", "Public/KendalEquipmentData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawScale_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "KendalEquipmentData" },
		{ "ModuleRelativePath", "Public/KendalEquipmentData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EquipmentName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemSprite;
	static void NewProp_bIsUnique_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnique;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKendalEquipmentData_GetDrawScale, "GetDrawScale" }, // 2911162810
		{ &Z_Construct_UFunction_UKendalEquipmentData_GetEquipmentName, "GetEquipmentName" }, // 1646342682
		{ &Z_Construct_UFunction_UKendalEquipmentData_GetSprite, "GetSprite" }, // 1064150759
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKendalEquipmentData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UKendalEquipmentData_Statics::NewProp_EquipmentName = { "EquipmentName", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalEquipmentData, EquipmentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentName_MetaData), NewProp_EquipmentName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKendalEquipmentData_Statics::NewProp_ItemSprite = { "ItemSprite", nullptr, (EPropertyFlags)0x0144000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalEquipmentData, ItemSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSprite_MetaData), NewProp_ItemSprite_MetaData) };
void Z_Construct_UClass_UKendalEquipmentData_Statics::NewProp_bIsUnique_SetBit(void* Obj)
{
	((UKendalEquipmentData*)Obj)->bIsUnique = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKendalEquipmentData_Statics::NewProp_bIsUnique = { "bIsUnique", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKendalEquipmentData), &Z_Construct_UClass_UKendalEquipmentData_Statics::NewProp_bIsUnique_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUnique_MetaData), NewProp_bIsUnique_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKendalEquipmentData_Statics::NewProp_DrawScale = { "DrawScale", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalEquipmentData, DrawScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawScale_MetaData), NewProp_DrawScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKendalEquipmentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalEquipmentData_Statics::NewProp_EquipmentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalEquipmentData_Statics::NewProp_ItemSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalEquipmentData_Statics::NewProp_bIsUnique,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalEquipmentData_Statics::NewProp_DrawScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKendalEquipmentData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalEquipmentData_Statics::ClassParams = {
	&UKendalEquipmentData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKendalEquipmentData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentData_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentData_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalEquipmentData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalEquipmentData()
{
	if (!Z_Registration_Info_UClass_UKendalEquipmentData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalEquipmentData.OuterSingleton, Z_Construct_UClass_UKendalEquipmentData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalEquipmentData.OuterSingleton;
}
UKendalEquipmentData::UKendalEquipmentData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalEquipmentData);
UKendalEquipmentData::~UKendalEquipmentData() {}
// ********** End Class UKendalEquipmentData *******************************************************

// ********** Begin Class UKendalEquipmentStackData ************************************************
void UKendalEquipmentStackData::StaticRegisterNativesUKendalEquipmentStackData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalEquipmentStackData;
UClass* UKendalEquipmentStackData::GetPrivateStaticClass()
{
	using TClass = UKendalEquipmentStackData;
	if (!Z_Registration_Info_UClass_UKendalEquipmentStackData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalEquipmentStackData"),
			Z_Registration_Info_UClass_UKendalEquipmentStackData.InnerSingleton,
			StaticRegisterNativesUKendalEquipmentStackData,
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
	return Z_Registration_Info_UClass_UKendalEquipmentStackData.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalEquipmentStackData_NoRegister()
{
	return UKendalEquipmentStackData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalEquipmentStackData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Stackable Item root class\n */" },
#endif
		{ "DisplayName", "Stackable Item" },
		{ "IncludePath", "KendalEquipmentData.h" },
		{ "ModuleRelativePath", "Public/KendalEquipmentData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Stackable Item root class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStackSize_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "KendalEquipmentStackData" },
		{ "ModuleRelativePath", "Public/KendalEquipmentData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultStackSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKendalEquipmentStackData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKendalEquipmentStackData_Statics::NewProp_DefaultStackSize = { "DefaultStackSize", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalEquipmentStackData, DefaultStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultStackSize_MetaData), NewProp_DefaultStackSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKendalEquipmentStackData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalEquipmentStackData_Statics::NewProp_DefaultStackSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentStackData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKendalEquipmentStackData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UKendalEquipmentData,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentStackData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalEquipmentStackData_Statics::ClassParams = {
	&UKendalEquipmentStackData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKendalEquipmentStackData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentStackData_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalEquipmentStackData_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalEquipmentStackData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalEquipmentStackData()
{
	if (!Z_Registration_Info_UClass_UKendalEquipmentStackData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalEquipmentStackData.OuterSingleton, Z_Construct_UClass_UKendalEquipmentStackData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalEquipmentStackData.OuterSingleton;
}
UKendalEquipmentStackData::UKendalEquipmentStackData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalEquipmentStackData);
UKendalEquipmentStackData::~UKendalEquipmentStackData() {}
// ********** End Class UKendalEquipmentStackData **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h__Script_KendalEquipment_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKendalEquipmentData, UKendalEquipmentData::StaticClass, TEXT("UKendalEquipmentData"), &Z_Registration_Info_UClass_UKendalEquipmentData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalEquipmentData), 607811580U) },
		{ Z_Construct_UClass_UKendalEquipmentStackData, UKendalEquipmentStackData::StaticClass, TEXT("UKendalEquipmentStackData"), &Z_Registration_Info_UClass_UKendalEquipmentStackData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalEquipmentStackData), 293116721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h__Script_KendalEquipment_1714834532(TEXT("/Script/KendalEquipment"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h__Script_KendalEquipment_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalEquipment_Public_KendalEquipmentData_h__Script_KendalEquipment_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
