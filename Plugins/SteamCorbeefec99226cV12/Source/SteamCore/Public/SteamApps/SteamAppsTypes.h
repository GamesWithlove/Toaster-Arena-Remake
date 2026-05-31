/**
* Copyright (C) 2017-2025 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamApps
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamAppsTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FTimedTrialStatus
{
	GENERATED_BODY()
public:
	FTimedTrialStatus()
		: AppId(0)
		, bIsOffline(false)
		, SecondsAllowed(0)
		, SecondsPlayed(0)
	{
	}

	
#if WITH_STEAMCORE
#if STEAM_VERSION > 147
	FTimedTrialStatus(const TimedTrialStatus_t& Data)
		: AppId(Data.m_unAppID)
		, bIsOffline(Data.m_bIsOffline)
		, SecondsAllowed(Data.m_unSecondsAllowed)
		, SecondsPlayed(Data.m_unSecondsPlayed)
	{
	}
#endif
#endif
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Apps")
	int32 AppId;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Apps")
	bool bIsOffline;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Apps")
	int32 SecondsAllowed; 
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Apps")
	int32 SecondsPlayed;
};

USTRUCT(BlueprintType)
struct FFileDetailsResult
{
	GENERATED_BODY()
public:
	FFileDetailsResult()
		: Result(ESteamResult::None)
		  , FileSize(0)
	{
	}

#if WITH_STEAMCORE
	FFileDetailsResult(const FileDetailsResult_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , FileSize(Data.m_ulFileSize)
		  , SHA(UTF8_TO_TCHAR(Data.m_FileSHA))
	{
		for (int i = 0; i < 32; i++)
		{
			if (Data.m_unFlags & 1 << i)
			{
				Flags.Add(1 << i);
			}
		}
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Apps")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Apps")
	int32 FileSize;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Apps")
	FString SHA;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Apps")
	TArray<int32> Flags;
};

USTRUCT(BlueprintType)
struct FDLCInstalled
{
	GENERATED_BODY()
public:
	FDLCInstalled()
		: AppID(0)
	{
	}

#if WITH_STEAMCORE
	FDLCInstalled(const DlcInstalled_t& Data)
		: AppID(Data.m_nAppID)
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Apps")
	int32 AppID;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFileDetailsResult, const FFileDetailsResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDLCInstalled, const FDLCInstalled&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFileDetailsResultDelegate, const FFileDetailsResult&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNewUrlLaunchParametersDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimedTrialStatusDelegate, const FTimedTrialStatus&, Data);
