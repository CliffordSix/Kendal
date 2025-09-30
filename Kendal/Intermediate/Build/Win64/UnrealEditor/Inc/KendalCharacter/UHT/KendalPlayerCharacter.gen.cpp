// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalPlayerCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalPlayerCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
INPUT_API UClass* Z_Construct_UClass_UKendalInputConfig_NoRegister();
KENDALCHARACTER_API UClass* Z_Construct_UClass_AKendalPlayerCharacter();
KENDALCHARACTER_API UClass* Z_Construct_UClass_AKendalPlayerCharacter_NoRegister();
KENDALINTERACTION_API UClass* Z_Construct_UClass_UKendalInteractionComponent_NoRegister();
KENDALTILEMAPACTORINTERFACE_API UClass* Z_Construct_UClass_UKendalTileMapActorPositionInterface_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalCharacter();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKendalPlayerCharacter Function GetLastFacingDirection *******************
struct Z_Construct_UFunction_AKendalPlayerCharacter_GetLastFacingDirection_Statics
{
	struct KendalPlayerCharacter_eventGetLastFacingDirection_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KendalPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKendalPlayerCharacter_GetLastFacingDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KendalPlayerCharacter_eventGetLastFacingDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKendalPlayerCharacter_GetLastFacingDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKendalPlayerCharacter_GetLastFacingDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKendalPlayerCharacter_GetLastFacingDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKendalPlayerCharacter_GetLastFacingDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AKendalPlayerCharacter, nullptr, "GetLastFacingDirection", Z_Construct_UFunction_AKendalPlayerCharacter_GetLastFacingDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKendalPlayerCharacter_GetLastFacingDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKendalPlayerCharacter_GetLastFacingDirection_Statics::KendalPlayerCharacter_eventGetLastFacingDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKendalPlayerCharacter_GetLastFacingDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKendalPlayerCharacter_GetLastFacingDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AKendalPlayerCharacter_GetLastFacingDirection_Statics::KendalPlayerCharacter_eventGetLastFacingDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKendalPlayerCharacter_GetLastFacingDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKendalPlayerCharacter_GetLastFacingDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKendalPlayerCharacter::execGetLastFacingDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetLastFacingDirection();
	P_NATIVE_END;
}
// ********** End Class AKendalPlayerCharacter Function GetLastFacingDirection *********************

// ********** Begin Class AKendalPlayerCharacter ***************************************************
void AKendalPlayerCharacter::StaticRegisterNativesAKendalPlayerCharacter()
{
	UClass* Class = AKendalPlayerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLastFacingDirection", &AKendalPlayerCharacter::execGetLastFacingDirection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKendalPlayerCharacter;
UClass* AKendalPlayerCharacter::GetPrivateStaticClass()
{
	using TClass = AKendalPlayerCharacter;
	if (!Z_Registration_Info_UClass_AKendalPlayerCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalPlayerCharacter"),
			Z_Registration_Info_UClass_AKendalPlayerCharacter.InnerSingleton,
			StaticRegisterNativesAKendalPlayerCharacter,
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
	return Z_Registration_Info_UClass_AKendalPlayerCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AKendalPlayerCharacter_NoRegister()
{
	return AKendalPlayerCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKendalPlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for a player character\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "KendalPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/KendalPlayerCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for a player character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/KendalPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KendalPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KendalPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KendalPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KendalPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KendalPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KendalPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KendalPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KendalPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputSystem|Input" },
		{ "ModuleRelativePath", "Public/KendalPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputSystem|Input" },
		{ "ModuleRelativePath", "Public/KendalPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastFacingDirection_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Caches the last \"valid\" movement direction. It should never be zero\n" },
#endif
		{ "ModuleRelativePath", "Public/KendalPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Caches the last \"valid\" movement direction. It should never be zero" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraSpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastFacingDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AKendalPlayerCharacter_GetLastFacingDirection, "GetLastFacingDirection" }, // 138878918
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKendalPlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKendalPlayerCharacter_Statics::NewProp_TileLocation = { "TileLocation", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalPlayerCharacter, TileLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileLocation_MetaData), NewProp_TileLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKendalPlayerCharacter_Statics::NewProp_CameraSpringArm = { "CameraSpringArm", nullptr, (EPropertyFlags)0x014400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalPlayerCharacter, CameraSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSpringArm_MetaData), NewProp_CameraSpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKendalPlayerCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x014400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalPlayerCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKendalPlayerCharacter_Statics::NewProp_AnimationComponent = { "AnimationComponent", nullptr, (EPropertyFlags)0x014400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalPlayerCharacter, AnimationComponent), Z_Construct_UClass_UPaperZDAnimationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationComponent_MetaData), NewProp_AnimationComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKendalPlayerCharacter_Statics::NewProp_InteractionComponent = { "InteractionComponent", nullptr, (EPropertyFlags)0x014400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalPlayerCharacter, InteractionComponent), Z_Construct_UClass_UKendalInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComponent_MetaData), NewProp_InteractionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKendalPlayerCharacter_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0144000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalPlayerCharacter, InputConfig), Z_Construct_UClass_UKendalInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfig_MetaData), NewProp_InputConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKendalPlayerCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0144000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalPlayerCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKendalPlayerCharacter_Statics::NewProp_LastFacingDirection = { "LastFacingDirection", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKendalPlayerCharacter, LastFacingDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastFacingDirection_MetaData), NewProp_LastFacingDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKendalPlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalPlayerCharacter_Statics::NewProp_TileLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalPlayerCharacter_Statics::NewProp_CameraSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalPlayerCharacter_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalPlayerCharacter_Statics::NewProp_AnimationComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalPlayerCharacter_Statics::NewProp_InteractionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalPlayerCharacter_Statics::NewProp_InputConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalPlayerCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKendalPlayerCharacter_Statics::NewProp_LastFacingDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalPlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKendalPlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APaperCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalPlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AKendalPlayerCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UKendalTileMapActorPositionInterface_NoRegister, (int32)VTABLE_OFFSET(AKendalPlayerCharacter, IKendalTileMapActorPositionInterface), false },  // 2930188596
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKendalPlayerCharacter_Statics::ClassParams = {
	&AKendalPlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AKendalPlayerCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AKendalPlayerCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AKendalPlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKendalPlayerCharacter()
{
	if (!Z_Registration_Info_UClass_AKendalPlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKendalPlayerCharacter.OuterSingleton, Z_Construct_UClass_AKendalPlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKendalPlayerCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKendalPlayerCharacter);
AKendalPlayerCharacter::~AKendalPlayerCharacter() {}
// ********** End Class AKendalPlayerCharacter *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalCharacter_Public_KendalPlayerCharacter_h__Script_KendalCharacter_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKendalPlayerCharacter, AKendalPlayerCharacter::StaticClass, TEXT("AKendalPlayerCharacter"), &Z_Registration_Info_UClass_AKendalPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKendalPlayerCharacter), 3320268584U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalCharacter_Public_KendalPlayerCharacter_h__Script_KendalCharacter_1821827214(TEXT("/Script/KendalCharacter"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalCharacter_Public_KendalPlayerCharacter_h__Script_KendalCharacter_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalCharacter_Public_KendalPlayerCharacter_h__Script_KendalCharacter_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
