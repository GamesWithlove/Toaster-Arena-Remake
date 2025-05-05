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

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetHistoryCommandDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetHistoryCommandDetails : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetHistoryCommandDetails(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, FString Command, FString ContextId, FString Arguments)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IGameInventory", "GetHistoryCommandDetails", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("command", Command);
		m_RequestString.Add("contextid", ContextId);
		m_RequestString.Add("arguments", Arguments);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetHistoryCommandDetails() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebGetHistoryCommandDetails")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetUserHistory
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetUserHistory : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetUserHistory(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, FString ContextId, int32 StartTime, int32 EndTime)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IGameInventory", "GetUserHistory", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("contextid", ContextId);
		m_RequestString.Add("starttime", StartTime);
		m_RequestString.Add("endtime", EndTime);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetUserHistory() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebGetUserHistory")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebHistoryExecuteCommands
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebHistoryExecuteCommands : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebHistoryExecuteCommands(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, FString ContextId, int32 ActorId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IGameInventory", "HistoryExecuteCommands", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("contextid", ContextId);
		m_RequestString.Add("actorid", ActorId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebHistoryExecuteCommands() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebHistoryExecuteCommands")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebSupportGetAssetHistory
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebSupportGetAssetHistory : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebSupportGetAssetHistory(USteamCoreWebSubsystem* subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString AssetId, FString ContextId)
		: FOnlineAsyncTaskSteamCoreWeb(subsystem, Callback, "IGameInventory", "SupportGetAssetHistory", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("assetid", AssetId);
		m_RequestString.Add("contextid", ContextId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebSupportGetAssetHistory() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebSupportGetAssetHistory")); }
};
