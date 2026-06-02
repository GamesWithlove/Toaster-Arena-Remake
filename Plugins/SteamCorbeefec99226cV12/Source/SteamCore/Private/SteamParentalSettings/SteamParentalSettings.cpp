/**
* Copyright (C) 2017-2025 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamParentalSettings
*/

#include "SteamParentalSettings/SteamParentalSettings.h"
#include "SteamCorePluginPrivatePCH.h"

void UParentalSettings::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UParentalSettings::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool UParentalSettings::BIsParentalLockEnabled()
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
#if WITH_STEAMCORE
	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsParentalLockEnabled();
	}
#endif

	return bResult;
}

bool UParentalSettings::BIsParentalLockLocked()
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
#if WITH_STEAMCORE
	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsParentalLockLocked();
	}
#endif

	return bResult;
}

bool UParentalSettings::BIsAppBlocked(int32 AppID)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
#if WITH_STEAMCORE
	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsAppBlocked(AppID);
	}
#endif

	return bResult;
}

bool UParentalSettings::BIsAppInBlockList(int32 AppID)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
#if WITH_STEAMCORE
	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsAppInBlockList(AppID);
	}
#endif

	return bResult;
}

bool UParentalSettings::BIsFeatureBlocked(ESteamParentalFeature Feature)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
#if WITH_STEAMCORE
	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsFeatureBlocked(static_cast<EParentalFeature>(Feature));
	}
#endif

	return bResult;
}

bool UParentalSettings::BIsFeatureInBlockList(ESteamParentalFeature Feature)
{
	LogSteamCoreVeryVerbose("");

	bool bResult = false;
#if WITH_STEAMCORE
	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsFeatureInBlockList(static_cast<EParentalFeature>(Feature));
	}
#endif

	return bResult;
}
