/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Used to access information and interact with users.
* https://partner.steamgames.com/doc/webapi/ISteamUser
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "SteamUser/WebSteamUserTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebCheckAppOwnership
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebCheckAppOwnership : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebCheckAppOwnership(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUser", "CheckAppOwnership", Key, 2, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebCheckAppOwnership() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetAppPriceInfo
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetAppPriceInfo : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetAppPriceInfo(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, TArray<int32> AppIds)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUser", "GetAppPriceInfo", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);

		FString AppIDs;
		for (int32 i = 0; i < AppIds.Num(); i++)
		{
			AppIDs.Append(FString::Printf(TEXT(",%d"), AppIds[i]));
		}

		m_RequestString.Add("appids", AppIDs);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetAppPriceInfo() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetFriendList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetFriendList : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetFriendList(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, FString Relationship)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUser", "GetFriendList", Key, 1, EVerb::GET, true)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("relationship", Relationship);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetFriendList() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetPlayerBans
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetPlayerBans : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetPlayerBans(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, TArray<FString> SteamIDd)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUser", "GetPlayerBans", Key, 1, EVerb::GET)
	{
		FString m_SteamIDs;
		for (int32 i = 0; i < SteamIDd.Num(); i++)
		{
			m_SteamIDs.Append(FString::Printf(TEXT(",%s"), *LexToString(SteamIDd[i])));
		}
		m_RequestString.Add("steamids", m_SteamIDs);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetPlayerBans() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetPlayerSummaries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetPlayerSummaries : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetPlayerSummaries(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, TArray<FString> SteamIDd)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUser", "GetPlayerSummaries", Key, 2, EVerb::GET)
	{
		FString m_SteamIDs;
		for (int32 i = 0; i < SteamIDd.Num(); i++)
		{
			m_SteamIDs.Append(FString::Printf(TEXT(",%s"), *LexToString(SteamIDd[i])));
		}
		m_RequestString.Add("steamids", m_SteamIDs);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetPlayerSummaries() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetPublisherAppOwnership
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetPublisherAppOwnership : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetPublisherAppOwnership(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUser", "GetPublisherAppOwnership", Key, 3, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetPublisherAppOwnership() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetPublisherAppOwnershipChanges
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetPublisherAppOwnershipChanges : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetPublisherAppOwnershipChanges(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString PackageRowVersion, FString CDKeyRowVersion)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUser", "GetPublisherAppOwnershipChanges", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("packagerowversion", PackageRowVersion);
		m_RequestString.Add("cdKeyrowversion", CDKeyRowVersion);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetPublisherAppOwnershipChanges() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGetUserGroupList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGetUserGroupList : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGetUserGroupList(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUser", "GetUserGroupList", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("steamid", SteamId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGetUserGroupList() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebGrantPackage
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebGrantPackage : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebGrantPackage(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 PackageId, FString Ipaddress, FString ThirdPartyKey, int32 ThirdPartyAppId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUser", "GrantPackage", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("packageid", PackageId);
		m_RequestString.Add("ipaddress", Ipaddress);
		m_RequestString.Add("thirdpartyKey", ThirdPartyKey);
		m_RequestString.Add("thirdpartyappid", ThirdPartyAppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebGrantPackage() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebResolveVanityURL
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebResolveVanityURL : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebResolveVanityURL(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, FString VanityURL, EVanityUrlType URLType)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamUser", "ResolveVanityURL", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("vanityurl", VanityURL);
		m_RequestString.Add("url_type", static_cast<int32>(URLType));
	}

private:
	FOnlineAsyncTaskSteamCoreWebResolveVanityURL() = delete;
};
