/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/isteamparties
*/

#include "SteamParties/SteamParties.h"
#include "SteamParties/SteamPartiesAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void USteamParties::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
#if ENABLE_STEAMCORE
	if (SteamParties())
	{
		OnJoinPartyCallback.Register(this, &USteamParties::OnJoinPartyUpdated);
		OnCreateBeaconCallback.Register(this, &USteamParties::OnCreateBeaconUpdated);
		OnReservationNotificationCallback.Register(this, &USteamParties::OnReservationNotificationUpdated);
		OnChangeNumOpenSlotsCallback.Register(this, &USteamParties::OnChangeNumOpenSlotsUpdated);
		OnAvailableBeaconLocationsCallback.Register(this, &USteamParties::OnAvailableBeaconLocationsUpdated);
		OnActiveBeaconsCallback.Register(this, &USteamParties::OnActiveBeaconsUpdated);

		if (IsRunningDedicatedServer())
		{
			OnJoinPartyCallback.SetGameserverFlag();
			OnCreateBeaconCallback.SetGameserverFlag();
			OnReservationNotificationCallback.SetGameserverFlag();
			OnChangeNumOpenSlotsCallback.SetGameserverFlag();
			OnAvailableBeaconLocationsCallback.SetGameserverFlag();
			OnActiveBeaconsCallback.SetGameserverFlag();
		}
	}
#endif
}

void USteamParties::Deinitialize()
{
#if ENABLE_STEAMCORE
	if (SteamParties())
	{
		OnJoinPartyCallback.Unregister();
		OnCreateBeaconCallback.Unregister();
		OnChangeNumOpenSlotsCallback.Unregister();
		OnAvailableBeaconLocationsCallback.Unregister();
		OnReservationNotificationCallback.Unregister();
		OnActiveBeaconsCallback.Unregister();
	}
#endif

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

int32 USteamParties::GetNumActiveBeacons()
{
	LogVeryVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamParties())
	{
		Result = SteamParties()->GetNumActiveBeacons();
	}
#endif

	return Result;
}

FPartyBeaconID USteamParties::GetBeaconByIndex(int32 Index)
{
	LogVeryVerbose("");

	FPartyBeaconID Result;

#if ENABLE_STEAMCORE
	if (SteamParties())
	{
		Result = SteamParties()->GetBeaconByIndex(Index);
	}
#endif

	return Result;
}

bool USteamParties::GetBeaconDetails(FPartyBeaconID BeaconId, FSteamID& SteamIDBeaconOwner, FSteamPartyBeaconLocation& Location, FString& OutMetadata)
{
	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamParties())
	{
		CSteamID Owner = {};
		SteamPartyBeaconLocation_t SteamPartyBeaconLocation = {};

		TArray<char> MetaData;
		MetaData.SetNum(4096);

		bResult = SteamParties()->GetBeaconDetails(BeaconId, &Owner, &SteamPartyBeaconLocation, MetaData.GetData(), MetaData.Num());

		if (bResult)
		{
			SteamIDBeaconOwner = Owner;
			Location = SteamPartyBeaconLocation;
			OutMetadata = UTF8_TO_TCHAR(MetaData.GetData());
		}
	}
#endif

	return bResult;
}

void USteamParties::JoinParty(const FOnJoinParty& Callback, FPartyBeaconID BeaconId)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamParties())
	{
		FOnlineAsyncTaskSteamCorePartiesJoinParty* Task = new FOnlineAsyncTaskSteamCorePartiesJoinParty(this, Callback, BeaconId);
		QueueAsyncTask(Task);
	}
#endif
}

bool USteamParties::GetNumAvailableBeaconLocations(int32& PuNumLocations)
{
	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamParties())
	{
		uint32 NumLocations;
		bResult = SteamParties()->GetNumAvailableBeaconLocations(&NumLocations);
		PuNumLocations = NumLocations;
	}
#endif

	return bResult;
}

