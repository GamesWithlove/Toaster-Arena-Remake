/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServer
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamGameServerTypes.h"
#include "SteamGameServer.generated.h"

UCLASS()
class STEAMCORE_API USteamGameServer : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	USteamGameServer() { SubsystemType = ESteamSubsystem::GameServer; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|GameServer|Delegates")
	FOnGSPolicyResponse GSPolicyResponse;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|GameServer|Delegates")
	FOnGSClientGroupStatus GSClientGroupStatus;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|GameServer|Delegates")
	FOnGSValidateAuthTicketResponse GSValidateAuthTicketResponse;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|GameServer|Delegates")
	FOnGSClientApprove GSClientApprove;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|GameServer|Delegates")
	FOnGSClientDeny GSClientDeny;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Associate this game server with this clan for the purposes of computing player compatibility.
	*
	* @param	SteamIDClan		The Steam ID of the group you want to be associated with.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer", meta = (AutoCreateRefTerm = "Callback"))
	void AssociateWithClan(const FOnAssociateWithClan& Callback, FSteamID SteamIDClan);

	/**
	* Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.
	*
	* The ticket is created on the entity with ISteamUser::GetAuthSessionTicket or GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.
	* This registers for ValidateAuthTicketResponse_t Callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.
	* When the multiplayer session terminates you must call EndAuthSession.
	*
	* @param	Ticket		The auth ticket to validate.
	* @param	SteamID		The entity's Steam ID that sent this ticket.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	ESteamBeginAuthSessionResult BeginAuthSession(TArray<uint8> Ticket, FSteamID SteamID);

	/**
	* Checks if the game server is logged on.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	bool BLoggedOn();

	/**
	* Checks whether the game server is in "Secure" mode.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	bool BSecure();

	/**
	* Checks whether the game server is in "Secure" mode.
	*
	* @param	SteamIDUser		The Steam ID of the user.
	* @param	PlayerName		The name of the user.
	* @param	Score			The current score of the user.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	bool BUpdateUserData(FSteamID SteamIDUser, FString PlayerName, int32 Score);

	/**
	* Cancels an auth ticket received from ISteamUser::GetAuthSessionTicket. This should be called when no longer playing with the specified entity.
	*
	* @param	TicketHandle	The active auth ticket to cancel.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void CancelAuthTicket(FSteamTicketHandle TicketHandle);

	/**
	* Clears the whole list of key/values that are sent in rules queries.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void ClearAllKeyValues();

	/**
	* Checks if any of the current players don't want to play with this new player that is attempting to join - or vice versa; based on the frenemy system.
	*
	* @param	SteamIDNewPlayer	The Steam ID of the player that is attempting to join.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer", meta = (AutoCreateRefTerm = "Callback"))
	void ComputeNewPlayerCompatibility(const FOnComputeNewPlayerCompatibility& Callback, FSteamID SteamIDNewPlayer);

	/**
	* Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	FSteamID CreateUnauthenticatedUserConnection();

	/**
	* Tells the Steam master servers whether or not you want to be active.
	*
	* If this is enabled then the server will talk to the master servers, if it's not then incoming messages are ignored and heartbeats will not be sent.
	*
	* @param	bActive		Enable (true) or disable (false) the master server updater.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void EnableHeartbeats(bool bActive);

	/**
	* Indicate whether you wish to be listed on the master server list
	* and/or respond to server browser / LAN discovery packets.
	* The server starts with this value set to false.  You should set all
	*  relevant server parameters before enabling advertisement on the server.
	*  	
	*  (This function used to be named EnableHeartbeats, so if you are wondering
	*  where that function went, it's right here.  It does the same thing as before,
	*  the old name was just confusing.)
	*
	* @param	bActive		Enable (true) or disable (false) the master server updater.
	*/
	
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void SetAdvertiseServerActive(bool bActive);

