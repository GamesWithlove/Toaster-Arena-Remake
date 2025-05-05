/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/IInventoryService
*/

#include "InventoryService/WebInventoryService.h"
#include "InventoryService/WebInventoryServiceAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebInventoryService::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebInventoryService::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebInventoryService::AddItem(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, TArray<int32> ItemdefId, FString ItemPropsJson, FString SteamId, bool bNotify, FString RequestId, bool bTradeRestriction)
{
	FOnlineAsyncTaskSteamCoreWebAddItem* Task = new FOnlineAsyncTaskSteamCoreWebAddItem(this, Callback, Key, AppId, ItemdefId, ItemPropsJson, SteamId, bNotify, RequestId, bTradeRestriction);
	QueueAsyncTask(Task);
}

void UWebInventoryService::AddPromoItem(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, int32 ItemdefId, FString ItemPropsJson, FString SteamId, bool bNotify, FString requestID)
{
	FOnlineAsyncTaskSteamCoreWebAddPromoItem* Task = new FOnlineAsyncTaskSteamCoreWebAddPromoItem(this, Callback, Key, AppId, ItemdefId, ItemPropsJson, SteamId, bNotify, requestID);
	QueueAsyncTask(Task);
}

void UWebInventoryService::ConsumeItem(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString ItemId, FString Quantity, FString SteamId, FString requestID)
{
	FOnlineAsyncTaskSteamCoreWebConsumeItem* Task = new FOnlineAsyncTaskSteamCoreWebConsumeItem(this, Callback, Key, AppId, ItemId, Quantity, SteamId, requestID);
	QueueAsyncTask(Task);
}

void UWebInventoryService::ExchangeItem(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, TArray<int32> materialsItemID, TArray<int32> MaterialsQuantity, FString OutputItemdefId)
{
	FOnlineAsyncTaskSteamCoreWebExchangeItem* Task = new FOnlineAsyncTaskSteamCoreWebExchangeItem(this, Callback, Key, AppId, SteamId, materialsItemID, MaterialsQuantity, OutputItemdefId);
	QueueAsyncTask(Task);
}

void UWebInventoryService::GetInventory(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId)
{
	FOnlineAsyncTaskSteamCoreWebGetInventory* Task = new FOnlineAsyncTaskSteamCoreWebGetInventory(this, Callback, Key, AppId, SteamId);
	QueueAsyncTask(Task);
}

void UWebInventoryService::GetItemDefs(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString ModifiedSince, TArray<int32> ItemdefIDs, TArray<int32> WorkshopIDs, int32 CacheMaxAgeSeconds)
{
	FOnlineAsyncTaskSteamCoreWebGetItemDefs* Task = new FOnlineAsyncTaskSteamCoreWebGetItemDefs(this, Callback, Key, AppId, ModifiedSince, ItemdefIDs, WorkshopIDs, CacheMaxAgeSeconds);
	QueueAsyncTask(Task);
}

void UWebInventoryService::GetPriceSheet(const FOnSteamCoreWebCallback& Callback, FString Key, int32 Currency)
{
	FOnlineAsyncTaskSteamCoreWebGetPriceSheet* Task = new FOnlineAsyncTaskSteamCoreWebGetPriceSheet(this, Callback, Key, Currency);
	QueueAsyncTask(Task);
}

void UWebInventoryService::Consolidate(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, TArray<int32> ItemdefIDs, bool bForce)
{
	FOnlineAsyncTaskSteamCoreWebConsolidate* Task = new FOnlineAsyncTaskSteamCoreWebConsolidate(this, Callback, Key, AppId, SteamId, ItemdefIDs, bForce);
	QueueAsyncTask(Task);
}

void UWebInventoryService::GetQuantity(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, TArray<int32> ItemdefIDs, bool bForce)
{
	FOnlineAsyncTaskSteamCoreWebGetQuantity* Task = new FOnlineAsyncTaskSteamCoreWebGetQuantity(this, Callback, Key, AppId, SteamId, ItemdefIDs, bForce);
	QueueAsyncTask(Task);
}

void UWebInventoryService::ModifyItems(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString InputJson, FString SteamId, int32 Timestamp, FString Updates)
{
	FOnlineAsyncTaskSteamCoreWebModifyItems* Task = new FOnlineAsyncTaskSteamCoreWebModifyItems(this, Callback, Key, AppId, InputJson, SteamId, Timestamp, Updates);
	QueueAsyncTask(Task);
}
