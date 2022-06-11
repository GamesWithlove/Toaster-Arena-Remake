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

	OnPlaybackStatusHasChangedCallback.Register(this, &UMusic::OnPlaybackStatusHasChanged);
	OnVolumeHasChangedCallback.Register(this, &UMusic::OnVolumeHasChanged);

	if (IsRunningDedicatedServer())
	{
		OnPlaybackStatusHasChangedCallback.SetGameserverFlag();
		OnVolumeHasChangedCallback.SetGameserverFlag();
	}
}

void UMusic::Deinitialize()
{
	OnPlaybackStatusHasChangedCallback.Unregister();
	OnVolumeHasChangedCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool UMusic::BIsEnabled()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamMusic())
	{
		bResult = SteamMusic()->BIsEnabled();
	}

	return bResult;
}

bool UMusic::BIsPlaying()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamMusic())
	{
		bResult = SteamMusic()->BIsPlaying();
	}

	return bResult;
}

ESteamAudioPlaybackStatus UMusic::GetPlaybackStatus()
{
	LogVeryVerbose("");

	ESteamAudioPlaybackStatus Result = ESteamAudioPlaybackStatus::Idle;

	if (SteamMusic())
	{
		Result = static_cast<ESteamAudioPlaybackStatus>(SteamMusic()->GetPlaybackStatus());
	}

	return Result;
}

void UMusic::Play()
{
	LogVerbose("");

	if (SteamMusic())
	{
		SteamMusic()->Play();
	}
}

void UMusic::Pause()
{
	LogVerbose("");

	if (SteamMusic())
	{
		SteamMusic()->Pause();
	}
}

void UMusic::PlayPrevious()
{
	LogVerbose("");

	if (SteamMusic())
	{
		SteamMusic()->PlayPrevious();
	}
}

void UMusic::PlayNext()
{
	LogVerbose("");

	if (SteamMusic())
	{
		SteamMusic()->PlayNext();
	}
}

void UMusic::SetVolume(float flVolume)
{
	LogVerbose("");

	if (SteamMusic())
	{
		SteamMusic()->SetVolume(flVolume);
	}
}

float UMusic::GetVolume()
{
	LogVeryVerbose("");

	float Result = 0.0f;

	if (SteamMusic())
	{
		Result = SteamMusic()->GetVolume();
	}

	return Result;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

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
