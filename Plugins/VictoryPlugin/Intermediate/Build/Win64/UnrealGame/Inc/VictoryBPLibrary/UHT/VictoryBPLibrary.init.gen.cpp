// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVictoryBPLibrary_init() {}
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VictoryBPLibrary;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VictoryBPLibrary()
	{
		if (!Z_Registration_Info_UPackage__Script_VictoryBPLibrary.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VictoryBPLibrary",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x308159A1,
				0xC9D705CD,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VictoryBPLibrary.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VictoryBPLibrary.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VictoryBPLibrary(Z_Construct_UPackage__Script_VictoryBPLibrary, TEXT("/Script/VictoryBPLibrary"), Z_Registration_Info_UPackage__Script_VictoryBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x308159A1, 0xC9D705CD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
