// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRest_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	VAREST_API UFunction* Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature();
	VAREST_API UFunction* Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature();
	VAREST_API UFunction* Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VaRest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VaRest()
	{
		if (!Z_Registration_Info_UPackage__Script_VaRest.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/VaRest",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x946449D5,
			0xB881F880,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VaRest.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_VaRest.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VaRest(Z_Construct_UPackage__Script_VaRest, TEXT("/Script/VaRest"), Z_Registration_Info_UPackage__Script_VaRest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x946449D5, 0xB881F880));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
