/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUser
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamUserTypes.h"
#include "SteamUser.generated.h"

UCLASS()
class STEAMCORE_API UUser : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UUser() { SubsystemType = ESteamSubsystem::User; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|User|Delegates")
	FOnClientGameServerDeny ClientGameServerDeny;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|User|Delegates")
	FOnGameWebCallback GameWebCallback;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|User|Delegates")
	FOnGetAuthSessionTicketResponse GetAuthSessionTicketResponse;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|User|Delegates")
	FOnIPCFailure IpcFailure;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|User|Delegates")
	FOnLicensesUpdated LicensesUpdated;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|User|Delegates")
	FOnMicroTxnAuthorizationResponse MicroTxnAuthorizationResponse;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|User|Delegates")
	FOnSteamServerConnectFailure SteamServerConnectFailure;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|User|Delegates")
	FOnSteamServersConnected SteamServersConnected;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|User|Delegates")
	FOnSteamServersDisconnected SteamServersDisconnected;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|User|Delegates")
	FOnValidateAuthTicketResponse ValidateAuthTicketResponse;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|User|Delegates")
	FOnRequestEncryptedAppTicketResponse EncryptedAppTicketResponse;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Set the rich presence data for an unsecured game server that the user is playing on. This allows friends to be able to view the game info and join your game.
	*
	* When you are using Steam authentication system this call is never required, the auth system automatically sets the appropriate rich presence.
	*
	* @param	SteamIDGameServer	This should be k_steamIDNonSteamGS if you're setting the IP/Port, otherwise it should be k_steamIDNil if you're clearing this.
	* @param	ServerIP			The IP of the game server in host order, i.e 127.0.0.1 == 0x7f000001.
	* @param	ServerPort			The connection port of the game server, in host order.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static void AdvertiseGame(FSteamID SteamIDGameServer, FString ServerIP, int32 ServerPort);

