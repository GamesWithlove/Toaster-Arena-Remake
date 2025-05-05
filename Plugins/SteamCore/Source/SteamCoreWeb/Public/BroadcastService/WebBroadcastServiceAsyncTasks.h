/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides access to Steam broadcasts.
* https://partner.steamgames.com/doc/webapi/IBroadcastService
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreWebBroadcastPostGameDataFrame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreWebBroadcastPostGameDataFrame : public FOnlineAsyncTaskSteamCoreWeb
{
public:
	FOnlineAsyncTaskSteamCoreWebBroadcastPostGameDataFrame(USteamCoreWebSubsystem* Subsystem, const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppID, FString SteamID, FString BroadcastId, FString FrameData)
		: FOnlineAsyncTaskSteamCoreWeb(Subsystem, Callback, "IBroadcastService", "PostGameDataFrame", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("appid", AppID);
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamID));
		m_RequestString.AddNumberField("broadcast_id", FCString::Atoi64(*BroadcastId));
		m_RequestString.AddStringField("frame_data", FrameData);
	}

private:
	FOnlineAsyncTaskSteamCoreWebBroadcastPostGameDataFrame() = delete;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreWebBroadcastPostGameDataFrame")); }
};
