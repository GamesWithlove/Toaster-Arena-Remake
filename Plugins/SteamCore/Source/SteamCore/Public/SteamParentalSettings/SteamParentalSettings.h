/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamParentalSettings
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamParentalSettingsTypes.h"
#include "SteamParentalSettings.generated.h"

UCLASS()
class STEAMCORE_API UParentalSettings : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UParentalSettings() { SubsystemType = ESteamSubsystem::ParentalSettings; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Is parental lock enabled
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|ParentalSettings")
	bool BIsParentalLockEnabled();

	/**
	* Is parental lock locked
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|ParentalSettings")
	bool BIsParentalLockLocked();

	/**
	* Is app blocked
	*
	* @param	AppID
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|ParentalSettings")
	bool BIsAppBlocked(int32 AppID);

	/**
	* Is app blocked
	*
	* @param	AppID
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|ParentalSettings")
	bool BIsAppInBlockList(int32 AppID);

	/**
	* Is feature blocked
	*
	* @param	Feature		feature
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|ParentalSettings")
	bool BIsFeatureBlocked(ESteamParentalFeature Feature);

	/**
	* Is feature blocked
	*
	* @param	Feature		feature
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|ParentalSettings")
	bool BIsFeatureInBlockList(ESteamParentalFeature Feature);
};
