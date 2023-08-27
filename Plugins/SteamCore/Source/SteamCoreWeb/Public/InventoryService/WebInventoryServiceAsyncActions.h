/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Methods to improve the administration of Steam Game Servers.
* https://partner.steamgames.com/doc/webapi/IInventoryService
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "WebInventoryServiceAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionAddItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionAddItem : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
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
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Add Item", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|InventoryService|Async")
	static USteamCoreWebAsyncActionAddItem* AddItemAsync(UObject* WorldContextObject, FString Key, int32 AppId, TArray<int32> ItemdefId, FString ItemPropsJson, FString SteamId, bool bNotify, FString RequestId, bool bTradeRestriction);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionAddPromoItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionAddPromoItem : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
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
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Add Promo Item", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|InventoryService|Async")
	static USteamCoreWebAsyncActionAddPromoItem* AddPromoItemAsync(UObject* WorldContextObject, FString Key, int32 AppId, int32 ItemdefId, FString ItemPropsJson, FString SteamId, bool bNotify, FString RequestId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionConsumeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionConsumeItem : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Marks an item as wholly or partially consumed. This action cannot be reversed.
	*
	* @param	Key					Steamworks Web API publisher authentication Key.
	* @param	AppId
	* @param	ItemID				Item ID to be consumed
	* @param	Quantity			Amount of the given item stack to be consumed
	* @param	SteamId
	* @param	RequestId (int64)
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Consume Item", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|InventoryService|Async")
	static USteamCoreWebAsyncActionConsumeItem* ConsumeItemAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString ItemID, FString Quantity, FString SteamId, FString RequestId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionExchangeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionExchangeItem : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
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
	* @param	MaterialsItemId		The unique ID an item in the player's inventory to be converted to the target item type. This should be provided as materialsitemid[0], materialsitemid[1], etc.
	* @param	MaterialsQuantity	The quantity of the matching item that should be used in this recipe. This array must be the same length as materialsitemid.
	* @param	OutputItemdefId		The ItemDef of the item to be created.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Exchange Item", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|InventoryService|Async")
	static USteamCoreWebAsyncActionExchangeItem* ExchangeItemAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, TArray<int32> MaterialsItemId, TArray<int32> MaterialsQuantity, FString OutputItemdefId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetInventory
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetInventory : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* GetInventory is used to retrieve a user's inventory.
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	AppId		The ID of the application associated with the item.
	* @param	SteamId		64-bit Steam ID of the user whos inventory you are requesting.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Inventory", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|InventoryService|Async")
	static USteamCoreWebAsyncActionGetInventory* GetInventoryAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetItemDefs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetItemDefs : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
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
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Item Defs", AutoCreateRefTerm = "ItemdefIDs, WorkshopIDs", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|InventoryService|Async")
	static USteamCoreWebAsyncActionGetItemDefs* GetItemDefsAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString ModifiedSince, TArray<int32> ItemdefIDs, TArray<int32> WorkshopIDs, int32 CacheMaxAgeSeconds);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetPriceSheet
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPriceSheet : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get the Inventory Service price sheet
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Price Sheet", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|InventoryService|Async")
	static USteamCoreWebAsyncActionGetPriceSheet* GetPriceSheetAsync(UObject* WorldContextObject, FString Key, int32 Currency);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionConsolidate
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionConsolidate : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
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
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Consolidate"), Category = "SteamCoreWeb|InventoryService|Async")
	static USteamCoreWebAsyncActionConsolidate* ConsolidateAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, TArray<int32> ItemdefIDs, bool bForce);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionGetQuantity
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetQuantity : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Get the total number of available items of the given type
	*
	* @param	Key			Steamworks Web API publisher authentication Key.
	* @param	AppId		The ID of the application associated with the item.
	* @param	SteamId
	* @param	ItemdefIDs	List of the itemdefid's to query. This should be specified as a series of parameters named 'itemdefid[0]', 'itemdefid[1]', etc.
	* @param	bForce
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get Quantity"), Category = "SteamCoreWeb|InventoryService|Async")
	static USteamCoreWebAsyncActionGetQuantity* GetQuantityAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString SteamId, TArray<int32> ItemdefIDs, bool bForce);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionModifyItems
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionModifyItems : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
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
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Modify Items"), Category = "SteamCoreWeb|InventoryService|Async")
	static USteamCoreWebAsyncActionModifyItems* ModifyItemsAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString InputJson, FString SteamId, int32 Timestamp, FString Updates);
};
