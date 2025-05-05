/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamNetworkingUtils
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamNetworkingUtilsTypes.h"
#include "SteamNetworkingUtils.generated.h"

UCLASS()
class STEAMCORE_API UNetworkingUtils : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UNetworkingUtils() { SubsystemType = ESteamSubsystem::NetworkingUtils; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* If you know that you are going to be using the relay network (for example, because you anticipate making P2P connections), call this to initialize the relay network. If you do not call this, the initialization will be delayed until the first time you use a feature that requires access to the relay network, which will delay that first access.
	*
	* You can also call this to force a retry if the previous attempt has failed. 
	* Performing any action that requires access to the relay network will also trigger a retry, and so calling this function is never strictly necessary,
	* but it can be useful to call it a program launch time, if access to the relay network is anticipated. 
	* Use GetRelayNetworkStatus or listen for SteamRelayNetworkStatus_t callbacks to know when initialization has completed. 
	* Typically initialization completes in a few seconds.
	*
	* Note: dedicated servers hosted in known data centers do *not* need to call this, since they do not make routing decisions. 
	* However, if the dedicated server will be using P2P functionality, it will act as a "client" and this should be called.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|NetworkingUtils")
	void InitRelayNetworkAccess();

	/**
	* Return location info for the current host. Returns the approximate age of the data, in seconds, or -1 if no data is available.
	*
	* It takes a few seconds to initialize access to the relay network. If you call this very soon after calling InitializeRelayNetworkAccess, the data may not be available yet.
	* This always return the most up-to-date information we have available right now, even if we are in the middle of re-calculating ping times.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|NetworkingUtils")
	float GetLocalPingLocation(FSteamNetworkPingLocation& Result);

	/**
	* Estimate the round-trip latency between two arbitrary locations, in milliseconds. 
	*
	* This is a conservative estimate, based on routing through the relay network. 
	* For most basic relayed connections, this ping time will be pretty accurate, since it will be based on the route likely to be actually used.
	*
	* If a direct IP route is used (perhaps via NAT traversal), then the route will be different, and the ping time might be better.
	* Or it might actually be a bit worse! Standard IP routing is frequently suboptimal!
	*
	* But even in this case, the estimate obtained using this method is a reasonable upper bound on the ping time.
	* (Also it has the advantage of returning immediately and not sending any packets.)
	*
	* In a few cases we might not able to estimate the route.
	* In this case a negative value is returned. k_nSteamNetworkingPing_Failed means the reason was because of some networking difficulty. 
	* (Failure to ping, etc) k_nSteamNetworkingPing_Unknown is returned if we cannot currently answer the question for some other reason.
	*
	* Do you need to be able to do this from a backend/matchmaking server? You are looking for the "game coordinator" library. See steamdatagramrelay for more info on how to obtain the game coordinator SDK.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|NetworkingUtils")
	int32 EstimatePingTimeBetweenTwoLocations(const FSteamNetworkPingLocation& Location1, const FSteamNetworkPingLocation& Location2);

	/**
	* Same as EstimatePingTime, but assumes that one location is the local host. This is a bit faster, especially if you need to calculate a bunch of these in a loop to find the fastest one.
	*
	* In rare cases this might return a slightly different estimate than combining GetLocalPingLocation with EstimatePingTimeBetweenTwoLocations.
	* That's because this function uses a slightly more complete set of information about what route would be taken.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|NetworkingUtils")
	int32 EstimatePingTimeFromLocalHost(const FSteamNetworkPingLocation& RemoteLocation);

	/**
	* Convert a ping location into a text format suitable for sending over the wire. 
	*
	* The format is a compact and human readable. However, it is subject to change so please do not parse it yourself. 
	* Your buffer must be at least k_cchMaxSteamNetworkingPingLocationString bytes.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|NetworkingUtils")
	static void ConvertPingLocationToString(const FSteamNetworkPingLocation& Location, FString& String);

	/**
	* Convert a ping location into a text format suitable for sending over the wire.
	*
	* The format is a compact and human readable. However, it is subject to change so please do not parse it yourself.
	* Your buffer must be at least k_cchMaxSteamNetworkingPingLocationString bytes.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|NetworkingUtils")
	static bool ParsePingLocationString(FString String, FSteamNetworkPingLocation& Result);

	/**
	* Check if the ping data of sufficient recency is available, and if it's too old, start refreshing it.
	* 
	* Please only call this function when you really do need to force an immediate refresh of the data. 
	* (For example, in response to a specific user input to refresh this information.) 
	* Don't call it "just in case", before every connection, etc. That will cause extra traffic to be sent for no benefit. 
	* The library will automatically refresh the information as needed.
	*
	* Returns true if sufficiently recent data is already available.
	* Returns false if sufficiently recent data is not available. In this case, ping measurement is initiated, if it is not already active. 
	* (You cannot restart a measurement already in progress.)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|NetworkingUtils")
	bool CheckPingDataUpToDate(float MaxAgeSeconds);
};
