/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides access to Steam broadcasts.
* https://partner.steamgames.com/doc/webapi/IBroadcastService
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#include "BroadcastService/WebBroadcastService.h"
#include "BroadcastService/WebBroadcastServiceAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebBroadcastService::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebBroadcastService::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //


void UWebBroadcastService::PostGameDataFrame(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppID, FString SteamID, FString BroadcastId, FString FrameData)
{
	FOnlineAsyncTaskSteamCoreWebBroadcastPostGameDataFrame* Task = new FOnlineAsyncTaskSteamCoreWebBroadcastPostGameDataFrame(this, Callback, Key, AppID, SteamID, BroadcastId, FrameData);
	QueueAsyncTask(Task);
}
