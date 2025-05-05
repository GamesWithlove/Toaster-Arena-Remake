/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#pragma once

#include "SteamUGCTypes.h"
#include "SteamCore/SteamCoreAsync.h"
#include "SteamUGCAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAddItemToFavoritesAsyncDelegate, const FUserFavoriteItemsListChanged&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreateItemAsyncDelegate, const FCreateItemResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSetUserItemVoteAsyncDelegate, const FSetUserItemVoteResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGetUserItemVoteAsyncDelegate, const FGetUserItemVoteResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRemoveItemFromFavoritesAsyncDelegate, const FUserFavoriteItemsListChanged&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSubscribeItemAsyncDelegate, const FRemoteStorageSubscribePublishedFileResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSendQueryUGCRequestAsyncDelegate, const FSteamUGCQueryCompleted&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAddAppDependencyResultAsyncDelegate, const FAddAppDependencyResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRemoveAppDependencyResultAsyncDelegate, const FRemoveAppDependencyResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAddUGCDependencyResultAsyncDelegate, const FAddUGCDependencyResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRemoveUGCDependencyResultAsyncDelegate, const FRemoveUGCDependencyResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDeleteItemResultAsyncDelegate, const FUGCDeleteItemResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGetAppDependenciesResultAsyncDelegate, const FGetAppDependenciesResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSubmitItemUpdateAsyncDelegate, const FSubmitItemUpdateResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartPlaytimeTrackingAsyncDelegate, const FStartPlaytimeTrackingResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStopPlaytimeTrackingAsyncDelegate, const FStopPlaytimeTrackingResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStopPlaytimeTrackingForAllItemsAsyncDelegate, const FStopPlaytimeTrackingResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnsubscribeItemAsyncDelegate, const FRemoteStorageSubscribePublishedFileResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDownloadItemResultDelegate, const FDownloadItemResult&, Data, bool, bWasSuccessful);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnStopPlaytimeTrackingForAllItemsAsyncDelegate OnCallback;
public:
	/**
	* Stop tracking playtime of all workshop items.
	* When your app shuts down, playtime tracking will automatically stop.
	*
	* @param	Timeout		How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Stop Playtime Tracking For All Items", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* StopPlaytimeTrackingForAllItemsAsync(UObject* WorldContextObject, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionStopPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionStopPlaytimeTracking : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnStopPlaytimeTrackingAsyncDelegate OnCallback;
public:
	/**
	* Stop tracking playtime on a set of workshop items.
	* When your app shuts down, playtime tracking will automatically stop.
	*
	* @param	PublishedFileIDs	The array of workshop items you want to stop tracking. (Maximum of 100 items.)
	* @param	Timeout				How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Stop Playtime Tracking", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionStopPlaytimeTracking* StopPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> PublishedFileIDs, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionStartPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionStartPlaytimeTracking : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnStartPlaytimeTrackingAsyncDelegate OnCallback;
public:
	/**
	* Start tracking playtime on a set of workshop items.
	* When your app shuts down, playtime tracking will automatically stop.
	*
	* @param	PublishedFileIDs		The array of workshop items you want to start tracking. (Maximum of 100 items.)
	* @param	Timeout					How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Start Playtime Tracking", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionStartPlaytimeTracking* StartPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> PublishedFileIDs, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FStartPlaytimeTrackingResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionUnsubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionUnsubscribeItem : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnUnsubscribeItemAsyncDelegate OnCallback;
public:
	/**
	* Unsubscribe from a workshop item. This will result in the item being removed after the game quits.
	*
	* @param	PublishedFileIDs		The workshop item to unsubscribe from.
	* @param	Timeout					How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Unsubscribe Item", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionUnsubscribeItem* UnsubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileIDs, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionSubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionSubscribeItem : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnSubscribeItemAsyncDelegate OnCallback;
public:
	/**
	* Subscribe to a workshop item. It will be downloaded and installed as soon as possible.
	*
	* @param	PublishedFileIDs		The workshop item to subscribe to.
	* @param	Timeout					How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Subscribe Item", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionSubscribeItem* SubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileIDs, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionRemoveItemFromFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionRemoveItemFromFavorites : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnRemoveItemFromFavoritesAsyncDelegate OnCallback;
public:
	/**
	* Removes a workshop item from the users favorites list.
	*
	* @param	AppId					The app ID that this item belongs to.
	* @param	PublishedFileID			The workshop item to remove from the users favorites list.
	* @param	Timeout					How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Remove Item from Favorites", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionRemoveItemFromFavorites* RemoveItemFromFavoritesAsync(UObject* WorldContextObject, int32 AppId, FPublishedFileID PublishedFileID, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionAddItemToFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionAddItemToFavorites : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnAddItemToFavoritesAsyncDelegate OnCallback;
public:
	/**
	* Adds a workshop item to the users favorites list.
	*
	* @param	AppId				The app ID that this item belongs to.
	* @param	PublishedFileID		The workshop item to add to the users favorites list.
	* @param	Timeout				How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Add Item to Favorites", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionAddItemToFavorites* AddItemToFavoritesAsync(UObject* WorldContextObject, int32 AppId, FPublishedFileID PublishedFileID, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionGetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionGetUserItemVote : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnGetUserItemVoteAsyncDelegate OnCallback;
public:
	/**
	* Gets the users vote status on a workshop item.
	*
	* @param	PublishedFileID		The workshop item ID to get the users vote.
	* @param	Timeout				How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get User Item Vote", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionGetUserItemVote* GetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FGetUserItemVoteResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionSetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionSetUserItemVote : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnSetUserItemVoteAsyncDelegate OnCallback;
public:
	/**
	* Allows the user to rate a workshop item up or down.
	*
	* @param	PublishedFileID		The workshop item ID to vote on.
	* @param	bVoteUp				Vote up (true) or down (false)?
	* @param	Timeout				How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Set User Item Vote", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionSetUserItemVote* SetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, bool bVoteUp, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FSetUserItemVoteResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionSubmitItemUpdate
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionSubmitItemUpdate : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnSubmitItemUpdateAsyncDelegate OnCallback;
public:
	/**
	* Uploads the changes made to an item to the Steam Workshop.
	* You can track the progress of an item update with GetItemUpdateProgress.
	*
	* @param	Handle			The update handle to submit.
	* @param	ChangeNote		A brief description of the changes made. (Optional, set to NULL for no change note)
	* @param	Timeout			How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Submit Item Update", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionSubmitItemUpdate* SubmitItemUpdateAsync(UObject* WorldContextObject, FUGCUpdateHandle Handle, FString ChangeNote, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FSubmitItemUpdateResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionCreateItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionCreateItem : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnCreateItemAsyncDelegate OnCallback;
public:
	/**
	* Creates a new workshop item with no content attached yet.
	*
	* @param	ConsumerAppID		The App ID that will be using this item.
	* @param	FileType			The type of UGC to create.
	* @param	Timeout				How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Create Item", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionCreateItem* CreateItemAsync(UObject* WorldContextObject, int32 ConsumerAppID, ESteamWorkshopFileType FileType, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FCreateItemResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionSendQueryUGCRequest
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionSendQueryUGCRequest : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnSendQueryUGCRequestAsyncDelegate OnCallback;
public:
	/**
	* Send a UGC query to Steam.
	* This must be called with a handle obtained from CreateQueryUserUGCRequest, CreateQueryAllUGCRequest, or CreateQueryUGCDetailsRequest to actually send the request to Steam. Before calling this you should use one or more of the following APIs to customize your query:
	* AddRequiredTag, AddExcludedTag, SetReturnOnlyIDs, SetReturnKeyValueTags, SetReturnLongDescription, SetReturnMetaData, SetReturnChildren, SetReturnAdditionalPreviews, SetReturnTotalOnly, SetLanguage, SetAllowCachedResponse, SetCloudFileNameFilter, SetMatchAnyTag, SetSearchText, SetRankedByTrendDays, AddRequiredKeyValueTag
	*
	* @param	Handle		The UGC query request handle to send.
	* @param	Timeout		How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Send Query UGC Request", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionSendQueryUGCRequest* SendQueryUGCRequestAsync(UObject* WorldContextObject, FUGCQueryHandle Handle, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FSteamUGCQueryCompleted& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionAddAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionAddAppDependency : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnAddAppDependencyResultAsyncDelegate OnCallback;
public:
	/**
	* Adds a dependency between the given item and the appid.
	* This list of dependencies can be retrieved by calling GetAppDependencies.
	* This is a soft-dependency that is displayed on the web.
	* It is up to the application to determine whether the item can actually be used or not.
	*
	* @param	PublishedFileID		The item.
	* @param	AppId				The required app/dlc.
	* @param	Timeout				How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Add App Dependency", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionAddAppDependency* AddAppDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, int32 AppId, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FAddAppDependencyResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionRemoveAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionRemoveAppDependency : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnRemoveAppDependencyResultAsyncDelegate OnCallback;
public:
	/**
	* Removes the dependency between the given item and the appid. This list of dependencies can be retrieved by calling GetAppDependencies.
	*
	* @param	PublishedFileID		The item.
	* @param	AppId				The app/dlc.
	* @param	Timeout				How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Remove App Dependency", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionRemoveAppDependency* RemoveAppDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, int32 AppId, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FRemoveAppDependencyResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionAddUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionAddUGCDependency : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnAddUGCDependencyResultAsyncDelegate OnCallback;
public:
	/**
	* Adds a workshop item as a dependency to the specified item.
	* If the nParentPublishedFileID item is of type k_EWorkshopFileTypeCollection, than the nChildPublishedFileID is simply added to that collection.
	* Otherwise, the dependency is a soft one that is displayed on the web and can be retrieved via the ISteamUGC
	* API using a combination of the m_unNumChildren member variable of the SteamUGCDetails_t struct and GetQueryUGCChildren.
	*
	* @param	PublishedFileID			The workshop item to add a dependency to.
	* @param	ChildPublishedFileID	The dependency to add to the parent.
	* @param	Timeout					How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Add Dependency", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionAddUGCDependency* AddDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileID, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FAddUGCDependencyResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionRemoveUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionRemoveUGCDependency : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnRemoveUGCDependencyResultAsyncDelegate OnCallback;
public:
	/**
	* Removes a workshop item as a dependency from the specified item.
	*
	* @param	PublishedFileID				The workshop item to remove a dependency from.
	* @param	ChildPublishedFileID		The dependency to remove from the parent.
	* @param	Timeout						How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Remove Dependency", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionRemoveUGCDependency* RemoveDependencyAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileID, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FRemoveUGCDependencyResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionDeleteItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionDeleteItem : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnDeleteItemResultAsyncDelegate OnCallback;
public:
	/**
	* Deletes the item without prompting the user.
	*
	* @param	PublishedFileID		The item to delete.
	* @param	Timeout				How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Delete Item", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionDeleteItem* DeleteItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FUGCDeleteItemResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionGetAppDependencies
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionGetAppDependencies : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnGetAppDependenciesResultAsyncDelegate OnCallback;
public:
	/**
	* Get the app dependencies associated with the given PublishedFileId_t.
	* These are "soft" dependencies that are shown on the web.
	* It is up to the application to determine whether an item can be used or not.
	*
	* @param	PublishedFileID		The workshop item to get app dependencies for.
	* @param	Timeout				How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get App Dependencies", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionGetAppDependencies* GetAppDependenciesAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FGetAppDependenciesResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionDownloadItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionDownloadItem : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnDownloadItemResultDelegate OnCallback;
public:
	/**
	* Download or update a workshop item.
	*
	* If the return value is true then register and wait for the Callback DownloadItemResult_t before calling GetItemInstallInfo or accessing the workshop item on disk.
	* If the user is not subscribed to the item (e.g. a Game Server using anonymous login), the workshop item will be downloaded and cached temporarily.
	* If the workshop item has an item state of k_EItemStateNeedsUpdate, then this function can be called to initiate the update.
	* Do not access the workshop item on disk until the Callback DownloadItemResult_t is called.
	* The DownloadItemResult_t callback contains the app ID associated with the workshop item. It should be compared against the running app ID as the handler
	* will be called for all item downloads regardless of the running application.
	*
	* @param	PublishedFileID		The workshop item to download.
	* @param	bHighPriority		Start the download in high priority mode, pausing any existing in-progress Steam downloads and immediately begin downloading this workshop item.
	* @param	Timeout				How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Download Item", BlueprintInternalUseOnly="true"), Category = "SteamCore|UGC|Async")
	static USteamCoreUGCAsyncActionDownloadItem* DownloadItemAsync(UObject* WorldContextObject, FPublishedFileID PublishedFileID, bool bHighPriority, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FDownloadItemResult& Data, bool bWasSuccessful);
};
