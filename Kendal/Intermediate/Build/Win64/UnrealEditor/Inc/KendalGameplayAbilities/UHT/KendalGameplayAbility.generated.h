// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalGameplayAbility.h"

#ifdef KENDALGAMEPLAYABILITIES_KendalGameplayAbility_generated_h
#error "KendalGameplayAbility.generated.h already included, missing '#pragma once' in KendalGameplayAbility.h"
#endif
#define KENDALGAMEPLAYABILITIES_KendalGameplayAbility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UKendalGameplayAbility ***************************************************
KENDALGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UKendalGameplayAbility_NoRegister();

#define FID_Kendal_Source_KendalGameplayAbilities_Public_KendalGameplayAbility_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKendalGameplayAbility(); \
	friend struct Z_Construct_UClass_UKendalGameplayAbility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UKendalGameplayAbility_NoRegister(); \
public: \
	DECLARE_CLASS2(UKendalGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/KendalGameplayAbilities"), Z_Construct_UClass_UKendalGameplayAbility_NoRegister) \
	DECLARE_SERIALIZER(UKendalGameplayAbility)


#define FID_Kendal_Source_KendalGameplayAbilities_Public_KendalGameplayAbility_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKendalGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKendalGameplayAbility(UKendalGameplayAbility&&) = delete; \
	UKendalGameplayAbility(const UKendalGameplayAbility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKendalGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKendalGameplayAbility); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKendalGameplayAbility) \
	NO_API virtual ~UKendalGameplayAbility();


#define FID_Kendal_Source_KendalGameplayAbilities_Public_KendalGameplayAbility_h_31_PROLOG
#define FID_Kendal_Source_KendalGameplayAbilities_Public_KendalGameplayAbility_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalGameplayAbilities_Public_KendalGameplayAbility_h_34_INCLASS_NO_PURE_DECLS \
	FID_Kendal_Source_KendalGameplayAbilities_Public_KendalGameplayAbility_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKendalGameplayAbility;

// ********** End Class UKendalGameplayAbility *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalGameplayAbilities_Public_KendalGameplayAbility_h

// ********** Begin Enum EKendalAbilityActivationPolicy ********************************************
#define FOREACH_ENUM_EKENDALABILITYACTIVATIONPOLICY(op) \
	op(EKendalAbilityActivationPolicy::OnInputTriggered) \
	op(EKendalAbilityActivationPolicy::OnInputReleased) \
	op(EKendalAbilityActivationPolicy::OnSpawn) 

enum class EKendalAbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<EKendalAbilityActivationPolicy> { enum { Value = true }; };
template<> KENDALGAMEPLAYABILITIES_API UEnum* StaticEnum<EKendalAbilityActivationPolicy>();
// ********** End Enum EKendalAbilityActivationPolicy **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
