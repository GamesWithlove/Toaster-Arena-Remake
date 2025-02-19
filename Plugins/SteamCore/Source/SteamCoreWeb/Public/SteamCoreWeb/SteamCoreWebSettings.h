/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCoreWeb Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SteamCoreWeb/SteamWebTypes.h"
#include "SteamCoreWebSettings.generated.h"

UCLASS(config=Engine, defaultconfig, meta = (DisplayName = "SteamCoreWeb Plugin"))
class STEAMCOREWEB_API USteamCoreWebSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	USteamCoreWebSettings();

public:
	/*
	* If an async task takes longer than this (in seconds) it will be cancelled
	*/
	UPROPERTY(config, EditAnywhere, Category = "Settings", meta = (UIMin = "5.0", UIMax = "60.0"))
	float AsyncTaskTimeout;

	/**
	* Disabled subsystems wont be created, SteamCoreWeb subsystem cannot be disabled
	*/
	UPROPERTY(config, EditAnywhere, Category = "Settings", meta = (Bitmask, BitmaskEnum = "/Script/SteamCoreWeb.ESubsystemWeb"))
	int32 DisabledSubsystems;

	/**
	* Enable / Disable debugging for the plugin
	*/
	UPROPERTY(config, EditAnywhere, Category = "Settings")
	bool bDebugging;

	/**
	* If enabled, HTTP requests will not be sent, useful if wanting to debug request strings (enable debugging to get string output)
	*/
	UPROPERTY(config, EditAnywhere, Category = "Settings")
	bool bDevMode;

	/*
	* Steamworks Web API publisher authentication key.
	*/
	UPROPERTY(config, EditAnywhere, Category = "Settings")
	FString Key;

	/*
	* Your AppID
	*/
	UPROPERTY(config, EditAnywhere, Category = "Settings")
	int32 AppID;

	/*
	* Development steam ID to use for testing purposes
	*/
	UPROPERTY(config, EditAnywhere, Category = "Settings")
	FString DevSteamID;

	/**
	* If enabled, we will use the Sandbox interface ISteamMicroTxnSandbox
	* This interface is identical to the regular ISteamMicroTxn interface, but no actual transactions will occur.
	*/
	UPROPERTY(config, EditAnywhere, Category = "MicroTxn")
	bool bSandboxMode;

private:
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual FName GetCategoryName() const override;
	void SaveToIni();
#endif
};

FORCEINLINE bool SteamCoreWebDebugging()
{
	return GetDefault<USteamCoreWebSettings>()->bDebugging;
}

FORCEINLINE bool SteamCoreWebDevMode()
{
	return GetDefault<USteamCoreWebSettings>()->bDevMode;
}

FORCEINLINE bool SteamCoreWebMicroTxnSandboxMode()
{
	return GetDefault<USteamCoreWebSettings>()->bSandboxMode;
}
