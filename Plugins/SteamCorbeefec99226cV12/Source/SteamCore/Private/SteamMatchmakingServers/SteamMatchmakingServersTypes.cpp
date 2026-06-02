/**
* Copyright (C) 2017-2025 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmakingServers
*/

#include "SteamMatchmakingServers/SteamMatchmakingServersTypes.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCorePluginPrivatePCH.h"

UServerFilter::UServerFilter()
	: MaxFilters(100)
	, NumFilters(0)
{
#if WITH_STEAMCORE
	Filters = new MatchMakingKeyValuePair_t[MaxFilters];
#endif
}

UServerFilter::~UServerFilter()
{
#if WITH_STEAMCORE
	delete[] Filters;
#endif
}

void UServerFilter::AddFilterMap(FString Value)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "map", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterGameDataAnd(FString Value)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gamedataand", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterGameDataOr(FString Value)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gamedataor", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterGameDataNor(FString Value)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gamedatanor", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterGameTagsAnd(FString Value)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gametagsand", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterGameTagsNor(FString Value)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gametagsnor", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterAnd(FString Value)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "and", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterOr(FString Value)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "or", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterNand(FString Value)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "nand", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterNor(FString Value)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "nor", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterGameAddr(FString Value)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gameaddr", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterDedicated()
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "dedicated", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterSecure()
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "secure", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterNotFull()
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "notfull", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterHasPlayers()
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "hasplayers", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterNoPlayers()
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "noplayers", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterLinux()
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "linux", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterVersion(FString Value)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "version_match", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterName(FString Value)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "name_match", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterWhitelisted()
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "white", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterNotAppId(FString Value)
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "napp", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterProxy()
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "proxy", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

void UServerFilter::AddFilterPassword()
{
	LogSteamCoreVerbose("");

#if WITH_STEAMCORE
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "password", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogSteamCoreError("AddFilter is exceeding max filters!");
	}
#endif
}

TMap<FString, FString> UServerFilter::GetFilters()
{
	LogSteamCoreVeryVerbose("");

	TMap<FString, FString> OutFilters;
#if WITH_STEAMCORE

	for (int32 i = 0; i < NumFilters; i++)
	{
		OutFilters.Add(Filters[i].m_szKey, Filters[i].m_szValue);
	}

#endif
	return OutFilters;
}
