// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamCoreWeb/SteamWebTypes.h"

#ifdef STEAMCOREWEB_SteamWebTypes_generated_h
#error "SteamWebTypes.generated.h already included, missing '#pragma once' in SteamWebTypes.h"
#endif
#define STEAMCOREWEB_SteamWebTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWebAppsGetAppList;

// ********** Begin Delegate FOnSteamCoreWebCallback ***********************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h_19_DELEGATE \
STEAMCOREWEB_API void FOnSteamCoreWebCallback_DelegateWrapper(const FScriptDelegate& OnSteamCoreWebCallback, const FString& data, bool bWasSuccessful);


// ********** End Delegate FOnSteamCoreWebCallback *************************************************

// ********** Begin Delegate FOnSteamCoreWebAsyncCallback ******************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h_20_DELEGATE \
STEAMCOREWEB_API void FOnSteamCoreWebAsyncCallback_DelegateWrapper(const FMulticastScriptDelegate& OnSteamCoreWebAsyncCallback, const FString& data, bool bWasSuccessful);


// ********** End Delegate FOnSteamCoreWebAsyncCallback ********************************************

// ********** Begin ScriptStruct FSteamCoreJson ****************************************************
struct Z_Construct_UScriptStruct_FSteamCoreJson_Statics;
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSteamCoreJson_Statics; \
	STEAMCOREWEB_API static class UScriptStruct* StaticStruct();


struct FSteamCoreJson;
// ********** End ScriptStruct FSteamCoreJson ******************************************************

// ********** Begin ScriptStruct FWebAppsGetAppList ************************************************
struct Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics;
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h_387_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics; \
	STEAMCOREWEB_API static class UScriptStruct* StaticStruct();


struct FWebAppsGetAppList;
// ********** End ScriptStruct FWebAppsGetAppList **************************************************

// ********** Begin Delegate FOnSteamCoreWebAppListCallback ****************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h_395_DELEGATE \
STEAMCOREWEB_API void FOnSteamCoreWebAppListCallback_DelegateWrapper(const FScriptDelegate& OnSteamCoreWebAppListCallback, TArray<FWebAppsGetAppList> const& Data, bool bWasSuccessful);


// ********** End Delegate FOnSteamCoreWebAppListCallback ******************************************

// ********** Begin Delegate FOnSteamCoreWebAppListAsyncCallback ***********************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h_396_DELEGATE \
STEAMCOREWEB_API void FOnSteamCoreWebAppListAsyncCallback_DelegateWrapper(const FMulticastScriptDelegate& OnSteamCoreWebAppListAsyncCallback, TArray<FWebAppsGetAppList> const& data, bool bWasSuccessful);


// ********** End Delegate FOnSteamCoreWebAppListAsyncCallback *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h

// ********** Begin Enum ESubsystemWeb *************************************************************
#define FOREACH_ENUM_ESUBSYSTEMWEB(op) \
	op(ESubsystemWeb::SteamCoreWeb) \
	op(ESubsystemWeb::Apps) \
	op(ESubsystemWeb::Broadcast) \
	op(ESubsystemWeb::CheatReporting) \
	op(ESubsystemWeb::Community) \
	op(ESubsystemWeb::Econ) \
	op(ESubsystemWeb::EconMarket) \
	op(ESubsystemWeb::Economy) \
	op(ESubsystemWeb::GameInventory) \
	op(ESubsystemWeb::GameNotifications) \
	op(ESubsystemWeb::GameServers) \
	op(ESubsystemWeb::GameServerStats) \
	op(ESubsystemWeb::Inventory) \
	op(ESubsystemWeb::LobbyMatchmaking) \
	op(ESubsystemWeb::Leaderboards) \
	op(ESubsystemWeb::MicroTxn) \
	op(ESubsystemWeb::News) \
	op(ESubsystemWeb::PlayerService) \
	op(ESubsystemWeb::PublishedFile) \
	op(ESubsystemWeb::PublishedItemSearch) \
	op(ESubsystemWeb::PublishedItemVoting) \
	op(ESubsystemWeb::RemoteStorage) \
	op(ESubsystemWeb::User) \
	op(ESubsystemWeb::UserAuth) \
	op(ESubsystemWeb::UserStats) \
	op(ESubsystemWeb::Workshop) 

enum class ESubsystemWeb : uint8;
template<> struct TIsUEnumClass<ESubsystemWeb> { enum { Value = true }; };
template<> STEAMCOREWEB_NON_ATTRIBUTED_API UEnum* StaticEnum<ESubsystemWeb>();
// ********** End Enum ESubsystemWeb ***************************************************************

// ********** Begin Enum ESteamValueType ***********************************************************
#define FOREACH_ENUM_ESTEAMVALUETYPE(op) \
	op(ESteamValueType::STRING) \
	op(ESteamValueType::NUMBER) \
	op(ESteamValueType::BOOL) 

enum class ESteamValueType : uint8;
template<> struct TIsUEnumClass<ESteamValueType> { enum { Value = true }; };
template<> STEAMCOREWEB_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamValueType>();
// ********** End Enum ESteamValueType *************************************************************

// ********** Begin Enum ESteamJsonResult **********************************************************
#define FOREACH_ENUM_ESTEAMJSONRESULT(op) \
	op(ESteamJsonResult::Found) \
	op(ESteamJsonResult::NotFound) 

enum class ESteamJsonResult : uint8;
template<> struct TIsUEnumClass<ESteamJsonResult> { enum { Value = true }; };
template<> STEAMCOREWEB_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamJsonResult>();
// ********** End Enum ESteamJsonResult ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
