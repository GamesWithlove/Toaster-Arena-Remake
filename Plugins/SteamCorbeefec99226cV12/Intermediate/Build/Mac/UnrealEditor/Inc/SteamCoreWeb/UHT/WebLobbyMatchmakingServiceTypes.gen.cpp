// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LobbyMatchmakingService/WebLobbyMatchmakingServiceTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebLobbyMatchmakingServiceTypes() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESteamCoreWebLobbyType ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreWebLobbyType;
static UEnum* ESteamCoreWebLobbyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreWebLobbyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreWebLobbyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType, (UObject*)Z_Construct_UPackage__Script_SteamCoreWeb(), TEXT("ESteamCoreWebLobbyType"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreWebLobbyType.OuterSingleton;
}
template<> STEAMCOREWEB_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreWebLobbyType>()
{
	return ESteamCoreWebLobbyType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n// lobby type description\n" },
		{ "FriendsOnly.Name", "ESteamCoreWebLobbyType::FriendsOnly" },
		{ "ModuleRelativePath", "Public/LobbyMatchmakingService/WebLobbyMatchmakingServiceTypes.h" },
		{ "Private.Name", "ESteamCoreWebLobbyType::Private" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nlobby type description" },
		{ "TypeInvisible.Name", "ESteamCoreWebLobbyType::TypeInvisible" },
		{ "TypePublic.Name", "ESteamCoreWebLobbyType::TypePublic" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreWebLobbyType::Private", (int64)ESteamCoreWebLobbyType::Private },
		{ "ESteamCoreWebLobbyType::FriendsOnly", (int64)ESteamCoreWebLobbyType::FriendsOnly },
		{ "ESteamCoreWebLobbyType::TypePublic", (int64)ESteamCoreWebLobbyType::TypePublic },
		{ "ESteamCoreWebLobbyType::TypeInvisible", (int64)ESteamCoreWebLobbyType::TypeInvisible },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	nullptr,
	"ESteamCoreWebLobbyType",
	"ESteamCoreWebLobbyType",
	Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreWebLobbyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreWebLobbyType.InnerSingleton, Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreWebLobbyType.InnerSingleton;
}
// ********** End Enum ESteamCoreWebLobbyType ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingServiceTypes_h__Script_SteamCoreWeb_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamCoreWebLobbyType_StaticEnum, TEXT("ESteamCoreWebLobbyType"), &Z_Registration_Info_UEnum_ESteamCoreWebLobbyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 580576451U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingServiceTypes_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingServiceTypes_h__Script_SteamCoreWeb_3559571699{
	TEXT("/Script/SteamCoreWeb"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingServiceTypes_h__Script_SteamCoreWeb_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingServiceTypes_h__Script_SteamCoreWeb_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
