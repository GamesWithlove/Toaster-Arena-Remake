// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUser/WebSteamUserTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebSteamUserTypes() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVanityUrlType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVanityUrlType;
static UEnum* EVanityUrlType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVanityUrlType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVanityUrlType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType, (UObject*)Z_Construct_UPackage__Script_SteamCoreWeb(), TEXT("EVanityUrlType"));
	}
	return Z_Registration_Info_UEnum_EVanityUrlType.OuterSingleton;
}
template<> STEAMCOREWEB_NON_ATTRIBUTED_API UEnum* StaticEnum<EVanityUrlType>()
{
	return EVanityUrlType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "Group.Name", "EVanityUrlType::Group" },
		{ "Individual.Name", "EVanityUrlType::Individual" },
		{ "ModuleRelativePath", "Public/SteamUser/WebSteamUserTypes.h" },
		{ "OfficialGameGroup.Name", "EVanityUrlType::OfficialGameGroup" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVanityUrlType::Individual", (int64)EVanityUrlType::Individual },
		{ "EVanityUrlType::Group", (int64)EVanityUrlType::Group },
		{ "EVanityUrlType::OfficialGameGroup", (int64)EVanityUrlType::OfficialGameGroup },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	nullptr,
	"EVanityUrlType",
	"EVanityUrlType",
	Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType()
{
	if (!Z_Registration_Info_UEnum_EVanityUrlType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVanityUrlType.InnerSingleton, Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVanityUrlType.InnerSingleton;
}
// ********** End Enum EVanityUrlType **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserTypes_h__Script_SteamCoreWeb_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVanityUrlType_StaticEnum, TEXT("EVanityUrlType"), &Z_Registration_Info_UEnum_EVanityUrlType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2407242381U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserTypes_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserTypes_h__Script_SteamCoreWeb_1695375032{
	TEXT("/Script/SteamCoreWeb"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserTypes_h__Script_SteamCoreWeb_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUserTypes_h__Script_SteamCoreWeb_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
