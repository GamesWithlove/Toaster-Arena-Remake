/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServerStats
*/

#include "SteamGameServerStats/SteamGameServerStats.h"
#include "SteamGameServerStats/SteamGameServerStatsAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UGameServerStats::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnGSStatsUnloadedCallback.Register(this, &UGameServerStats::OnGSStatsUnloaded);

	if (IsRunningDedicatedServer())
	{
		OnGSStatsUnloadedCallback.SetGameserverFlag();
	}
}

void UGameServerStats::Deinitialize()
{
	OnGSStatsUnloadedCallback.Unregister();

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
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVeryVerbose("");

	bool bResult = false;
	OutData = 0;

	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->GetUserStat(SteamIDUser, TCHAR_TO_UTF8(*Name), &OutData);
	}

	return bResult;
}

bool UGameServerStats::GetUserStatFloat(FSteamID SteamIDUser, FString Name, float& OutData)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVeryVerbose("");

	bool bResult = false;
	OutData = 0.0f;

	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->GetUserStat(SteamIDUser, TCHAR_TO_UTF8(*Name), &OutData);
	}

	return bResult;
}

bool UGameServerStats::GetUserAchievement(FSteamID SteamIDUser, FString Name, bool& bAchieved)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVeryVerbose("");

	bool bResult = false;
	bAchieved = false;

	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->GetUserAchievement(SteamIDUser, TCHAR_TO_UTF8(*Name), &bAchieved);
	}

	return bResult;
}

bool UGameServerStats::SetUserStatInt(FSteamID SteamIDUser, FString Name, int32 Data)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	bool bResult = false;

	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->SetUserStat(SteamIDUser, TCHAR_TO_UTF8(*Name), Data);
	}

	return bResult;
}

bool UGameServerStats::SetUserStatFloat(FSteamID SteamIDUser, FString Name, float Data)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	bool bResult = false;

	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->SetUserStat(SteamIDUser, TCHAR_TO_UTF8(*Name), Data);
	}

	return bResult;
}

bool UGameServerStats::UpdateUserAvgRateStat(FSteamID SteamIDUser, FString Name, float CountThisSession, float SessionLength)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	bool bResult = false;

	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->UpdateUserAvgRateStat(SteamIDUser, TCHAR_TO_UTF8(*Name), CountThisSession, SessionLength);
	}

	return bResult;
}

bool UGameServerStats::SetUserAchievement(FSteamID SteamIDUser, FString Name)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	bool bResult = false;

	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->SetUserAchievement(SteamIDUser, TCHAR_TO_UTF8(*Name));
	}

	return bResult;
}

bool UGameServerStats::ClearUserAchievement(FSteamID SteamIDUser, FString Name)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	bool bResult = false;

	if (SteamGameServerStats())
	{
		bResult = SteamGameServerStats()->ClearUserAchievement(SteamIDUser, TCHAR_TO_UTF8(*Name));
	}

	return bResult;
}

void UGameServerStats::ServerRequestUserStats(const FOnServerRequestUserStats& Callback, FSteamID SteamIDUser)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServerStats())
	{
		FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS* Task = new FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS(this, Callback, SteamIDUser);
		QueueAsyncTask(Task);
	}
}

void UGameServerStats::ServerStoreUserStats(const FOnServerStoreUserStats& Callback, FSteamID SteamIDUser)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	if (SteamGameServerStats())
	{
		FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats* Task = new FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats(this, Callback, SteamIDUser);
		QueueAsyncTask(Task);
	}
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UGameServerStats::OnGSStatsUnloaded(GSStatsUnloaded_t* pParam)
{
	if (!IsRunningDedicatedServer())
	{
		LogError("This function can only be called on a Dedicated Server!");
	}

	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GSStatsUnloaded.Broadcast(Data);
	});
}
