/**
* Copyright (C) 2017-2025 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#include "SteamUGC/SteamUGC.h"
#include "SteamUGC/SteamUGCAsyncTasks.h"
#include "SteamCore/Steam.h"
#include "SteamCorePluginPrivatePCH.h"
#include <string>
#include <sstream>

void UUGC::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

#if WITH_STEAMCORE
	OnDownloadItemResultCallback.Register(this, &UUGC::OnDownloadItemResult);
	OnItemInstalledCallback.Register(this, &UUGC::OnItemInstalled);
#if UE_VERSION_NEWER_THAN(5,0,3)
	OnUserSubscribedItemsListChangedCallback.Register(this, &UUGC::OnUserSubscribedItemsListChanged);
#endif
	if (IsRunningDedicatedServer())
	{
		OnDownloadItemResultCallback.SetGameserverFlag();
		OnItemInstalledCallback.SetGameserverFlag();
#if UE_VERSION_NEWER_THAN(5,0,3)
		OnUserSubscribedItemsListChangedCallback.SetGameserverFlag();
#endif
	}
#endif
}

void UUGC::Deinitialize()
{
#if WITH_STEAMCORE
	OnDownloadItemResultCallback.Unregister();
	OnItemInstalledCallback.Unregister();
#if UE_VERSION_NEWER_THAN(5,0,3)
	OnUserSubscribedItemsListChangedCallback.Unregister();
#endif
#endif

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUGC::AddAppDependency(const FOnAddAppDependencyResult& Callback, FPublishedFileID PublishedFileID, int32 AppId)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCAddAppDependency* Task = new FOnlineAsyncTaskSteamCoreUGCAddAppDependency(this, Callback, PublishedFileID, AppId);
		QueueAsyncTask(Task);
	}
#endif
}

void UUGC::AddDependency(const FOnAddUGCDependencyResult& Callback, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileID)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCAddUGCDependency* Task = new FOnlineAsyncTaskSteamCoreUGCAddUGCDependency(this, Callback, PublishedFileID, ChildPublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

bool UUGC::AddExcludedTag(FUGCQueryHandle Handle, FString TagName)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->AddExcludedTag(Handle, TCHAR_TO_UTF8(*TagName));
	}
#endif

	return bResult;
}

bool UUGC::AddItemKeyValueTag(FUGCUpdateHandle Handle, FString Key, FString Value)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

	if (Key.Len() == 0 || Value.Len() == 0)
	{
	
		return bResult;
	}

#if WITH_STEAMCORE
	if (GetUGC())
	{
		const FTCHARToUTF8 ConvertedKey(*Key);
		const FTCHARToUTF8 ConvertedValue(*Value);

		bResult = GetUGC()->AddItemKeyValueTag(Handle, ConvertedKey.Get(), ConvertedValue.Get());
	}
#endif

	return bResult;
}

bool UUGC::AddItemPreviewFile(FUGCUpdateHandle Handle, FString PreviewFile, ESteamItemPreviewType Type)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->AddItemPreviewFile(Handle, TCHAR_TO_UTF8(*PreviewFile), static_cast<EItemPreviewType>(Type));
	}
#endif

	return bResult;
}

bool UUGC::AddItemPreviewVideo(FUGCUpdateHandle Handle, FString VideoID)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->AddItemPreviewVideo(Handle, TCHAR_TO_UTF8(*VideoID));
	}
#endif

	return bResult;
}

void UUGC::AddItemToFavorites(const FOnAddItemToFavorites& Callback, int32 AppId, FPublishedFileID PublishedFileID)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites* Task = new FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites(this, Callback, AppId, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

bool UUGC::AddRequiredKeyValueTag(FUGCQueryHandle Handle, FString Key, FString Value)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

	if (Key.Len() == 0 || Value.Len() == 0)
	{
	
		return bResult;
	}

#if WITH_STEAMCORE
	if (GetUGC())
	{
		const FTCHARToUTF8 ConvertedKey(*Key);
		const FTCHARToUTF8 ConvertedValue(*Value);

		bResult = GetUGC()->AddRequiredKeyValueTag(Handle, ConvertedKey.Get(), ConvertedValue.Get());
	}
#endif

	return bResult;
}

bool UUGC::AddRequiredTag(FUGCQueryHandle Handle, FString TagName)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->AddRequiredTag(Handle, TCHAR_TO_UTF8(*TagName));
	}
#endif

	return bResult;
}

bool UUGC::AddRequiredTagGroup(FUGCQueryHandle Handle, TArray<FString> TagGroups)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
#if STEAM_VERSION > 150
	if (GetUGC())
	{
		TArray<SteamParamStringArray_t> Arr;

		for (int32 i = 0; i < TagGroups.Num(); i++)
		{
			SteamParamStringArray_t Data = {};
			FCStringAnsi::Strncpy(reinterpret_cast<char*>(Data.m_ppStrings), TCHAR_TO_UTF8(*TagGroups[i]), 256);
			Data.m_nNumStrings = i;

			Arr.Add(Data);
		}

		bResult = GetUGC()->AddRequiredTagGroup(Handle, Arr.GetData());
	}
#endif
#endif

	return bResult;
}

bool UUGC::BInitWorkshopForGameServer(int32 WorkshopDepotID, FString Folder)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->BInitWorkshopForGameServer(WorkshopDepotID, TCHAR_TO_UTF8(*Folder));
	}
#endif

	return bResult;
}

void UUGC::CreateItem(const FOnCreateItem& Callback, int32 ConsumerAppID, ESteamWorkshopFileType FileType)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCCreateItem* Task = new FOnlineAsyncTaskSteamCoreUGCCreateItem(this, Callback, ConsumerAppID, FileType);
		QueueAsyncTask(Task);
	}
#endif
}

FUGCQueryHandle UUGC::CreateQueryAllUGCRequest(ESteamUGCQuery QueryType, ESteamUGCMatchingUGCType FileType, int32 CreatorAppID, int32 ConsumerAppID, int32 Page)
{
	LogSteamCoreVerbose("");

	FUGCQueryHandle Result = {};
	
#if WITH_STEAMCORE
	if (GetUGC())
	{
		Result = GetUGC()->CreateQueryAllUGCRequest(static_cast<EUGCQuery>(QueryType), (FileType == ESteamUGCMatchingUGCType::All ? k_EUGCMatchingUGCType_All : static_cast<EUGCMatchingUGCType>(FileType)), CreatorAppID, ConsumerAppID, Page);
	}
#endif

	return Result;
}

FUGCQueryHandle UUGC::CreateQueryUGCDetailsRequest(TArray<FPublishedFileID> PublishedFileIDs)
{
	LogSteamCoreVerbose("");

	FUGCQueryHandle Handle = {};

#if WITH_STEAMCORE
	if (GetUGC())
	{
		const int32 Size = PublishedFileIDs.Num();

		TArray<PublishedFileId_t> DataArray;
		DataArray.SetNum(Size);

		for (int32 i = 0; i < Size; i++)
		{
			DataArray[i] = PublishedFileIDs[i];
		}

		Handle = GetUGC()->CreateQueryUGCDetailsRequest(DataArray.GetData(), Size);
	}
#endif

	return Handle;
}

FUGCQueryHandle UUGC::CreateQueryUserUGCRequest(FSteamID SteamID, ESteamUserUGCList ListType, ESteamUGCMatchingUGCType MatchingUGCType, ESteamUserUGCListSortOrder SortOrder, int32 CreatorAppID, int32 ConsumerAppID, int32 Page)
{
	LogSteamCoreVerbose("");

	FUGCQueryHandle Handle = {};

#if WITH_STEAMCORE
	if (GetUGC())
	{
		Handle = GetUGC()->CreateQueryUserUGCRequest(SteamID, static_cast<EUserUGCList>(ListType), (MatchingUGCType == ESteamUGCMatchingUGCType::All ? k_EUGCMatchingUGCType_All : static_cast<EUGCMatchingUGCType>(MatchingUGCType)), static_cast<EUserUGCListSortOrder>(SortOrder), CreatorAppID, ConsumerAppID, Page);
	}
#endif

	return Handle;
}

void UUGC::DeleteItem(const FOnDeleteItemResult& Callback, FPublishedFileID PublishedFileID)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCDeleteItem* Task = new FOnlineAsyncTaskSteamCoreUGCDeleteItem(this, Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

bool UUGC::DownloadItem(FPublishedFileID PublishedFileID, bool bHighPriority)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->DownloadItem(PublishedFileID, bHighPriority);
	}
#endif

	return bResult;
}

void UUGC::GetAppDependencies(const FOnGetAppDependenciesResult& Callback, FPublishedFileID PublishedFileID)
{
	LogSteamCoreVeryVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCGetAppDependencies* Task = new FOnlineAsyncTaskSteamCoreUGCGetAppDependencies(this, Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

bool UUGC::GetItemDownloadInfo(FPublishedFileID PublishedFileID, int32& OutBytesDownloaded, int32& OutBytesTotal)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

	uint64 BytesDownloaded = 0;
	uint64 BytesTotal = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->GetItemDownloadInfo(PublishedFileID, &BytesDownloaded, &BytesTotal);
	}
#endif
	
	OutBytesDownloaded = BytesDownloaded;
	OutBytesTotal = BytesTotal;

	return bResult;
}

bool UUGC::GetItemInstallInfo(FPublishedFileID PublishedFileID, int32& OutSizeOnDisk, FString& OutFolder, int32& OutTimeStamp)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

	uint32 TimeStamp = 0;
	uint64 SizeOnDisk = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		TArray<char> Path;
		Path.SetNum(256);

		bResult = GetUGC()->GetItemInstallInfo(PublishedFileID, &SizeOnDisk, Path.GetData(), 256, &TimeStamp);

		OutFolder = UTF8_TO_TCHAR(Path.GetData());
	}
#endif
	
	OutSizeOnDisk = SizeOnDisk;
	OutTimeStamp = TimeStamp;

	return bResult;
}

int32 UUGC::GetItemState(FPublishedFileID PublishedFileID, TArray<ESteamItemState>& States)
{
	LogSteamCoreVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		Result = GetUGC()->GetItemState(PublishedFileID);

		if (Result & k_EItemStateDownloading)
		{
			States.Add(ESteamItemState::Downloading);
		}

		if (Result & k_EItemStateDownloadPending)
		{
			States.Add(ESteamItemState::DownloadPending);
		}

		if (Result & k_EItemStateInstalled)
		{
			States.Add(ESteamItemState::Installed);
		}

		if (Result & k_EItemStateLegacyItem)
		{
			States.Add(ESteamItemState::LegacyItem);
		}

		if (Result & k_EItemStateNeedsUpdate)
		{
			States.Add(ESteamItemState::NeedsUpdate);
		}

		if (Result & k_EItemStateNone)
		{
			States.Add(ESteamItemState::None);
		}

		if (Result & k_EItemStateSubscribed)
		{
			States.Add(ESteamItemState::Subscribed);
		}
	}
#endif

	return Result;
}

ESteamItemUpdateStatus UUGC::GetItemUpdateProgress(FUGCUpdateHandle Handle, int32& OutBytesProcessed, int32& OutBytesTotal)
{
	LogSteamCoreVeryVerbose("");

	ESteamItemUpdateStatus Result = ESteamItemUpdateStatus::Invalid;

	uint64 BytesProcessed = 0;
	uint64 BytesTotal = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		Result = static_cast<ESteamItemUpdateStatus>(GetUGC()->GetItemUpdateProgress(Handle, &BytesProcessed, &BytesTotal));
	}
#endif
	
	OutBytesProcessed = BytesProcessed;
	OutBytesTotal = BytesTotal;

	return Result;
}

int32 UUGC::GetNumSubscribedItems()
{
	LogSteamCoreVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		Result = GetUGC()->GetNumSubscribedItems();
	}
#endif

	return Result;
}

bool UUGC::GetQueryUGCAdditionalPreview(FUGCQueryHandle Handle, int32 Index, int32 PreviewIndex, FString& OutUrlOrVideoID, FString& OutOriginalFileName, ESteamItemPreviewType& OutPreviewType)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	EItemPreviewType ItemPreviewType = k_EItemPreviewType_Image;

	if (GetUGC())
	{
		TArray<char> URLOrVideoID;
		TArray<char> OriginalFileName;

		URLOrVideoID.SetNum(256);
		OriginalFileName.SetNum(256);

		bResult = GetUGC()->GetQueryUGCAdditionalPreview(Handle, Index, PreviewIndex, URLOrVideoID.GetData(), URLOrVideoID.Num(), OriginalFileName.GetData(), OriginalFileName.Num(), &ItemPreviewType);

		if (bResult)
		{
			OutUrlOrVideoID = UTF8_TO_TCHAR(URLOrVideoID.GetData());
			OutOriginalFileName = UTF8_TO_TCHAR(OriginalFileName.GetData());
		}
	}

	OutPreviewType = static_cast<ESteamItemPreviewType>(ItemPreviewType);
#endif

	return bResult;
}

bool UUGC::GetQueryUGCChildren(FUGCQueryHandle Handle, int32 Index, TArray<FPublishedFileID>& OutPublishedFileIDs, int32 MaxEntries)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	OutPublishedFileIDs.Empty();

#if WITH_STEAMCORE
	if (GetUGC())
	{
		TArray<PublishedFileId_t> DataArray;
		DataArray.SetNum(MaxEntries);

		bResult = GetUGC()->GetQueryUGCChildren(Handle, Index, DataArray.GetData(), DataArray.Num());

		if (bResult)
		{
			for (int32 i = 0; i < MaxEntries; i++)
			{
				OutPublishedFileIDs.Add(DataArray[i]);
			}
		}
	}
#endif

	return bResult;
}

bool UUGC::GetQueryUGCKeyValueTag(FUGCQueryHandle Handle, int32 Index, int32 KeyValueTagIndex, FString& OutKey, FString& OutValue)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	OutKey.Empty();
	OutValue.Empty();

#if WITH_STEAMCORE
	if (GetUGC())
	{
		TArray<char> Key;
		TArray<char> Value;

		Key.SetNum(128);
		Value.SetNum(256);

		bResult = GetUGC()->GetQueryUGCKeyValueTag(Handle, Index, KeyValueTagIndex, Key.GetData(), Key.Num(), Value.GetData(), Value.Num());

		if (bResult)
		{
			OutKey = UTF8_TO_TCHAR(Key.GetData());
			OutValue = UTF8_TO_TCHAR(Value.GetData());
		}
	}
#endif

	return bResult;
}

bool UUGC::GetQueryUGCMetadata(FUGCQueryHandle Handle, int32 Index, FString& OutMetaData, int32 MetadataSize)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	OutMetaData.Empty();

#if WITH_STEAMCORE
	if (GetUGC())
	{
		TArray<char> DataArray;
		DataArray.SetNum(MetadataSize);

		bResult = GetUGC()->GetQueryUGCMetadata(Handle, Index, DataArray.GetData(), DataArray.Num());

		if (bResult)
		{
			OutMetaData = UTF8_TO_TCHAR(DataArray.GetData());
		}
	}
#endif

	return bResult;
}

int32 UUGC::GetQueryUGCNumAdditionalPreviews(FUGCQueryHandle Handle, int32 Index)
{
	LogSteamCoreVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		Result = GetUGC()->GetQueryUGCNumAdditionalPreviews(Handle, Index);
	}
#endif

	return Result;
}

int32 UUGC::GetQueryUGCNumKeyValueTags(FUGCQueryHandle Handle, int32 Index)
{
	LogSteamCoreVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		Result = GetUGC()->GetQueryUGCNumKeyValueTags(Handle, Index);
	}
#endif

	return Result;
}

bool UUGC::GetQueryUGCPreviewURL(FUGCQueryHandle Handle, int32 Index, FString& OutUrl)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	OutUrl.Empty();

#if WITH_STEAMCORE
	if (GetUGC())
	{
		TArray<char> DataArray;
		DataArray.SetNum(256);

		bResult = GetUGC()->GetQueryUGCPreviewURL(Handle, Index, DataArray.GetData(), DataArray.Num());

		if (bResult)
		{
			OutUrl = UTF8_TO_TCHAR(DataArray.GetData());
		}
	}
#endif

	return bResult;
}

bool UUGC::GetQueryUGCResult(FUGCQueryHandle Handle, int32 Index, FSteamUGCDetails& OutDetails)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	OutDetails = FSteamUGCDetails();

#if WITH_STEAMCORE
	if (GetUGC())
	{
		SteamUGCDetails_t Details;

		bResult = GetUGC()->GetQueryUGCResult(Handle, Index, &Details);

		if (bResult)
		{
			OutDetails = Details;
		}
	}
#endif

	return bResult;
}

int32 UUGC::GetQueryUGCNumTags(FUGCQueryHandle Handle, int32 Index)
{
	LogSteamCoreVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
#if STEAM_VERSION >= 150
	if (GetUGC())
	{
		Result = GetUGC()->GetQueryUGCNumTags(Handle, Index);
	}
#endif
#endif

	return Result;
}

bool UUGC::GetQueryUGCTag(FUGCQueryHandle Handle, int32 Index, int32 IndexTag, FString& Value)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	Value.Empty();

#if WITH_STEAMCORE
#if STEAM_VERSION >= 150
	if (GetUGC())
	{
		TArray<char> ValueArr;
		ValueArr.SetNum(256);

		bResult = GetUGC()->GetQueryUGCTag(Handle, Index, IndexTag, ValueArr.GetData(), ValueArr.Num());

		if (bResult)
		{
			Value.Append(UTF8_TO_TCHAR(ValueArr.GetData()));
		}
	}
#endif
#endif

	return bResult;
}

bool UUGC::GetQueryUGCTagDisplayName(FUGCQueryHandle Handle, int32 Index, int32 IndexTag, FString& Value)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	Value.Empty();

#if WITH_STEAMCORE
#if STEAM_VERSION >= 150
	if (GetUGC())
	{
		TArray<char> ValueArr;
		ValueArr.SetNum(256);

		bResult = GetUGC()->GetQueryUGCTagDisplayName(Handle, Index, IndexTag, ValueArr.GetData(), ValueArr.Num());

		if (bResult)
		{
			Value.Append(UTF8_TO_TCHAR(ValueArr.GetData()));
		}
	}
#endif
#endif

	return bResult;
}

bool UUGC::GetQueryUGCStatistic(FUGCQueryHandle Handle, int32 Index, ESteamItemStatistic StatType, FString& OutStatValue)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
	uint64 StatValue = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->GetQueryUGCStatistic(Handle, Index, static_cast<EItemStatistic>(StatType), &StatValue);
	}

	OutStatValue = LexToString(StatValue);
#endif

	return bResult;
}

int32 UUGC::GetSubscribedItems(TArray<FPublishedFileID>& OutPublishedFileIDs, int32 MaxEntries)
{
	LogSteamCoreVeryVerbose("");

	int32 Result = 0;

	OutPublishedFileIDs.Empty();

#if WITH_STEAMCORE
	if (GetUGC())
	{
		TArray<PublishedFileId_t> DataArray;
		DataArray.SetNum(MaxEntries);

		Result = GetUGC()->GetSubscribedItems(DataArray.GetData(), DataArray.Num());

		for (int32 i = 0; i < MaxEntries; i++)
		{
			OutPublishedFileIDs.Add(DataArray[i]);
		}
	}
#endif

	return Result;
}

void UUGC::GetUserItemVote(const FOnGetUserItemVote& Callback, FPublishedFileID PublishedFileID)
{
	LogSteamCoreVeryVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCGetUserItemVote* Task = new FOnlineAsyncTaskSteamCoreUGCGetUserItemVote(this, Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

bool UUGC::ReleaseQueryUGCRequest(FUGCQueryHandle Handle)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->ReleaseQueryUGCRequest(Handle);
	}
#endif

	return bResult;
}

void UUGC::RemoveAppDependency(const FOnRemoveAppDependencyResult& Callback, FPublishedFileID PublishedFileID, int32 AppId)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency* Task = new FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency(this, Callback, PublishedFileID, AppId);
		QueueAsyncTask(Task);
	}
#endif
}

void UUGC::RemoveDependency(const FOnRemoveUGCDependencyResult& Callback, FPublishedFileID ParentPublishedFileID, FPublishedFileID ChildPublishedFileID)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency* Task = new FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency(this, Callback, ParentPublishedFileID, ChildPublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

void UUGC::RemoveItemFromFavorites(const FOnRemoveItemFromFavorites& Callback, int32 AppId, FPublishedFileID PublishedFileID)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites* Task = new FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites(this, Callback, AppId, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

bool UUGC::RemoveItemKeyValueTags(FUGCUpdateHandle Handle, FString Key)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->RemoveItemKeyValueTags(Handle, TCHAR_TO_UTF8(*Key));
	}
#endif

	return bResult;
}

bool UUGC::RemoveItemPreview(FUGCUpdateHandle Handle, int32 Index)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->RemoveItemPreview(Handle, Index);
	}
#endif

	return bResult;
}

void UUGC::SendQueryUGCRequest(const FOnSendQueryUGCRequest& Callback, FUGCQueryHandle Handle)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest* Data = new FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest(this, Callback, Handle);
		QueueAsyncTask(Data);
	}
#endif
}

bool UUGC::SetAllowCachedResponse(FUGCQueryHandle Handle, int32 MaxAgeSeconds)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetAllowCachedResponse(Handle, MaxAgeSeconds);
	}
#endif

	return bResult;
}

bool UUGC::SetAllowLegacyUpload(FUGCUpdateHandle Handle, bool bAllowLegacyUpload)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetAllowLegacyUpload(Handle, bAllowLegacyUpload);
	}
#endif

	return bResult;
}

bool UUGC::SetCloudFileNameFilter(FUGCQueryHandle Handle, FString MatchCloudFileName)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetCloudFileNameFilter(Handle, TCHAR_TO_UTF8(*MatchCloudFileName));
	}
#endif

	return bResult;
}

bool UUGC::SetItemContent(FUGCUpdateHandle Handle, FString ContentFolder)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetItemContent(Handle, TCHAR_TO_UTF8(*ContentFolder));
	}
#endif

	return bResult;
}

bool UUGC::SetItemDescription(FUGCUpdateHandle Handle, FString Description)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetItemDescription(Handle, TCHAR_TO_UTF8(*Description));
	}
#endif

	return bResult;
}

bool UUGC::SetItemMetadata(FUGCUpdateHandle Handle, FString MetaData)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetItemMetadata(Handle, TCHAR_TO_UTF8(*MetaData));
	}
#endif

	return bResult;
}

bool UUGC::SetItemPreview(FUGCUpdateHandle Handle, FString PreviewFile)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetItemPreview(Handle, TCHAR_TO_UTF8(*PreviewFile));
	}
#endif

	return bResult;
}

bool UUGC::SetItemTags(FUGCUpdateHandle Handle, TArray<FString> Tags)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		TArray<char*> Strings;
		Strings.SetNum(Tags.Num());

		for (int i = 0; i < Tags.Num(); i++)
		{
			Strings[i] = new char[255];
			FCStringAnsi::Strncpy(Strings[i], TCHAR_TO_UTF8(*Tags[i]), 255);
		}

		SteamParamStringArray_t SteamParamStringArray;
		SteamParamStringArray.m_ppStrings = (const char**)Strings.GetData();
		SteamParamStringArray.m_nNumStrings = Strings.Num();

		bResult = GetUGC()->SetItemTags(Handle, &SteamParamStringArray);

		for (int i = 0; i < Strings.Num(); i++)
		{
			delete[] Strings[i];
		}
	}
#endif

	return bResult;
}

bool UUGC::SetItemTitle(FUGCUpdateHandle Handle, FString Title)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetItemTitle(Handle, TCHAR_TO_UTF8(*Title));
	}
#endif

	return bResult;
}

bool UUGC::SetItemUpdateLanguage(FUGCUpdateHandle Handle, FString Language)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetItemUpdateLanguage(Handle, TCHAR_TO_UTF8(*Language));
	}
#endif

	return bResult;
}

bool UUGC::SetItemVisibility(FUGCUpdateHandle Handle, ESteamRemoteStoragePublishedFileVisibility Visibility)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetItemVisibility(Handle, static_cast<ERemoteStoragePublishedFileVisibility>(Visibility));
	}
#endif

	return bResult;
}

bool UUGC::SetLanguage(FUGCQueryHandle Handle, FString Language)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetLanguage(Handle, TCHAR_TO_UTF8(*Language));
	}
#endif

	return bResult;
}

bool UUGC::SetMatchAnyTag(FUGCQueryHandle Handle, bool bMatchAnyTag)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetMatchAnyTag(Handle, bMatchAnyTag);
	}
#endif

	return bResult;
}

bool UUGC::SetRankedByTrendDays(FUGCQueryHandle Handle, int32 Days)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetRankedByTrendDays(Handle, Days);
	}
#endif

	return bResult;
}

bool UUGC::SetReturnAdditionalPreviews(FUGCQueryHandle Handle, bool bReturnAdditionalPreviews)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnAdditionalPreviews(Handle, bReturnAdditionalPreviews);
	}
#endif

	return bResult;
}

bool UUGC::SetReturnChildren(FUGCQueryHandle Handle, bool bReturnChildren)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnChildren(Handle, bReturnChildren);
	}
#endif

	return bResult;
}

bool UUGC::SetReturnKeyValueTags(FUGCQueryHandle Handle, bool bReturnKeyValueTags)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnKeyValueTags(Handle, bReturnKeyValueTags);
	}
#endif

	return bResult;
}

bool UUGC::SetReturnLongDescription(FUGCQueryHandle Handle, bool bReturnLongDescription)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnLongDescription(Handle, bReturnLongDescription);
	}
#endif

	return bResult;
}

bool UUGC::SetReturnMetadata(FUGCQueryHandle Handle, bool bReturnMetadata)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnMetadata(Handle, bReturnMetadata);
	}
#endif

	return bResult;
}

bool UUGC::SetReturnOnlyIDs(FUGCQueryHandle Handle, bool bReturnOnlyIDs)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnOnlyIDs(Handle, bReturnOnlyIDs);
	}
#endif

	return bResult;
}

bool UUGC::SetReturnPlaytimeStats(FUGCQueryHandle Handle, int32 Days)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnPlaytimeStats(Handle, Days);
	}
#endif

	return bResult;
}

bool UUGC::SetReturnTotalOnly(FUGCQueryHandle Handle, bool bReturnTotalOnly)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnTotalOnly(Handle, bReturnTotalOnly);
	}
#endif

	return bResult;
}

bool UUGC::SetSearchText(FUGCQueryHandle Handle, FString SearchText)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetSearchText(Handle, TCHAR_TO_UTF8(*SearchText));
	}
#endif

	return bResult;
}

void UUGC::SetUserItemVote(const FOnSetUserItemVote& Callback, FPublishedFileID PublishedFileID, bool bVoteUp)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCSetUserItemVote* Task = new FOnlineAsyncTaskSteamCoreUGCSetUserItemVote(this, Callback, bVoteUp, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

FUGCUpdateHandle UUGC::StartItemUpdate(int32 ConsumerAppID, FPublishedFileID PublishedFileID)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		return FUGCUpdateHandle(GetUGC()->StartItemUpdate(ConsumerAppID, PublishedFileID));
	}
#endif

	return FUGCUpdateHandle();
}

void UUGC::StartPlaytimeTracking(const FOnStartPlaytimeTracking& Callback, TArray<FPublishedFileID> PublishedFileID)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking* Task = new FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking(this, Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

void UUGC::StopPlaytimeTracking(const FOnStopPlaytimeTracking& Callback, TArray<FPublishedFileID> PublishedFileIDs)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking* Task = new FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking(this, Callback, PublishedFileIDs);
		QueueAsyncTask(Task);
	}
#endif
}

void UUGC::StopPlaytimeTrackingForAllItems(const FOnStopPlaytimeTrackingForAllItems& Callback)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems* Task = new FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems(this, Callback);
		QueueAsyncTask(Task);
	}
#endif
}

void UUGC::SubmitItemUpdate(const FOnSubmitItemUpdate& Callback, FUGCUpdateHandle Handle, FString ChangeNote)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate* Task = new FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate(this, Callback, Handle, ChangeNote);
		QueueAsyncTask(Task);
	}
#endif
}

void UUGC::SubscribeItem(const FOnSubscribeItem& Callback, FPublishedFileID PublishedFileID)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCSubscribeItem* Task = new FOnlineAsyncTaskSteamCoreUGCSubscribeItem(this, Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

void UUGC::SuspendDownloads(bool bSuspend)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		GetUGC()->SuspendDownloads(bSuspend);
	}
#endif
}

void UUGC::UnsubscribeItem(const FOnUnsubscribeItem& Callback, FPublishedFileID PublishedFileID)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem* Task = new FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem(this, Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

bool UUGC::UpdateItemPreviewFile(FUGCUpdateHandle Handle, int32 Index, FString PreviewFile)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->UpdateItemPreviewFile(Handle, Index, TCHAR_TO_UTF8(*PreviewFile));
	}
#endif

	return bResult;
}

bool UUGC::UpdateItemPreviewVideo(FUGCUpdateHandle Handle, int32 Index, FString PreviewVideo)
{
	LogSteamCoreVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->UpdateItemPreviewVideo(Handle, Index, TCHAR_TO_UTF8(*PreviewVideo));
	}
#endif

	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if WITH_STEAMCORE
void UUGC::OnItemInstalled(ItemInstalled_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		ItemInstalled.Broadcast(Data);
	});
}

void UUGC::OnDownloadItemResult(DownloadItemResult_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		DownloadItemResult.Broadcast(Data);
	});
}

#if UE_VERSION_NEWER_THAN(5,0,3)
void UUGC::OnUserSubscribedItemsListChanged(UserSubscribedItemsListChanged_t* pParam)
{
	LogSteamCoreVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		UserSubscribedItemsListChanged.Broadcast(Data);
	});
}
#endif

#endif