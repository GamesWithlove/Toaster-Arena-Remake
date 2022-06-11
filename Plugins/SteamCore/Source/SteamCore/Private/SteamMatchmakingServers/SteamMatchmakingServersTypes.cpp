/**
* Copyright (C) 2017-2022 eelDev AB
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
	Filters = new MatchMakingKeyValuePair_t[MaxFilters];
}

UServerFilter::~UServerFilter()
{
	delete[] Filters;
}

void UServerFilter::AddFilterMap(FString Value)
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "map", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterGameDataAnd(FString Value)
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gamedataand", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterGameDataOr(FString Value)
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gamedataor", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterGameDataNor(FString Value)
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gamedatanor", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterGameTagsAnd(FString Value)
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gametagsand", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterGameTagsNor(FString Value)
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gametagsnor", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterAnd(FString Value)
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "and", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterOr(FString Value)
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "or", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterNand(FString Value)
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "nand", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterNor(FString Value)
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "nor", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterGameAddr(FString Value)
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gameaddr", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterDedicated()
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "dedicated", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterSecure()
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "secure", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterNotFull()
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "notfull", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterHasPlayers()
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "hasplayers", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterNoPlayers()
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "noplayers", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterLinux()
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "linux", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterVersion(FString Value)
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "version_match", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterName(FString Value)
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "name_match", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterWhitelisted()
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "white", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterNotAppId(FString Value)
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "napp", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*Value), GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterProxy()
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "proxy", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

void UServerFilter::AddFilterPassword()
{
	LogVerbose("");

	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "password", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		LogError("AddFilter is exceeding max filters!");
	}
}

TMap<FString, FString> UServerFilter::GetFilters()
{
	LogVeryVerbose("");

	TMap<FString, FString> outFilters;

	for (int32 i = 0; i < NumFilters; i++)
	{
		outFilters.Add(Filters[i].m_szKey, Filters[i].m_szValue);
	}

	return outFilters;
}
