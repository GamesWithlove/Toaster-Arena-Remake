/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/IInventoryService
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebAddItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebAddItem : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebAddItem(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, TArray<int32> ItemdefId, FString ItemPropsJson, FString SteamId, bool bNotify, FString RequestId, bool bTradeRestriction)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IInventoryService", "AddItem", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("itemdefid", ItemdefId);
		m_RequestString.Add("itempropsjson", ItemPropsJson);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("notify", bNotify);
		m_RequestString.Add("requestid", RequestId);
		m_RequestString.Add("trade_restriction", bTradeRestriction);
	}

private:
	FOnlineAsyncTaskSteamCoreWebAddItem() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebAddPromoItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebAddPromoItem : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebAddPromoItem(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, int32 ItemdefId, FString ItemPropsJson, FString SteamId, bool bNotify, FString RequestId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IInventoryService", "AddPromoItem", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("itemdefid", ItemdefId);
		m_RequestString.Add("itempropsjson", ItemPropsJson);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("notify", bNotify);
		m_RequestString.Add("requestid", RequestId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebAddPromoItem() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebConsumeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebConsumeItem : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebConsumeItem(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString ItemId, FString Quantity, FString SteamId, FString RequestId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IInventoryService", "ConsumeItem", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("itemid", ItemId);
		m_RequestString.Add("quantity", Quantity);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("requestid", RequestId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebConsumeItem() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebExchangeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebExchangeItem : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebExchangeItem(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, TArray<int32> MaterialsItemID, TArray<int32> MaterialsQuantity, FString OutputItemdefId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IInventoryService", "ExchangeItem", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("materialsitemid", MaterialsItemID);
		m_RequestString.Add("materialsquantity", MaterialsQuantity);
		m_RequestString.Add("outputitemdefid", OutputItemdefId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebExchangeItem() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetInventory
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetInventory : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetInventory(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IInventoryService", "GetInventory", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetInventory() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetItemDefs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetItemDefs : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetItemDefs(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString ModifiedSince, TArray<int32> ItemdefIds, TArray<int32> WorkshopIds, int32 CacheMaxAgeSeconds)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IInventoryService", "GetItemDefs", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("modifiedsince", ModifiedSince);
		m_RequestString.Add("itemdefids", ItemdefIds);
		m_RequestString.Add("workshopids", WorkshopIds);
		m_RequestString.Add("cache_max_age_seconds", CacheMaxAgeSeconds);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetItemDefs() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetPriceSheet
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetPriceSheet : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetPriceSheet(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 Currency)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IInventoryService", "GetPriceSheet", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("ecurrency", Currency);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetPriceSheet() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebConsolidate
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebConsolidate : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebConsolidate(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, TArray<int32> ItemdefIds, bool bForce)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IInventoryService", "Consolidate", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("itemdefid", ItemdefIds);
		m_RequestString.Add("force", bForce);
	}

private:
	FOnlineAsyncTaskSteamCoreWebConsolidate() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetQuantity
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetQuantity : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetQuantity(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, TArray<int32> ItemdefIds, bool bForce)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IInventoryService", "GetQuantity", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("itemdefid", ItemdefIds);
		m_RequestString.Add("force", bForce);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetQuantity() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebModifyItems
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebModifyItems : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebModifyItems(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString InputJson, FString SteamId, int32 Timestamp, FString Updates)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IInventoryService", "ModifyItems", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddStringField("input_json", InputJson);
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("timestamp", Timestamp);
		m_RequestString.AddStringField("updates", Updates);
	}

private:
	FOnlineAsyncTaskSteamCoreWebModifyItems() = delete;
};
