/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* This service allows your game to report cheats and cheaters to the VAC system and provides the toolset behind the Game Bans system. It enables two independent workflows for detecting and managing cheating in your game
* To use this interface you must first opt in to VAC support. This can be done from the Anti-Cheat Configuration page in the App Admin panel.
* https://partner.steamgames.com/doc/webapi/ICheatReportingService
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "WebCheatReporting.generated.h"

UCLASS()
class STEAMCOREWEB_API UWebCheatReporting : public USteamCoreWebSubsystem
{
	GENERATED_BODY()
public:
	UWebCheatReporting() { SubsystemType = ESubsystemWeb::CheatReporting; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* ReportPlayerCheating is designed to gather community reports of cheating, where one player reports another player within the game.
	*
	* It is intended for unreliable data from peers in the game ( semi-trusted sources ). The back-end that reports the data should ensure that both parties are authenticated, but the data in itself is treated as hearsay. Optional parameters may be used to encode the type of cheating that is suspected or additional evidence ( an identifier pointing to the match/demo for further review )
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				The App ID for the game.
	* @param	SteamId				The Steam ID of the user who is being reported for cheating.
	* @param	SteamIdReporter		(Optional) The Steam ID of the user or game server who is reporting the cheating.
	* @param	AppData				(Optional) App specific data about the type of cheating set by developer. (ex 1 = Aimbot, 2 = Wallhack, 3 = Griefing)
	* @param	bHeuristic			(Optional) Extra information about the source of the cheating - was it a heuristic.
	* @param	bDetection			(Optional) Extra information about the source of the cheating - was it a detection.
	* @param	bPlayerReport		(Optional) Extra information about the source of the cheating - was it a player report.
	* @param	bNoReportID			(Optional) Don't return reportid. This should only be passed if you don't intend to issue a ban based on this report.
	* @param	GameMode			(Optional) Extra information about state of game - was it a specific type of game play or game mode. (0 = generic)
	* @param	SuspicionStartTime	(Optional) Extra information indicating how far back the game thinks is interesting for this user. Unix epoch time (time since Jan 1st, 1970).
	* @param	Severity			(Optional) Level of severity of bad action being reported. Scale set by developer.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|CheatReporting")
	void ReportPlayerCheating(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, FString SteamIdReporter, FString AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity);

	/**
	* Requests a game ban on a specific player.
	*
	* This is designed to be used after the incidents from ReportPlayerCheating have been reviewed and cheating has been confirmed.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	SteamId				The Steam ID of the user who is being reported for cheating.
	* @param	AppId				The App ID for the game.
	* @param	ReportID			The reportid originally used to report cheating.
	* @param	CheatDescription	Text describing cheating infraction.
	* @param	Duration			Ban duration requested in seconds. (duration 0 will issue infinite - less than a year is a suspension and not visible on profile)
	* @param	bDelayBan			Delay the ban according to default ban delay rules.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|CheatReporting")
	void RequestPlayerGameBan(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString ReportID, FString CheatDescription, int32 Duration, bool bDelayBan);

	/**
	* Remove a game ban on a player.
	*
	* This is used if a Game ban is determined to be a false positive.
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	SteamId			The Steam ID of the user to remove the game ban on.
	* @param	AppId			The App ID for the game.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|CheatReporting")
	void RemovePlayerGameBan(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId);

	/**
	* Get a list of cheating reports submitted for this app.
	*
	* Used to gather the cheating reports so that they may be reviewed and a determination made.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				The App ID for the game.
	* @param	TimeEnd				The end of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).
	* @param	TimeBegin			The beginning of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).
	* @param	ReportIdmin			Minimum reportID to include. (can pass 0 - end of previous report range)
	* @param	bIncludeReports		(Optional) Include reports. If false includebans must be true.
	* @param	bIncludeBans		(Optional) Include ban requests? If false includereports must be true.
	* @param	SteamId				(Optional) Query just for this Steam ID.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|CheatReporting")
	void GetCheatingReports(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, int32 TimeEnd, int32 TimeBegin, FString ReportIdmin = "0", bool bIncludeReports = false, bool bIncludeBans = false, FString SteamId = "");

	/**
	* Reports cheat data. Only use on test account that is running the game but not in a multiplayer session.
	*
	* This is for reporting specific cheats to the VAC system. This is done by running the cheat and the game and then calling this webapi.
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	SteamId					The Steam ID of the user to remove the game ban on.
	* @param	AppId					The App ID for the game.
	* @param	PathAndFileName			Path and file name of the cheat executable.
	* @param	WebCheatURL				Web url where the cheat was found and downloaded.
	* @param	TimeNow					Local system time now. 64 bit windows system time.
	* @param	TimeStarted				Local system time when cheat process started. ( 0 if not yet run ) 64 bit windows system time.
	* @param	TimeStopped				Local system time when cheat process stopped. ( 0 if still running ) 64 bit windows system time.
	* @param	CheatName				Descriptive name for the cheat.
	* @param	GameProcessId			Process ID of the running game.
	* @param	CheatProcessId			Process ID of the cheat process that ran.
	* @param	CheatParam1	(int64)		Extra cheat data. 
	* @param	CheatParam2	(int64)		Extra cheat data.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|CheatReporting")
	void ReportCheatData(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32 GameProcessId, int32 CheatProcessId, FString CheatParam1, FString CheatParam2);

	/**
	* Checks a user's VAC ban status and verifies a user's VAC session status. If verification fails, then do not let the user matchmake into a secure game.
	*
	* This is used before a user enters matchmaking or joins a game.
	* If the player is blocking VAC in some way and VAC can not scan the computer for cheats, it will report success = true and session_verified = false. 
	* Checking this webapi will allow you to prevent the user from matchmaking or joining a server and then just getting kicked by VAC a short time later ( with a k_EAuthSessionResponseVACCheckTimedOut result from an authentication Callback ). 
	* The VAC system may not always have had time to fully determine if the clients system is cooperating, and if so it will report success = false. 
	* It is also possible for the players system to pass the initial check but then fail to respond later, in that case verification will succeed, but a k_EAuthSessionResponseVACCheckTimedOut may follow later.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	SteamId				The Steam ID of the user.
	* @param	AppId				The App ID for the game.
	* @param	SessionID (int64)	The Session ID that was obtained from the call to StartSecureMultiplayerSession. 
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|CheatReporting")
	void RequestVacStatusForUser(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString SessionID);

	/**
	* Tell the VAC servers that a secure multiplayer session has started.
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	SteamId			The Steam ID of the user.
	* @param	AppId			The App ID for the game.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|CheatReporting")
	void StartSecureMultiplayerSession(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId);

	/**
	* Tell the VAC servers that a secure multiplayer session has ended.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	SteamId				The Steam ID of the user.
	* @param	AppId				The App ID for the game.
	* @param	SessionID (int64)	The Session ID that was obtained from the call to StartSecureMultiplayerSession. 
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|CheatReporting")
	void EndSecureMultiplayerSession(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, FString SessionID);
};
