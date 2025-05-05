/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#include "SteamUGC/SteamUGCAsyncActions.h"
#include "SteamUGC/SteamUGCAsyncTasks.h"
#include "SteamUGC/SteamUGC.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems::StopPlaytimeTrackingForAllItemsAsync(UObject* WorldContextObject, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems(Subsystem, AsyncObject, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems::HandleCallback(const FStopPlaytimeTrackingResult& Data, bool bWasSuccessful)
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionStopPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionStopPlaytimeTracking* USteamCoreUGCAsyncActionStopPlaytimeTracking::StopPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> publishedFileIDs, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionStopPlaytimeTracking>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking(Subsystem, AsyncObject, publishedFileIDs, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionStopPlaytimeTracking::HandleCallback(const FStopPlaytimeTrackingResult& Data, bool bWasSuccessful)
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionStartPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionStartPlaytimeTracking* USteamCoreUGCAsyncActionStartPlaytimeTracking::StartPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> publishedFileIDs, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionStartPlaytimeTracking>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking(Subsystem, AsyncObject, publishedFileIDs, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionStartPlaytimeTracking::HandleCallback(const FStartPlaytimeTrackingResult& Data, bool bWasSuccessful)
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionUnsubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionUnsubscribeItem* USteamCoreUGCAsyncActionUnsubscribeItem::UnsubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID publishedFileIDs, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionUnsubscribeItem>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem(Subsystem, AsyncObject, publishedFileIDs, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionUnsubscribeItem::HandleCallback(const FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful)
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionSubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionSubscribeItem* USteamCoreUGCAsyncActionSubscribeItem::SubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID publishedFileIDs, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionSubscribeItem>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCSubscribeItem(Subsystem, AsyncObject, publishedFileIDs, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionSubscribeItem::HandleCallback(const FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful)
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionRemoveItemFromFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionRemoveItemFromFavorites* USteamCoreUGCAsyncActionRemoveItemFromFavorites::RemoveItemFromFavoritesAsync(UObject* WorldContextObject, int32 appID, FPublishedFileID publishedFileID, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionRemoveItemFromFavorites>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites(Subsystem, AsyncObject, appID, publishedFileID, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionRemoveItemFromFavorites::HandleCallback(const FUserFavoriteItemsListChanged& Data, bool bWasSuccessful)
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionAddItemToFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionAddItemToFavorites* USteamCoreUGCAsyncActionAddItemToFavorites::AddItemToFavoritesAsync(UObject* WorldContextObject, int32 appID, FPublishedFileID publishedFileID, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionAddItemToFavorites>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites(Subsystem, AsyncObject, appID, publishedFileID, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionAddItemToFavorites::HandleCallback(const FUserFavoriteItemsListChanged& Data, bool bWasSuccessful)
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionGetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionGetUserItemVote* USteamCoreUGCAsyncActionGetUserItemVote::GetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionGetUserItemVote>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCGetUserItemVote(Subsystem, AsyncObject, publishedFileID, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionGetUserItemVote::HandleCallback(const FGetUserItemVoteResult& Data, bool bWasSuccessful)
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionSetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionSetUserItemVote* USteamCoreUGCAsyncActionSetUserItemVote::SetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, bool bVoteUp, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionSetUserItemVote>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCSetUserItemVote(Subsystem, AsyncObject, bVoteUp, publishedFileID, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionSetUserItemVote::HandleCallback(const FSetUserItemVoteResult& Data, bool bWasSuccessful)
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionSubmitItemUpdate
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionSubmitItemUpdate* USteamCoreUGCAsyncActionSubmitItemUpdate::SubmitItemUpdateAsync(UObject* WorldContextObject, FUGCUpdateHandle Handle, FString ChangeNote, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionSubmitItemUpdate>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate(Subsystem, AsyncObject, Handle, ChangeNote, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionSubmitItemUpdate::HandleCallback(const FSubmitItemUpdateResult& Data, bool bWasSuccessful)
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionCreateItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionCreateItem* USteamCoreUGCAsyncActionCreateItem::CreateItemAsync(UObject* WorldContextObject, int32 ConsumerAppID, ESteamWorkshopFileType FileType, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionCreateItem>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCCreateItem(Subsystem, AsyncObject, ConsumerAppID, FileType, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionCreateItem::HandleCallback(const FCreateItemResult& Data, bool bWasSuccessful)
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionSendQueryUGCRequest
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionSendQueryUGCRequest* USteamCoreUGCAsyncActionSendQueryUGCRequest::SendQueryUGCRequestAsync(UObject* WorldContextObject, FUGCQueryHandle Handle, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionSendQueryUGCRequest>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest(Subsystem, AsyncObject, Handle, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionSendQueryUGCRequest::HandleCallback(const FSteamUGCQueryCompleted& Data, bool bWasSuccessful)
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionAddAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionAddAppDependency* USteamCoreUGCAsyncActionAddAppDependency::AddAppDependencyAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, int32 appID, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionAddAppDependency>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCAddAppDependency(Subsystem, AsyncObject, publishedFileID, appID, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionAddAppDependency::HandleCallback(const FAddAppDependencyResult& Data, bool bWasSuccessful)
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionRemoveAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionRemoveAppDependency* USteamCoreUGCAsyncActionRemoveAppDependency::RemoveAppDependencyAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, int32 appID, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionRemoveAppDependency>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency(Subsystem, AsyncObject, publishedFileID, appID, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionRemoveAppDependency::HandleCallback(const FRemoveAppDependencyResult& Data, bool bWasSuccessful)
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionAddUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionAddUGCDependency* USteamCoreUGCAsyncActionAddUGCDependency::AddDependencyAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, FPublishedFileID ChildPublishedFileID, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionAddUGCDependency>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCAddUGCDependency(Subsystem, AsyncObject, publishedFileID, ChildPublishedFileID, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionAddUGCDependency::HandleCallback(const FAddUGCDependencyResult& Data, bool bWasSuccessful)
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionRemoveUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionRemoveUGCDependency* USteamCoreUGCAsyncActionRemoveUGCDependency::RemoveDependencyAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, FPublishedFileID ChildPublishedFileID, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionRemoveUGCDependency>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency(Subsystem, AsyncObject, publishedFileID, ChildPublishedFileID, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionRemoveUGCDependency::HandleCallback(const FRemoveUGCDependencyResult& Data, bool bWasSuccessful)
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionDeleteItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionDeleteItem* USteamCoreUGCAsyncActionDeleteItem::DeleteItemAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionDeleteItem>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCDeleteItem(Subsystem, AsyncObject, publishedFileID, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionDeleteItem::HandleCallback(const FUGCDeleteItemResult& Data, bool bWasSuccessful)
{
	LogVerbose("");
	
	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionGetAppDependencies
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionGetAppDependencies* USteamCoreUGCAsyncActionGetAppDependencies::GetAppDependenciesAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionGetAppDependencies>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCGetAppDependencies(Subsystem, AsyncObject, publishedFileID, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionGetAppDependencies::HandleCallback(const FGetAppDependenciesResult& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionDownloadItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionDownloadItem* USteamCoreUGCAsyncActionDownloadItem::DownloadItemAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, bool bHighPriority, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreUGCAsyncActionDownloadItem>();
		const auto Task = new FOnlineAsyncTaskSteamCoreUGCDownloadItem(Subsystem, AsyncObject, publishedFileID, bHighPriority, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreUGCAsyncActionDownloadItem::HandleCallback(const FDownloadItemResult& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}
