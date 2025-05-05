/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Used to access data about applications on Steam.
* https://partner.steamgames.com/doc/webapi/ISteamApps
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebAppsGetAppBetas
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebAppsGetAppBetas : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebAppsGetAppBetas(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 appID)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamApps", "GetAppBetas", Key)
	{
		m_RequestString.Add("appid", appID);
	}

private:
	FOnlineAsyncTaskSteamCoreWebAppsGetAppBetas() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebAppsGetAppBetas")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebAppsGetAppBuilds
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebAppsGetAppBuilds : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebAppsGetAppBuilds(USteamCoreWebSubsystem* Subsystem, FOnSteamCoreWebCallback Callback, FString Key, int32 AppID, int32 Count)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamApps", "GetAppBuilds", Key)
	{
		m_RequestString.Add("appid", AppID);
		m_RequestString.Add("count", Count);
	}

private:
	FOnlineAsyncTaskSteamCoreWebAppsGetAppBuilds() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebAppsGetAppBuilds")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebAppsGetAppDepotVersions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebAppsGetAppDepotVersions : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebAppsGetAppDepotVersions(USteamCoreWebSubsystem* Subsystem, FOnSteamCoreWebCallback Callback, FString Key, int32 AppId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamApps", "GetAppDepotVersion", Key)
	{
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebAppsGetAppDepotVersions() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebAppsGetAppDepotVersions")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebAppsGetAppList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebAppsGetAppList : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebAppsGetAppList(USteamCoreWebSubsystem* Subsystem, FOnSteamCoreWebAppListCallback Callback, FString Key)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, FOnSteamCoreWebCallback(), "ISteamApps", "GetAppList", Key, 2, EVerb::GET, true)
		, OnSteamCoreWebAppListCallback(Callback)
	{
	}

private:
	FOnSteamCoreWebAppListCallback OnSteamCoreWebAppListCallback;
	
	FOnlineAsyncTaskSteamCoreWebAppsGetAppList() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebAppsGetAppList")); }

	virtual void Finalize() override
	{
		TArray<FWebAppsGetAppList> Result;
		
		TSharedPtr<FJsonObject> JsonParsed;
		const TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(m_Response->GetContentAsString());

		if (FJsonSerializer::Deserialize(JsonReader, JsonParsed))
		{
			if (const auto AppListArray = JsonParsed->Values["applist"])
			{
				for (auto It = AppListArray->AsObject()->Values.CreateConstIterator(); It; ++It)
				{
					if (It->Value->Type == EJson::Array)
					{
						TArray<TSharedPtr<FJsonValue>> ValuesAsArray = It.Value()->AsArray();
						
						for (const auto& Element : ValuesAsArray)
						{
							if (Element->Type == EJson::Object)
							{
								FString Appid;
								FString ProductName;
								Element->AsObject()->TryGetStringField("appid", Appid);	
								Element->AsObject()->TryGetStringField("name", ProductName);	

								Result.Add(FWebAppsGetAppList{Appid, ProductName});
							}
						}
					}
				}
			}
		}
		
		OnSteamCoreWebAppListCallback.Execute(Result, bWasSuccessful);
	};
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebAppsGetCheatingReports
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebAppsGetCheatingReports : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebAppsGetCheatingReports(USteamCoreWebSubsystem* Subsystem, FOnSteamCoreWebCallback Callback, FString Key, int32 AppId, int32 TimeBegin, int32 timeEnd, bool bIncludeReports, bool bIncludeBans, int32 ReportidMin)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamApps", "GetCheatingReports", Key)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("timebegin", TimeBegin);
		m_RequestString.Add("timeend", timeEnd);
		m_RequestString.Add("includereports", bIncludeReports);
		m_RequestString.Add("includebans", bIncludeBans);
		m_RequestString.Add("reportidmin", ReportidMin);
	}

private:
	FOnlineAsyncTaskSteamCoreWebAppsGetCheatingReports() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebAppsGetCheatingReports")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebAppsGetPlayersBanned
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebAppsGetPlayersBanned : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebAppsGetPlayersBanned(USteamCoreWebSubsystem* Subsystem, FOnSteamCoreWebCallback Callback, FString Key, int32 AppId)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamApps", "GetPlayersBanned", Key)
	{
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskSteamCoreWebAppsGetPlayersBanned() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebAppsGetPlayersBanned")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebAppsGetServerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebAppsGetServerList : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebAppsGetServerList(USteamCoreWebSubsystem* Subsystem, FOnSteamCoreWebCallback Callback, FString Key, FString Filter, int32 Limit)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamApps", "GetServerList", Key)
	{
		m_RequestString.Add("filter", Filter);
		m_RequestString.Add("limit", Limit);
	}

private:
	FOnlineAsyncTaskSteamCoreWebAppsGetServerList() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebAppsGetServerList")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebAppsGetServersAtAddress
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebAppsGetServersAtAddress : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebAppsGetServersAtAddress(USteamCoreWebSubsystem* Subsystem, FOnSteamCoreWebCallback Callback, FString Addr)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamApps", "GetServersAtAddress")
	{
		m_RequestString.Add("addr", Addr);
	}

private:
	FOnlineAsyncTaskSteamCoreWebAppsGetServersAtAddress() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebAppsGetServersAtAddress")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebAppsSetAppBuildLive
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebAppsSetAppBuildLive : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebAppsSetAppBuildLive(USteamCoreWebSubsystem* Subsystem, FOnSteamCoreWebCallback Callback, FString Key, int32 AppId, int32 BuildId, FString BetaKey, FString Description)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamApps", "SetAppBuildLive", Key)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("buildid", BuildId);
		m_RequestString.Add("betaKey", BetaKey);
		m_RequestString.Add("description", Description);
	}

private:
	FOnlineAsyncTaskSteamCoreWebAppsSetAppBuildLive() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebAppsSetAppBuildLive")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebAppsUpToDateCheck
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebAppsUpToDateCheck : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebAppsUpToDateCheck(USteamCoreWebSubsystem* Subsystem, FOnSteamCoreWebCallback Callback, int32 AppId, int32 Version)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "ISteamApps", "UpToDateCheck")
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("version", Version);
	}

private:
	FOnlineAsyncTaskSteamCoreWebAppsUpToDateCheck() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebAppsUpToDateCheck")); }
};
