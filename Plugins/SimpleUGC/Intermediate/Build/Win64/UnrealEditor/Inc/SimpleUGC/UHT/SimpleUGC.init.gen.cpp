// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleUGC_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimpleUGC;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimpleUGC()
	{
		if (!Z_Registration_Info_UPackage__Script_SimpleUGC.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/SimpleUGC",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0x84DE36D2,
			0x0A3FC82C,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimpleUGC.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_SimpleUGC.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimpleUGC(Z_Construct_UPackage__Script_SimpleUGC, TEXT("/Script/SimpleUGC"), Z_Registration_Info_UPackage__Script_SimpleUGC, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x84DE36D2, 0x0A3FC82C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
