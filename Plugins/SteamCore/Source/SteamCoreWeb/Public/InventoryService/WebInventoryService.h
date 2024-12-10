/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/IInventoryService
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "WebInventoryService.generated.h"

UCLASS()
class STEAMCOREWEB_API UWebInventoryService : public USteamCoreWebSubsystem
{
	GENERATED_BODY()
public:
	UWebInventoryService() { SubsystemType = ESubsystemWeb::Inventory; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* AddItem is used to add new items directly in a user's inventory. For each itemdef, an instance of that type is created and added to the target account.
	*
	* Items of type 'bundle' or 'generator' are unpacked at the time they are added. The response message provides information about the item or items that were actually inserted in the inventory.
	* This call will fail if the itemdef is not defined or cannot be unpacked; or if the target player does not have permission for the given appid.
	*
	* Player notification of a new item, if any, is best handled by the game client. 
	* Calls to AddItem that occur when the player is not in-game may optionally set notify=1 to notify the player via Steam. This may engage any of the player-notification mechanisms in Steam, including an overlay popup.
	*
	* The optional requestid parameter allows a client to make an idempotent call. If the client is unsure whether a request completed successfully on the server, it can replay the request, reusing the original request ID.
	* If the request is replayed, the response will include current state for the items that were affected by the original request, without making new changes.
	*
	* If the original request fails on the server, replaying the same request ID will re-attempt the work rather than reporting the prior error result.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				The ID of the application associated with the item.
	* @param	ItemdefId (int64)	List of the itemdefid's to grant. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.
	* @param	ItemPropsJson
	* @param	SteamId				SteamID of the player to receive the items.
	* @param	bNotify				Optional, default 0. Set to 1 to indicate the user is not in-game and should see a Steam notification.
	* @param	RequestId (int64)	Optional, default 0. Clients may provide a unique identifier for a request to perform at most once execution. When a requestid is resubmitted, it will not cause the work to be performed again; the response message will be the current state of items affected by the original successful execution.
	* @param	bTradeRestriction	Optional, default 0. Set to 1 to have Steam apply market and trade cooldowns as if this was a purchased item.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|InventoryService")
	void AddItem(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, TArray<int32> ItemdefId, FString ItemPropsJson, FString SteamId, bool bNotify, FString RequestId, bool bTradeRestriction);

	/**
	* Adds a promo item to a user's inventory
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				
	* @param	ItemdefId (int64)	
	* @param	ItemPropsJson
	* @param	SteamId				SteamID of the player to receive the items.
	* @param	bNotify				Should notify the user that the item was added to their Steam Inventory.
	* @param	RequestId (int64)	
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|InventoryService")
	void AddPromoItem(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, int32 ItemdefId, FString ItemPropsJson, FString SteamId, bool bNotify, FString RequestId);

	/**
	* Marks an item as wholly or partially consumed. This action cannot be reversed.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId
	* @param	ItemId				Item ID to be consumed
	* @param	Quantity			Amount of the given item stack to be consumed
	* @param	SteamId
	* @param	RequestId (int64)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|InventoryService")
	void ConsumeItem(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString ItemId, FString Quantity, FString SteamId, FString RequestId);

	/**
	* ExchangeItem is used for crafting - converting items using a predefined recipe. A successful exchange destroys the set of items required by the crafting recipe, and adds a new instance of the target itemdef to the player's inventory.
	*
	* The target item definition must have one or more crafting recipes declared in the exchange attribute. Recipes declare the number and type of items required to create the target item. If the set of items provided in the ExchangeItems call does not satisfy any recipe, the call fails and no changes are made to the inventory.
	*
	* See the Inventory Service Schema documentation for more detail on crafting recipes.
	* The crafting operation will take trade and market restrictions into account; the created item will have the latest trade restriction of any item used to create it.
	*
	* If successful, this call returns an encoded JSON blob that lists the items that were changed by this call - the consumed items and the newly created one.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId				The ID of the application associated with the item.
	* @param	SteamId				SteamID of the player that owns the items.
	* @param	MaterialsItemID		The unique ID an item in the player's inventory to be converted to the target item type. This should be provided as materialsitemid[0], materialsitemid[1], etc.
	* @param	MaterialsQuantity	The quantity of the matching item that should be used in this recipe. This array must be the same length as materialsitemid.
	* @param	OutputItemdefId		The ItemDef of the item to be created.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|InventoryService")
	void ExchangeItem(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, TArray<int32> MaterialsItemID, TArray<int32> MaterialsQuantity, FString OutputItemdefId);

	/**
	* GetInventory is used to retrieve a user's inventory.
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	AppId		The ID of the application associated with the item.
	* @param	SteamId		64-bit Steam ID of the user whos inventory you are requesting.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|InventoryService")
	void GetInventory(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId);

	/**
	* GetInventory is used to retrieve a user's inventory.
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	AppId					The ID of the application associated with the item.
	* @param	ModifiedSince			Use to retrieve just updates to the itemdefs since a given time. Format is yyyymmddThhmmssZ (E.g. 20140808T010203Z).
	* @param	ItemdefIDs				Use to retrieve just specific itemdefs by itemdefid
	* @param	WorkshopIDs				Use to retrieve just specific itemdefs by workshopid
	* @param	CacheMaxAgeSeconds		Allow stale data to be returned for the specified number of seconds.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|InventoryService", meta = (AutoCreateRefTerm = "itemdefIDs, workshopIDs"))
	void GetItemDefs(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString ModifiedSince, TArray<int32> ItemdefIDs, TArray<int32> WorkshopIDs, int32 CacheMaxAgeSeconds);

	/**
	* Get the Inventory Service price sheet
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|InventoryService")
	void GetPriceSheet(const FOnSteamCoreWebCallback& Callback, FString Key, int32 Currency);

	/**
	* Consolidate items of the given type within an user's inventory.
	*
	* Whenever items are combined into a stack, the resulting stack takes the market and trade restriction values of the most-restricted item. 
	* The Consolidate action ignores any item with an active market or trade restriction, unless 'force' is set to true.
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	AppId		The ID of the application associated with the item.
	* @param	SteamId
	* @param	ItemdefIDs
	* @param	bForce
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|InventoryService")
	void Consolidate(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, TArray<int32> ItemdefIDs, bool bForce);

	/**
	* Get the total number of available items of the given type
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	AppId		The ID of the application associated with the item.
	* @param	SteamId
	* @param	ItemdefIDs	List of the itemdefid's to query. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.
	* @param	bForce
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|InventoryService")
	void GetQuantity(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString SteamId, TArray<int32> ItemdefIDs, bool bForce);

	/**
	* Get the total number of available items of the given type
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	AppId		The ID of the application associated with the item.
	* @param	InputJson
	* @param	SteamId		The steamid of the user who owns the items. Must be specified in the input_json parameter.
	* @param	Timestamp	Unix timestamp of the request. An error will be returned if the items have been modified since this request time. Must be specified in the input_json parameter.
	* @param	Updates		The list of items and properties being modified. Must be specified in the input_json parameter.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|InventoryService")
	void ModifyItems(const FOnSteamCoreWebCallback& Callback, FString Key, int32 AppId, FString InputJson, FString SteamId, int32 Timestamp, FString Updates);
};
