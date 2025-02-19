/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides additional methods for interacting with Steam Workshop items.
* https://partner.steamgames.com/doc/webapi/IPublishedFileService
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebQueryFiles
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebQueryFiles : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebQueryFiles(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 QueryType, int32 Page, FString Cursor, int32 NumPerPage, int32 CreatorAppId, int32 AppId, FString RequiredTags, FString ExcludedTags, bool bMatchAllTags, FString RequiredFlags, FString OmittedFlags, FString SearchText, int32 FileType, FString ChildPublishedFileId, int32 Days, bool bIncludeRecentVotesOnly, int32 CacheMaxAgeSeconds, int32 Language, FString RequiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetaData, int32 ReturnPlaytimeStats)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "IPublishedFileService", "QueryFiles", Key, 1, EVerb::GET)
	{
		m_RequestString.AddNumberField("query_type", QueryType);
		m_RequestString.AddNumberField("page", Page);
		m_RequestString.AddStringField("cursor", Cursor);
		m_RequestString.AddNumberField("numperpage", NumPerPage);
		m_RequestString.AddNumberField("creator_appid", CreatorAppId);
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddStringField("requiredtags", RequiredTags);
		m_RequestString.AddStringField("excludedtags", ExcludedTags);
		m_RequestString.AddBoolField("match_all_tags", bMatchAllTags);
		m_RequestString.AddStringField("required_flags", RequiredFlags);
		m_RequestString.AddStringField("omitted_flags", OmittedFlags);
		m_RequestString.AddStringField("search_text", SearchText);
		m_RequestString.AddNumberField("filetype", FileType);
		m_RequestString.AddStringField("child_publishedfileid", ChildPublishedFileId);
		m_RequestString.AddNumberField("days", Days);
		m_RequestString.AddBoolField("include_recent_votes_only", bIncludeRecentVotesOnly);
		m_RequestString.AddNumberField("cache_max_age_seconds", CacheMaxAgeSeconds);
		m_RequestString.AddNumberField("language", Language);
		m_RequestString.AddStringField("required_kv_tags", RequiredKvTags);
		m_RequestString.AddBoolField("totalonly", bTotalOnly);
		m_RequestString.AddBoolField("ids_only", bIDsOnly);
		m_RequestString.AddBoolField("return_vote_data", bReturnVoteData);
		m_RequestString.AddBoolField("return_tags", bReturnTags);
		m_RequestString.AddBoolField("return_kv_tags", bReturnKvTags);
		m_RequestString.AddBoolField("return_previews", bReturnPreviews);
		m_RequestString.AddBoolField("return_children", bReturnChildren);
		m_RequestString.AddBoolField("return_short_description", bReturnShortDescription);
		m_RequestString.AddBoolField("return_for_sale_data", bReturnForSaleData);
		m_RequestString.AddBoolField("return_metadata", bReturnMetaData);
		m_RequestString.AddNumberField("return_playtime_stats", ReturnPlaytimeStats);
	}

private:
	FOnlineAsyncTaskSteamCoreWebQueryFiles() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebSetDeveloperMetadata
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebSetDeveloperMetadata : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebSetDeveloperMetadata(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString PublishedFileId, int32 AppId, FString MetaData)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "IPublishedFileService", "SetDeveloperMetadata", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("publishedfileid", FCString::Atoi64(*PublishedFileId));
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddStringField("metadata", MetaData);
	}

private:
	FOnlineAsyncTaskSteamCoreWebSetDeveloperMetadata() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebUpdateBanStatus
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebUpdateBanStatus : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebUpdateBanStatus(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString PublishedFileId, int32 AppId, bool bBanned, FString reason)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "IPublishedFileService", "UpdateBanStatus", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("publishedfileid", FCString::Atoi64(*PublishedFileId));
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddBoolField("banned", bBanned);
		m_RequestString.AddStringField("reason", reason);
	}

private:
	FOnlineAsyncTaskSteamCoreWebUpdateBanStatus() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebUpdateIncompatibleStatus
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebUpdateIncompatibleStatus : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebUpdateIncompatibleStatus(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString PublishedFileId, int32 AppId, bool bIncompatible)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "IPublishedFileService", "UpdateIncompatibleStatus", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("publishedfileid", FCString::Atoi64(*PublishedFileId));
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddBoolField("incompatible", bIncompatible);
	}

private:
	FOnlineAsyncTaskSteamCoreWebUpdateIncompatibleStatus() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebUpdateTags
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebUpdateTags : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebUpdateTags(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString PublishedFileId, int32 AppId, FString AddTags, FString RemoveTags)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "IPublishedFileService", "UpdateTags", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("publishedfileid", FCString::Atoi64(*PublishedFileId));
		m_RequestString.AddNumberField("appid", AppId);
		m_RequestString.AddStringField("add_tags", AddTags);
		m_RequestString.AddStringField("remove_tags", RemoveTags);
	}

private:
	FOnlineAsyncTaskSteamCoreWebUpdateTags() = delete;
};
