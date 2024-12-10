/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMusic
*/

#include "SteamMusic/SteamMusic.h"
#include "SteamCorePluginPrivatePCH.h"

void UMusic::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
#if ENABLE_STEAMCORE
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
#if ENABLE_STEAMCORE
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
	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamMusic())
	{
		bResult = SteamMusic()->BIsEnabled();
	}
#endif

	return bResult;
}

bool UMusic::BIsPlaying()
{
	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamMusic())
	{
		bResult = SteamMusic()->BIsPlaying();
	}
#endif

	return bResult;
}

ESteamAudioPlaybackStatus UMusic::GetPlaybackStatus()
{
	LogVeryVerbose("");

	ESteamAudioPlaybackStatus Result = ESteamAudioPlaybackStatus::Idle;

#if ENABLE_STEAMCORE
	if (SteamMusic())
	{
		Result = static_cast<ESteamAudioPlaybackStatus>(SteamMusic()->GetPlaybackStatus());
	}
#endif

	return Result;
}

void UMusic::Play()
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMusic())
	{
		SteamMusic()->Play();
	}
#endif
}

void UMusic::Pause()
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMusic())
	{
		SteamMusic()->Pause();
	}
#endif
}

void UMusic::PlayPrevious()
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMusic())
	{
		SteamMusic()->PlayPrevious();
	}
#endif
}

void UMusic::PlayNext()
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMusic())
	{
		SteamMusic()->PlayNext();
	}
#endif
}

void UMusic::SetVolume(float flVolume)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMusic())
	{
		SteamMusic()->SetVolume(flVolume);
	}
#endif
}

float UMusic::GetVolume()
{
	LogVeryVerbose("");

	float Result = 0.0f;

#if ENABLE_STEAMCORE
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

#if ENABLE_STEAMCORE
void UMusic::OnPlaybackStatusHasChanged(PlaybackStatusHasChanged_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		PlaybackStatusHasChanged.Broadcast(Data);
	});
}

void UMusic::OnVolumeHasChanged(VolumeHasChanged_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		VolumeHasChanged.Broadcast(Data);
	});
}
#endif