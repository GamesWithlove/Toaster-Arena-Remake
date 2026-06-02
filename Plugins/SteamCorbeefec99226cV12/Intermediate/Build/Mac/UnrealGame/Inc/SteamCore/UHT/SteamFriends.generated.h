// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamFriends/SteamFriends.h"

#ifdef STEAMCORE_SteamFriends_generated_h
#error "SteamFriends.generated.h already included, missing '#pragma once' in SteamFriends.h"
#endif
#define STEAMCORE_SteamFriends_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class ESteamActivateGameOverlayToWebPageMode : uint8;
enum class ESteamChatEntryType : uint8;
enum class ESteamFriendFlags : uint8;
enum class ESteamFriendRelationship : uint8;
enum class ESteamOverlayToStoreFlag : uint8;
enum class ESteamPersonaState : uint8;
enum class ESteamUserRestriction : uint8;
struct FSteamFriendsGroupID;
struct FSteamGameID;
struct FSteamID;

// ********** Begin Class UFriends *****************************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriends_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetRichPresence); \
	DECLARE_FUNCTION(execSetPlayedWith); \
	DECLARE_FUNCTION(execSetPersonaName); \
	DECLARE_FUNCTION(execSetListenForFriendsMessages); \
	DECLARE_FUNCTION(execSetInGameVoiceSpeaking); \
	DECLARE_FUNCTION(execSendClanChatMessage); \
	DECLARE_FUNCTION(execRequestUserInformation); \
	DECLARE_FUNCTION(execRequestFriendRichPresence); \
	DECLARE_FUNCTION(execRequestClanOfficerList); \
	DECLARE_FUNCTION(execReplyToFriendMessage); \
	DECLARE_FUNCTION(execOpenClanChatWindowInSteam); \
	DECLARE_FUNCTION(execLeaveClanChatRoom); \
	DECLARE_FUNCTION(execJoinClanChatRoom); \
	DECLARE_FUNCTION(execIsUserInSource); \
	DECLARE_FUNCTION(execIsFollowing); \
	DECLARE_FUNCTION(execIsClanChatWindowOpenInSteam); \
	DECLARE_FUNCTION(execActivateGameOverlayInviteDialogConnectString); \
	DECLARE_FUNCTION(execRegisterProtocolInOverlayBrowser); \
	DECLARE_FUNCTION(execIsClanOfficialGameGroup); \
	DECLARE_FUNCTION(execIsClanPublic); \
	DECLARE_FUNCTION(execIsClanChatAdmin); \
	DECLARE_FUNCTION(execInviteUserToGame); \
	DECLARE_FUNCTION(execHasFriend); \
	DECLARE_FUNCTION(execGetUserRestrictions); \
	DECLARE_FUNCTION(execGetSmallFriendAvatar); \
	DECLARE_FUNCTION(execGetPlayerNickname); \
	DECLARE_FUNCTION(execGetPlayerNickname_Pure); \
	DECLARE_FUNCTION(execGetPersonaState); \
	DECLARE_FUNCTION(execGetPersonaState_Pure); \
	DECLARE_FUNCTION(execGetPersonaName); \
	DECLARE_FUNCTION(execGetPersonaName_Pure); \
	DECLARE_FUNCTION(execGetMediumFriendAvatar); \
	DECLARE_FUNCTION(execGetLargeFriendAvatar); \
	DECLARE_FUNCTION(execGetFriendSteamLevel); \
	DECLARE_FUNCTION(execGetFriendsGroupName); \
	DECLARE_FUNCTION(execGetFriendsGroupMembersList); \
	DECLARE_FUNCTION(execGetFriendsGroupMembersCount); \
	DECLARE_FUNCTION(execGetFriendsGroupIDByIndex); \
	DECLARE_FUNCTION(execGetFriendsGroupCount); \
	DECLARE_FUNCTION(execGetFriendRichPresenceKeyCount); \
	DECLARE_FUNCTION(execGetFriendRichPresenceKeyByIndex); \
	DECLARE_FUNCTION(execGetFriendRichPresence); \
	DECLARE_FUNCTION(execGetFriendRelationship); \
	DECLARE_FUNCTION(execGetFriendPersonaState); \
	DECLARE_FUNCTION(execGetFriendPersonaNameHistory); \
	DECLARE_FUNCTION(execGetFriendPersonaName); \
	DECLARE_FUNCTION(execGetFriendMessage); \
	DECLARE_FUNCTION(execGetFriendGamePlayed); \
	DECLARE_FUNCTION(execGetFriendFromSourceByIndex); \
	DECLARE_FUNCTION(execGetFriendCountFromSource); \
	DECLARE_FUNCTION(execGetFriendCount); \
	DECLARE_FUNCTION(execGetFriendCoplayTime); \
	DECLARE_FUNCTION(execGetFriendCoplayGame); \
	DECLARE_FUNCTION(execGetFriendByIndex); \
	DECLARE_FUNCTION(execGetFollowerCount); \
	DECLARE_FUNCTION(execGetCoplayFriendCount); \
	DECLARE_FUNCTION(execGetCoplayFriend); \
	DECLARE_FUNCTION(execGetClanTag); \
	DECLARE_FUNCTION(execGetClanOwner); \
	DECLARE_FUNCTION(execGetClanOfficerCount); \
	DECLARE_FUNCTION(execGetClanOfficerByIndex); \
	DECLARE_FUNCTION(execGetClanName); \
	DECLARE_FUNCTION(execGetClanCount); \
	DECLARE_FUNCTION(execGetClanChatMessage); \
	DECLARE_FUNCTION(execGetClanChatMemberCount); \
	DECLARE_FUNCTION(execGetClanByIndex); \
	DECLARE_FUNCTION(execGetClanActivityCounts); \
	DECLARE_FUNCTION(execGetChatMemberByIndex); \
	DECLARE_FUNCTION(execEnumerateFollowingList); \
	DECLARE_FUNCTION(execDownloadClanActivityCounts); \
	DECLARE_FUNCTION(execCloseClanChatWindowInSteam); \
	DECLARE_FUNCTION(execClearRichPresence); \
	DECLARE_FUNCTION(execActivateGameOverlayToWebPage); \
	DECLARE_FUNCTION(execActivateGameOverlayToUser); \
	DECLARE_FUNCTION(execActivateGameOverlayToStore); \
	DECLARE_FUNCTION(execActivateGameOverlayInvitedialog); \
	DECLARE_FUNCTION(execActivateGameOverlay);


struct Z_Construct_UClass_UFriends_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_UFriends_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriends_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFriends(); \
	friend struct ::Z_Construct_UClass_UFriends_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_UFriends_NoRegister(); \
public: \
	DECLARE_CLASS2(UFriends, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_UFriends_NoRegister) \
	DECLARE_SERIALIZER(UFriends)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriends_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFriends(UFriends&&) = delete; \
	UFriends(const UFriends&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFriends); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFriends); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFriends) \
	NO_API virtual ~UFriends();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriends_h_14_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriends_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriends_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriends_h_17_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriends_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFriends;

// ********** End Class UFriends *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriends_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
