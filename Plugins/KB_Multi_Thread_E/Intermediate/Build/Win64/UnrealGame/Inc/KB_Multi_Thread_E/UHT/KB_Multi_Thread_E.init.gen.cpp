// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKB_Multi_Thread_E_init() {}
	KB_MULTI_THREAD_E_API UFunction* Z_Construct_UDelegateFunction_KB_Multi_Thread_E_TaskOutput2__DelegateSignature();
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
				0x28B272AC,
				0x52F7D4C5,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_KB_Multi_Thread_E.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_KB_Multi_Thread_E.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_KB_Multi_Thread_E(Z_Construct_UPackage__Script_KB_Multi_Thread_E, TEXT("/Script/KB_Multi_Thread_E"), Z_Registration_Info_UPackage__Script_KB_Multi_Thread_E, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x28B272AC, 0x52F7D4C5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
