/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "SteamUGCTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCPlaytimeTrackingForAllItems
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems : public FOnlineAsyncTaskSteamCore
{
public:
	FOnStopPlaytimeTrackingForAllItems m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems(class USteamCoreSubsystem* Subsystem, const FOnStopPlaytimeTrackingForAllItems Callback, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
	{
	}

	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems() = delete;
protected:
	StopPlaytimeTrackingResult_t m_CallbackResults;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking : public FOnlineAsyncTaskSteamCore
{
public:
	FOnStopPlaytimeTracking m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking(class USteamCoreSubsystem* Subsystem, const FOnStopPlaytimeTracking Callback, const TArray<FPublishedFileID> FileIDs, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_FileIDs(FileIDs)
	{
	}

	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const TArray<FPublishedFileID> FileIDs, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_FileIDs(FileIDs)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking() = delete;
protected:
	StopPlaytimeTrackingResult_t m_CallbackResults;
	TArray<FPublishedFileID> m_FileIDs;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking : public FOnlineAsyncTaskSteamCore
{
public:
	FOnStartPlaytimeTracking m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking(class USteamCoreSubsystem* Subsystem, const FOnStartPlaytimeTracking Callback, const TArray<FPublishedFileID> FileIDs, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_FileIDs(FileIDs)
	{
	}

	FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const TArray<FPublishedFileID> FileIDs, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_FileIDs(FileIDs)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking() = delete;
protected:
	StartPlaytimeTrackingResult_t m_CallbackResults;
	TArray<FPublishedFileID> m_FileIDs;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem : public FOnlineAsyncTaskSteamCore
{
public:
	FOnUnsubscribeItem m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem(class USteamCoreSubsystem* Subsystem, const FOnUnsubscribeItem Callback, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_FileID(FileID)
	{
	}

	FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FPublishedFileID PublishedFileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_FileID(PublishedFileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem() = delete;
protected:
	RemoteStorageSubscribePublishedFileResult_t m_CallbackResults;
	FPublishedFileID m_FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCSubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCSubscribeItem : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSubscribeItem m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCSubscribeItem(class USteamCoreSubsystem* Subsystem, const FOnSubscribeItem Callback, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_FileID(FileID)
	{
	}

	FOnlineAsyncTaskSteamCoreUGCSubscribeItem(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FPublishedFileID PublishedFileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_FileID(PublishedFileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCSubscribeItem() = delete;
protected:
	RemoteStorageSubscribePublishedFileResult_t m_CallbackResults;
	FPublishedFileID m_FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCSubscribeItem")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRemoveItemFromFavorites m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites(class USteamCoreSubsystem* Subsystem, const FOnRemoveItemFromFavorites Callback, const int32 AppID, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_AppID(AppID)
		  , m_FileID(FileID)
	{
	}

	FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const int32 AppID, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_AppID(AppID)
		  , m_FileID(FileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites() = delete;
protected:
	UserFavoriteItemsListChanged_t m_CallbackResults;
	int32 m_AppID;
	FPublishedFileID m_FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites : public FOnlineAsyncTaskSteamCore
{
public:
	FOnAddItemToFavorites m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites(class USteamCoreSubsystem* Subsystem, const FOnAddItemToFavorites Callback, const int32 AppID, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_AppID(AppID)
		  , m_FileID(FileID)
	{
	}

	FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const int32 AppID, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_AppID(AppID)
		  , m_FileID(FileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites() = delete;
protected:
	UserFavoriteItemsListChanged_t m_CallbackResults;
	int32 m_AppID;
	FPublishedFileID m_FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCGetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCGetUserItemVote : public FOnlineAsyncTaskSteamCore
{
public:
	FOnGetUserItemVote m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCGetUserItemVote(class USteamCoreSubsystem* Subsystem, const FOnGetUserItemVote Callback, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_FileID(FileID)
	{
	}

	FOnlineAsyncTaskSteamCoreUGCGetUserItemVote(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_FileID(FileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCGetUserItemVote() = delete;
protected:
	GetUserItemVoteResult_t m_CallbackResults;
	FPublishedFileID m_FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCGetUserItemVote")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCSetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCSetUserItemVote : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSetUserItemVote m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCSetUserItemVote(class USteamCoreSubsystem* Subsystem, FOnSetUserItemVote Callback, const bool bVoteUp, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , bVoteUp(bVoteUp)
		  , m_FileID(FileID)
	{
	}

	FOnlineAsyncTaskSteamCoreUGCSetUserItemVote(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const bool bVoteUp, const FPublishedFileID FileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , bVoteUp(bVoteUp)
		  , m_FileID(FileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCSetUserItemVote() = delete;
protected:
	SetUserItemVoteResult_t m_CallbackResults;
	bool bVoteUp;
	FPublishedFileID m_FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCSetUserItemVote")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSubmitItemUpdate m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate(class USteamCoreSubsystem* Subsystem, const FOnSubmitItemUpdate Callback, const FUGCUpdateHandle Handle, const FString ChangeNote, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_UGCUpdateHandle(Handle)
		  , m_ChangeNote(ChangeNote)
	{
	}

	FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FUGCUpdateHandle Handle, const FString ChangeNote, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_UGCUpdateHandle(Handle)
		  , m_ChangeNote(ChangeNote)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate() = delete;
protected:
	SubmitItemUpdateResult_t m_CallbackResults;
	FUGCUpdateHandle m_UGCUpdateHandle;
	FString m_ChangeNote;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCCreateItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCCreateItem : public FOnlineAsyncTaskSteamCore
{
public:
	FOnCreateItem m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCCreateItem(class USteamCoreSubsystem* Subsystem, FOnCreateItem Callback, const int32 AppID, const ESteamWorkshopFileType FileType, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_ConsumerAppID(AppID)
		  , m_FileType(FileType)
	{
	}

	FOnlineAsyncTaskSteamCoreUGCCreateItem(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const int32 AppID, const ESteamWorkshopFileType FileType, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_ConsumerAppID(AppID)
		  , m_FileType(FileType)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCCreateItem() = delete;
protected:
	CreateItemResult_t m_CallbackResults;
	int32 m_ConsumerAppID;
	ESteamWorkshopFileType m_FileType;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCCreateItem")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSendQueryUGCRequest m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest(class USteamCoreSubsystem* Subsystem, const FOnSendQueryUGCRequest Callback, const FUGCQueryHandle Handle, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_UGCQueryHandle(Handle)
	{
	}

	FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FUGCQueryHandle Handle, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_UGCQueryHandle(Handle)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest() = delete;
protected:
	SteamUGCQueryCompleted_t m_CallbackResults;
	FUGCQueryHandle m_UGCQueryHandle;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCAddAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCAddAppDependency : public FOnlineAsyncTaskSteamCore
{
public:
	FOnAddAppDependencyResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCAddAppDependency(class USteamCoreSubsystem* Subsystem, const FOnAddAppDependencyResult Callback, const FPublishedFileID PublishedFileID, const int32 AppID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_PublishedFileID(PublishedFileID)
		  , m_AppID(AppID)
	{
	}

	FOnlineAsyncTaskSteamCoreUGCAddAppDependency(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FPublishedFileID PublishedFileID, const int32 AppID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_PublishedFileID(PublishedFileID)
		  , m_AppID(AppID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCAddAppDependency() = delete;
protected:
	AddAppDependencyResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;
	int32 m_AppID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCAddAppDependency")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRemoveAppDependencyResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency(class USteamCoreSubsystem* Subsystem, const FOnRemoveAppDependencyResult Callback, const FPublishedFileID PublishedFileID, const int32 AppID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_PublishedFileID(PublishedFileID)
		  , m_AppID(AppID)
	{
	}

	FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FPublishedFileID PublishedFileID, const int32 AppID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_PublishedFileID(PublishedFileID)
		  , m_AppID(AppID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency() = delete;
protected:
	RemoveAppDependencyResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;
	int32 m_AppID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCAddUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCAddUGCDependency : public FOnlineAsyncTaskSteamCore
{
public:
	FOnAddUGCDependencyResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCAddUGCDependency(class USteamCoreSubsystem* Subsystem, const FOnAddUGCDependencyResult Callback, const FPublishedFileID PublishedFileId, const FPublishedFileID ChildPublishedFileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_PublishedFileID(PublishedFileId)
		  , m_ChildPublishedFileID(ChildPublishedFileID)
	{
	}

	FOnlineAsyncTaskSteamCoreUGCAddUGCDependency(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FPublishedFileID PublishedFileId, const FPublishedFileID ChildPublishedFileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_PublishedFileID(PublishedFileId)
		  , m_ChildPublishedFileID(ChildPublishedFileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCAddUGCDependency() = delete;
protected:
	AddUGCDependencyResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;
	FPublishedFileID m_ChildPublishedFileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCAddUGCDependency")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRemoveUGCDependencyResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency(class USteamCoreSubsystem* Subsystem, const FOnRemoveUGCDependencyResult Callback, const FPublishedFileID ParentPublishedFileId, const FPublishedFileID ChildPublishedFileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_ParentPublishedFileID(ParentPublishedFileId)
		  , m_ChildPublishedFileID(ChildPublishedFileID)
	{
	}

	FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FPublishedFileID ParentPublishedFileId, const FPublishedFileID ChildPublishedFileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_ParentPublishedFileID(ParentPublishedFileId)
		  , m_ChildPublishedFileID(ChildPublishedFileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency() = delete;
protected:
	RemoveUGCDependencyResult_t m_CallbackResults;
	FPublishedFileID m_ParentPublishedFileID;
	FPublishedFileID m_ChildPublishedFileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCDeleteItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCDeleteItem : public FOnlineAsyncTaskSteamCore
{
public:
	FOnDeleteItemResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCDeleteItem(class USteamCoreSubsystem* Subsystem, const FOnDeleteItemResult Callback, const FPublishedFileID PublishedFileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_PublishedFileID(PublishedFileID)
	{
	}

	FOnlineAsyncTaskSteamCoreUGCDeleteItem(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FPublishedFileID PublishedFileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_PublishedFileID(PublishedFileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCDeleteItem() = delete;
protected:
	DeleteItemResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCDeleteItem")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCGetAppDependencies
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCGetAppDependencies : public FOnlineAsyncTaskSteamCore
{
public:
	FOnGetAppDependenciesResult m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCGetAppDependencies(class USteamCoreSubsystem* Subsystem, const FOnGetAppDependenciesResult Callback, const FPublishedFileID PublishedFileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_PublishedFileID(PublishedFileID)
	{
	}

	FOnlineAsyncTaskSteamCoreUGCGetAppDependencies(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FPublishedFileID PublishedFileID, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_PublishedFileID(PublishedFileID)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreUGCGetAppDependencies() = delete;
protected:
	GetAppDependenciesResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCGetAppDependencies")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCDownloadItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreUGCDownloadItem : public FOnlineAsyncTaskSteamCore
{
public:
	FOnDownloadItem m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCDownloadItem(class USteamCoreSubsystem* Subsystem, const FOnDownloadItem Callback, const FPublishedFileID PublishedFileID, const bool bHighPriority, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_PublishedFileID(PublishedFileID)
		  , bHighPriority(bHighPriority)
	{
		OnDownloadItemResultCallback.Register(this, &FOnlineAsyncTaskSteamCoreUGCDownloadItem::OnDownloadItemResult);
	}

	FOnlineAsyncTaskSteamCoreUGCDownloadItem(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FPublishedFileID PublishedFileID, const bool bHighPriority, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_PublishedFileID(PublishedFileID)
		  , bHighPriority(bHighPriority)
	{
		OnDownloadItemResultCallback.Register(this, &FOnlineAsyncTaskSteamCoreUGCDownloadItem::OnDownloadItemResult);
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

	virtual ~FOnlineAsyncTaskSteamCoreUGCDownloadItem() override
	{
		OnDownloadItemResultCallback.Unregister();
	}

private:
	FOnlineAsyncTaskSteamCoreUGCDownloadItem() = delete;
protected:
	DownloadItemResult_t m_CallbackResults;
	FPublishedFileID m_PublishedFileID;
	bool bHighPriority;
protected:
	STEAM_CALLBACK_MANUAL(FOnlineAsyncTaskSteamCoreUGCDownloadItem, OnDownloadItemResult, DownloadItemResult_t, OnDownloadItemResultCallback);
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCDownloadItem")); }
};
#endif