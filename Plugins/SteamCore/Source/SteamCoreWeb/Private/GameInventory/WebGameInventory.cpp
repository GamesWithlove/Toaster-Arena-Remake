/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* The primary interface to interact with the Steam Economy.
* https://partner.steamgames.com/doc/webapi/IEconService
*
* See also: https://partner.steamgames.com/doc/webapi/ISteamEconomy
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#include "GameInventory/WebGameInventory.h"
#include "GameInventory/WebGameInventoryAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebGameInventory::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebGameInventory::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebGameInventory::GetHistoryCommandDetails(const FOnSteamCoreWebCallback& Callback, FString Key, int32 Appid, FString SteamId, FString Command, FString ContextId, FString Arguments)
{
	FOnlineAsyncTaskSteamCoreWebGetHistoryCommandDetails* Task = new FOnlineAsyncTaskSteamCoreWebGetHistoryCommandDetails(this, Callback, Key, Appid, SteamId, Command, ContextId, Arguments);
	QueueAsyncTask(Task);
}

void UWebGameInventory::GetUserHistory(const FOnSteamCoreWebCallback& Callback, FString Key, int32 Appid, FString SteamId, FString ContextId, int32 StartTime, int32 EndTime)
{
	FOnlineAsyncTaskSteamCoreWebGetUserHistory* Task = new FOnlineAsyncTaskSteamCoreWebGetUserHistory(this, Callback, Key, Appid, SteamId, ContextId, StartTime, EndTime);
	QueueAsyncTask(Task);
}

void UWebGameInventory::HistoryExecuteCommands(const FOnSteamCoreWebCallback& Callback, FString Key, int32 Appid, FString SteamId, FString ContextId, int32 ActorId)
{
	FOnlineAsyncTaskSteamCoreWebHistoryExecuteCommands* Task = new FOnlineAsyncTaskSteamCoreWebHistoryExecuteCommands(this, Callback, Key, Appid, SteamId, ContextId, ActorId);
	QueueAsyncTask(Task);
}

void UWebGameInventory::SupportGetAssetHistory(const FOnSteamCoreWebCallback& Callback, FString Key, int32 Appid, FString AssetId, FString ContextId)
{
	FOnlineAsyncTaskSteamCoreWebSupportGetAssetHistory* Task = new FOnlineAsyncTaskSteamCoreWebSupportGetAssetHistory(this, Callback, Key, Appid, AssetId, ContextId);
	QueueAsyncTask(Task);
}

void UWebGameInventory::UpdateItemDefs()
{
}
