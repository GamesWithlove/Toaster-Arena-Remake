/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides restricted access to the Steam Market for partners.
* https://partner.steamgames.com/doc/webapi/IEconMarketService
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#include "EconMarket/WebEconMarketService.h"
#include "EconMarket/WebEconMarketServiceAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebEconMarketService::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebEconMarketService::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebEconMarketService::GetMarketEligibility(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId)
{
	FOnlineAsyncTaskSteamCoreWebGetMarketEligibility* Task = new FOnlineAsyncTaskSteamCoreWebGetMarketEligibility(this, Callback, Key, SteamId);
	QueueAsyncTask(Task);
}

void UWebEconMarketService::CancelAppListingsForUser(const FOnSteamCoreWebCallback& Callback, FString Key, int32 appID, FString SteamId, bool bSynchronous)
{
	FOnlineAsyncTaskSteamCoreWebCancelAppListingsForUser* Task = new FOnlineAsyncTaskSteamCoreWebCancelAppListingsForUser(this, Callback, Key, appID, SteamId, bSynchronous);
	QueueAsyncTask(Task);
}

void UWebEconMarketService::GetAssetID(const FOnSteamCoreWebCallback& Callback, FString Key, int32 appID, FString ListingId)
{
	FOnlineAsyncTaskSteamCoreWebGetAssetID* Task = new FOnlineAsyncTaskSteamCoreWebGetAssetID(this, Callback, Key, appID, ListingId);
	QueueAsyncTask(Task);
}

void UWebEconMarketService::GetPopular(const FOnSteamCoreWebCallback& Callback, FString Key, FString Language, int32 Rows, int32 Start, int32 FilterAppId, int32 ECurrency)
{
	FOnlineAsyncTaskSteamCoreWebGetPopular* Task = new FOnlineAsyncTaskSteamCoreWebGetPopular(this, Callback, Key, Language, Rows, Start, FilterAppId, ECurrency);
	QueueAsyncTask(Task);
}
