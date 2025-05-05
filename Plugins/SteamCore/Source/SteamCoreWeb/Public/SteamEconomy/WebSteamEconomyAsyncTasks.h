/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/ISteamEconomy
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebCanTrade
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebCanTrade : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebCanTrade(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, FString TargetId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamEconomy", "CanTrade", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("targetid", TargetId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebCanTrade() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebFinalizeAssetTransaction
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebFinalizeAssetTransaction : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebFinalizeAssetTransaction(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, FString TxnId, FString Language)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamEconomy", "FinalizeAssetTransaction", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("txnid", TxnId);
		m_RequestString.Add("language", Language);
	}

private:
	FOnlineAsyncTaskSteamCoreWebFinalizeAssetTransaction() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetAssetClassInfo
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetAssetClassInfo : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetAssetClassInfo(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString Language, int32 ClassCount, FString ClassId, FString InstanceId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamEconomy", "GetAssetClassInfo", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("language", Language);
		m_RequestString.Add("class_count", ClassCount);
		m_RequestString.Add("classid0", ClassId);
		m_RequestString.Add("instanceid0", InstanceId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetAssetClassInfo() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetAssetPrices
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetAssetPrices : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetAssetPrices(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString Currency, FString Language)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamEconomy", "GetAssetPrices", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("currency", Currency);
		m_RequestString.Add("language", Language);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetAssetPrices() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetExportedAssetsForUser
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetExportedAssetsForUser : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetExportedAssetsForUser(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString ContextId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamEconomy", "GetExportedAssetsForUser", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("contextid", ContextId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetExportedAssetsForUser() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetMarketPrices
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetMarketPrices : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetMarketPrices(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamEconomy", "GetMarketPrices", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetMarketPrices() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebStartAssetTransaction
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebStartAssetTransaction : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebStartAssetTransaction(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, FString AssetId, int32 AssetQuantity, FString Currency, FString Language, FString Ipaddress, FString Referer, bool bClientAuth)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamEconomy", "StartAssetTransaction", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("assetid0", AssetId);
		m_RequestString.Add("assetquantity0", AssetQuantity);
		m_RequestString.Add("currency", Currency);
		m_RequestString.Add("language", Language);
		m_RequestString.Add("ipaddress", Ipaddress);
		m_RequestString.Add("referrer", Referer);
		m_RequestString.Add("clientauth", bClientAuth);
	}

private:
	FOnlineAsyncTaskSteamCoreWebStartAssetTransaction() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebStartTrade
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebStartTrade : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebStartTrade(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId1, FString SteamId2)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamEconomy", "StartTrade", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("partya", SteamId1);
		m_RequestString.Add("partya", SteamId2);
	}

private:
	FOnlineAsyncTaskSteamCoreWebStartTrade() = delete;
};
