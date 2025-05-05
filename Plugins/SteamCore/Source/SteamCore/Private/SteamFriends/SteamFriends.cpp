/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamFriends
*/

#include "SteamFriends/SteamFriends.h"
#include "SteamFriends/SteamFriendsAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UFriends::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

#if ENABLE_STEAMCORE
	
	OnAvatarImageLoadedCallback.Register(this, &UFriends::OnAvatarImageLoaded);
	OnFriendRichPresenceUpdateCallback.Register(this, &UFriends::OnFriendRichPresenceUpdate);
	OnGameConnectedChatJoinCallback.Register(this, &UFriends::OnGameConnectedChatJoin);
	OnGameConnectedChatLeaveCallback.Register(this, &UFriends::OnGameConnectedChatLeave);
	OnGameConnectedFriendChatMsgCallback.Register(this, &UFriends::OnGameConnectedFriendChatMsg);
	OnGameConnectedClanChatMsgCallback.Register(this, &UFriends::OnGameConnectedClanChatMsg);
	OnGameLobbyJoinRequestedCallback.Register(this, &UFriends::OnGameLobbyJoinRequested);
	OnGameOverlayActivatedCallback.Register(this, &UFriends::OnGameOverlayActivated);
	OnGameRichPresenceJoinRequestedCallback.Register(this, &UFriends::OnGameRichPresenceJoinRequested);
	OnGameServerChangeRequestedCallback.Register(this, &UFriends::OnGameServerChangeRequested);
	OnPersonaStateChangeCallback.Register(this, &UFriends::OnPersonaStateChange);
	OnSetPersonaNameResponseCallback.Register(this, &UFriends::OnSetPersonaNameResponse);
	OnJoinClanChatRoomCompletionResultCallback.Register(this, &UFriends::OnJoinClanChatRoomCompletionResult);
	OnClanOfficerListResponseCallback.Register(this, &UFriends::OnClanOfficerListResponse);
	OnDownloadClanActivityCountsResultCallback.Register(this, &UFriends::OnDownloadClanActivityCountsResult);

	if (IsRunningDedicatedServer())
	{
		OnAvatarImageLoadedCallback.SetGameserverFlag();
		OnFriendRichPresenceUpdateCallback.SetGameserverFlag();
		OnGameConnectedChatJoinCallback.SetGameserverFlag();
		OnGameConnectedChatLeaveCallback.SetGameserverFlag();
		OnGameConnectedFriendChatMsgCallback.SetGameserverFlag();
		OnGameConnectedClanChatMsgCallback.SetGameserverFlag();
		OnGameLobbyJoinRequestedCallback.SetGameserverFlag();
		OnGameOverlayActivatedCallback.SetGameserverFlag();
		OnGameRichPresenceJoinRequestedCallback.SetGameserverFlag();
		OnGameServerChangeRequestedCallback.SetGameserverFlag();
		OnPersonaStateChangeCallback.SetGameserverFlag();
		OnSetPersonaNameResponseCallback.SetGameserverFlag();
		OnJoinClanChatRoomCompletionResultCallback.SetGameserverFlag();
		OnClanOfficerListResponseCallback.SetGameserverFlag();
		OnDownloadClanActivityCountsResultCallback.SetGameserverFlag();
	}

#endif
}

void UFriends::Deinitialize()
{
#if ENABLE_STEAMCORE
	OnAvatarImageLoadedCallback.Unregister();
	OnFriendRichPresenceUpdateCallback.Unregister();
	OnGameConnectedChatJoinCallback.Unregister();
	OnGameConnectedChatLeaveCallback.Unregister();
	OnGameConnectedFriendChatMsgCallback.Unregister();
	OnGameConnectedClanChatMsgCallback.Unregister();
	OnGameLobbyJoinRequestedCallback.Unregister();
	OnGameOverlayActivatedCallback.Unregister();
	OnGameRichPresenceJoinRequestedCallback.Unregister();
	OnGameServerChangeRequestedCallback.Unregister();
	OnPersonaStateChangeCallback.Unregister();
	OnSetPersonaNameResponseCallback.Unregister();
	OnJoinClanChatRoomCompletionResultCallback.Unregister();
	OnClanOfficerListResponseCallback.Unregister();
	OnDownloadClanActivityCountsResultCallback.Unregister();
#endif
	Super::Deinitialize();
}

