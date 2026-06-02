// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowsCodePlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShadowsCodePlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShadowsCodePlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_ShadowsCodePlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ShadowsCodePlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE30D1622,
				0xC94E0B5E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShadowsCodePlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ShadowsCodePlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShadowsCodePlugin(Z_Construct_UPackage__Script_ShadowsCodePlugin, TEXT("/Script/ShadowsCodePlugin"), Z_Registration_Info_UPackage__Script_ShadowsCodePlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE30D1622, 0xC94E0B5E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
