/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Primary interface for interacting with the Steam Workshop and User Generated Content (UGC).
* https://partner.steamgames.com/doc/webapi/ICloudService
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebEnumerateUserPublishedFiles
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebEnumerateUserPublishedFiles : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebEnumerateUserPublishedFiles(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamRemoteStorage", "EnumerateUserPublishedFiles", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebEnumerateUserPublishedFiles() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebEnumerateUserSubscribedFiles
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebEnumerateUserSubscribedFiles : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebEnumerateUserSubscribedFiles(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, int32 ListType)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamRemoteStorage", "EnumerateUserSubscribedFiles", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("listtype", ListType);
	}

private:
	FOnlineAsyncTaskSteamCoreWebEnumerateUserSubscribedFiles() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetCollectionDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetCollectionDetails : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetCollectionDetails(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, TArray<FString> PublishedFileIds)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamRemoteStorage", "GetCollectionDetails", "", 1, EVerb::POST, true)
	{
		m_RequestString.Add("collectioncount", PublishedFileIds.Num());
		m_RequestString.Add("publishedfileids", PublishedFileIds);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetCollectionDetails() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetPublishedFileDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetPublishedFileDetails : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetPublishedFileDetails(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString PublishedFileIds)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamRemoteStorage", "GetPublishedFileDetails", "", 1, EVerb::POST, true)
	{
		// TODO: Fix
		m_RequestString.Add("itemcount", PublishedFileIds.Len() > 0 ? 1 : 0);
		//		m_RequestString.Add("publishedfileids[0]", publishedFileID);
		TArray<FString> m_Test;
		m_Test.Add(PublishedFileIds);
		m_RequestString.Add("publishedfileids", m_Test);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetPublishedFileDetails() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetUGCFileDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetUGCFileDetails : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetUGCFileDetails(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, FString UGCID, int32 AppId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamRemoteStorage", "GetUGCFileDetails", Key, 1, EVerb::GET, true)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("ugcid", UGCID);
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetUGCFileDetails() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebSetUGCUsedByGC
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebSetUGCUsedByGC : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebSetUGCUsedByGC(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, FString UGCID, int32 AppId, bool bUsed)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamRemoteStorage", "SetUGCUsedByGC", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("ugcid", UGCID);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("used", bUsed);
	}

private:
	FOnlineAsyncTaskSteamCoreWebSetUGCUsedByGC() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebSubscribePublishedFile
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebSubscribePublishedFile : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebSubscribePublishedFile(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString PublishedFileIds)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamRemoteStorage", "SubscribePublishedFile", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("publishedfileid", PublishedFileIds);
	}

private:
	FOnlineAsyncTaskSteamCoreWebSubscribePublishedFile() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebUnsubscribePublishedFile
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebUnsubscribePublishedFile : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebUnsubscribePublishedFile(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString PublishedFileIds)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamRemoteStorage", "UnsubscribePublishedFile", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("publishedfileid", PublishedFileIds);
	}

private:
	FOnlineAsyncTaskSteamCoreWebUnsubscribePublishedFile() = delete;
};