UTexture2D* UFriends::GetAvatar(uint8 Size, FSteamID SteamUserID)
{
	UTexture2D* Result = nullptr;
	
	#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		int Data = 0;

		switch (Size)
		{
		case 0:
			Data = SteamFriends()->GetSmallFriendAvatar(SteamUserID);
			break;
		case 1:
			Data = SteamFriends()->GetMediumFriendAvatar(SteamUserID);
			break;
		case 2:
			Data = SteamFriends()->GetLargeFriendAvatar(SteamUserID);
			break;
		}

		Result = GetSteamTexture(Data);
	}
	// size: 0=small, 1=medium, 2=large
#endif
	return Result;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UFriends::ActivateGameOverlay(FString Dialog)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		SteamFriends()->ActivateGameOverlay(TCHAR_TO_UTF8(*Dialog));
	}
#endif
}

void UFriends::ActivateGameOverlayInvitedialog(FSteamID SteamIDLobby)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		SteamFriends()->ActivateGameOverlayInviteDialog(SteamIDLobby);
	}
#endif
}

void UFriends::ActivateGameOverlayToStore(int32 AppID, ESteamOverlayToStoreFlag Flag)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		SteamFriends()->ActivateGameOverlayToStore(AppID, static_cast<EOverlayToStoreFlag>(Flag));
	}
#endif
}

void UFriends::ActivateGameOverlayToUser(FString Dialog, FSteamID SteamID)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		SteamFriends()->ActivateGameOverlayToUser(TCHAR_TO_UTF8(*Dialog), SteamID);
	}
#endif
}

void UFriends::ActivateGameOverlayToWebPage(FString URL, ESteamActivateGameOverlayToWebPageMode Mode)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		SteamFriends()->ActivateGameOverlayToWebPage(TCHAR_TO_UTF8(*URL), static_cast<EActivateGameOverlayToWebPageMode>(Mode));
	}
#endif
}

void UFriends::ClearRichPresence()
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		SteamFriends()->ClearRichPresence();
	}
#endif
}

bool UFriends::CloseClanChatWindowInSteam(FSteamID SteamIDClanChat)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		bResult = SteamFriends()->CloseClanChatWindowInSteam(SteamIDClanChat);
	}
#endif
	return bResult;
}

void UFriends::DownloadClanActivityCounts(const FOnDownloadClanActivityCounts& Callback, TArray<FSteamID> SteamIDClans)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts* Task = new FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts(this, Callback, SteamIDClans);
		QueueAsyncTask(Task);
	}
#endif
}

void UFriends::EnumerateFollowingList(const FOnEnumerateFollowingList& Callback, int32 StartIndex)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList* Task = new FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList(this, Callback, StartIndex);
		QueueAsyncTask(Task);
	}
#endif
}

FSteamID UFriends::GetChatMemberByIndex(FSteamID SteamIDClan, int32 User)
{
	LogVeryVerbose("");

	FSteamID Result;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetChatMemberByIndex(SteamIDClan, User);
	}
#endif
	return Result;
}

bool UFriends::GetClanActivityCounts(FSteamID SteamIDClan, int32& OutOnline, int32& InGame, int32& OutChatting)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutOnline = 0;
	InGame = 0;
	OutChatting = 0;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		bResult = SteamFriends()->GetClanActivityCounts(SteamIDClan, &OutOnline, &InGame, &OutChatting);
	}
#endif
	return bResult;
}

FSteamID UFriends::GetClanByIndex(int32 Clan)
{
	LogVeryVerbose("");

	FSteamID Result;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetClanByIndex(Clan);
	}
#endif
	
	return Result;
}

int32 UFriends::GetClanChatMemberCount(FSteamID SteamIDClan)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetClanChatMemberCount(SteamIDClan);
	}
#endif
	
	return Result;
}

