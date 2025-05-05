// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCG_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PCG;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PCG()
	{
		if (!Z_Registration_Info_UPackage__Script_PCG.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PCG",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x261CBF71,
				0xD487B5FE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PCG.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PCG.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PCG(Z_Construct_UPackage__Script_PCG, TEXT("/Script/PCG"), Z_Registration_Info_UPackage__Script_PCG, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x261CBF71, 0xD487B5FE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
