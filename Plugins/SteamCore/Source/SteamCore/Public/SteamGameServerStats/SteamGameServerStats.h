/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServerStats
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamGameServerStatsTypes.h"
#include "SteamGameServerStats.generated.h"

UCLASS()
class STEAMCORE_API UGameServerStats : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UGameServerStats() { SubsystemType = ESteamSubsystem::GameServerStats; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|GameServerStats|Delegates")
	FOnGSStatsUnloaded GSStatsUnloaded;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Resets the unlock status of an achievement for the specified user.
	*
	* This is primarily only ever used for testing.
	* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!
	* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.
	*
	* @param	SteamIDUser		The Steam ID of the user to clear the achievement for.
	* @param	Name			The 'API Name' of the Achievement to reset.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServerStats")
	bool ClearUserAchievement(FSteamID SteamIDUser, FString Name);

	/**
	* Gets the unlock status of the Achievement.
	*
	* @param	SteamIDUser		The Steam ID of the user to get the achievement for.
	* @param	Name			The 'API Name' of the achievement.
	* @param	bAchieved		Returns the unlock status of the achievement.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServerStats")
	bool GetUserAchievement(FSteamID SteamIDUser, FString Name, bool& bAchieved);

	/**
	* Gets the current value of the a stat for the specified user.
	*
	* @param	SteamIDUser		The Steam ID of the user to get the stat for.
	* @param	Name			The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	Data			The variable to return the stat value into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServerStats")
	bool GetUserStatFloat(FSteamID SteamIDUser, FString Name, float& Data);

	/**
	* Gets the current value of the a stat for the specified user.
	*
	* @param	SteamIDUser		The Steam ID of the user to get the stat for.
	* @param	Name			The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	Data			The variable to return the stat value into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServerStats")
	bool GetUserStatInt(FSteamID SteamIDUser, FString Name, int32& Data);

	/**
	* Asynchronously downloads stats and achievements for the specified user from the server.
	*
	* These stats will only be auto-updated for clients currently playing on the server. For other users you'll need to call this function again to refresh any data.
	*
	* @param	SteamIDUser		The Steam ID of the user to request the stats for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServerStats", meta = (AutoCreateRefTerm = "callback"))
	void ServerRequestUserStats(const FOnServerRequestUserStats& Callback, FSteamID SteamIDUser);

	/**
	* Send the changed stats and achievements data to the server for permanent storage for the specified user.
	*
	* If this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.
	* This call can be rate limited. Call frequency should be on the order of minutes, rather than seconds. 
	* You should only be calling this during major state changes such as the end of a round, the map changing, or the user leaving a server.
	* If you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process 
	* ends then this function will automatically be called.
	* You can find additional debug information written to the %steam_install%\logs\stats_log.txt file.
	*
	* @param	SteamIDUser		The Steam ID of the user to store the stats of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServerStats", meta = (AutoCreateRefTerm = "callback"))
	void ServerStoreUserStats(const FOnServerStoreUserStats& Callback, FSteamID SteamIDUser);

	/**
	* Unlocks an achievement for the specified user.
	*
	* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!
	* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.
	*
	* @param	SteamIDUser		The Steam ID of the user to unlock the achievement for.
	* @param	Name			The 'API Name' of the Achievement to unlock.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServerStats")
	bool SetUserAchievement(FSteamID SteamIDUser, FString Name);

	/**
	* Sets / updates the value of a given stat for the specified user.
	*
	* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!
	* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.
	*
	* @param	SteamIDUser		The Steam ID of the user to set the stat on.
	* @param	Name			The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	Data			The new value of the stat. This must be an absolute value, it will not increment or decrement for you.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServerStats")
	bool SetUserStatFloat(FSteamID SteamIDUser, FString Name, float Data);

	/**
	* Sets / updates the value of a given stat for the specified user.
	*
	* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!
	* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.
	*
	* @param	SteamIDUser		The Steam ID of the user to set the stat on.
	* @param	Name			The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	Data			The new value of the stat. This must be an absolute value, it will not increment or decrement for you.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServerStats")
	bool SetUserStatInt(FSteamID SteamIDUser, FString Name, int32 Data);


	/**
	* Updates an AVGRATE stat with new values for the specified user.
	*
	* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!
	* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.
	* These updates will work only on stats that game servers are allowed to edit. 
	* If the "Set By" field for this stat is "Official GS" then only game servers that have been declared as officially 
	* controlled by you will be able to set it. To do this you must set the IP range of your official servers in the 
	* Dedicated Servers section of App Admin.

	*
	* @param	SteamIDUser			The Steam ID of the user to update the AVGRATE stat for.
	* @param	Name				The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	CountThisSession	The value accumulation since the last call to this function.
	* @param	SessionLength		The amount of time in seconds since the last call to this function.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|GameServerStats")
	bool UpdateUserAvgRateStat(FSteamID SteamIDUser, FString Name, float CountThisSession, float SessionLength);

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
	STEAM_CALLBACK_MANUAL(UGameServerStats, OnGSStatsUnloaded, GSStatsUnloaded_t, OnGSStatsUnloadedCallback);
#endif
};
