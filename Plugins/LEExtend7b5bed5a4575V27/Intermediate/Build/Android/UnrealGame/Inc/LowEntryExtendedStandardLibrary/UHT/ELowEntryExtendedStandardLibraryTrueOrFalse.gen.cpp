// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELowEntryExtendedStandardLibraryTrueOrFalse.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeELowEntryExtendedStandardLibraryTrueOrFalse() {}

// ********** Begin Cross Module References ********************************************************
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELowEntryExtendedStandardLibraryTrueOrFalse *******************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELowEntryExtendedStandardLibraryTrueOrFalse;
static UEnum* ELowEntryExtendedStandardLibraryTrueOrFalse_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELowEntryExtendedStandardLibraryTrueOrFalse.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELowEntryExtendedStandardLibraryTrueOrFalse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse, (UObject*)Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("ELowEntryExtendedStandardLibraryTrueOrFalse"));
	}
	return Z_Registration_Info_UEnum_ELowEntryExtendedStandardLibraryTrueOrFalse.OuterSingleton;
}
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<ELowEntryExtendedStandardLibraryTrueOrFalse>()
{
	return ELowEntryExtendedStandardLibraryTrueOrFalse_StaticEnum();
}
struct Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "_False_.Name", "ELowEntryExtendedStandardLibraryTrueOrFalse::_False_" },
		{ "_True_.Name", "ELowEntryExtendedStandardLibraryTrueOrFalse::_True_" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Classes/ELowEntryExtendedStandardLibraryTrueOrFalse.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELowEntryExtendedStandardLibraryTrueOrFalse::_True_", (int64)ELowEntryExtendedStandardLibraryTrueOrFalse::_True_ },
		{ "ELowEntryExtendedStandardLibraryTrueOrFalse::_False_", (int64)ELowEntryExtendedStandardLibraryTrueOrFalse::_False_ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
	nullptr,
	"ELowEntryExtendedStandardLibraryTrueOrFalse",
	"ELowEntryExtendedStandardLibraryTrueOrFalse",
	Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse()
{
	if (!Z_Registration_Info_UEnum_ELowEntryExtendedStandardLibraryTrueOrFalse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELowEntryExtendedStandardLibraryTrueOrFalse.InnerSingleton, Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELowEntryExtendedStandardLibraryTrueOrFalse.InnerSingleton;
}
// ********** End Enum ELowEntryExtendedStandardLibraryTrueOrFalse *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryExtendedStandardLibraryTrueOrFalse_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELowEntryExtendedStandardLibraryTrueOrFalse_StaticEnum, TEXT("ELowEntryExtendedStandardLibraryTrueOrFalse"), &Z_Registration_Info_UEnum_ELowEntryExtendedStandardLibraryTrueOrFalse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 713327901U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryExtendedStandardLibraryTrueOrFalse_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryExtendedStandardLibraryTrueOrFalse_h__Script_LowEntryExtendedStandardLibrary_4280437149{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryExtendedStandardLibraryTrueOrFalse_h__Script_LowEntryExtendedStandardLibrary_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntryExtendedStandardLibraryTrueOrFalse_h__Script_LowEntryExtendedStandardLibrary_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
