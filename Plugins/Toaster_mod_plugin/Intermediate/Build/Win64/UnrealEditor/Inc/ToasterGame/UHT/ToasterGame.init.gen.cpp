// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToasterGame_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ToasterGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ToasterGame()
	{
		if (!Z_Registration_Info_UPackage__Script_ToasterGame.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/ToasterGame",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0x4B8A9754,
			0x5D4B5C65,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ToasterGame.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_ToasterGame.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ToasterGame(Z_Construct_UPackage__Script_ToasterGame, TEXT("/Script/ToasterGame"), Z_Registration_Info_UPackage__Script_ToasterGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4B8A9754, 0x5D4B5C65));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
