/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/IGameServersService
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#include "GameServersService/WebGameServersService.h"
#include "GameServersService/WebGameServersServiceAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebGameServersService::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebGameServersService::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

/*
void UWebGameServersService:z:PostGameDataFrame(const FOnSteamCoreWebCallback& Callback, FString Key, int32 appID, FString steamID, FString broadcastID, FString frameData)
{
	FOnlineAsyncTaskSteamCoreWebBroadcastPostGameDataFrame* Task = new FOnlineAsyncTaskSteamCoreWebBroadcastPostGameDataFrame(this, callback, key, appID, steamID, broadcastID, frameData);
	QueueAsyncTask(Task);
}*/

void UWebGameServersService::GetAccountList(const FOnSteamCoreWebCallback& Callback, FString Key)
{
}

void UWebGameServersService::CreateAccount(const FOnSteamCoreWebCallback& Callback, FString Key, int32 appID, FString memo)
{
}

void UWebGameServersService::SetMemo(const FOnSteamCoreWebCallback& Callback, FString Key, FString steamID, FString memo)
{
}

void UWebGameServersService::ResetLoginToken(const FOnSteamCoreWebCallback& Callback, FString Key, FString steamID)
{
}

void UWebGameServersService::DeleteAccount(const FOnSteamCoreWebCallback& Callback, FString Key, FString steamID)
{
}

void UWebGameServersService::GetAccountPublicInfo(const FOnSteamCoreWebCallback& Callback, FString Key, FString steamID)
{
}

void UWebGameServersService::QueryLoginToken(const FOnSteamCoreWebCallback& Callback, FString Key, FString LoginToken)
{
}

void UWebGameServersService::SetBanStatus(const FOnSteamCoreWebCallback& Callback, FString Key, FString steamID, bool bBanned, int32 banSeconds)
{
}

void UWebGameServersService::GetServerSteamIDsByIP(const FOnSteamCoreWebCallback& Callback, FString Key, FString ServerIp)
{
}

void UWebGameServersService::GetServerIPsBySteamID(const FOnSteamCoreWebCallback& Callback, FString Key, FString ServerSteamId)
{
}
