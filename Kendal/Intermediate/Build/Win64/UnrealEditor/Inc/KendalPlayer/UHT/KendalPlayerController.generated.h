// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalPlayerController.h"

#ifdef KENDALPLAYER_KendalPlayerController_generated_h
#error "KendalPlayerController.generated.h already included, missing '#pragma once' in KendalPlayerController.h"
#endif
#define KENDALPLAYER_KendalPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UKendalAbilitySystemComponent;

// ********** Begin Class AKendalPlayerController **************************************************
#define FID_Kendal_Source_KendalPlayer_Public_KendalPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAbilitySystemComponent);


KENDALPLAYER_API UClass* Z_Construct_UClass_AKendalPlayerController_NoRegister();

#define FID_Kendal_Source_KendalPlayer_Public_KendalPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKendalPlayerController(); \
	friend struct Z_Construct_UClass_AKendalPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALPLAYER_API UClass* Z_Construct_UClass_AKendalPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AKendalPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KendalPlayer"), Z_Construct_UClass_AKendalPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AKendalPlayerController)


#define FID_Kendal_Source_KendalPlayer_Public_KendalPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AKendalPlayerController(AKendalPlayerController&&) = delete; \
	AKendalPlayerController(const AKendalPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKendalPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKendalPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKendalPlayerController) \
	NO_API virtual ~AKendalPlayerController();


#define FID_Kendal_Source_KendalPlayer_Public_KendalPlayerController_h_12_PROLOG
#define FID_Kendal_Source_KendalPlayer_Public_KendalPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalPlayer_Public_KendalPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalPlayer_Public_KendalPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalPlayer_Public_KendalPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AKendalPlayerController;

// ********** End Class AKendalPlayerController ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalPlayer_Public_KendalPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
