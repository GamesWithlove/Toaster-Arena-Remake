/**
* Copyright (C) 2017-2020 | eelDev (Dry Eel Development)
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "SteamGameSearchTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class ESteamGameSearchErrorCode : uint8
{
	Invalid = 0,
	OK = 1,
	Failed_Search_Already_In_Progress = 2,
	Failed_No_Search_In_Progress = 3,
	Failed_Not_Lobby_Leader = 4,
	// if not the lobby leader can not call SearchForGameWithLobby
	Failed_No_Host_Available = 5,
	// no host is available that matches those search params
	Failed_Search_Params_Invalid = 6,
	// search params are invalid
	Failed_Offline = 7,
	// offline, could not communicate with server
	Failed_NotAuthorized = 8,
	// either the user or the application does not have priveledges to do this
	Failed_Unknown_Error = 9,
	// unknown error
};

UENUM(BlueprintType)
enum class ESteamPlayerResult : uint8
{
	Invalid = 0,
	FailedToConnect = 1,
	// failed to connect after confirming
	Abandoned = 2,
	// quit game without completing it
	Kicked = 3,
	// kicked by other players/moderator/server rules
	Incomplete = 4,
	// player stayed to end but game did not conclude successfully ( nofault to player )
	Completed = 5,
	// player completed game
};

UENUM(BlueprintType)
enum class ESteamPlayerAcceptState : uint8
{
	Unknown = 0,
	PlayerAccepted = 1,
	PlayerDeclined = 2,
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FSearchForGameProgressCallback
{
	GENERATED_BODY()
public:
	FSearchForGameProgressCallback()
		: Result(ESteamResult::None)
		  , SecondsRemainingEstimate(0)
		  , PlayersSearching(0)
	{
	}

#if ENABLE_STEAMCORE
	FSearchForGameProgressCallback(const SearchForGameProgressCallback_t& data)
		: SearchID(LexToString(data.m_ullSearchID))
		  , Result(_SteamResult(data.m_eResult))
		  , LobbyID(data.m_lobbyID)
		  , SteamIDEndedSearch(data.m_steamIDEndedSearch)
		  , SecondsRemainingEstimate(data.m_nSecondsRemainingEstimate)
		  , PlayersSearching(data.m_cPlayersSearching)
	{
	}
#endif

public:
	// all future callbacks referencing this search will include this Search ID
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	FString SearchID;
	// if search has started this result will be k_EResultOK, any other value indicates search has failed to start or has terminated
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	ESteamResult Result;
	// lobby ID if lobby search, invalid steamID otherwise
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	FSteamID LobbyID;
	// if search was terminated, steamID that terminated search
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	FSteamID SteamIDEndedSearch;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	int32 SecondsRemainingEstimate;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	int32 PlayersSearching;
};

/*
* Notification to all players searching that a game has been found
*/
USTRUCT(BlueprintType)
struct FSearchForGameResultCallback
{
	GENERATED_BODY()
public:
	FSearchForGameResultCallback()
		: Result(ESteamResult::None)
		  , CountPlayersInGame(0)
		  , CountAcceptedGame(0)
		  , bFinalCallback(false)
	{
	}

#if ENABLE_STEAMCORE
	FSearchForGameResultCallback(const SearchForGameResultCallback_t& data)
		: SearchID(LexToString(data.m_ullSearchID))
		  , Result(_SteamResult(data.m_eResult))
		  , CountPlayersInGame(data.m_nCountPlayersInGame)
		  , CountAcceptedGame(data.m_nCountAcceptedGame)
		  , SteamIDHost(data.m_steamIDHost)
		  , bFinalCallback(data.m_bFinalCallback)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	FString SearchID;
	// if game/host was lost this will be an error value
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	ESteamResult Result;
	// if m_bGameFound is true the following are non-zero
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	int32 CountPlayersInGame;
	// if m_bGameFound is true the following are non-zero
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	int32 CountAcceptedGame;
	// if SteamIDHost is valid the host has started the game
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	FSteamID SteamIDHost;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	bool bFinalCallback;
};

