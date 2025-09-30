// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalCameraManager.h"

#ifdef KENDALCAMERA_KendalCameraManager_generated_h
#error "KendalCameraManager.generated.h already included, missing '#pragma once' in KendalCameraManager.h"
#endif
#define KENDALCAMERA_KendalCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AKendalCameraManager *****************************************************
KENDALCAMERA_API UClass* Z_Construct_UClass_AKendalCameraManager_NoRegister();

#define FID_Kendal_Source_KendalCamera_Public_KendalCameraManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKendalCameraManager(); \
	friend struct Z_Construct_UClass_AKendalCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALCAMERA_API UClass* Z_Construct_UClass_AKendalCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AKendalCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/KendalCamera"), Z_Construct_UClass_AKendalCameraManager_NoRegister) \
	DECLARE_SERIALIZER(AKendalCameraManager)


#define FID_Kendal_Source_KendalCamera_Public_KendalCameraManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKendalCameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AKendalCameraManager(AKendalCameraManager&&) = delete; \
	AKendalCameraManager(const AKendalCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKendalCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKendalCameraManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKendalCameraManager) \
	NO_API virtual ~AKendalCameraManager();


#define FID_Kendal_Source_KendalCamera_Public_KendalCameraManager_h_12_PROLOG
#define FID_Kendal_Source_KendalCamera_Public_KendalCameraManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalCamera_Public_KendalCameraManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalCamera_Public_KendalCameraManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AKendalCameraManager;

// ********** End Class AKendalCameraManager *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalCamera_Public_KendalCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
