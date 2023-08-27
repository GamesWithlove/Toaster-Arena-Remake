/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmaking
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
#include "SteamMatchmakingTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class ESteamSessionFindType : uint8
{
	Listen,
	Dedicated
};


enum class ESteamCoreFindLobbiesState : uint8
{
	Init = 0,
	RequestLobbyList,
	RequestLobbyData,
	WaitForRequestLobbyData,
	Finished
};

UENUM(BlueprintType)
enum class ESteamLobbyType : uint8
{
	Private = 0,
	FriendsOnly = 1,
	Public = 2,
	Invisible = 3,
};

// lobby search filter tools
UENUM(BlueprintType)
enum class ESteamLobbyComparison : uint8
{
	EqualToOrLessThan = 0,
	LessThan = 1,
	Equal = 2,
	GreaterThan = 3,
	EqualToOrGreaterThan = 4,
	NotEqual = 5
};

// lobby search distance. Lobby results are sorted from closest to farthest.
UENUM(BlueprintType)
enum class ESteamLobbyDistanceFilter : uint8
{
	Close = 0,
	Default = 1,
	Far = 2,
	Worldwide = 3
};

#if !ENABLE_STEAMCORE
enum EChatMemberStateChange
{
	// Specific to joining / leaving the chatroom
	k_EChatMemberStateChangeEntered			= 0x0001,		// This user has joined or is joining the chat room
	k_EChatMemberStateChangeLeft			= 0x0002,		// This user has left or is leaving the chat room
	k_EChatMemberStateChangeDisconnected	= 0x0004,		// User disconnected without leaving the chat first
	k_EChatMemberStateChangeKicked			= 0x0008,		// User kicked
	k_EChatMemberStateChangeBanned			= 0x0010,		// User kicked and banned
};
#endif

UENUM(BlueprintType, meta = (Bitflags))
enum class ESteamChatMemberStateChange : uint8
{
	None = 0,
	Entered = k_EChatMemberStateChangeEntered,
	Left = k_EChatMemberStateChangeLeft,
	Disconnected = k_EChatMemberStateChangeDisconnected,
	Kicked = k_EChatMemberStateChangeKicked,
	Banned = k_EChatMemberStateChangeBanned,
};

ENUM_CLASS_FLAGS(ESteamChatMemberStateChange)

UENUM(BlueprintType, meta = (Bitflags))
enum class ESteamFavoriteFlags : uint8
{
	None = 0,
	Favorite = 1,
	History = 2,
};

ENUM_CLASS_FLAGS(ESteamFavoriteFlags)

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FFavoritesListAccountsUpdated
{
	GENERATED_BODY()
public:
	FFavoritesListAccountsUpdated()
		: Result(ESteamResult::None)
	{
	}
#if ENABLE_STEAMCORE
	FFavoritesListAccountsUpdated(const FavoritesListAccountsUpdated_t& Data)
		: Result(_SteamResult(Data.m_eResult))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	ESteamResult Result;
};

