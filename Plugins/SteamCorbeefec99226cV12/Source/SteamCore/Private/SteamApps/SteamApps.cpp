/**
* Copyright (C) 2017-2025 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamApps
*/

#include "SteamApps/SteamApps.h"
#include "SteamApps/SteamAppsAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UApps::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

#if WITH_STEAMCORE
	OnDLCInstalledCallback.Register(this, &UApps::OnDLCInstalled);
	OnOnFileDetailsResultCallback.Register(this, &UApps::OnFileDetailsResult);
	OnNewUrlLaunchParametersCallback.Register(this, &UApps::OnNewUrlLaunchParameters);
#if STEAM_VERSION > 147
	OnTimedTrialStatusCallback.Register(this, &UApps::OnTimedTrialStatus);
#endif

	if (IsRunningDedicatedServer())
	{
		OnDLCInstalledCallback.SetGameserverFlag();
		OnOnFileDetailsResultCallback.SetGameserverFlag();
		OnNewUrlLaunchParametersCallback.SetGameserverFlag();
#if STEAM_VERSION > 147
		OnTimedTrialStatusCallback.SetGameserverFlag();
#endif
	}
#endif
}

void UApps::Deinitialize()
{
#if WITH_STEAMCORE
	OnDLCInstalledCallback.Unregister();
	OnOnFileDetailsResultCallback.Unregister();
	OnNewUrlLaunchParametersCallback.Unregister();
#if STEAM_VERSION > 147
	OnTimedTrialStatusCallback.Unregister();
#endif
#endif

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool UApps::BIsSubscribed()
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetApps())
	{
		bResult = GetApps()->BIsSubscribed();
	}
#endif

	return bResult;
}

bool UApps::BIsLowViolence()
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetApps())
	{
		bResult = GetApps()->BIsLowViolence();
	}
#endif

	return bResult;
}

bool UApps::BIsCybercafe()
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetApps())
	{
		bResult = GetApps()->BIsCybercafe();
	}
#endif

	return bResult;
}

bool UApps::BIsVACBanned()
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetApps())
	{
		bResult = GetApps()->BIsVACBanned();
	}
#endif

	return bResult;
}

FString UApps::GetCurrentGameLanguage()
{
	LogSteamCoreVeryVerbose("");

	FString Result;

#if WITH_STEAMCORE
	if (GetApps())
	{
		Result = UTF8_TO_TCHAR(GetApps()->GetCurrentGameLanguage());
	}
#endif

	return Result;
}

FString UApps::GetAvailableGameLanguages()
{
	LogSteamCoreVeryVerbose("");

	FString Result;

#if WITH_STEAMCORE
	if (GetApps())
	{
		Result = UTF8_TO_TCHAR(GetApps()->GetAvailableGameLanguages());
	}
#endif

	return Result;
}

bool UApps::BIsSubscribedApp(int32 AppID)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetApps())
	{
		bResult = GetApps()->BIsSubscribedApp(AppID);
	}
#endif

	return bResult;
}

bool UApps::BIsSubscribedFromFamilySharing()
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetApps())
	{
		bResult = GetApps()->BIsSubscribedFromFamilySharing();
	}
#endif

	return bResult;
}

bool UApps::BIsTimedTrial(int32& SecondsAllowed, int32& SecondsPlayed)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
#if STEAM_VERSION >= 151
	uint32 Allowed = 0;
	uint32 Played = 0;
	bResult = GetApps()->BIsTimedTrial(&Allowed, &Played);

	if (bResult)
	{
		SecondsAllowed = Allowed;
		SecondsPlayed = Played;
	}
#endif
#endif

	return bResult;
}

bool UApps::BIsDlcInstalled(int32 AppID)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetApps())
	{
		bResult = GetApps()->BIsDlcInstalled(AppID);
	}
#endif

	return bResult;
}

int32 UApps::GetEarliestPurchaseUnixTime(int32 AppID)
{
	LogSteamCoreVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetApps())
	{
		Result = GetApps()->GetEarliestPurchaseUnixTime(AppID);
	}
#endif

	return Result;
}

bool UApps::BIsSubscribedFromFreeWeekend()
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetApps())
	{
		bResult = GetApps()->BIsSubscribedFromFreeWeekend();
	}
#endif

	return bResult;
}

int32 UApps::GetDLCCount()
{
	LogSteamCoreVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetApps())
	{
		Result = GetApps()->GetDLCCount();
	}
#endif

	return Result;
}

bool UApps::BGetDLCDataByIndex(int32 DLC, int32& OutAppId, bool& bAvailable, FString& OutName)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	OutAppId = 0;
	bAvailable = false;
	OutName.Empty();

#if WITH_STEAMCORE
	if (GetApps())
	{
		TArray<char> DataArray;
		DataArray.SetNum(1024);
		AppId_t AppId;

		bResult = GetApps()->BGetDLCDataByIndex(DLC, &AppId, &bAvailable, DataArray.GetData(), DataArray.Num());

		if (bResult)
		{
			OutName = UTF8_TO_TCHAR(DataArray.GetData());
			OutAppId = AppId;
		}
	}
#endif

	return bResult;
}

void UApps::InstallDLC(int32 AppID)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetApps())
	{
		GetApps()->InstallDLC(AppID);
	}
#endif
}

void UApps::UninstallDLC(int32 AppID)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetApps())
	{
		GetApps()->UninstallDLC(AppID);
	}
