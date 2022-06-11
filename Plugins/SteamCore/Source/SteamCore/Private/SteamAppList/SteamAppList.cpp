/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamAppList
*/

#include "SteamAppList/SteamAppList.h"
#include "SteamCorePluginPrivatePCH.h"

void UAppList::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnSteamAppInstalledCallback.Register(this, &UAppList::OnSteamAppInstalled);
	OnSteamAppUninstalledCallback.Register(this, &UAppList::OnSteamAppUninstalled);

	if (IsRunningDedicatedServer())
	{
		OnSteamAppInstalledCallback.SetGameserverFlag();
		OnSteamAppUninstalledCallback.SetGameserverFlag();
	}
}

void UAppList::Deinitialize()
{
	OnSteamAppInstalledCallback.Unregister();
	OnSteamAppUninstalledCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

int32 UAppList::GetNumInstalledApps()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamAppList())
	{
		Result = SteamAppList()->GetNumInstalledApps();
	}

	return Result;
}

int32 UAppList::GetInstalledApps(TArray<int32>& OutAppIds, int32 MaxAppIDs)
{
	LogVeryVerbose("");

	int32 Result = 0;
	OutAppIds.Empty();

	if (SteamAppList())
	{
		TArray<uint32> DataArray;
		DataArray.SetNum(MaxAppIDs);

		Result = SteamAppList()->GetInstalledApps(DataArray.GetData(), DataArray.Num());

		if (Result > 0)
		{
			for (int32 i = 0; i < MaxAppIDs; i++)
			{
				OutAppIds.Add(DataArray[i]);
			}
		}
	}

	return Result;
}

int32 UAppList::GetAppName(int32 AppID, FString& OutName)
{
	LogVeryVerbose("");

	int32 Result = 0;
	OutName.Empty();

	if (SteamAppList())
	{
		TArray<char> DataArray;
		DataArray.SetNum(128);

		Result = SteamAppList()->GetAppName(AppID, DataArray.GetData(), DataArray.Num());

		OutName = UTF8_TO_TCHAR(DataArray.GetData());
	}

	return Result;
}

int32 UAppList::GetAppInstallDir(int32 AppID, FString& OutDirectory)
{
	LogVeryVerbose("");

	int32 Result = 0;
	OutDirectory.Empty();

	if (SteamAppList())
	{
		TArray<char> DataArray;
		DataArray.SetNum(512);

		Result = SteamAppList()->GetAppInstallDir(AppID, DataArray.GetData(), DataArray.Num());

		OutDirectory = UTF8_TO_TCHAR(DataArray.GetData());
	}

	return Result;
}

int32 UAppList::GetAppBuildId(int32 AppID)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (SteamAppList())
	{
		Result = SteamAppList()->GetAppBuildId(AppID);
	}

	return Result;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UAppList::OnSteamAppInstalled(SteamAppInstalled_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamAppInstalled.Broadcast(Data);
	});
}

void UAppList::OnSteamAppUninstalled(SteamAppUninstalled_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamAppUninstalled.Broadcast(Data);
	});
}
