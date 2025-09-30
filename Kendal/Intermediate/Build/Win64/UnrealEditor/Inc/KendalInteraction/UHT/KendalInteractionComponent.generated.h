// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalInteractionComponent.h"

#ifdef KENDALINTERACTION_KendalInteractionComponent_generated_h
#error "KendalInteractionComponent.generated.h already included, missing '#pragma once' in KendalInteractionComponent.h"
#endif
#define KENDALINTERACTION_KendalInteractionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UKendalInteractionComponent **********************************************
KENDALINTERACTION_API UClass* Z_Construct_UClass_UKendalInteractionComponent_NoRegister();

#define FID_Kendal_Source_KendalInteraction_Public_KendalInteractionComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKendalInteractionComponent(); \
	friend struct Z_Construct_UClass_UKendalInteractionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALINTERACTION_API UClass* Z_Construct_UClass_UKendalInteractionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UKendalInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KendalInteraction"), Z_Construct_UClass_UKendalInteractionComponent_NoRegister) \
	DECLARE_SERIALIZER(UKendalInteractionComponent)


#define FID_Kendal_Source_KendalInteraction_Public_KendalInteractionComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKendalInteractionComponent(UKendalInteractionComponent&&) = delete; \
	UKendalInteractionComponent(const UKendalInteractionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKendalInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKendalInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKendalInteractionComponent) \
	NO_API virtual ~UKendalInteractionComponent();


#define FID_Kendal_Source_KendalInteraction_Public_KendalInteractionComponent_h_14_PROLOG
#define FID_Kendal_Source_KendalInteraction_Public_KendalInteractionComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalInteraction_Public_KendalInteractionComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalInteraction_Public_KendalInteractionComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKendalInteractionComponent;

// ********** End Class UKendalInteractionComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalInteraction_Public_KendalInteractionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
