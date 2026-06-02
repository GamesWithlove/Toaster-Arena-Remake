/**
* Copyright (C) 2017-2025 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServerStats
*/

#include "SteamGameServerStats/SteamGameServerStats.h"
#include "SteamGameServerStats/SteamGameServerStatsAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UGameServerStats::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
#if WITH_STEAMCORE
	OnGSStatsUnloadedCallback.Register(this, &UGameServerStats::OnGSStatsUnloaded);

	if (IsRunningDedicatedServer())
	{
		OnGSStatsUnloadedCallback.SetGameserverFlag();
	}
#endif
}

void UGameServerStats::Deinitialize()
{
#if WITH_STEAMCORE
	OnGSStatsUnloadedCallback.Unregister();
#endif

	Super::Deinitialize();
}

bool UGameServerStats::ShouldCreateSubsystem(UObject* Outer) const
{
	if (IsRunningDedicatedServer())
	{
		return Super::ShouldCreateSubsystem(Outer);
	}

	return false;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool UGameServerStats::GetUserStatInt(FSteamID SteamIDUser, FString Name, int32& OutData)
{
	if (!IsRunningDedicatedServer())
	{
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	OutData = 0;

#if WITH_STEAMCORE
	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->GetUserStat(SteamIDUser, TCHAR_TO_UTF8(*Name), &OutData);
	}
#endif

	return bResult;
}

bool UGameServerStats::GetUserStatFloat(FSteamID SteamIDUser, FString Name, float& OutData)
{
	if (!IsRunningDedicatedServer())
	{
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	OutData = 0.0f;

#if WITH_STEAMCORE
	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->GetUserStat(SteamIDUser, TCHAR_TO_UTF8(*Name), &OutData);
	}
#endif

	return bResult;
}

bool UGameServerStats::GetUserAchievement(FSteamID SteamIDUser, FString Name, bool& bAchieved)
{
	if (!IsRunningDedicatedServer())
	{
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	bAchieved = false;

#if WITH_STEAMCORE
	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->GetUserAchievement(SteamIDUser, TCHAR_TO_UTF8(*Name), &bAchieved);
	}
#endif

	return bResult;
}

bool UGameServerStats::SetUserStatInt(FSteamID SteamIDUser, FString Name, int32 Data)
{
	if (!IsRunningDedicatedServer())
	{
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->SetUserStat(SteamIDUser, TCHAR_TO_UTF8(*Name), Data);
	}
#endif

	return bResult;
}

bool UGameServerStats::SetUserStatFloat(FSteamID SteamIDUser, FString Name, float Data)
{
	if (!IsRunningDedicatedServer())
	{
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->SetUserStat(SteamIDUser, TCHAR_TO_UTF8(*Name), Data);
	}
#endif

	return bResult;
}

bool UGameServerStats::UpdateUserAvgRateStat(FSteamID SteamIDUser, FString Name, float CountThisSession, float SessionLength)
{
	if (!IsRunningDedicatedServer())
	{
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->UpdateUserAvgRateStat(SteamIDUser, TCHAR_TO_UTF8(*Name), CountThisSession, SessionLength);
	}
#endif

	return bResult;
}

bool UGameServerStats::SetUserAchievement(FSteamID SteamIDUser, FString Name)
{
	if (!IsRunningDedicatedServer())
	{
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->SetUserAchievement(SteamIDUser, TCHAR_TO_UTF8(*Name));
	}
#endif

	return bResult;
}

bool UGameServerStats::ClearUserAchievement(FSteamID SteamIDUser, FString Name)
{
	if (!IsRunningDedicatedServer())
	{
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->ClearUserAchievement(SteamIDUser, TCHAR_TO_UTF8(*Name));
	}
#endif

	return bResult;
}

void UGameServerStats::ServerRequestUserStats(const FOnServerRequestUserStats& Callback, FSteamID SteamIDUser)
{
	if (!IsRunningDedicatedServer())
	{
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (SteamGameServerStats())
	{
		FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS* Task = new FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS(this, Callback, SteamIDUser);
		QueueAsyncTask(Task);
	}
#endif
}

void UGameServerStats::ServerStoreUserStats(const FOnServerStoreUserStats& Callback, FSteamID SteamIDUser)
{
	if (!IsRunningDedicatedServer())
	{
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (SteamGameServerStats())
	{
		FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats* Task = new FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats(this, Callback, SteamIDUser);
		QueueAsyncTask(Task);
	}
#endif
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if WITH_STEAMCORE
void UGameServerStats::OnGSStatsUnloaded(GSStatsUnloaded_t* pParam)
{
	if (!IsRunningDedicatedServer())
	{
		LogSteamCoreError("This function can only be called on a Dedicated Server!");
	}

	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GSStatsUnloaded.Broadcast(Data);
	});
}
#endif