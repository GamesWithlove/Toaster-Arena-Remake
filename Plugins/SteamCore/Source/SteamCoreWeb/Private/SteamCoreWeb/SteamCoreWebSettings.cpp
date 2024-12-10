/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCoreWeb Documentation: https://eeldev.com
*/

#include "SteamCoreWeb/SteamCoreWebSettings.h"
#include "SteamCoreWeb/SteamWebTypes.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

USteamCoreWebSettings::USteamCoreWebSettings()
	: AsyncTaskTimeout(15.0f)
	, bDebugging(true)
	, bDevMode(false)
	, AppID(480)
{
	AsyncTaskTimeout = FMath::Clamp(AsyncTaskTimeout, 5.0f, 60.f);
}

#if WITH_EDITOR
void USteamCoreWebSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	SaveToIni();
}

FName USteamCoreWebSettings::GetCategoryName() const
{
	return NAME_Game;
}

void USteamCoreWebSettings::SaveToIni()
{
	GConfig->Flush(false, GEngineIni);
	SaveConfig();
}
#endif
