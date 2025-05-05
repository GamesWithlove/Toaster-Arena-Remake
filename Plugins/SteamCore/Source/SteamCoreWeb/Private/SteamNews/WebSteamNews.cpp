/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/ISteamNews
*/

#include "SteamNews/WebSteamNews.h"
#include "SteamNews/WebSteamNewsAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebSteamNews::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebSteamNews::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebSteamNews::GetNewsForApp(const FOnSteamCoreWebCallback& Callback, int32 AppId, int32 MaxLength, TArray<FString> Feeds, int32 EndDate, int32 Count)
{
	FOnlineAsyncTaskSteamCoreWebGetNewsForApp* Task = new FOnlineAsyncTaskSteamCoreWebGetNewsForApp(this, Callback, AppId, MaxLength, EndDate, Feeds, Count);
	QueueAsyncTask(Task);
}

void UWebSteamNews::GetNewsForAppAuthed(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppID, int32 MaxLength, TArray<FString> Feeds, int32 EndDate, int32 Count)
{
	FOnlineAsyncTaskSteamCoreWebGetNewsForAppAuthed* Task = new FOnlineAsyncTaskSteamCoreWebGetNewsForAppAuthed(this, Callback, Key, AppID, MaxLength, EndDate, Feeds, Count);
	QueueAsyncTask(Task);
}
