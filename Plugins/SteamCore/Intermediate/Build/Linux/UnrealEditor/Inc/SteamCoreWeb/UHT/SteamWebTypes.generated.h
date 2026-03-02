// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamCoreWeb/SteamWebTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWebAppsGetAppList;
#ifdef STEAMCOREWEB_SteamWebTypes_generated_h
#error "SteamWebTypes.generated.h already included, missing '#pragma once' in SteamWebTypes.h"
#endif
#define STEAMCOREWEB_SteamWebTypes_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h_19_DELEGATE \
STEAMCOREWEB_API void FOnSteamCoreWebCallback_DelegateWrapper(const FScriptDelegate& OnSteamCoreWebCallback, const FString& data, bool bWasSuccessful);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h_20_DELEGATE \
STEAMCOREWEB_API void FOnSteamCoreWebAsyncCallback_DelegateWrapper(const FMulticastScriptDelegate& OnSteamCoreWebAsyncCallback, const FString& data, bool bWasSuccessful);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamCoreJson_Statics; \
	STEAMCOREWEB_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREWEB_API UScriptStruct* StaticStruct<struct FSteamCoreJson>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h_353_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics; \
	STEAMCOREWEB_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREWEB_API UScriptStruct* StaticStruct<struct FWebAppsGetAppList>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h_361_DELEGATE \
STEAMCOREWEB_API void FOnSteamCoreWebAppListCallback_DelegateWrapper(const FScriptDelegate& OnSteamCoreWebAppListCallback, TArray<FWebAppsGetAppList> const& Data, bool bWasSuccessful);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h_362_DELEGATE \
STEAMCOREWEB_API void FOnSteamCoreWebAppListAsyncCallback_DelegateWrapper(const FMulticastScriptDelegate& OnSteamCoreWebAppListAsyncCallback, TArray<FWebAppsGetAppList> const& data, bool bWasSuccessful);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h


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
template<> STEAMCOREWEB_API UEnum* StaticEnum<ESubsystemWeb>();

#define FOREACH_ENUM_ESTEAMVALUETYPE(op) \
	op(ESteamValueType::STRING) \
	op(ESteamValueType::NUMBER) \
	op(ESteamValueType::BOOL) 

enum class ESteamValueType : uint8;
template<> struct TIsUEnumClass<ESteamValueType> { enum { Value = true }; };
template<> STEAMCOREWEB_API UEnum* StaticEnum<ESteamValueType>();

#define FOREACH_ENUM_ESTEAMJSONRESULT(op) \
	op(ESteamJsonResult::Found) \
	op(ESteamJsonResult::NotFound) 

enum class ESteamJsonResult : uint8;
template<> struct TIsUEnumClass<ESteamJsonResult> { enum { Value = true }; };
template<> STEAMCOREWEB_API UEnum* StaticEnum<ESteamJsonResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
