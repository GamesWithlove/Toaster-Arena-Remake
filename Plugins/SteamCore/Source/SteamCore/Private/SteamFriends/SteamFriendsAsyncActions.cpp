/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamFriends
*/

#include "SteamFriends/SteamFriendsAsyncActions.h"
#include "SteamFriends/SteamFriendsAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionSetPersonaName
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionSetPersonaName* USteamCoreFriendsAsyncActionSetPersonaName::SetPersonaNameAsync(UObject* WorldContextObject, FString Name, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreFriendsAsyncActionSetPersonaName>();
		const auto Task = new FOnlineAsyncTaskSteamCoreFriendsSetPersonaName(Subsystem, AsyncObject, Name, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreFriendsAsyncActionSetPersonaName::HandleCallback(const FSetPersonaNameResponse& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionDownloadClanActivityCounts
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionDownloadClanActivityCounts* USteamCoreFriendsAsyncActionDownloadClanActivityCounts::DownloadClanActivityCountsAsync(UObject* WorldContextObject, TArray<FSteamID> SteamIDClans, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreFriendsAsyncActionDownloadClanActivityCounts>();
		const auto Task = new FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts(Subsystem, AsyncObject, SteamIDClans, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);

		AsyncObject->Activate();

		return AsyncObject;
	}
#endif
	
	return nullptr;
}

void USteamCoreFriendsAsyncActionDownloadClanActivityCounts::HandleCallback(const FDownloadClanActivityCountsResult& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionRequestClanOfficerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionRequestClanOfficerList* USteamCoreFriendsAsyncActionRequestClanOfficerList::RequestClanOfficerListAsync(UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreFriendsAsyncActionRequestClanOfficerList>();
		const auto Task = new FOnlineAsyncTaskSteamCoreRequestClanOfficerList(Subsystem, AsyncObject, SteamIDClan, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreFriendsAsyncActionRequestClanOfficerList::HandleCallback(const FClanOfficerListResponse& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionJoinClanChatRoom
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionJoinClanChatRoom* USteamCoreFriendsAsyncActionJoinClanChatRoom::JoinClanChatRoomAsync(UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreFriendsAsyncActionJoinClanChatRoom>();
		const auto Task = new FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom(Subsystem, AsyncObject, SteamIDClan, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif
	
	return nullptr;
}

void USteamCoreFriendsAsyncActionJoinClanChatRoom::HandleCallback(const FJoinClanChatRoomCompletionResult& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionEnumerateFollowingList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionEnumerateFollowingList* USteamCoreFriendsAsyncActionEnumerateFollowingList::EnumerateFollowingListAsync(UObject* WorldContextObject, int32 StartIndex, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreFriendsAsyncActionEnumerateFollowingList>();
		const auto Task = new FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList(Subsystem, AsyncObject, StartIndex, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreFriendsAsyncActionEnumerateFollowingList::HandleCallback(const FFriendsEnumerateFollowingList& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionIsFollowing
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionIsFollowing* USteamCoreFriendsAsyncActionIsFollowing::IsFollowingAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreFriendsAsyncActionIsFollowing>();
		const auto Task = new FOnlineAsyncTaskSteamCoreFriendsIsFollowing(Subsystem, AsyncObject, SteamID, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreFriendsAsyncActionIsFollowing::HandleCallback(const FFriendsIsFollowing& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionIsFollowing
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionGetFollowerCount* USteamCoreFriendsAsyncActionGetFollowerCount::GetFollowerCountAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreFriendsAsyncActionGetFollowerCount>();
		const auto Task = new FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount(Subsystem, AsyncObject, SteamID, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreFriendsAsyncActionGetFollowerCount::HandleCallback(const FFriendsGetFollowerCount& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

USteamCoreFriendsAsyncActionRequestUserInformation* USteamCoreFriendsAsyncActionRequestUserInformation::RequestUserInformationAsync(UObject* WorldContextObject, FSteamID SteamIDUser, bool bRequireNameOnly, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (const USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreFriendsAsyncActionRequestUserInformation>();
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		AsyncObject->OnPersonaStateChangeCallback.Register(AsyncObject, &USteamCoreFriendsAsyncActionRequestUserInformation::OnPersonaStateChange);
		AsyncObject->m_SteamIDUser = SteamIDUser;
		AsyncObject->m_bRequireNameOnly = bRequireNameOnly;
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreFriendsAsyncActionRequestUserInformation::Activate()
{
	LogVerbose("");

	USteamCoreAsyncAction::Activate();

#if ENABLE_STEAMCORE
	if (!SteamFriends()->RequestUserInformation(m_SteamIDUser, m_bRequireNameOnly))
	{
		HandleCallback();
	}
#endif
}

void USteamCoreFriendsAsyncActionRequestUserInformation::HandleCallback()
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this]()
	{
		OnCallback.Broadcast();

		SetReadyToDestroy();
	});
}

#if ENABLE_STEAMCORE
void USteamCoreFriendsAsyncActionRequestUserInformation::OnPersonaStateChange(PersonaStateChange_t* pParam)
{
	LogVerbose("");

	if (pParam->m_ulSteamID == m_SteamIDUser.GetValue())
	{
		OnPersonaStateChangeCallback.Unregister();
		HandleCallback();
	}
}
#endif
