// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKB_Multi_Thread_E_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	KB_MULTI_THREAD_E_API UFunction* Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput2__DelegateSignature();
	KB_MULTI_THREAD_E_API UFunction* Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_KB_Multi_Thread_E;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_KB_Multi_Thread_E()
	{
		if (!Z_Registration_Info_UPackage__Script_KB_Multi_Thread_E.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput2__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/KB_Multi_Thread_E",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xA2B24351,
			0xBE9F246B,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_KB_Multi_Thread_E.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_KB_Multi_Thread_E.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_KB_Multi_Thread_E(Z_Construct_UPackage__Script_KB_Multi_Thread_E, TEXT("/Script/KB_Multi_Thread_E"), Z_Registration_Info_UPackage__Script_KB_Multi_Thread_E, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA2B24351, 0xBE9F246B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
