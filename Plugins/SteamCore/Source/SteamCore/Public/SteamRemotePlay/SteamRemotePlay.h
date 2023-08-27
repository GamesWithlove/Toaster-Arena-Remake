/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemotePlay
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamRemotePlayTypes.h"
#include "SteamRemotePlay.generated.h"

UCLASS()
class STEAMCORE_API URemotePlay : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	URemotePlay() { SubsystemType = ESteamSubsystem::RemotePlay; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|RemotePlay|Delegates")
	FOnSteamRemotePlaySessionConnected SteamRemotePlaySessionConnected;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|RemotePlay|Delegates")
	FOnSteamRemotePlaySessionDisconnected SteamRemotePlaySessionDisconnected;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Get the number of currently connected Steam Remote Play sessions
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemotePlay")
	int32 GetSessionCount();

	/**
	* Get the currently connected Steam Remote Play session ID at the specified index
	*
	* @param	SessionIndex	The index of the specified session
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemotePlay")
	int32 GetSessionID(int32 SessionIndex);

	/**
	* Get the SteamID of the connected user
	*
	* @param	SessionID	The session ID to get information about
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemotePlay")
	FSteamID GetSessionSteamID(int32 SessionID);

	/**
	* Get the name of the session client device
	*
	* @param	SessionID	The session ID to get information about
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemotePlay")
	FString GetSessionClientName(int32 SessionID);

	/**
	* Get the form factor of the session client device
	*
	* @param	SessionID	The session ID to get information about
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemotePlay")
	ESteamCoreDeviceFormFactor GetSessionClientFormFactor(int32 SessionID);

	/**
	* Get the resolution, in pixels, of the session client device. This is set to 0x0 if the resolution is not available.
	*
	* @param	SessionID		The session ID to get information about
	* @param	ResolutionX		A pointer to a variable to fill with the device resolution width
	* @param	ResolutionY		A pointer to a variable to fill with the device resolution height
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemotePlay")
	bool BGetSessionClientResolution(int32 SessionID, int32& ResolutionX, int32& ResolutionY);

	/**
	* Invite a friend to join the game using Remote Play Together
	*
	* @param	SteamIDFriend		The Steam ID of the friend you'd like to invite
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemotePlay")
	bool BSendRemotePlayTogetherInvite(FSteamID SteamIDFriend);

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
	STEAM_CALLBACK_MANUAL(URemotePlay, OnSteamRemotePlaySessionConnected, SteamRemotePlaySessionConnected_t, OnSteamRemotePlaySessionConnectedCallback);
	STEAM_CALLBACK_MANUAL(URemotePlay, OnSteamRemotePlaySessionDisconnected, SteamRemotePlaySessionDisconnected_t, OnSteamRemotePlaySessionDisconnectedCallback);
#endif
};
