/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/isteamparties
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamPartiesTypes.h"
#include "SteamParties.generated.h"

/*
* This API can be used to selectively advertise your multiplayer game session in a Steam chat room group. Tell Steam the number of player spots that are available for your party, and a join-game string, and it will show a beacon in the selected group and allow that many users to �follow� the beacon to your party. Adjust the number of open slots if other players join through alternate matchmaking methods.
* 
* For example, you can use ISteamParties in conjunction with a private lobby. Create a private lobby, and then use ISteamParties::CreateBeacon to create a party "beacon" for the number of players desired. The game connect string should indicate the ID of the private lobby.
* The beacon will appear in Steam in the specified location (e.g. a Chat Room Group), and also via the in-game ISteamParties API as described below. Steam creates "reservation" slots for the number of desired players. Whenever a user follows the beacon, Steam will hold a reservation slot for them and launch the game using the given connect string.
* The game session that created the beacon will be notified of this reservation, so the game can display the appropriate "User <username> is joining your party" or some other indicator. Once the user joins successfully, the game session should call ISteamParties::OnReservationCompleted to tell Steam that the user successfully joined (otherwise, Steam will eventually timeout their reservation and re-open the slot).
* When all of the beacon slots are occupied - either by reservations for users still launching the game, or completed slots for users in the party - Steam will hide and disable the beacon.
* To cancel the beacon - for instance when the party is full and the game begins - call ISteamParties::DestroyBeacon.
* The client side of this operation - seeing and following beacons - can also be managed by your game. Using ISteamParties::GetNumActiveBeacons and ISteamParties::GetBeaconDetails, your game can get a list of beacons from other users that are currently active in locations relevant to the current user. If the user desires, call ISteamParties::JoinParty to "follow" one of those beacons.
*/
UCLASS()
class STEAMCORE_API USteamParties : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	USteamParties() { SubsystemType = ESteamSubsystem::SteamParties; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|SteamParties|Delegates")
	FOnJoinPartyDelegate JoinPartyDelegate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|SteamParties|Delegates")
	FOnCreateBeaconDelegate CreateBeaconDelegate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|SteamParties|Delegates")
	FOnReservationNotificationDelegate ReservationNotificationDelegate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|SteamParties|Delegates")
	FOnChangeNumOpenSlotsDelegate ChangeNumOpenSlotsDelegate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|SteamParties|Delegates")
	FOnAvailableBeaconLocationsDelegate AvailableBeaconLocationsDelegate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|SteamParties|Delegates")
	FOnActiveBeaconsDelegate ActiveBeaconsDelegate;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* This method has no parameters.
	*
	* Get the number of active party beacons created by other users for your game, that are visible to the current user.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|SteamParties|Client")
	static int32 GetNumActiveBeacons();