	/**
	* Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.
	*
	* The ticket is created on the entity with GetAuthSessionTicket or ISteamGameServer::GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.
	* This registers for ValidateAuthTicketResponse_t callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.
	* When the multiplayer session terminates you must call EndAuthSession.
	*
	* @param	Ticket		The auth ticket to validate.
	* @param	SteamID		The entity's Steam ID that sent this ticket.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static ESteamBeginAuthSessionResult BeginAuthSession(TArray<uint8> Ticket, FSteamID SteamID);

	/**
	* Checks if the current users looks like they are behind a NAT device.
	*
	* This is only valid if the user is connected to the Steam servers and may not catch all forms of NAT.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static bool BIsBehindNAT();

	/**
	* Checks whether the user's phone number is used to uniquely identify them.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static bool BIsPhoneIdentifying();

	/**
	* Checks whether the current user's phone number is awaiting (re)verification.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static bool BIsPhoneRequiringVerification();

	/**
	* Checks whether the current user has verified their phone number.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static bool BIsPhoneVerified();

	/**
	* Checks whether the current user has Steam Guard two factor authentication enabled on their account.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static bool BIsTwoFactorEnabled();

	/**
	* Checks if the current user's Steam client is connected to the Steam servers.
	*
	* If it's not then no real-time services provided by the Steamworks API will be enabled. 
	* The Steam client will automatically be trying to recreate the connection as often as possible. 
	* When the connection is restored a SteamServersConnected_t callback will be posted.
	* You usually don't need to check for this yourself. 
	* All of the API calls that rely on this will check internally. Forcefully disabling 
	* stuff when the player loses access is usually not a very good experience for the player and you could be 
	* preventing them from accessing APIs that do not need a live connection to Steam.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static bool BLoggedOn();

	/**
	* Cancels an auth ticket received from GetAuthSessionTicket. This should be called when no longer playing with the specified entity.
	*
	* @param	TicketHandle	The active auth ticket to cancel.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static void CancelAuthTicket(FSteamTicketHandle TicketHandle);

	/**
	* Decodes the compressed voice data returned by GetVoice.
	*
	* The output data is raw single-channel 16-bit PCM audio. The decoder supports any sample rate from 11025 to 48000. See GetVoiceOptimalSampleRate for more information.
	* It is recommended that you start with a 20KiB buffer and then reallocate as necessary.
	*
	* @param	CompressedBuffer		The compressed data received from GetVoice.
	* @param	DesiredSampleRate		The sample rate that will be returned. This can be from 11025 to 48000, you should either use the rate that works best for your audio playback system, which likely takes the users audio hardware into account, or you can use GetVoiceOptimalSampleRate to get the native sample rate of the Steam voice decoder.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static ESteamVoiceResult DecompressVoice(const TArray<uint8>& CompressedBuffer, int32 DesiredSampleRate, TArray<uint8>& DestBuffer);

	/**
	* Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.
	*
	* @param	SteamID		The entity to end the active auth session with.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static void EndAuthSession(FSteamID SteamID);

	/**
	* Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.
	*
	* After calling this you can send the ticket to the entity where they can then call BeginAuthSession/ISteamGameServer::BeginAuthSession 
	* to verify this entities integrity.
	* When creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API, 
	* the calling application should wait for the GetAuthSessionTicketResponse_t callback generated by the 
	* API call before attempting to use the ticket to ensure that the ticket has been communicated to the server. 
	* If this callback does not come in a timely fashion (10 - 20 seconds), then your client is not connected to Steam
	* and the AuthenticateUserTicket call will fail because it can not authenticate the user.
	*
	* @param	Ticket		The buffer where the new auth ticket will be copied into if the call was successful.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static FSteamTicketHandle GetAuthSessionTicket(TArray<uint8>& Ticket);

	/**
	* Checks to see if there is captured audio data available from GetVoice, and gets the size of the data.
	*
	* Most applications will only use compressed data and should ignore the other parameters, 
	* which exist primarily for backwards compatibility. See GetVoice for further explanation of "uncompressed" data.
	*
	* @param	CompressedBytes							Returns the size of the available voice data in bytes.
	* @param	UncompressedBytes						Deprecated
	* @param	UncompressedVoiceDesiredSampleRate		Deprecated
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static ESteamVoiceResult GetAvailableVoice(int32& CompressedBytes, int32& UncompressedBytes, int32 UncompressedVoiceDesiredSampleRate = 0);

	/**
	* Retrieve an encrypted ticket.
	*
	* This should be called after requesting an encrypted app ticket with RequestEncryptedAppTicket and receiving the EncryptedAppTicketResponse_t call result.
	* You should then pass this encrypted ticket to your secure servers to be decrypted using your secret key using SteamEncryptedAppTicket::BDecryptTicket.
	* NOTE: If you call this without calling RequestEncryptedAppTicket, the call may succeed but you will likely get a stale ticket.
	*
	* @param	Ticket		The encrypted app ticket is copied into this buffer.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static bool GetEncryptedAppTicket(TArray<uint8>& Ticket);

	/**
	* Gets the level of the users Steam badge for your game.
	*
	* The user can have two different badges for a series; the regular badge (max level 5) and the foil badge (max level 1).
	*
	* @param	Series	If you only have one set of cards, the series will be 1.
	* @param	bFoil	Check if they have received the foil badge.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static int32 GetGameBadgeLevel(int32 Series, bool bFoil);

	/**
	* Gets the Steam level of the user, as shown on their Steam community profile.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static int32 GetPlayerSteamLevel();

	/**
	* Gets the Steam ID of the account currently logged into the Steam client. This is commonly called the 'current user', or 'local user'.
	*
	* A Steam ID is a unique identifier for a Steam accounts, Steam groups, Lobbies and Chat rooms, and used to differentiate users in all parts of the Steamworks API.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|User", meta = (DisplayName = "Get Steam ID (Pure)"))
	static FSteamID GetSteamID_Pure() { return GetSteamID(); }

	/**
	* Gets the Steam ID of the account currently logged into the Steam client. This is commonly called the 'current user', or 'local user'.
	*
	* A Steam ID is a unique identifier for a Steam accounts, Steam groups, Lobbies and Chat rooms, and used to differentiate users in all parts of the Steamworks API.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static FSteamID GetSteamID();

	/**
	* Read captured audio data from the microphone buffer.
	*
	* The compressed data can be transmitted by your application and decoded back into raw audio data using DecompressVoice 
	* on the other side. The compressed data provided is in an arbitrary format and is not meant to be played directly.
	*
	* This should be called once per frame, and at worst no more than four times a second to keep the microphone input delay as low as possible. 
	* Calling this any less may result in gaps in the returned stream.
	*
	* It is recommended that you pass in an 8 kilobytes or larger destination buffer for compressed audio. 
	* Static buffers are recommended for performance reasons. However, if you would like to allocate precisely the right 
	* amount of space for a buffer before each call you may use GetAvailableVoice to find out how much data is available to be read.
	* NOTE: "Uncompressed" audio is a deprecated feature and should not be used by most applications. 
	* It is raw single-channel 16-bit PCM wave data which may have been run through preprocessing filters and/or had silence removed, 
	* so the uncompressed audio could have a shorter duration than you expect. 
	* There may be no data at all during long periods of silence. Also, fetching uncompressed audio will cause GetVoice to discard 
	* any leftover compressed audio, so you must fetch both types at once. Finally, GetAvailableVoice is not precisely accurate when the 
	* uncompressed size is requested. So if you really need to use uncompressed audio, you should call GetVoice frequently with two 
	* very large (20KiB+) output buffers instead of trying to allocate perfectly-sized buffers. But most applications should ignore 
	* all of these details and simply leave the "uncompressed" parameters as NULL/0.
	*
	* @param	DestBuffer								The buffer where the audio data will be copied into.
	* @param	BytesWritten							Returns the number of bytes written into pDestBuffer. This should always be the size returned by ISteamUser::GetAvailableVoice.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static ESteamVoiceResult GetVoice(TArray<uint8>& DestBuffer, int32& BytesWritten);

	/**
	* Gets the native sample rate of the Steam voice decoder.
	*
	* Using this sample rate for DecompressVoice will perform the least CPU processing.
	* However, the final audio quality will depend on how well the audio device (and/or your application's audio output SDK) 
	* deals with lower sample rates. You may find that you get the best audio output quality when you ignore this function and 
	* use the native sample rate of your audio output device, which is usually 48000 or 44100.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static int32 GetVoiceOptimalSampleRate();

	/**
	* Requests an application ticket encrypted with the secret "encrypted app ticket key".
	*
	* The encryption key can be obtained from the Encrypted App Ticket Key page on the App Admin for your app.
	* There can only be one EncryptedAppTicketResponse_t pending, and this call is subject to a 60 second rate limit.
	* After receiving the response you should call GetEncryptedAppTicket to get the ticket data, and then you need to send it to a secure server to be decrypted with the SteamEncryptedAppTicket functions.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	void RequestEncryptedAppTicket(const FOnRequestEncryptedAppTicket& Callback, TArray<uint8> DataToInclude);

	/**
	* Requests a URL which authenticates an in-game browser for store check-out, and then redirects to the specified URL.
	*
	* As long as the in-game browser accepts and handles session cookies, Steam microtransaction checkout pages will automatically recognize the user instead of presenting a login page.
	* NOTE: The URL has a very short lifetime to prevent history-snooping attacks, so you should only call this API when you are about to launch the browser, or else immediately navigate to the result URL using a hidden browser window.
	* NOTE: The resulting authorization cookie has an expiration time of one day, so it would be a good idea to request and visit a new auth URL every 12 hours.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	void RequestStoreAuthURL(const FOnStoreAuthURLResponse& Callback, FString RedirectURL);

	/**
	* Starts voice recording.
	*
	* Once started, use GetAvailableVoice and GetVoice to get the data, and then call StopVoiceRecording when the user has released their push-to-talk hotkey or the game session has completed.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static void StartVoiceRecording();

	/**
	* Stops voice recording.
	*
	* Because people often release push-to-talk keys early, the system will keep recording for a little bit after this function is called. As such, GetVoice should continue to be called until it returns k_EVoiceResultNotRecording, only then will voice recording be stopped.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static void StopVoiceRecording();

	/**
	* Checks if the user owns a specific piece of Downloadable Content (DLC).
	*
	* This can only be called after sending the users auth ticket to ISteamGameServer::BeginAuthSession/
	*
	* @param	SteamID		The Steam ID of the user that sent the auth ticket.
	* @param	AppID		The DLC App ID to check if the user owns it.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|User")
	static ESteamUserHasLicenseForAppResult UserHasLicenseForApp(FSteamID SteamID, int32 AppID);

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if ENABLE_STEAMCORE
	STEAM_CALLBACK_MANUAL(UUser, OnClientGameServerDeny, ClientGameServerDeny_t, OnClientGameServerDenyCallbackCallback);
	STEAM_CALLBACK_MANUAL(UUser, OnGameWebCallback, GameWebCallback_t, OnGameWebCallbackCallback);
	STEAM_CALLBACK_MANUAL(UUser, OnGetAuthSessionTicketResponse, GetAuthSessionTicketResponse_t, OnGetAuthSessionTicketResponseCallback);
	STEAM_CALLBACK_MANUAL(UUser, OnIPCFailure, IPCFailure_t, OnIPCFailureCallback);
	STEAM_CALLBACK_MANUAL(UUser, OnLicensesUpdated, LicensesUpdated_t, OnLicensesUpdatedCallback);
	STEAM_CALLBACK_MANUAL(UUser, OnMicroTxnAuthorizationResponse, MicroTxnAuthorizationResponse_t, OnMicroTxnAuthorizationResponseCallback);
	STEAM_CALLBACK_MANUAL(UUser, OnSteamServersConnected, SteamServersConnected_t, OnSteamServersConnectedCallback);
	STEAM_CALLBACK_MANUAL(UUser, OnSteamServerConnectFailure, SteamServerConnectFailure_t, OnSteamServerConnectFailureCallback);
	STEAM_CALLBACK_MANUAL(UUser, OnSteamServersDisconnected, SteamServersDisconnected_t, OnSteamServersDisconnectedCallback);
	STEAM_CALLBACK_MANUAL(UUser, OnValidateAuthTicketResponse, ValidateAuthTicketResponse_t, OnValidateAuthTicketResponseCallback);
	STEAM_CALLBACK_MANUAL(UUser, OnEncryptedAppTicketResponse, EncryptedAppTicketResponse_t, OnEncryptedAppTicketResponseCallback);
#endif
};
