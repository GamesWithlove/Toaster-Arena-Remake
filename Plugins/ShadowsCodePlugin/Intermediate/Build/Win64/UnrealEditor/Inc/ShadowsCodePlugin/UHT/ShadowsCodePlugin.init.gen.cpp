// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowsCodePlugin_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShadowsCodePlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShadowsCodePlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_ShadowsCodePlugin.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/ShadowsCodePlugin",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0x835AAE28,
			0xF7DFA513,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShadowsCodePlugin.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_ShadowsCodePlugin.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShadowsCodePlugin(Z_Construct_UPackage__Script_ShadowsCodePlugin, TEXT("/Script/ShadowsCodePlugin"), Z_Registration_Info_UPackage__Script_ShadowsCodePlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x835AAE28, 0xF7DFA513));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
