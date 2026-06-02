// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVictoryBPLibrary_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	VICTORYBPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_VictoryBPLibrary_OnJoyColorChangedEvent__DelegateSignature();
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
			0xCAD3CDC0,
			0xA8A60EA7,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VictoryBPLibrary.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_VictoryBPLibrary.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VictoryBPLibrary(Z_Construct_UPackage__Script_VictoryBPLibrary, TEXT("/Script/VictoryBPLibrary"), Z_Registration_Info_UPackage__Script_VictoryBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCAD3CDC0, 0xA8A60EA7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
