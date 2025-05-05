// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorWheelPlugin_init() {}
	COLORWHEELPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature();
	COLORWHEELPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature();
	COLORWHEELPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ColorWheelPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ColorWheelPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_ColorWheelPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ColorWheelPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9F618568,
				0x45169AC4,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ColorWheelPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ColorWheelPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ColorWheelPlugin(Z_Construct_UPackage__Script_ColorWheelPlugin, TEXT("/Script/ColorWheelPlugin"), Z_Registration_Info_UPackage__Script_ColorWheelPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9F618568, 0x45169AC4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
