/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInventory
*/

#include "SteamInventory/SteamInventoryAsyncActions.h"
#include "SteamInventory/SteamInventoryAsyncTasks.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreInventoryAsyncActionSetPersonaName
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::RequestEligiblePromoItemDefinitionsIDsAsync(UObject* WorldContextObject, FSteamID SteamID, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs>();
		const auto Task = new FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs(Subsystem, AsyncObject, SteamID, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::HandleCallback(const FSteamInventoryEligiblePromoItemDefIDs& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreInventoryAsyncActionRequestPricesResult
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreInventoryAsyncActionRequestPricesResult* USteamCoreInventoryAsyncActionRequestPricesResult::RequestPricesAsync(UObject* WorldContextObject, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreInventoryAsyncActionRequestPricesResult>();
		const auto Task = new FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult(Subsystem, AsyncObject, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif
	
	return nullptr;
}

void USteamCoreInventoryAsyncActionRequestPricesResult::HandleCallback(const FSteamInventoryRequestPricesResult& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}

USteamCoreInventoryAsyncActionStartPurchaseResult* USteamCoreInventoryAsyncActionStartPurchaseResult::StartPurchaseAsync(UObject* WorldContextObject, const TArray<FSteamItemDef> ItemDefs, const TArray<int32> Quantity, float Timeout)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (USteamCoreSubsystem* Subsystem = GetInstancedSubsystem(WorldContextObject))
	{
		const auto AsyncObject = NewObject<USteamCoreInventoryAsyncActionStartPurchaseResult>();
		const auto Task = new FOnlineAsyncTaskSteamCoreInventoryStartPurchaseResult(Subsystem, AsyncObject, ItemDefs, Quantity, Timeout);
		AsyncObject->RegisterWithGameInstance(Subsystem->GetGameInstance());
		AsyncObject->m_WorldContextObject = WorldContextObject;
		Subsystem->QueueAsyncTask(Task);
		AsyncObject->Activate();

		return AsyncObject;
	}
#endif

	return nullptr;
}

void USteamCoreInventoryAsyncActionStartPurchaseResult::HandleCallback(const FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful)
{
	LogVerbose("");

	AsyncTask(ENamedThreads::GameThread, [this, Data, bWasSuccessful]()
	{
		OnCallback.Broadcast(Data, bWasSuccessful);

		SetReadyToDestroy();
	});
}
