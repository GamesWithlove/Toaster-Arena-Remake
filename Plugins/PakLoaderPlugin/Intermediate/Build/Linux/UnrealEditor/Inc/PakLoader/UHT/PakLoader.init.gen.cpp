// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePakLoader_init() {}
	PAKLOADER_API UFunction* Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature();
	PAKLOADER_API UFunction* Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature();
	PAKLOADER_API UFunction* Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PakLoader;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PakLoader()
	{
		if (!Z_Registration_Info_UPackage__Script_PakLoader.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PakLoader_DownloadPakDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PakLoader",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x62097625,
				0x17D7C9F6,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PakLoader.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PakLoader.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PakLoader(Z_Construct_UPackage__Script_PakLoader, TEXT("/Script/PakLoader"), Z_Registration_Info_UPackage__Script_PakLoader, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x62097625, 0x17D7C9F6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
