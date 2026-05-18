// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorWheelPlugin_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	COLORWHEELPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature();
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
			0x0B45AA13,
			0x8F303D2A,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ColorWheelPlugin.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_ColorWheelPlugin.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ColorWheelPlugin(Z_Construct_UPackage__Script_ColorWheelPlugin, TEXT("/Script/ColorWheelPlugin"), Z_Registration_Info_UPackage__Script_ColorWheelPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0B45AA13, 0x8F303D2A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