int32 UFriends::GetClanChatMessage(FSteamID SteamIDClanChat, int32 MessageID, FString& OutText, ESteamChatEntryType& OutChatEntryType, FSteamID& OutSteamIdChatter)
{
	LogVeryVerbose("");

	int32 Result = 0;
	OutText.Empty();
#if ENABLE_STEAMCORE
	CSteamID SteamIdChatter;
	EChatEntryType ChatEntryType = k_EChatEntryTypeInvalid;

	if (SteamFriends())
	{
		TArray<char> DataArray;
		DataArray.SetNum(1024);

		Result = SteamFriends()->GetClanChatMessage(SteamIDClanChat, MessageID, DataArray.GetData(), DataArray.Num(), &ChatEntryType, &SteamIdChatter);
		OutText = UTF8_TO_TCHAR(DataArray.GetData());
	}

	OutChatEntryType = static_cast<ESteamChatEntryType>(ChatEntryType);
	OutSteamIdChatter = SteamIdChatter;
#endif
	
	return Result;
}

int32 UFriends::GetClanCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetClanCount();
	}
#endif
	
	return Result;
}

FString UFriends::GetClanName(FSteamID SteamIDClan)
{
	LogVeryVerbose("");

	FString Result;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetClanName(SteamIDClan));
	}
#endif
	
	return Result;
}

FSteamID UFriends::GetClanOfficerByIndex(FSteamID SteamIDClan, int32 Officer)
{
	LogVeryVerbose("");

	FSteamID Result;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetClanOfficerByIndex(SteamIDClan, Officer);
	}
#endif
	
	return Result;
}

int32 UFriends::GetClanOfficerCount(FSteamID SteamIDClan)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetClanOfficerCount(SteamIDClan);
	}
#endif
	
	return Result;
}

FSteamID UFriends::GetClanOwner(FSteamID SteamIDClan)
{
	LogVeryVerbose("");

	FSteamID Result;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetClanOwner(SteamIDClan);
	}
#endif
	
	return Result;
}

FString UFriends::GetClanTag(FSteamID SteamIDClan)
{
	LogVeryVerbose("");

	FString Result;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetClanTag(SteamIDClan));
	}
#endif
	
	return Result;
}

FSteamID UFriends::GetCoplayFriend(int32 CoplayFriend)
{
	LogVeryVerbose("");

	FSteamID Result;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetCoplayFriend(CoplayFriend);
	}
#endif
	
	return Result;
}

int32 UFriends::GetCoplayFriendCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetCoplayFriendCount();
	}
#endif
	
	return Result;
}

void UFriends::GetFollowerCount(const FOnGetFollowerCount& Callback, FSteamID SteamID)
{
	LogVeryVerbose("");

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount* Task = new FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount(this, Callback, SteamID);
		QueueAsyncTask(Task);
	}
#endif
}

FSteamID UFriends::GetFriendByIndex(int32 Ifriend, TArray<ESteamFriendFlags> Flags)
{
	LogVeryVerbose("");

	FSteamID Result;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		int Data = 0;

		for (int i = 0; i < Flags.Num(); i++)
		{
			Data |= *Flags[i];
		}

		Result = SteamFriends()->GetFriendByIndex(Ifriend, Data);
	}
#endif
	
	return Result;
}

int32 UFriends::GetFriendCoplayGame(FSteamID SteamIDFriend)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendCoplayGame(SteamIDFriend);
	}
#endif
	
	return Result;
}

int32 UFriends::GetFriendCoplayTime(FSteamID SteamIDFriend)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendCoplayTime(SteamIDFriend);
	}
#endif
	
	return Result;
}

int32 UFriends::GetFriendCount(TArray<ESteamFriendFlags> Flags)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		int Data = 0;

		for (int i = 0; i < Flags.Num(); i++)
		{
			Data |= *Flags[i];
		}

		Result = SteamFriends()->GetFriendCount(Data);
	}
#endif
	
	return Result;
}

int32 UFriends::GetFriendCountFromSource(FSteamID SteamIDSource)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendCountFromSource(SteamIDSource);
	}
#endif
	
	return Result;
}

FSteamID UFriends::GetFriendFromSourceByIndex(FSteamID SteamIDSource, int32 Ifriend)
{
	LogVeryVerbose("");

	FSteamID Result;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendFromSourceByIndex(SteamIDSource, Ifriend);
	}
