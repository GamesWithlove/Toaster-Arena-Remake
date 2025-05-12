// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/ELowEntryImageFormat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELowEntryImageFormat() {}
// Cross Module References
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELowEntryImageFormat;
	static UEnum* ELowEntryImageFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELowEntryImageFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELowEntryImageFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat, (UObject*)Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("ELowEntryImageFormat"));
		}
		return Z_Registration_Info_UEnum_ELowEntryImageFormat.OuterSingleton;
	}
	template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* StaticEnum<ELowEntryImageFormat>()
	{
		return ELowEntryImageFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Statics::Enumerators[] = {
		{ "ELowEntryImageFormat::Invalid", (int64)ELowEntryImageFormat::Invalid },
		{ "ELowEntryImageFormat::PNG", (int64)ELowEntryImageFormat::PNG },
		{ "ELowEntryImageFormat::JPEG", (int64)ELowEntryImageFormat::JPEG },
		{ "ELowEntryImageFormat::GrayscaleJPEG", (int64)ELowEntryImageFormat::GrayscaleJPEG },
		{ "ELowEntryImageFormat::BMP", (int64)ELowEntryImageFormat::BMP },
		{ "ELowEntryImageFormat::ICO", (int64)ELowEntryImageFormat::ICO },
		{ "ELowEntryImageFormat::EXR", (int64)ELowEntryImageFormat::EXR },
		{ "ELowEntryImageFormat::ICNS", (int64)ELowEntryImageFormat::ICNS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Statics::Enum_MetaDataParams[] = {
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
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
		nullptr,
		"ELowEntryImageFormat",
		"ELowEntryImageFormat",
		Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat()
	{
		if (!Z_Registration_Info_UEnum_ELowEntryImageFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELowEntryImageFormat.InnerSingleton, Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELowEntryImageFormat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryImageFormat_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryImageFormat_h_Statics::EnumInfo[] = {
		{ ELowEntryImageFormat_StaticEnum, TEXT("ELowEntryImageFormat"), &Z_Registration_Info_UEnum_ELowEntryImageFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3350100385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryImageFormat_h_2970884637(TEXT("/Script/LowEntryExtendedStandardLibrary"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryImageFormat_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryImageFormat_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
