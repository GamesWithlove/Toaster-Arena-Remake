/**
* Copyright (C) 2017-2022 eelDev AB
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

	OnDownloadItemResultCallback.Register(this, &UUGC::OnDownloadItemResult);
	OnItemInstalledCallback.Register(this, &UUGC::OnItemInstalled);

	if (IsRunningDedicatedServer())
	{
		OnDownloadItemResultCallback.SetGameserverFlag();
		OnItemInstalledCallback.SetGameserverFlag();
	}
}

void UUGC::Deinitialize()
{
	OnDownloadItemResultCallback.Unregister();
	OnItemInstalledCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUGC::AddAppDependency(const FOnAddAppDependencyResult& Callback, FPublishedFileID PublishedFileID, int32 AppId)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCAddAppDependency* Task = new FOnlineAsyncTaskSteamCoreUGCAddAppDependency(this, Callback, PublishedFileID, AppId);
		QueueAsyncTask(Task);
	}
}

void UUGC::AddDependency(const FOnAddUGCDependencyResult& Callback, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCAddUGCDependency* Task = new FOnlineAsyncTaskSteamCoreUGCAddUGCDependency(this, Callback, PublishedFileID, ChildPublishedFileID);
		QueueAsyncTask(Task);
	}
}

bool UUGC::AddExcludedTag(FUGCQueryHandle Handle, FString TagName)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->AddExcludedTag(Handle, TCHAR_TO_UTF8(*TagName));
	}

	return bResult;
}

bool UUGC::AddItemKeyValueTag(FUGCUpdateHandle Handle, FString Key, FString Value)
{
	LogVerbose("");

	bool bResult = false;

	if (Key.Len() == 0 || Value.Len() == 0)
	{
		return bResult;
	}

	if (GetUGC())
	{
		const FTCHARToUTF8 ConvertedKey(*Key);
		const FTCHARToUTF8 ConvertedValue(*Value);

		bResult = GetUGC()->AddItemKeyValueTag(Handle, ConvertedKey.Get(), ConvertedValue.Get());
	}

	return bResult;
}

bool UUGC::AddItemPreviewFile(FUGCUpdateHandle Handle, FString PreviewFile, ESteamItemPreviewType Type)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->AddItemPreviewFile(Handle, TCHAR_TO_UTF8(*PreviewFile), static_cast<EItemPreviewType>(Type));
	}

	return bResult;
}

bool UUGC::AddItemPreviewVideo(FUGCUpdateHandle Handle, FString VideoID)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->AddItemPreviewVideo(Handle, TCHAR_TO_UTF8(*VideoID));
	}

	return bResult;
}

void UUGC::AddItemToFavorites(const FOnAddItemToFavorites& Callback, int32 AppId, FPublishedFileID PublishedFileID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites* Task = new FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites(this, Callback, AppId, PublishedFileID);
		QueueAsyncTask(Task);
	}
}

bool UUGC::AddRequiredKeyValueTag(FUGCQueryHandle Handle, FString Key, FString Value)
{
	LogVerbose("");

	bool bResult = false;

	if (Key.Len() == 0 || Value.Len() == 0)
	{
		return bResult;
	}

	if (GetUGC())
	{
		const FTCHARToUTF8 ConvertedKey(*Key);
		const FTCHARToUTF8 ConvertedValue(*Value);

		bResult = GetUGC()->AddRequiredKeyValueTag(Handle, ConvertedKey.Get(), ConvertedValue.Get());
	}

	return bResult;
}

bool UUGC::AddRequiredTag(FUGCQueryHandle Handle, FString TagName)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->AddRequiredTag(Handle, TCHAR_TO_UTF8(*TagName));
	}

	return bResult;
}

bool UUGC::AddRequiredTagGroup(FUGCQueryHandle Handle, TArray<FString> TagGroups)
{
	LogVerbose("");

	bool bResult = false;

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

	return bResult;
}

bool UUGC::BInitWorkshopForGameServer(int32 WorkshopDepotID, FString Folder)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->BInitWorkshopForGameServer(WorkshopDepotID, TCHAR_TO_UTF8(*Folder));
	}

	return bResult;
}

void UUGC::CreateItem(const FOnCreateItem& Callback, int32 ConsumerAppID, ESteamWorkshopFileType FileType)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCCreateItem* Task = new FOnlineAsyncTaskSteamCoreUGCCreateItem(this, Callback, ConsumerAppID, FileType);
		QueueAsyncTask(Task);
	}
}

FUGCQueryHandle UUGC::CreateQueryAllUGCRequest(ESteamUGCQuery QueryType, ESteamUGCMatchingUGCType FileType, int32 CreatorAppID, int32 ConsumerAppID, int32 Page)
{
	LogVerbose("");

	return GetUGC() ? FUGCQueryHandle(GetUGC()->CreateQueryAllUGCRequest(static_cast<EUGCQuery>(QueryType), (FileType == ESteamUGCMatchingUGCType::All ? k_EUGCMatchingUGCType_All : static_cast<EUGCMatchingUGCType>(FileType)), CreatorAppID, ConsumerAppID, Page)) : FUGCQueryHandle();
}

FUGCQueryHandle UUGC::CreateQueryUGCDetailsRequest(TArray<FPublishedFileID> PublishedFileIDs)
{
	LogVerbose("");

	FUGCQueryHandle Handle = 0;

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

	return Handle;
}

FUGCQueryHandle UUGC::CreateQueryUserUGCRequest(FSteamID SteamID, ESteamUserUGCList ListType, ESteamUGCMatchingUGCType MatchingUGCType, ESteamUserUGCListSortOrder SortOrder, int32 CreatorAppID, int32 ConsumerAppID, int32 Page)
{
	LogVerbose("");

	FUGCQueryHandle Handle = 0;

	if (GetUGC())
	{
		Handle = GetUGC()->CreateQueryUserUGCRequest(SteamID, static_cast<EUserUGCList>(ListType), (MatchingUGCType == ESteamUGCMatchingUGCType::All ? k_EUGCMatchingUGCType_All : static_cast<EUGCMatchingUGCType>(MatchingUGCType)), static_cast<EUserUGCListSortOrder>(SortOrder), CreatorAppID, ConsumerAppID, Page);
	}

	return Handle;
}

void UUGC::DeleteItem(const FOnDeleteItemResult& Callback, FPublishedFileID PublishedFileID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCDeleteItem* Task = new FOnlineAsyncTaskSteamCoreUGCDeleteItem(this, Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
}

bool UUGC::DownloadItem(FPublishedFileID PublishedFileID, bool bHighPriority)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->DownloadItem(PublishedFileID, bHighPriority);
	}

	return bResult;
}

void UUGC::GetAppDependencies(const FOnGetAppDependenciesResult& Callback, FPublishedFileID PublishedFileID)
{
	LogVeryVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCGetAppDependencies* Task = new FOnlineAsyncTaskSteamCoreUGCGetAppDependencies(this, Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
}

bool UUGC::GetItemDownloadInfo(FPublishedFileID PublishedFileID, int32& OutBytesDownloaded, int32& OutBytesTotal)
{
	LogVeryVerbose("");

	bool bResult = false;

	uint64 BytesDownloaded = 0;
	uint64 BytesTotal = 0;

	if (GetUGC())
	{
		bResult = GetUGC()->GetItemDownloadInfo(PublishedFileID, &BytesDownloaded, &BytesTotal);
	}

	OutBytesDownloaded = BytesDownloaded;
	OutBytesTotal = BytesTotal;

	return bResult;
}

bool UUGC::GetItemInstallInfo(FPublishedFileID PublishedFileID, int32& OutSizeOnDisk, FString& OutFolder, int32& OutTimeStamp)
{
	LogVeryVerbose("");

	bool bResult = false;

	uint32 TimeStamp = 0;
	uint64 SizeOnDisk = 0;

	if (GetUGC())
	{
		TArray<char> Path;
		Path.SetNum(256);

		bResult = GetUGC()->GetItemInstallInfo(PublishedFileID, &SizeOnDisk, Path.GetData(), 256, &TimeStamp);

		OutFolder = UTF8_TO_TCHAR(Path.GetData());
	}

	OutSizeOnDisk = SizeOnDisk;
	OutTimeStamp = TimeStamp;

	return bResult;
}

int32 UUGC::GetItemState(FPublishedFileID PublishedFileID, TArray<ESteamItemState>& States)
{
	LogVeryVerbose("");

	int32 Result = 0;

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

	return Result;
}

ESteamItemUpdateStatus UUGC::GetItemUpdateProgress(FUGCUpdateHandle Handle, int32& OutBytesProcessed, int32& OutBytesTotal)
{
	LogVeryVerbose("");

	ESteamItemUpdateStatus Result = ESteamItemUpdateStatus::Invalid;

	uint64 BytesProcessed = 0;
	uint64 BytesTotal = 0;

	if (GetUGC())
	{
		Result = static_cast<ESteamItemUpdateStatus>(GetUGC()->GetItemUpdateProgress(Handle, &BytesProcessed, &BytesTotal));
	}

	OutBytesProcessed = BytesProcessed;
	OutBytesTotal = BytesTotal;

	return Result;
}

int32 UUGC::GetNumSubscribedItems()
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetUGC())
	{
		Result = GetUGC()->GetNumSubscribedItems();
	}

	return Result;
}

bool UUGC::GetQueryUGCAdditionalPreview(FUGCQueryHandle Handle, int32 Index, int32 PreviewIndex, FString& OutUrlOrVideoID, FString& OutOriginalFileName, ESteamItemPreviewType& OutPreviewType)
{
	LogVeryVerbose("");

	bool bResult = false;

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

	return bResult;
}

bool UUGC::GetQueryUGCChildren(FUGCQueryHandle Handle, int32 Index, TArray<FPublishedFileID>& OutPublishedFileIDs, int32 MaxEntries)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutPublishedFileIDs.Empty();

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

	return bResult;
}

bool UUGC::GetQueryUGCKeyValueTag(FUGCQueryHandle Handle, int32 Index, int32 KeyValueTagIndex, FString& OutKey, FString& OutValue)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutKey.Empty();
	OutValue.Empty();

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

	return bResult;
}

bool UUGC::GetQueryUGCMetadata(FUGCQueryHandle Handle, int32 Index, FString& OutMetaData, int32 MetadataSize)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutMetaData.Empty();

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

	return bResult;
}

int32 UUGC::GetQueryUGCNumAdditionalPreviews(FUGCQueryHandle Handle, int32 Index)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetUGC())
	{
		Result = GetUGC()->GetQueryUGCNumAdditionalPreviews(Handle, Index);
	}

	return Result;
}

int32 UUGC::GetQueryUGCNumKeyValueTags(FUGCQueryHandle Handle, int32 Index)
{
	LogVeryVerbose("");

	int32 Result = 0;

	if (GetUGC())
	{
		Result = GetUGC()->GetQueryUGCNumKeyValueTags(Handle, Index);
	}

	return Result;
}

bool UUGC::GetQueryUGCPreviewURL(FUGCQueryHandle Handle, int32 Index, FString& OutUrl)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutUrl.Empty();

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

	return bResult;
}

bool UUGC::GetQueryUGCResult(FUGCQueryHandle Handle, int32 Index, FSteamUGCDetails& OutDetails)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutDetails = FSteamUGCDetails();

	if (GetUGC())
	{
		SteamUGCDetails_t Details;

		bResult = GetUGC()->GetQueryUGCResult(Handle, Index, &Details);

		if (bResult)
		{
			OutDetails = Details;
		}
	}

	return bResult;
}

int32 UUGC::GetQueryUGCNumTags(FUGCQueryHandle Handle, int32 Index)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if STEAM_VERSION >= 150
	if (GetUGC())
	{
		Result = GetUGC()->GetQueryUGCNumTags(Handle, Index);
	}
#endif

	return Result;
}

bool UUGC::GetQueryUGCTag(FUGCQueryHandle Handle, int32 Index, int32 IndexTag, FString& Value)
{
	LogVeryVerbose("");

	bool bResult = false;
	Value.Empty();

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

	return bResult;
}

bool UUGC::GetQueryUGCTagDisplayName(FUGCQueryHandle Handle, int32 Index, int32 IndexTag, FString& Value)
{
	LogVeryVerbose("");

	bool bResult = false;
	Value.Empty();

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

	return bResult;
}

bool UUGC::GetQueryUGCStatistic(FUGCQueryHandle Handle, int32 Index, ESteamItemStatistic StatType, FString& OutStatValue)
{
	LogVeryVerbose("");

	bool bResult = false;
	uint64 StatValue = 0;

	if (GetUGC())
	{
		bResult = GetUGC()->GetQueryUGCStatistic(Handle, Index, static_cast<EItemStatistic>(StatType), &StatValue);
	}

	OutStatValue = LexToString(StatValue);

	return bResult;
}

int32 UUGC::GetSubscribedItems(TArray<FPublishedFileID>& OutPublishedFileIDs, int32 MaxEntries)
{
	LogVeryVerbose("");

	int32 Result = 0;

	OutPublishedFileIDs.Empty();

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

	return Result;
}

void UUGC::GetUserItemVote(const FOnGetUserItemVote& Callback, FPublishedFileID PublishedFileID)
{
	LogVeryVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCGetUserItemVote* Task = new FOnlineAsyncTaskSteamCoreUGCGetUserItemVote(this, Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
}

bool UUGC::ReleaseQueryUGCRequest(FUGCQueryHandle Handle)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->ReleaseQueryUGCRequest(Handle);
	}

	return bResult;
}

void UUGC::RemoveAppDependency(const FOnRemoveAppDependencyResult& Callback, FPublishedFileID PublishedFileID, int32 AppId)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency* Task = new FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency(this, Callback, PublishedFileID, AppId);
		QueueAsyncTask(Task);
	}
}

void UUGC::RemoveDependency(const FOnRemoveUGCDependencyResult& Callback, FPublishedFileID ParentPublishedFileID, FPublishedFileID ChildPublishedFileID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency* Task = new FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency(this, Callback, ParentPublishedFileID, ChildPublishedFileID);
		QueueAsyncTask(Task);
	}
}

void UUGC::RemoveItemFromFavorites(const FOnRemoveItemFromFavorites& Callback, int32 AppId, FPublishedFileID PublishedFileID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites* Task = new FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites(this, Callback, AppId, PublishedFileID);
		QueueAsyncTask(Task);
	}
}

bool UUGC::RemoveItemKeyValueTags(FUGCUpdateHandle Handle, FString Key)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->RemoveItemKeyValueTags(Handle, TCHAR_TO_UTF8(*Key));
	}

	return bResult;
}

bool UUGC::RemoveItemPreview(FUGCUpdateHandle Handle, int32 Index)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->RemoveItemPreview(Handle, Index);
	}

	return bResult;
}

void UUGC::SendQueryUGCRequest(const FOnSendQueryUGCRequest& Callback, FUGCQueryHandle Handle)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest* Data = new FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest(this, Callback, Handle);
		QueueAsyncTask(Data);
	}
}

bool UUGC::SetAllowCachedResponse(FUGCQueryHandle Handle, int32 MaxAgeSeconds)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetAllowCachedResponse(Handle, MaxAgeSeconds);
	}

	return bResult;
}

bool UUGC::SetAllowLegacyUpload(FUGCUpdateHandle Handle, bool bAllowLegacyUpload)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetAllowLegacyUpload(Handle, bAllowLegacyUpload);
	}

	return bResult;
}

bool UUGC::SetCloudFileNameFilter(FUGCQueryHandle Handle, FString MatchCloudFileName)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetCloudFileNameFilter(Handle, TCHAR_TO_UTF8(*MatchCloudFileName));
	}

	return bResult;
}

bool UUGC::SetItemContent(FUGCUpdateHandle Handle, FString ContentFolder)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetItemContent(Handle, TCHAR_TO_UTF8(*ContentFolder));
	}

	return bResult;
}

bool UUGC::SetItemDescription(FUGCUpdateHandle Handle, FString Description)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetItemDescription(Handle, TCHAR_TO_UTF8(*Description));
	}

	return bResult;
}

bool UUGC::SetItemMetadata(FUGCUpdateHandle Handle, FString MetaData)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetItemMetadata(Handle, TCHAR_TO_UTF8(*MetaData));
	}

	return bResult;
}

bool UUGC::SetItemPreview(FUGCUpdateHandle Handle, FString PreviewFile)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetItemPreview(Handle, TCHAR_TO_UTF8(*PreviewFile));
	}

	return bResult;
}

bool UUGC::SetItemTags(FUGCUpdateHandle Handle, TArray<FString> Tags)
{
	LogVerbose("");

	bool bResult = false;

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

	return bResult;
}

bool UUGC::SetItemTitle(FUGCUpdateHandle Handle, FString Title)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetItemTitle(Handle, TCHAR_TO_UTF8(*Title));
	}

	return bResult;
}

bool UUGC::SetItemUpdateLanguage(FUGCUpdateHandle Handle, FString Language)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetItemUpdateLanguage(Handle, TCHAR_TO_UTF8(*Language));
	}

	return bResult;
}

bool UUGC::SetItemVisibility(FUGCUpdateHandle Handle, ESteamRemoteStoragePublishedFileVisibility Visibility)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetItemVisibility(Handle, static_cast<ERemoteStoragePublishedFileVisibility>(Visibility));
	}

	return bResult;
}

bool UUGC::SetLanguage(FUGCQueryHandle Handle, FString Language)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetLanguage(Handle, TCHAR_TO_UTF8(*Language));
	}

	return bResult;
}

bool UUGC::SetMatchAnyTag(FUGCQueryHandle Handle, bool bMatchAnyTag)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetMatchAnyTag(Handle, bMatchAnyTag);
	}

	return bResult;
}

bool UUGC::SetRankedByTrendDays(FUGCQueryHandle Handle, int32 Days)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetRankedByTrendDays(Handle, Days);
	}

	return bResult;
}

bool UUGC::SetReturnAdditionalPreviews(FUGCQueryHandle Handle, bool bReturnAdditionalPreviews)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnAdditionalPreviews(Handle, bReturnAdditionalPreviews);
	}

	return bResult;
}

bool UUGC::SetReturnChildren(FUGCQueryHandle Handle, bool bReturnChildren)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnChildren(Handle, bReturnChildren);
	}

	return bResult;
}

bool UUGC::SetReturnKeyValueTags(FUGCQueryHandle Handle, bool bReturnKeyValueTags)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnKeyValueTags(Handle, bReturnKeyValueTags);
	}

	return bResult;
}

bool UUGC::SetReturnLongDescription(FUGCQueryHandle Handle, bool bReturnLongDescription)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnLongDescription(Handle, bReturnLongDescription);
	}

	return bResult;
}

bool UUGC::SetReturnMetadata(FUGCQueryHandle Handle, bool bReturnMetadata)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnMetadata(Handle, bReturnMetadata);
	}

	return bResult;
}

bool UUGC::SetReturnOnlyIDs(FUGCQueryHandle Handle, bool bReturnOnlyIDs)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnOnlyIDs(Handle, bReturnOnlyIDs);
	}

	return bResult;
}

bool UUGC::SetReturnPlaytimeStats(FUGCQueryHandle Handle, int32 Days)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnPlaytimeStats(Handle, Days);
	}

	return bResult;
}

bool UUGC::SetReturnTotalOnly(FUGCQueryHandle Handle, bool bReturnTotalOnly)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnTotalOnly(Handle, bReturnTotalOnly);
	}

	return bResult;
}

bool UUGC::SetSearchText(FUGCQueryHandle Handle, FString SearchText)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->SetSearchText(Handle, TCHAR_TO_UTF8(*SearchText));
	}

	return bResult;
}

void UUGC::SetUserItemVote(const FOnSetUserItemVote& Callback, FPublishedFileID PublishedFileID, bool bVoteUp)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCSetUserItemVote* Task = new FOnlineAsyncTaskSteamCoreUGCSetUserItemVote(this, Callback, bVoteUp, PublishedFileID);
		QueueAsyncTask(Task);
	}
}

FUGCUpdateHandle UUGC::StartItemUpdate(int32 ConsumerAppID, FPublishedFileID PublishedFileID)
{
	LogVerbose("");

	return GetUGC() ? FUGCUpdateHandle(GetUGC()->StartItemUpdate(ConsumerAppID, PublishedFileID)) : FUGCUpdateHandle();
}

void UUGC::StartPlaytimeTracking(const FOnStartPlaytimeTracking& Callback, TArray<FPublishedFileID> PublishedFileID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking* Task = new FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking(this, Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
}

void UUGC::StopPlaytimeTracking(const FOnStopPlaytimeTracking& Callback, TArray<FPublishedFileID> PublishedFileIDs)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking* Task = new FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking(this, Callback, PublishedFileIDs);
		QueueAsyncTask(Task);
	}
}

void UUGC::StopPlaytimeTrackingForAllItems(const FOnStopPlaytimeTrackingForAllItems& Callback)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems* Task = new FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems(this, Callback);
		QueueAsyncTask(Task);
	}
}

void UUGC::SubmitItemUpdate(const FOnSubmitItemUpdate& Callback, FUGCUpdateHandle Handle, FString ChangeNote)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate* Task = new FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate(this, Callback, Handle, ChangeNote);
		QueueAsyncTask(Task);
	}
}

void UUGC::SubscribeItem(const FOnSubscribeItem& Callback, FPublishedFileID PublishedFileID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCSubscribeItem* Task = new FOnlineAsyncTaskSteamCoreUGCSubscribeItem(this, Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
}

void UUGC::SuspendDownloads(bool bSuspend)
{
	LogVerbose("");

	if (GetUGC())
	{
		GetUGC()->SuspendDownloads(bSuspend);
	}
}

void UUGC::UnsubscribeItem(const FOnUnsubscribeItem& Callback, FPublishedFileID PublishedFileID)
{
	LogVerbose("");

	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem* Task = new FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem(this, Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
}

bool UUGC::UpdateItemPreviewFile(FUGCUpdateHandle Handle, int32 Index, FString PreviewFile)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->UpdateItemPreviewFile(Handle, Index, TCHAR_TO_UTF8(*PreviewFile));
	}

	return bResult;
}

bool UUGC::UpdateItemPreviewVideo(FUGCUpdateHandle Handle, int32 Index, FString PreviewVideo)
{
	LogVerbose("");

	bool bResult = false;

	if (GetUGC())
	{
		bResult = GetUGC()->UpdateItemPreviewVideo(Handle, Index, TCHAR_TO_UTF8(*PreviewVideo));
	}

	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUGC::OnItemInstalled(ItemInstalled_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		ItemInstalled.Broadcast(Data);
	});
}

void UUGC::OnDownloadItemResult(DownloadItemResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		DownloadItemResult.Broadcast(Data);
	});
}
