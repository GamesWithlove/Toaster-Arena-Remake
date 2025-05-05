/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/
*/

#include "SteamFixModule.h"
#include "Misc/CommandLine.h"
#include "Runtime/Launch/Resources/Version.h"

#define LOCTEXT_NAMESPACE "FSteamFixModule"

IMPLEMENT_MODULE(FSteamFixModule, SteamFix)
void FSteamFixModule::StartupModule()
{
#if WITH_EDITOR
#if ENGINE_MINOR_VERSION == 25 || ENGINE_MINOR_VERSION == 26 || ENGINE_MAJOR_VERSION == 5
	FString CommandLine = FCommandLine::Get();

	if (CommandLine.Contains("MultiprocessOSS"))
	{
		CommandLine.ReplaceInline(TEXT("-MultiprocessOSS"), TEXT(" "));

		FCommandLine::Set(*CommandLine);
	}
#endif
#endif
}

void FSteamFixModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
