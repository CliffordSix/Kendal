// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalPlayerState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalPlayerState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
KENDALCHARACTER_API UClass* Z_Construct_UClass_AKendalPlayerState();
KENDALCHARACTER_API UClass* Z_Construct_UClass_AKendalPlayerState_NoRegister();
KENDALEQUIPMENT_API UClass* Z_Construct_UClass_UKendalEquipmentManagerComponent_NoRegister();
KENDALGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UKendalAbilityData_NoRegister();
KENDALGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UKendalAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalCharacter();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKendalPlayerState Function PawnSet **************************************
struct Z_Construct_UFunction_AKendalPlayerState_PawnSet_Statics
{
	struct KendalPlayerState_eventPawnSet_Parms
	{
		APlayerState* Player;
		APawn* NewPawn;
		APawn* OldPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KendalPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKendalPlayerState_PawnSet_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalPlayerState_eventPawnSet_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKendalPlayerState_PawnSet_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalPlayerState_eventPawnSet_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKendalPlayerState_PawnSet_Statics::NewProp_OldPawn = { "OldPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalPlayerState_eventPawnSet_Parms, OldPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKendalPlayerState_PawnSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKendalPlayerState_PawnSet_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKendalPlayerState_PawnSet_Statics::NewProp_NewPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKendalPlayerState_PawnSet_Statics::NewProp_OldPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKendalPlayerState_PawnSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKendalPlayerState_PawnSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AKendalPlayerState, nullptr, "PawnSet", Z_Construct_UFunction_AKendalPlayerState_PawnSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKendalPlayerState_PawnSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKendalPlayerState_PawnSet_Statics::KendalPlayerState_eventPawnSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKendalPlayerState_PawnSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKendalPlayerState_PawnSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AKendalPlayerState_PawnSet_Statics::KendalPlayerState_eventPawnSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKendalPlayerState_PawnSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKendalPlayerState_PawnSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKendalPlayerState::execPawnSet)
{
	P_GET_OBJECT(APlayerState,Z_Param_Player);
	P_GET_OBJECT(APawn,Z_Param_NewPawn);
	P_GET_OBJECT(APawn,Z_Param_OldPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PawnSet(Z_Param_Player,Z_Param_NewPawn,Z_Param_OldPawn);
	P_NATIVE_END;
}
// ********** End Class AKendalPlayerState Function PawnSet ****************************************

// ********** Begin Class AKendalPlayerState *******************************************************
void AKendalPlayerState::StaticRegisterNativesAKendalPlayerState()
{
	UClass* Class = AKendalPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PawnSet", &AKendalPlayerState::execPawnSet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKendalPlayerState;
UClass* AKendalPlayerState::GetPrivateStaticClass()
{
	using TClass = AKendalPlayerState;
	if (!Z_Registration_Info_UClass_AKendalPlayerState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalPlayerState"),
			Z_Registration_Info_UClass_AKendalPlayerState.InnerSingleton,
			StaticRegisterNativesAKendalPlayerState,
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
	return Z_Registration_Info_UClass_AKendalPlayerState.InnerSingleton;
}
UClass* Z_Construct_UClass_AKendalPlayerState_NoRegister()
{
	return AKendalPlayerState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKendalPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Player State for Kendal Characters\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "KendalPlayerState.h" },
		{ "ModuleRelativePath", "Public/KendalPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player State for Kendal Characters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentComponent_MetaData[] = {
		{ "Category", "Equipment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KendalPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KendalAbilitySystemComponent_MetaData[] = {
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KendalPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/KendalPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KendalAbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AKendalPlayerState_PawnSet, "PawnSet" }, // 2977606643
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKendalPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKendalPlayerState_Statics::NewProp_EquipmentComponent = { "EquipmentComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalPlayerState, EquipmentComponent), Z_Construct_UClass_UKendalEquipmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentComponent_MetaData), NewProp_EquipmentComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKendalPlayerState_Statics::NewProp_KendalAbilitySystemComponent = { "KendalAbilitySystemComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalPlayerState, KendalAbilitySystemComponent), Z_Construct_UClass_UKendalAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KendalAbilitySystemComponent_MetaData), NewProp_KendalAbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKendalPlayerState_Statics::NewProp_DefaultAbilities = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0144000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalPlayerState, DefaultAbilities), Z_Construct_UClass_UKendalAbilityData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAbilities_MetaData), NewProp_DefaultAbilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKendalPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalPlayerState_Statics::NewProp_EquipmentComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalPlayerState_Statics::NewProp_KendalAbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalPlayerState_Statics::NewProp_DefaultAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKendalPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKendalPlayerState_Statics::ClassParams = {
	&AKendalPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AKendalPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AKendalPlayerState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AKendalPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKendalPlayerState()
{
	if (!Z_Registration_Info_UClass_AKendalPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKendalPlayerState.OuterSingleton, Z_Construct_UClass_AKendalPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKendalPlayerState.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKendalPlayerState);
AKendalPlayerState::~AKendalPlayerState() {}
// ********** End Class AKendalPlayerState *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalCharacter_Public_KendalPlayerState_h__Script_KendalCharacter_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKendalPlayerState, AKendalPlayerState::StaticClass, TEXT("AKendalPlayerState"), &Z_Registration_Info_UClass_AKendalPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKendalPlayerState), 1392964027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalCharacter_Public_KendalPlayerState_h__Script_KendalCharacter_993463651(TEXT("/Script/KendalCharacter"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalCharacter_Public_KendalPlayerState_h__Script_KendalCharacter_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalCharacter_Public_KendalPlayerState_h__Script_KendalCharacter_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
