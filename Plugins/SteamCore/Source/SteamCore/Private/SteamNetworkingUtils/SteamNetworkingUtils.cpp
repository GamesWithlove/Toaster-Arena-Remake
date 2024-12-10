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

#if ENABLE_STEAMCORE
	if (SteamNetworkingUtils())
	{
		SteamNetworkingUtils()->InitRelayNetworkAccess();
	}
#endif
}

float UNetworkingUtils::GetLocalPingLocation(FSteamNetworkPingLocation& Result)
{
	LogVeryVerbose("");

	float FloatResult = 0.0f;

#if ENABLE_STEAMCORE
	if (SteamNetworkingUtils())
	{
		SteamNetworkPingLocation_t SteamNetworkPingLocation;
		FloatResult = SteamNetworkingUtils()->GetLocalPingLocation(SteamNetworkPingLocation);
		Result = SteamNetworkPingLocation;
	}
#endif
	
	return FloatResult;
}

int32 UNetworkingUtils::EstimatePingTimeBetweenTwoLocations(const FSteamNetworkPingLocation& Location1, const FSteamNetworkPingLocation& Location2)
{
	LogVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamNetworkingUtils())
	{
		Result = SteamNetworkingUtils()->EstimatePingTimeBetweenTwoLocations(Location1, Location2);
	}
#endif
	
	return Result;
}

int32 UNetworkingUtils::EstimatePingTimeFromLocalHost(const FSteamNetworkPingLocation& RemoteLocation)
{
	LogVerbose("");

	int32 Result = 0;

#if ENABLE_STEAMCORE
	if (SteamNetworkingUtils())
	{
		Result = SteamNetworkingUtils()->EstimatePingTimeFromLocalHost(RemoteLocation);
	}
#endif
	
	return Result;
}

void UNetworkingUtils::ConvertPingLocationToString(const FSteamNetworkPingLocation& Location, FString& OutString)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	OutString.Empty();

	TArray<char> DataArray;
	DataArray.SetNum(k_cchMaxSteamNetworkingPingLocationString);

	SteamNetworkingUtils()->ConvertPingLocationToString(Location, DataArray.GetData(), DataArray.Num());
	OutString = UTF8_TO_TCHAR(DataArray.GetData());
#endif
}

bool UNetworkingUtils::ParsePingLocationString(FString String, FSteamNetworkPingLocation& OutResult)
{
	LogVerbose("");

	bool bResult = false;
#if ENABLE_STEAMCORE

	SteamNetworkPingLocation_t Data;
	bResult = SteamNetworkingUtils()->ParsePingLocationString(TCHAR_TO_UTF8(*String), Data);
	OutResult = Data;
#endif
	return bResult;
}

bool UNetworkingUtils::CheckPingDataUpToDate(float MaxAgeSeconds)
{
	LogVerbose("");

	bool bResult = false;
#if ENABLE_STEAMCORE
	bResult = SteamNetworkingUtils()->CheckPingDataUpToDate(MaxAgeSeconds);
#endif
	return bResult;
}