USTRUCT(BlueprintType)
struct FFavoritesListChanged
{
	GENERATED_BODY()
public:
	FFavoritesListChanged()
		: QueryPort(0)
		  , ConnectionPort(0)
		  , AppID(0)
		  , bAdd(false)
	{
	}

#if ENABLE_STEAMCORE
	FFavoritesListChanged(const FavoritesListChanged_t& Data)
		: IP(FIPv4Address(Data.m_nIP).ToString())
		  , QueryPort(Data.m_nQueryPort)
		  , ConnectionPort(Data.m_nConnPort)
		  , AppID(Data.m_nAppID)
		  , bAdd(Data.m_bAdd)
		  , SteamID(Data.m_unAccountId)
	{
		if ((Data.m_nFlags & static_cast<uint32>(ESteamFavoriteFlags::None)) > 0)
		{
			Flags.Add(ESteamFavoriteFlags::None);
		}
		if ((Data.m_nFlags & static_cast<uint32>(ESteamFavoriteFlags::Favorite)) > 0)
		{
			Flags.Add(ESteamFavoriteFlags::Favorite);
		}
		if ((Data.m_nFlags & static_cast<uint32>(ESteamFavoriteFlags::History)) > 0)
		{
			Flags.Add(ESteamFavoriteFlags::History);
		}
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FString IP;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	int32 QueryPort;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	int32 ConnectionPort;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	int32 AppID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	TArray<ESteamFavoriteFlags> Flags;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	bool bAdd;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamID SteamID;
};

USTRUCT(BlueprintType)
struct FLobbyChatMsg
{
	GENERATED_BODY()
public:
	FLobbyChatMsg()
		: ChatEntryType(ESteamChatEntryType::Invalid)
		  , ChatID(0)
	{
	}

#if ENABLE_STEAMCORE
	FLobbyChatMsg(const LobbyChatMsg_t& Data)
		: SteamIDLobby(Data.m_ulSteamIDLobby)
		  , SteamIDUser(Data.m_ulSteamIDUser)
		  , ChatEntryType(static_cast<ESteamChatEntryType>(Data.m_eChatEntryType))
		  , ChatID(Data.m_iChatID)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamID SteamIDLobby;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamID SteamIDUser;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	ESteamChatEntryType ChatEntryType;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	int32 ChatID;
};

USTRUCT(BlueprintType)
struct FLobbyChatUpdate
{
	GENERATED_BODY()
public:
	FLobbyChatUpdate() = default;

#if ENABLE_STEAMCORE
	FLobbyChatUpdate(const LobbyChatUpdate_t& Data)
		: SteamIDLobby(Data.m_ulSteamIDLobby)
		  , SteamIDUserChanged(Data.m_ulSteamIDUserChanged)
		  , SteamIDMakingChange(Data.m_ulSteamIDMakingChange)
	{
		for (int32 i = 0; i <= 32; i++)
		{
			if ((Data.m_rgfChatMemberStateChange & static_cast<int32>(static_cast<ESteamChatMemberStateChange>(i))) > 0)
			{
				ChatMemberStateChange.Add(static_cast<ESteamChatMemberStateChange>(i));
			}
		}
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamID SteamIDLobby;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamID SteamIDUserChanged;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamID SteamIDMakingChange;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	TArray<ESteamChatMemberStateChange> ChatMemberStateChange;
};

USTRUCT(BlueprintType)
struct FLobbyDataUpdate
{
	GENERATED_BODY()
public:
	FLobbyDataUpdate()
		: bSuccess(false)
	{
	}

#if ENABLE_STEAMCORE
	FLobbyDataUpdate(const LobbyDataUpdate_t& Data)
		: SteamIDLobby(Data.m_ulSteamIDLobby)
		  , SteamIDMember(Data.m_ulSteamIDMember)
		  , bSuccess(Data.m_bSuccess > 0)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamID SteamIDLobby;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamID SteamIDMember;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	bool bSuccess;
};

USTRUCT(BlueprintType)
struct FLobbyEnterData
{
	GENERATED_BODY()
public:
	FLobbyEnterData()
		: bLocked(false)
		  , ChatRoomEnterResponse(ESteamChatRoomEnterResponse::None)
	{
	}

#if ENABLE_STEAMCORE
	FLobbyEnterData(const LobbyEnter_t& Data)
		: SteamIDLobby(Data.m_ulSteamIDLobby)
		  , bLocked(Data.m_bLocked)
		  , ChatRoomEnterResponse(static_cast<ESteamChatRoomEnterResponse>(Data.m_EChatRoomEnterResponse))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamID SteamIDLobby;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	bool bLocked;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	ESteamChatRoomEnterResponse ChatRoomEnterResponse;
};

USTRUCT(BlueprintType)
struct FLobbyGameCreated
{
	GENERATED_BODY()
public:
	FLobbyGameCreated()
		: Port(0)
	{
	}

#if ENABLE_STEAMCORE
	FLobbyGameCreated(const LobbyGameCreated_t& Data)
		: SteamIDLobby(Data.m_ulSteamIDLobby)
		  , SteamIDGameServer(Data.m_ulSteamIDGameServer)
		  , IP(FIPv4Address(Data.m_unIP).ToString())
		  , Port(Data.m_usPort)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamID SteamIDLobby;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamID SteamIDGameServer;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FString IP;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	int32 Port;
};

USTRUCT(BlueprintType)
struct FLobbyInviteData
{
	GENERATED_BODY()
public:
	FLobbyInviteData() = default;

#if ENABLE_STEAMCORE
	FLobbyInviteData(const LobbyInvite_t& Data)
		: SteamIDUser(Data.m_ulSteamIDUser)
		  , SteamIDLobby(Data.m_ulSteamIDLobby)
		  , GameID(Data.m_ulGameID)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamID SteamIDUser;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamID SteamIDLobby;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamGameID GameID;
};

USTRUCT(BlueprintType)
struct FLobbyKickedData
{
	GENERATED_BODY()
public:
	FLobbyKickedData()
		: bKickedDueToDisconnect(false)
	{
	}

#if ENABLE_STEAMCORE
	FLobbyKickedData(const LobbyKicked_t& Data)
		: SteamIDLobby(Data.m_ulSteamIDLobby)
		  , SteamIDAdmin(Data.m_ulSteamIDAdmin)
		  , bKickedDueToDisconnect(Data.m_bKickedDueToDisconnect > 0)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamID SteamIDLobby;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamID SteamIDAdmin;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	bool bKickedDueToDisconnect;
};

USTRUCT(BlueprintType)
struct FLobbyMatchList
{
	GENERATED_BODY()
public:
	FLobbyMatchList()
		: LobbiesMatching(0)
	{
	}

#if ENABLE_STEAMCORE
	FLobbyMatchList(const LobbyMatchList_t& Data)
		: LobbiesMatching(Data.m_nLobbiesMatching)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	int32 LobbiesMatching;
};

USTRUCT(BlueprintType)
struct FCreateLobbyData
{
	GENERATED_BODY()
public:
	FCreateLobbyData()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FCreateLobbyData(const LobbyCreated_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , SteamIDLobby(Data.m_ulSteamIDLobby)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamID SteamIDLobby;
};

USTRUCT(BlueprintType)
struct FJoinLobbyData
{
	GENERATED_BODY()
public:
	FJoinLobbyData()
		: bLocked(false)
		  , ChatRoomEnterResponse(ESteamChatRoomEnterResponse::None)
		  , m_rgfChatPermissions(0)
	{
	}

#if ENABLE_STEAMCORE
	FJoinLobbyData(const LobbyEnter_t& Data)
		: SteamIDLobby(Data.m_ulSteamIDLobby)
		  , bLocked(Data.m_bLocked)
		  , ChatRoomEnterResponse(static_cast<ESteamChatRoomEnterResponse>(Data.m_EChatRoomEnterResponse))
		  , m_rgfChatPermissions(Data.m_rgfChatPermissions)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	FSteamID SteamIDLobby;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	bool bLocked;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Matchmaking")
	ESteamChatRoomEnterResponse ChatRoomEnterResponse;

	uint32 m_rgfChatPermissions; // Permissions of the current user - unused always 0
};
 
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFavoritesListAccountsUpdated, const FFavoritesListAccountsUpdated&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFavoritesListChanged, const FFavoritesListChanged&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyChatMsg, const FLobbyChatMsg&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyChatUpdate, const FLobbyChatUpdate&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyDataUpdate, FLobbyDataUpdate, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyEnter, const FLobbyEnterData&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyGameCreated, const FLobbyGameCreated&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyInvite, const FLobbyInviteData&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyKicked, const FLobbyKickedData&, Data);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestLobbyList, const FLobbyMatchList&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnCreateLobby, const FCreateLobbyData&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnJoinLobby, const FJoinLobbyData&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFindSessions, const TArray<FBlueprintSessionResult>&, Data, bool, bWasSuccessful);
