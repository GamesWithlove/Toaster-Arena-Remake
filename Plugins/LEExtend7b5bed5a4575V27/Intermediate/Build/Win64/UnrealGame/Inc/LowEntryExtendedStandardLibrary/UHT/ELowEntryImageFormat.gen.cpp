// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELowEntryImageFormat.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeELowEntryImageFormat() {}

// ********** Begin Cross Module References ********************************************************
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELowEntryImageFormat ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELowEntryImageFormat;
static UEnum* ELowEntryImageFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELowEntryImageFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELowEntryImageFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat, (UObject*)Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("ELowEntryImageFormat"));
	}
	return Z_Registration_Info_UEnum_ELowEntryImageFormat.OuterSingleton;
}
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<ELowEntryImageFormat>()
{
	return ELowEntryImageFormat_StaticEnum();
}
struct Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BMP.Comment", "/** Windows Bitmap */" },
		{ "BMP.Name", "ELowEntryImageFormat::BMP" },
		{ "BMP.ToolTip", "Windows Bitmap" },
		{ "EXR.Comment", "/** OpenEXR (HDR) image file format */" },
		{ "EXR.Name", "ELowEntryImageFormat::EXR" },
		{ "EXR.ToolTip", "OpenEXR (HDR) image file format" },
		{ "GrayscaleJPEG.Comment", "/** Single channel jpeg */" },
		{ "GrayscaleJPEG.Name", "ELowEntryImageFormat::GrayscaleJPEG" },
		{ "GrayscaleJPEG.ToolTip", "Single channel jpeg" },
		{ "ICNS.Comment", "/** Mac icon */" },
		{ "ICNS.Name", "ELowEntryImageFormat::ICNS" },
		{ "ICNS.ToolTip", "Mac icon" },
		{ "ICO.Comment", "/** Windows Icon resource */" },
		{ "ICO.Name", "ELowEntryImageFormat::ICO" },
		{ "ICO.ToolTip", "Windows Icon resource" },
		{ "Invalid.Comment", "/** Invalid or unrecognized format */" },
		{ "Invalid.Name", "ELowEntryImageFormat::Invalid" },
		{ "Invalid.ToolTip", "Invalid or unrecognized format" },
		{ "JPEG.Comment", "/** Joint Photographic Experts Group */" },
		{ "JPEG.Name", "ELowEntryImageFormat::JPEG" },
		{ "JPEG.ToolTip", "Joint Photographic Experts Group" },
		{ "ModuleRelativePath", "Public/Classes/ELowEntryImageFormat.h" },
		{ "PNG.Comment", "/** Portable Network Graphics */" },
		{ "PNG.Name", "ELowEntryImageFormat::PNG" },
		{ "PNG.ToolTip", "Portable Network Graphics" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELowEntryImageFormat::Invalid", (int64)ELowEntryImageFormat::Invalid },
		{ "ELowEntryImageFormat::PNG", (int64)ELowEntryImageFormat::PNG },
		{ "ELowEntryImageFormat::JPEG", (int64)ELowEntryImageFormat::JPEG },
		{ "ELowEntryImageFormat::GrayscaleJPEG", (int64)ELowEntryImageFormat::GrayscaleJPEG },
		{ "ELowEntryImageFormat::BMP", (int64)ELowEntryImageFormat::BMP },
		{ "ELowEntryImageFormat::ICO", (int64)ELowEntryImageFormat::ICO },
		{ "ELowEntryImageFormat::EXR", (int64)ELowEntryImageFormat::EXR },
		{ "ELowEntryImageFormat::ICNS", (int64)ELowEntryImageFormat::ICNS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
	nullptr,
	"ELowEntryImageFormat",
	"ELowEntryImageFormat",
	Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat()
{
	if (!Z_Registration_Info_UEnum_ELowEntryImageFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELowEntryImageFormat.InnerSingleton, Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELowEntryImageFormat.InnerSingleton;
}
// ********** End Enum ELowEntryImageFormat ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryImageFormat_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELowEntryImageFormat_StaticEnum, TEXT("ELowEntryImageFormat"), &Z_Registration_Info_UEnum_ELowEntryImageFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2958228980U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryImageFormat_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryImageFormat_h__Script_LowEntryExtendedStandardLibrary_4070078087{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryImageFormat_h__Script_LowEntryExtendedStandardLibrary_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryImageFormat_h__Script_LowEntryExtendedStandardLibrary_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
