// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BackgroundBlurWithMaskDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackgroundBlurWithMaskDefine() {}
// Cross Module References
	BACKGROUNDBLURWITHMASK_API UEnum* Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod();
	BACKGROUNDBLURWITHMASK_API UEnum* Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel();
	BACKGROUNDBLURWITHMASK_API UScriptStruct* Z_Construct_UScriptStruct_FMaskMaterialSetting();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BackgroundBlurWithMask();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaskTextureChannel;
	static UEnum* EMaskTextureChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaskTextureChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaskTextureChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel, (UObject*)Z_Construct_UPackage__Script_BackgroundBlurWithMask(), TEXT("EMaskTextureChannel"));
		}
		return Z_Registration_Info_UEnum_EMaskTextureChannel.OuterSingleton;
	}
	template<> BACKGROUNDBLURWITHMASK_API UEnum* StaticEnum<EMaskTextureChannel>()
	{
		return EMaskTextureChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel_Statics::Enumerators[] = {
		{ "R", (int64)R },
		{ "G", (int64)G },
		{ "B", (int64)B },
		{ "A", (int64)A },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel_Statics::Enum_MetaDataParams[] = {
		{ "A.DisplayName", "A" },
		{ "A.Name", "A" },
		{ "B.DisplayName", "B" },
		{ "B.Name", "B" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enumerates background blur mask texture channel.\n */" },
		{ "G.DisplayName", "G" },
		{ "G.Name", "G" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskDefine.h" },
		{ "R.DisplayName", "R" },
		{ "R.Name", "R" },
		{ "ToolTip", "Enumerates background blur mask texture channel." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BackgroundBlurWithMask,
		nullptr,
		"EMaskTextureChannel",
		"EMaskTextureChannel",
		Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel()
	{
		if (!Z_Registration_Info_UEnum_EMaskTextureChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaskTextureChannel.InnerSingleton, Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaskTextureChannel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaskMaterialRedrawMethod;
	static UEnum* EMaskMaterialRedrawMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaskMaterialRedrawMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaskMaterialRedrawMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod, (UObject*)Z_Construct_UPackage__Script_BackgroundBlurWithMask(), TEXT("EMaskMaterialRedrawMethod"));
		}
		return Z_Registration_Info_UEnum_EMaskMaterialRedrawMethod.OuterSingleton;
	}
	template<> BACKGROUNDBLURWITHMASK_API UEnum* StaticEnum<EMaskMaterialRedrawMethod>()
	{
		return EMaskMaterialRedrawMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod_Statics::Enumerators[] = {
		{ "RedrawEveryFrame", (int64)RedrawEveryFrame },
		{ "RedrawBlueprint", (int64)RedrawBlueprint },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enumerates background blur mask material paint method.\n */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskDefine.h" },
		{ "RedrawBlueprint.DisplayName", "RedrawBlueprint" },
		{ "RedrawBlueprint.Name", "RedrawBlueprint" },
		{ "RedrawEveryFrame.DisplayName", "RedrawEveryFrame" },
		{ "RedrawEveryFrame.Name", "RedrawEveryFrame" },
		{ "ToolTip", "Enumerates background blur mask material paint method." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BackgroundBlurWithMask,
		nullptr,
		"EMaskMaterialRedrawMethod",
		"EMaskMaterialRedrawMethod",
		Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod()
	{
		if (!Z_Registration_Info_UEnum_EMaskMaterialRedrawMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaskMaterialRedrawMethod.InnerSingleton, Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaskMaterialRedrawMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaskMaterialSetting;
class UScriptStruct* FMaskMaterialSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaskMaterialSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaskMaterialSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaskMaterialSetting, (UObject*)Z_Construct_UPackage__Script_BackgroundBlurWithMask(), TEXT("MaskMaterialSetting"));
	}
	return Z_Registration_Info_UScriptStruct_MaskMaterialSetting.OuterSingleton;
}
template<> BACKGROUNDBLURWITHMASK_API UScriptStruct* StaticStruct<FMaskMaterialSetting>()
{
	return FMaskMaterialSetting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToTextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToTextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedrawMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RedrawMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaskMaterialSetting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_MaskMaterial_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Mask material to control blur region.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskDefine.h" },
		{ "ToolTip", "Mask material to control blur region." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_MaskMaterial = { "MaskMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaskMaterialSetting, MaskMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_MaskMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_MaskMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_ToTextureSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Mask material paint to mask texture size.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskDefine.h" },
		{ "ToolTip", "Mask material paint to mask texture size." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_ToTextureSize = { "ToTextureSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaskMaterialSetting, ToTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_ToTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_ToTextureSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_RedrawMethod_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Mask material paint method.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskDefine.h" },
		{ "ToolTip", "Mask material paint method." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_RedrawMethod = { "RedrawMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaskMaterialSetting, RedrawMethod), Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_RedrawMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_RedrawMethod_MetaData)) }; // 2305122300
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_MaskMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_ToTextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_RedrawMethod,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BackgroundBlurWithMask,
		nullptr,
		&NewStructOps,
		"MaskMaterialSetting",
		sizeof(FMaskMaterialSetting),
		alignof(FMaskMaterialSetting),
		Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaskMaterialSetting()
	{
		if (!Z_Registration_Info_UScriptStruct_MaskMaterialSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaskMaterialSetting.InnerSingleton, Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaskMaterialSetting.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskDefine_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskDefine_h_Statics::EnumInfo[] = {
		{ EMaskTextureChannel_StaticEnum, TEXT("EMaskTextureChannel"), &Z_Registration_Info_UEnum_EMaskTextureChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 154242514U) },
		{ EMaskMaterialRedrawMethod_StaticEnum, TEXT("EMaskMaterialRedrawMethod"), &Z_Registration_Info_UEnum_EMaskMaterialRedrawMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2305122300U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskDefine_h_Statics::ScriptStructInfo[] = {
		{ FMaskMaterialSetting::StaticStruct, Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewStructOps, TEXT("MaskMaterialSetting"), &Z_Registration_Info_UScriptStruct_MaskMaterialSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaskMaterialSetting), 1354664325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskDefine_h_2803498266(TEXT("/Script/BackgroundBlurWithMask"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskDefine_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskDefine_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskDefine_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskDefine_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
