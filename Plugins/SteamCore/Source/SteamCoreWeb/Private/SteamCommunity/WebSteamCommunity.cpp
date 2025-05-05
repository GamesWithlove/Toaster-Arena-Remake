/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides restricted access to Steam Community features.
* https://partner.steamgames.com/doc/webapi/ISteamCommunity
*/

#include "SteamCommunity/WebSteamCommunity.h"
#include "SteamCommunity/WebSteamCommunityAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebSteamCommunity::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebSteamCommunity::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebSteamCommunity::ReportAbuse(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamIdActor, FString SteamIdTarget, int32 AppId, int32 AbuseType, int32 ContentType, FString Description, FString Gid)
{
	FOnlineAsyncTaskSteamCoreWebReportAbuse* Task = new FOnlineAsyncTaskSteamCoreWebReportAbuse(this, Callback, Key, SteamIdActor, SteamIdTarget, AppId, AbuseType, ContentType, Description, Gid);
	QueueAsyncTask(Task);
}
