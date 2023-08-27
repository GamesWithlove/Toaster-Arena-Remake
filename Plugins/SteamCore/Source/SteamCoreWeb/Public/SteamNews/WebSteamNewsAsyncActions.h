/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/ISteamNews
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "WebSteamNewsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetNewsForApp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetNewsForApp : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get the news for the specified app.
	*
	* @param	Key				Steamworks Web API publisher authentication key.
	* @param	AppId			AppID to retrieve news for
	* @param	MaxLength		Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.
	* @param	EndDate			Retrieve posts earlier than this date (unix epoch timestamp)
	* @param	Feeds			# of posts to retrieve (default 20)
	* @param	Count			List of feed names to return news for
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get News for App", AutoCreateRefTerm = "feeds", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionGetNewsForApp* GetNewsForAppAsync(UObject* WorldContextObject, int32 AppId, int32 MaxLength, TArray<FString> Feeds, int32 EndDate = 1549795233, int32 Count = 20);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetNewsForAppAuthed
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetNewsForAppAuthed : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get the news for the specified app. Publisher only version that can return info for unreleased games.
	*
	* @param	Key				Steamworks Web API publisher authentication key.
	* @param	AppId			AppID to retrieve news for
	* @param	MaxLength		Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.
	* @param	EndDate			Retrieve posts earlier than this date (unix epoch timestamp)
	* @param	Feeds			# of posts to retrieve (default 20)
	* @param	Count			List of feed names to return news for
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get News for App Authed", AutoCreateRefTerm = "feeds", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionGetNewsForAppAuthed* GetNewsForAppAuthedAsync(UObject* WorldContextObject, FString Key, int32 AppId, int32 MaxLength, TArray<FString> Feeds, int32 EndDate = 1549795233, int32 Count = 20);
};