#endif
	
	return Result;
}

bool UFriends::GetFriendGamePlayed(FSteamID SteamIDFriend, FSteamGameID& OutGameId, FString& OutGameIp, int32& OutConnectionPort, int32& OutQueryPort, FSteamID& OutSteamLobby)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutGameId = FSteamGameID();
	OutGameIp.Empty();
	OutConnectionPort = 0;
	OutQueryPort = 0;
	OutSteamLobby = FSteamID();

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		FriendGameInfo_t FriendData;

		bResult = SteamFriends()->GetFriendGamePlayed(SteamIDFriend, &FriendData);

		if (bResult)
		{
			OutGameId = FriendData.m_gameID;
			OutGameIp = FIPv4Address(FriendData.m_unGameIP).ToString();
			OutConnectionPort = FriendData.m_usGamePort;
			OutQueryPort = FriendData.m_usQueryPort;
			OutSteamLobby = FriendData.m_steamIDLobby;
		}
	}
#endif
	
	return bResult;
}

int32 UFriends::GetFriendMessage(FSteamID SteamIDFriend, int32 MessageID, FString& OutText, ESteamChatEntryType& OutChatEntryType)
{
	LogVeryVerbose("");

	int32 Result = 0;
	OutText.Empty();
#if ENABLE_STEAMCORE
	EChatEntryType ChatEntryType = k_EChatEntryTypeChatMsg;

	if (SteamFriends())
	{
		TArray<char> DataArray;
		DataArray.SetNum(1024);

		Result = SteamFriends()->GetFriendMessage(SteamIDFriend, MessageID, DataArray.GetData(), DataArray.Num(), &ChatEntryType);

		if (Result != INDEX_NONE)
		{
			OutText = UTF8_TO_TCHAR(DataArray.GetData());
		}
	}

	OutChatEntryType = static_cast<ESteamChatEntryType>(ChatEntryType);
#endif
	
	return Result;
}

FString UFriends::GetFriendPersonaName(FSteamID SteamIDFriend)
{
	LogVeryVerbose("");

	FString Result;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetFriendPersonaName(SteamIDFriend));
	}
#endif
	
	return Result;
}

FString UFriends::GetFriendPersonaNameHistory(FSteamID SteamIDFriend, int32 PersonaName)
{
	LogVeryVerbose("");

	FString Result;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetFriendPersonaNameHistory(SteamIDFriend, PersonaName));
	}
#endif
	
	return Result;
}

ESteamPersonaState UFriends::GetFriendPersonaState(FSteamID SteamIDFriend)
{
	LogVeryVerbose("");

	ESteamPersonaState Result = ESteamPersonaState::Max;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = static_cast<ESteamPersonaState>(SteamFriends()->GetFriendPersonaState(SteamIDFriend));
	}
#endif
	
	return Result;
}

ESteamFriendRelationship UFriends::GetFriendRelationship(FSteamID SteamIDFriend)
{
	LogVeryVerbose("");

	ESteamFriendRelationship Result = ESteamFriendRelationship::Max;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = static_cast<ESteamFriendRelationship>(SteamFriends()->GetFriendRelationship(SteamIDFriend));
	}
#endif
	
	return Result;
}

FString UFriends::GetFriendRichPresence(FSteamID SteamIDFriend, FString Key)
{
	LogVeryVerbose("");

	FString Result;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetFriendRichPresence(SteamIDFriend, TCHAR_TO_UTF8(*Key)));
	}
#endif
	
	return Result;
}

FString UFriends::GetFriendRichPresenceKeyByIndex(FSteamID SteamIDFriend, int32 Key)
{
	LogVeryVerbose("");

	FString Result;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetFriendRichPresenceKeyByIndex(SteamIDFriend, Key));
	}
#endif
	
	return Result;
}

int32 UFriends::GetFriendRichPresenceKeyCount(FSteamID SteamIDFriend)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendRichPresenceKeyCount(SteamIDFriend);
	}
#endif
	
	return Result;
}

int32 UFriends::GetFriendsGroupCount()
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendsGroupCount();
	}
#endif
	
	return Result;
}

