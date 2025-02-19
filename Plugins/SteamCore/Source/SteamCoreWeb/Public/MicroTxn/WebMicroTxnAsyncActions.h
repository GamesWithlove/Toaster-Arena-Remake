/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* This is the interface used to support Microtransactions (In-Game Purchases).
* https://partner.steamgames.com/doc/webapi/ISteamMicroTxn
*
* See also: https://partner.steamgames.com/doc/features/microtransactions
*           https://partner.steamgames.com/doc/features/microtransactions/implementation
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "WebMicroTxnAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionAdjustAgreement
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionAdjustAgreement : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Add time to the payment schedule of an agreement with billing type "steam".
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	SteamId				Steam ID of the client that is adjusting the agreement.
	* @param	AgreementId			Unique 64-bit Steam billing agreement ID.
	* @param	AppId				App ID of the game the agreement is for.
	* @param	NextProcessDate		Date that next recurring payment should be initiated. Format is YYYYMMDD. Date can only be adjusted forward indicating you want to add time to the subscription. If the date exceeds the end date of the subscription, the end date will be extended.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Adjust Agreement", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|MicroTxn|Async")
	static USteamCoreWebAsyncActionAdjustAgreement* AdjustAgreementAsync(UObject* WorldContextObject, FString Key, FString SteamId, FString AgreementId, int32 AppId, FString NextProcessDate);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionCancelAgreement
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionCancelAgreement : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Cancels a recurring billing agreement (subscription).
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	SteamId				Steam ID of the client that is canceling the agreement.
	* @param	AgreementId			Unique 64-bit Steam billing agreement ID.
	* @param	AppId				App ID of the game the agreement is for.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Cancel Agreement", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|MicroTxn|Async")
	static USteamCoreWebAsyncActionCancelAgreement* CancelAgreementAsync(UObject* WorldContextObject, FString Key, FString SteamId, FString AgreementId, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionFinalizeTxn
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionFinalizeTxn : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Completes a purchase that was started by the InitTxn API.
	*
	* This command will capture funds for a transaction and should only be called after the user has authorized the transaction and you have received notification that the authorization was successful.
	* Notification of authorization comes either through the Steam client (your game registers to receive notification) or through the user being redirected back to your web site (return URL specified when you redirect a user's web session to Steam).
	* The usersession value specified in InitTxn determines the notification mechanism.
	* A successful response to this command means payment has been completed and you can safely grant items to the user. In the event of a timeout or some other communication error, use either the QueryTxn or GetReport APIs to get status on the transaction.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	OrderId				Unique 64-bit ID for order
	* @param	AppId				App ID for game.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Finalize Txn", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|MicroTxn|Async")
	static USteamCoreWebAsyncActionFinalizeTxn* FinalizeTxnAsync(UObject* WorldContextObject, FString Key, FString OrderId, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetReport
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetReport : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Steam offers transaction reports that can be downloaded for reconciliation purposes. These reports show detailed information about each transaction that affects the settlement of funds into your accounts.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				App ID for game.
	* @param	Time				Start time of the report. (RFC 3339 UTC formatted like: 2010-01-01T00:00:00Z)
	* @param	Type				Report type (One of: "GAMESALES", "STEAMSTORESALES", "SETTLEMENT")
	* @param	MaxResults			Maximum number of results to return in report. (Default is 1000 if no value is set)
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Report", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|MicroTxn|Async")
	static USteamCoreWebAsyncActionGetReport* GetReportAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString Time = "2010-01-01T00:00:00Z", FString Type = "GAMESALES", int32 MaxResults = 1000);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetUserAgreementInfo
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetUserAgreementInfo : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get detailed information of all recurring billing agreements (subscriptions) for a user.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	SteamId				Steam ID of the client.
	* @param	AppId				App ID for game.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get User Agreement Info", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|MicroTxn|Async")
	static USteamCoreWebAsyncActionGetUserAgreementInfo* GetUserAgreementInfoAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetUserInfo
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetUserInfo : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Retrieves details for a user's purchasing info.
	*
	* These details are based upon the user's Steam wallet.
	* For new accounts or accounts that do not yet have a Steam wallet, the information returned will be based off of the user's IP address. The IP will be taken from the user's Steam client session if they are logged in, otherwise from the ipaddress API parameter. If the user does not have a wallet, is not logged in through the Steam client, and you have not supplied an IP address, this call will return an error indicating the user is not logged in.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	SteamId				Steam ID of the client.
	* @param	Ipaddress			IP address of user in string format (xxx.xxx.xxx.xxx). Only required if usersession in InitTxn was set to web.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get User Info", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|MicroTxn|Async")
	static USteamCoreWebAsyncActionGetUserInfo* GetUserInfoAsync(UObject* WorldContextObject, FString Key, FString SteamId, FString Ipaddress);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionInitTxn
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionInitTxn : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Creates a new purchase. Send the order information along with the Steam ID to seed the transaction on Steam.
	*
	* This command allows you to create a shopping cart of one or more items for a user.
	* The cost and descriptions of these items will be displayed to the user for their approval.
	* The purchase interface can be configured for either the Steam client or a web browser depending on if you are running a purchase in-game or from a web page.
	*
	* A successful response to this command means the transaction has been created.
	* If the purchase interface is the Steam client, the user will automatically be presented with a dialog requesting authorization for the purchase.
	* For a web interface, redirect the user to the steam URL returned in the response.
	* In the event of a timeout or some other communication error, abandon the transaction and create a new one.
	*
	* When a "client" user session is indicated via [param]usersession[/param] the user will be required to approve the transaction from within the game overlay on the client.
	* Web sessions will require the user to be logged into Steam via a browser where the transaction will be presented and an approval option displayed.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	OrderId				Unique 64-bit ID for order
	* @param	SteamId				Steam ID of the client.
	* @param	AppId				App ID of game this transaction is for.
	* @param	Language			ISO 639-1 language code of the item descriptions.
	* @param	Currency			ISO 4217 currency code. See Supported Currencies for proper format of each currency. https://partner.steamgames.com/doc/store/pricing/currencies
	* @param	UserSession			Session where user will authorize the transaction. Valid options are "client" or "web". If this parameter is not supplied, the interface will be assumed to be through a currently logged in Steam client session.
	* @param	Ipaddress			IP address of user in string format (xxx.xxx.xxx.xxx). Only required if [param]usersession[/param] is set to web.
	* @param	ItemID				3rd party ID for item.
	* @param	Quantity			Quantity of this item.
	* @param	Amount				Total cost (in cents) of item(s) to be charged at this time. See Supported Currencies for proper format of each amount. Note that the amount you pass needs to be in the format that matches the "currency" code you pass.
	* @param	Description			Description of item.
	* @param	Category			Optional category grouping for item.
	* @param	AssociatedBundle	Optional bundleid of associated bundle.
	* @param	BillingType			Optional recurring billing type.
	* @param	StartDate			Optional start date for recurring billing.
	* @param	EndDate				Optional end date for recurring billing.
	* @param	Period				Optional period for recurring billing.
	* @param	Frequency			Optional frequency for recurring billing.
	* @param	RecurringAmt		Optional amount to be billed for future recurring billing transactions.
	* @param	BundleCount			Number of bundles in cart.
	* @param	BundleId			3rd party ID of the bundle. This shares the same ID space as 3rd party items.
	* @param	BundleQty			Quantity of this bundle.
	* @param	BundleDesc			Description of bundle.
	* @param	BundleCategory		Optional category grouping for bundle.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Init Txn", BlueprintInternalUseOnly="true", AutoCreateRefTerm = "category, associatedBundle, billingType, startDate, endDate, period, frequency, recurringAmt, bundleCount, bundleID, bundleQty, bundleDesc, bundleCategory"), Category = "SteamCoreWeb|MicroTxn|Async")
	static USteamCoreWebAsyncActionInitTxn* InitTxnAsync(UObject* WorldContextObject, FString Key, FString OrderId, FString SteamId, int32 AppId, FString Language, FString Currency, FString UserSession, FString Ipaddress, TArray<int32> ItemID, TArray<int32> Quantity, TArray<FString> Amount, TArray<FString> Description, TArray<FString> Category, TArray<int32> AssociatedBundle, TArray<FString> BillingType, TArray<FString> StartDate, TArray<FString> EndDate, TArray<FString> Period, TArray<int32> Frequency, TArray<FString> RecurringAmt, TArray<int32> BundleCount, TArray<int32> BundleId, TArray<int32> BundleQty, TArray<FString> BundleDesc, TArray<FString> BundleCategory);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionProcessAgreement
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionProcessAgreement : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Initiate a recurring payment (subscription) for the user.
	*
	* A successful response means that Steam will initiate a billing cycle for the user.
	* It does not mean that the actual billing cycle was completed successfully. Use the GetReport or GetUserAgreementInfo APIs to check actual billing status.
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	OrderId			Unique 64-bit ID for order. If the recurring subscription was initiated from the Steam store, then this field will be 0.
	* @param	SteamId			Steam ID of the client.
	* @param	AgreementId		Unique 64-bit Steam billing agreement ID.
	* @param	AppId			App ID of the game the agreement is for.
	* @param	Amount			Total cost (in cents). This value corresponds to an initial one-time amount to be immediately charged to a user.
	* @param	Currency		ISO 4217 currency code of prices
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Process Agreement"), Category = "SteamCoreWeb|MicroTxn|Async")
	static USteamCoreWebAsyncActionProcessAgreement* ProcessAgreementAsync(UObject* WorldContextObject, FString Key, FString OrderId, FString SteamId, FString AgreementId, int32 AppId, int32 Amount, FString Currency);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionQueryTxn
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionQueryTxn : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Query the status of an order that was previously created with InitTxn.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				App ID of game this transaction is for.
	* @param	OrderId				Unique 64-bit ID for order.
	* @param	TransId				Unique 64-bit Steam transaction ID.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Query Txn"), Category = "SteamCoreWeb|MicroTxn|Async")
	static USteamCoreWebAsyncActionQueryTxn* QueryTxnAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString OrderId, FString TransId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionRefundTxn
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionRefundTxn : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Tells Steam to refund a user for a purchase. Refunds can only be made for the full value of the original order.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				App ID of game this transaction is for.
	* @param	OrderId				Unique 64-bit ID for order.
	* @param	transID				Unique 64-bit Steam transaction ID.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Refund Txn"), Category = "SteamCoreWeb|MicroTxn|Async")
	static USteamCoreWebAsyncActionRefundTxn* RefundTxnAsync(UObject* WorldContextObject, FString Key, FString OrderId, int32 AppId);
};
