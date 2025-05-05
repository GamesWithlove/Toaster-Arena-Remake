/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Used to access information about users.
* https://partner.steamgames.com/doc/webapi/IUserAuth
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "WebUserAuth.generated.h"

UCLASS()
class STEAMCOREWEB_API UWebUserAuth : public USteamCoreWebSubsystem
{
	GENERATED_BODY()
public:
	UWebUserAuth() { SubsystemType = ESubsystemWeb::UserAuth; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Authenticate User
	*
	* @param	SteamId					Should be the users steamid, unencrypted.
	* @param	SessionKey				Should be a 32 byte random blob of data, which is then encrypted with RSA using the Steam system's public key. Randomness is important here for security.
	* @param	EncryptedLoginKey		Should be the users hashed loginkey, AES encrypted with the sessionkey.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|UserAuth")
	void AuthenticateUser(const FOnSteamCoreWebCallback& Callback, FString SteamId, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey);

	/**
	* Authenticate User Ticket
	*
	* @param	Key			Steamworks Web API publisher authentication key.
	* @param	AppId		The App ID to get the betas of.
	* @param	Ticket		Convert the ticket from GetAuthSessionTicket from binary to hex into an appropriately sized byte character array and pass the result in as this ticket parameter.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|UserAuth")
	void AuthenticateUserTicket(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString Ticket);
};
