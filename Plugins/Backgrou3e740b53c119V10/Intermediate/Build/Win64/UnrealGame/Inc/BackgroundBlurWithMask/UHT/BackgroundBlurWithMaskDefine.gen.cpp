// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BackgroundBlurWithMaskDefine.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBackgroundBlurWithMaskDefine() {}

// ********** Begin Cross Module References ********************************************************
BACKGROUNDBLURWITHMASK_API UEnum* Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod();
BACKGROUNDBLURWITHMASK_API UEnum* Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel();
BACKGROUNDBLURWITHMASK_API UScriptStruct* Z_Construct_UScriptStruct_FMaskMaterialSetting();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_BackgroundBlurWithMask();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMaskTextureChannel *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaskTextureChannel;
static UEnum* EMaskTextureChannel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaskTextureChannel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaskTextureChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel, (UObject*)Z_Construct_UPackage__Script_BackgroundBlurWithMask(), TEXT("EMaskTextureChannel"));
	}
	return Z_Registration_Info_UEnum_EMaskTextureChannel.OuterSingleton;
}
template<> BACKGROUNDBLURWITHMASK_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaskTextureChannel>()
{
	return EMaskTextureChannel_StaticEnum();
}
struct Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "R", (int64)R },
		{ "G", (int64)G },
		{ "B", (int64)B },
		{ "A", (int64)A },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BackgroundBlurWithMask,
	nullptr,
	"EMaskTextureChannel",
	"EMaskTextureChannel",
	Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel()
{
	if (!Z_Registration_Info_UEnum_EMaskTextureChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaskTextureChannel.InnerSingleton, Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaskTextureChannel.InnerSingleton;
}
// ********** End Enum EMaskTextureChannel *********************************************************

// ********** Begin Enum EMaskMaterialRedrawMethod *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaskMaterialRedrawMethod;
static UEnum* EMaskMaterialRedrawMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaskMaterialRedrawMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaskMaterialRedrawMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod, (UObject*)Z_Construct_UPackage__Script_BackgroundBlurWithMask(), TEXT("EMaskMaterialRedrawMethod"));
	}
	return Z_Registration_Info_UEnum_EMaskMaterialRedrawMethod.OuterSingleton;
}
template<> BACKGROUNDBLURWITHMASK_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaskMaterialRedrawMethod>()
{
	return EMaskMaterialRedrawMethod_StaticEnum();
}
struct Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enumerates background blur mask material paint method.\n */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskDefine.h" },
		{ "RedrawBlueprint.DisplayName", "RedrawBlueprint" },
		{ "RedrawBlueprint.Name", "RedrawBlueprint" },
		{ "RedrawEveryFrame.DisplayName", "RedrawEveryFrame" },
		{ "RedrawEveryFrame.Name", "RedrawEveryFrame" },
		{ "ToolTip", "Enumerates background blur mask material paint method." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RedrawEveryFrame", (int64)RedrawEveryFrame },
		{ "RedrawBlueprint", (int64)RedrawBlueprint },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BackgroundBlurWithMask,
	nullptr,
	"EMaskMaterialRedrawMethod",
	"EMaskMaterialRedrawMethod",
	Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod()
{
	if (!Z_Registration_Info_UEnum_EMaskMaterialRedrawMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaskMaterialRedrawMethod.InnerSingleton, Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaskMaterialRedrawMethod.InnerSingleton;
}
// ********** End Enum EMaskMaterialRedrawMethod ***************************************************

// ********** Begin ScriptStruct FMaskMaterialSetting **********************************************
struct Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMaskMaterialSetting); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMaskMaterialSetting); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskMaterial_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Mask material to control blur region.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskDefine.h" },
		{ "ToolTip", "Mask material to control blur region." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToTextureSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Mask material paint to mask texture size.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskDefine.h" },
		{ "ToolTip", "Mask material paint to mask texture size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedrawMethod_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Mask material paint method.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskDefine.h" },
		{ "ToolTip", "Mask material paint method." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMaskMaterialSetting constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToTextureSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RedrawMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMaskMaterialSetting constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaskMaterialSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMaskMaterialSetting;
class UScriptStruct* FMaskMaterialSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMaskMaterialSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMaskMaterialSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaskMaterialSetting, (UObject*)Z_Construct_UPackage__Script_BackgroundBlurWithMask(), TEXT("MaskMaterialSetting"));
	}
	return Z_Registration_Info_UScriptStruct_FMaskMaterialSetting.OuterSingleton;
	}

// ********** Begin ScriptStruct FMaskMaterialSetting Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_MaskMaterial = { "MaskMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaskMaterialSetting, MaskMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskMaterial_MetaData), NewProp_MaskMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_ToTextureSize = { "ToTextureSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaskMaterialSetting, ToTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToTextureSize_MetaData), NewProp_ToTextureSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_RedrawMethod = { "RedrawMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaskMaterialSetting, RedrawMethod), Z_Construct_UEnum_BackgroundBlurWithMask_EMaskMaterialRedrawMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedrawMethod_MetaData), NewProp_RedrawMethod_MetaData) }; // 3936860783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_MaskMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_ToTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewProp_RedrawMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMaskMaterialSetting Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BackgroundBlurWithMask,
	nullptr,
	&NewStructOps,
	"MaskMaterialSetting",
	Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::PropPointers),
	sizeof(FMaskMaterialSetting),
	alignof(FMaskMaterialSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaskMaterialSetting()
{
	if (!Z_Registration_Info_UScriptStruct_FMaskMaterialSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMaskMaterialSetting.InnerSingleton, Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMaskMaterialSetting.InnerSingleton);
}
// ********** End ScriptStruct FMaskMaterialSetting ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskDefine_h__Script_BackgroundBlurWithMask_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMaskTextureChannel_StaticEnum, TEXT("EMaskTextureChannel"), &Z_Registration_Info_UEnum_EMaskTextureChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2444708300U) },
		{ EMaskMaterialRedrawMethod_StaticEnum, TEXT("EMaskMaterialRedrawMethod"), &Z_Registration_Info_UEnum_EMaskMaterialRedrawMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3936860783U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMaskMaterialSetting::StaticStruct, Z_Construct_UScriptStruct_FMaskMaterialSetting_Statics::NewStructOps, TEXT("MaskMaterialSetting"),&Z_Registration_Info_UScriptStruct_FMaskMaterialSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaskMaterialSetting), 3269052173U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskDefine_h__Script_BackgroundBlurWithMask_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskDefine_h__Script_BackgroundBlurWithMask_395944896{
	TEXT("/Script/BackgroundBlurWithMask"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskDefine_h__Script_BackgroundBlurWithMask_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskDefine_h__Script_BackgroundBlurWithMask_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskDefine_h__Script_BackgroundBlurWithMask_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskDefine_h__Script_BackgroundBlurWithMask_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
