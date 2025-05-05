/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamApps
*/

#include "SteamApps/SteamAppsAsyncActions.h"
#include "SteamApps/SteamAppsAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetFileDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreAppsAsyncActionGetFileDetails* USteamCoreAppsAsyncActionGetFileDetails::GetFileDetailsAsync(UObject* WorldContextObject, FString FileName, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreAppsAsyncActionGetFileDetails>();
		const auto Task = new FOnlineAsyncTaskSteamCoreAppsGetFileDetails(Subsystem, AsyncObject, FileName, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;	
	}
#endif
	
	return nullptr;
}

void USteamCoreAppsAsyncActionGetFileDetails::HandleCallback(const FFileDetailsResult& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}
