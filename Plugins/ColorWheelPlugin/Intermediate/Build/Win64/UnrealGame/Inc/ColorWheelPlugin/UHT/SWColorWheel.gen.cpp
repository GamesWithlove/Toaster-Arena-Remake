// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SWColorWheel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWColorWheel() {}
// Cross Module References
	COLORWHEELPLUGIN_API UEnum* Z_Construct_UEnum_ColorWheelPlugin_EWheelBrushTarget();
	UPackage* Z_Construct_UPackage__Script_ColorWheelPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWheelBrushTarget;
	static UEnum* EWheelBrushTarget_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWheelBrushTarget.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWheelBrushTarget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ColorWheelPlugin_EWheelBrushTarget, (UObject*)Z_Construct_UPackage__Script_ColorWheelPlugin(), TEXT("EWheelBrushTarget"));
		}
		return Z_Registration_Info_UEnum_EWheelBrushTarget.OuterSingleton;
	}
	template<> COLORWHEELPLUGIN_API UEnum* StaticEnum<EWheelBrushTarget>()
	{
		return EWheelBrushTarget_StaticEnum();
	}
	struct Z_Construct_UEnum_ColorWheelPlugin_EWheelBrushTarget_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ColorWheelPlugin_EWheelBrushTarget_Statics::Enumerators[] = {
		{ "All", (int64)All },
		{ "SelectorPin", (int64)SelectorPin },
		{ "HueCircle", (int64)HueCircle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ColorWheelPlugin_EWheelBrushTarget_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "// Apply brush to pin and wheel\n" },
		{ "All.Name", "All" },
		{ "All.ToolTip", "Apply brush to pin and wheel" },
		{ "Comment", "// Used for some of the Color wheels UFUNCTIONS to specify the target brush.\n" },
		{ "HueCircle.Comment", "// Apply only to the wheel\n" },
		{ "HueCircle.Name", "HueCircle" },
		{ "HueCircle.ToolTip", "Apply only to the wheel" },
		{ "ModuleRelativePath", "Public/SWColorWheel.h" },
		{ "SelectorPin.Comment", "// Apply only to the pin\n" },
		{ "SelectorPin.Name", "SelectorPin" },
		{ "SelectorPin.ToolTip", "Apply only to the pin" },
		{ "ToolTip", "Used for some of the Color wheels UFUNCTIONS to specify the target brush." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ColorWheelPlugin_EWheelBrushTarget_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ColorWheelPlugin,
		nullptr,
		"EWheelBrushTarget",
		"EWheelBrushTarget",
		Z_Construct_UEnum_ColorWheelPlugin_EWheelBrushTarget_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ColorWheelPlugin_EWheelBrushTarget_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_ColorWheelPlugin_EWheelBrushTarget_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ColorWheelPlugin_EWheelBrushTarget_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ColorWheelPlugin_EWheelBrushTarget()
	{
		if (!Z_Registration_Info_UEnum_EWheelBrushTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWheelBrushTarget.InnerSingleton, Z_Construct_UEnum_ColorWheelPlugin_EWheelBrushTarget_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWheelBrushTarget.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_SWColorWheel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_SWColorWheel_h_Statics::EnumInfo[] = {
		{ EWheelBrushTarget_StaticEnum, TEXT("EWheelBrushTarget"), &Z_Registration_Info_UEnum_EWheelBrushTarget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2779690821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_SWColorWheel_h_793331828(TEXT("/Script/ColorWheelPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_SWColorWheel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_SWColorWheel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
