// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInput_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Input;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Input()
	{
		if (!Z_Registration_Info_UPackage__Script_Input.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Input",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x92A0228F,
				0x098917EE,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Input.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Input.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Input(Z_Construct_UPackage__Script_Input, TEXT("/Script/Input"), Z_Registration_Info_UPackage__Script_Input, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x92A0228F, 0x098917EE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
