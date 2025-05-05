/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/isteamparties
*/

#include "SteamParties/SteamPartiesAsyncActions.h"
#include "SteamParties/SteamPartiesAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreSteamPartiesAsyncActionCreateLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreSteamPartiesAsyncActionJoinParty* USteamCoreSteamPartiesAsyncActionJoinParty::JoinPartyAsync(UObject* WorldContextObject, FPartyBeaconID BeaconId, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreSteamPartiesAsyncActionJoinParty>();
		const auto Task = new FOnlineAsyncTaskSteamCorePartiesJoinParty(Subsystem, AsyncObject, BeaconId, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif
	
	return nullptr;
}

void USteamCoreSteamPartiesAsyncActionJoinParty::HandleCallback(const FJoinPartyData& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

USteamCoreSteamPartiesAsyncActionCreateBeacon* USteamCoreSteamPartiesAsyncActionCreateBeacon::CreateBeaconAsync(UObject* WorldContextObject, int32 OpenSlots, FSteamPartyBeaconLocation BeaconLocation, FString ConnectString, FString Metadata, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreSteamPartiesAsyncActionCreateBeacon>();
		const auto Task = new FOnlineAsyncTaskSteamCorePartiesCreateBeacon(Subsystem, AsyncObject, OpenSlots, BeaconLocation, ConnectString, Metadata, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreSteamPartiesAsyncActionCreateBeacon::HandleCallback(const FCreateBeaconData& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::ChangeNumOpenSlotsAsync(UObject* WorldContextObject, FPartyBeaconID BeaconId, int32 OpenSlots, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots>();
		const auto Task = new FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots(Subsystem, AsyncObject, BeaconId, OpenSlots, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::HandleCallback(const FChangeNumOpenSlotsData& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}
