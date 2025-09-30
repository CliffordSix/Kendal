// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KendalTileMapActorPositionInterface.h"

#ifdef KENDALTILEMAPACTORINTERFACE_KendalTileMapActorPositionInterface_generated_h
#error "KendalTileMapActorPositionInterface.generated.h already included, missing '#pragma once' in KendalTileMapActorPositionInterface.h"
#endif
#define KENDALTILEMAPACTORINTERFACE_KendalTileMapActorPositionInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UKendalTileMapActorPositionInterface *********************************
KENDALTILEMAPACTORINTERFACE_API UClass* Z_Construct_UClass_UKendalTileMapActorPositionInterface_NoRegister();

#define FID_Kendal_Source_KendalTileMapActorInterface_Public_KendalTileMapActorPositionInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKendalTileMapActorPositionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKendalTileMapActorPositionInterface(UKendalTileMapActorPositionInterface&&) = delete; \
	UKendalTileMapActorPositionInterface(const UKendalTileMapActorPositionInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKendalTileMapActorPositionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKendalTileMapActorPositionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKendalTileMapActorPositionInterface) \
	virtual ~UKendalTileMapActorPositionInterface() = default;


#define FID_Kendal_Source_KendalTileMapActorInterface_Public_KendalTileMapActorPositionInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUKendalTileMapActorPositionInterface(); \
	friend struct Z_Construct_UClass_UKendalTileMapActorPositionInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KENDALTILEMAPACTORINTERFACE_API UClass* Z_Construct_UClass_UKendalTileMapActorPositionInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UKendalTileMapActorPositionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/KendalTileMapActorInterface"), Z_Construct_UClass_UKendalTileMapActorPositionInterface_NoRegister) \
	DECLARE_SERIALIZER(UKendalTileMapActorPositionInterface)


#define FID_Kendal_Source_KendalTileMapActorInterface_Public_KendalTileMapActorPositionInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Kendal_Source_KendalTileMapActorInterface_Public_KendalTileMapActorPositionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Kendal_Source_KendalTileMapActorInterface_Public_KendalTileMapActorPositionInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Kendal_Source_KendalTileMapActorInterface_Public_KendalTileMapActorPositionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IKendalTileMapActorPositionInterface() {} \
public: \
	typedef UKendalTileMapActorPositionInterface UClassType; \
	typedef IKendalTileMapActorPositionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Kendal_Source_KendalTileMapActorInterface_Public_KendalTileMapActorPositionInterface_h_10_PROLOG
#define FID_Kendal_Source_KendalTileMapActorInterface_Public_KendalTileMapActorPositionInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kendal_Source_KendalTileMapActorInterface_Public_KendalTileMapActorPositionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKendalTileMapActorPositionInterface;

// ********** End Interface UKendalTileMapActorPositionInterface ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kendal_Source_KendalTileMapActorInterface_Public_KendalTileMapActorPositionInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
