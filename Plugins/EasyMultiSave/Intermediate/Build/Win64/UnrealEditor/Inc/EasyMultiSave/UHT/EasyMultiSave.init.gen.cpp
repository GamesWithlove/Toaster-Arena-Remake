// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyMultiSave_init() {}
	EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature();
	EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature();
	EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature();
	EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature();
	EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature();
	EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_CheckCompletedPin__DelegateSignature();
	EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_CheckFailedPin__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EasyMultiSave;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EasyMultiSave()
	{
		if (!Z_Registration_Info_UPackage__Script_EasyMultiSave.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadFailedPin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyMultiSave_AsyncLoadOutputPin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveFailedPin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyMultiSave_AsyncSaveOutputPin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyMultiSave_AsyncWaitOutputPin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyMultiSave_CheckCompletedPin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyMultiSave_CheckFailedPin__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EasyMultiSave",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4B074EAD,
				0x9C0DEBAF,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EasyMultiSave.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EasyMultiSave.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EasyMultiSave(Z_Construct_UPackage__Script_EasyMultiSave, TEXT("/Script/EasyMultiSave"), Z_Registration_Info_UPackage__Script_EasyMultiSave, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4B074EAD, 0x9C0DEBAF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
