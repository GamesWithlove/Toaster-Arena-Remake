/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmaking
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "SteamPartiesTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class ESteamPartiesBeaconLocationType : uint8
{
	Invalid = 0,
	ChatGroup = 1,
	Max,
};

UENUM(BlueprintType)
enum class ESteamPartiesBeaconLocationData : uint8
{
	Invalid = 0,
	Name = 1,
	IconURLSmall = 2,
	IconURLMedium = 3,
	IconURLLarge = 4,
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FSteamPartyBeaconLocation
{
	GENERATED_BODY()
public:
	FSteamPartyBeaconLocation()
		: Type(ESteamPartiesBeaconLocationType::Invalid)
	{
	}

#if ENABLE_STEAMCORE
	FSteamPartyBeaconLocation(const SteamPartyBeaconLocation_t& Data)
		: Type(static_cast<ESteamPartiesBeaconLocationType>(Data.m_eType))
		  , LocationId(LexToString(Data.m_ulLocationID))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "SteamParties")
	ESteamPartiesBeaconLocationType Type;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "SteamParties")
	FString LocationId;
};

USTRUCT(BlueprintType)
struct FJoinPartyData
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "SteamParties")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "SteamParties")
	FPartyBeaconID BeaconID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "SteamParties")
	FSteamID SteamIDBeaconOwner;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "SteamParties")
	FString ConnectString;
public:
	FJoinPartyData()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FJoinPartyData(const JoinPartyCallback_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , BeaconID(Data.m_ulBeaconID)
		  , SteamIDBeaconOwner(Data.m_SteamIDBeaconOwner)
		  , ConnectString(UTF8_TO_TCHAR(Data.m_rgchConnectString))
	{
	}
#endif
};

USTRUCT(BlueprintType)
struct FCreateBeaconData
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "SteamParties")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "SteamParties")
	FPartyBeaconID BeaconID;
public:
	FCreateBeaconData()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FCreateBeaconData(const CreateBeaconCallback_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , BeaconID(Data.m_ulBeaconID)
	{
	}
#endif
};

USTRUCT(BlueprintType)
struct FReservationNotificationData
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "SteamParties")
	FPartyBeaconID BeaconId;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "SteamParties")
	FSteamID SteamIDJoiner;
public:
	FReservationNotificationData() = default;

#if ENABLE_STEAMCORE
	FReservationNotificationData(const ReservationNotificationCallback_t& Data)
		: BeaconId(Data.m_ulBeaconID)
		  , SteamIDJoiner(Data.m_steamIDJoiner)
	{
	}
#endif
};

USTRUCT(BlueprintType)
struct FChangeNumOpenSlotsData
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "SteamParties")
	ESteamResult Result;
public:
	FChangeNumOpenSlotsData()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FChangeNumOpenSlotsData(const ChangeNumOpenSlotsCallback_t& Data)
		: Result(_SteamResult(Data.m_eResult))
	{
	}
#endif
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoinPartyDelegate, const FJoinPartyData&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreateBeaconDelegate, const FCreateBeaconData&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReservationNotificationDelegate, const FReservationNotificationData&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeNumOpenSlotsDelegate, const FChangeNumOpenSlotsData&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAvailableBeaconLocationsDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnActiveBeaconsDelegate);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnJoinParty, const FJoinPartyData&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnCreateBeacon, const FCreateBeaconData&, Data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnChangeNumOpenSlots, const FChangeNumOpenSlotsData&, Data, bool, bWasSuccessful);