/*
* Callback from RequestPlayersForGame when the matchmaking service has started or ended search
* Callback will also follow a call from CancelRequestPlayersForGame - m_bSearchInProgress will be false
*/
USTRUCT(BlueprintType)
struct FRequestPlayersForGameProgressCallback
{
	GENERATED_BODY()
public:
	FRequestPlayersForGameProgressCallback()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FRequestPlayersForGameProgressCallback(const RequestPlayersForGameProgressCallback_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , SearchID(LexToString(Data.m_ullSearchID))
	{
	}
#endif

public:
	// SearchID will be non-zero if this is k_EResultOK
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	ESteamResult Result;
	// all future callbacks referencing this search will include this Search ID
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	FString SearchID;
};

/*
* Callback from RequestPlayersForGame
* One of these will be sent per player 
* Followed by additional callbacks when players accept or decline the game
*/
USTRUCT(BlueprintType)
struct FRequestPlayersForGameResultCallback
{
	GENERATED_BODY()
public:
	FRequestPlayersForGameResultCallback()
		: Result(ESteamResult::None)
		  , PlayerAcceptState(ESteamPlayerAcceptState::Unknown)
		  , PlayerIndex(0)
		  , TotalPlayersFound(0)
		  , TotalPlayersAcceptedGame(0)
		  , SuggestedTeamIndex(0)
	{
	}

#if ENABLE_STEAMCORE
	FRequestPlayersForGameResultCallback(const RequestPlayersForGameResultCallback_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , SearchID(LexToString(Data.m_ullSearchID))
		  , SteamIDPlayerFound(Data.m_SteamIDPlayerFound)
		  , SteamIDLobby(Data.m_SteamIDLobby)
		  , PlayerAcceptState(static_cast<ESteamPlayerAcceptState>(Data.m_ePlayerAcceptState))
		  , PlayerIndex(Data.m_nPlayerIndex)
		  , TotalPlayersFound(Data.m_nTotalPlayersFound)
		  , TotalPlayersAcceptedGame(Data.m_nTotalPlayersAcceptedGame)
		  , SuggestedTeamIndex(Data.m_nSuggestedTeamIndex)
		  , UniqueGameID(LexToString(Data.m_ullUniqueGameID))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	ESteamResult Result;
	// SearchID will be non-zero if this is k_EResultOK
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	FString SearchID;
	// player steamID
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	FSteamID SteamIDPlayerFound;
	// if the player is in a lobby, the lobby ID
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	FSteamID SteamIDLobby;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	ESteamPlayerAcceptState PlayerAcceptState;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	int32 PlayerIndex;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	int32 TotalPlayersFound;
	// expect this many callbacks at minimum
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	int32 TotalPlayersAcceptedGame;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	int32 SuggestedTeamIndex;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	FString UniqueGameID;
};

USTRUCT(BlueprintType)
struct FRequestPlayersForGameFinalResultCallback
{
	GENERATED_BODY()
public:
	FRequestPlayersForGameFinalResultCallback()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FRequestPlayersForGameFinalResultCallback(const RequestPlayersForGameFinalResultCallback_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , SearchID(LexToString(Data.m_ullSearchID))
		  , UniqueGameID(LexToString(Data.m_ullUniqueGameID))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	FString SearchID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	FString UniqueGameID;
};

/*
* This callback confirms that results were received by the matchmaking service for this player
*/
USTRUCT(BlueprintType)
struct FSubmitPlayerResultResultCallback
{
	GENERATED_BODY()
public:
	FSubmitPlayerResultResultCallback()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FSubmitPlayerResultResultCallback(const SubmitPlayerResultResultCallback_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , UniqueGameID(LexToString(Data.ullUniqueGameID))
		  , SteamIDPlayer(Data.steamIDPlayer)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	FString UniqueGameID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	FSteamID SteamIDPlayer;
};

/*
* This callback confirms that the game is recorded as complete on the matchmaking service
* The next call to RequestPlayersForGame will generate a new unique game ID
*/
USTRUCT(BlueprintType)
struct FEndGameResultCallback
{
	GENERATED_BODY()
public:
	FEndGameResultCallback()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FEndGameResultCallback(const EndGameResultCallback_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , UniqueGameID(LexToString(Data.ullUniqueGameID))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "GameSearch")
	FString UniqueGameID;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSearchForGameProgressDelegate, const FSearchForGameProgressCallback&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSearchForGameResultDelegate, const FSearchForGameResultCallback&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestPlayersForGameProgressDelegate, const FRequestPlayersForGameProgressCallback&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestPlayersForGameResultDelegate, const FRequestPlayersForGameResultCallback&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestPlayersForGameFinalResultDelegate, const FRequestPlayersForGameFinalResultCallback&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubmitPlayerResultResultDelegate, const FSubmitPlayerResultResultCallback&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndGameResultDelegate, const FEndGameResultCallback&, Data);