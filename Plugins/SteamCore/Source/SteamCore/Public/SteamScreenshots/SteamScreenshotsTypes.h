/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamScreenshots
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "SteamScreenshotsTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class ESteamVRScreenshotType : uint8
{
	None = 0,
	Mono = 1,
	Stereo = 2,
	MonoCubemap = 3,
	MonoPanorama = 4,
	StereoPanorama = 5
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USTRUCT(BlueprintType)
struct STEAMCORE_API FScreenshotHandle
{
	GENERATED_BODY()
public:
	FScreenshotHandle()
		: Value(0)
	{
	}

	FScreenshotHandle(uint32 InValue)
		: Value(InValue)
	{
	}

public:
	operator uint32() const { return Value; }
private:
	uint32 Value;
};

USTRUCT(BlueprintType)
struct FScreenshotReady
{
	GENERATED_BODY()
public:
	FScreenshotReady()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FScreenshotReady(const ScreenshotReady_t& Data)
		: Handle(Data.m_hLocal)
		  , Result(_SteamResult(Data.m_eResult))
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Screenshots")
	FScreenshotHandle Handle;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Screenshots")
	ESteamResult Result;
};

USTRUCT(BlueprintType)
struct FScreenshotRequested
{
	GENERATED_BODY()
public:
	FScreenshotRequested() = default;

#if ENABLE_STEAMCORE
	FScreenshotRequested(const ScreenshotRequested_t& Data)
	{
	}
#endif
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScreenshotReady, const FScreenshotReady&, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScreenshotRequested, const FScreenshotRequested&, Data);
