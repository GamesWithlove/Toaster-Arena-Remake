/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServer
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "SteamGameServerTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FGSPolicyResponse
{
	GENERATED_BODY()
public:
	FGSPolicyResponse()
		: bSecure(false)
	{
	}

#if ENABLE_STEAMCORE
	FGSPolicyResponse(const GSPolicyResponse_t& Data)
		: bSecure(Data.m_bSecure > 0)
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	bool bSecure;
};

USTRUCT(BlueprintType)
struct FGSClientGroupStatus
{
	GENERATED_BODY()
public:
	FGSClientGroupStatus()
		: bMember(false)
		  , bOfficer(false)
	{
	}

#if ENABLE_STEAMCORE
	FGSClientGroupStatus(const GSClientGroupStatus_t& Data)
		: SteamIDUser(Data.m_SteamIDUser)
		  , SteamIDGroup(Data.m_SteamIDGroup)
		  , bMember(Data.m_bMember)
		  , bOfficer(Data.m_bOfficer)
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	FSteamID SteamIDUser;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	FSteamID SteamIDGroup;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	bool bMember;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	bool bOfficer;
};

USTRUCT(BlueprintType)
struct FAssociateWithClanResult
{
	GENERATED_BODY()
public:
	FAssociateWithClanResult()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FAssociateWithClanResult(const AssociateWithClanResult_t& Data)
		: Result(_SteamResult(Data.m_eResult))
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	ESteamResult Result;
};

USTRUCT(BlueprintType)
struct FComputeNewPlayerCompatibilityResult
{
	GENERATED_BODY()
public:
	FComputeNewPlayerCompatibilityResult()
		: Result(ESteamResult::None)
		  , PlayersThatDontLikeCandidate(0)
		  , PlayersThatCandidateDoesntLike(0)
		  , ClanPlayersThatDontLikeCandidate(0)
	{
	}

#if ENABLE_STEAMCORE
	FComputeNewPlayerCompatibilityResult(const ComputeNewPlayerCompatibilityResult_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , PlayersThatDontLikeCandidate(Data.m_cPlayersThatDontLikeCandidate)
		  , PlayersThatCandidateDoesntLike(Data.m_cPlayersThatCandidateDoesntLike)
		  , ClanPlayersThatDontLikeCandidate(Data.m_cClanPlayersThatDontLikeCandidate)
		  , SteamIDCandidate(Data.m_SteamIDCandidate)
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	int PlayersThatDontLikeCandidate;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	int PlayersThatCandidateDoesntLike;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	int ClanPlayersThatDontLikeCandidate;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	FSteamID SteamIDCandidate;
};

USTRUCT(BlueprintType)
struct FGSClientApprove
{
	GENERATED_BODY()
public:
	FGSClientApprove() = default;

#if ENABLE_STEAMCORE
	FGSClientApprove(const GSClientApprove_t& Data)
		: SteamID(Data.m_SteamID)
		  , OwnerSteamID(Data.m_OwnerSteamID)
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	FSteamID SteamID;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	FSteamID OwnerSteamID;
};

USTRUCT(BlueprintType)
struct FGSClientDeny
{
	GENERATED_BODY()
public:
	FGSClientDeny()
		: DenyReason(ESteamDenyReason::Invalid)
	{
	}

#if ENABLE_STEAMCORE
	FGSClientDeny(const GSClientDeny_t& Data)
		: SteamID(Data.m_SteamID)
		  , DenyReason(static_cast<ESteamDenyReason>(Data.m_eDenyReason))
		  , OptionalText(UTF8_TO_TCHAR(Data.m_rgchOptionalText))
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	FSteamID SteamID;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	ESteamDenyReason DenyReason;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	FString OptionalText;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAssociateWithClan, const FAssociateWithClanResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnComputeNewPlayerCompatibility, const FComputeNewPlayerCompatibilityResult&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSPolicyResponse, const FGSPolicyResponse&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSClientGroupStatus, const FGSClientGroupStatus&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSValidateAuthTicketResponse, const FValidateAuthTicketResponse&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSClientApprove, const FGSClientApprove&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSClientDeny, const FGSClientDeny&, Data);