	/**
	* Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.
	*
	* @param	SteamID		The entity to end the active auth session with.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void EndAuthSession(FSteamID SteamID);

	/**
	* Force a heartbeat to the Steam master servers at the next opportunity.
	*
	* You usually don't need to use this.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void ForceHeartbeat();

	/**
	* Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.
	*
	* After calling this you can send the ticket to the entity where they can then call ISteamUser::BeginAuthSession to verify this entities integrity.
	* When creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API, the calling application should wait for the GetAuthSessionTicketResponse_t Callback 
	* generated by the API call before attempting to use the ticket to ensure that the ticket has been communicated to the server. 
	* If this Callback does not come in a timely fashion (10 - 20 seconds), then your client is not connected to Steam, and the AuthenticateUserTicket call will fail because it can not authenticate the user.
	*
	* @param	Ticket		The buffer where the new auth ticket will be copied into if the call was successful.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	FSteamTicketHandle GetAuthSessionTicket(TArray<uint8>& Ticket);

	/**
	* Gets the Steam ID of the game server.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	FString GetServerPublicIP();

	/**
	* Gets the Steam ID of the game server.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|GameServer", meta = (DisplayName = "Get Server Public Ip (Pure)", Keywords = "Get Ip"))
	FString GetServerPublicIP_Pure() { return GetServerPublicIP(); }

	/**
	* Gets the Steam ID of the game server.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|GameServer", meta = (DisplayName = "Get Server Public Ip (Compact)", Keywords = "Get Ip", CompactNodeTitle = "Server Ip"))
	FString GetServerPublicIP_PureCompact() { return GetServerPublicIP(); }

	/**
	* Gets the Steam ID of the game server.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	FSteamID GetServerSteamID();

	/**
	* Gets the Steam ID of the game server.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|GameServer", meta = ( DisplayName = "Get Server Steam Id (Pure)", Keywords = "Get Steam Id"))
	FSteamID GetServerSteamID_Pure() { return GetServerSteamID(); }

	/**
	* Gets the Steam ID of the game server.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|GameServer", meta = (DisplayName = "Get Server Steam Id (Compact)", Keywords = "Get Steam Id", CompactNodeTitle = "Server Id"))
	FSteamID GetServerSteamID_PureCompact() { return GetServerSteamID(); }

	/**
	* Begin process of logging the game server out of steam.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void LogOff();

	/**
	* Begin process to login to a persistent game server account.
	* 
	* @param	Token	
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void LogOn(FString Token);

	/**
	* Login to a generic, anonymous account.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void LogOnAnonymous();

	/**
	* Checks if a user is in the specified Steam group.
	*
	* @param	SteamIDUser		The user to check the group status of.
	* @param	SteamIDGroup	The group to check.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	bool RequestUserGroupStatus(FSteamID SteamIDUser, FSteamID SteamIDGroup);

	/**
	* Sets the number of bot/AI players on the game server. The default value is 0.
	*
	* @param	Botplayers	The number of bot/AI players currently playing on the server.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void SetBotPlayerCount(int32 Botplayers);

	/**
	* Sets the whether this is a dedicated server or a listen server. The default is listen server.
	*
	* @param	bDedicated		Is this a dedicated server (true) or a listen server (false)?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void SetDedicatedServer(bool bDedicated);

	/**
	* Sets a string defining the "gamedata" for this server.
	*
	* This is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.
	* This is usually formatted as a comma or semicolon separated list.
	* Don't set this unless it actually changes, its only uploaded to the master once; when acknowledged.
	*
	* @param	GameData	The new "gamedata" value to set. Must not be NULL or an empty string (""). This can not be longer than k_cbMaxGameServerGameData.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void SetGameData(FString GameData);

	/**
	* Sets the game description. Setting this to the full name of your game is recommended.
	*
	* This is required for all game servers and can only be set before calling LogOn or LogOnAnonymous.
	*
	* @param	GameDescription		The description of your game. Must not be NULL or an empty string (""). This can not be longer than k_cbMaxGameServerGameDescription.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void SetGameDescription(FString GameDescription);

	/**
	* Sets a string defining the "gametags" for this server, this is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.
	*
	* This is usually formatted as a comma or semicolon separated list.
	* Don't set this unless it actually changes, its only uploaded to the master once; when acknowledged.
	*
	* @param	GameTags	The new "gametags" value to set. Must not be NULL or an empty string (""). This can not be longer than k_cbMaxGameServerTags.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void SetGameTags(FString GameTags);

	/**
	* Changes how often heartbeats are sent to the Steam master servers.
	*
	* You usually don't need to use this.
	*
	* @param	HeartbeatInterval	The interval between sending heartbeats in milliseconds. Typically would range between 250-1000. Use -1 to use the default value.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void SetHeartbeatInterval(int32 HeartbeatInterval);

	/** 
	* Add/update a rules key/value pair.
	*
	* @param	Key			key to update
	* @param	Value		value to set
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void SetKeyValue(FString Key, FString Value);

	/**
	* Sets the name of map to report in the server browser.
	*
	* @param	MapName		The new map name to set. Must not be NULL or an empty string (""). This can not be longer than k_cbMaxGameServerMapName.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void SetMapName(FString MapName);

	/**
	* Sets the maximum number of players allowed on the server at once.
	*
	* This value may be changed at any time.
	*
	* @param	PlayersMax		The new maximum number of players allowed on this server.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void SetMaxPlayerCount(int32 PlayersMax);

	/**
	* Sets the game directory.
	*
	* This should be the same directory game where gets installed into. Just the folder name, not the whole path. I.e. "Spacewar".
	*
	* @param	ModDir		The game directory to set. Must not be NULL or an empty string (""). This can not be longer than k_cbMaxGameServerGameDir.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void SetModDir(FString ModDir);

	/**
	* Set whether the game server will require a password once when the user tries to join.
	*
	* @param	bPasswordProtected		Enable (true) or disable (false) password protection.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void SetPasswordProtected(bool bPasswordProtected);

	/**
	* Sets the game product identifier. This is currently used by the master server for version checking purposes.
	*
	* Converting the games app ID to a string for this is recommended.
	*
	* @param	Product		The unique identifier for your game. Must not be NULL or an empty string ("").
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void SetProduct(FString Product);

	/**
	* Region identifier. This is an optional field, the default value is an empty string, meaning the "world" region.
	*
	* @param	Region		region
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void SetRegion(FString Region);

	/**
	* Sets the name of server as it will appear in the server browser.
	*
	* @param	ServerName		The new server name to set. Must not be NULL or an empty string (""). This can not be longer than k_cbMaxGameServerName.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void SetServerName(FString ServerName);

	/**
	* Set whether the game server allows spectators, and what port they should connect on. The default value is 0, meaning the service is not used.
	*
	* @param	SpectatorPort		The port for spectators to join.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void SetSpectatorPort(int32 SpectatorPort);


	/**
	* Sets the name of the spectator server. This is only used if spectator port is nonzero.
	*
	* @param	SpectatorServerName		The spectator server name to set. Must not be NULL or an empty string (""). This can not be longer than k_cbMaxGameServerMapName.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	void SetSpectatorServerName(FString SpectatorServerName);

	/**
	* Checks if the user owns a specific piece of Downloadable Content (DLC).
	*
	* This can only be called after sending the users auth ticket to BeginAuthSession/
	*
	* @param	SteamID		The Steam ID of the user that sent the auth ticket.
	* @param	AppID		The DLC App ID to check if the user owns it.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	ESteamUserHasLicenseForAppResult UserHasLicenseForApp(FSteamID SteamID, int32 AppID);

	/**
	* Checks if the master server has alerted us that we are out of date.
	*
	* This reverts back to false after calling this function.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServer")
	bool WasRestartRequested();

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
	STEAM_CALLBACK_MANUAL(USteamGameServer, OnGSPolicyResponse, GSPolicyResponse_t, OnGSPolicyResponseCallback);
	STEAM_CALLBACK_MANUAL(USteamGameServer, OnGSClientGroupStatus, GSClientGroupStatus_t, OnGSClientGroupStatusCallback);
	STEAM_CALLBACK_MANUAL(USteamGameServer, OnGSValidateAuthTicketResponse, ValidateAuthTicketResponse_t, OnGSValidateAuthTicketResponseCallback);
	STEAM_CALLBACK_MANUAL(USteamGameServer, OnGSClientApprove, GSClientApprove_t, OnGSClientApproveCallback);
	STEAM_CALLBACK_MANUAL(USteamGameServer, OnGSClientDeny, GSClientDeny_t, OnGSClientDenyCallback);
#endif
};
