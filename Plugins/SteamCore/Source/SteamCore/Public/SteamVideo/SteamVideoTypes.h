/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamVideo
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "SteamVideoTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class ESteamBroadcastUploadResult : uint8
{
	None = 0,
	OK = 1,
	InitFailed = 2,
	FrameFailed = 3,
	Timeout = 4,
	BandwidthExceeded = 5,
	LowFPS = 6,
	MissingKeyFrames = 7,
	NoConnection = 8,
	RelayFailed = 9,
	SettingsChanged = 10,
	MissingAudio = 11,
	TooFarBehind = 12,
	TranscodeBehind = 13,
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USTRUCT(BlueprintType)
struct FGetOPFSettingsResult
{
	GENERATED_BODY()
public:
	FGetOPFSettingsResult()
		: Result(ESteamResult::None)
		  , AppID(0)
	{
	}

#if ENABLE_STEAMCORE
	FGetOPFSettingsResult(const GetOPFSettingsResult_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , AppID(Data.m_unVideoAppID)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Video")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Video")
	int32 AppID;
};

USTRUCT(BlueprintType)
struct FGetVideoURLResult
{
	GENERATED_BODY()
public:
	FGetVideoURLResult()
		: Result(ESteamResult::None)
		  , AppID(0)
	{
	}

#if ENABLE_STEAMCORE
	FGetVideoURLResult(const GetVideoURLResult_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , AppID(Data.m_unVideoAppID)
		  , URL(UTF8_TO_TCHAR(Data.m_rgchURL))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Video")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Video")
	int32 AppID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Video")
	FString URL;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetOPFSettingsResult, const FGetOPFSettingsResult&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetVideoURLResult, const FGetVideoURLResult&, Data);
