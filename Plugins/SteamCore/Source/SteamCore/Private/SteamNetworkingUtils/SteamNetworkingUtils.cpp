/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamNetworkingUtils
*/

#include "SteamNetworkingUtils/SteamNetworkingUtils.h"
#include "SteamCorePluginPrivatePCH.h"

void UNetworkingUtils::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UNetworkingUtils::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
void UNetworkingUtils::InitRelayNetworkAccess()
{
	LogVerbose("");

	if (SteamNetworkingUtils())
	{
		SteamNetworkingUtils()->InitRelayNetworkAccess();
	}
}

float UNetworkingUtils::GetLocalPingLocation(FSteamNetworkPingLocation& Result)
{
	LogVeryVerbose("");

	float FloatResult = 0.0f;

	if (SteamNetworkingUtils())
	{
		SteamNetworkPingLocation_t SteamNetworkPingLocation;
		FloatResult = SteamNetworkingUtils()->GetLocalPingLocation(SteamNetworkPingLocation);
		Result = SteamNetworkPingLocation;
	}

	return FloatResult;
}

int32 UNetworkingUtils::EstimatePingTimeBetweenTwoLocations(const FSteamNetworkPingLocation& Location1, const FSteamNetworkPingLocation& Location2)
{
	LogVerbose("");

	int32 Result = 0;

	if (SteamNetworkingUtils())
	{
		Result = SteamNetworkingUtils()->EstimatePingTimeBetweenTwoLocations(Location1, Location2);
	}
	return Result;
}

int32 UNetworkingUtils::EstimatePingTimeFromLocalHost(const FSteamNetworkPingLocation& RemoteLocation)
{
	LogVerbose("");

	int32 Result = 0;

	if (SteamNetworkingUtils())
	{
		Result = SteamNetworkingUtils()->EstimatePingTimeFromLocalHost(RemoteLocation);
	}
	return Result;
}

void UNetworkingUtils::ConvertPingLocationToString(const FSteamNetworkPingLocation& Location, FString& OutString)
{
	LogVerbose("");

	OutString.Empty();

	TArray<char> DataArray;
	DataArray.SetNum(k_cchMaxSteamNetworkingPingLocationString);

	SteamNetworkingUtils()->ConvertPingLocationToString(Location, DataArray.GetData(), DataArray.Num());
	OutString = UTF8_TO_TCHAR(DataArray.GetData());
}

bool UNetworkingUtils::ParsePingLocationString(FString String, FSteamNetworkPingLocation& OutResult)
{
	LogVerbose("");

	bool bResult = false;

	SteamNetworkPingLocation_t Data;
	bResult = SteamNetworkingUtils()->ParsePingLocationString(TCHAR_TO_UTF8(*String), Data);
	OutResult = Data;

	return bResult;
}

bool UNetworkingUtils::CheckPingDataUpToDate(float MaxAgeSeconds)
{
	LogVerbose("");

	bool bResult = false;
	bResult = SteamNetworkingUtils()->CheckPingDataUpToDate(MaxAgeSeconds);
	return bResult;
}