FSteamFriendsGroupID UFriends::GetFriendsGroupIDByIndex(int32 FriendGroup)
{
	LogVeryVerbose("");

	FSteamFriendsGroupID Result;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendsGroupIDByIndex(FriendGroup);
	}
#endif
	
	return Result;
}

int32 UFriends::GetFriendsGroupMembersCount(FSteamFriendsGroupID FriendsGroupID)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendsGroupMembersCount(FriendsGroupID);
	}
#endif
	
	return Result;
}

void UFriends::GetFriendsGroupMembersList(FSteamFriendsGroupID FriendsGroupID, TArray<FSteamID>& OutSteamIdMembers, int32 MembersCount)
{
	LogVeryVerbose("");

	OutSteamIdMembers.Empty();

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		TArray<CSteamID> DataArray;
		DataArray.SetNum(MembersCount);

		SteamFriends()->GetFriendsGroupMembersList(FriendsGroupID, DataArray.GetData(), MembersCount);

		for (int32 i = 0; i < MembersCount; i++)
		{
			OutSteamIdMembers.Add(DataArray[i]);
		}
	}
#endif
}

FString UFriends::GetFriendsGroupName(FSteamFriendsGroupID FriendsGroupID)
{
	LogVeryVerbose("");

	FString Result;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetFriendsGroupName(FriendsGroupID));
	}
#endif
	
	return Result;
}

int UFriends::GetFriendSteamLevel(FSteamID SteamIDFriend)
{
	LogVeryVerbose("");

	int Result = 0;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = SteamFriends()->GetFriendSteamLevel(SteamIDFriend);
	}
#endif
	
	return Result;
}

UTexture2D* UFriends::GetLargeFriendAvatar(FSteamID SteamIDFriend)
{
	LogVeryVerbose("");

	return GetAvatar(2, SteamIDFriend);
}

UTexture2D* UFriends::GetMediumFriendAvatar(FSteamID SteamIDFriend)
{
	LogVeryVerbose("");
	return GetAvatar(1, SteamIDFriend);
}

FString UFriends::GetPersonaName()
{
	LogVeryVerbose("");

	FString Result;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetPersonaName());
	}
#endif
	
	return Result;
}

ESteamPersonaState UFriends::GetPersonaState()
{
	LogVeryVerbose("");

	ESteamPersonaState Result = ESteamPersonaState::Max;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = static_cast<ESteamPersonaState>(SteamFriends()->GetPersonaState());
	}
#endif
	
	return Result;
}

FString UFriends::GetPlayerNickname(FSteamID SteamIDPlayer)
{
	LogVeryVerbose("");

	FString Result;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		Result = UTF8_TO_TCHAR(SteamFriends()->GetPlayerNickname(SteamIDPlayer));
	}
#endif
	
	return Result;
}

UTexture2D* UFriends::GetSmallFriendAvatar(FSteamID SteamIDFriend)
{
	LogVeryVerbose("");
	return GetAvatar(0, SteamIDFriend);
}

TArray<ESteamUserRestriction> UFriends::GetUserRestrictions()
{
	LogVeryVerbose("");

	TArray<ESteamUserRestriction> DataArray;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		const uint32 Flags = SteamFriends()->GetUserRestrictions();

		for (int32 i = 0; i <= 31; i++)
		{
			if (Flags & 1 << i)
			{
				DataArray.Add(static_cast<ESteamUserRestriction>(i));
			}
		}
	}
#endif
	
	return DataArray;
}

bool UFriends::HasFriend(FSteamID SteamIDFriend, TArray<ESteamFriendFlags> Flags)
{
	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		int Data = 0;

		for (int i = 0; i < Flags.Num(); i++)
		{
			Data |= *Flags[i];
		}

		bResult = SteamFriends()->HasFriend(SteamIDFriend, Data);
	}
#endif
	
	return bResult;
}

bool UFriends::InviteUserToGame(FSteamID SteamIDFriend, const FString ConnectString)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		bResult = SteamFriends()->InviteUserToGame(SteamIDFriend, TCHAR_TO_UTF8(*ConnectString));
	}
#endif
	
	return bResult;
}

