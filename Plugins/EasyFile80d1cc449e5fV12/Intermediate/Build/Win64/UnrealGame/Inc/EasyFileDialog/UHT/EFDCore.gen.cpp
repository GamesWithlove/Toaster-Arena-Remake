// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EFDCore.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEFDCore() {}

// ********** Begin Cross Module References ********************************************************
EASYFILEDIALOG_API UEnum* Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags();
UPackage* Z_Construct_UPackage__Script_EasyFileDialog();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EEasyFileDialogFlags ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEasyFileDialogFlags;
static UEnum* EEasyFileDialogFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEasyFileDialogFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEasyFileDialogFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags, (UObject*)Z_Construct_UPackage__Script_EasyFileDialog(), TEXT("EEasyFileDialogFlags"));
	}
	return Z_Registration_Info_UEnum_EEasyFileDialogFlags.OuterSingleton;
}
template<> EASYFILEDIALOG_NON_ATTRIBUTED_API UEnum* StaticEnum<EEasyFileDialogFlags>()
{
	return EEasyFileDialogFlags_StaticEnum();
}
struct Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Flag Enum for saving multiple or single file's\n" },
		{ "ModuleRelativePath", "Public/EFDCore.h" },
		{ "Multiple.Comment", "// No flags\n" },
		{ "Multiple.Name", "Multiple" },
		{ "Multiple.ToolTip", "No flags" },
		{ "Single.Name", "Single" },
		{ "ToolTip", "Flag Enum for saving multiple or single file's" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Single", (int64)Single },
		{ "Multiple", (int64)Multiple },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyFileDialog,
	nullptr,
	"EEasyFileDialogFlags",
	"EEasyFileDialogFlags",
	Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags()
{
	if (!Z_Registration_Info_UEnum_EEasyFileDialogFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEasyFileDialogFlags.InnerSingleton, Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEasyFileDialogFlags.InnerSingleton;
}
// ********** End Enum EEasyFileDialogFlags ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDCore_h__Script_EasyFileDialog_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEasyFileDialogFlags_StaticEnum, TEXT("EEasyFileDialogFlags"), &Z_Registration_Info_UEnum_EEasyFileDialogFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 516898821U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDCore_h__Script_EasyFileDialog_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDCore_h__Script_EasyFileDialog_3337509396{
	TEXT("/Script/EasyFileDialog"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDCore_h__Script_EasyFileDialog_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDCore_h__Script_EasyFileDialog_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
