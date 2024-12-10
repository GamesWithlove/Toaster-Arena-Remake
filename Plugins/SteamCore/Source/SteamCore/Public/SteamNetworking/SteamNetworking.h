/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamNetworking
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamNetworkingTypes.h"
#include "SteamNetworking.generated.h"

UCLASS()
class STEAMCORE_API UNetworking : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UNetworking() { SubsystemType = ESteamSubsystem::Networking; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Networking|Delegates")
	FOnP2PSessionRequest OnP2PSessionRequestDelegate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Networking|Delegates")
	FOnP2PSessionConnectFail OnP2PSessionConnectFailDelegate;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* This allows the game to specify accept an incoming packet. This needs to be called before a real connection is established to a remote host, the game will get a chance to say whether or not the remote user is allowed to talk to them.
	*
	* When a remote user that you haven't sent a packet to recently, tries to first send you a packet, your game will receive a callback P2PSessionRequest_t. This callback contains the Steam ID of the user who wants to send you a packet. 
	* In response to this callback, you'll want to see if it's someone you want to talk to (for example, if they're in a lobby with you), and if so, accept the connection; otherwise if you don't want to talk to the user, just ignore the request. 
	* If the user continues to send you packets, another P2PSessionRequest_t will be posted periodically. If you've called SendP2PPacket on the other user, this implicitly accepts the session request.
	* Note that this call should only be made in response to a P2PSessionRequest_t callback!
	*
	* @param	SteamIDRemote		The Steam ID of the user that sent the initial packet to us.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Networking")
	bool AcceptP2PSessionWithUser(FSteamID SteamIDRemote);

	/**
	* Allow or disallow P2P connections to fall back to being relayed through the Steam servers if a direct connection or NAT-traversal cannot be established.
	*
	* This only applies to connections created after setting this value, or to existing connections that need to automatically reconnect after this value is set.
	* P2P packet relay is allowed by default.
	*
	* @param	bAllow		
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Networking")
	bool AllowP2PPacketRelay(bool bAllow);

	/**
	* Closes a P2P channel when you're done talking to a user on the specific channel.
	*
	* Once all channels to a user have been closed, the open session to the user will be closed and new data from this user will trigger a new P2PSessionRequest_t callback.
	*
	* @param	SteamIDRemote		The Steam ID of the user to close the connection with.
	* @param	Channel				The channel to close.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Networking")
	bool CloseP2PChannelWithUser(FSteamID SteamIDRemote, int32 Channel);

	/**
	* This should be called when you're done communicating with a user, as this will free up all of the resources allocated for the connection under-the-hood.
	*
	* If the remote user tries to send data to you again, a new P2PSessionRequest_t callback will be posted.
	*
	* @param	SteamIDRemote	The Steam ID of the user to close the connection with.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Networking")
	bool CloseP2PSessionWithUser(FSteamID SteamIDRemote);

	/**
	* Fills out a P2PSessionState_t structure with details about the connection like whether or not there is an active connection; number of bytes queued on the connection; the last error code, 
	*
	* if any; whether or not a relay server is being used; and the IP and Port of the remote user, if known
	* This should only needed for debugging purposes.
	*
	* @param	SteamIDRemote		The user to get the active session state information of.
	* @param	ConnectionState		Returns the state.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Networking")
	bool GetP2PSessionState(FSteamID SteamIDRemote, FSteamP2PSessionState& ConnectionState);

	/**
	* Checks if a P2P packet is available to read, and gets the size of the message if there is one.
	*
	* This should be called in a loop for each channel that you use. If there is a packet available you should call ReadP2PPacket to get the packet data.
	*
	* @param	MessageSize		Returns the size of the packet.
	* @param	Channel		The channel to check if a packet is available in.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Networking")
	bool IsP2PPacketAvailable(int32& MessageSize, int32 Channel = 0);

	/**
	* Reads in a packet that has been sent from another user via SendP2PPacket.
	*
	* If the cubDest buffer is too small for the packet, then the message will be truncated.
	* This call is not blocking, and will return false if no data is available.
	* Before calling this you should have called IsP2PPacketAvailable.
	* 
	* @param	Data			Returns the packet data by copying it into this buffer.
	* @param	OutSteamIdRemote	Returns the Steam ID of the user that sent this packet.
	* @param	Channel			The channel the packet was sent over.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Networking")
	bool ReadP2PPacket(TArray<uint8>& Data, FSteamID& OutSteamIdRemote, int32 MessageSize, int32 Channel);

	/**
	* Sends a P2P packet to the specified user.
	*
	* This is a session-less API which automatically establishes NAT-traversing or Steam relay server connections.
	* NOTE: The first packet send may be delayed as the NAT-traversal code runs.
	* See EP2PSend for descriptions of the different ways of sending packets.
	* The type of data you send is arbitrary, you can use an off the shelf system like Protocol Buffers or Cap'n Proto to encode your packets in an efficient way, or you can create your own messaging system.
	*
	* @param	SteamIDRemote		The target user to send the packet to.
	* @param	Data				The raw byte array for the packet data to send. The maximum size of this packet is defined by eP2PSendType.
	* @param	P2PSendType			Specifies how you want the data to be transmitted, such as reliably, unreliable, buffered, etc.
	* @param	Channel				The channel which acts as a virtual port to send this packet on and allows you help route message to different systems. You'll have to call ReadP2PPacket on the other end with the same channel number in order to retrieve the data on the other end. Using different channels to talk to the same user will still use the same underlying P2P connection, saving on resources. Use 0 for the primary channel, or if you do not use this feature.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Networking")
	bool SendP2PPacket(FSteamID SteamIDRemote, TArray<uint8> Data, ESteamP2PSend P2PSendType, int32 Channel = 0);
private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
	STEAM_CALLBACK_MANUAL(UNetworking, OnP2PSessionRequest, P2PSessionRequest_t, OnP2PSessionRequestCallback);
	STEAM_CALLBACK_MANUAL(UNetworking, OnP2PSessionConnectFail, P2PSessionConnectFail_t, OnP2PSessionConnectFailCallback);
#endif
};
