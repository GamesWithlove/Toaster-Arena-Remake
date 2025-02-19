// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamFriends/SteamFriends.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
#include "SteamCore/Public/SteamFriends/SteamFriendsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamFriends() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UFriends();
	STEAMCORE_API UClass* Z_Construct_UClass_UFriends_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamActivateGameOverlayToWebPageMode();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatEntryType();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamFriendFlags();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamFriendRelationship();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamOverlayToStoreFlag();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPersonaState();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserRestriction();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAvatarImageLoaded__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnClanOfficerListResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCounts__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingList__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFriendRichPresenceUpdate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedChatJoin__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedChatLeave__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedClanChatMsg__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedFriendChatMsg__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameLobbyJoinRequested__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameOverlayActivated__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameRichPresenceJoinRequested__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameServerChangeRequested__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCount__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIsFollowing__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoom__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomCompletionResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnPersonaStateChange__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerList__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaName__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameResponse__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamFriendsGroupID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	DEFINE_FUNCTION(UFriends::execSetRichPresence)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::SetRichPresence(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execSetPlayedWith)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUserPlayedWith);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::SetPlayedWith(Z_Param_SteamIDUserPlayedWith);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execSetPersonaName)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPersonaName(FOnSetPersonaName(Z_Param_Out_Callback),Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execSetListenForFriendsMessages)
	{
		P_GET_UBOOL(Z_Param_bInterceptEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::SetListenForFriendsMessages(Z_Param_bInterceptEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execSetInGameVoiceSpeaking)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_UBOOL(Z_Param_bSpeaking);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::SetInGameVoiceSpeaking(Z_Param_SteamIDUser,Z_Param_bSpeaking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execSendClanChatMessage)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::SendClanChatMessage(Z_Param_SteamIDClanChat,Z_Param_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execRequestUserInformation)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_UBOOL(Z_Param_bRequireNameOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::RequestUserInformation(Z_Param_SteamIDUser,Z_Param_bRequireNameOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execRequestFriendRichPresence)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::RequestFriendRichPresence(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execRequestClanOfficerList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestClanOfficerList(FOnRequestClanOfficerList(Z_Param_Out_Callback),Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execReplyToFriendMessage)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_GET_PROPERTY(FStrProperty,Z_Param_MsgToSend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::ReplyToFriendMessage(Z_Param_SteamIDFriend,Z_Param_MsgToSend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execOpenClanChatWindowInSteam)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::OpenClanChatWindowInSteam(Z_Param_SteamIDClanChat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execLeaveClanChatRoom)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::LeaveClanChatRoom(Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execJoinClanChatRoom)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinClanChatRoom(FOnJoinClanChatRoom(Z_Param_Out_Callback),Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsUserInSource)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::IsUserInSource(Z_Param_SteamIDUser,Z_Param_SteamIDSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsFollowing)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IsFollowing(FOnIsFollowing(Z_Param_Out_Callback),Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsClanChatWindowOpenInSteam)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::IsClanChatWindowOpenInSteam(Z_Param_SteamIDClanChat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execActivateGameOverlayInviteDialogConnectString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ActivateGameOverlayInviteDialogConnectString(Z_Param_ConnectString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execRegisterProtocolInOverlayBrowser)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Protocol);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::RegisterProtocolInOverlayBrowser(Z_Param_Protocol);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsClanOfficialGameGroup)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::IsClanOfficialGameGroup(Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsClanPublic)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::IsClanPublic(Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsClanChatAdmin)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::IsClanChatAdmin(Z_Param_SteamIDClanChat,Z_Param_steamIDUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execInviteUserToGame)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::InviteUserToGame(Z_Param_SteamIDFriend,Z_Param_ConnectString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execHasFriend)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_GET_TARRAY(ESteamFriendFlags,Z_Param_Flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::HasFriend(Z_Param_SteamIDFriend,Z_Param_Flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetUserRestrictions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ESteamUserRestriction>*)Z_Param__Result=UFriends::GetUserRestrictions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetSmallFriendAvatar)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UFriends::GetSmallFriendAvatar(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPlayerNickname)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetPlayerNickname(Z_Param_steamIDPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPlayerNickname_Pure)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetPlayerNickname_Pure(Z_Param_steamIDPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPersonaState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamPersonaState*)Z_Param__Result=UFriends::GetPersonaState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPersonaState_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamPersonaState*)Z_Param__Result=UFriends::GetPersonaState_Pure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPersonaName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetPersonaName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPersonaName_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetPersonaName_Pure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetMediumFriendAvatar)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UFriends::GetMediumFriendAvatar(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetLargeFriendAvatar)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UFriends::GetLargeFriendAvatar(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendSteamLevel)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendSteamLevel(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendsGroupName)
	{
		P_GET_STRUCT(FSteamFriendsGroupID,Z_Param_FriendsGroupID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetFriendsGroupName(Z_Param_FriendsGroupID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendsGroupMembersList)
	{
		P_GET_STRUCT(FSteamFriendsGroupID,Z_Param_FriendsGroupID);
		P_GET_TARRAY_REF(FSteamID,Z_Param_Out_SteamIDMembers);
		P_GET_PROPERTY(FIntProperty,Z_Param_MembersCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::GetFriendsGroupMembersList(Z_Param_FriendsGroupID,Z_Param_Out_SteamIDMembers,Z_Param_MembersCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendsGroupMembersCount)
	{
		P_GET_STRUCT(FSteamFriendsGroupID,Z_Param_FriendsGroupID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendsGroupMembersCount(Z_Param_FriendsGroupID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendsGroupIDByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FriendGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamFriendsGroupID*)Z_Param__Result=UFriends::GetFriendsGroupIDByIndex(Z_Param_FriendGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendsGroupCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendsGroupCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendRichPresenceKeyCount)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendRichPresenceKeyCount(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendRichPresenceKeyByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_GET_PROPERTY(FIntProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetFriendRichPresenceKeyByIndex(Z_Param_SteamIDFriend,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendRichPresence)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetFriendRichPresence(Z_Param_SteamIDFriend,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendRelationship)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamFriendRelationship*)Z_Param__Result=UFriends::GetFriendRelationship(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendPersonaState)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamPersonaState*)Z_Param__Result=UFriends::GetFriendPersonaState(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendPersonaNameHistory)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_GET_PROPERTY(FIntProperty,Z_Param_PersonaName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetFriendPersonaNameHistory(Z_Param_SteamIDFriend,Z_Param_PersonaName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendPersonaName)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetFriendPersonaName(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendMessage)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_GET_PROPERTY(FIntProperty,Z_Param_MessageID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Text);
		P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_ChatEntryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendMessage(Z_Param_SteamIDFriend,Z_Param_MessageID,Z_Param_Out_Text,(ESteamChatEntryType&)(Z_Param_Out_ChatEntryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendGamePlayed)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_GET_STRUCT_REF(FSteamGameID,Z_Param_Out_GameID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_GameIP);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ConnectionPort);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_QueryPort);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::GetFriendGamePlayed(Z_Param_SteamIDFriend,Z_Param_Out_GameID,Z_Param_Out_GameIP,Z_Param_Out_ConnectionPort,Z_Param_Out_QueryPort,Z_Param_Out_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendFromSourceByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDSource);
		P_GET_PROPERTY(FIntProperty,Z_Param_Ifriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetFriendFromSourceByIndex(Z_Param_SteamIDSource,Z_Param_Ifriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendCountFromSource)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendCountFromSource(Z_Param_SteamIDSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendCount)
	{
		P_GET_TARRAY(ESteamFriendFlags,Z_Param_Flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendCount(Z_Param_Flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendCoplayTime)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendCoplayTime(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendCoplayGame)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendCoplayGame(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Ifriend);
		P_GET_TARRAY(ESteamFriendFlags,Z_Param_Flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetFriendByIndex(Z_Param_Ifriend,Z_Param_Flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFollowerCount)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFollowerCount(FOnGetFollowerCount(Z_Param_Out_Callback),Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetCoplayFriendCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetCoplayFriendCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetCoplayFriend)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CoplayFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetCoplayFriend(Z_Param_CoplayFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanTag)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetClanTag(Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanOwner)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetClanOwner(Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanOfficerCount)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetClanOfficerCount(Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanOfficerByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_GET_PROPERTY(FIntProperty,Z_Param_Officer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetClanOfficerByIndex(Z_Param_SteamIDClan,Z_Param_Officer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanName)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetClanName(Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetClanCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanChatMessage)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
		P_GET_PROPERTY(FIntProperty,Z_Param_MessageID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Text);
		P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_ChatEntryType);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDChatter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetClanChatMessage(Z_Param_SteamIDClanChat,Z_Param_MessageID,Z_Param_Out_Text,(ESteamChatEntryType&)(Z_Param_Out_ChatEntryType),Z_Param_Out_SteamIDChatter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanChatMemberCount)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetClanChatMemberCount(Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Clan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetClanByIndex(Z_Param_Clan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanActivityCounts)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Online);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InGame);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Chatting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::GetClanActivityCounts(Z_Param_SteamIDClan,Z_Param_Out_Online,Z_Param_Out_InGame,Z_Param_Out_Chatting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetChatMemberByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_GET_PROPERTY(FIntProperty,Z_Param_User);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetChatMemberByIndex(Z_Param_SteamIDClan,Z_Param_User);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execEnumerateFollowingList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnumerateFollowingList(FOnEnumerateFollowingList(Z_Param_Out_Callback),Z_Param_StartIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execDownloadClanActivityCounts)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_TARRAY(FSteamID,Z_Param_SteamIDClans);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DownloadClanActivityCounts(FOnDownloadClanActivityCounts(Z_Param_Out_Callback),Z_Param_SteamIDClans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execCloseClanChatWindowInSteam)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::CloseClanChatWindowInSteam(Z_Param_SteamIDClanChat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execClearRichPresence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ClearRichPresence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execActivateGameOverlayToWebPage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_ENUM(ESteamActivateGameOverlayToWebPageMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ActivateGameOverlayToWebPage(Z_Param_URL,ESteamActivateGameOverlayToWebPageMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execActivateGameOverlayToUser)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Dialog);
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ActivateGameOverlayToUser(Z_Param_Dialog,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execActivateGameOverlayToStore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_ENUM(ESteamOverlayToStoreFlag,Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ActivateGameOverlayToStore(Z_Param_AppID,ESteamOverlayToStoreFlag(Z_Param_Flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execActivateGameOverlayInvitedialog)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ActivateGameOverlayInvitedialog(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execActivateGameOverlay)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Dialog);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ActivateGameOverlay(Z_Param_Dialog);
		P_NATIVE_END;
	}
	void UFriends::StaticRegisterNativesUFriends()
	{
		UClass* Class = UFriends::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateGameOverlay", &UFriends::execActivateGameOverlay },
			{ "ActivateGameOverlayInvitedialog", &UFriends::execActivateGameOverlayInvitedialog },
			{ "ActivateGameOverlayInviteDialogConnectString", &UFriends::execActivateGameOverlayInviteDialogConnectString },
			{ "ActivateGameOverlayToStore", &UFriends::execActivateGameOverlayToStore },
			{ "ActivateGameOverlayToUser", &UFriends::execActivateGameOverlayToUser },
			{ "ActivateGameOverlayToWebPage", &UFriends::execActivateGameOverlayToWebPage },
			{ "ClearRichPresence", &UFriends::execClearRichPresence },
			{ "CloseClanChatWindowInSteam", &UFriends::execCloseClanChatWindowInSteam },
			{ "DownloadClanActivityCounts", &UFriends::execDownloadClanActivityCounts },
			{ "EnumerateFollowingList", &UFriends::execEnumerateFollowingList },
			{ "GetChatMemberByIndex", &UFriends::execGetChatMemberByIndex },
			{ "GetClanActivityCounts", &UFriends::execGetClanActivityCounts },
			{ "GetClanByIndex", &UFriends::execGetClanByIndex },
			{ "GetClanChatMemberCount", &UFriends::execGetClanChatMemberCount },
			{ "GetClanChatMessage", &UFriends::execGetClanChatMessage },
			{ "GetClanCount", &UFriends::execGetClanCount },
			{ "GetClanName", &UFriends::execGetClanName },
			{ "GetClanOfficerByIndex", &UFriends::execGetClanOfficerByIndex },
			{ "GetClanOfficerCount", &UFriends::execGetClanOfficerCount },
			{ "GetClanOwner", &UFriends::execGetClanOwner },
			{ "GetClanTag", &UFriends::execGetClanTag },
			{ "GetCoplayFriend", &UFriends::execGetCoplayFriend },
			{ "GetCoplayFriendCount", &UFriends::execGetCoplayFriendCount },
			{ "GetFollowerCount", &UFriends::execGetFollowerCount },
			{ "GetFriendByIndex", &UFriends::execGetFriendByIndex },
			{ "GetFriendCoplayGame", &UFriends::execGetFriendCoplayGame },
			{ "GetFriendCoplayTime", &UFriends::execGetFriendCoplayTime },
			{ "GetFriendCount", &UFriends::execGetFriendCount },
			{ "GetFriendCountFromSource", &UFriends::execGetFriendCountFromSource },
			{ "GetFriendFromSourceByIndex", &UFriends::execGetFriendFromSourceByIndex },
			{ "GetFriendGamePlayed", &UFriends::execGetFriendGamePlayed },
			{ "GetFriendMessage", &UFriends::execGetFriendMessage },
			{ "GetFriendPersonaName", &UFriends::execGetFriendPersonaName },
			{ "GetFriendPersonaNameHistory", &UFriends::execGetFriendPersonaNameHistory },
			{ "GetFriendPersonaState", &UFriends::execGetFriendPersonaState },
			{ "GetFriendRelationship", &UFriends::execGetFriendRelationship },
			{ "GetFriendRichPresence", &UFriends::execGetFriendRichPresence },
			{ "GetFriendRichPresenceKeyByIndex", &UFriends::execGetFriendRichPresenceKeyByIndex },
			{ "GetFriendRichPresenceKeyCount", &UFriends::execGetFriendRichPresenceKeyCount },
			{ "GetFriendsGroupCount", &UFriends::execGetFriendsGroupCount },
			{ "GetFriendsGroupIDByIndex", &UFriends::execGetFriendsGroupIDByIndex },
			{ "GetFriendsGroupMembersCount", &UFriends::execGetFriendsGroupMembersCount },
			{ "GetFriendsGroupMembersList", &UFriends::execGetFriendsGroupMembersList },
			{ "GetFriendsGroupName", &UFriends::execGetFriendsGroupName },
			{ "GetFriendSteamLevel", &UFriends::execGetFriendSteamLevel },
			{ "GetLargeFriendAvatar", &UFriends::execGetLargeFriendAvatar },
			{ "GetMediumFriendAvatar", &UFriends::execGetMediumFriendAvatar },
			{ "GetPersonaName", &UFriends::execGetPersonaName },
			{ "GetPersonaName_Pure", &UFriends::execGetPersonaName_Pure },
			{ "GetPersonaState", &UFriends::execGetPersonaState },
			{ "GetPersonaState_Pure", &UFriends::execGetPersonaState_Pure },
			{ "GetPlayerNickname", &UFriends::execGetPlayerNickname },
			{ "GetPlayerNickname_Pure", &UFriends::execGetPlayerNickname_Pure },
			{ "GetSmallFriendAvatar", &UFriends::execGetSmallFriendAvatar },
			{ "GetUserRestrictions", &UFriends::execGetUserRestrictions },
			{ "HasFriend", &UFriends::execHasFriend },
			{ "InviteUserToGame", &UFriends::execInviteUserToGame },
			{ "IsClanChatAdmin", &UFriends::execIsClanChatAdmin },
			{ "IsClanChatWindowOpenInSteam", &UFriends::execIsClanChatWindowOpenInSteam },
			{ "IsClanOfficialGameGroup", &UFriends::execIsClanOfficialGameGroup },
			{ "IsClanPublic", &UFriends::execIsClanPublic },
			{ "IsFollowing", &UFriends::execIsFollowing },
			{ "IsUserInSource", &UFriends::execIsUserInSource },
			{ "JoinClanChatRoom", &UFriends::execJoinClanChatRoom },
			{ "LeaveClanChatRoom", &UFriends::execLeaveClanChatRoom },
			{ "OpenClanChatWindowInSteam", &UFriends::execOpenClanChatWindowInSteam },
			{ "RegisterProtocolInOverlayBrowser", &UFriends::execRegisterProtocolInOverlayBrowser },
			{ "ReplyToFriendMessage", &UFriends::execReplyToFriendMessage },
			{ "RequestClanOfficerList", &UFriends::execRequestClanOfficerList },
			{ "RequestFriendRichPresence", &UFriends::execRequestFriendRichPresence },
			{ "RequestUserInformation", &UFriends::execRequestUserInformation },
			{ "SendClanChatMessage", &UFriends::execSendClanChatMessage },
			{ "SetInGameVoiceSpeaking", &UFriends::execSetInGameVoiceSpeaking },
			{ "SetListenForFriendsMessages", &UFriends::execSetListenForFriendsMessages },
			{ "SetPersonaName", &UFriends::execSetPersonaName },
			{ "SetPlayedWith", &UFriends::execSetPlayedWith },
			{ "SetRichPresence", &UFriends::execSetRichPresence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics
	{
		struct Friends_eventActivateGameOverlay_Parms
		{
			FString Dialog;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Dialog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::NewProp_Dialog = { "Dialog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventActivateGameOverlay_Parms, Dialog), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::NewProp_Dialog,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Activates the Steam Overlay to a specific dialog.\n\x09*\n\x09* @param\x09""Dialog\x09The dialog to open. Valid options are: \"friends\", \"community\", \"players\", \"settings\", \"officialgamegroup\", \"stats\", \"achievements\".\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Activates the Steam Overlay to a specific dialog.\n\n@param        Dialog  The dialog to open. Valid options are: \"friends\", \"community\", \"players\", \"settings\", \"officialgamegroup\", \"stats\", \"achievements\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ActivateGameOverlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::Friends_eventActivateGameOverlay_Parms), Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ActivateGameOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics
	{
		struct Friends_eventActivateGameOverlayInvitedialog_Parms
		{
			FSteamID SteamIDLobby;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventActivateGameOverlayInvitedialog_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::NewProp_SteamIDLobby,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Activates the Steam Overlay to open the invite dialog.\n\x09*\n\x09* Invitations sent from this dialog will be for the provided lobby.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby that selected users will be invited to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Activates the Steam Overlay to open the invite dialog.\n\nInvitations sent from this dialog will be for the provided lobby.\n\n@param        SteamIDLobby    The Steam ID of the lobby that selected users will be invited to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ActivateGameOverlayInvitedialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::Friends_eventActivateGameOverlayInvitedialog_Parms), Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics
	{
		struct Friends_eventActivateGameOverlayInviteDialogConnectString_Parms
		{
			FString ConnectString;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventActivateGameOverlayInviteDialogConnectString_Parms, ConnectString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::NewProp_ConnectString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Activates the game overlay to open an invite dialog that will send the provided Rich Presence connect string to selected friends\n\x09*\n\x09* Notes: Only available in UE4.27+\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Activates the game overlay to open an invite dialog that will send the provided Rich Presence connect string to selected friends\n\nNotes: Only available in UE4.27+" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ActivateGameOverlayInviteDialogConnectString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::Friends_eventActivateGameOverlayInviteDialogConnectString_Parms), Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics
	{
		struct Friends_eventActivateGameOverlayToStore_Parms
		{
			int32 AppID;
			ESteamOverlayToStoreFlag Flag;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flag_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventActivateGameOverlayToStore_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventActivateGameOverlayToStore_Parms, Flag), Z_Construct_UEnum_SteamCore_ESteamOverlayToStoreFlag, METADATA_PARAMS(nullptr, 0) }; // 937607471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_Flag_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_Flag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Activates the Steam Overlay to the Steam store page for the provided app.\n\x09*\n\x09* Using k_uAppIdInvalid brings the user to the front page of the Steam store.\n\x09*\n\x09* @param\x09""AppID\x09The app ID to show the store page of.\n\x09* @param\x09""Flag\x09""Flags to modify the behavior when the page opens.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Activates the Steam Overlay to the Steam store page for the provided app.\n\nUsing k_uAppIdInvalid brings the user to the front page of the Steam store.\n\n@param        AppID   The app ID to show the store page of.\n@param        Flag    Flags to modify the behavior when the page opens." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ActivateGameOverlayToStore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::Friends_eventActivateGameOverlayToStore_Parms), Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics
	{
		struct Friends_eventActivateGameOverlayToUser_Parms
		{
			FString Dialog;
			FSteamID SteamID;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Dialog;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::NewProp_Dialog = { "Dialog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventActivateGameOverlayToUser_Parms, Dialog), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventActivateGameOverlayToUser_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::NewProp_Dialog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Activates Steam Overlay to a specific dialog.\n\x09*\n\x09* \"steamid\" - Opens the overlay web browser to the specified user or groups profile.\n\x09* \"chat\" - Opens a chat window to the specified user, or joins the group chat.\n\x09* \"jointrade\" - Opens a window to a Steam Trading session that was started with the ISteamEconomy/StartTrade Web API.\n\x09* \"stats\" - Opens the overlay web browser to the specified user's stats.\n\x09* \"achievements\" - Opens the overlay web browser to the specified user's achievements.\n\x09* \"friendadd\" - Opens the overlay in minimal mode prompting the user to add the target user as a friend.\n\x09* \"friendremove\" - Opens the overlay in minimal mode prompting the user to remove the target friend.\n\x09* \"friendrequestaccept\" - Opens the overlay in minimal mode prompting the user to accept an incoming friend invite.\n\x09* \"friendrequestignore\" - Opens the overlay in minimal mode prompting the user to ignore an incoming friend invite.\n\x09*\n\x09* @param\x09""Dialog\x09\x09The dialog to open.\n\x09* @param\x09SteamID\x09\x09The Steam ID of the context to open this dialog to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Activates Steam Overlay to a specific dialog.\n\n\"steamid\" - Opens the overlay web browser to the specified user or groups profile.\n\"chat\" - Opens a chat window to the specified user, or joins the group chat.\n\"jointrade\" - Opens a window to a Steam Trading session that was started with the ISteamEconomy/StartTrade Web API.\n\"stats\" - Opens the overlay web browser to the specified user's stats.\n\"achievements\" - Opens the overlay web browser to the specified user's achievements.\n\"friendadd\" - Opens the overlay in minimal mode prompting the user to add the target user as a friend.\n\"friendremove\" - Opens the overlay in minimal mode prompting the user to remove the target friend.\n\"friendrequestaccept\" - Opens the overlay in minimal mode prompting the user to accept an incoming friend invite.\n\"friendrequestignore\" - Opens the overlay in minimal mode prompting the user to ignore an incoming friend invite.\n\n@param        Dialog          The dialog to open.\n@param        SteamID         The Steam ID of the context to open this dialog to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ActivateGameOverlayToUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::Friends_eventActivateGameOverlayToUser_Parms), Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics
	{
		struct Friends_eventActivateGameOverlayToWebPage_Parms
		{
			FString URL;
			ESteamActivateGameOverlayToWebPageMode Mode;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventActivateGameOverlayToWebPage_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventActivateGameOverlayToWebPage_Parms, Mode), Z_Construct_UEnum_SteamCore_ESteamActivateGameOverlayToWebPageMode, METADATA_PARAMS(nullptr, 0) }; // 1813413534
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Activates Steam Overlay web browser directly to the specified URL.\n\x09*\n\x09* @param\x09URL\x09\x09The webpage to open. (A fully qualified address with the protocol is required, e.g. \"http://www.steampowered.com\")\n\x09* @param\x09Mode\x09(SDK 1.46+ only)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Activates Steam Overlay web browser directly to the specified URL.\n\n@param        URL             The webpage to open. (A fully qualified address with the protocol is required, e.g. \"http://www.steampowered.com\")\n@param        Mode    (SDK 1.46+ only)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ActivateGameOverlayToWebPage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::Friends_eventActivateGameOverlayToWebPage_Parms), Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ClearRichPresence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ClearRichPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Clears all of the current user's Rich Presence key/values.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Clears all of the current user's Rich Presence key/values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ClearRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ClearRichPresence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ClearRichPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ClearRichPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ClearRichPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_ClearRichPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics
	{
		struct Friends_eventCloseClanChatWindowInSteam_Parms
		{
			FSteamID SteamIDClanChat;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventCloseClanChatWindowInSteam_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventCloseClanChatWindowInSteam_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventCloseClanChatWindowInSteam_Parms), &Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_SteamIDClanChat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Closes the specified Steam group chat room in the Steam UI.\n\x09*\n\x09* @param\x09SteamIDClanChat\x09\x09The Steam ID of the Steam group chat room to close.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Closes the specified Steam group chat room in the Steam UI.\n\n@param        SteamIDClanChat         The Steam ID of the Steam group chat room to close." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "CloseClanChatWindowInSteam", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::Friends_eventCloseClanChatWindowInSteam_Parms), Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics
	{
		struct Friends_eventDownloadClanActivityCounts_Parms
		{
			FScriptDelegate Callback;
			TArray<FSteamID> SteamIDClans;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClans_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIDClans;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventDownloadClanActivityCounts_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCounts__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_Callback_MetaData)) }; // 1134968030
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_SteamIDClans_Inner = { "SteamIDClans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_SteamIDClans = { "SteamIDClans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventDownloadClanActivityCounts_Parms, SteamIDClans), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_SteamIDClans_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_SteamIDClans,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Refresh the Steam Group activity data or get the data from groups other than one that the current user is a member.\n\x09*\n\x09* After receiving the Callback you can then use GetClanActivityCounts to get the up to date user counts.\n\x09*\n\x09* @param\x09SteamIDClans\x09""A list of steam groups to get the updated data for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Refresh the Steam Group activity data or get the data from groups other than one that the current user is a member.\n\nAfter receiving the Callback you can then use GetClanActivityCounts to get the up to date user counts.\n\n@param        SteamIDClans    A list of steam groups to get the updated data for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "DownloadClanActivityCounts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::Friends_eventDownloadClanActivityCounts_Parms), Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_DownloadClanActivityCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics
	{
		struct Friends_eventEnumerateFollowingList_Parms
		{
			FScriptDelegate Callback;
			int32 StartIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventEnumerateFollowingList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingList__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_Callback_MetaData)) }; // 1089905559
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventEnumerateFollowingList_Parms, StartIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_StartIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the list of users that the current user is following.\n\x09*\n\x09* You can be following people that are not your friends. \n\x09* Following allows you to receive updates when the person does things like \n\x09* post a new piece of content to the Steam Workshop.\n\x09*\n\x09* @param\x09StartIndex\x09The index to start receiving followers from. This should be 0 on the initial call.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the list of users that the current user is following.\n\nYou can be following people that are not your friends.\nFollowing allows you to receive updates when the person does things like\npost a new piece of content to the Steam Workshop.\n\n@param        StartIndex      The index to start receiving followers from. This should be 0 on the initial call." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "EnumerateFollowingList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::Friends_eventEnumerateFollowingList_Parms), Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_EnumerateFollowingList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics
	{
		struct Friends_eventGetChatMemberByIndex_Parms
		{
			FSteamID SteamIDClan;
			int32 User;
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UECodeGen_Private::FIntPropertyParams NewProp_User;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetChatMemberByIndex_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetChatMemberByIndex_Parms, User), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetChatMemberByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_SteamIDClan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_User,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam ID at the given index in a Steam group chat.\n\x09*\n\x09* You must call GetClanChatMemberCount before calling this.\n\x09* \n\x09* @param\x09SteamIDClan\x09\x09This MUST be the same source used in the previous call to GetClanChatMemberCount!\n\x09* @param\x09User\x09\x09\x09""An index between 0 and GetClanChatMemberCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the Steam ID at the given index in a Steam group chat.\n\nYou must call GetClanChatMemberCount before calling this.\n\n@param        SteamIDClan             This MUST be the same source used in the previous call to GetClanChatMemberCount!\n@param        User                    An index between 0 and GetClanChatMemberCount." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetChatMemberByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::Friends_eventGetChatMemberByIndex_Parms), Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetChatMemberByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics
	{
		struct Friends_eventGetClanActivityCounts_Parms
		{
			FSteamID SteamIDClan;
			int32 Online;
			int32 InGame;
			int32 Chatting;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Online;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InGame;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Chatting;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanActivityCounts_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_Online = { "Online", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanActivityCounts_Parms, Online), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_InGame = { "InGame", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanActivityCounts_Parms, InGame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_Chatting = { "Chatting", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanActivityCounts_Parms, Chatting), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventGetClanActivityCounts_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventGetClanActivityCounts_Parms), &Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_SteamIDClan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_Online,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_InGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_Chatting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the most recent information we have about what the users in a Steam Group are doing.\n\x09*\n\x09* This can only retrieve data that the local client knows about. \n\x09* To refresh the data or get data from a group other than one that the current \n\x09* user is a member of you must call DownloadClanActivityCounts.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam group to get the activity of.\n\x09* @param\x09Online\x09\x09\x09Returns the number of members that are online.\n\x09* @param\x09InGame\x09\x09\x09Returns the number members that are in game (excluding those with their status set to offline).\n\x09* @param\x09""Chatting\x09\x09Returns the number of members in the group chat room.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the most recent information we have about what the users in a Steam Group are doing.\n\nThis can only retrieve data that the local client knows about.\nTo refresh the data or get data from a group other than one that the current\nuser is a member of you must call DownloadClanActivityCounts.\n\n@param        SteamIDClan             The Steam group to get the activity of.\n@param        Online                  Returns the number of members that are online.\n@param        InGame                  Returns the number members that are in game (excluding those with their status set to offline).\n@param        Chatting                Returns the number of members in the group chat room." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanActivityCounts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::Friends_eventGetClanActivityCounts_Parms), Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanActivityCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanByIndex_Statics
	{
		struct Friends_eventGetClanByIndex_Parms
		{
			int32 Clan;
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Clan;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::NewProp_Clan = { "Clan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanByIndex_Parms, Clan), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::NewProp_Clan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam group's Steam ID at the given index.\n\x09*\n\x09* You must call GetClanCount before calling this.\n\x09*\n\x09* @param\x09""Clan\x09""An index between 0 and GetClanCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the Steam group's Steam ID at the given index.\n\nYou must call GetClanCount before calling this.\n\n@param        Clan    An index between 0 and GetClanCount." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::Friends_eventGetClanByIndex_Parms), Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics
	{
		struct Friends_eventGetClanChatMemberCount_Parms
		{
			FSteamID SteamIDClan;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanChatMemberCount_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanChatMemberCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::NewProp_SteamIDClan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Get the number of users in a Steam group chat.\n\x09*\n\x09* Large steam groups cannot be iterated by the local user.\n\x09* The current user must be in a lobby to retrieve the Steam IDs of other users in that lobby.\n\x09* This is used for iteration, after calling this then GetChatMemberByIndex can \n\x09* be used to get the Steam ID of each person in the chat.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam group to get the chat count of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Get the number of users in a Steam group chat.\n\nLarge steam groups cannot be iterated by the local user.\nThe current user must be in a lobby to retrieve the Steam IDs of other users in that lobby.\nThis is used for iteration, after calling this then GetChatMemberByIndex can\nbe used to get the Steam ID of each person in the chat.\n\n@param        SteamIDClan             The Steam group to get the chat count of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanChatMemberCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::Friends_eventGetClanChatMemberCount_Parms), Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanChatMemberCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics
	{
		struct Friends_eventGetClanChatMessage_Parms
		{
			FSteamID SteamIDClanChat;
			int32 MessageID;
			FString Text;
			ESteamChatEntryType ChatEntryType;
			FSteamID SteamIDChatter;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MessageID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDChatter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, MessageID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, ChatEntryType), Z_Construct_UEnum_SteamCore_ESteamChatEntryType, METADATA_PARAMS(nullptr, 0) }; // 172190028
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_SteamIDChatter = { "SteamIDChatter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, SteamIDChatter), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_SteamIDClanChat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_MessageID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_ChatEntryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_ChatEntryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_SteamIDChatter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the data from a Steam group chat room message.\n\x09*\n\x09* This should only ever be called in response to a GameConnectedClanChatMsg_t Callback.\n\x09*\n\x09* @param\x09SteamIDClanChat\x09\x09The Steam ID of the Steam group chat room.\n\x09* @param\x09MessageID\x09\x09\x09The index of the message. This should be the m_iMessageID field of GameConnectedClanChatMsg_t.\n\x09* @param\x09Text\x09\x09\x09\x09The buffer where the chat message will be copied into. (Should be big enough to hold 2048 UTF-8 characters. So 8192 bytes + 1 for '\\0')\n\x09* @param\x09""ChatEntryType\x09\x09Returns the type of chat entry that was received.\n\x09* @param\x09SteamIDChatter\x09\x09Returns the Steam ID of the user that sent the message.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the data from a Steam group chat room message.\n\nThis should only ever be called in response to a GameConnectedClanChatMsg_t Callback.\n\n@param        SteamIDClanChat         The Steam ID of the Steam group chat room.\n@param        MessageID                       The index of the message. This should be the m_iMessageID field of GameConnectedClanChatMsg_t.\n@param        Text                            The buffer where the chat message will be copied into. (Should be big enough to hold 2048 UTF-8 characters. So 8192 bytes + 1 for '\\0')\n@param        ChatEntryType           Returns the type of chat entry that was received.\n@param        SteamIDChatter          Returns the Steam ID of the user that sent the message." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanChatMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::Friends_eventGetClanChatMessage_Parms), Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanCount_Statics
	{
		struct Friends_eventGetClanCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of Steam groups that the current user is a member of.\n\x09*\n\x09* This is used for iteration, after calling this then GetClanByIndex can be used to get the Steam ID of each Steam group.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of Steam groups that the current user is a member of.\n\nThis is used for iteration, after calling this then GetClanByIndex can be used to get the Steam ID of each Steam group." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetClanCount_Statics::Friends_eventGetClanCount_Parms), Z_Construct_UFunction_UFriends_GetClanCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetClanCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanName_Statics
	{
		struct Friends_eventGetClanName_Parms
		{
			FSteamID SteamIDClan;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanName_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanName_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetClanName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanName_Statics::NewProp_SteamIDClan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the display name for the specified Steam group; if the local client knows about it.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam group to get the name of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the display name for the specified Steam group; if the local client knows about it.\n\n@param        SteamIDClan             The Steam group to get the name of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetClanName_Statics::Friends_eventGetClanName_Parms), Z_Construct_UFunction_UFriends_GetClanName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetClanName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics
	{
		struct Friends_eventGetClanOfficerByIndex_Parms
		{
			FSteamID SteamIDClan;
			int32 Officer;
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Officer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanOfficerByIndex_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_Officer = { "Officer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanOfficerByIndex_Parms, Officer), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanOfficerByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_SteamIDClan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_Officer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the officer at the given index in a Steam group.\n\x09*\n\x09* You must call GetClanOfficerCount before calling this.\n\x09*\x09\n\x09* @param\x09SteamIDClan\x09\x09This must be the same steam group used in the previous call to GetClanOfficerCount!\n\x09* @param\x09Officer\x09\x09\x09""An index between 0 and GetClanOfficerCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the Steam ID of the officer at the given index in a Steam group.\n\nYou must call GetClanOfficerCount before calling this.\n\n@param        SteamIDClan             This must be the same steam group used in the previous call to GetClanOfficerCount!\n@param        Officer                 An index between 0 and GetClanOfficerCount." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanOfficerByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::Friends_eventGetClanOfficerByIndex_Parms), Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanOfficerByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics
	{
		struct Friends_eventGetClanOfficerCount_Parms
		{
			FSteamID SteamIDClan;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanOfficerCount_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanOfficerCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::NewProp_SteamIDClan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of officers (administrators and moderators) in a specified Steam group.\n\x09*\n\x09* This also includes the owner of the Steam group.\n\x09* This is used for iteration, after calling this then GetClanOfficerByIndex can be used to get the Steam ID of each officer.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam group to get the officer count of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of officers (administrators and moderators) in a specified Steam group.\n\nThis also includes the owner of the Steam group.\nThis is used for iteration, after calling this then GetClanOfficerByIndex can be used to get the Steam ID of each officer.\n\n@param        SteamIDClan             The Steam group to get the officer count of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanOfficerCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::Friends_eventGetClanOfficerCount_Parms), Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanOfficerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanOwner_Statics
	{
		struct Friends_eventGetClanOwner_Parms
		{
			FSteamID SteamIDClan;
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanOwner_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanOwner_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOwner_Statics::NewProp_SteamIDClan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the owner of a Steam Group.\n\x09*\n\x09* You must call RequestClanOfficerList before this to get the required data!\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group to get the owner for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the owner of a Steam Group.\n\nYou must call RequestClanOfficerList before this to get the required data!\n\n@param        SteamIDClan             The Steam ID of the Steam group to get the owner for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetClanOwner_Statics::Friends_eventGetClanOwner_Parms), Z_Construct_UFunction_UFriends_GetClanOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetClanOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanTag_Statics
	{
		struct Friends_eventGetClanTag_Parms
		{
			FSteamID SteamIDClan;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanTag_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanTag_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetClanTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetClanTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanTag_Statics::NewProp_SteamIDClan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the unique tag (abbreviation) for the specified Steam group; If the local client knows about it.\n\x09*\n\x09* The Steam group abbreviation is a unique way for people to identify the group and is limited to 12 characters. \n\x09* In some games this will appear next to the name of group members.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam group to get the tag of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the unique tag (abbreviation) for the specified Steam group; If the local client knows about it.\n\nThe Steam group abbreviation is a unique way for people to identify the group and is limited to 12 characters.\nIn some games this will appear next to the name of group members.\n\n@param        SteamIDClan             The Steam group to get the tag of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetClanTag_Statics::Friends_eventGetClanTag_Parms), Z_Construct_UFunction_UFriends_GetClanTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetClanTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics
	{
		struct Friends_eventGetCoplayFriend_Parms
		{
			int32 CoplayFriend;
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CoplayFriend;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::NewProp_CoplayFriend = { "CoplayFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetCoplayFriend_Parms, CoplayFriend), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetCoplayFriend_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::NewProp_CoplayFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the recently played with user at the given index.\n\x09*\n\x09* You must call GetCoplayFriendCount before calling this.\n\x09*\n\x09* @param\x09""CoplayFriend\x09\x09""An index between 0 and GetCoplayFriendCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the Steam ID of the recently played with user at the given index.\n\nYou must call GetCoplayFriendCount before calling this.\n\n@param        CoplayFriend            An index between 0 and GetCoplayFriendCount." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetCoplayFriend", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::Friends_eventGetCoplayFriend_Parms), Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetCoplayFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics
	{
		struct Friends_eventGetCoplayFriendCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetCoplayFriendCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of players that the current users has recently played with, across all games.\n\x09*\n\x09* This is used for iteration, after calling this then GetCoplayFriend can be used to get the Steam ID of each player.\n\x09* These players are have been set with previous calls to SetPlayedWith.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of players that the current users has recently played with, across all games.\n\nThis is used for iteration, after calling this then GetCoplayFriend can be used to get the Steam ID of each player.\nThese players are have been set with previous calls to SetPlayedWith." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetCoplayFriendCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::Friends_eventGetCoplayFriendCount_Parms), Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetCoplayFriendCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFollowerCount_Statics
	{
		struct Friends_eventGetFollowerCount_Parms
		{
			FScriptDelegate Callback;
			FSteamID SteamID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFollowerCount_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCount__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_Callback_MetaData)) }; // 23195548
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFollowerCount_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of users following the specified user.\n\x09*\n\x09* @param\x09SteamID\x09\x09The user to get the follower count for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of users following the specified user.\n\n@param        SteamID         The user to get the follower count for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFollowerCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::Friends_eventGetFollowerCount_Parms), Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFollowerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics
	{
		struct Friends_eventGetFriendByIndex_Parms
		{
			int32 Ifriend;
			TArray<ESteamFriendFlags> Flags;
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ifriend;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_Ifriend = { "Ifriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendByIndex_Parms, Ifriend), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamCore_ESteamFriendFlags, METADATA_PARAMS(nullptr, 0) }; // 552801861
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendByIndex_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 552801861
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_Ifriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_Flags_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_Flags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the user at the given index.\n\x09*\n\x09* You must call GetFriendCount before calling this.\n\x09*\n\x09* @param\x09Ifriend\x09\x09\x09""An index between 0 and GetFriendCount.\n\x09* @param\x09""Flags\x09\x09""A combined union (binary \"or\") of EFriendFlags. This must be the same value as used in the previous call to GetFriendCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the Steam ID of the user at the given index.\n\nYou must call GetFriendCount before calling this.\n\n@param        Ifriend                 An index between 0 and GetFriendCount.\n@param        Flags           A combined union (binary \"or\") of EFriendFlags. This must be the same value as used in the previous call to GetFriendCount." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::Friends_eventGetFriendByIndex_Parms), Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics
	{
		struct Friends_eventGetFriendCoplayGame_Parms
		{
			FSteamID SteamIDFriend;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendCoplayGame_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendCoplayGame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the app ID of the game that user played with someone on their recently-played-with list.\n\x09*\n\x09* @param\x09SteamIDFriend\x09\x09The Steam ID of the user on the recently-played-with list to get the game played.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the app ID of the game that user played with someone on their recently-played-with list.\n\n@param        SteamIDFriend           The Steam ID of the user on the recently-played-with list to get the game played." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendCoplayGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::Friends_eventGetFriendCoplayGame_Parms), Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendCoplayGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics
	{
		struct Friends_eventGetFriendCoplayTime_Parms
		{
			FSteamID SteamIDFriend;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendCoplayTime_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendCoplayTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the timestamp of when the user played with someone on their recently-played-with list.\n\x09*\n\x09* @param\x09SteamIDFriend\x09\x09The Steam ID of the user on the recently-played-with list to get the game played.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the timestamp of when the user played with someone on their recently-played-with list.\n\n@param        SteamIDFriend           The Steam ID of the user on the recently-played-with list to get the game played." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendCoplayTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::Friends_eventGetFriendCoplayTime_Parms), Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendCoplayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendCount_Statics
	{
		struct Friends_eventGetFriendCount_Parms
		{
			TArray<ESteamFriendFlags> Flags;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamCore_ESteamFriendFlags, METADATA_PARAMS(nullptr, 0) }; // 552801861
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendCount_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 552801861
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_Flags_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_Flags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of users the client knows about who meet a specified criteria. (Friends, blocked, users on the same server, etc)\n\x09*\n\x09* This can be used to iterate over all of the users by calling GetFriendByIndex to get the Steam IDs of each user.\n\x09*\n\x09* @param\x09""Flags\x09\x09""A combined union (binary \"or\") of one or more EFriendFlags.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of users the client knows about who meet a specified criteria. (Friends, blocked, users on the same server, etc)\n\nThis can be used to iterate over all of the users by calling GetFriendByIndex to get the Steam IDs of each user.\n\n@param        Flags           A combined union (binary \"or\") of one or more EFriendFlags." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendCount_Statics::Friends_eventGetFriendCount_Parms), Z_Construct_UFunction_UFriends_GetFriendCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics
	{
		struct Friends_eventGetFriendCountFromSource_Parms
		{
			FSteamID SteamIDSource;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDSource;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::NewProp_SteamIDSource = { "SteamIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendCountFromSource_Parms, SteamIDSource), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendCountFromSource_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::NewProp_SteamIDSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Get the number of users in a source (Steam group, chat room, lobby, or game server).\n\x09*\n\x09* Large Steam groups cannot be iterated by the local user.\n\x09* If you're getting the number of lobby members then you should use ISteamMatchmaking::GetNumLobbyMembers instead.\n\x09* This is used for iteration, after calling this then GetFriendFromSourceByIndex can be used to get the Steam ID of each person in the source.\n\x09*\n\x09* @param\x09SteamIDSource\x09The Steam group, chat room, lobby or game server to get the user count of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Get the number of users in a source (Steam group, chat room, lobby, or game server).\n\nLarge Steam groups cannot be iterated by the local user.\nIf you're getting the number of lobby members then you should use ISteamMatchmaking::GetNumLobbyMembers instead.\nThis is used for iteration, after calling this then GetFriendFromSourceByIndex can be used to get the Steam ID of each person in the source.\n\n@param        SteamIDSource   The Steam group, chat room, lobby or game server to get the user count of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendCountFromSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::Friends_eventGetFriendCountFromSource_Parms), Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendCountFromSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics
	{
		struct Friends_eventGetFriendFromSourceByIndex_Parms
		{
			FSteamID SteamIDSource;
			int32 Ifriend;
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDSource;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ifriend;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_SteamIDSource = { "SteamIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendFromSourceByIndex_Parms, SteamIDSource), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_Ifriend = { "Ifriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendFromSourceByIndex_Parms, Ifriend), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendFromSourceByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_SteamIDSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_Ifriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam ID at the given index from a source (Steam group, chat room, lobby, or game server).\n\x09*\n\x09* You must call GetFriendCountFromSource before calling this.\n\x09*\n\x09* @param\x09SteamIDSource\x09\x09This MUST be the same source used in the previous call to GetFriendCountFromSource!\n\x09* @param\x09Ifriend\x09\x09\x09\x09""An index between 0 and GetFriendCountFromSource.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the Steam ID at the given index from a source (Steam group, chat room, lobby, or game server).\n\nYou must call GetFriendCountFromSource before calling this.\n\n@param        SteamIDSource           This MUST be the same source used in the previous call to GetFriendCountFromSource!\n@param        Ifriend                         An index between 0 and GetFriendCountFromSource." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendFromSourceByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::Friends_eventGetFriendFromSourceByIndex_Parms), Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics
	{
		struct Friends_eventGetFriendGamePlayed_Parms
		{
			FSteamID SteamIDFriend;
			FSteamGameID GameID;
			FString GameIP;
			int32 ConnectionPort;
			int32 QueryPort;
			FSteamID SteamIDLobby;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameIP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(nullptr, 0) }; // 419490198
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_GameIP = { "GameIP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, GameIP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, ConnectionPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, QueryPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventGetFriendGamePlayed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventGetFriendGamePlayed_Parms), &Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_GameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_GameIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_ConnectionPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_QueryPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the specified friend is in a game, and gets info about the game if they are.\n\x09*\n\x09* @param\x09SteamIDFriend\x09\x09The Steam ID of the other user.\n\x09* @param\x09GameID\x09\x09\x09\x09Game information\n\x09* @param\x09GameIP\x09\x09\x09\x09Game information\n\x09* @param\x09""ConnectionPort\x09\x09Game information\n\x09* @param\x09QueryPort\x09\x09\x09Game information\n\x09* @param\x09SteamIDLobby\x09\x09Game information\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if the specified friend is in a game, and gets info about the game if they are.\n\n@param        SteamIDFriend           The Steam ID of the other user.\n@param        GameID                          Game information\n@param        GameIP                          Game information\n@param        ConnectionPort          Game information\n@param        QueryPort                       Game information\n@param        SteamIDLobby            Game information" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendGamePlayed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::Friends_eventGetFriendGamePlayed_Parms), Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendGamePlayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendMessage_Statics
	{
		struct Friends_eventGetFriendMessage_Parms
		{
			FSteamID SteamIDFriend;
			int32 MessageID;
			FString Text;
			ESteamChatEntryType ChatEntryType;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MessageID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendMessage_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendMessage_Parms, MessageID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendMessage_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendMessage_Parms, ChatEntryType), Z_Construct_UEnum_SteamCore_ESteamChatEntryType, METADATA_PARAMS(nullptr, 0) }; // 172190028
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_MessageID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_ChatEntryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_ChatEntryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the data from a Steam friends message.\n\x09*\n\x09* This should only ever be called in response to a GameConnectedFriendChatMsg_t Callback.\n\x09*\n\x09* @param\x09SteamIDFriend\x09\x09The Steam ID of the friend that sent this message.\n\x09* @param\x09MessageID\x09\x09\x09The index of the message. This should be the m_iMessageID field of GameConnectedFriendChatMsg_t.\n\x09* @param\x09Text\x09\x09\x09\x09The buffer where the chat message will be copied into.\n\x09* @param\x09""ChatEntryType\x09\x09Returns the type of chat entry that was received.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the data from a Steam friends message.\n\nThis should only ever be called in response to a GameConnectedFriendChatMsg_t Callback.\n\n@param        SteamIDFriend           The Steam ID of the friend that sent this message.\n@param        MessageID                       The index of the message. This should be the m_iMessageID field of GameConnectedFriendChatMsg_t.\n@param        Text                            The buffer where the chat message will be copied into.\n@param        ChatEntryType           Returns the type of chat entry that was received." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::Friends_eventGetFriendMessage_Parms), Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics
	{
		struct Friends_eventGetFriendPersonaName_Parms
		{
			FSteamID SteamIDFriend;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendPersonaName_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendPersonaName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the specified user's persona (display) name.\n\x09*\n\x09* This will only be known to the current user if the other user is in their friends list, on the same game server, \n\x09* in a chat room or lobby, or in a small Steam group with the local user.\n\x09* Upon on first joining a lobby, chat room, or game server the current user will not known the name \n\x09* of the other users automatically; that information will arrive asynchronously via PersonaStateChange_t Callbacks.\n\x09* To get the persona name of the current user use GetPersonaName.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the other user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the specified user's persona (display) name.\n\nThis will only be known to the current user if the other user is in their friends list, on the same game server,\nin a chat room or lobby, or in a small Steam group with the local user.\nUpon on first joining a lobby, chat room, or game server the current user will not known the name\nof the other users automatically; that information will arrive asynchronously via PersonaStateChange_t Callbacks.\nTo get the persona name of the current user use GetPersonaName.\n\n@param        SteamIDFriend   The Steam ID of the other user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendPersonaName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::Friends_eventGetFriendPersonaName_Parms), Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendPersonaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics
	{
		struct Friends_eventGetFriendPersonaNameHistory_Parms
		{
			FSteamID SteamIDFriend;
			int32 PersonaName;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PersonaName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendPersonaNameHistory_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_PersonaName = { "PersonaName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendPersonaNameHistory_Parms, PersonaName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendPersonaNameHistory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_PersonaName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets one of the previous display names for the specified user.\n\x09*\n\x09* This only works for display names that the current user has seen on the local computer.\n\x09*\n\x09* @param\x09SteamIDFriend\x09\x09The Steam ID of the other user.\n\x09* @param\x09PersonaName\x09\x09\x09The index of the history to receive. 0 is their current persona name, 1 is their most recent before they changed it, etc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets one of the previous display names for the specified user.\n\nThis only works for display names that the current user has seen on the local computer.\n\n@param        SteamIDFriend           The Steam ID of the other user.\n@param        PersonaName                     The index of the history to receive. 0 is their current persona name, 1 is their most recent before they changed it, etc." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendPersonaNameHistory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::Friends_eventGetFriendPersonaNameHistory_Parms), Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics
	{
		struct Friends_eventGetFriendPersonaState_Parms
		{
			FSteamID SteamIDFriend;
			ESteamPersonaState ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendPersonaState_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendPersonaState_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamPersonaState, METADATA_PARAMS(nullptr, 0) }; // 918269663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the current status of the specified user.\n\x09*\n\x09* This will only be known to the current user if the other user is in their friends list, \n\x09* on the same game server, in a chat room or lobby, or in a small Steam group with the local user.\n\x09* To get the state of the current user use GetPersonaState.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the other user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the current status of the specified user.\n\nThis will only be known to the current user if the other user is in their friends list,\non the same game server, in a chat room or lobby, or in a small Steam group with the local user.\nTo get the state of the current user use GetPersonaState.\n\n@param        SteamIDFriend   The Steam ID of the other user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendPersonaState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::Friends_eventGetFriendPersonaState_Parms), Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendPersonaState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics
	{
		struct Friends_eventGetFriendRelationship_Parms
		{
			FSteamID SteamIDFriend;
			ESteamFriendRelationship ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendRelationship_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendRelationship_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamFriendRelationship, METADATA_PARAMS(nullptr, 0) }; // 1589675800
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets a relationship to a specified user.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the other user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets a relationship to a specified user.\n\n@param        SteamIDFriend   The Steam ID of the other user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendRelationship", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::Friends_eventGetFriendRelationship_Parms), Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendRelationship()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics
	{
		struct Friends_eventGetFriendRichPresence_Parms
		{
			FSteamID SteamIDFriend;
			FString Key;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendRichPresence_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendRichPresence_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendRichPresence_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Get a Rich Presence value from a specified friend.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The friend to get the Rich Presence value for.\n\x09* @param\x09Key\x09\x09\x09\x09The Rich Presence key to request.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Get a Rich Presence value from a specified friend.\n\n@param        SteamIDFriend   The friend to get the Rich Presence value for.\n@param        Key                             The Rich Presence key to request." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendRichPresence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::Friends_eventGetFriendRichPresence_Parms), Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendRichPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics
	{
		struct Friends_eventGetFriendRichPresenceKeyByIndex_Parms
		{
			FSteamID SteamIDFriend;
			int32 Key;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendRichPresenceKeyByIndex_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendRichPresenceKeyByIndex_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendRichPresenceKeyByIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets a Rich Presence key by index.\n\x09*\n\x09* @param\x09SteamIDFriend\x09This should be the same user provided to the previous call to GetFriendRichPresenceKeyCount!\n\x09* @param\x09Key\x09\x09\x09\x09""An index between 0 and GetFriendRichPresenceKeyCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets a Rich Presence key by index.\n\n@param        SteamIDFriend   This should be the same user provided to the previous call to GetFriendRichPresenceKeyCount!\n@param        Key                             An index between 0 and GetFriendRichPresenceKeyCount." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendRichPresenceKeyByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::Friends_eventGetFriendRichPresenceKeyByIndex_Parms), Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics
	{
		struct Friends_eventGetFriendRichPresenceKeyCount_Parms
		{
			FSteamID SteamIDFriend;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendRichPresenceKeyCount_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendRichPresenceKeyCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of Rich Presence keys that are set on the specified user.\n\x09*\n\x09* This is used for iteration, after calling this then GetFriendRichPresenceKeyByIndex to get the rich presence keys.\n\x09* This is typically only ever used for debugging purposes.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the user to get the Rich Presence Key Count of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of Rich Presence keys that are set on the specified user.\n\nThis is used for iteration, after calling this then GetFriendRichPresenceKeyByIndex to get the rich presence keys.\nThis is typically only ever used for debugging purposes.\n\n@param        SteamIDFriend   The Steam ID of the user to get the Rich Presence Key Count of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendRichPresenceKeyCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::Friends_eventGetFriendRichPresenceKeyCount_Parms), Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics
	{
		struct Friends_eventGetFriendsGroupCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendsGroupCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of friends groups (tags) the user has created.\n\x09*\n\x09* This is used for iteration, after calling this then GetFriendsGroupIDByIndex can be used to get the ID of each friend group.\n\x09* This is not to be confused with Steam groups. Those can be obtained with GetClanCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of friends groups (tags) the user has created.\n\nThis is used for iteration, after calling this then GetFriendsGroupIDByIndex can be used to get the ID of each friend group.\nThis is not to be confused with Steam groups. Those can be obtained with GetClanCount." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendsGroupCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::Friends_eventGetFriendsGroupCount_Parms), Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendsGroupCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics
	{
		struct Friends_eventGetFriendsGroupIDByIndex_Parms
		{
			int32 FriendGroup;
			FSteamFriendsGroupID ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_FriendGroup;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::NewProp_FriendGroup = { "FriendGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendsGroupIDByIndex_Parms, FriendGroup), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendsGroupIDByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(nullptr, 0) }; // 956054325
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::NewProp_FriendGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the friends group ID for the given index.\n\x09*\n\x09* @param\x09""FriendGroup\x09\x09""An index between 0 and GetFriendsGroupCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the friends group ID for the given index.\n\n@param        FriendGroup             An index between 0 and GetFriendsGroupCount." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendsGroupIDByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::Friends_eventGetFriendsGroupIDByIndex_Parms), Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics
	{
		struct Friends_eventGetFriendsGroupMembersCount_Parms
		{
			FSteamFriendsGroupID FriendsGroupID;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsGroupID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::NewProp_FriendsGroupID = { "FriendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendsGroupMembersCount_Parms, FriendsGroupID), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(nullptr, 0) }; // 956054325
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendsGroupMembersCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::NewProp_FriendsGroupID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of friends in a given friends group.\n\x09*\n\x09* This should be called before getting the list of friends with GetFriendsGroupMembersList.\n\x09*\n\x09* @param\x09""FriendsGroupID\x09\x09The friends group ID to get the number of friends in.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of friends in a given friends group.\n\nThis should be called before getting the list of friends with GetFriendsGroupMembersList.\n\n@param        FriendsGroupID          The friends group ID to get the number of friends in." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendsGroupMembersCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::Friends_eventGetFriendsGroupMembersCount_Parms), Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics
	{
		struct Friends_eventGetFriendsGroupMembersList_Parms
		{
			FSteamFriendsGroupID FriendsGroupID;
			TArray<FSteamID> SteamIDMembers;
			int32 MembersCount;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsGroupID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDMembers_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIDMembers;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MembersCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_FriendsGroupID = { "FriendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendsGroupMembersList_Parms, FriendsGroupID), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(nullptr, 0) }; // 956054325
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_SteamIDMembers_Inner = { "SteamIDMembers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_SteamIDMembers = { "SteamIDMembers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendsGroupMembersList_Parms, SteamIDMembers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_MembersCount = { "MembersCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendsGroupMembersList_Parms, MembersCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_FriendsGroupID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_SteamIDMembers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_SteamIDMembers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_MembersCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of friends in the given friends group.\n\x09*\n\x09* If fewer friends exist than requested those positions' Steam IDs will be invalid.\n\x09* You must call GetFriendsGroupMembersCount before calling this to set up the pOutSteamIDMembers array with an appropriate size!\n\x09*\n\x09* @param\x09""FriendsGroupID\x09\x09The friends group ID to get the members list of.\n\x09* @param\x09SteamIDMembers\x09\x09Returns the Steam IDs of the friends by setting them in this array.\n\x09* @param\x09MembersCount\x09\x09This should match the number of elements allocated pOutSteamIDMembers and the value returned by GetFriendsGroupMembersCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the number of friends in the given friends group.\n\nIf fewer friends exist than requested those positions' Steam IDs will be invalid.\nYou must call GetFriendsGroupMembersCount before calling this to set up the pOutSteamIDMembers array with an appropriate size!\n\n@param        FriendsGroupID          The friends group ID to get the members list of.\n@param        SteamIDMembers          Returns the Steam IDs of the friends by setting them in this array.\n@param        MembersCount            This should match the number of elements allocated pOutSteamIDMembers and the value returned by GetFriendsGroupMembersCount." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendsGroupMembersList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::Friends_eventGetFriendsGroupMembersList_Parms), Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics
	{
		struct Friends_eventGetFriendsGroupName_Parms
		{
			FSteamFriendsGroupID FriendsGroupID;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsGroupID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::NewProp_FriendsGroupID = { "FriendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendsGroupName_Parms, FriendsGroupID), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(nullptr, 0) }; // 956054325
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendsGroupName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::NewProp_FriendsGroupID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the name for the given friends group.\n\x09*\n\x09* @param\x09""FriendsGroupID\x09\x09The friends group ID to get the name of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the name for the given friends group.\n\n@param        FriendsGroupID          The friends group ID to get the name of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendsGroupName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::Friends_eventGetFriendsGroupName_Parms), Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendsGroupName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics
	{
		struct Friends_eventGetFriendSteamLevel_Parms
		{
			FSteamID SteamIDFriend;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendSteamLevel_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetFriendSteamLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam level of the specified user.\n\x09*\n\x09* You can use the local users Steam ID (ISteamUser::GetSteamID) to get their level.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the Steam level of the specified user.\n\nYou can use the local users Steam ID (ISteamUser::GetSteamID) to get their level.\n\n@param        SteamIDFriend   The Steam ID of the user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendSteamLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::Friends_eventGetFriendSteamLevel_Parms), Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendSteamLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics
	{
		struct Friends_eventGetLargeFriendAvatar_Parms
		{
			FSteamID SteamIDFriend;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetLargeFriendAvatar_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetLargeFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets a handle to the large (128*128px) avatar for the specified user.\n\x09*\n\x09* You can pass in ISteamUser::GetSteamID to get the current users avatar.\n\x09* This only works for users that the local user knows about. They will automatically know about their friends, \n\x09* people on leaderboards they've requested, or people in the same source as them \n\x09* (Steam group, chat room, lobby, or game server). If they don't know about them then you must call \n\x09* RequestUserInformation to cache the avatar locally.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets a handle to the large (128*128px) avatar for the specified user.\n\nYou can pass in ISteamUser::GetSteamID to get the current users avatar.\nThis only works for users that the local user knows about. They will automatically know about their friends,\npeople on leaderboards they've requested, or people in the same source as them\n(Steam group, chat room, lobby, or game server). If they don't know about them then you must call\nRequestUserInformation to cache the avatar locally.\n\n@param        SteamIDFriend   The Steam ID of the user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetLargeFriendAvatar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::Friends_eventGetLargeFriendAvatar_Parms), Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetLargeFriendAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics
	{
		struct Friends_eventGetMediumFriendAvatar_Parms
		{
			FSteamID SteamIDFriend;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetMediumFriendAvatar_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetMediumFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets a handle to the large (64*64px) avatar for the specified user.\n\x09*\n\x09* You can pass in ISteamUser::GetSteamID to get the current users avatar.\n\x09* This only works for users that the local user knows about. They will automatically know about their friends,\n\x09* people on leaderboards they've requested, or people in the same source as them\n\x09* (Steam group, chat room, lobby, or game server). If they don't know about them then you must call\n\x09* RequestUserInformation to cache the avatar locally.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets a handle to the large (64*64px) avatar for the specified user.\n\nYou can pass in ISteamUser::GetSteamID to get the current users avatar.\nThis only works for users that the local user knows about. They will automatically know about their friends,\npeople on leaderboards they've requested, or people in the same source as them\n(Steam group, chat room, lobby, or game server). If they don't know about them then you must call\nRequestUserInformation to cache the avatar locally.\n\n@param        SteamIDFriend   The Steam ID of the user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetMediumFriendAvatar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::Friends_eventGetMediumFriendAvatar_Parms), Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetMediumFriendAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPersonaName_Statics
	{
		struct Friends_eventGetPersonaName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetPersonaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetPersonaName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPersonaName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPersonaName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the current users persona (display) name.\n\x09*\n\x09* This is the same name that is displayed the users community profile page.\n\x09* To get the persona name of other users use GetFriendPersonaName.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the current users persona (display) name.\n\nThis is the same name that is displayed the users community profile page.\nTo get the persona name of other users use GetFriendPersonaName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPersonaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPersonaName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetPersonaName_Statics::Friends_eventGetPersonaName_Parms), Z_Construct_UFunction_UFriends_GetPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPersonaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPersonaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetPersonaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics
	{
		struct Friends_eventGetPersonaName_Pure_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetPersonaName_Pure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the current users persona (display) name.\n\x09*\n\x09* This is the same name that is displayed the users community profile page.\n\x09* To get the persona name of other users use GetFriendPersonaName.\n\x09*/" },
		{ "DisplayName", "Get Persona Name (Pure)" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the current users persona (display) name.\n\nThis is the same name that is displayed the users community profile page.\nTo get the persona name of other users use GetFriendPersonaName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPersonaName_Pure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::Friends_eventGetPersonaName_Pure_Parms), Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPersonaName_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPersonaState_Statics
	{
		struct Friends_eventGetPersonaState_Parms
		{
			ESteamPersonaState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetPersonaState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetPersonaState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetPersonaState_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamPersonaState, METADATA_PARAMS(nullptr, 0) }; // 918269663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPersonaState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPersonaState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the friend status of the current user.\n\x09*\n\x09* To get the state of other users use GetFriendPersonaState.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the friend status of the current user.\n\nTo get the state of other users use GetFriendPersonaState." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPersonaState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPersonaState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetPersonaState_Statics::Friends_eventGetPersonaState_Parms), Z_Construct_UFunction_UFriends_GetPersonaState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPersonaState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPersonaState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetPersonaState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics
	{
		struct Friends_eventGetPersonaState_Pure_Parms
		{
			ESteamPersonaState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetPersonaState_Pure_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamPersonaState, METADATA_PARAMS(nullptr, 0) }; // 918269663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the friend status of the current user.\n\x09*\n\x09* To get the state of other users use GetFriendPersonaState.\n\x09*/" },
		{ "DisplayName", "Get Persona State (Pure)" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the friend status of the current user.\n\nTo get the state of other users use GetFriendPersonaState." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPersonaState_Pure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::Friends_eventGetPersonaState_Pure_Parms), Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPersonaState_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics
	{
		struct Friends_eventGetPlayerNickname_Parms
		{
			FSteamID steamIDPlayer;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_steamIDPlayer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::NewProp_steamIDPlayer = { "steamIDPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetPlayerNickname_Parms, steamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetPlayerNickname_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::NewProp_steamIDPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the nickname that the current user has set for the specified user.\n\x09*\n\x09* @param\x09steamIDPlayer\x09The Steam ID of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the nickname that the current user has set for the specified user.\n\n@param        steamIDPlayer   The Steam ID of the user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPlayerNickname", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::Friends_eventGetPlayerNickname_Parms), Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPlayerNickname()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics
	{
		struct Friends_eventGetPlayerNickname_Pure_Parms
		{
			FSteamID steamIDPlayer;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_steamIDPlayer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::NewProp_steamIDPlayer = { "steamIDPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetPlayerNickname_Pure_Parms, steamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetPlayerNickname_Pure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::NewProp_steamIDPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the nickname that the current user has set for the specified user.\n\x09*\n\x09* @param\x09steamIDPlayer\x09The Steam ID of the user.\n\x09*/" },
		{ "DisplayName", "Get Player Nickname (Pure)" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets the nickname that the current user has set for the specified user.\n\n@param        steamIDPlayer   The Steam ID of the user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPlayerNickname_Pure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::Friends_eventGetPlayerNickname_Pure_Parms), Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics
	{
		struct Friends_eventGetSmallFriendAvatar_Parms
		{
			FSteamID SteamIDFriend;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetSmallFriendAvatar_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetSmallFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets a handle to the large (32*32px) avatar for the specified user.\n\x09*\n\x09* You can pass in ISteamUser::GetSteamID to get the current users avatar.\n\x09* This only works for users that the local user knows about. They will automatically know about their friends,\n\x09* people on leaderboards they've requested, or people in the same source as them\n\x09* (Steam group, chat room, lobby, or game server). If they don't know about them then you must call\n\x09* RequestUserInformation to cache the avatar locally.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Gets a handle to the large (32*32px) avatar for the specified user.\n\nYou can pass in ISteamUser::GetSteamID to get the current users avatar.\nThis only works for users that the local user knows about. They will automatically know about their friends,\npeople on leaderboards they've requested, or people in the same source as them\n(Steam group, chat room, lobby, or game server). If they don't know about them then you must call\nRequestUserInformation to cache the avatar locally.\n\n@param        SteamIDFriend   The Steam ID of the user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetSmallFriendAvatar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::Friends_eventGetSmallFriendAvatar_Parms), Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetSmallFriendAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics
	{
		struct Friends_eventGetUserRestrictions_Parms
		{
			TArray<ESteamUserRestriction> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamCore_ESteamUserRestriction, METADATA_PARAMS(nullptr, 0) }; // 3923079851
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventGetUserRestrictions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3923079851
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if current user is chat restricted.\n\x09*\n\x09* If they are restricted, then they can't send or receive any text/voice chat messages, can't see custom avatars.\n\x09* A chat restricted user can't add friends or join any groups.\n\x09* Restricted users can still be online and send/receive game invites.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if current user is chat restricted.\n\nIf they are restricted, then they can't send or receive any text/voice chat messages, can't see custom avatars.\nA chat restricted user can't add friends or join any groups.\nRestricted users can still be online and send/receive game invites." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetUserRestrictions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::Friends_eventGetUserRestrictions_Parms), Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetUserRestrictions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_HasFriend_Statics
	{
		struct Friends_eventHasFriend_Parms
		{
			FSteamID SteamIDFriend;
			TArray<ESteamFriendFlags> Flags;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventHasFriend_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamCore_ESteamFriendFlags, METADATA_PARAMS(nullptr, 0) }; // 552801861
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventHasFriend_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 552801861
	void Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventHasFriend_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventHasFriend_Parms), &Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_HasFriend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_Flags_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_Flags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_HasFriend_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the user meets the specified criteria. (Friends, blocked, users on the same server, etc)\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam user to check the friend status of.\n\x09* @param\x09""Flags\x09\x09""A combined union (binary \"or\") of one or more EFriendFlags.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if the user meets the specified criteria. (Friends, blocked, users on the same server, etc)\n\n@param        SteamIDFriend   The Steam user to check the friend status of.\n@param        Flags           A combined union (binary \"or\") of one or more EFriendFlags." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_HasFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "HasFriend", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_HasFriend_Statics::Friends_eventHasFriend_Parms), Z_Construct_UFunction_UFriends_HasFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_HasFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_HasFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_HasFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_HasFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_HasFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_InviteUserToGame_Statics
	{
		struct Friends_eventInviteUserToGame_Parms
		{
			FSteamID SteamIDFriend;
			FString ConnectString;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventInviteUserToGame_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventInviteUserToGame_Parms, ConnectString), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventInviteUserToGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventInviteUserToGame_Parms), &Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ConnectString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Invites a friend or clan member to the current game using a special invite string.\n\x09*\n\x09* If the target user accepts the invite then the pchConnectString gets added to the command-line when launching the game.\n\x09* If the game is already running for that user, then they will receive a GameRichPresenceJoinRequested_t Callback with the connect string.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the friend to invite.\n\x09* @param\x09""ConnectString\x09""A string that lets the friend know how to join the game (I.E. the game server IP). This can not be longer than specified in k_cchMaxRichPresenceValueLength\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Invites a friend or clan member to the current game using a special invite string.\n\nIf the target user accepts the invite then the pchConnectString gets added to the command-line when launching the game.\nIf the game is already running for that user, then they will receive a GameRichPresenceJoinRequested_t Callback with the connect string.\n\n@param        SteamIDFriend   The Steam ID of the friend to invite.\n@param        ConnectString   A string that lets the friend know how to join the game (I.E. the game server IP). This can not be longer than specified in k_cchMaxRichPresenceValueLength" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "InviteUserToGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::Friends_eventInviteUserToGame_Parms), Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_InviteUserToGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics
	{
		struct Friends_eventIsClanChatAdmin_Parms
		{
			FSteamID SteamIDClanChat;
			FSteamID steamIDUser;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
		static const UECodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventIsClanChatAdmin_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventIsClanChatAdmin_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventIsClanChatAdmin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventIsClanChatAdmin_Parms), &Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_SteamIDClanChat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_steamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if a user in the Steam group chat room is an admin.\n\x09*\n\x09* @param\x09SteamIDClanChat\x09\x09The Steam ID of the Steam group chat room.\n\x09* @param\x09steamIDUser\x09\x09\x09The Steam ID of the user to check the admin status of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if a user in the Steam group chat room is an admin.\n\n@param        SteamIDClanChat         The Steam ID of the Steam group chat room.\n@param        steamIDUser                     The Steam ID of the user to check the admin status of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsClanChatAdmin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::Friends_eventIsClanChatAdmin_Parms), Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsClanChatAdmin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics
	{
		struct Friends_eventIsClanChatWindowOpenInSteam_Parms
		{
			FSteamID SteamIDClanChat;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventIsClanChatWindowOpenInSteam_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventIsClanChatWindowOpenInSteam_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventIsClanChatWindowOpenInSteam_Parms), &Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_SteamIDClanChat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the Steam Group chat room is open in the Steam UI.\n\x09*\n\x09* @param\x09SteamIDClanChat\x09\x09The Steam ID of the Steam group chat room to check.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if the Steam Group chat room is open in the Steam UI.\n\n@param        SteamIDClanChat         The Steam ID of the Steam group chat room to check." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsClanChatWindowOpenInSteam", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::Friends_eventIsClanChatWindowOpenInSteam_Parms), Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics
	{
		struct Friends_eventIsClanOfficialGameGroup_Parms
		{
			FSteamID SteamIDClan;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventIsClanOfficialGameGroup_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventIsClanOfficialGameGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventIsClanOfficialGameGroup_Parms), &Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_SteamIDClan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the Steam group is an official game group/community hub.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if the Steam group is an official game group/community hub.\n\n@param        SteamIDClan             The Steam ID of the Steam group." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsClanOfficialGameGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::Friends_eventIsClanOfficialGameGroup_Parms), Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsClanPublic_Statics
	{
		struct Friends_eventIsClanPublic_Parms
		{
			FSteamID SteamIDClan;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventIsClanPublic_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventIsClanPublic_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventIsClanPublic_Parms), &Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsClanPublic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_SteamIDClan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsClanPublic_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the Steam group is public.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if the Steam group is public.\n\n@param        SteamIDClan             The Steam ID of the Steam group." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsClanPublic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsClanPublic", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_IsClanPublic_Statics::Friends_eventIsClanPublic_Parms), Z_Construct_UFunction_UFriends_IsClanPublic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanPublic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsClanPublic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanPublic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsClanPublic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_IsClanPublic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsFollowing_Statics
	{
		struct Friends_eventIsFollowing_Parms
		{
			FScriptDelegate Callback;
			FSteamID SteamID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventIsFollowing_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnIsFollowing__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_Callback_MetaData)) }; // 3125924983
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventIsFollowing_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsFollowing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsFollowing_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the current user is following the specified user.\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the check if we are following.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if the current user is following the specified user.\n\n@param        SteamID         The Steam ID of the check if we are following." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsFollowing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_IsFollowing_Statics::Friends_eventIsFollowing_Parms), Z_Construct_UFunction_UFriends_IsFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsFollowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsFollowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsFollowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsFollowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_IsFollowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsUserInSource_Statics
	{
		struct Friends_eventIsUserInSource_Parms
		{
			FSteamID SteamIDUser;
			FSteamID SteamIDSource;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDSource;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventIsUserInSource_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_SteamIDSource = { "SteamIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventIsUserInSource_Parms, SteamIDSource), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventIsUserInSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventIsUserInSource_Parms), &Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsUserInSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_SteamIDSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsUserInSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if a specified user is in a source (Steam group, chat room, lobby, or game server).\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The user to check if they are in the source.\n\x09* @param\x09SteamIDSource\x09The source to check for the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Checks if a specified user is in a source (Steam group, chat room, lobby, or game server).\n\n@param        SteamIDUser             The user to check if they are in the source.\n@param        SteamIDSource   The source to check for the user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsUserInSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsUserInSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_IsUserInSource_Statics::Friends_eventIsUserInSource_Parms), Z_Construct_UFunction_UFriends_IsUserInSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsUserInSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsUserInSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsUserInSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsUserInSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_IsUserInSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics
	{
		struct Friends_eventJoinClanChatRoom_Parms
		{
			FScriptDelegate Callback;
			FSteamID SteamIDClan;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventJoinClanChatRoom_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoom__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_Callback_MetaData)) }; // 583207776
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventJoinClanChatRoom_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_SteamIDClan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Allows the user to join Steam group (clan) chats right within the game.\n\x09*\n\x09* The behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.\n\x09* You can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group to join.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Allows the user to join Steam group (clan) chats right within the game.\n\nThe behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.\nYou can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.\n\n@param        SteamIDClan             The Steam ID of the Steam group to join." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "JoinClanChatRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::Friends_eventJoinClanChatRoom_Parms), Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_JoinClanChatRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics
	{
		struct Friends_eventLeaveClanChatRoom_Parms
		{
			FSteamID SteamIDClan;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventLeaveClanChatRoom_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventLeaveClanChatRoom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventLeaveClanChatRoom_Parms), &Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_SteamIDClan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Leaves a Steam group chat that the user has previously entered with JoinClanChatRoom.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam ID of the Steam group chat to leave.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Leaves a Steam group chat that the user has previously entered with JoinClanChatRoom.\n\n@param        SteamIDClan             The Steam ID of the Steam group chat to leave." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "LeaveClanChatRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::Friends_eventLeaveClanChatRoom_Parms), Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_LeaveClanChatRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics
	{
		struct Friends_eventOpenClanChatWindowInSteam_Parms
		{
			FSteamID SteamIDClanChat;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventOpenClanChatWindowInSteam_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventOpenClanChatWindowInSteam_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventOpenClanChatWindowInSteam_Parms), &Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_SteamIDClanChat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Opens the specified Steam group chat room in the Steam UI.\n\x09*\n\x09* @param\x09SteamIDClanChat\x09\x09The Steam ID of the Steam group chat room to open.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Opens the specified Steam group chat room in the Steam UI.\n\n@param        SteamIDClanChat         The Steam ID of the Steam group chat room to open." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "OpenClanChatWindowInSteam", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::Friends_eventOpenClanChatWindowInSteam_Parms), Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics
	{
		struct Friends_eventRegisterProtocolInOverlayBrowser_Parms
		{
			FString Protocol;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Protocol;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventRegisterProtocolInOverlayBrowser_Parms, Protocol), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventRegisterProtocolInOverlayBrowser_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventRegisterProtocolInOverlayBrowser_Parms), &Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_Protocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Call this before calling ActivateGameOverlayToWebPage() to have the Steam Overlay Browser block navigations\n\x09* to your specified protocol (scheme) uris and instead dispatch a OverlayBrowserProtocolNavigation_t Callback to your game.\n\x09* ActivateGameOverlayToWebPage() must have been called with k_EActivateGameOverlayToWebPageMode_Modal\n\x09*\n\x09* Notes: Only available in UE4.27+\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Call this before calling ActivateGameOverlayToWebPage() to have the Steam Overlay Browser block navigations\nto your specified protocol (scheme) uris and instead dispatch a OverlayBrowserProtocolNavigation_t Callback to your game.\nActivateGameOverlayToWebPage() must have been called with k_EActivateGameOverlayToWebPageMode_Modal\n\nNotes: Only available in UE4.27+" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "RegisterProtocolInOverlayBrowser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::Friends_eventRegisterProtocolInOverlayBrowser_Parms), Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics
	{
		struct Friends_eventReplyToFriendMessage_Parms
		{
			FSteamID SteamIDFriend;
			FString MsgToSend;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MsgToSend;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventReplyToFriendMessage_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_MsgToSend = { "MsgToSend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventReplyToFriendMessage_Parms, MsgToSend), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventReplyToFriendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventReplyToFriendMessage_Parms), &Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_SteamIDFriend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_MsgToSend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Sends a message to a Steam friend.\n\x09*\n\x09* @param\x09SteamIDFriend\x09\x09The Steam ID of the friend to send the message to.\n\x09* @param\x09MsgToSend\x09\x09\x09The UTF-8 formatted message to send.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Sends a message to a Steam friend.\n\n@param        SteamIDFriend           The Steam ID of the friend to send the message to.\n@param        MsgToSend                       The UTF-8 formatted message to send." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ReplyToFriendMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::Friends_eventReplyToFriendMessage_Parms), Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ReplyToFriendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics
	{
		struct Friends_eventRequestClanOfficerList_Parms
		{
			FScriptDelegate Callback;
			FSteamID SteamIDClan;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventRequestClanOfficerList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerList__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_Callback_MetaData)) }; // 484992593
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventRequestClanOfficerList_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_SteamIDClan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Requests information about a Steam group officers (administrators and moderators).\n\x09*\n\x09* You can only ask about Steam groups that a user is a member of.\n\x09* This won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam group to get the officers list for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Requests information about a Steam group officers (administrators and moderators).\n\nYou can only ask about Steam groups that a user is a member of.\nThis won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.\n\n@param        SteamIDClan             The Steam group to get the officers list for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "RequestClanOfficerList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::Friends_eventRequestClanOfficerList_Parms), Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_RequestClanOfficerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics
	{
		struct Friends_eventRequestFriendRichPresence_Parms
		{
			FSteamID SteamIDFriend;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventRequestFriendRichPresence_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::NewProp_SteamIDFriend,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Requests Rich Presence data from a specific user.\n\x09*\n\x09* This is used to get the Rich Presence information from a user that is not a friend of the current user, like someone in the same lobby or game server.\n\x09* This function is rate limited, if you call this too frequently for a particular user then it will just immediately post a Callback without requesting new data from the server.\n\x09*\n\x09* @param\x09SteamIDFriend\x09The Steam ID of the user to request the rich presence of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Requests Rich Presence data from a specific user.\n\nThis is used to get the Rich Presence information from a user that is not a friend of the current user, like someone in the same lobby or game server.\nThis function is rate limited, if you call this too frequently for a particular user then it will just immediately post a Callback without requesting new data from the server.\n\n@param        SteamIDFriend   The Steam ID of the user to request the rich presence of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "RequestFriendRichPresence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::Friends_eventRequestFriendRichPresence_Parms), Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_RequestFriendRichPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_RequestUserInformation_Statics
	{
		struct Friends_eventRequestUserInformation_Parms
		{
			FSteamID SteamIDUser;
			bool bRequireNameOnly;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static void NewProp_bRequireNameOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireNameOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventRequestUserInformation_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly_SetBit(void* Obj)
	{
		((Friends_eventRequestUserInformation_Parms*)Obj)->bRequireNameOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly = { "bRequireNameOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventRequestUserInformation_Parms), &Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventRequestUserInformation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventRequestUserInformation_Parms), &Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Requests the persona name and optionally the avatar of a specified user.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09\x09The user to request the information of.\n\x09* @param\x09""bRequireNameOnly\x09Retrieve the Persona name only (true)? Or both the name and the avatar (false)?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Requests the persona name and optionally the avatar of a specified user.\n\n@param        SteamIDUser                     The user to request the information of.\n@param        bRequireNameOnly        Retrieve the Persona name only (true)? Or both the name and the avatar (false)?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "RequestUserInformation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::Friends_eventRequestUserInformation_Parms), Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_RequestUserInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics
	{
		struct Friends_eventSendClanChatMessage_Parms
		{
			FSteamID SteamIDClanChat;
			FString Text;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventSendClanChatMessage_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventSendClanChatMessage_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventSendClanChatMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventSendClanChatMessage_Parms), &Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_SteamIDClanChat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Sends a message to a Steam group chat room.\n\x09*\n\x09* @param\x09SteamIDClanChat\x09\x09The Steam ID of the group chat to send the message to.\n\x09* @param\x09Text\x09\x09\x09\x09The UTF-8 formatted message to send. This can be up to 2048 characters long.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Sends a message to a Steam group chat room.\n\n@param        SteamIDClanChat         The Steam ID of the group chat to send the message to.\n@param        Text                            The UTF-8 formatted message to send. This can be up to 2048 characters long." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SendClanChatMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::Friends_eventSendClanChatMessage_Parms), Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SendClanChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics
	{
		struct Friends_eventSetInGameVoiceSpeaking_Parms
		{
			FSteamID SteamIDUser;
			bool bSpeaking;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static void NewProp_bSpeaking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpeaking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventSetInGameVoiceSpeaking_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking_SetBit(void* Obj)
	{
		((Friends_eventSetInGameVoiceSpeaking_Parms*)Obj)->bSpeaking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking = { "bSpeaking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventSetInGameVoiceSpeaking_Parms), &Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Let Steam know that the user is currently using voice chat in game.\n\x09*\n\x09* This will suppress the microphone for all voice communication in the Steam UI.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09Unused.\n\x09* @param\x09""bSpeaking\x09\x09""Did the user start speaking in game (true) or stopped speaking in game (false)?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Let Steam know that the user is currently using voice chat in game.\n\nThis will suppress the microphone for all voice communication in the Steam UI.\n\n@param        SteamIDUser             Unused.\n@param        bSpeaking               Did the user start speaking in game (true) or stopped speaking in game (false)?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SetInGameVoiceSpeaking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::Friends_eventSetInGameVoiceSpeaking_Parms), Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics
	{
		struct Friends_eventSetListenForFriendsMessages_Parms
		{
			bool bInterceptEnabled;
			bool ReturnValue;
		};
		static void NewProp_bInterceptEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterceptEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled_SetBit(void* Obj)
	{
		((Friends_eventSetListenForFriendsMessages_Parms*)Obj)->bInterceptEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled = { "bInterceptEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventSetListenForFriendsMessages_Parms), &Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventSetListenForFriendsMessages_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventSetListenForFriendsMessages_Parms), &Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Listens for Steam friends chat messages.\n\x09*\n\x09* You can then show these chats inline in the game. \n\x09* For example with a Blizzard style chat message system or the chat system in Dota 2.\n\x09* After enabling this you will receive GameConnectedFriendChatMsg_t \n\x09* Callbacks when ever the user receives a chat message. \n\x09* You can get the actual message data from this Callback with GetFriendMessage. You can send messages with ReplyToFriendMessage.\n\x09*\n\x09* @param\x09""bInterceptEnabled\x09Turn friends message interception on (true) or off (false)?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Listens for Steam friends chat messages.\n\nYou can then show these chats inline in the game.\nFor example with a Blizzard style chat message system or the chat system in Dota 2.\nAfter enabling this you will receive GameConnectedFriendChatMsg_t\nCallbacks when ever the user receives a chat message.\nYou can get the actual message data from this Callback with GetFriendMessage. You can send messages with ReplyToFriendMessage.\n\n@param        bInterceptEnabled       Turn friends message interception on (true) or off (false)?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SetListenForFriendsMessages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::Friends_eventSetListenForFriendsMessages_Parms), Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SetListenForFriendsMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SetPersonaName_Statics
	{
		struct Friends_eventSetPersonaName_Parms
		{
			FScriptDelegate Callback;
			FString Name;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventSetPersonaName_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaName__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_Callback_MetaData)) }; // 1114009593
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventSetPersonaName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SetPersonaName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetPersonaName_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Sets the current users persona name, stores it on the server and publishes the changes to all friends who are online.\n\x09*\n\x09* Changes take place locally immediately, and a PersonaStateChange_t Callback is posted, presuming success.\n\x09* If the name change fails to happen on the server, then an additional PersonaStateChange_t \n\x09* Callback will be posted to change the name back, in addition to the final result available in the call result.\n\x09*\n\x09* @param\x09Name\x09The users new persona name. Can not be longer than k_cchPersonaNameMax bytes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Sets the current users persona name, stores it on the server and publishes the changes to all friends who are online.\n\nChanges take place locally immediately, and a PersonaStateChange_t Callback is posted, presuming success.\nIf the name change fails to happen on the server, then an additional PersonaStateChange_t\nCallback will be posted to change the name back, in addition to the final result available in the call result.\n\n@param        Name    The users new persona name. Can not be longer than k_cchPersonaNameMax bytes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SetPersonaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SetPersonaName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::Friends_eventSetPersonaName_Parms), Z_Construct_UFunction_UFriends_SetPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SetPersonaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_SetPersonaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SetPlayedWith_Statics
	{
		struct Friends_eventSetPlayedWith_Parms
		{
			FSteamID SteamIDUserPlayedWith;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUserPlayedWith;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::NewProp_SteamIDUserPlayedWith = { "SteamIDUserPlayedWith", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventSetPlayedWith_Parms, SteamIDUserPlayedWith), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::NewProp_SteamIDUserPlayedWith,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Mark a target user as 'played with'.\n\x09*\n\x09* The current user must be in game with the other player for the association to work.\n\x09*\n\x09* @param\x09SteamIDUserPlayedWith\x09The other user that we have played with.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Mark a target user as 'played with'.\n\nThe current user must be in game with the other player for the association to work.\n\n@param        SteamIDUserPlayedWith   The other user that we have played with." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SetPlayedWith", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::Friends_eventSetPlayedWith_Parms), Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SetPlayedWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SetRichPresence_Statics
	{
		struct Friends_eventSetRichPresence_Parms
		{
			FString Key;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventSetRichPresence_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Friends_eventSetRichPresence_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventSetRichPresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Friends_eventSetRichPresence_Parms), &Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SetRichPresence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetRichPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Sets a Rich Presence key/value for the current user that is automatically shared to all friends playing the same game.\n\x09*\n\x09* Each user can have up to 20 keys set as defined by k_cchMaxRichPresenceKeys.\n\x09*\n\x09* @param\x09Key\x09\x09The rich presence 'key' to set. This can not be longer than specified in k_cchMaxRichPresenceKeyLength.\n\x09* @param\x09Value\x09The rich presence 'value' to associate with pchKey. This can not be longer than specified in k_cchMaxRichPresenceValueLength. If this is set to an empty string (\"\") or NULL then the key is removed if it's set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
		{ "ToolTip", "Sets a Rich Presence key/value for the current user that is automatically shared to all friends playing the same game.\n\nEach user can have up to 20 keys set as defined by k_cchMaxRichPresenceKeys.\n\n@param        Key             The rich presence 'key' to set. This can not be longer than specified in k_cchMaxRichPresenceKeyLength.\n@param        Value   The rich presence 'value' to associate with pchKey. This can not be longer than specified in k_cchMaxRichPresenceValueLength. If this is set to an empty string (\"\") or NULL then the key is removed if it's set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SetRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SetRichPresence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFriends_SetRichPresence_Statics::Friends_eventSetRichPresence_Parms), Z_Construct_UFunction_UFriends_SetRichPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetRichPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetRichPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetRichPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SetRichPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFriends_SetRichPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFriends);
	UClass* Z_Construct_UClass_UFriends_NoRegister()
	{
		return UFriends::StaticClass();
	}
	struct Z_Construct_UClass_UFriends_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarImageLoaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AvatarImageLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendRichPresenceUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FriendRichPresenceUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameConnectedChatJoin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedChatJoin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameConnectedChatLeave_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedChatLeave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameConnectedClanChatMsg_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedClanChatMsg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameConnectedFriendChatMsg_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedFriendChatMsg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameLobbyJoinRequested_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameLobbyJoinRequested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameOverlayActivated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameOverlayActivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameRichPresenceJoinRequested_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameRichPresenceJoinRequested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameServerChangeRequested_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameServerChangeRequested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PersonaStateChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PersonaStateChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetPersonaNameResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SetPersonaNameResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinClanChatRoomCompletionResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_JoinClanChatRoomCompletionResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClanOfficerListResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClanOfficerListResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownloadClanActivityCountsResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DownloadClanActivityCountsResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFriends_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFriends_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFriends_ActivateGameOverlay, "ActivateGameOverlay" }, // 3311510645
		{ &Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog, "ActivateGameOverlayInvitedialog" }, // 1694950020
		{ &Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString, "ActivateGameOverlayInviteDialogConnectString" }, // 1616663572
		{ &Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore, "ActivateGameOverlayToStore" }, // 2951861688
		{ &Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser, "ActivateGameOverlayToUser" }, // 3512799915
		{ &Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage, "ActivateGameOverlayToWebPage" }, // 2785784065
		{ &Z_Construct_UFunction_UFriends_ClearRichPresence, "ClearRichPresence" }, // 1258045488
		{ &Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam, "CloseClanChatWindowInSteam" }, // 1627625539
		{ &Z_Construct_UFunction_UFriends_DownloadClanActivityCounts, "DownloadClanActivityCounts" }, // 1210873732
		{ &Z_Construct_UFunction_UFriends_EnumerateFollowingList, "EnumerateFollowingList" }, // 2042221653
		{ &Z_Construct_UFunction_UFriends_GetChatMemberByIndex, "GetChatMemberByIndex" }, // 659636860
		{ &Z_Construct_UFunction_UFriends_GetClanActivityCounts, "GetClanActivityCounts" }, // 3169624863
		{ &Z_Construct_UFunction_UFriends_GetClanByIndex, "GetClanByIndex" }, // 3833666067
		{ &Z_Construct_UFunction_UFriends_GetClanChatMemberCount, "GetClanChatMemberCount" }, // 3131524035
		{ &Z_Construct_UFunction_UFriends_GetClanChatMessage, "GetClanChatMessage" }, // 3442201842
		{ &Z_Construct_UFunction_UFriends_GetClanCount, "GetClanCount" }, // 2171859515
		{ &Z_Construct_UFunction_UFriends_GetClanName, "GetClanName" }, // 4051515665
		{ &Z_Construct_UFunction_UFriends_GetClanOfficerByIndex, "GetClanOfficerByIndex" }, // 1314693568
		{ &Z_Construct_UFunction_UFriends_GetClanOfficerCount, "GetClanOfficerCount" }, // 4130805897
		{ &Z_Construct_UFunction_UFriends_GetClanOwner, "GetClanOwner" }, // 3663497266
		{ &Z_Construct_UFunction_UFriends_GetClanTag, "GetClanTag" }, // 2328307850
		{ &Z_Construct_UFunction_UFriends_GetCoplayFriend, "GetCoplayFriend" }, // 2619966459
		{ &Z_Construct_UFunction_UFriends_GetCoplayFriendCount, "GetCoplayFriendCount" }, // 4018685888
		{ &Z_Construct_UFunction_UFriends_GetFollowerCount, "GetFollowerCount" }, // 769374692
		{ &Z_Construct_UFunction_UFriends_GetFriendByIndex, "GetFriendByIndex" }, // 1401340931
		{ &Z_Construct_UFunction_UFriends_GetFriendCoplayGame, "GetFriendCoplayGame" }, // 3574081908
		{ &Z_Construct_UFunction_UFriends_GetFriendCoplayTime, "GetFriendCoplayTime" }, // 3643760967
		{ &Z_Construct_UFunction_UFriends_GetFriendCount, "GetFriendCount" }, // 3693796108
		{ &Z_Construct_UFunction_UFriends_GetFriendCountFromSource, "GetFriendCountFromSource" }, // 872999053
		{ &Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex, "GetFriendFromSourceByIndex" }, // 2221604150
		{ &Z_Construct_UFunction_UFriends_GetFriendGamePlayed, "GetFriendGamePlayed" }, // 3125291064
		{ &Z_Construct_UFunction_UFriends_GetFriendMessage, "GetFriendMessage" }, // 3198431190
		{ &Z_Construct_UFunction_UFriends_GetFriendPersonaName, "GetFriendPersonaName" }, // 1383542690
		{ &Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory, "GetFriendPersonaNameHistory" }, // 3411411296
		{ &Z_Construct_UFunction_UFriends_GetFriendPersonaState, "GetFriendPersonaState" }, // 3854870219
		{ &Z_Construct_UFunction_UFriends_GetFriendRelationship, "GetFriendRelationship" }, // 1045443581
		{ &Z_Construct_UFunction_UFriends_GetFriendRichPresence, "GetFriendRichPresence" }, // 1960722705
		{ &Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex, "GetFriendRichPresenceKeyByIndex" }, // 2133721081
		{ &Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount, "GetFriendRichPresenceKeyCount" }, // 408383185
		{ &Z_Construct_UFunction_UFriends_GetFriendsGroupCount, "GetFriendsGroupCount" }, // 325492774
		{ &Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex, "GetFriendsGroupIDByIndex" }, // 2959898768
		{ &Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount, "GetFriendsGroupMembersCount" }, // 481117480
		{ &Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList, "GetFriendsGroupMembersList" }, // 2123682650
		{ &Z_Construct_UFunction_UFriends_GetFriendsGroupName, "GetFriendsGroupName" }, // 1937810580
		{ &Z_Construct_UFunction_UFriends_GetFriendSteamLevel, "GetFriendSteamLevel" }, // 2158765245
		{ &Z_Construct_UFunction_UFriends_GetLargeFriendAvatar, "GetLargeFriendAvatar" }, // 4275679352
		{ &Z_Construct_UFunction_UFriends_GetMediumFriendAvatar, "GetMediumFriendAvatar" }, // 2339114414
		{ &Z_Construct_UFunction_UFriends_GetPersonaName, "GetPersonaName" }, // 2955963929
		{ &Z_Construct_UFunction_UFriends_GetPersonaName_Pure, "GetPersonaName_Pure" }, // 3173710044
		{ &Z_Construct_UFunction_UFriends_GetPersonaState, "GetPersonaState" }, // 2759989068
		{ &Z_Construct_UFunction_UFriends_GetPersonaState_Pure, "GetPersonaState_Pure" }, // 428669183
		{ &Z_Construct_UFunction_UFriends_GetPlayerNickname, "GetPlayerNickname" }, // 2216771101
		{ &Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure, "GetPlayerNickname_Pure" }, // 2252304592
		{ &Z_Construct_UFunction_UFriends_GetSmallFriendAvatar, "GetSmallFriendAvatar" }, // 928984414
		{ &Z_Construct_UFunction_UFriends_GetUserRestrictions, "GetUserRestrictions" }, // 1758028182
		{ &Z_Construct_UFunction_UFriends_HasFriend, "HasFriend" }, // 694777249
		{ &Z_Construct_UFunction_UFriends_InviteUserToGame, "InviteUserToGame" }, // 2070938504
		{ &Z_Construct_UFunction_UFriends_IsClanChatAdmin, "IsClanChatAdmin" }, // 709428237
		{ &Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam, "IsClanChatWindowOpenInSteam" }, // 2504325462
		{ &Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup, "IsClanOfficialGameGroup" }, // 4073383648
		{ &Z_Construct_UFunction_UFriends_IsClanPublic, "IsClanPublic" }, // 4190880254
		{ &Z_Construct_UFunction_UFriends_IsFollowing, "IsFollowing" }, // 387776390
		{ &Z_Construct_UFunction_UFriends_IsUserInSource, "IsUserInSource" }, // 1893814220
		{ &Z_Construct_UFunction_UFriends_JoinClanChatRoom, "JoinClanChatRoom" }, // 1590620236
		{ &Z_Construct_UFunction_UFriends_LeaveClanChatRoom, "LeaveClanChatRoom" }, // 542533299
		{ &Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam, "OpenClanChatWindowInSteam" }, // 1232888140
		{ &Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser, "RegisterProtocolInOverlayBrowser" }, // 2655316718
		{ &Z_Construct_UFunction_UFriends_ReplyToFriendMessage, "ReplyToFriendMessage" }, // 3303043039
		{ &Z_Construct_UFunction_UFriends_RequestClanOfficerList, "RequestClanOfficerList" }, // 148400420
		{ &Z_Construct_UFunction_UFriends_RequestFriendRichPresence, "RequestFriendRichPresence" }, // 2657577747
		{ &Z_Construct_UFunction_UFriends_RequestUserInformation, "RequestUserInformation" }, // 1940321574
		{ &Z_Construct_UFunction_UFriends_SendClanChatMessage, "SendClanChatMessage" }, // 3766533489
		{ &Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking, "SetInGameVoiceSpeaking" }, // 775522503
		{ &Z_Construct_UFunction_UFriends_SetListenForFriendsMessages, "SetListenForFriendsMessages" }, // 2145475102
		{ &Z_Construct_UFunction_UFriends_SetPersonaName, "SetPersonaName" }, // 3088420375
		{ &Z_Construct_UFunction_UFriends_SetPlayedWith, "SetPlayedWith" }, // 2340599300
		{ &Z_Construct_UFunction_UFriends_SetRichPresence, "SetRichPresence" }, // 3438317845
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamFriends/SteamFriends.h" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_AvatarImageLoaded_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_AvatarImageLoaded = { "AvatarImageLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFriends, AvatarImageLoaded), Z_Construct_UDelegateFunction_SteamCore_OnAvatarImageLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_AvatarImageLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_AvatarImageLoaded_MetaData)) }; // 1007974244
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_FriendRichPresenceUpdate_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_FriendRichPresenceUpdate = { "FriendRichPresenceUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFriends, FriendRichPresenceUpdate), Z_Construct_UDelegateFunction_SteamCore_OnFriendRichPresenceUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_FriendRichPresenceUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_FriendRichPresenceUpdate_MetaData)) }; // 1715780664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatJoin_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatJoin = { "GameConnectedChatJoin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFriends, GameConnectedChatJoin), Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedChatJoin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatJoin_MetaData)) }; // 2531126778
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatLeave_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatLeave = { "GameConnectedChatLeave", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFriends, GameConnectedChatLeave), Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedChatLeave__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatLeave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatLeave_MetaData)) }; // 3953144164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedClanChatMsg_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedClanChatMsg = { "GameConnectedClanChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFriends, GameConnectedClanChatMsg), Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedClanChatMsg__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedClanChatMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedClanChatMsg_MetaData)) }; // 3564741124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedFriendChatMsg_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedFriendChatMsg = { "GameConnectedFriendChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFriends, GameConnectedFriendChatMsg), Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedFriendChatMsg__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedFriendChatMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedFriendChatMsg_MetaData)) }; // 1121106382
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameLobbyJoinRequested_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameLobbyJoinRequested = { "GameLobbyJoinRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFriends, GameLobbyJoinRequested), Z_Construct_UDelegateFunction_SteamCore_OnGameLobbyJoinRequested__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameLobbyJoinRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameLobbyJoinRequested_MetaData)) }; // 2474887669
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameOverlayActivated_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameOverlayActivated = { "GameOverlayActivated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFriends, GameOverlayActivated), Z_Construct_UDelegateFunction_SteamCore_OnGameOverlayActivated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameOverlayActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameOverlayActivated_MetaData)) }; // 3950207275
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameRichPresenceJoinRequested_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameRichPresenceJoinRequested = { "GameRichPresenceJoinRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFriends, GameRichPresenceJoinRequested), Z_Construct_UDelegateFunction_SteamCore_OnGameRichPresenceJoinRequested__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameRichPresenceJoinRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameRichPresenceJoinRequested_MetaData)) }; // 3518999995
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameServerChangeRequested_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameServerChangeRequested = { "GameServerChangeRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFriends, GameServerChangeRequested), Z_Construct_UDelegateFunction_SteamCore_OnGameServerChangeRequested__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameServerChangeRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameServerChangeRequested_MetaData)) }; // 219830444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_PersonaStateChange_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_PersonaStateChange = { "PersonaStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFriends, PersonaStateChange), Z_Construct_UDelegateFunction_SteamCore_OnPersonaStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_PersonaStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_PersonaStateChange_MetaData)) }; // 1768590502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_SetPersonaNameResponse_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_SetPersonaNameResponse = { "SetPersonaNameResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFriends, SetPersonaNameResponse), Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_SetPersonaNameResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_SetPersonaNameResponse_MetaData)) }; // 4209185829
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_JoinClanChatRoomCompletionResult_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_JoinClanChatRoomCompletionResult = { "JoinClanChatRoomCompletionResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFriends, JoinClanChatRoomCompletionResult), Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomCompletionResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_JoinClanChatRoomCompletionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_JoinClanChatRoomCompletionResult_MetaData)) }; // 608722751
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_ClanOfficerListResponse_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_ClanOfficerListResponse = { "ClanOfficerListResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFriends, ClanOfficerListResponse), Z_Construct_UDelegateFunction_SteamCore_OnClanOfficerListResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_ClanOfficerListResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_ClanOfficerListResponse_MetaData)) }; // 439308191
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_DownloadClanActivityCountsResult_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/SteamFriends/SteamFriends.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_DownloadClanActivityCountsResult = { "DownloadClanActivityCountsResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFriends, DownloadClanActivityCountsResult), Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_DownloadClanActivityCountsResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_DownloadClanActivityCountsResult_MetaData)) }; // 739188098
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFriends_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_AvatarImageLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_FriendRichPresenceUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatJoin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatLeave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedClanChatMsg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedFriendChatMsg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameLobbyJoinRequested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameOverlayActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameRichPresenceJoinRequested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameServerChangeRequested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_PersonaStateChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_SetPersonaNameResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_JoinClanChatRoomCompletionResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_ClanOfficerListResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_DownloadClanActivityCountsResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFriends_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFriends>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFriends_Statics::ClassParams = {
		&UFriends::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFriends_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFriends()
	{
		if (!Z_Registration_Info_UClass_UFriends.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFriends.OuterSingleton, Z_Construct_UClass_UFriends_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFriends.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<UFriends>()
	{
		return UFriends::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFriends);
	UFriends::~UFriends() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriends_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriends_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFriends, UFriends::StaticClass, TEXT("UFriends"), &Z_Registration_Info_UClass_UFriends, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFriends), 1109669824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriends_h_2214806867(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriends_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamFriends_SteamFriends_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
