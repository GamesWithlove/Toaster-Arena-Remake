/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamFriends
*/

#pragma once

#include "SteamFriendsTypes.h"
#include "SteamCore/SteamCoreAsync.h"
#include "SteamFriendsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSetPersonaNameAsyncDelegate, const FSetPersonaNameResponse&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDownloadClanActivityCountsAsyncDelegate, const FDownloadClanActivityCountsResult&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRequestClanOfficerListAsyncDelegate, const FClanOfficerListResponse&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJoinClanChatRoomAsyncDelegate, const FJoinClanChatRoomCompletionResult&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEnumerateFollowingListAsyncDelegate, const FFriendsEnumerateFollowingList&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnIsFollowingAsyncDelegate, const FFriendsIsFollowing&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGetFollowerCountAsyncDelegate, const FFriendsGetFollowerCount&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRequestUserInformationAsyncDelegate);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionSetPersonaName
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreFriendsAsyncActionSetPersonaName : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnSetPersonaNameAsyncDelegate OnCallback;
public:
	/**
	* Sets the current users persona name, stores it on the server and publishes the changes to all friends who are online.
	* Changes take place locally immediately, and a PersonaStateChange_t callback is posted, presuming success.
	* If the name change fails to happen on the server, then an additional PersonaStateChange_t
	* callback will be posted to change the name back, in addition to the final result available in the call result.
	*
	* @param	Name		The users new persona name. Can not be longer than k_cchPersonaNameMax bytes.
	* @param	Timeout		How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Set Persona Name", BlueprintInternalUseOnly="true"), Category = "SteamCore|Friends|Async")
	static USteamCoreFriendsAsyncActionSetPersonaName* SetPersonaNameAsync(UObject* WorldContextObject, FString Name, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FSetPersonaNameResponse& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionDownloadClanActivityCounts
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreFriendsAsyncActionDownloadClanActivityCounts : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnDownloadClanActivityCountsAsyncDelegate OnCallback;
public:
	/**
	* Refresh the Steam Group activity data or get the data from groups other than one that the current
	* user is a member.
	* After receiving the callback you can then use GetClanActivityCounts to get the up to date user counts.
	*
	* @param	SteamIDClans	A list of steam groups to get the updated data for.
	* @param	Timeout			How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Download Clan Activity Counts", BlueprintInternalUseOnly="true"), Category = "SteamCore|Friends|Async")
	static USteamCoreFriendsAsyncActionDownloadClanActivityCounts* DownloadClanActivityCountsAsync(UObject* WorldContextObject, TArray<FSteamID> SteamIDClans, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FDownloadClanActivityCountsResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionRequestClanOfficerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreFriendsAsyncActionRequestClanOfficerList : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnRequestClanOfficerListAsyncDelegate OnCallback;
public:
	/**
	* Requests information about a Steam group officers (administrators and moderators).
	* You can only ask about Steam groups that a user is a member of.
	* This won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.
	*
	* @param	SteamIDClan		The Steam group to get the officers list for.
	* @param	Timeout			How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Request Clan Officer List", BlueprintInternalUseOnly="true"), Category = "SteamCore|Friends|Async")
	static USteamCoreFriendsAsyncActionRequestClanOfficerList* RequestClanOfficerListAsync(UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FClanOfficerListResponse& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionJoinClanChatRoom
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreFriendsAsyncActionJoinClanChatRoom : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnJoinClanChatRoomAsyncDelegate OnCallback;
public:
	/**
	* Allows the user to join Steam group (clan) chats right within the game.
	* The behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.
	* You can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.
	*
	* @param	SteamIDClan		The Steam ID of the Steam group to join.
	* @param	Timeout			How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Join Clan Chat Room", BlueprintInternalUseOnly="true"), Category = "SteamCore|Friends|Async")
	static USteamCoreFriendsAsyncActionJoinClanChatRoom* JoinClanChatRoomAsync(UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FJoinClanChatRoomCompletionResult& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionEnumerateFollowingList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreFriendsAsyncActionEnumerateFollowingList : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnEnumerateFollowingListAsyncDelegate OnCallback;
public:
	/**
	* Gets the list of users that the current user is following.
	* You can be following people that are not your friends.
	* Following allows you to receive updates when the person does things like
	* post a new piece of content to the Steam Workshop.
	*
	* @param	StartIndex	The index to start receiving followers from. This should be 0 on the initial call.
	* @param	Timeout		How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Enumerate Following List", BlueprintInternalUseOnly="true"), Category = "SteamCore|Friends|Async")
	static USteamCoreFriendsAsyncActionEnumerateFollowingList* EnumerateFollowingListAsync(UObject* WorldContextObject, int32 StartIndex, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FFriendsEnumerateFollowingList& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionIsFollowing
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreFriendsAsyncActionIsFollowing : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnIsFollowingAsyncDelegate OnCallback;
public:
	/**
	* Checks if the current user is following the specified user.
	*
	* @param	SteamID		The Steam ID of the check if we are following.
	* @param	Timeout		How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Is Following", BlueprintInternalUseOnly="true"), Category = "SteamCore|Friends|Async")
	static USteamCoreFriendsAsyncActionIsFollowing* IsFollowingAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FFriendsIsFollowing& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionGetFollowerCount
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreFriendsAsyncActionGetFollowerCount : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnGetFollowerCountAsyncDelegate OnCallback;
public:
	/**
	* Gets the number of users following the specified user.
	*
	* @param	SteamID		The user to get the follower count for.
	* @param	Timeout		How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Follower Count", BlueprintInternalUseOnly="true"), Category = "SteamCore|Friends|Async")
	static USteamCoreFriendsAsyncActionGetFollowerCount* GetFollowerCountAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FFriendsGetFollowerCount& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionRequestUserInformation
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreFriendsAsyncActionRequestUserInformation : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnRequestUserInformationAsyncDelegate OnCallback;
public:
	/**
	* Requests the persona name and optionally the avatar of a specified user.
	*
	* Using this node you don't have to bind any OnPersonaStateChange callback delegate, it's handled automatically with this node.
	*
	* @param	Timeout		How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Request User Information (Async)", BlueprintInternalUseOnly="true"), Category = "SteamCore|Friends|Async")
	static USteamCoreFriendsAsyncActionRequestUserInformation* RequestUserInformationAsync(UObject* WorldContextObject, FSteamID SteamIDUser, bool bRequireNameOnly, float Timeout = 10.f);

protected:
	FSteamID m_SteamIDUser;
	bool m_bRequireNameOnly;
public:
	virtual void Activate() override;

	UFUNCTION()
	void HandleCallback();
private:
#if ENABLE_STEAMCORE
	STEAM_CALLBACK_MANUAL(USteamCoreFriendsAsyncActionRequestUserInformation, OnPersonaStateChange, PersonaStateChange_t, OnPersonaStateChangeCallback);
#endif
};