	/**
	* Use with GetNumActiveBeacons to iterate the active beacons visible to the current user. 
	*
	* unIndex is a zero-based index, so iterate over the range [0, GetNumActiveBeacons() - 1]. 
	* The return is a PartyBeaconID_t that can be used with ISteamParties::GetBeaconDetails to get information about the beacons suitable for display to the user.
	* 
	* @param	Index	Index of Beacon.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|SteamParties|Client")
	static FPartyBeaconID GetBeaconByIndex(int32 Index);

	/**
	* Get details about the specified beacon. 
	*
	* You can use the ISteamFriends API to get further details about pSteamIDBeaconOwner, GetBeaconLocationData to get further details about pLocation. 
	* The pchMetadata contents are specific to your game, and will be whatever was set (if anything) by the game process that created the beacon.
	* 
	* @param	BeaconId				Beacon ID to query.
	* @param	SteamIDBeaconOwner		Creator of the beacon.
	* @param	Location				Location the beacon has been posted.
	* @param	OutMetadata				Buffer to receive any additional metadata the game has set on this beacon (e.g. game mode).
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|SteamParties|Client")
	static bool GetBeaconDetails(FPartyBeaconID BeaconId, FSteamID& SteamIDBeaconOwner, FSteamPartyBeaconLocation& Location, FString& OutMetadata);

	/**
	* When the user indicates they wish to join the party advertised by a given beacon, call this method. 
	* On success, Steam will reserve a slot for this user in the party and return the necessary "join game" string to use to complete the connection.
	*
	* @param	beaconID				Beacon ID for the party you wish to join.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|SteamParties|Client")
	void JoinParty(const FOnJoinParty& Callback, FPartyBeaconID BeaconId);

	/**
	* Get the number of locations in which you are able to post a party beacon.
	*
	* Use this to size your result list for a call to ISteamParties::GetAvailableBeaconLocations.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|SteamParties|Host")
	static bool GetNumAvailableBeaconLocations(int32& NumLocations);

	/**
	* Get the list of locations in which you can post a party beacon.
	* 
	* @param	LocationList		Output list of available beacon locations.
	* @param	MaxNumLocations	The maximum number of entries to put into the above list. Should be >= the result from GetNumAvailableBeaconLocations.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|SteamParties|Host")
	static bool GetAvailableBeaconLocations(TArray<FSteamPartyBeaconLocation>& LocationList, int32 MaxNumLocations = 10);

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
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|SteamParties|Host")
	void CreateBeacon(const FOnCreateBeacon& Callback, int32 OpenSlots, FSteamPartyBeaconLocation BeaconLocation, FString ConnectString, FString Metadata);

	/**
	* When a user follows your beacon, Steam will reserve one of the open party slots for them, and send your game a ReservationNotificationCallback_t callback. 
	* When that user joins your party, call OnReservationCompleted to notify Steam that the user has joined successfully.
	*
	* @param	BeaconId		Beacon ID for the beacon created by your process.
	* @param	SteamIDUser		SteamID of the user joining your party.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|SteamParties|Host")
	static void OnReservationCompleted(FPartyBeaconID BeaconId, FSteamID SteamIDUser);

	/**
	* To cancel a reservation (due to timeout or user input), call this.
	* Steam will open a new reservation slot.
	* Note: The user may already be in-flight to your game, so it's possible they will still connect and try to join your party.
	*
	* @param	BeaconId
	* @param	SteamIDUser
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|SteamParties|Host")
	static void CancelReservation(FPartyBeaconID BeaconId, FSteamID SteamIDUser);

	/**
	* If a user joins your party through other matchmaking (perhaps a direct Steam friend, or your own matchmaking system), your game should reduce the number of open slots that Steam is managing through the party beacon.
	* For example, if you created a beacon with five slots, and Steam sent you two ReservationNotificationCallback_t callbacks, and then a third user joined directly, you would want to call ChangeNumOpenSlots with a value of 2 for unOpenSlots.
	* That value represents the total number of new users that you would like Steam to send to your party.
	*
	* @param	BeaconId				Beacon ID for the beacon created by your process.
	* @param	OpenSlots			The new number of open slots in your party.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|SteamParties|Host")
	void ChangeNumOpenSlots(const FOnChangeNumOpenSlots& Callback, FPartyBeaconID BeaconId, int32 OpenSlots);

	/**
	* Call this method to destroy the Steam party beacon.
	*
	* This will immediately cause Steam to stop showing the beacon in the target location.
	* Note that any users currently in-flight may still arrive at your party expecting to join.
	* Your game should call this method when either the party has been filled and the game is beginning, or the user has decided to abandon creating a party.
	* The beacon will be destroyed automatically when your game exits, but the preferred behavior is for the game to call DestroyBeacon at the right time.
	*
	* @param	BeaconId		Beacon ID to be destroyed.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|SteamParties|Host")
	static bool DestroyBeacon(FPartyBeaconID BeaconId);

	/**
	* Query general metadata for the given beacon location.
	*
	* For instance the Name, or the URL for an icon if the location type supports icons (for example, the icon for a Steam Chat Room Group).
	*
	* @param	BeaconLocation			Location to query.
	* @param	EData					Type of location data you wish to get.
	* @param	PCHDataStringOut		Output buffer for location data string.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|SteamParties|Host")
	static bool GetBeaconLocationData(FSteamPartyBeaconLocation BeaconLocation, ESteamPartiesBeaconLocationData EData, FString& PCHDataStringOut);

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
	STEAM_CALLBACK_MANUAL(USteamParties, OnJoinPartyUpdated, JoinPartyCallback_t, OnJoinPartyCallback);
	STEAM_CALLBACK_MANUAL(USteamParties, OnCreateBeaconUpdated, CreateBeaconCallback_t, OnCreateBeaconCallback);
	STEAM_CALLBACK_MANUAL(USteamParties, OnReservationNotificationUpdated, ReservationNotificationCallback_t, OnReservationNotificationCallback);
	STEAM_CALLBACK_MANUAL(USteamParties, OnChangeNumOpenSlotsUpdated, ChangeNumOpenSlotsCallback_t, OnChangeNumOpenSlotsCallback);
	STEAM_CALLBACK_MANUAL(USteamParties, OnAvailableBeaconLocationsUpdated, AvailableBeaconLocationsUpdated_t, OnAvailableBeaconLocationsCallback);
	STEAM_CALLBACK_MANUAL(USteamParties, OnActiveBeaconsUpdated, ActiveBeaconsUpdated_t, OnActiveBeaconsCallback);
#endif
};
