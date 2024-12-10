/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SteamCoreSettings.generated.h"

UENUM(BlueprintType, meta = (Bitflags))
enum class ESteamSubsystem : uint8
{
	SteamCore = 0,
	AppList,
	Apps,
	Friends,
	GameServer,
	GameServerStats,
	Inventory,
	Input,
	Matchmaking,
	MatchmakingServers,
	Music,
	Networking,
	NetworkingUtils,
	ParentalSettings,
	RemoteStorage,
	RemotePlay,
	Screenshots,
	UGC,
	User,
	UserStats,
	Utils,
	Video,
	SteamParties,
	GameSearch
};

ENUM_CLASS_FLAGS(ESteamSubsystem)

UCLASS(meta = (DisplayName = "SteamCore Plugin"))
class STEAMCORE_API USteamCoreSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	USteamCoreSettings();
public:
	/**
	* Enable steam
	* 
	* Make sure you add this to your DefaultEngine.ini:
	* [OnlineSubsystem]
	* DefaultPlatformService=Steam
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
	bool bEnabled;

	/**
	* Should the game force a relaunch in Steam if the client isn't already loaded
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
	bool bRelaunchInSteam;

	/**
	* Enable Steam VAC
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
	bool bVACEnabled;

	/**
	* Should Steam P2P sockets all fall back to Steam servers relay if a direct connection fails
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
	bool bAllowP2PPacketRelay;

	/**
	* Timeout (in seconds) period for any P2P session
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
	int P2PConnectionTimeout;

	/**
	* AppID of your application
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
	int SteamAppID;

	/**
	* SteamDevAppID of your application
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
	int SteamDevAppID;

	/**
	* Steam Server Port
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
	int Port;

	/**
	* Steam Server Query Port
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
	int GameServerQueryPort;

	/**
	* Current game version
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
	FString GameVersion;

private:
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual FName GetCategoryName() const override;
	void SaveToIni();
#endif
};