// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToasterGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ToasterGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ToasterGame()
	{
		if (!Z_Registration_Info_UPackage__Script_ToasterGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ToasterGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x6532A9A9,
				0xFFFFDBD4,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ToasterGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ToasterGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ToasterGame(Z_Construct_UPackage__Script_ToasterGame, TEXT("/Script/ToasterGame"), Z_Registration_Info_UPackage__Script_ToasterGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6532A9A9, 0xFFFFDBD4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
