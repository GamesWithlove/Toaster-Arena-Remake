// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELowEntryRGBFormat.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeELowEntryRGBFormat() {}

// ********** Begin Cross Module References ********************************************************
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryRGBFormat();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELowEntryRGBFormat ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELowEntryRGBFormat;
static UEnum* ELowEntryRGBFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELowEntryRGBFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELowEntryRGBFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryRGBFormat, (UObject*)Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("ELowEntryRGBFormat"));
	}
	return Z_Registration_Info_UEnum_ELowEntryRGBFormat.OuterSingleton;
}
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<ELowEntryRGBFormat>()
{
	return ELowEntryRGBFormat_StaticEnum();
}
struct Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryRGBFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BGRA.Name", "ELowEntryRGBFormat::BGRA" },
		{ "BlueprintType", "true" },
		{ "Gray.Name", "ELowEntryRGBFormat::Gray" },
		{ "Invalid.Name", "ELowEntryRGBFormat::Invalid" },
		{ "ModuleRelativePath", "Public/Classes/ELowEntryRGBFormat.h" },
		{ "RGBA.Name", "ELowEntryRGBFormat::RGBA" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELowEntryRGBFormat::Invalid", (int64)ELowEntryRGBFormat::Invalid },
		{ "ELowEntryRGBFormat::RGBA", (int64)ELowEntryRGBFormat::RGBA },
		{ "ELowEntryRGBFormat::BGRA", (int64)ELowEntryRGBFormat::BGRA },
		{ "ELowEntryRGBFormat::Gray", (int64)ELowEntryRGBFormat::Gray },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryRGBFormat_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryRGBFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
	nullptr,
	"ELowEntryRGBFormat",
	"ELowEntryRGBFormat",
	Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryRGBFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryRGBFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryRGBFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryRGBFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryRGBFormat()
{
	if (!Z_Registration_Info_UEnum_ELowEntryRGBFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELowEntryRGBFormat.InnerSingleton, Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryRGBFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELowEntryRGBFormat.InnerSingleton;
}
// ********** End Enum ELowEntryRGBFormat **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryRGBFormat_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELowEntryRGBFormat_StaticEnum, TEXT("ELowEntryRGBFormat"), &Z_Registration_Info_UEnum_ELowEntryRGBFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1227537745U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryRGBFormat_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryRGBFormat_h__Script_LowEntryExtendedStandardLibrary_901861517{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryRGBFormat_h__Script_LowEntryExtendedStandardLibrary_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryRGBFormat_h__Script_LowEntryExtendedStandardLibrary_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
