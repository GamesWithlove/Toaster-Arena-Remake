/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/ISteamEconomy
*/

#include "SteamEconomy/WebSteamEconomy.h"
#include "SteamEconomy/WebSteamEconomyAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebSteamEconomy::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebSteamEconomy::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebSteamEconomy::CanTrade(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, FString TargetId)
{
	FOnlineAsyncTaskSteamCoreWebCanTrade* Task = new FOnlineAsyncTaskSteamCoreWebCanTrade(this, Callback, Key, AppId, SteamId, TargetId);
	QueueAsyncTask(Task);
}

void UWebSteamEconomy::FinalizeAssetTransaction(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, FString TxnId, FString Language)
{
	FOnlineAsyncTaskSteamCoreWebFinalizeAssetTransaction* Task = new FOnlineAsyncTaskSteamCoreWebFinalizeAssetTransaction(this, Callback, Key, AppId, SteamId, TxnId, Language);
	QueueAsyncTask(Task);
}

void UWebSteamEconomy::GetAssetClassInfo(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString Language, int32 ClassCount, FString ClassId, FString InstanceId)
{
	FOnlineAsyncTaskSteamCoreWebGetAssetClassInfo* Task = new FOnlineAsyncTaskSteamCoreWebGetAssetClassInfo(this, Callback, Key, AppId, Language, ClassCount, ClassId, InstanceId);
	QueueAsyncTask(Task);
}

void UWebSteamEconomy::GetAssetPrices(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString Currency, FString Language)
{
	FOnlineAsyncTaskSteamCoreWebGetAssetPrices* Task = new FOnlineAsyncTaskSteamCoreWebGetAssetPrices(this, Callback, Key, AppId, Currency, Language);
	QueueAsyncTask(Task);
}

void UWebSteamEconomy::GetExportedAssetsForUser(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString ContextId)
{
	FOnlineAsyncTaskSteamCoreWebGetExportedAssetsForUser* Task = new FOnlineAsyncTaskSteamCoreWebGetExportedAssetsForUser(this, Callback, Key, SteamId, AppId, ContextId);
	QueueAsyncTask(Task);
}

void UWebSteamEconomy::GetMarketPrices(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId)
{
	FOnlineAsyncTaskSteamCoreWebGetMarketPrices* Task = new FOnlineAsyncTaskSteamCoreWebGetMarketPrices(this, Callback, Key, AppId);
	QueueAsyncTask(Task);
}

void UWebSteamEconomy::StartAssetTransaction(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, FString AssetId, int32 AssetQuantity, FString Currency, FString Language, FString Ipaddress, FString Referer, bool bClientAuth)
{
	FOnlineAsyncTaskSteamCoreWebStartAssetTransaction* Task = new FOnlineAsyncTaskSteamCoreWebStartAssetTransaction(this, Callback, Key, AppId, SteamId, AssetId, AssetQuantity, Currency, Language, Ipaddress, Referer, bClientAuth);
	QueueAsyncTask(Task);
}

void UWebSteamEconomy::StartTrade(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId1, FString SteamId2)
{
	FOnlineAsyncTaskSteamCoreWebStartTrade* Task = new FOnlineAsyncTaskSteamCoreWebStartTrade(this, Callback, Key, AppId, SteamId1, SteamId2);
	QueueAsyncTask(Task);
}
