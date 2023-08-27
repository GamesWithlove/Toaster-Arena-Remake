/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmaking
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamMatchmakingTypes.h"
#include "SteamMatchmaking.generated.h"

UCLASS()
class STEAMCORE_API UMatchmaking : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UMatchmaking() { SubsystemType = ESteamSubsystem::Matchmaking; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Matchmaking|Delegates")
	FOnFavoritesListAccountsUpdated FavoritesListAccountsUpdated;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Matchmaking|Delegates")
	FOnFavoritesListChanged FavoritesListChanged;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Matchmaking|Delegates")
	FOnLobbyChatMsg LobbyChatMsg;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Matchmaking|Delegates")
	FOnLobbyChatUpdate LobbyChatUpdate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Matchmaking|Delegates")
	FOnLobbyDataUpdate LobbyDataUpdate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Matchmaking|Delegates")
	FOnLobbyEnter LobbyEnter;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Matchmaking|Delegates")
	FOnLobbyGameCreated LobbyGameCreated;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Matchmaking|Delegates")
	FOnLobbyInvite LobbyInvite;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Matchmaking|Delegates")
	FOnLobbyKicked LobbyKicked;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Adds the game server to the local favorites list or updates the time played of the server if it already exists in the list.
	*
	* @param	AppID						The App ID of the game.
	* @param	IP							The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.
	* @param	ConnectionPort				The port used to connect to the server, in host order.
	* @param	QueryPort					The port used to query the server, in host order.
	* @param	Flags						Sets the whether the server should be added to the favorites list or history list. See k_unFavoriteFlagNone for more information.
	* @param	TimeLastPlayedOnServer		This should be the current time in Unix epoch format (seconds since Jan 1st, 1970).
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static int32 AddFavoriteGame(int32 AppID, FString IP, int32 ConnectionPort, int32 QueryPort, TArray<ESteamFavoriteFlags> Flags, int32 TimeLastPlayedOnServer);

