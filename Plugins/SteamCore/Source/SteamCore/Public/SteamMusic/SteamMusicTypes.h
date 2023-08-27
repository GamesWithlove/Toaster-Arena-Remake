/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMusic
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/Steam.h"
#include "SteamMusicTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class ESteamAudioPlaybackStatus : uint8
{
	Undefined = 0,
	Playing = 1,
	Paused = 2,
	Idle = 3
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FPlaybackStatusHasChanged
{
	GENERATED_BODY()
public:
	FPlaybackStatusHasChanged() = default;

#if ENABLE_STEAMCORE
	FPlaybackStatusHasChanged(const PlaybackStatusHasChanged_t& Data)
	{
	}
#endif
};

USTRUCT(BlueprintType)
struct FVolumeHasChanged
{
	GENERATED_BODY()
public:
	FVolumeHasChanged()
	: Volume(0)
	{
	}

#if ENABLE_STEAMCORE
	FVolumeHasChanged(const VolumeHasChanged_t& Data)
		: Volume(Data.m_flNewVolume)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category = "MatchmakingServers")
	float Volume;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlaybackStatusHasChanged, const FPlaybackStatusHasChanged&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVolumeHasChanged, const FVolumeHasChanged&, Data);
