/**
* Copyright (C) 2017-2025 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamVideo
*/

#include "SteamVideo/SteamVideo.h"
#include "SteamCorePluginPrivatePCH.h"

void UVideo::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

#if WITH_STEAMCORE
	OnGetOPFSettingsResultCallback.Register(this, &UVideo::OnGetOPFSettingsResult);
	OnGetVideoURLResultCallback.Register(this, &UVideo::OnGetVideoURLResult);

	if (IsRunningDedicatedServer())
	{
		OnGetOPFSettingsResultCallback.SetGameserverFlag();
		OnGetVideoURLResultCallback.SetGameserverFlag();
	}
#endif
}

void UVideo::Deinitialize()
{
#if WITH_STEAMCORE
	OnGetOPFSettingsResultCallback.Unregister();
	OnGetVideoURLResultCallback.Unregister();
#endif

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
void UVideo::GetOPFSettings(int32 VideoAppID)
{
	LogSteamCoreVeryVerbose("");

#if WITH_STEAMCORE
	if (SteamVideo())
	{
		SteamVideo()->GetOPFSettings(VideoAppID);
	}
#endif
}

bool UVideo::GetOPFStringForApp(int32 VideoAppID, FString& OutBuffer)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	OutBuffer.Empty();

#if WITH_STEAMCORE
	if (SteamVideo())
	{
		int32 BufferSize = 0;
		TArray<char> Buffer;
		Buffer.SetNum(512);

		bResult = SteamVideo()->GetOPFStringForApp(VideoAppID, Buffer.GetData(), &BufferSize);

		if (bResult)
		{
			Buffer.SetNum(BufferSize);
			OutBuffer = TCHAR_TO_UTF8(Buffer.GetData());
		}
	}
#endif

	return bResult;
}

void UVideo::GetVideoURL(int32 VideoAppID)
{
	LogSteamCoreVeryVerbose("");

#if WITH_STEAMCORE
	if (SteamVideo())
	{
		SteamVideo()->GetVideoURL(VideoAppID);
	}
#endif
}

bool UVideo::IsBroadcasting(int32& NumViewers)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamVideo())
	{
		bResult = SteamVideo()->IsBroadcasting(&NumViewers);
	}
#endif

	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if WITH_STEAMCORE
void UVideo::OnGetOPFSettingsResult(GetOPFSettingsResult_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GetOPFSettingsResult.Broadcast(Data);
	});
}

void UVideo::OnGetVideoURLResult(GetVideoURLResult_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GetVideoURLResult.Broadcast(Data);
	});
}
#endif