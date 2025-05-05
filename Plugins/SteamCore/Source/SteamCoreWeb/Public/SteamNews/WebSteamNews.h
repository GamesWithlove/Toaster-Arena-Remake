/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/ISteamNews
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "WebSteamNews.generated.h"

UCLASS()
class STEAMCOREWEB_API UWebSteamNews : public USteamCoreWebSubsystem
{
	GENERATED_BODY()
public:
	UWebSteamNews() { SubsystemType = ESubsystemWeb::News; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Get the news for the specified app.
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	AppId			AppID to retrieve news for
	* @param	MaxLength		Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.
	* @param	EndDate			Retrieve posts earlier than this date (unix epoch timestamp)
	* @param	Feeds			# of posts to retrieve (default 20)
	* @param	Count			List of feed names to return news for
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|SteamNews", meta = (AutoCreateRefTerm = "feeds"))
	void GetNewsForApp(const FOnSteamCoreWebCallback& Callback, int32 AppId, int32 MaxLength, TArray<FString> Feeds, int32 EndDate = 1549795233, int32 Count = 20);

	/**
	* Get the news for the specified app. Publisher only version that can return info for unreleased games.
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	AppID			AppID to retrieve news for
	* @param	MaxLength		Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.
	* @param	EndDate			Retrieve posts earlier than this date (unix epoch timestamp)
	* @param	Feeds			# of posts to retrieve (default 20)
	* @param	Count			List of feed names to return news for
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|SteamNews", meta = (AutoCreateRefTerm = "feeds"))
	void GetNewsForAppAuthed(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppID, int32 MaxLength, TArray<FString> Feeds, int32 EndDate = 1549795233, int32 Count = 20);
};
