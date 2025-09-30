// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
KENDALGAMEMODE_API UClass* Z_Construct_UClass_AKendalGameModeBase();
KENDALGAMEMODE_API UClass* Z_Construct_UClass_AKendalGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalGameMode();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKendalGameModeBase Function SpawnLoot ***********************************
struct Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot_Statics
{
	struct KendalGameModeBase_eventSpawnLoot_Parms
	{
		int32 X;
		int32 Y;
		FName InItemId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_InItemId", "TestItem" },
		{ "ModuleRelativePath", "Public/KendalGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InItemId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalGameModeBase_eventSpawnLoot_Parms, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalGameModeBase_eventSpawnLoot_Parms, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot_Statics::NewProp_InItemId = { "InItemId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalGameModeBase_eventSpawnLoot_Parms, InItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InItemId_MetaData), NewProp_InItemId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot_Statics::NewProp_InItemId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AKendalGameModeBase, nullptr, "SpawnLoot", Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot_Statics::KendalGameModeBase_eventSpawnLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot_Statics::KendalGameModeBase_eventSpawnLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKendalGameModeBase::execSpawnLoot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InItemId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnLoot(Z_Param_X,Z_Param_Y,Z_Param_Out_InItemId);
	P_NATIVE_END;
}
// ********** End Class AKendalGameModeBase Function SpawnLoot *************************************

// ********** Begin Class AKendalGameModeBase ******************************************************
void AKendalGameModeBase::StaticRegisterNativesAKendalGameModeBase()
{
	UClass* Class = AKendalGameModeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnLoot", &AKendalGameModeBase::execSpawnLoot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKendalGameModeBase;
UClass* AKendalGameModeBase::GetPrivateStaticClass()
{
	using TClass = AKendalGameModeBase;
	if (!Z_Registration_Info_UClass_AKendalGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalGameModeBase"),
			Z_Registration_Info_UClass_AKendalGameModeBase.InnerSingleton,
			StaticRegisterNativesAKendalGameModeBase,
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
	return Z_Registration_Info_UClass_AKendalGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AKendalGameModeBase_NoRegister()
{
	return AKendalGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKendalGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base Game mode\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "KendalGameModeBase.h" },
		{ "ModuleRelativePath", "Public/KendalGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base Game mode" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AKendalGameModeBase_SpawnLoot, "SpawnLoot" }, // 3545802219
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKendalGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AKendalGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalGameMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKendalGameModeBase_Statics::ClassParams = {
	&AKendalGameModeBase::StaticClass,
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
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AKendalGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKendalGameModeBase()
{
	if (!Z_Registration_Info_UClass_AKendalGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKendalGameModeBase.OuterSingleton, Z_Construct_UClass_AKendalGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKendalGameModeBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKendalGameModeBase);
AKendalGameModeBase::~AKendalGameModeBase() {}
// ********** End Class AKendalGameModeBase ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameMode_Public_KendalGameModeBase_h__Script_KendalGameMode_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKendalGameModeBase, AKendalGameModeBase::StaticClass, TEXT("AKendalGameModeBase"), &Z_Registration_Info_UClass_AKendalGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKendalGameModeBase), 3867490516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameMode_Public_KendalGameModeBase_h__Script_KendalGameMode_3454097861(TEXT("/Script/KendalGameMode"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameMode_Public_KendalGameModeBase_h__Script_KendalGameMode_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalGameMode_Public_KendalGameModeBase_h__Script_KendalGameMode_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