bool UFriends::IsClanChatAdmin(FSteamID SteamIDClanChat, FSteamID SteamIDUser)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		bResult = SteamFriends()->IsClanChatAdmin(SteamIDClanChat, SteamIDUser);
	}
#endif
	
	return bResult;
}

bool UFriends::IsClanPublic(FSteamID SteamIDClan)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		bResult = SteamFriends()->IsClanPublic(SteamIDClan);
	}
#endif
	
	return bResult;
}

bool UFriends::IsClanOfficialGameGroup(FSteamID SteamIDClan)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		bResult = SteamFriends()->IsClanOfficialGameGroup(SteamIDClan);
	}
#endif
	
	return bResult;
}

bool UFriends::RegisterProtocolInOverlayBrowser(FString Protocol)
{
	LogVerbose("");
	bool bResult = false;

#if ENABLE_STEAMCORE
#if STEAM_VERSION > 147
	if (SteamFriends())
	{
		bResult = SteamFriends()->RegisterProtocolInOverlayBrowser(TCHAR_TO_UTF8(*Protocol));
	}
#endif
#endif
	
	return bResult;
}

void UFriends::ActivateGameOverlayInviteDialogConnectString(FString ConnectString)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
#if STEAM_VERSION >= 151
	if (SteamFriends())
	{
		SteamFriends()->ActivateGameOverlayInviteDialogConnectString(TCHAR_TO_UTF8(*ConnectString));
	}
#endif
#endif
}

bool UFriends::IsClanChatWindowOpenInSteam(FSteamID SteamIDClanChat)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		bResult = SteamFriends()->IsClanChatWindowOpenInSteam(SteamIDClanChat);
	}
#endif
	
	return bResult;
}

void UFriends::IsFollowing(const FOnIsFollowing& Callback, FSteamID SteamID)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsIsFollowing* Task = new FOnlineAsyncTaskSteamCoreFriendsIsFollowing(this, Callback, SteamID);
		QueueAsyncTask(Task);
	}
#endif
}

bool UFriends::IsUserInSource(FSteamID SteamIDUser, FSteamID SteamIDSource)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		bResult = SteamFriends()->IsUserInSource(SteamIDUser, SteamIDSource);
	}
#endif
	
	return bResult;
}

void UFriends::JoinClanChatRoom(const FOnJoinClanChatRoom& Callback, FSteamID SteamIDClan)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom* Task = new FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom(this, Callback, SteamIDClan);
		QueueAsyncTask(Task);
	}
#endif
}

bool UFriends::LeaveClanChatRoom(FSteamID SteamIDClan)
{
	LogVerbose("");
	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		bResult = SteamFriends()->LeaveClanChatRoom(SteamIDClan);
	}
#endif

	return bResult;
}

bool UFriends::OpenClanChatWindowInSteam(FSteamID SteamIDClanChat)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		bResult = SteamFriends()->OpenClanChatWindowInSteam(SteamIDClanChat);
	}
#endif
	
	return bResult;
}

bool UFriends::ReplyToFriendMessage(FSteamID SteamIDFriend, FString MsgToSend)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		bResult = SteamFriends()->ReplyToFriendMessage(SteamIDFriend, TCHAR_TO_UTF8(*MsgToSend));
	}
#endif
	
	return bResult;
}

void UFriends::RequestClanOfficerList(const FOnRequestClanOfficerList& Callback, FSteamID SteamIDClan)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreRequestClanOfficerList* Task = new FOnlineAsyncTaskSteamCoreRequestClanOfficerList(this, Callback, SteamIDClan);
		QueueAsyncTask(Task);
	}
#endif
}

void UFriends::RequestFriendRichPresence(FSteamID SteamIDFriend)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		SteamFriends()->RequestFriendRichPresence(SteamIDFriend);
	}
#endif
}

bool UFriends::RequestUserInformation(FSteamID SteamIDUser, bool bRequireNameOnly)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		bResult = SteamFriends()->RequestUserInformation(SteamIDUser, bRequireNameOnly);
	}
#endif
	
	return bResult;
}

bool UFriends::SendClanChatMessage(FSteamID SteamIDClanChat, FString Text)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		bResult = SteamFriends()->SendClanChatMessage(SteamIDClanChat, TCHAR_TO_UTF8(*Text));
	}
