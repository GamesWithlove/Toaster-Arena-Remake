/**
* Copyright (C) 2017-2025 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMusic
*/

#include "SteamMusic/SteamMusic.h"
#include "SteamCorePluginPrivatePCH.h"

void UMusic::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
#if WITH_STEAMCORE
	OnPlaybackStatusHasChangedCallback.Register(this, &UMusic::OnPlaybackStatusHasChanged);
	OnVolumeHasChangedCallback.Register(this, &UMusic::OnVolumeHasChanged);

	if (IsRunningDedicatedServer())
	{
		OnPlaybackStatusHasChangedCallback.SetGameserverFlag();
		OnVolumeHasChangedCallback.SetGameserverFlag();
	}
#endif
}

void UMusic::Deinitialize()
{
#if WITH_STEAMCORE
	OnPlaybackStatusHasChangedCallback.Unregister();
	OnVolumeHasChangedCallback.Unregister();
#endif

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool UMusic::BIsEnabled()
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		bResult = SteamMusic()->BIsEnabled();
	}
#endif

	return bResult;
}

bool UMusic::BIsPlaying()
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		bResult = SteamMusic()->BIsPlaying();
	}
#endif

	return bResult;
}

ESteamAudioPlaybackStatus UMusic::GetPlaybackStatus()
{
	LogSteamCoreVeryVerbose("");

	ESteamAudioPlaybackStatus Result = ESteamAudioPlaybackStatus::Idle;

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		Result = static_cast<ESteamAudioPlaybackStatus>(SteamMusic()->GetPlaybackStatus());
	}
#endif

	return Result;
}

void UMusic::Play()
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		SteamMusic()->Play();
	}
#endif
}

void UMusic::Pause()
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		SteamMusic()->Pause();
	}
#endif
}

void UMusic::PlayPrevious()
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		SteamMusic()->PlayPrevious();
	}
#endif
}

void UMusic::PlayNext()
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		SteamMusic()->PlayNext();
	}
#endif
}

void UMusic::SetVolume(float flVolume)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		SteamMusic()->SetVolume(flVolume);
	}
#endif
}

float UMusic::GetVolume()
{
	LogSteamCoreVeryVerbose("");

	float Result = 0.0f;

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		Result = SteamMusic()->GetVolume();
	}
#endif

	return Result;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if WITH_STEAMCORE
void UMusic::OnPlaybackStatusHasChanged(PlaybackStatusHasChanged_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		PlaybackStatusHasChanged.Broadcast(Data);
	});
}

void UMusic::OnVolumeHasChanged(VolumeHasChanged_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		VolumeHasChanged.Broadcast(Data);
	});
}
#endif