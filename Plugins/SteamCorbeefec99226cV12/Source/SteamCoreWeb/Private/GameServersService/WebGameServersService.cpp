/**
* Copyright (C) 2017-2025 eelDev AB
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

void UWebGameServersService::GetAccountList(const FOnSteamCoreWebCallback& Callback, FString Key)
{
	FOnlineAsyncTaskSteamCoreWebGetAccountList* Task = new FOnlineAsyncTaskSteamCoreWebGetAccountList(this, Callback, Key);
	QueueAsyncTask(Task);
}

void UWebGameServersService::CreateAccount(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString Memo)
{
	FOnlineAsyncTaskSteamCoreWebCreateAccount* Task = new FOnlineAsyncTaskSteamCoreWebCreateAccount(this, Callback, Key, AppId, Memo);
	QueueAsyncTask(Task);
}

void UWebGameServersService::SetMemo(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, FString Memo)
{
	FOnlineAsyncTaskSteamCoreWebSetMemo* Task = new FOnlineAsyncTaskSteamCoreWebSetMemo(this, Callback, Key, SteamId, Memo);
	QueueAsyncTask(Task);
}

void UWebGameServersService::ResetLoginToken(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId)
{
	FOnlineAsyncTaskSteamCoreWebResetLoginToken* Task = new FOnlineAsyncTaskSteamCoreWebResetLoginToken(this, Callback, Key, SteamId);
	QueueAsyncTask(Task);
}

void UWebGameServersService::DeleteAccount(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId)
{
	FOnlineAsyncTaskSteamCoreWebDeleteAccount* Task = new FOnlineAsyncTaskSteamCoreWebDeleteAccount(this, Callback, Key, SteamId);
	QueueAsyncTask(Task);
}

void UWebGameServersService::GetAccountPublicInfo(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId)
{
	FOnlineAsyncTaskSteamCoreWebGetAccountPublicInfo* Task = new FOnlineAsyncTaskSteamCoreWebGetAccountPublicInfo(this, Callback, Key, SteamId);
	QueueAsyncTask(Task);
}

void UWebGameServersService::QueryLoginToken(const FOnSteamCoreWebCallback& Callback, FString Key, FString LoginToken)
{
	FOnlineAsyncTaskSteamCoreWebQueryLoginToken* Task = new FOnlineAsyncTaskSteamCoreWebQueryLoginToken(this, Callback, Key, LoginToken);
	QueueAsyncTask(Task);
}

void UWebGameServersService::SetBanStatus(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, bool bBanned, int32 BanSeconds)
{
	FOnlineAsyncTaskSteamCoreWebSetBanStatus* Task = new FOnlineAsyncTaskSteamCoreWebSetBanStatus(this, Callback, Key, SteamId, bBanned, BanSeconds);
	QueueAsyncTask(Task);
}

void UWebGameServersService::GetServerSteamIdsByIP(const FOnSteamCoreWebCallback& Callback, FString Key, FString ServerIp)
{
	FOnlineAsyncTaskSteamCoreWebGetServerSteamIdsByIP* Task = new FOnlineAsyncTaskSteamCoreWebGetServerSteamIdsByIP(this, Callback, Key, ServerIp);
	QueueAsyncTask(Task);
}

void UWebGameServersService::GetServerIPsBySteamId(const FOnSteamCoreWebCallback& Callback, FString Key, FString ServerSteamId)
{
	FOnlineAsyncTaskSteamCoreWebGetServerIPsBySteamId* Task = new FOnlineAsyncTaskSteamCoreWebGetServerIPsBySteamId(this, Callback, Key, ServerSteamId);
	QueueAsyncTask(Task);
}
