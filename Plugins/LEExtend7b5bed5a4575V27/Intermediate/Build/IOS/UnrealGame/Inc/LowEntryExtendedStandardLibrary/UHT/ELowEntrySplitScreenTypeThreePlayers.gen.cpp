// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELowEntrySplitScreenTypeThreePlayers.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeELowEntrySplitScreenTypeThreePlayers() {}

// ********** Begin Cross Module References ********************************************************
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELowEntrySplitScreenTypeThreePlayers **************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELowEntrySplitScreenTypeThreePlayers;
static UEnum* ELowEntrySplitScreenTypeThreePlayers_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELowEntrySplitScreenTypeThreePlayers.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELowEntrySplitScreenTypeThreePlayers.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers, (UObject*)Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("ELowEntrySplitScreenTypeThreePlayers"));
	}
	return Z_Registration_Info_UEnum_ELowEntrySplitScreenTypeThreePlayers.OuterSingleton;
}
template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<ELowEntrySplitScreenTypeThreePlayers>()
{
	return ELowEntrySplitScreenTypeThreePlayers_StaticEnum();
}
struct Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FavorBottom.Name", "ELowEntrySplitScreenTypeThreePlayers::FavorBottom" },
		{ "FavorTop.Name", "ELowEntrySplitScreenTypeThreePlayers::FavorTop" },
		{ "ModuleRelativePath", "Public/Classes/ELowEntrySplitScreenTypeThreePlayers.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELowEntrySplitScreenTypeThreePlayers::FavorTop", (int64)ELowEntrySplitScreenTypeThreePlayers::FavorTop },
		{ "ELowEntrySplitScreenTypeThreePlayers::FavorBottom", (int64)ELowEntrySplitScreenTypeThreePlayers::FavorBottom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
	nullptr,
	"ELowEntrySplitScreenTypeThreePlayers",
	"ELowEntrySplitScreenTypeThreePlayers",
	Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers()
{
	if (!Z_Registration_Info_UEnum_ELowEntrySplitScreenTypeThreePlayers.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELowEntrySplitScreenTypeThreePlayers.InnerSingleton, Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELowEntrySplitScreenTypeThreePlayers.InnerSingleton;
}
// ********** End Enum ELowEntrySplitScreenTypeThreePlayers ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntrySplitScreenTypeThreePlayers_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELowEntrySplitScreenTypeThreePlayers_StaticEnum, TEXT("ELowEntrySplitScreenTypeThreePlayers"), &Z_Registration_Info_UEnum_ELowEntrySplitScreenTypeThreePlayers, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3032931994U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntrySplitScreenTypeThreePlayers_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntrySplitScreenTypeThreePlayers_h__Script_LowEntryExtendedStandardLibrary_780899151{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntrySplitScreenTypeThreePlayers_h__Script_LowEntryExtendedStandardLibrary_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_Classes_ELowEntrySplitScreenTypeThreePlayers_h__Script_LowEntryExtendedStandardLibrary_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
