// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KendalCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKendalCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
KENDALCAMERA_API UClass* Z_Construct_UClass_AKendalCameraManager();
KENDALCAMERA_API UClass* Z_Construct_UClass_AKendalCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_KendalCamera();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKendalCameraManager *****************************************************
void AKendalCameraManager::StaticRegisterNativesAKendalCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKendalCameraManager;
UClass* AKendalCameraManager::GetPrivateStaticClass()
{
	using TClass = AKendalCameraManager;
	if (!Z_Registration_Info_UClass_AKendalCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KendalCameraManager"),
			Z_Registration_Info_UClass_AKendalCameraManager.InnerSingleton,
			StaticRegisterNativesAKendalCameraManager,
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
	return Z_Registration_Info_UClass_AKendalCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AKendalCameraManager_NoRegister()
{
	return AKendalCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKendalCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Camera Manager class for Kendal Cameras\n */" },
#endif
		{ "IncludePath", "KendalCameraManager.h" },
		{ "ModuleRelativePath", "Public/KendalCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Manager class for Kendal Cameras" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKendalCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AKendalCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_KendalCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKendalCameraManager_Statics::ClassParams = {
	&AKendalCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKendalCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AKendalCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKendalCameraManager()
{
	if (!Z_Registration_Info_UClass_AKendalCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKendalCameraManager.OuterSingleton, Z_Construct_UClass_AKendalCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKendalCameraManager.OuterSingleton;
}
AKendalCameraManager::AKendalCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKendalCameraManager);
AKendalCameraManager::~AKendalCameraManager() {}
// ********** End Class AKendalCameraManager *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Kendal_Source_KendalCamera_Public_KendalCameraManager_h__Script_KendalCamera_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKendalCameraManager, AKendalCameraManager::StaticClass, TEXT("AKendalCameraManager"), &Z_Registration_Info_UClass_AKendalCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKendalCameraManager), 1846938170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kendal_Source_KendalCamera_Public_KendalCameraManager_h__Script_KendalCamera_1258333367(TEXT("/Script/KendalCamera"),
	Z_CompiledInDeferFile_FID_Kendal_Source_KendalCamera_Public_KendalCameraManager_h__Script_KendalCamera_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kendal_Source_KendalCamera_Public_KendalCameraManager_h__Script_KendalCamera_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