bool USteamParties::GetAvailableBeaconLocations(TArray<FSteamPartyBeaconLocation>& pLocationList, int32 uMaxNumLocations /*= 10*/)
{
	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamParties())
	{
		TArray<SteamPartyBeaconLocation_t> LocationList;
		LocationList.SetNum(uMaxNumLocations);

		bResult = SteamParties()->GetAvailableBeaconLocations(LocationList.GetData(), LocationList.Num());

		if (bResult)
		{
			for (auto& Element : LocationList)
			{
				pLocationList.Add(Element);
			}
		}
	}
#endif

	return bResult;
}


void USteamParties::CreateBeacon(const FOnCreateBeacon& Callback, int32 OpenSlots, FSteamPartyBeaconLocation BeaconLocation, FString ConnectString, FString Metadata)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamParties())
	{
		FOnlineAsyncTaskSteamCorePartiesCreateBeacon* Task = new FOnlineAsyncTaskSteamCorePartiesCreateBeacon(this, Callback, OpenSlots, BeaconLocation, ConnectString, Metadata);
		QueueAsyncTask(Task);
	}
#endif
}

void USteamParties::OnReservationCompleted(FPartyBeaconID BeaconId, FSteamID SteamIDUser)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamParties())
	{
		SteamParties()->OnReservationCompleted(BeaconId, SteamIDUser);
	}
#endif
}

void USteamParties::CancelReservation(FPartyBeaconID BeaconId, FSteamID SteamIDUser)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamParties())
	{
		SteamParties()->CancelReservation(BeaconId, SteamIDUser);
	}
#endif
}

void USteamParties::ChangeNumOpenSlots(const FOnChangeNumOpenSlots& Callback, FPartyBeaconID BeaconId, int32 OpenSlots)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamParties())
	{
		FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots* Task = new FOnlineAsyncTaskSteamCorePartiesChangeNumOpenSlots(this, Callback, BeaconId, OpenSlots);
		QueueAsyncTask(Task);
	}
#endif
}

bool USteamParties::DestroyBeacon(FPartyBeaconID BeaconId)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamParties())
	{
		bResult = SteamParties()->DestroyBeacon(BeaconId);
	}
#endif

	return bResult;
}

bool USteamParties::GetBeaconLocationData(FSteamPartyBeaconLocation BeaconLocation, ESteamPartiesBeaconLocationData EData, FString& PCHDataStringOut)
{
	LogVeryVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamParties())
	{
		TArray<char> OutString;
		OutString.SetNum(4096);

		SteamPartyBeaconLocation_t SteamBeaconLocation;
		SteamBeaconLocation.m_eType = static_cast<ESteamPartyBeaconLocationType>(BeaconLocation.Type);
		SteamBeaconLocation.m_ulLocationID = FCString::Atoi64(*BeaconLocation.LocationId);

		bResult = SteamParties()->GetBeaconLocationData(SteamBeaconLocation, static_cast<ESteamPartyBeaconLocationData>(EData), OutString.GetData(), OutString.Num());

		if (bResult)
		{
			PCHDataStringOut = UTF8_TO_TCHAR(OutString.GetData());
		}
	}
#endif

	return bResult;
}

#if ENABLE_STEAMCORE
void USteamParties::OnActiveBeaconsUpdated(ActiveBeaconsUpdated_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		ActiveBeaconsDelegate.Broadcast();
	});
}

void USteamParties::OnAvailableBeaconLocationsUpdated(AvailableBeaconLocationsUpdated_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		AvailableBeaconLocationsDelegate.Broadcast();
	});
}

void USteamParties::OnReservationNotificationUpdated(ReservationNotificationCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		ReservationNotificationDelegate.Broadcast(Data);
	});
}

void USteamParties::OnJoinPartyUpdated(JoinPartyCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		JoinPartyDelegate.Broadcast(Data);
	});
}

void USteamParties::OnCreateBeaconUpdated(CreateBeaconCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		CreateBeaconDelegate.Broadcast(Data);
	});
}

void USteamParties::OnChangeNumOpenSlotsUpdated(ChangeNumOpenSlotsCallback_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		ChangeNumOpenSlotsDelegate.Broadcast(Data);
	});
}
#endif