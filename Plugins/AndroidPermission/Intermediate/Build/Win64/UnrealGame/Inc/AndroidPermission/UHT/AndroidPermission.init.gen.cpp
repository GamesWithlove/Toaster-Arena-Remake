// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidPermission_init() {}
	ANDROIDPERMISSION_API UFunction* Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AndroidPermission;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AndroidPermission()
	{
		if (!Z_Registration_Info_UPackage__Script_AndroidPermission.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AndroidPermission",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5C46A87F,
				0x184983B8,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AndroidPermission.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AndroidPermission.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AndroidPermission(Z_Construct_UPackage__Script_AndroidPermission, TEXT("/Script/AndroidPermission"), Z_Registration_Info_UPackage__Script_AndroidPermission, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5C46A87F, 0x184983B8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
