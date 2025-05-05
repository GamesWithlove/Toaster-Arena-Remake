/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/isteamparties
*/

#pragma once

#include "SteamPartiesTypes.h"
#include "SteamCore/SteamCoreAsync.h"
#include "SteamPartiesAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJoinPartyCallback, const FJoinPartyData&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreateBeaconCallback, const FCreateBeaconData&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeNumOpenSlotsCallback, const FChangeNumOpenSlotsData&, Data, bool, bWasSuccessful);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreSteamPartiesAsyncActionJoinParty
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UCLASS()
class STEAMCORE_API USteamCoreSteamPartiesAsyncActionJoinParty : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnJoinPartyCallback OnCallback;
public:
	/**
	* When the user indicates they wish to join the party advertised by a given beacon, call this method.
	* On success, Steam will reserve a slot for this user in the party and return the necessary "join game" string to use to complete the connection.
	*
	* @param	BeaconId		Beacon ID for the party you wish to join.
	* @param	Timeout			How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Join Party", BlueprintInternalUseOnly="true"), Category = "SteamCore|SteamParties|Async")
	static USteamCoreSteamPartiesAsyncActionJoinParty* JoinPartyAsync(UObject* WorldContextObject, FPartyBeaconID BeaconId, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FJoinPartyData& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreSteamPartiesAsyncActionCreateBeacon
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UCLASS()
class STEAMCORE_API USteamCoreSteamPartiesAsyncActionCreateBeacon : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnCreateBeaconCallback OnCallback;
public:
	/**
	* Create a beacon. You can only create one beacon at a time.
	* Steam will display the beacon in the specified location, and let up to openSlots users "follow" the beacon to your party.
	*
	* If users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.
	*
	* @param	OpenSlots				Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).
	* @param	BeaconLocation			Location information for the beacon. Should be one of the locations returned by ISteamParties::GetAvailableBeaconLocations.
	* @param	ConnectString			Connect string that will be given to the game on launch for a user that follows the beacon.
	* @param	Metadata				Additional game metadata that can be set on the beacon, and is exposed via ISteamParties::GetBeaconDetails.
	* @param	Timeout					How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Create Beacon", BlueprintInternalUseOnly="true"), Category = "SteamCore|SteamParties|Async")
	static USteamCoreSteamPartiesAsyncActionCreateBeacon* CreateBeaconAsync(UObject* WorldContextObject, int32 OpenSlots, FSteamPartyBeaconLocation BeaconLocation, FString ConnectString, FString Metadata, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FCreateBeaconData& Data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreSteamPartiesAsyncActionCreateBeacon
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UCLASS()
class STEAMCORE_API USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnChangeNumOpenSlotsCallback OnCallback;
public:
	/**
	* Create a beacon. You can only create one beacon at a time.
	* Steam will display the beacon in the specified location, and let up to openSlots users "follow" the beacon to your party.
	*
	* If users join your party through other matchmaking, adjust the number of remaining open slots using ISteamParties::ChangeNumOpenSlots.
	*
	* @param	OpenSlots		Number of reservation slots to create for the beacon. Normally, this is the size of your desired party minus one (for the current user).
	* @param	Timeout			How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Change Num Open Slots", BlueprintInternalUseOnly="true"), Category = "SteamCore|SteamParties|Async")
	static USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* ChangeNumOpenSlotsAsync(UObject* WorldContextObject, FPartyBeaconID BeaconId, int32 OpenSlots, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FChangeNumOpenSlotsData& Data, bool bWasSuccessful);
};
