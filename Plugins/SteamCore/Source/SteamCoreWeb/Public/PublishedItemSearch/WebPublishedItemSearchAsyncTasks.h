/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/ISteamPublishedItemSearch
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebRankedByPublicationOrder
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebRankedByPublicationOrder : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebRankedByPublicationOrder(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> Usertag)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamPublishedItemSearch", "RankedByPublicationOrder", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("startidx", StartId);
		m_RequestString.Add("count", Count);
		m_RequestString.Add("tagcount", Tag.Num());
		m_RequestString.Add("usertagcount", Usertag.Num());
		m_RequestString.Add("hasappadminaccess", bHasAppAdminAccess);
		m_RequestString.Add("fileType", FileType);
		m_RequestString.Add("tag", Tag);
		m_RequestString.Add("usertag", Usertag);
	}

private:
	FOnlineAsyncTaskSteamCoreWebRankedByPublicationOrder() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebRankedByTrend
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebRankedByTrend : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebRankedByTrend(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, int32 days, TArray<FString> Tag, TArray<FString> Usertag)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamPublishedItemSearch", "RankedByTrend", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("startidx", StartId);
		m_RequestString.Add("count", Count);
		m_RequestString.Add("tagcount", Tag.Num());
		m_RequestString.Add("usertagcount", Usertag.Num());
		m_RequestString.Add("hasappadminaccess", bHasAppAdminAccess);
		m_RequestString.Add("fileType", FileType);
		m_RequestString.Add("days", days);
		m_RequestString.Add("tag", Tag);
		m_RequestString.Add("usertag", Usertag);
	}

private:
	FOnlineAsyncTaskSteamCoreWebRankedByTrend() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebRankedByVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebRankedByVote : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebRankedByVote(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> Usertag)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamPublishedItemSearch", "RankedByVote", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("startidx", StartId);
		m_RequestString.Add("count", Count);
		m_RequestString.Add("tagcount", Tag.Num());
		m_RequestString.Add("usertagcount", Usertag.Num());
		m_RequestString.Add("hasappadminaccess", bHasAppAdminAccess);
		m_RequestString.Add("fileType", FileType);
		m_RequestString.Add("tag", Tag);
		m_RequestString.Add("usertag", Usertag);
	}

private:
	FOnlineAsyncTaskSteamCoreWebRankedByVote() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebResultSetSummary
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebResultSetSummary : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebResultSetSummary(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, int32 StartId, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> Usertag)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamPublishedItemSearch", "ResultSetSummary", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("startidx", StartId);
		m_RequestString.Add("tagcount", Tag.Num());
		m_RequestString.Add("usertagcount", Usertag.Num());
		m_RequestString.Add("hasappadminaccess", bHasAppAdminAccess);
		m_RequestString.Add("fileType", FileType);
		m_RequestString.Add("tag", Tag);
		m_RequestString.Add("usertag", Usertag);
	}

private:
	FOnlineAsyncTaskSteamCoreWebResultSetSummary() = delete;
};
