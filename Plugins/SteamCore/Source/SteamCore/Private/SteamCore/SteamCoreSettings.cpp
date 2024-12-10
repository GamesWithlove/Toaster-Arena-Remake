/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore Documentation: https://eeldev.com
*/

#include "SteamCoreSettings.h"
#include "SteamCore/SteamTypes.h"
#include "SteamCorePluginPrivatePCH.h"
#include "SteamCore/SteamUtilities.h"

FString DefaultEngineIni = FPaths::ProjectConfigDir() / "DefaultEngine.ini";

USteamCoreSettings::USteamCoreSettings()
{
	GConfig->GetBool(TEXT("OnlineSubsystemSteam"), TEXT("bEnabled"), bEnabled, GEngineIni);

	if (!GConfig->GetBool(TEXT("OnlineSubsystemSteam"), TEXT("bRelaunchInSteam"), bRelaunchInSteam, GEngineIni))
	{
		bRelaunchInSteam = true;
	}

	if (!GConfig->GetBool(TEXT("OnlineSubsystemSteam"), TEXT("bVACEnabled"), bVACEnabled, GEngineIni))
	{
		bVACEnabled = true;
	}

	if (!GConfig->GetBool(TEXT("OnlineSubsystemSteam"), TEXT("bAllowP2PPacketRelay"), bAllowP2PPacketRelay, GEngineIni))
	{
		bAllowP2PPacketRelay = true;
	}

	if (!GConfig->GetInt(TEXT("OnlineSubsystemSteam"), TEXT("P2PConnectionTimeout"), P2PConnectionTimeout, GEngineIni))
	{
		P2PConnectionTimeout = 90;
	}

	if (!GConfig->GetInt(TEXT("OnlineSubsystemSteam"), TEXT("SteamAppId"), SteamAppID, GEngineIni))
	{
		SteamAppID = 480;
	}

	if (!GConfig->GetInt(TEXT("OnlineSubsystemSteam"), TEXT("SteamDevAppId"), SteamDevAppID, GEngineIni))
	{
		SteamDevAppID = 480;
	}

	if (!GConfig->GetInt(TEXT("URL"), TEXT("Port"), Port, GEngineIni))
	{
		Port = 7777;
	}

	if (!GConfig->GetInt(TEXT("OnlineSubsystemSteam"), TEXT("GameServerQueryPort"), GameServerQueryPort, GEngineIni))
	{
		Port = 27015;
	}

	if (!GConfig->GetString(TEXT("OnlineSubsystemSteam"), TEXT("GameVersion"), GameVersion, GEngineIni))
	{
		GameVersion = "1.0.0.0";
	}

	if (!GConfig->GetString(TEXT("OnlineSubsystemSteam"), TEXT("GameVersion"), GameVersion, GEngineIni))
	{
		GameVersion = "1.0.0.0";
	}

	if (SteamAppID == 0)
	{
		SteamAppID = 480;
	}

	if (SteamDevAppID == 0)
	{
		SteamDevAppID = SteamAppID;
	}
}

#if WITH_EDITOR
void USteamCoreSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	SaveToIni();
}

FName USteamCoreSettings::GetCategoryName() const
{
	return NAME_Game;
}

void USteamCoreSettings::SaveToIni()
{
	GConfig->SetBool(TEXT("OnlineSubsystemSteam"), TEXT("bEnabled"), bEnabled, DefaultEngineIni);
	GConfig->SetBool(TEXT("OnlineSubsystemSteam"), TEXT("bRelaunchInSteam"), bRelaunchInSteam, DefaultEngineIni);
	GConfig->SetBool(TEXT("OnlineSubsystemSteam"), TEXT("bVACEnabled"), bVACEnabled, DefaultEngineIni);
	GConfig->SetBool(TEXT("OnlineSubsystemSteam"), TEXT("bAllowP2PPacketRelay"), bAllowP2PPacketRelay, DefaultEngineIni);
	GConfig->SetInt(TEXT("OnlineSubsystemSteam"), TEXT("P2PConnectionTimeout"), P2PConnectionTimeout, DefaultEngineIni);
	GConfig->SetInt(TEXT("OnlineSubsystemSteam"), TEXT("SteamAppId"), SteamAppID, DefaultEngineIni);
	GConfig->SetInt(TEXT("OnlineSubsystemSteam"), TEXT("SteamDevAppId"), SteamDevAppID, DefaultEngineIni);
	GConfig->SetInt(TEXT("URL"), TEXT("Port"), Port, DefaultEngineIni);
	GConfig->SetInt(TEXT("OnlineSubsystemSteam"), TEXT("GameServerQueryPort"), GameServerQueryPort, DefaultEngineIni);
	GConfig->SetString(TEXT("OnlineSubsystemSteam"), TEXT("GameVersion"), *GameVersion, DefaultEngineIni);

	GConfig->Flush(false, DefaultEngineIni);
	SaveConfig(CPF_Config, *DefaultEngineIni);

	UE_LOG(LogSteamCore, Log, TEXT("Steam Settings Saved!"));
}
#endif
