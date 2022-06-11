/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamApps
*/

#include "SteamApps/SteamApps.h"
#include "SteamApps/SteamAppsAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UApps::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnDLCInstalledCallback.Register(this, &UApps::OnDLCInstalled);
	OnOnFileDetailsResultCallback.Register(this, &UApps::OnFileDetailsResult);

	if (IsRunningDedicatedServer())
	{
		OnDLCInstalledCallback.SetGameserverFlag();
		OnOnFileDetailsResultCallback.SetGameserverFlag();
	}
}

void UApps::Deinitialize()
{
	OnDLCInstalledCallback.Unregister();
	OnOnFileDetailsResultCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool UApps::BIsSubscribed()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->BIsSubscribed();
	}

	return bResult;
}

bool UApps::BIsLowViolence()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->BIsLowViolence();
	}

	return bResult;
}

bool UApps::BIsCybercafe()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->BIsCybercafe();
	}

	return bResult;
}

bool UApps::BIsVACBanned()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->BIsVACBanned();
	}

	return bResult;
}

FString UApps::GetCurrentGameLanguage()
{
	LogVeryVerbose("");

	FString Result;

	if (GetApps())
	{
		Result = UTF8_TO_TCHAR(GetApps()->GetCurrentGameLanguage());
	}

	return Result;
}

FString UApps::GetAvailableGameLanguages()
{
	LogVeryVerbose("");

	FString Result;

	if (GetApps())
	{
		Result = UTF8_TO_TCHAR(GetApps()->GetAvailableGameLanguages());
	}

	return Result;
}

bool UApps::BIsSubscribedApp(int32 AppID)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->BIsSubscribedApp(AppID);
	}

	return bResult;
}

bool UApps::BIsSubscribedFromFamilySharing()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->BIsSubscribedFromFamilySharing();
	}

	return bResult;
}

bool UApps::BIsTimedTrial(int32& SecondsAllowed, int32& SecondsPlayed)
{
	LogVeryVerbose("");

	bool bResult = false;

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

	return bResult;
}

bool UApps::BIsDlcInstalled(int32 AppID)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->BIsDlcInstalled(AppID);
	}

	return bResult;
}

int32 UApps::GetEarliestPurchaseUnixTime(int32 AppID)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetApps())
	{
		Result = GetApps()->GetEarliestPurchaseUnixTime(AppID);
	}

	return Result;
}

bool UApps::BIsSubscribedFromFreeWeekend()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->BIsSubscribedFromFreeWeekend();
	}

	return bResult;
}

int32 UApps::GetDLCCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetApps())
	{
		Result = GetApps()->GetDLCCount();
	}

	return Result;
}

bool UApps::BGetDLCDataByIndex(int32 DLC, int32& OutAppId, bool& bAvailable, FString& OutName)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutAppId = 0;
	bAvailable = false;
	OutName.Empty();

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

	return bResult;
}

void UApps::InstallDLC(int32 AppID)
{
	LogVerbose("");

	if (GetApps())
	{
		GetApps()->InstallDLC(AppID);
	}
}

void UApps::UninstallDLC(int32 AppID)
{
	LogVerbose("");

	if (GetApps())
	{
		GetApps()->UninstallDLC(AppID);
	}
}

bool UApps::GetCurrentBetaName(FString& OutName)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutName.Empty();

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

	return bResult;
}

bool UApps::MarkContentCorrupt(bool bMissingFilesOnly)
{
	LogVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->MarkContentCorrupt(bMissingFilesOnly);
	}

	return bResult;
}

int32 UApps::GetInstalledDepots(int32 AppID, int32 MaxDepots, TArray<int32>& OutDepots)
{
	LogVeryVerbose("");

	int32 Result = 0;
	OutDepots.Empty();

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

	return Result;
}

int UApps::GetLaunchCommandLine(FString& OutCommandline)
{
	LogVeryVerbose("");

	int Result = 0;
	OutCommandline.Empty();

	if (GetApps())
	{
		TArray<char> DataArray;
		DataArray.SetNum(1024);

		Result = GetApps()->GetLaunchCommandLine(DataArray.GetData(), DataArray.Num());

		OutCommandline = UTF8_TO_TCHAR(DataArray.GetData());
	}

	return Result;
}

int32 UApps::GetAppInstallDir(int32 AppID, FString& OutFolder)
{
	LogVeryVerbose("");

	int32 Result = 0;
	OutFolder.Empty();

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

	return Result;
}

bool UApps::BIsAppInstalled(int32 AppID)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (GetApps())
	{
		bResult = GetApps()->BIsAppInstalled(AppID);
	}

	return bResult;
}

FSteamID UApps::GetAppOwner()
{
	LogVeryVerbose("");

	FSteamID Result;

	if (GetApps())
	{
		Result = GetApps()->GetAppOwner();
	}

	return Result;
}

FString UApps::GetLaunchQueryParam(FString Key)
{
	LogVeryVerbose("");

	FString Result;

	if (Key.Len() == 0)
	{
		return Result;
	}

	if (GetApps())
	{
		const FTCHARToUTF8 Converter(*Key);
		Result = FString(UTF8_TO_TCHAR(GetApps()->GetLaunchQueryParam(Converter.Get())));
	}

	return Result;
}

bool UApps::GetDlcDownloadProgress(int32 AppID, int32& OutBytesDownloaded, int32& OutBytesTotal)
{
	LogVeryVerbose("");

	bool bResult = false;
	uint64 BytesDownloaded = 0;
	uint64 BytesTotal = 0;

	if (GetApps())
	{
		bResult = GetApps()->GetDlcDownloadProgress(AppID, &BytesDownloaded, &BytesTotal);
	}

	OutBytesDownloaded = BytesDownloaded;
	OutBytesTotal = BytesTotal;

	return bResult;
}

int32 UApps::GetAppBuildId()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetApps())
	{
		Result = GetApps()->GetAppBuildId();
	}

	return Result;
}

void UApps::GetFileDetails(const FOnFileDetailsResult& Callback, FString FileName)
{
	LogVeryVerbose("");

	if (GetApps())
	{
		FOnlineAsyncTaskSteamCoreAppsGetFileDetails* Task = new FOnlineAsyncTaskSteamCoreAppsGetFileDetails(this, Callback, FileName);
		QueueAsyncTask(Task);
	}
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UApps::OnDLCInstalled(DlcInstalled_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		DLCInstalled.Broadcast(Data);
	});
}

void UApps::OnFileDetailsResult(FileDetailsResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		FileDetailsResultDelegate.Broadcast(Data);
	});
}
