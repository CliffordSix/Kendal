// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalTileMapActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalTileMapActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
KENDALTILEMAP_API UClass* Z_Construct_UClass_AKendalTileMapActor();
KENDALTILEMAP_API UClass* Z_Construct_UClass_AKendalTileMapActor_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMap_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMapComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalTileMap();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKendalTileMapActor Function Multicast_SetTile ***************************
struct KendalTileMapActor_eventMulticast_SetTile_Parms
{
	int32 X;
	int32 Y;
	int32 TileIndex;
};
static FName NAME_AKendalTileMapActor_Multicast_SetTile = FName(TEXT("Multicast_SetTile"));
void AKendalTileMapActor::Multicast_SetTile(const int32 X, const int32 Y, const int32 TileIndex)
{
	KendalTileMapActor_eventMulticast_SetTile_Parms Parms;
	Parms.X=X;
	Parms.Y=Y;
	Parms.TileIndex=TileIndex;
	UFunction* Func = FindFunctionChecked(NAME_AKendalTileMapActor_Multicast_SetTile);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AKendalTileMapActor_Multicast_SetTile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KendalTileMapActor.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AKendalTileMapActor_Multicast_SetTile_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalTileMapActor_eventMulticast_SetTile_Parms, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AKendalTileMapActor_Multicast_SetTile_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalTileMapActor_eventMulticast_SetTile_Parms, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AKendalTileMapActor_Multicast_SetTile_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalTileMapActor_eventMulticast_SetTile_Parms, TileIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileIndex_MetaData), NewProp_TileIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKendalTileMapActor_Multicast_SetTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKendalTileMapActor_Multicast_SetTile_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKendalTileMapActor_Multicast_SetTile_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKendalTileMapActor_Multicast_SetTile_Statics::NewProp_TileIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKendalTileMapActor_Multicast_SetTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKendalTileMapActor_Multicast_SetTile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AKendalTileMapActor, nullptr, "Multicast_SetTile", Z_Construct_UFunction_AKendalTileMapActor_Multicast_SetTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKendalTileMapActor_Multicast_SetTile_Statics::PropPointers), sizeof(KendalTileMapActor_eventMulticast_SetTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKendalTileMapActor_Multicast_SetTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKendalTileMapActor_Multicast_SetTile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(KendalTileMapActor_eventMulticast_SetTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKendalTileMapActor_Multicast_SetTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKendalTileMapActor_Multicast_SetTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKendalTileMapActor::execMulticast_SetTile)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_TileIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_SetTile_Implementation(Z_Param_X,Z_Param_Y,Z_Param_TileIndex);
	P_NATIVE_END;
}
// ********** End Class AKendalTileMapActor Function Multicast_SetTile *****************************

// ********** Begin Class AKendalTileMapActor ******************************************************
void AKendalTileMapActor::StaticRegisterNativesAKendalTileMapActor()
{
	UClass* Class = AKendalTileMapActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Multicast_SetTile", &AKendalTileMapActor::execMulticast_SetTile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKendalTileMapActor;
UClass* AKendalTileMapActor::GetPrivateStaticClass()
{
	using TClass = AKendalTileMapActor;
	if (!Z_Registration_Info_UClass_AKendalTileMapActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalTileMapActor"),
			Z_Registration_Info_UClass_AKendalTileMapActor.InnerSingleton,
			StaticRegisterNativesAKendalTileMapActor,
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
	return Z_Registration_Info_UClass_AKendalTileMapActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AKendalTileMapActor_NoRegister()
{
	return AKendalTileMapActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKendalTileMapActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Actor Class which contains the current tilemap\n */" },
#endif
		{ "IncludePath", "KendalTileMapActor.h" },
		{ "ModuleRelativePath", "Public/KendalTileMapActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Actor Class which contains the current tilemap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTileMap_MetaData[] = {
		{ "Category", "TileMap" },
		{ "ModuleRelativePath", "Public/KendalTileMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMapComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KendalTileMapActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KendalTileMapActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveTileMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMapComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AKendalTileMapActor_Multicast_SetTile, "Multicast_SetTile" }, // 1437758295
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKendalTileMapActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKendalTileMapActor_Statics::NewProp_ActiveTileMap = { "ActiveTileMap", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalTileMapActor, ActiveTileMap), Z_Construct_UClass_UPaperTileMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveTileMap_MetaData), NewProp_ActiveTileMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKendalTileMapActor_Statics::NewProp_TileMapComponent = { "TileMapComponent", nullptr, (EPropertyFlags)0x01440000000a003d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalTileMapActor, TileMapComponent), Z_Construct_UClass_UPaperTileMapComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMapComponent_MetaData), NewProp_TileMapComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKendalTileMapActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalTileMapActor_Statics::NewProp_ActiveTileMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalTileMapActor_Statics::NewProp_TileMapComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalTileMapActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKendalTileMapActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalTileMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalTileMapActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKendalTileMapActor_Statics::ClassParams = {
	&AKendalTileMapActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AKendalTileMapActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AKendalTileMapActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalTileMapActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AKendalTileMapActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKendalTileMapActor()
{
	if (!Z_Registration_Info_UClass_AKendalTileMapActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKendalTileMapActor.OuterSingleton, Z_Construct_UClass_AKendalTileMapActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKendalTileMapActor.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AKendalTileMapActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_TileMapComponent(TEXT("TileMapComponent"));
	const bool bIsValid = true
		&& Name_TileMapComponent == ClassReps[(int32)ENetFields_Private::TileMapComponent].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AKendalTileMapActor"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(AKendalTileMapActor);
AKendalTileMapActor::~AKendalTileMapActor() {}
// ********** End Class AKendalTileMapActor ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalTileMapActor_h__Script_KendalTileMap_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKendalTileMapActor, AKendalTileMapActor::StaticClass, TEXT("AKendalTileMapActor"), &Z_Registration_Info_UClass_AKendalTileMapActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKendalTileMapActor), 4127079881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalTileMapActor_h__Script_KendalTileMap_1644469668(TEXT("/Script/KendalTileMap"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalTileMapActor_h__Script_KendalTileMap_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalTileMap_Public_KendalTileMapActor_h__Script_KendalTileMap_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