	/**
	* Unused - Checks the player compatibility based on the frenemy system.
	*
	* @param	SteamIDLobby
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static void AddRequestLobbyListCompatibleMembersFilter(FSteamID SteamIDLobby);

	/**
	* Sets the physical distance for which we should search for lobbies, this is based on the users IP address and a IP location map on the Steam backed.
	*
	* @param	LobbyDistanceFilter		Specifies the maximum distance.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static void AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter LobbyDistanceFilter);

	/**
	* Filters to only return lobbies with the specified number of open slots available.
	*
	* @param	SlotsAvailable	The number of open slots that must be open.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static void AddRequestLobbyListFilterSlotsAvailable(int32 SlotsAvailable);

	/**
	* Sorts the results closest to the specified value.
	*
	* Near filters don't actually filter out values, they just influence how the results are sorted. You can specify multiple near filters, with the first near filter influencing the most, and the last near filter influencing the least.
	*
	* @param	KeyToMatch			The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.
	* @param	ValueToBeCloseTo	The value that lobbies will be sorted on.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static void AddRequestLobbyListNearValueFilter(FString KeyToMatch, int32 ValueToBeCloseTo);

	/**
	* Adds a numerical comparison filter to the next RequestLobbyList call.
	*
	* @param	KeyToMatch			The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.
	* @param	ValueToMatch		The number to match.
	* @param	ComparisonType		The type of comparison to make.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static void AddRequestLobbyListNumericalFilter(FString KeyToMatch, int32 ValueToMatch, ESteamLobbyComparison ComparisonType);

	/**
	* Sets the maximum number of lobbies to return. The lower the count the faster it is to download the lobby results & details to the client.
	*
	* @param	MaxResults	The maximum number of lobbies to return.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static void AddRequestLobbyListResultCountFilter(int32 MaxResults);

	/**
	* Adds a string comparison filter to the next RequestLobbyList call.
	*
	* @param	KeyToMatch			The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.
	* @param	ValueToMatch		The string to match.
	* @param	ComparisonType		The type of comparison to make.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static void AddRequestLobbyListStringFilter(FString KeyToMatch, FString ValueToMatch, ESteamLobbyComparison ComparisonType);

	/**
	* Create a new matchmaking lobby.
	*
	* @param	LobbyType		The type and visibility of this lobby. This can be changed later via SetLobbyType.
	* @param	MaxMembers			The maximum number of players that can join this lobby. This can not be above 250.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking", meta = (AutoCreateRefTerm = "Callback"))
	void CreateLobby(const FOnCreateLobby& Callback, ESteamLobbyType LobbyType, int32 MaxMembers);

	/**
	* Removes a metadata key from the lobby.
	*
	* This can only be done by the owner of the lobby.
	* This will only send the data if the key existed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.
	*
	* @param	SteamIDLobby	The Steam ID of the lobby to delete the metadata for.
	* @param	Key				The key to delete the data for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static bool DeleteLobbyData(FSteamID SteamIDLobby, FString Key);

	/**
	* Gets the details of the favorite game server by index.
	*
	* You must call GetFavoriteGameCount before calling this.
	*
	* @param	Game						The index of the favorite game server to get the details of. This must be between 0 and GetFavoriteGameCount
	* @param	AppID						Returns the App ID this server is for.
	* @param	IP							Returns the IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.
	* @param	ConnectionPort				Returns the port used to connect to the server, in host order.
	* @param	QueryPort					Returns the port used to query the server, in host order.
	* @param	Flags						Returns whether the server is on the favorites list or the history list. See k_unFavoriteFlagNone for more information.
	* @param	TimeLastPlayedOnServer		Returns the time the server was last added to the favorites list in Unix epoch format (seconds since Jan 1st, 1970).
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static bool GetFavoriteGame(int32 Game, int32& AppID, FString& IP, int32& ConnectionPort, int32& QueryPort, TArray<ESteamFavoriteFlags>& Flags, int32& TimeLastPlayedOnServer);

	/**
	* Gets the number of favorite and recent game servers the user has stored locally.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static int32 GetFavoriteGameCount();

	/**
	* Gets the Steam ID of the lobby at the specified index after receiving the RequestLobbyList results.
	*
	* This should only be called after a LobbyMatchList_t call result is received.
	*
	* @param	Lobby	The index of the lobby to get the Steam ID of, from 0 to LobbyMatchList_t.m_nLobbiesMatching.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static FSteamID GetLobbyByIndex(int32 Lobby);

	/**
	* Gets the data from a lobby chat message after receiving a LobbyChatMsg_t Callback.
	*
	* @param	SteamIDLobby			The Steam ID of the lobby to get the chat entry from. This should almost always be LobbyChatMsg_t::m_ulSteamIDUser.
	* @param	MessageID				The index of the chat entry in the lobby. This should almost always be LobbyChatMsg_t::m_iChatID.
	* @param	SteamIDUser				If set then this returns the Steam ID of the user who sent this message. Usually unneeded since it will be the same as LobbyChatMsg_t::m_ulSteamIDUser.
	* @param	Message					Returns the message data by copying it into this buffer. This buffer should be up to 4 Kilobytes.
	* @param	ChatEntryType			If set then this will just always return k_EChatEntryTypeChatMsg. This can usually just be set to NULL.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static int32 GetLobbyChatEntry(FSteamID SteamIDLobby, int32 MessageID, FSteamID& SteamIDUser, FString& Message, ESteamChatEntryType& ChatEntryType);

	/**
	* Gets the metadata associated with the specified key from the specified lobby.
	*
	* This can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.
	*
	* @param	SteamIDLobby	The Steam ID of the lobby to get the metadata from.
	* @param	Key				The key to get the value of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static FString GetLobbyData(FSteamID SteamIDLobby, FString Key);

	/**
	* Gets a lobby metadata key/value pair by index.
	*
	* You must call GetLobbyDataCount before calling this.
	*
	* @param	SteamIDLobby		This MUST be the same lobby used in the previous call to GetLobbyDataCount!
	* @param	LobbyData			An index between 0 and GetLobbyDataCount.
	* @param	Key					Returns the name of the key at the specified index by copying it into this buffer.
	* @param	Value				Returns the value associated with the key at the specified index by copying it into this buffer.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static bool GetLobbyDataByIndex(FSteamID SteamIDLobby, int32 LobbyData, FString& Key, FString& Value);

	/**
	* Gets the number of metadata keys set on the specified lobby.
	*
	* This can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.
	* This is used for iteration, after calling this then GetLobbyDataByIndex can be used to get the key/value pair of each piece of metadata.
	* This should typically only ever be used for debugging purposes.
	*
	* @param	SteamIDLobby	 The Steam ID of the lobby to get the data count from.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static int32 GetLobbyDataCount(FSteamID SteamIDLobby);

	/**
	* Gets the details of a game server set in a lobby.
	*
	* Either the IP/Port or the Steam ID of the game server has to be valid, depending on how you want the clients to be able to connect.
	*
	* @param	SteamIDLobby			The Steam ID of the lobby to get the game server information from.
	* @param	GameServerIP			Returns the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001, if it's set.
	* @param	GameServerPort			Returns the connection port of the game server, in host order, if it's set.
	* @param	SteamIDGameServer		Returns the Steam ID of the game server, if it's set.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static bool GetLobbyGameServer(FSteamID SteamIDLobby, FString& GameServerIP, int32& GameServerPort, FSteamID& SteamIDGameServer);

	/**
	* Gets the Steam ID of the lobby member at the given index.
	*
	* You must call GetNumLobbyMembers before calling this.
	* The current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.
	*
	* @param	SteamIDLobby	This MUST be the same lobby used in the previous call to GetNumLobbyMembers!
	* @param	Member			An index between 0 and GetNumLobbyMembers.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static FSteamID GetLobbyMemberByIndex(FSteamID SteamIDLobby, int32 Member);

	/**
	* Gets per-user metadata from another player in the specified lobby.
	*
	* This can only be queried from members in lobbies that you are currently in.
	*
	* @param	SteamIDLobby	The Steam ID of the lobby that the other player is in.
	* @param	SteamIDUser		The Steam ID of the player to get the metadata from.
	* @param	Key				The key to get the value of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static FString GetLobbyMemberData(FSteamID SteamIDLobby, FSteamID SteamIDUser, FString Key);

	/**
	* The current limit on the # of users who can join the lobby.
	*
	* @param	SteamIDLobby	The Steam ID of the lobby to get the member limit of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static int32 GetLobbyMemberLimit(FSteamID SteamIDLobby);

	/**
	* Returns the current lobby owner.
	*
	* You must be a member of the lobby to access this.
	* There always one lobby owner - if the current owner leaves, another user in the lobby will become the owner automatically. It is possible (but rare) to join a lobby just as the owner is leaving, thus entering a lobby with self as the owner.
	*
	* @param	SteamIDLobby	The Steam ID of the lobby to get the owner of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static FSteamID GetLobbyOwner(FSteamID SteamIDLobby);

	/**
	* Gets the number of users in a lobby.
	*
	* The current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.
	* This is used for iteration, after calling this then GetLobbyMemberByIndex can be used to get the Steam ID of each person in the lobby. Persona information for other lobby members (name, avatar, etc.) is automatically received and accessible via the ISteamFriends interface.
	*
	* @param	SteamIDLobby	The Steam ID of the lobby to get the number of members of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static int32 GetNumLobbyMembers(FSteamID SteamIDLobby);

	/**
	* Invite another user to the lobby.
	*
	* If the specified user clicks the join link, a GameLobbyJoinRequested_t Callback will be posted if the user is in-game,
	* or if the game isn't running yet then the game will be automatically launched with the command line parameter +connect_lobby <64-bit lobby Steam ID> instead.
	*
	* @param	SteamIDLobby		The Steam ID of the lobby to invite the user to.
	* @param	SteamIDInvitee		The Steam ID of the person who will be invited.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static bool InviteUserToLobby(FSteamID SteamIDLobby, FSteamID SteamIDInvitee);

	/**
	* Joins an existing lobby.
	*
	* The lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.
	*
	* @param	SteamIDLobby	The Steam ID of the lobby to join.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking", meta = (AutoCreateRefTerm = "Callback"))
	void JoinLobby(const FOnJoinLobby& Callback, FSteamID SteamIDLobby);

	/**
	* Leave a lobby that the user is currently in; this will take effect immediately on the client side, other users in the lobby will be notified by a LobbyChatUpdate_t Callback.
	*
	* @param	SteamIDLobby	The lobby to leave.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static void LeaveLobby(FSteamID SteamIDLobby);

	/**
	* Removes the game server from the local favorites list.
	*
	* @param	AppID				The App ID of the game.
	* @param	IP					The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.
	* @param	ConnectionPort		The port used to connect to the server, in host order.
	* @param	QueryPort			The port used to query the server, in host order.
	* @param	Flags				Whether the server is on the favorites list or history list. See k_unFavoriteFlagNone for more information.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static bool RemoveFavoriteGame(int32 AppID, FString IP, int32 ConnectionPort, int32 QueryPort, TArray<ESteamFavoriteFlags> Flags);

	/**
	* Refreshes all of the metadata for a lobby that you're not in right now.
	*
	* You will never do this for lobbies you're a member of, that data will always be up to date. You can use this to refresh lobbies that you have obtained from RequestLobbyList or that are available via friends.
	*
	* @param	SteamIDLobby	The Steam ID of the lobby to refresh the metadata of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static bool RequestLobbyData(FSteamID SteamIDLobby);

	/**
	* Get a filtered list of relevant lobbies.
	*
	* There can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.
	* To filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.
	* If AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.
	* This will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable.
	*
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking", meta = (AutoCreateRefTerm = "Callback"))
	void RequestLobbyList(const FOnRequestLobbyList& Callback);

	/**
	* Broadcasts a chat (text or binary data) message to the all of the users in the lobby.
	*
	* All users in the lobby (including the local user) will receive a LobbyChatMsg_t Callback with the message.
	* If you're sending binary data, you should prefix a header to the message so that you know to treat it as your custom data rather than a plain old text message.
	* For communication that needs to be arbitrated (for example having a user pick from a set of characters, and making sure only one user has picked a character), you can use the lobby owner as the decision maker. GetLobbyOwner returns the current lobby owner. There is guaranteed to always be one and only one lobby member who is the owner. So for the choose-a-character scenario, the user who is picking a character would send the binary message 'I want to be Zoe', the lobby owner would see that message, see if it was OK, and broadcast the appropriate result (user X is Zoe).
	* These messages are sent via the Steam back-end, and so the bandwidth available is limited. For higher-volume traffic like voice or game data, you'll want to use the Steam Networking API.
	*
	* @param	SteamIDLobby	The Steam ID of the lobby to send the chat message to.
	* @param	Message			This can be text or binary data, up to 4 Kilobytes in size.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static bool SendLobbyChatMsg(FSteamID SteamIDLobby, FString Message);

	/**
	* Unused - Link two lobbies for the purposes of checking player compatibility using the frenemy system.
	* You must be the lobby owner of both lobbies.
	*
	* @param	SteamIDLobby				The Steam ID of the primary lobby.
	* @param	SteamIDLobbyDependent		The Steam ID that will be linked to the primary lobby.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static bool SetLinkedLobby(FSteamID SteamIDLobby, FSteamID SteamIDLobbyDependent);

	/**
	* Sets a key/value pair in the lobby metadata. This can be used to set the the lobby name, current map, game mode, etc.
	*
	* This can only be set by the owner of the lobby. Lobby members should use SetLobbyMemberData instead.
	* Each user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.
	* This will only send the data if it has changed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.
	*
	* @param	SteamIDLobby		The Steam ID of the lobby to set the metadata for.
	* @param	Key					The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.
	* @param	Value				The value to set. This can not be longer than k_cubChatMetadataMax.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static bool SetLobbyData(FSteamID SteamIDLobby, FString Key, FString Value);

	/**
	* Sets the game server associated with the lobby.
	*
	* This can only be set by the owner of the lobby.
	* Either the IP/Port or the Steam ID of the game server must be valid, depending on how you want the clients to be able to connect.
	* A LobbyGameCreated_t Callback will be sent to all players in the lobby, usually at this point, the users will join the specified game server.
	*
	* @param	SteamIDLobby			The Steam ID of the lobby to set the game server information for.
	* @param	GameServerIP			Sets the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001.
	* @param	GameServerPort			Sets the connection port of the game server, in host order.
	* @param	SteamIDGameServer		Sets the Steam ID of the game server. Use k_steamIDNil if you're not setting this.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static void SetLobbyGameServer(FSteamID SteamIDLobby, FString GameServerIP, int32 GameServerPort, FSteamID SteamIDGameServer);

	/**
	* Sets whether or not a lobby is joinable by other players. This always defaults to enabled for a new lobby.
	*
	* If joining is disabled, then no players can join, even if they are a friend or have been invited.
	* Lobbies with joining disabled will not be returned from a lobby search.
	*
	* @param	SteamIDLobby		The Steam ID of the lobby
	* @param	bLobbyJoinable		Enable (true) or disable (false) allowing users to join this lobby?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static bool SetLobbyJoinable(FSteamID SteamIDLobby, bool bLobbyJoinable);

	/**
	* Sets per-user metadata for the local user.
	*
	* Each user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.
	* There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.
	*
	* @param	SteamIDLobby		The Steam ID of the lobby to set our metadata in.
	* @param	Key					The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.
	* @param	Value				The value to set. This can not be longer than k_cubChatMetadataMax.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static void SetLobbyMemberData(FSteamID SteamIDLobby, FString Key, FString Value);

	/**
	* Set the maximum number of players that can join the lobby.
	*
	* This is also set when you create the lobby with CreateLobby.
	* This can only be set by the owner of the lobby.
	*
	* @param	SteamIDLobby	The Steam ID of the lobby to set the member limit for.
	* @param	MaxMembers		The maximum number of players allowed in this lobby. This can not be above 250.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static bool SetLobbyMemberLimit(FSteamID SteamIDLobby, int32 MaxMembers);

	/**
	* Changes who the lobby owner is.
	*
	* This can only be set by the owner of the lobby. This will trigger a LobbyDataUpdate_t for all of the users in the lobby, each user should update their local state to reflect the new owner. This is typically accomplished by displaying a crown icon next to the owners name.
	*
	* @param	SteamIDLobby		The Steam ID of the lobby where the owner change will take place.
	* @param	SteamIDNewOwner		The Steam ID of the user that will be the new owner of the lobby, they must be in the lobby.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static bool SetLobbyOwner(FSteamID SteamIDLobby, FSteamID SteamIDNewOwner);

	/**
	* Updates what type of lobby this is.
	*
	* This is also set when you create the lobby with CreateLobby.
	* This can only be set by the owner of the lobby.
	*
	* @param	SteamIDLobby	The Steam ID of the lobby to set the type of.
	* @param	LobbyType		The new lobby type to that will be set.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static bool SetLobbyType(FSteamID SteamIDLobby, ESteamLobbyType LobbyType);

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if ENABLE_STEAMCORE
	STEAM_CALLBACK_MANUAL(UMatchmaking, OnFavoritesListAccountsUpdated, FavoritesListAccountsUpdated_t, OnFavoritesListAccountsUpdatedCallback);
	STEAM_CALLBACK_MANUAL(UMatchmaking, OnFavoritesListChanged, FavoritesListChanged_t, OnFavoritesListChangedCallback);
	STEAM_CALLBACK_MANUAL(UMatchmaking, OnLobbyChatMsg, LobbyChatMsg_t, OnLobbyChatMsgCallback);
	STEAM_CALLBACK_MANUAL(UMatchmaking, OnLobbyChatUpdate, LobbyChatUpdate_t, OnLobbyChatUpdateCallback);
	STEAM_CALLBACK_MANUAL(UMatchmaking, OnLobbyDataUpdate, LobbyDataUpdate_t, OnLobbyDataUpdateCallback);
	STEAM_CALLBACK_MANUAL(UMatchmaking, OnLobbyEnter, LobbyEnter_t, OnLobbyEnterCallback);
	STEAM_CALLBACK_MANUAL(UMatchmaking, OnLobbyGameCreated, LobbyGameCreated_t, OnLobbyGameCreatedCallback);
	STEAM_CALLBACK_MANUAL(UMatchmaking, OnLobbyInvite, LobbyInvite_t, OnLobbyInviteCallback);
	STEAM_CALLBACK_MANUAL(UMatchmaking, OnLobbyKicked, LobbyKicked_t, OnLobbyKickedCallback);
#endif
};