#endif
	
	return bResult;
}

void UFriends::SetInGameVoiceSpeaking(FSteamID SteamIDUser, bool bSpeaking)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		SteamFriends()->SetInGameVoiceSpeaking(SteamIDUser, bSpeaking);
	}
#endif
}

bool UFriends::SetListenForFriendsMessages(bool bInterceptEnabled)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		bResult = SteamFriends()->SetListenForFriendsMessages(bInterceptEnabled);
	}
#endif
	
	return bResult;
}

void UFriends::SetPersonaName(const FOnSetPersonaName& Callback, FString Name)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsSetPersonaName* Task = new FOnlineAsyncTaskSteamCoreFriendsSetPersonaName(this, Callback, Name);
		QueueAsyncTask(Task);
	}
#endif
}

void UFriends::SetPlayedWith(FSteamID SteamIDUserPlayedWith)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		SteamFriends()->SetPlayedWith(SteamIDUserPlayedWith);
	}
#endif
}

bool UFriends::SetRichPresence(FString Key, FString Value)
{
	LogVerbose("");

	bool bResult = false;

	if (Key.Len() == 0 || Value.Len() == 0)
	{
		return bResult;
	}

#if ENABLE_STEAMCORE
	if (SteamFriends())
	{
		const FTCHARToUTF8 KeyChar(*Key);
		const FTCHARToUTF8 ValueChar(*Value);

		bResult = SteamFriends()->SetRichPresence(KeyChar.Get(), ValueChar.Get());
	}
#endif
	
	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if ENABLE_STEAMCORE
void UFriends::OnPersonaStateChange(PersonaStateChange_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		PersonaStateChange.Broadcast(Data);
	});
}

void UFriends::OnSetPersonaNameResponse(SetPersonaNameResponse_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SetPersonaNameResponse.Broadcast(Data);
	});
}

void UFriends::OnJoinClanChatRoomCompletionResult(JoinClanChatRoomCompletionResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		JoinClanChatRoomCompletionResult.Broadcast(Data);
	});
}

void UFriends::OnGameOverlayActivated(GameOverlayActivated_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GameOverlayActivated.Broadcast(Data);
	});
}

void UFriends::OnGameServerChangeRequested(GameServerChangeRequested_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GameServerChangeRequested.Broadcast(Data);
	});
}

void UFriends::OnGameLobbyJoinRequested(GameLobbyJoinRequested_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GameLobbyJoinRequested.Broadcast(Data);
	});
}

void UFriends::OnAvatarImageLoaded(AvatarImageLoaded_t* pParam)
{
	LogVerbose("");

	FAvatarImageLoaded Data = *pParam;
	Data.Image = GetSteamTexture(Data.m_iImage);

	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		AvatarImageLoaded.Broadcast(Data);
	});
}

void UFriends::OnFriendRichPresenceUpdate(FriendRichPresenceUpdate_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		FriendRichPresenceUpdate.Broadcast(Data);
	});
}

void UFriends::OnGameRichPresenceJoinRequested(GameRichPresenceJoinRequested_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GameRichPresenceJoinRequested.Broadcast(Data);
	});
}

void UFriends::OnGameConnectedClanChatMsg(GameConnectedClanChatMsg_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GameConnectedClanChatMsg.Broadcast(Data);
	});
}

void UFriends::OnGameConnectedChatJoin(GameConnectedChatJoin_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GameConnectedChatJoin.Broadcast(Data);
	});
}

void UFriends::OnGameConnectedChatLeave(GameConnectedChatLeave_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GameConnectedChatLeave.Broadcast(Data);
	});
}

void UFriends::OnGameConnectedFriendChatMsg(GameConnectedFriendChatMsg_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		GameConnectedFriendChatMsg.Broadcast(Data);
	});
}

void UFriends::OnClanOfficerListResponse(ClanOfficerListResponse_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		ClanOfficerListResponse.Broadcast(Data);
	});
}

void UFriends::OnDownloadClanActivityCountsResult(DownloadClanActivityCountsResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		DownloadClanActivityCountsResult.Broadcast(Data);
	});
}
#endif