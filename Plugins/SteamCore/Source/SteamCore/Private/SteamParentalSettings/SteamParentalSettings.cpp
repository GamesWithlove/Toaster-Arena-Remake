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

	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsParentalLockEnabled();
	}

	return bResult;
}

bool UParentalSettings::BIsParentalLockLocked()
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsParentalLockLocked();
	}

	return bResult;
}

bool UParentalSettings::BIsAppBlocked(int32 AppID)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsAppBlocked(AppID);
	}

	return bResult;
}

bool UParentalSettings::BIsAppInBlockList(int32 AppID)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsAppInBlockList(AppID);
	}

	return bResult;
}

bool UParentalSettings::BIsFeatureBlocked(ESteamParentalFeature Feature)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsFeatureBlocked(static_cast<EParentalFeature>(Feature));
	}

	return bResult;
}

bool UParentalSettings::BIsFeatureInBlockList(ESteamParentalFeature Feature)
{
	LogVeryVerbose("");

	bool bResult = false;

	if (SteamParentalSettings())
	{
		bResult = SteamParentalSettings()->BIsFeatureInBlockList(static_cast<EParentalFeature>(Feature));
	}

	return bResult;
}
