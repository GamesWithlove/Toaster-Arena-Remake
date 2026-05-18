// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMerger_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RuntimeMerger;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RuntimeMerger()
	{
		if (!Z_Registration_Info_UPackage__Script_RuntimeMerger.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/RuntimeMerger",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0x7019AC98,
			0x24A8BCA1,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RuntimeMerger.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_RuntimeMerger.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RuntimeMerger(Z_Construct_UPackage__Script_RuntimeMerger, TEXT("/Script/RuntimeMerger"), Z_Registration_Info_UPackage__Script_RuntimeMerger, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7019AC98, 0x24A8BCA1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
