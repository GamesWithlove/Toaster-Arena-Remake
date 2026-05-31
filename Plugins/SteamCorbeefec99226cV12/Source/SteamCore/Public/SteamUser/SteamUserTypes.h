/**
* Copyright (C) 2017-2025 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUser
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "SteamUserTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class ESteamVoiceResult : uint8
{
	OK = 0,
	NotInitialized = 1,
	NotRecording = 2,
	NoData = 3,
	BufferTooSmall = 4,
	DataCorrupted = 5,
	Restricted = 6,
	UnsupportedCodec = 7,
	ReceiverOutOfDate = 8,
	ReceiverDidNotAnswer = 9
};

UENUM(BlueprintType)
enum class ESteamFailureType : uint8
{
	FlushedCallbackQueue = 0,
	PipeFail = 1
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

class UUser;

USTRUCT(BlueprintType)
struct FClientGameServerDeny
{
	GENERATED_BODY()
public:
	FClientGameServerDeny(): AppID(0), GameServerPort(0), bSecure(false), Reason(ESteamDenyReason::Invalid)
	{
	}

#if WITH_STEAMCORE
	FClientGameServerDeny(const ClientGameServerDeny_t& Data)
		: AppID(Data.m_uAppID)
		  , GameServerIP(FIPv4Address(Data.m_unGameServerIP).ToString())
		  , GameServerPort(Data.m_usGameServerPort)
		  , bSecure(Data.m_bSecure > 0)
		  , Reason(static_cast<ESteamDenyReason>(Data.m_uReason))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	int32 AppID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	FString GameServerIP;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	int32 GameServerPort;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	bool bSecure;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	ESteamDenyReason Reason;
};

USTRUCT(BlueprintType)
struct FGameWebCallback
{
	GENERATED_BODY()
public:
	FGameWebCallback() = default;

#if WITH_STEAMCORE
	FGameWebCallback(const GameWebCallback_t& Data)
		: URL(UTF8_TO_TCHAR(Data.m_szURL))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	FString URL;
};

USTRUCT(BlueprintType)
struct FGetAuthSessionTicketResponse
{
	GENERATED_BODY()
public:
	FGetAuthSessionTicketResponse(): Result(ESteamResult::None)
	{
	}

#if WITH_STEAMCORE
	FGetAuthSessionTicketResponse(const GetAuthSessionTicketResponse_t& Data)
		: AuthTicket(Data.m_hAuthTicket)
		  , Result(_SteamResult(Data.m_eResult))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	FSteamTicketHandle AuthTicket;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	ESteamResult Result;
};

USTRUCT(BlueprintType)
struct FIPCFailure
{
	GENERATED_BODY()
public:
	FIPCFailure(): FailureType(ESteamFailureType::PipeFail)
	{
	}

#if WITH_STEAMCORE
	FIPCFailure(const IPCFailure_t& Data)
		: FailureType(static_cast<ESteamFailureType>(Data.m_eFailureType))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	ESteamFailureType FailureType;
};

USTRUCT(BlueprintType)
struct FLicensesUpdated
{
	GENERATED_BODY()
public:
	FLicensesUpdated() = default;

#if WITH_STEAMCORE
	FLicensesUpdated(const LicensesUpdated_t& Data)
	{
	}
#endif
};

USTRUCT(BlueprintType)
struct FMicroTxnAuthorizationResponse
{
	GENERATED_BODY()
public:
	FMicroTxnAuthorizationResponse(): AppID(0), bAuthorized(false)
	{
	}

#if WITH_STEAMCORE
	FMicroTxnAuthorizationResponse(const MicroTxnAuthorizationResponse_t& Data)
		: AppID(Data.m_unAppID)
		  , OrderID(LexToString(Data.m_ulOrderID))
		  , bAuthorized(Data.m_bAuthorized > 0)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	int32 AppID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	FString OrderID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	bool bAuthorized;
};

USTRUCT(BlueprintType)
struct FSteamServersConnected
{
	GENERATED_BODY()
public:
	FSteamServersConnected() = default;

#if WITH_STEAMCORE
	FSteamServersConnected(const SteamServersConnected_t& Data)
	{
	}
#endif
};

USTRUCT(BlueprintType)
struct FSteamServerConnectFailure
{
	GENERATED_BODY()
public:
	FSteamServerConnectFailure(): Result(ESteamResult::None), bStillRetrying(false)
	{
	}

#if WITH_STEAMCORE
	FSteamServerConnectFailure(const SteamServerConnectFailure_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , bStillRetrying(Data.m_bStillRetrying)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	bool bStillRetrying;
};

USTRUCT(BlueprintType)
struct FSteamServersDisconnected
{
	GENERATED_BODY()
public:
	FSteamServersDisconnected(): Result(ESteamResult::None)
	{
	}

#if WITH_STEAMCORE
	FSteamServersDisconnected(const SteamServersDisconnected_t& Data)
		: Result(_SteamResult(Data.m_eResult))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	ESteamResult Result;
};

USTRUCT(BlueprintType)
struct FEncryptedAppTicketResponse
{
	GENERATED_BODY()
public:
	FEncryptedAppTicketResponse(): Result(ESteamResult::None)
	{
	}

#if WITH_STEAMCORE
	FEncryptedAppTicketResponse(const EncryptedAppTicketResponse_t& Data)
		: Result(_SteamResult(Data.m_eResult))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	ESteamResult Result;
};

USTRUCT(BlueprintType)
struct FStoreAuthURLResponse
{
	GENERATED_BODY()
public:
	FStoreAuthURLResponse() = default;

#if WITH_STEAMCORE
	FStoreAuthURLResponse(const StoreAuthURLResponse_t& Data)
		: URL(UTF8_TO_TCHAR(Data.m_szURL))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	FString URL;
};

USTRUCT(BlueprintType)
struct FGetTicketForWebApiResponse
{
	GENERATED_BODY()
public:
	FGetTicketForWebApiResponse()
		: Result(ESteamResult::None)
	{
	}

#if WITH_STEAMCORE
#if STEAM_VERSION >= 157
	FGetTicketForWebApiResponse(const GetTicketForWebApiResponse_t& Data)
		: AuthTicket(Data.m_hAuthTicket)
		, Result(_SteamResult(Data.m_eResult))
	{
		Ticket.Append(Data.m_rgubTicket, Data.m_cubTicket);
	}
#endif
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	FSteamTicketHandle AuthTicket;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "User")
	TArray<uint8> Ticket;
};


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClientGameServerDeny, const FClientGameServerDeny&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameWebCallback, const FGameWebCallback&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetAuthSessionTicketResponse, const FGetAuthSessionTicketResponse&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIPCFailure, const FIPCFailure&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLicensesUpdated, const FLicensesUpdated&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMicroTxnAuthorizationResponse, const FMicroTxnAuthorizationResponse&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamServersConnected, const FSteamServersConnected&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamServerConnectFailure, const FSteamServerConnectFailure&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamServersDisconnected, const FSteamServersDisconnected&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnValidateAuthTicketResponse, const FValidateAuthTicketResponse&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestEncryptedAppTicketResponse, const FEncryptedAppTicketResponse&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetTicketForWebApiResponse, const FGetTicketForWebApiResponse&, Data);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestEncryptedAppTicket, const FEncryptedAppTicketResponse&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnStoreAuthURLResponse, const FStoreAuthURLResponse&, Data, bool, bWasSuccessful);