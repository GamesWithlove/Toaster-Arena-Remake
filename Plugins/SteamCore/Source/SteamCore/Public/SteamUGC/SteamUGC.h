/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamUGCTypes.h"
#include "SteamUGC.generated.h"

UCLASS()
class STEAMCORE_API UUGC : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UUGC() { SubsystemType = ESteamSubsystem::UGC; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UGC|Delegates")
	FOnItemInstalled ItemInstalled;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UGC|Delegates")
	FOnDownloadItemResult DownloadItemResult;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Adds a dependency between the given item and the appid. 
	*
	* This list of dependencies can be retrieved by calling GetAppDependencies. 
	* This is a soft-dependency that is displayed on the web. 
	* It is up to the application to determine whether the item can actually be used or not.
	*
	* @param	PublishedFileID		The item.
	* @param	AppId				The required app/dlc.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "Callback"))
	void AddAppDependency(const FOnAddAppDependencyResult& Callback, FPublishedFileID PublishedFileID, int32 AppId);

	/**
	* Adds a workshop item as a dependency to the specified item. 
	*
	* If the nParentPublishedFileID item is of type k_EWorkshopFileTypeCollection, than the nChildPublishedFileID is simply added to that collection. 
	* Otherwise, the dependency is a soft one that is displayed on the web and can be retrieved via the ISteamUGC 
	* API using a combination of the m_unNumChildren member variable of the SteamUGCDetails_t struct and GetQueryUGCChildren.
	*
	* @param	PublishedFileID			The workshop item to add a dependency to.
	* @param	ChildPublishedFileID	The dependency to add to the parent.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "Callback"))
	void AddDependency(const FOnAddUGCDependencyResult& Callback, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileID);

	/**
	* Adds a excluded tag to a pending UGC Query. This will only return UGC without the specified tag.
	*
	* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.
	*
	* @param	Handle		The UGC query Handle to customize.
	* @param	TagName		The tag that must NOT be attached to the UGC to receive it.	
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool AddExcludedTag(FUGCQueryHandle Handle, FString TagName);

	/**
	* Adds a Key-Value tag pair to an item. Keys can map to multiple different Values (1-to-many relationship).
	*
	* Key names are restricted to alpha-numeric characters and the '_' character.
	* Both Keys and Values cannot exceed 255 characters in length.
	* Key-Value tags are searchable by exact match only.
	* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.
	*
	* @param	Handle			The workshop item update Handle to customize.
	* @param	Key				The Key to set on the item.
	* @param	Value			A Value to map to the Key.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool AddItemKeyValueTag(FUGCUpdateHandle Handle, FString Key, FString Value);

	/**
	* Adds an additional preview file for the item.
	*
	* Then the format of the image should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.
	* NOTE: Using k_EItemPreviewType_YouTubeVideo or k_EItemPreviewType_Sketchfab are not currently supported with this API. For YouTube videos you should use AddItemPreviewVideo.
	* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.
	*
	* @param	Handle			The workshop item update Handle to customize.
	* @param	PreviewFile		Absolute path to the local image.
	* @param	Type			The type of this preview.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool AddItemPreviewFile(FUGCUpdateHandle Handle, FString PreviewFile, ESteamItemPreviewType Type);

	/**
	* Adds an additional video preview from YouTube for the item.
	*
	* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.
	*	
	* @param	Handle			The workshop item update Handle to customize.
	* @param	VideoID			The YouTube video ID to add. (e.g. "jHgZh4GV9G0")
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool AddItemPreviewVideo(FUGCUpdateHandle Handle, FString VideoID);

	/**
	* Adds a workshop item to the users favorites list.
	*
	* @param	AppId				The app ID that this item belongs to.
	* @param	PublishedFileID		The workshop item to add to the users favorites list.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "Callback"))
	void AddItemToFavorites(const FOnAddItemToFavorites& Callback, int32 AppId, FPublishedFileID PublishedFileID);

	/**
	* Adds a required Key-Value tag to a pending UGC Query. This will only return workshop items that have a Key = pKey and a Value = pValue.
	*
	* @param	Handle		The UGC query Handle to customize.
	* @param	Key			The Key-Value Key that must be attached to the UGC to receive it.
	* @param	Value		The Key-Value Value associated with pKey that must be attached to the UGC to receive it.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool AddRequiredKeyValueTag(FUGCQueryHandle Handle, FString Key, FString Value);

	/**
	* Adds a required tag to a pending UGC Query. This will only return UGC with the specified tag.
	*	
	* @param	Handle		The UGC query Handle to customize.
	* @param	TagName		The tag that must be attached to the UGC to receive it.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool AddRequiredTag(FUGCQueryHandle Handle, FString TagName);

	/**
	* Match any of the tags in this group
	*
	* Notes: Only available in UE4.27+
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool AddRequiredTagGroup(FUGCQueryHandle Handle, TArray<FString> TagGroups);

	/**
	* Lets game servers set a specific workshop folder before issuing any UGC commands.
	*
	* This is helpful if you want to support multiple game servers running out of the same install folder.
	*
	* @param	WorkshopDepotID		The depot ID of the game server.
	* @param	Folder				The absolute path to store the workshop content.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool BInitWorkshopForGameServer(int32 WorkshopDepotID, FString Folder);

	/**
	* Creates a new workshop item with no content attached yet.
	*
	* @param	ConsumerAppID		The App ID that will be using this item.
	* @param	FileType			The type of UGC to create.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "Callback"))
	void CreateItem(const FOnCreateItem& Callback, int32 ConsumerAppID, ESteamWorkshopFileType FileType);

	/**
	* Query for all matching UGC. You can use this to list all of the available UGC for your app.
	*
	* This will return up to 50 results as declared by kNumUGCResultsPerPage. 
	* You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.
	* NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!
	* NOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!
	* To query for the UGC associated with a single user you can use CreateQueryUserUGCRequest instead.
	*
	*
	* @param	QueryType			Used to specify the sorting and filtering for this call.
	* @param	FileType			Used to specify the type of UGC queried for.
	* @param	CreatorAppID		This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.
	* @param	ConsumerAppID		This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!
	* @param	Page				The page number of the results to receive. This should start at 1 on the first call.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static FUGCQueryHandle CreateQueryAllUGCRequest(ESteamUGCQuery QueryType, ESteamUGCMatchingUGCType FileType, int32 CreatorAppID, int32 ConsumerAppID, int32 Page = 1);

	/**
	* Query for the details of specific workshop items.
	*
	* This will return up to 50 results as declared by kNumUGCResultsPerPage.
	* NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!
	* NOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!
	* To query all the UGC for your app you can use CreateQueryAllUGCRequest instead.
	*
	* @param	PublishedFileIDs		The list of workshop items to get the details for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static FUGCQueryHandle CreateQueryUGCDetailsRequest(TArray<FPublishedFileID> PublishedFileIDs);

	/**
	* Query UGC associated with a user. You can use this to list the UGC the user is subscribed to amongst other things.
	*
	* This will return up to 50 results as declared by kNumUGCResultsPerPage. You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.
	* NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!
	* NOTE: You must release the Handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!
	* To query all the UGC for your app you can use CreateQueryAllUGCRequest instead.
	*
	* @param	SteamID				The Account ID to query the UGC for. You can use CSteamID.GetAccountID to get the Account ID from a Steam ID.
	* @param	ListType			Used to specify the type of list to get. If the currently logged in user is different than the user specified in unAccountID, then some options are not be allowed. (k_EUserUGCList_VotedOn, k_EUserUGCList_VotedUp, k_EUserUGCList_VotedDown, k_EUserUGCList_WillVoteLater, k_EUserUGCList_Subscribed)
	* @param	MatchingUGCType		Used to specify the type of UGC queried for.
	* @param	SortOrder			Used to specify the order that the list will be sorted in.
	* @param	CreatorAppID		This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.
	* @param	ConsumerAppID		This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!
	* @param	Page				The page number of the results to receive. This should start at 1 on the first call.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static FUGCQueryHandle CreateQueryUserUGCRequest(FSteamID SteamID, ESteamUserUGCList ListType, ESteamUGCMatchingUGCType MatchingUGCType, ESteamUserUGCListSortOrder SortOrder, int32 CreatorAppID, int32 ConsumerAppID, int32 Page = 1);

	/**
	* Deletes the item without prompting the user.
	*
	* @param	PublishedFileID		The item to delete.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "Callback"))
	void DeleteItem(const FOnDeleteItemResult& Callback, FPublishedFileID PublishedFileID);

	/**
	* Download or update a workshop item.
	*
	* If the return Value is true then register and wait for the Callback DownloadItemResult_t before calling GetItemInstallInfo or accessing the workshop item on disk.
	* If the user is not subscribed to the item (e.g. a Game Server using anonymous login), the workshop item will be downloaded and cached temporarily.
	* If the workshop item has an item state of k_EItemStateNeedsUpdate, then this function can be called to initiate the update. 
	* Do not access the workshop item on disk until the Callback DownloadItemResult_t is called.
	* The DownloadItemResult_t Callback contains the app ID associated with the workshop item. It should be compared against the running app ID as the Handler 
	* will be called for all item downloads regardless of the running application.
	*
	* @param	PublishedFileID		The workshop item to download.
	* @param	bHighPriority		Start the download in high priority mode, pausing any existing in-progress Steam downloads and immediately begin downloading this workshop item.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool DownloadItem(FPublishedFileID PublishedFileID, bool bHighPriority);

	/**
	* Get the app dependencies associated with the given PublishedFileId_t. 
	*
	* These are "soft" dependencies that are shown on the web. 
	* It is up to the application to determine whether an item can be used or not.
	*
	* @param	PublishedFileID		The workshop item to get app dependencies for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "Callback"))
	void GetAppDependencies(const FOnGetAppDependenciesResult& Callback, FPublishedFileID PublishedFileID);

	/**
	* Get info about a pending download of a workshop item that has k_EItemStateNeedsUpdate set.
	*
	* @param	PublishedFileID		The workshop item to get the download info for.
	* @param	BytesDownloaded		Returns the current bytes downloaded.
	* @param	BytesTotal			Returns the total bytes. This is only valid after the download has started.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool GetItemDownloadInfo(FPublishedFileID PublishedFileID, int32& BytesDownloaded, int32& BytesTotal);

	/**
	* Gets info about currently installed content on the disc for workshop items that have k_EItemStateInstalled set.
	*
	* Calling this sets the "used" flag on the workshop item for the current player and adds it to their k_EUserUGCList_UsedOrPlayed list.
	* If k_EItemStateLegacyItem is set then pchFolder contains the path to the legacy file itself, not a folder.
	*
	* @param	PublishedFileID		The workshop item to get the install info for.
	* @param	SizeOnDisk			Returns the size of the workshop item in bytes.
	* @param	Folder				Returns the absolute path to the folder containing the content by copying it.
	* @param	TimeStamp			Returns the time when the workshop item was last updated.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool GetItemInstallInfo(FPublishedFileID PublishedFileID, int32& SizeOnDisk, FString& Folder, int32& TimeStamp);

	/**
	* Gets the current state of a workshop item on this client.
	*
	* @param	PublishedFileID		The workshop item to get the state for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static int32 GetItemState(FPublishedFileID PublishedFileID, TArray<ESteamItemState>& States);

	/**
	* Gets the progress of an item update.
	*
	* @param	Handle				The update Handle to get the progress for.
	* @param	BytesProcessed		Returns the current number of bytes uploaded.
	* @param	BytesTotal			Returns the total number of bytes that will be uploaded.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static ESteamItemUpdateStatus GetItemUpdateProgress(FUGCUpdateHandle Handle, int32& BytesProcessed, int32& BytesTotal);

	/**
	* Gets the total number of items the current user is subscribed to for the game or application.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static int32 GetNumSubscribedItems();

	/**
	* Retrieve the details of an additional preview associated with an individual workshop item after receiving a querying UGC call result.
	*
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.
	* Before calling this you should call GetQueryUGCNumAdditionalPreviews to get number of additional previews.
	*
	* @param	Handle				The UGC query Handle to get the results from.
	* @param	Index				The index of the item to get the details of.
	* @param	PreviewIndex		The index of the additional preview to get the details of.
	* @param	URLOrVideoID		Returns a URL or Video ID by copying it into this string.
	* @param	OriginalFileName	Returns the original file name. May be set to NULL to not receive this.
	* @param	PreviewType			The type of preview that was returned.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool GetQueryUGCAdditionalPreview(FUGCQueryHandle Handle, int32 Index, int32 PreviewIndex, FString& URLOrVideoID, FString& OriginalFileName, ESteamItemPreviewType& PreviewType);

	/**
	* Retrieve the ids of any child items of an individual workshop item after receiving a querying UGC call result. 
	*
	* These items can either be a part of a collection or some other dependency (see AddDependency).
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.
	* You should create pvecPublishedFileID with m_unNumChildren provided in SteamUGCDetails_t after getting the UGC details with GetQueryUGCResult.
	*
	* @param	Handle				The UGC query Handle to get the results from.
	* @param	Index				The index of the item to get the details of.
	* @param	PublishedFileIDs	Returns the UGC children by setting this array.
	* @param	MaxEntries			The length of PublishedFileIDs.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool GetQueryUGCChildren(FUGCQueryHandle Handle, int32 Index, TArray<FPublishedFileID>& PublishedFileIDs, int32 MaxEntries);

	/**
	* Retrieve the details of a Key-Value tag associated with an individual workshop item after receiving a querying UGC call result.
	*
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.
	* Before calling this you should call GetQueryUGCNumKeyValueTags to get number of tags.
	*
	* @param	Handle				The UGC query Handle to get the results from.
	* @param	Index				The index of the item to get the details of.
	* @param	KeyValueTagIndex	The index of the tag to get the details of.
	* @param	Key					Returns the Key by copying it into this string.
	* @param	Value				Returns the Value by copying it into this string.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool GetQueryUGCKeyValueTag(FUGCQueryHandle Handle, int32 Index, int32 KeyValueTagIndex, FString& Key, FString& Value);

	/**
	* Retrieve the developer set metadata of an individual workshop item after receiving a querying UGC call result.
	*
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.
	*
	* @param	Handle			The UGC query Handle to get the results from.
	* @param	Index			The index of the item to get the details of.
	* @param	MetaData		Returns the url by copying it into this string.
	* @param	MetadataSize	The size of pchMetadata in bytes.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool GetQueryUGCMetadata(FUGCQueryHandle Handle, int32 Index, FString& MetaData, int32 MetadataSize);

	/**
	* Retrieve the number of additional previews of an individual workshop item after receiving a querying UGC call result.
	*
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.
	* You can then call GetQueryUGCAdditionalPreview to get the details of each additional preview.
	*
	* @param	Handle		The UGC query Handle to get the results from.
	* @param	Index		The index of the item to get the details of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static int32 GetQueryUGCNumAdditionalPreviews(FUGCQueryHandle Handle, int32 Index);

	/**
	* Retrieve the number of Key-Value tags of an individual workshop item after receiving a querying UGC call result.
	*
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.
	* You can then call GetQueryUGCKeyValueTag to get the details of each tag.
	*
	* @param	Handle		The UGC query Handle to get the results from.
	* @param	Index		The index of the item to get the details of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static int32 GetQueryUGCNumKeyValueTags(FUGCQueryHandle Handle, int32 Index);

	/**
	* Retrieve the URL to the preview image of an individual workshop item after receiving a querying UGC call result.
	*
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.
	* You can use this URL to download and display the preview image instead of having to download it using the m_hPreviewFile in the ISteamUGC::SteamUGCDetails_t struct.
	* 
	* @param	Handle		The UGC query Handle to get the results from.
	* @param	Index		The index of the item to get the details of.
	* @param	URL			Returns the url by copying it into this string.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool GetQueryUGCPreviewURL(FUGCQueryHandle Handle, int32 Index, FString& URL);

	/**
	* Retrieve the details of an individual workshop item after receiving a querying UGC call result.
	*
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.
	*
	* @param	Handle		The UGC query Handle to get the results from.
	* @param	Index		The index of the item to get the details of.
	* @param	Details		Returns the the UGC details.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool GetQueryUGCResult(FUGCQueryHandle Handle, int32 Index, FSteamUGCDetails& Details);

	/**
	* Notes: Only available in UE4.27+
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static int32 GetQueryUGCNumTags(FUGCQueryHandle Handle, int32 Index);

	/**
	* Notes: Only available in UE4.27+
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool GetQueryUGCTag(FUGCQueryHandle Handle, int32 Index, int32 IndexTag, FString& Value);

	/**
	* Notes: Only available in UE4.27+
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool GetQueryUGCTagDisplayName(FUGCQueryHandle Handle, int32 Index, int32 IndexTag, FString& Value);

	/**
	* Retrieve various statistics of an individual workshop item after receiving a querying UGC call result.
	*
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the Handle obtained from a successful SteamUGCQueryCompleted_t call result.
	*
	* @param	Handle		The UGC query Handle to get the results from.
	* @param	Index		The index of the item to get the details of.
	* @param	StatType	The statistic to retrieve.
	* @param	StatValue	Returns the Value associated with the specified statistic.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool GetQueryUGCStatistic(FUGCQueryHandle Handle, int32 Index, ESteamItemStatistic StatType, FString& StatValue);

	/**
	* Gets a list of all of the items the current user is subscribed to for the current game.
	*
	* You create an array with the size provided by GetNumSubscribedItems before calling this.
	*
	* @param	PublishedFileIDs	The array where the item ids will be copied into.
	* @param	MaxEntries				The maximum number of items to return. This should typically be the same as GetNumSubscribedItems and the same size as pvecPublishedFileID.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static int32 GetSubscribedItems(TArray<FPublishedFileID>& PublishedFileIDs, int32 MaxEntries);

	/**
	* Gets the users vote status on a workshop item.
	*
	* @param	PublishedFileID		The workshop item ID to get the users vote.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "Callback"))
	void GetUserItemVote(const FOnGetUserItemVote& Callback, FPublishedFileID PublishedFileID);

	/**
	* Releases a UGC query Handle when you are done with it to free up memory.
	*
	* @param	Handle			The UGC query Handle to release.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool ReleaseQueryUGCRequest(FUGCQueryHandle Handle);

	/**
	* Removes the dependency between the given item and the appid. This list of dependencies can be retrieved by calling GetAppDependencies.
	*
	* @param	PublishedFileID		The item.
	* @param	AppId				The app/dlc.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "Callback"))
	void RemoveAppDependency(const FOnRemoveAppDependencyResult& Callback, FPublishedFileID PublishedFileID, int32 AppId);

	/**
	* Removes a workshop item as a dependency from the specified item.
	*
	* @param	ParentPublishedFileID		The workshop item to remove a dependency from.
	* @param	ChildPublishedFileID		The dependency to remove from the parent.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	void RemoveDependency(const FOnRemoveUGCDependencyResult& Callback, FPublishedFileID ParentPublishedFileID, FPublishedFileID ChildPublishedFileID);

	/**
	* Removes a workshop item from the users favorites list.
	*
	* @param	AppId					The app ID that this item belongs to.
	* @param	PublishedFileID			The workshop item to remove from the users favorites list.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "Callback"))
	void RemoveItemFromFavorites(const FOnRemoveItemFromFavorites& Callback, int32 AppId, FPublishedFileID PublishedFileID);

	/**
	* Removes an existing Key Value tag from an item.
	*
	* You can only call this up to 100 times per item update. If you need remove more tags than that you'll need to make subsequent item updates.
	* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.
	*
	* @param	Handle		The workshop item update Handle to customize.
	* @param	Key			The Key to remove from the item.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool RemoveItemKeyValueTags(FUGCUpdateHandle Handle, FString Key);

	/**
	* RemoveItemPreview
	*
	* @param	Handle		The workshop item update Handle to customize.
	* @param	Index
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool RemoveItemPreview(FUGCUpdateHandle Handle, int32 Index);

	/**
	* Send a UGC query to Steam.
	*
	* This must be called with a Handle obtained from CreateQueryUserUGCRequest, CreateQueryAllUGCRequest, or CreateQueryUGCDetailsRequest to actually send the request to Steam. Before calling this you should use one or more of the following APIs to customize your query:
	* AddRequiredTag, AddExcludedTag, SetReturnOnlyIDs, SetReturnKeyValueTags, SetReturnLongDescription, SetReturnMetadata, SetReturnChildren, SetReturnAdditionalPreviews, SetReturnTotalOnly, SetLanguage, SetAllowCachedResponse, SetCloudFileNameFilter, SetMatchAnyTag, SetSearchText, SetRankedByTrendDays, AddRequiredKeyValueTag
	*
	* @param	Handle		The UGC query request Handle to send.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "Callback"))
	void SendQueryUGCRequest(const FOnSendQueryUGCRequest& Callback, FUGCQueryHandle Handle);

	/**
	* Sets whether results will be returned from the cache for the specific period of time on a pending UGC Query.
	*
	* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.
	*
	* @param	Handle				The UGC query Handle to customize.
	* @param	MaxAgeSeconds		The maximum amount of time that an item can be returned without a cache invalidation.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetAllowCachedResponse(FUGCQueryHandle Handle, int32 MaxAgeSeconds);

	/**
	* Use legacy upload for a single small file (SDK 1.43+ Only)
	*
	* The parameter to SetItemContent() should either be a directory with one file or the full path to the file.  The file must also be less than 10MB in size.
	*
	* @param	Handle				The UGC query Handle to customize.
	* @param	bAllowLegacyUpload	
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	bool SetAllowLegacyUpload(FUGCUpdateHandle Handle, bool bAllowLegacyUpload);

	/**
	* Sets to only return items that have a specific filename on a pending UGC Query.
	*
	* NOTE: This can only be used with CreateQueryUserUGCRequest!
	* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.
	*
	* @param	Handle					The UGC query Handle to customize.
	* @param	MatchCloudFileName		The filename to match.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetCloudFileNameFilter(FUGCQueryHandle Handle, FString MatchCloudFileName);

	/**
	* Sets the folder that will be stored as the content for an item.
	*
	* For efficient upload and download, files should not be merged or compressed into single files (e.g. zip files).
	* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.
	*
	* @param	Handle			The workshop item update Handle to customize.
	* @param	ContentFolder	The absolute path to a local folder containing the content for the item.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetItemContent(FUGCUpdateHandle Handle, FString ContentFolder);

	/**
	* Sets a new description for an item.
	*
	* The description must be limited to the length defined by k_cchPublishedDocumentDescriptionMax.
	* You can set what language this is for by using SetItemUpdateLanguage, if no language is set then "english" is assumed.
	* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.
	*
	* @param	Handle			The workshop item update Handle to customize.
	* @param	Description		The new description of the item.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetItemDescription(FUGCUpdateHandle Handle, FString Description);

	/**
	* Sets arbitrary metadata for an item. This metadata can be returned from queries without having to download and install the actual content.
	*
	* The metadata must be limited to the size defined by k_cchDeveloperMetadataMax.
	* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.
	*
	* @param	Handle			The workshop item update Handle to customize.
	* @param	MetaData		The new metadata for this item.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetItemMetadata(FUGCUpdateHandle Handle, FString MetaData);

	/**
	* Sets the primary preview image for the item.
	*
	* The format should be one that both the web and the application (if necessary) can render. Suggested formats include JPG, PNG and GIF.
	* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.
	*
	* @param	Handle			The workshop item update Handle to customize.
	* @param	PreviewFile		The absolute path to a local preview image file for the item.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetItemPreview(FUGCUpdateHandle Handle, FString PreviewFile);

	/**
	* Sets arbitrary developer specified tags on an item.
	*
	* Each tag must be limited to 255 characters. Tag names can only include printable characters, excluding ','. For reference on what characters are allowed, refer to http://en.cppreference.com/w/c/string/byte/isprint
	* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.
	*
	* @param	Handle		The workshop item update Handle to customize.
	* @param	Tags		The list of tags to set on this item.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetItemTags(FUGCUpdateHandle Handle, TArray<FString> Tags);

	/**
	* Sets a new title for an item.
	*
	* The title must be limited to the size defined by k_cchPublishedDocumentTitleMax.
	* You can set what language this is for by using SetItemUpdateLanguage, if no language is set then "english" is assumed.
	* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.
	*
	* @param	Handle		The workshop item update Handle to customize.
	* @param	Title		The new title of the item.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetItemTitle(FUGCUpdateHandle Handle, FString Title);

	/**
	* Sets the language of the title and description that will be set in this item update.
	*
	* This must be in the format of the API language code.
	* If this is not set then "english" is assumed.
	* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.
	*
	* @param	Handle			The workshop item update Handle to customize.
	* @param	Language		The language of the title and description that will be set in this update.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetItemUpdateLanguage(FUGCUpdateHandle Handle, FString Language);

	/**
	* Sets the visibility of an item.
	*
	* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.
	*
	* @param	Handle			The workshop item update Handle to customize.
	* @param	Visibility		The visibility to set.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetItemVisibility(FUGCUpdateHandle Handle, ESteamRemoteStoragePublishedFileVisibility Visibility);

	/**
	* Sets the language to return the title and description in for the items on a pending UGC Query.
	*
	* This must be in the format of the API Language code.
	* If this is not set then "english" is assumed.
	* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.
	*
	* @param	Handle			The UGC query Handle to customize.
	* @param	Language		The language to return.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetLanguage(FUGCQueryHandle Handle, FString Language);

	/**
	* Sets whether workshop items will be returned if they have one or more matching tag, or if all tags need to match on a pending UGC Query.
	*
	* NOTE: This can only be used with CreateQueryAllUGCRequest!
	* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.
	*
	* @param	Handle			The UGC query Handle to customize.
	* @param	bMatchAnyTag	Should the item just need to have one required tag (true), or all of them? (false)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetMatchAnyTag(FUGCQueryHandle Handle, bool bMatchAnyTag);

	/**
	* Sets whether the order of the results will be updated based on the rank of items over a number of days on a pending UGC Query.
	*
	* NOTE: This can only be used with CreateQueryAllUGCRequest!
	* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.
	*
	* @param	Handle		The UGC query Handle to customize.
	* @param	Days		Sets the number of days to rank items over. Valid Values are 1-365 inclusive.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetRankedByTrendDays(FUGCQueryHandle Handle, int32 Days);

	/**
	* Sets whether to return any additional images/videos attached to the items on a pending UGC Query.
	*
	* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.
	*	
	* @param	Handle							The UGC query Handle to customize.
	* @param	bReturnAdditionalPreviews		Return the additional previews for the items?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetReturnAdditionalPreviews(FUGCQueryHandle Handle, bool bReturnAdditionalPreviews);

	/**
	* Sets whether to return the IDs of the child items of the items on a pending UGC Query.
	*
	* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.
	* 
	* @param	Handle				The UGC query Handle to customize.
	* @param	bReturnChildren		Return the IDs of children of the items?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetReturnChildren(FUGCQueryHandle Handle, bool bReturnChildren);

	/**
	* Sets whether to return any Key-Value tags for the items on a pending UGC Query.
	*
	* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.
	* 
	* @param	Handle					The UGC query Handle to customize.
	* @param	bReturnKeyValueTags		Return any Key-Value tags for the items?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetReturnKeyValueTags(FUGCQueryHandle Handle, bool bReturnKeyValueTags);

	/**
	* Sets whether to return the full description for the items on a pending UGC Query.
	*
	* If you don't set this then you only receive the summary which is the description truncated at 255 bytes.
	* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.
	*
	* @param	Handle						The UGC query Handle to customize.
	* @param	bReturnLongDescription		Return the long description for the items?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetReturnLongDescription(FUGCQueryHandle Handle, bool bReturnLongDescription);

	/**
	* Sets whether to return the developer specified metadata for the items on a pending UGC Query.
	*
	* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.
	*
	* @param	Handle				The UGC query Handle to customize.
	* @param	bReturnMetadata		Return the metadata for the items? 
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetReturnMetadata(FUGCQueryHandle Handle, bool bReturnMetadata);

	/** 
	* Sets whether to only return IDs instead of all the details on a pending UGC Query.
	*
	* This is useful for when you don't need all the information (e.g. you just want to get the IDs of the items a user has in their favorites list.)
	* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.
	*
	* @param	Handle				The UGC query Handle to customize.
	* @param	bReturnOnlyIDs		Return only the IDs of items?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetReturnOnlyIDs(FUGCQueryHandle Handle, bool bReturnOnlyIDs);

	/**
	* Sets whether to return the the playtime stats on a pending UGC Query.
	*
	* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.
	*
	* @param	Handle			The UGC query Handle to customize.
	* @param	Days			The number of days worth of playtime stats to return.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetReturnPlaytimeStats(FUGCQueryHandle Handle, int32 Days);

	/**
	* Sets whether to only return the the total number of matching items on a pending UGC Query.
	*
	* The actual items will not be returned when SteamUGCQueryCompleted_t is called.
	* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.
	*
	* @param	Handle				The UGC query Handle to customize.
	* @param	bReturnTotalOnly	Only return the total number of items?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetReturnTotalOnly(FUGCQueryHandle Handle, bool bReturnTotalOnly);

	/**
	* Sets a string to that items need to match in either the title or the description on a pending UGC Query.
	*
	* NOTE: This can only be used with CreateQueryAllUGCRequest!
	* NOTE: This must be set before you send a UGC Query Handle using SendQueryUGCRequest.
	* 
	* @param	Handle			The UGC query Handle to customize.
	* @param	SearchText		The text to be searched for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool SetSearchText(FUGCQueryHandle Handle, FString SearchText);

	/**
	* Allows the user to rate a workshop item up or down.
	*
	* @param	PublishedFileID		The workshop item ID to vote on.
	* @param	bVoteUp				Vote up (true) or down (false)?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "Callback"))
	void SetUserItemVote(const FOnSetUserItemVote& Callback, FPublishedFileID PublishedFileID, bool bVoteUp);

	/**
	* Starts the item update process.
	*
	* This gets you a Handle that you can use to modify the item before finally sending off the update to the server with SubmitItemUpdate.
	*
	* @param	ConsumerAppID		The App ID that will be using this item.
	* @param	PublishedFileID		The item to update.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static FUGCUpdateHandle StartItemUpdate(int32 ConsumerAppID, FPublishedFileID PublishedFileID);

	/**
	* Start tracking playtime on a set of workshop items.
	*
	* When your app shuts down, playtime tracking will automatically stop.
	*
	* @param	PublishedFileID		The array of workshop items you want to start tracking. (Maximum of 100 items.)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "Callback"))
	void StartPlaytimeTracking(const FOnStartPlaytimeTracking& Callback, TArray<FPublishedFileID> PublishedFileID);

	/**
	* Stop tracking playtime on a set of workshop items.
	*
	* When your app shuts down, playtime tracking will automatically stop.
	*
	* @param	PublishedFileIDs	The array of workshop items you want to stop tracking. (Maximum of 100 items.)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "Callback"))
	void StopPlaytimeTracking(const FOnStopPlaytimeTracking& Callback, TArray<FPublishedFileID> PublishedFileIDs);

	/**
	* Stop tracking playtime of all workshop items.
	*
	* When your app shuts down, playtime tracking will automatically stop.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "Callback"))
	void StopPlaytimeTrackingForAllItems(const FOnStopPlaytimeTrackingForAllItems& Callback);

	/**
	* Uploads the changes made to an item to the Steam Workshop.
	*
	* You can track the progress of an item update with GetItemUpdateProgress.
	*
	* @param	Handle			The update Handle to submit.
	* @param	ChangeNote		A brief description of the changes made. (Optional, set to NULL for no change note)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "Callback"))
	void SubmitItemUpdate(const FOnSubmitItemUpdate& Callback, FUGCUpdateHandle Handle, FString ChangeNote);

	/**
	* Subscribe to a workshop item. It will be downloaded and installed as soon as possible.
	*
	* @param	PublishedFileID		The workshop item to subscribe to.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "Callback"))
	void SubscribeItem(const FOnSubscribeItem& Callback, FPublishedFileID PublishedFileID);

	/**
	* Suspends and resumes all workshop downloads.
	*
	* If you call this with bSuspend set to true then downloads will be suspended until you resume them by setting bSuspend to false or when the game ends.
	*
	* @param	bSuspend	Suspend (true) or Resume (false) workshop downloads?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static void SuspendDownloads(bool bSuspend);

	/**
	* Unsubscribe from a workshop item. This will result in the item being removed after the game quits.
	*
	* @param	PublishedFileID		The workshop item to unsubscribe from.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "Callback"))
	void UnsubscribeItem(const FOnUnsubscribeItem& Callback, FPublishedFileID PublishedFileID);

	/**
	* Updates an existing additional preview file for the item.
	*
	* If the preview type is an image then the format should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.
	* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.
	*
	* @param	Handle			The workshop item update Handle to customize.
	* @param	index			The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.
	* @param	PreviewFile		Absolute path to the local image.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool UpdateItemPreviewFile(FUGCUpdateHandle Handle, int32 index, FString PreviewFile);

	/**
	* Updates an additional video preview from YouTube for the item.
	*
	* NOTE: This must be set before you submit the UGC update Handle using SubmitItemUpdate.
	*
	* @param	Handle				The workshop item update Handle to customize.
	* @param	Index				The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.
	* @param	PreviewVideo		The YouTube video to add. (e.g. "jHgZh4GV9G0")
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
	static bool UpdateItemPreviewVideo(FUGCUpdateHandle Handle, int32 Index, FString PreviewVideo);

protected:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
	STEAM_CALLBACK_MANUAL(UUGC, OnDownloadItemResult, DownloadItemResult_t, OnDownloadItemResultCallback);
	STEAM_CALLBACK_MANUAL(UUGC, OnItemInstalled, ItemInstalled_t, OnItemInstalledCallback);
#endif
};
