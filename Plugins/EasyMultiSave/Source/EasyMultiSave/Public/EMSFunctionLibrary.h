//Easy Multi Save - Copyright (C) 2024 by Michael Hegemann.  

#pragma once

#include "CoreMinimal.h"
#include "EMSObject.h"
#include "EMSFunctionLibrary.generated.h"

UCLASS()
class EASYMULTISAVE_API UEMSFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/**
	* Define a global save game name. If empty, it will use the default name from the Plugin Settings.
	*
	* @param SaveGameName - The name.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Slots", meta = (WorldContext = "WorldContextObject", DisplayName = "Set Current Save Slot"))
	static void SetCurrentSaveGameName(UObject* WorldContextObject, const FString& SaveGameName);

	/**
	* Get the current save game slot defined by 'Set Current Save Slot'.

	* @param SaveGameName - Convenient reference, so you don't nee to use the SlotInfo struct.
	* @return - The current slot info and save game name.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Slots", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Current Save Slot"))
	static UEMSInfoSaveGame* GetSlotInfoSaveGame(UObject* WorldContextObject, FString& SaveGameName);

	/**
	* Get a save game slot by name.

	* @param SaveGameName - The slot name you want to get the info from.
	* @return - The desired slot info. Will return the current slot if SaveGameName is empty.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Slots", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Named Save Slot"))
	static UEMSInfoSaveGame* GetNamedSlotInfo(UObject* WorldContextObject, const FString& SaveGameName);

	/**
	* Loads the array of available save games / slots, sorted by their time of saving.
	*
	* @return - The array of available save game slots.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Slots", meta = (WorldContext = "WorldContextObject", DisplayName = "Get All Save Slots"))
	static TArray<FString> GetSortedSaveSlots(UObject* WorldContextObject);

	/**
	* Useful if you have a multi-user game. 
	* Puts all save game data into /UserSaveGames/UserName instead of /SaveGames/
	* If the name is none, it just uses the /SaveGames/ folder.
	*
	* @param UserName - The desired name.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Multi User", meta = (WorldContext = "WorldContextObject", DisplayName = "Set Current Save User"))
	static void SetCurrentSaveUserName(UObject* WorldContextObject, const FString& UserName);

	/**
	* Fully removes all save files of a specific user.
	*
	* @param UserName - The user to delete.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Multi User", meta = (WorldContext = "WorldContextObject", DisplayName = "Delete Save User"))
	static void DeleteSaveUser(UObject* WorldContextObject, const FString& UserName);

	/**
	* Returns an array of all available save users that were added using 'Set Current Save User'. Sorted by name.
	*
	* @return - The array of available save users.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Multi User", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Save Users"))
	static TArray<FString> GetAllSaveUsers(UObject* WorldContextObject);

	/**
	* Check if a specific save slot exists. 

	* @param SaveGameName - The save slot to look for.
	* @return - If the slot is valid.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Slots", meta = (WorldContext = "WorldContextObject", DisplayName = "Does Save Slot Exist"))
	static bool DoesSaveSlotExist(UObject* WorldContextObject, const FString& SaveGameName);

	/**
	* Deletes all data and directories for a save game.
	*
	* @param SaveGameName - The name of the save game to delete.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Slots", meta = (WorldContext = "WorldContextObject", DisplayName = "Delete Save Slot"))
	static void DeleteAllSaveDataForSlot(UObject* WorldContextObject, const FString& SaveGameName);

	/**
	* Deletes the cache for Multi-Level Saving. 
	* All save data from currently unloaded levels is removed from memory. 
	*
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Multi Level", meta = (WorldContext = "WorldContextObject", DisplayName = "Clear Multi Level Save"))
	static void ClearMultiLevelSave(UObject* WorldContextObject);

	/**
	* Imports a thumbnail as .png from the save game folder.
	*
	* @param SaveGameName - The name of the Savegame/Slot that is tied to the thumbnail.
	* @return - The loaded thumbnail as Texture2D.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Thumbnail", meta = (WorldContext = "WorldContextObject"))
	static UTexture2D* ImportSaveThumbnail(UObject* WorldContextObject, const FString& SaveGameName);

	/**
	* Saves a thumbnail from a render target texture as .png to the save game folder.
	*
	* @param TextureRenderTarget - The texture target from the scene capture 2d source.
	* @param SaveGameName - The name of the Savegame/Slot that is tied to the thumbnail.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Thumbnail", meta = (WorldContext = "WorldContextObject"))
	static void ExportSaveThumbnail(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, const FString& SaveGameName);

	/**
	* Adds and Removes the common EMS property tags. A good place to call it is Begin Play. Should not be called from EMS Interface Events. 
	*
	* @param bSkipSave -  The Actor is not saved at all.
	* @param bPersistent - Loads this Actor independent of the level. Not valid for Player Actors. Does not save Transform.
	* @param bSkipTransform - Skips saving/loading of the Actors transform. Spawned Actors appear at (0,0,0).
	* @param LoadedState - Changes the loaded state. For example, an Actor might be loaded again without 'Full Reload' .
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Actors", meta = (WorldContext = "WorldContextObject"))
	static void SetActorSaveProperties(UObject* WorldContextObject, bool bSkipSave, bool bPersistent, bool bSkipTransform, ELoadedStateMod LoadedState);

	/**
	* Checks if SaveGameActors or LoadGameActors is currently active.
	* 
	* @return - True if SaveGameActors or LoadGameActors is currently active.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Actors", meta = (WorldContext = "WorldContextObject"))
	static bool IsSavingOrLoading(UObject* WorldContextObject);

	/**
	* Saves all or a specific Custom Save Object.
	* When the SaveGame input is empty, it saves all available custom save objects automatically.
	*
	* @param SaveGame - Optional input save object. You can connect a 'Get Custom Save Object' to it.
	* @return - If the object was saved.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Custom", meta = (WorldContext = "WorldContextObject", DisplayName = "Save Custom Objects", AdvancedDisplay="SaveGame"))
	static bool SaveCustom(UObject* WorldContextObject, UEMSCustomSaveGame* SaveGame);

	/**
	* Gets the desired EmsCustomSaveGame object.
	*
	* @param SaveGameClass - The class of the save object.
	* @param SaveSlot - Optional name of the Slot you want to get the Custom Save from. Must be valid! If empty, will use the Current Slot.
	* @param FileName - Optional custom file name. Allows for multiple Custom Save Objects from one Class. If Empty, will use the default file name from the Class.
	* @return - The custom save object.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Custom", meta = (WorldContext = "WorldContextObject", DeterminesOutputType = "SaveGameClass", DisplayName = "Get Custom Save Object", AdvancedDisplay = "SaveSlot, FileName"))
	static UEMSCustomSaveGame* GetCustomSave(UObject* WorldContextObject, TSubclassOf<UEMSCustomSaveGame> SaveGameClass, FString SaveSlot, FString FileName);

	/**
	* Deletes the desired EmsCustomSaveGame object.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Custom", meta = (WorldContext = "WorldContextObject", DisplayName = "Delete Custom Save Object"))
	static void DeleteCustomSave(UObject* WorldContextObject, UEMSCustomSaveGame* SaveGame);

	/**
	* If the current Persistent Level is using World Partition with EMS.
	* 
	* @return - If the World uses World Partition.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | World Partition", meta = (WorldContext = "WorldContextObject", DisplayName = "Is World Partition Save"))
	static bool IsWorldPartition(UObject* WorldContextObject);

	/**
	* Clears all World Partition Save Data. 
	* This can be useful for nonlinear streaming such as teleporting the player. 
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | World Partition", meta = (WorldContext = "WorldContextObject", DisplayName = "Clear World Partition Save"))
	static void ClearWorldPartition(UObject* WorldContextObject);

	/**
	* Adds any UObject to the Actor's save data. This can include other Actors, Subsystems, and similar objects.
	* The provided ID must be unique and can be a GUID converted to a string or any other unique identifier.
	* The data is written alongside the Actor when it gets saved.
	*
	* @return - True if the UObject was successfully serialized, false otherwise.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Raw Objects", meta = (WorldContext = "WorldContextActor", DisplayName = "Save Raw Object Data"))
	static bool SaveRawObject(AActor* WorldContextActor, FRawObjectSaveData Data);

	/**
	* Retrieves a specific saved UObject from this Actor on demand.
	* This function should be called after the Actor has finished loading, like from the Actor Loaded event.
	* Note that the Objects are not automatically re-created, so they must be valid when you access the data.
	*
	* @return - The serialized UObject if successful. Returns an invalid result if the retrieval fails or if the Object cannot be found by its ID.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Raw Objects", meta = (WorldContext = "WorldContextActor", DisplayName = "Load Raw Object Data"))
	static UObject* LoadRawObject(AActor* WorldContextActor, FRawObjectSaveData Data);
};


