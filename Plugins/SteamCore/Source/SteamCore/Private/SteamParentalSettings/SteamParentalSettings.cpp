/**
* Copyright (C) 2017-2022 eelDev AB
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
	LogVeryVerbose("");

	bool bResult = false;
#if ENABLE_STEAMCORE
	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsParentalLockEnabled();
	}
#endif

	return bResult;
}

bool UParentalSettings::BIsParentalLockLocked()
{
	LogVeryVerbose("");

	bool bResult = false;
#if ENABLE_STEAMCORE
	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsParentalLockLocked();
	}
#endif

	return bResult;
}

bool UParentalSettings::BIsAppBlocked(int32 AppID)
{
	LogVeryVerbose("");

	bool bResult = false;
#if ENABLE_STEAMCORE
	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsAppBlocked(AppID);
	}
#endif

	return bResult;
}

bool UParentalSettings::BIsAppInBlockList(int32 AppID)
{
	LogVeryVerbose("");

	bool bResult = false;
#if ENABLE_STEAMCORE
	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsAppInBlockList(AppID);
	}
#endif

	return bResult;
}

bool UParentalSettings::BIsFeatureBlocked(ESteamParentalFeature Feature)
{
	LogVeryVerbose("");

	bool bResult = false;
#if ENABLE_STEAMCORE
	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsFeatureBlocked(static_cast<EParentalFeature>(Feature));
	}
#endif

	return bResult;
}

bool UParentalSettings::BIsFeatureInBlockList(ESteamParentalFeature Feature)
{
	LogVeryVerbose("");

	bool bResult = false;
#if ENABLE_STEAMCORE
	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsFeatureInBlockList(static_cast<EParentalFeature>(Feature));
	}
#endif

	return bResult;
}
