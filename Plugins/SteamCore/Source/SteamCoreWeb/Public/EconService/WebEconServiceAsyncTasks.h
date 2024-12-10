/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Additional Steam Economy methods that provide access to Steam Trading.
* https://partner.steamgames.com/doc/webapi/IEconService
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetTradeHistory
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetTradeHistory : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetTradeHistory(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 MaxTrades, int32 StartAfterTime, FString StartAfterTradeID, bool bNavigatingBack, bool bGetDescriptions, FString Language, bool bIncludeFailed, bool bIncludeTotal)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IEconService", "GetTradeHistory", Key, 1, EVerb::GET)
	{
		m_RequestString.AddNumberField("max_trades", MaxTrades);
		m_RequestString.AddNumberField("start_after_time", StartAfterTime);
		m_RequestString.AddNumberField("start_after_tradeid", FCString::Atoi64(*StartAfterTradeID));
		m_RequestString.AddBoolField("navigating_back", bNavigatingBack);
		m_RequestString.AddBoolField("get_descriptions", bGetDescriptions);
		m_RequestString.AddStringField("language", Language);
		m_RequestString.AddBoolField("include_failed", bIncludeFailed);
		m_RequestString.AddBoolField("include_total", bIncludeTotal);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetTradeHistory() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebGetTradeHistory")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebFlushInventoryCache
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebFlushInventoryCache : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebFlushInventoryCache(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString ContextId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IEconService", "FlushInventoryCache", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamId));
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddNumberField("contextid", FCString::Atoi64(*ContextId));
	}

private:
	FOnlineAsyncTaskSteamCoreWebFlushInventoryCache() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebFlushInventoryCache")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebFlushAssetAppearanceCache
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebFlushAssetAppearanceCache : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebFlushAssetAppearanceCache(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IEconService", "FlushAssetAppearanceCache", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("appid", AppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebFlushAssetAppearanceCache() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebFlushAssetAppearanceCache")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebFlushContextCache
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebFlushContextCache : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebFlushContextCache(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IEconService", "FlushContextCache", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("appid", AppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebFlushContextCache() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebFlushContextCache")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetTradeOffers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetTradeOffers : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetTradeOffers(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IEconService", "GetTradeOffers", Key, 1, EVerb::GET)
	{
		m_RequestString.AddBoolField("get_sent_offers", bGetSentOffers);
		m_RequestString.AddBoolField("get_received_offers", bGetReceivedOffers);
		m_RequestString.AddBoolField("get_descriptions", bGetDescriptions);
		m_RequestString.AddStringField("language", Language);
		m_RequestString.AddBoolField("active_only", bActiveOnly);
		m_RequestString.AddBoolField("historical_only", bHistoricalOnly);
		m_RequestString.AddNumberField("time_historical_cutoff", TimeHistoricalCutoff);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetTradeOffers() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebGetTradeOffers")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetTradeOffer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetTradeOffer : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetTradeOffer(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString TradeOfferId, FString Language)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IEconService", "GetTradeOffer", Key, 1, EVerb::GET)
	{
		m_RequestString.AddNumberField("tradeofferid", FCString::Atoi64(*TradeOfferId));
		m_RequestString.AddStringField("language", Language);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetTradeOffer() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebGetTradeOffer")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetTradeOffersSummary
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetTradeOffersSummary : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetTradeOffersSummary(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 TimeLastVisit)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IEconService", "GetTradeOffersSummary", Key, 1, EVerb::GET)
	{
		m_RequestString.AddNumberField("time_last_visit", TimeLastVisit);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetTradeOffersSummary() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebGetTradeOffersSummary")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebDeclineTradeOffer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebDeclineTradeOffer : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebDeclineTradeOffer(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString TradeOfferId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IEconService", "DeclineTradeOffer", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("tradeofferid", FCString::Atoi64(*TradeOfferId));
	}

private:
	FOnlineAsyncTaskSteamCoreWebDeclineTradeOffer() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebDeclineTradeOffer")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebCancelTradeOffer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebCancelTradeOffer : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebCancelTradeOffer(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString TradeOfferId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IEconService", "CancelTradeOffer", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("tradeofferid", FCString::Atoi64(*TradeOfferId));
	}

private:
	FOnlineAsyncTaskSteamCoreWebCancelTradeOffer() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebCancelTradeOffer")); }
};
