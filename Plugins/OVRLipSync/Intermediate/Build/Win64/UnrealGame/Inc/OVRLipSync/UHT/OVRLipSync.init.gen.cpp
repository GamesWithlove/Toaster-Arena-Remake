// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRLipSync_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	OVRLIPSYNC_API UFunction* Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OVRLipSync;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OVRLipSync()
	{
		if (!Z_Registration_Info_UPackage__Script_OVRLipSync.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/OVRLipSync",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xC561E0A8,
			0x36E7F1A2,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OVRLipSync.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_OVRLipSync.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OVRLipSync(Z_Construct_UPackage__Script_OVRLipSync, TEXT("/Script/OVRLipSync"), Z_Registration_Info_UPackage__Script_OVRLipSync, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC561E0A8, 0x36E7F1A2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
