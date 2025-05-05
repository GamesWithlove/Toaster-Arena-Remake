/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUtils
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/Steam.h"
#include "SteamUtilsTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class ESteamTextFilteringContext : uint8
{
	k_ETextFilteringContextUnknown = 0,
	// Unknown context
	k_ETextFilteringContextGameContent = 1,
	// Game content, only legally required filtering is performed
	k_ETextFilteringContextChat = 2,
	// Chat from another player
	k_ETextFilteringContextName = 3,
	// Character or item name
};

UENUM(BlueprintType)
enum class ESteamCheckFileSignature : uint8
{
	InvalidSignature = 0,
	ValidSignature = 1,
	FileNotFound = 2,
	NoSignaturesFoundForThisApp = 3,
	NoSignaturesFoundForThisFile = 4,
};

UENUM(BlueprintType)
enum class ESteamGamepadTextInputLineMode : uint8
{
	SingleLine = 0,
	MultipleLines = 1
};

UENUM(BlueprintType)
enum class ESteamGamepadTextInputMode : uint8
{
	Normal = 0,
	Password = 1
};

UENUM(BlueprintType)
enum class ESteamNotificationPosition : uint8
{
	TopLeft = 0,
	TopRight = 1,
	BottomLeft = 2,
	BottomRight = 3,
};

UENUM(BlueprintType)
enum class ESteamUniverse : uint8
{
	Invalid = 0,
	Public = 1,
	Beta = 2,
	Internal = 3,
	Dev = 4,
	Max
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USTRUCT(BlueprintType)
struct FCheckFileSignature
{
	GENERATED_BODY()
public:
	FCheckFileSignature()
		: CheckFileSignature(ESteamCheckFileSignature::InvalidSignature)
	{
	}

#if ENABLE_STEAMCORE
	FCheckFileSignature(const CheckFileSignature_t& Data)
		: CheckFileSignature(static_cast<ESteamCheckFileSignature>(Data.m_eCheckFileSignature))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Utils")
	ESteamCheckFileSignature CheckFileSignature;
};

USTRUCT(BlueprintType)
struct FGamepadTextInputDismissed
{
	GENERATED_BODY()
public:
	FGamepadTextInputDismissed()
		: bSubmitted(false)
		  , SubmittedText(0)
	{
	}

#if ENABLE_STEAMCORE
	FGamepadTextInputDismissed(const GamepadTextInputDismissed_t& Data)
		: bSubmitted(Data.m_bSubmitted)
		  , SubmittedText(Data.m_unSubmittedText)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Utils")
	bool bSubmitted;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Utils")
	int32 SubmittedText;
};

USTRUCT(BlueprintType)
struct FLowBatteryPower
{
	GENERATED_BODY()
public:
	FLowBatteryPower()
		: MinutesBatteryLeft(0)
	{
	}

#if ENABLE_STEAMCORE
	FLowBatteryPower(const LowBatteryPower_t& Data)
		: MinutesBatteryLeft(Data.m_nMinutesBatteryLeft)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Utils")
	int32 MinutesBatteryLeft;
};

USTRUCT(BlueprintType)
struct FIPCountry
{
	GENERATED_BODY()
public:
	FIPCountry() = default;

#if ENABLE_STEAMCORE
	FIPCountry(const IPCountry_t& Data)
	{
	}
#endif
};

USTRUCT(BlueprintType)
struct FSteamShutdown
{
	GENERATED_BODY()
public:
	FSteamShutdown() = default;

#if ENABLE_STEAMCORE
	FSteamShutdown(const SteamShutdown_t& Data)
	{
	}
#endif
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCheckFileSignature, const FCheckFileSignature&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGamepadTextInputDismissed, const FGamepadTextInputDismissed&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIPCountry, const FIPCountry&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLowBatteryPower, const FLowBatteryPower&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamShutdown, const FSteamShutdown&, Data);
