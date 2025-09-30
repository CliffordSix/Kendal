// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalMapManagementSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalMapManagementSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
KENDALMAPMANAGEMENT_API UClass* Z_Construct_UClass_UKendalMapManagementSubsystem();
KENDALMAPMANAGEMENT_API UClass* Z_Construct_UClass_UKendalMapManagementSubsystem_NoRegister();
KENDALTILEMAP_API UClass* Z_Construct_UClass_AKendalTileMapActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalMapManagement();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKendalMapManagementSubsystem Function UpdateTile ************************
struct Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile_Statics
{
	struct KendalMapManagementSubsystem_eventUpdateTile_Parms
	{
		int32 X;
		int32 Y;
		int32 TileIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KendalMapManagementSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalMapManagementSubsystem_eventUpdateTile_Parms, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalMapManagementSubsystem_eventUpdateTile_Parms, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalMapManagementSubsystem_eventUpdateTile_Parms, TileIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileIndex_MetaData), NewProp_TileIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile_Statics::NewProp_TileIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKendalMapManagementSubsystem, nullptr, "UpdateTile", Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile_Statics::KendalMapManagementSubsystem_eventUpdateTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile_Statics::KendalMapManagementSubsystem_eventUpdateTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKendalMapManagementSubsystem::execUpdateTile)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_TileIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTile(Z_Param_X,Z_Param_Y,Z_Param_TileIndex);
	P_NATIVE_END;
}
// ********** End Class UKendalMapManagementSubsystem Function UpdateTile **************************

// ********** Begin Class UKendalMapManagementSubsystem ********************************************
void UKendalMapManagementSubsystem::StaticRegisterNativesUKendalMapManagementSubsystem()
{
	UClass* Class = UKendalMapManagementSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateTile", &UKendalMapManagementSubsystem::execUpdateTile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKendalMapManagementSubsystem;
UClass* UKendalMapManagementSubsystem::GetPrivateStaticClass()
{
	using TClass = UKendalMapManagementSubsystem;
	if (!Z_Registration_Info_UClass_UKendalMapManagementSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalMapManagementSubsystem"),
			Z_Registration_Info_UClass_UKendalMapManagementSubsystem.InnerSingleton,
			StaticRegisterNativesUKendalMapManagementSubsystem,
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
	return Z_Registration_Info_UClass_UKendalMapManagementSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UKendalMapManagementSubsystem_NoRegister()
{
	return UKendalMapManagementSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKendalMapManagementSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * World Subsystem that can generate and pull information from its tile map actor\n */" },
#endif
		{ "IncludePath", "KendalMapManagementSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KendalMapManagementSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World Subsystem that can generate and pull information from its tile map actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMapActorClass_MetaData[] = {
		{ "Category", "TileMap" },
		{ "ModuleRelativePath", "Public/KendalMapManagementSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMapActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/KendalMapManagementSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_TileMapActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMapActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKendalMapManagementSubsystem_UpdateTile, "UpdateTile" }, // 2428894938
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKendalMapManagementSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UKendalMapManagementSubsystem_Statics::NewProp_TileMapActorClass = { "TileMapActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalMapManagementSubsystem, TileMapActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AKendalTileMapActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMapActorClass_MetaData), NewProp_TileMapActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKendalMapManagementSubsystem_Statics::NewProp_TileMapActor = { "TileMapActor", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKendalMapManagementSubsystem, TileMapActor), Z_Construct_UClass_AKendalTileMapActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMapActor_MetaData), NewProp_TileMapActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKendalMapManagementSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalMapManagementSubsystem_Statics::NewProp_TileMapActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKendalMapManagementSubsystem_Statics::NewProp_TileMapActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalMapManagementSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKendalMapManagementSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalMapManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalMapManagementSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKendalMapManagementSubsystem_Statics::ClassParams = {
	&UKendalMapManagementSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKendalMapManagementSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKendalMapManagementSubsystem_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKendalMapManagementSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UKendalMapManagementSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKendalMapManagementSubsystem()
{
	if (!Z_Registration_Info_UClass_UKendalMapManagementSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKendalMapManagementSubsystem.OuterSingleton, Z_Construct_UClass_UKendalMapManagementSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKendalMapManagementSubsystem.OuterSingleton;
}
UKendalMapManagementSubsystem::UKendalMapManagementSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKendalMapManagementSubsystem);
UKendalMapManagementSubsystem::~UKendalMapManagementSubsystem() {}
// ********** End Class UKendalMapManagementSubsystem **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalMapManagement_Public_KendalMapManagementSubsystem_h__Script_KendalMapManagement_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKendalMapManagementSubsystem, UKendalMapManagementSubsystem::StaticClass, TEXT("UKendalMapManagementSubsystem"), &Z_Registration_Info_UClass_UKendalMapManagementSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKendalMapManagementSubsystem), 1762864374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalMapManagement_Public_KendalMapManagementSubsystem_h__Script_KendalMapManagement_3410668543(TEXT("/Script/KendalMapManagement"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalMapManagement_Public_KendalMapManagementSubsystem_h__Script_KendalMapManagement_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalMapManagement_Public_KendalMapManagementSubsystem_h__Script_KendalMapManagement_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