#endif
}

bool UApps::GetCurrentBetaName(FString& OutName)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	OutName.Empty();

#if WITH_STEAMCORE
	if (GetApps())
	{
		TArray<char> DataArray;
		DataArray.SetNum(512);

		bResult = GetApps()->GetCurrentBetaName(DataArray.GetData(), DataArray.Num());

		if (bResult)
		{
			OutName = UTF8_TO_TCHAR(DataArray.GetData());
		}
	}
#endif

	return bResult;
}

bool UApps::MarkContentCorrupt(bool bMissingFilesOnly)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetApps())
	{
		bResult = GetApps()->MarkContentCorrupt(bMissingFilesOnly);
	}
#endif

	return bResult;
}

int32 UApps::GetInstalledDepots(int32 AppID, int32 MaxDepots, TArray<int32>& OutDepots)
{
	LogSteamCoreVeryVerbose("");

	int32 Result = 0;
	OutDepots.Empty();

#if WITH_STEAMCORE
	if (GetApps())
	{
		TArray<DepotId_t> DataArray;
		DataArray.SetNum(MaxDepots);

		Result = GetApps()->GetInstalledDepots(AppID, DataArray.GetData(), DataArray.Num());

		if (Result > 0)
		{
			for (int32 i = 0; i < DataArray.Num(); i++)
			{
				OutDepots.Add(DataArray[i]);
			}
		}
	}
#endif

	return Result;
}

int UApps::GetLaunchCommandLine(FString& OutCommandline)
{
	LogSteamCoreVeryVerbose("");

	int Result = 0;
	OutCommandline.Empty();

#if WITH_STEAMCORE
	if (GetApps())
	{
		TArray<char> DataArray;
		DataArray.SetNum(1024);

		Result = GetApps()->GetLaunchCommandLine(DataArray.GetData(), DataArray.Num());

		OutCommandline = UTF8_TO_TCHAR(DataArray.GetData());
	}
#endif

	return Result;
}

int32 UApps::GetAppInstallDir(int32 AppID, FString& OutFolder)
{
	LogSteamCoreVeryVerbose("");

	int32 Result = 0;
	OutFolder.Empty();

#if WITH_STEAMCORE
	if (GetApps())
	{
		TArray<char> DataArray;
		DataArray.SetNum(512);

		Result = GetApps()->GetAppInstallDir(AppID, DataArray.GetData(), DataArray.Num());

		if (Result > 0)
		{
			OutFolder = UTF8_TO_TCHAR(DataArray.GetData());
		}
	}
#endif

	return Result;
}

bool UApps::BIsAppInstalled(int32 AppID)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetApps())
	{
		bResult = GetApps()->BIsAppInstalled(AppID);
	}
#endif

	return bResult;
}

FSteamID UApps::GetAppOwner()
{
	LogSteamCoreVeryVerbose("");

	FSteamID Result;

#if WITH_STEAMCORE
	if (GetApps())
	{
		Result = GetApps()->GetAppOwner();
	}
#endif

	return Result;
}

FString UApps::GetLaunchQueryParam(FString Key)
{
	LogSteamCoreVeryVerbose("");

	FString Result;

	if (Key.Len() == 0)
	{
		return Result;
	}

#if WITH_STEAMCORE
	if (GetApps())
	{
		const FTCHARToUTF8 Converter(*Key);
		Result = FString(UTF8_TO_TCHAR(GetApps()->GetLaunchQueryParam(Converter.Get())));
	}
#endif

	return Result;
}

bool UApps::GetDlcDownloadProgress(int32 AppID, int32& OutBytesDownloaded, int32& OutBytesTotal)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	uint64 BytesDownloaded = 0;
	uint64 BytesTotal = 0;

#if WITH_STEAMCORE
	if (GetApps())
	{
		bResult = GetApps()->GetDlcDownloadProgress(AppID, &BytesDownloaded, &BytesTotal);
	}

	OutBytesDownloaded = BytesDownloaded;
	OutBytesTotal = BytesTotal;
#endif

	return bResult;
}

int32 UApps::GetAppBuildId()
{
	LogSteamCoreVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetApps())
	{
		Result = GetApps()->GetAppBuildId();
	}
#endif

	return Result;
}

void UApps::GetFileDetails(const FOnFileDetailsResult& Callback, FString FileName)
{
	LogSteamCoreVeryVerbose("");

#if WITH_STEAMCORE
	if (GetApps())
	{
		FOnlineAsyncTaskSteamCoreAppsGetFileDetails* Task = new FOnlineAsyncTaskSteamCoreAppsGetFileDetails(this, Callback, FileName);
		QueueAsyncTask(Task);
	}
#endif
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if WITH_STEAMCORE
void UApps::OnDLCInstalled(DlcInstalled_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		DLCInstalled.Broadcast(Data);
	});
}

void UApps::OnFileDetailsResult(FileDetailsResult_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		FileDetailsResultDelegate.Broadcast(Data);
	});
}

void UApps::OnNewUrlLaunchParameters(NewUrlLaunchParameters_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		NewUrlLaunchParametersDelegate.Broadcast();
	});
}

#if STEAM_VERSION > 147
void UApps::OnTimedTrialStatus(TimedTrialStatus_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		TimedTrialStatusDelegate.Broadcast(Data);
	});
}
#endif
#endif