//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMSFunctionLibrary.generated.h"

class UEMSObject;
class UEMSCustomSaveGame;
class UEMSInfoSaveGame;
class UTextureRenderTarget2D;

UCLASS()
class EASYMULTISAVE_API UEMSFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


	/** Save Slots  */
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
	* Check if a specific save slot exists.

	* @param SaveGameName - The save slot to look for.
	* @param bComplete - Checks if the Slot includes Player and Level save files and not just for the Slot Info.
	* @return - If the slot is valid.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Slots", meta = (WorldContext = "WorldContextObject", DisplayName = "Does Save Slot Exist", AdvancedDisplay = "bComplete"))
	static bool DoesSaveSlotExist(UObject* WorldContextObject, const FString& SaveGameName, bool bComplete);

	/**
	* Deletes all or specific data for a save slot.
	*
	* @param SaveGameName - The name of the save game to delete.
	* @param Data - The specific Data you want to remove from the Slot.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Slots", meta = (WorldContext = "WorldContextObject", DisplayName = "Delete Save Slot", AdvancedDisplay = "Data"))
	static void DeleteAllSaveDataForSlot(UObject* WorldContextObject, const FString& SaveGameName, EDeleteSlotType Data);


	/** Save Users */
public:

	/**
	* Useful if you have a multi-user game. 
	* Puts all save game data into /UserSaveGames/UserName instead of /SaveGames/
	* If the name is none, it just uses the /SaveGames/ folder.
	*
	* @param UserName - The desired name.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Users", meta = (WorldContext = "WorldContextObject", DisplayName = "Set Current Save User"))
	static void SetCurrentSaveUserName(UObject* WorldContextObject, const FString& UserName);

	/**
	* Get the current save user name defined by 'Set Current Save User'.
	*
	* @return - The current save user name.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Users", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Current Save User"))
	static FString GetCurrentSaveUser(UObject* WorldContextObject);

	/**
	* Fully removes all save files of a specific user.
	*
	* @param UserName - The user to delete.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Users", meta = (WorldContext = "WorldContextObject", DisplayName = "Delete Save User"))
	static void DeleteSaveUser(UObject* WorldContextObject, const FString& UserName);

	/**
	* Returns an array of all available save users that were added using 'Set Current Save User'. Sorted by name.
	*
	* @return - The array of available save users.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Users", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Save Users"))
	static TArray<FString> GetAllSaveUsers(UObject* WorldContextObject);


	/** Multi Level */
public:

	/**
	* Clears the cache used for Multi-Level Saving.
	* Removes all save data belonging to currently unloaded levels from memory.
	* Player and Game Mode data is preserved and can be carried over to the next level.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Multi Level", meta = (WorldContext = "WorldContextObject", DisplayName = "Clear Multi Level Save"))
	static void ClearMultiLevelSave(UObject* WorldContextObject);


	/** Thumbnails */
public:

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


	/** Other Functions */
public:

	/**
	* Adds and Removes the common EMS property tags. A good place to call it is Begin Play. Should not be called from EMS Interface Events. 
	*
	* @param bSkipSave -  The Actor is not saved at all.
	* @param bPersistent - Loads this Actor independent of the level. Not valid for Player Actors. Does not save Transform.
	* @param bSkipTransform - Skips saving/loading of the Actors transform. Spawned Actors appear at (0,0,0).
	* @param LoadedState - Changes the loaded state. For example, an Actor might be loaded again without 'Full Reload' .
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Actors", meta = (DefaultToSelf = "Actor"))
	static void SetActorSaveProperties(AActor* Actor, bool bSkipSave, bool bPersistent, bool bSkipTransform, ELoadedStateMod LoadedState);

	/**
	* Checks if SaveGameActors or LoadGameActors is currently active.
	* 
	* @return - True if SaveGameActors or LoadGameActors is currently active.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Actors", meta = (WorldContext = "WorldContextObject"))
	static bool IsSavingOrLoading(UObject* WorldContextObject);

	/**
	* Returns whether an Actor is currently considered loaded.
	*
	* True one frame after the 'Actor Loaded' event.
	* Also true directly after saving to avoid redundant reloads.
	* Can be manually overridden using 'Set Actor Save Properties'.
	*
	* @param Actor - The Actor to evaluate. Defaults to self.
	* @return - True if the Actor is in a loaded state.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Actors", meta = (DefaultToSelf = "Actor"))
	static bool IsLoadedState(AActor* Actor);


	/** Custom Save Objects */
public:

	/**
	* Saves either all Custom Save Objects or a specific one, based on the input.
	* If no SaveGame object is provided, all registered Custom Save Objects will be saved automatically.
	* If UseSaveSlot is enabled, only the Objects in the current Save Slot will be saved.
	*
	* @param SaveGame - (Optional) The specific save object to store. You can connect a 'Get Custom Save Object' node here.
	* @return - True if the save process completed successfully.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Custom", meta = (WorldContext = "WorldContextObject", DisplayName = "Save Custom Object(s)", AdvancedDisplay="SaveGame"))
	static bool SaveCustom(UObject* WorldContextObject, UEMSCustomSaveGame* SaveGame);

	/**
	* Gets the desired Custom Save Object(EmsCustomSaveGame). It is always valid.
	*
	* @param SaveGameClass - The class of the save object.
	* @param SaveSlot - Optional name of the Slot you want to get the Custom Save from. 'Use Save Slot' must be true in the Class. If empty, will use the Current Slot.
	* @param FileName - Optional custom file name. Allows for multiple Custom Save Objects from one Class. If Empty, will use the default file name from the Class.
	* @return - The custom save object.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Custom", meta = (WorldContext = "WorldContextObject", DeterminesOutputType = "SaveGameClass", DisplayName = "Get Custom Save Object", AdvancedDisplay = "SaveSlot, FileName"))
	static UEMSCustomSaveGame* GetCustomSave(UObject* WorldContextObject, TSubclassOf<UEMSCustomSaveGame> SaveGameClass, FString SaveSlot, FString FileName);

	/**
	 * Permanently deletes the specified Custom Save object and removes its associated data.
	 * Use with caution — this operation cannot be undone.
	 *
	 * @param SaveGame - The Custom Save object to delete.
	 */
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Custom", meta = (WorldContext = "WorldContextObject", DisplayName = "Delete Custom Save Object"))
	static void DeleteCustomSave(UObject* WorldContextObject, UEMSCustomSaveGame* SaveGame);

	/**
	 * Resets the specified Custom Save object according to the selected type.
	 * Use with caution — performing a reset before saving may result in data loss.
	 *
	 * @param SaveGame - The Custom Save object to reset.
	 * @param Type - The type of reset operation to perform.
	 */
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Custom", meta = (WorldContext = "WorldContextObject", DisplayName = "Reset Custom Save Object"))
	static void ResetCustomSave(UObject* WorldContextObject, UEMSCustomSaveGame* SaveGame, EResetCustomSaveType Type);

	/**
	* Checks if an actual Custom Save File exists.
	*
	* @param SaveSlot - Optional name of the Slot you want to get the Custom Save from. 
	* @param FileName - The name of the Custom Save File.
	* @return - If the file actually exists.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Custom", meta = (WorldContext = "WorldContextObject", DisplayName = "Does Custom Save Exist"))
	static bool DoesCustomSaveFileExist(UObject* WorldContextObject, FString SaveSlot, FString FileName);


	/** World Partition */
public:

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


	/** Raw Object Saving */
public:

	/**
	* Adds any UObject to the Actor's save data. This can include other Actors, Subsystems, and similar objects.
	* The provided ID must be unique and can be a GUID converted to a string or any other unique identifier.
	* The data is written alongside the Actor when it gets saved.
	*
	* @return - True if the UObject was successfully serialized, false otherwise.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Raw Objects", meta = (WorldContext = "WorldContextObject", DisplayName = "Save Raw Object Data"))
	static bool SaveRawObject(UObject* WorldContextObject, FRawObjectSaveData Data);

	/**
	* Retrieves a specific saved UObject from this Actor on demand.
	* This function should be called after the Actor has finished loading, like from the Actor Loaded event.
	* Note that the Objects are not automatically re-created, so they must be valid when you access the data.
	*
	* @return - The serialized UObject if successful. Returns an invalid result if the retrieval fails or if the Object cannot be found by its ID.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Raw Objects", meta = (WorldContext = "WorldContextObject", DisplayName = "Load Raw Object Data"))
	static UObject* LoadRawObject(UObject* WorldContextObject, FRawObjectSaveData Data);

private:

	static AActor* ResolveContextActor(UObject* WorldContextObject);


	/** Streaming */
public:

	/**
	* If Level Streaming is still marked as active for EMS saving or loading.
	*
	* @return - If Level Streaming is still active.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Streaming", meta = (WorldContext = "WorldContextObject", DisplayName = "Is Level Streaming Active"))
	static bool IsLevelStreamingActive(UObject* WorldContextObject);


	/** Custom Player */
public:

	/**
	* Saves player-specific data to a custom save file. Uses the current save slot.
	* This function is intended for use on dedicated servers, where client-specific data needs to be stored on the server side.
	*
	* @param Controller - The controller associated with the player whose data is being saved.
	* @param FileName - The name of the custom save file to which the player's data will be written.
	* @return - Returns true if the player data was successfully saved to the file; false otherwise.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Custom Player", meta = (DisplayName = "Save Custom Player"))
	static bool SavePlayerActorsCustom(AController* Controller, const FString& FileName);

	/**
	* Loads player-specific data from a custom save file synchronously. Uses the current save slot.
	* This function is intended for use on dedicated servers, where client-specific data needs to be stored on the server side.
	* A good place to call this function is 'On Restart Player' in your Game Mode. 
	*
	* @param Controller - The controller associated with the player whose data is being loaded.
	* @param FileName - The name of the custom save file containing the player's data.
	* @return - Returns true if the player data was successfully loaded from the file; false otherwise.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Custom Player", meta = (DisplayName = "Load Custom Player"))
	static bool LoadPlayerActorsCustom(AController* Controller, const FString& FileName);

	/**
	* Deletes a custom save file associated with a specific player. Uses the current save slot.
	* This function is useful in scenarios where outdated or unnecessary player data needs to be removed from storage.
	*
	* @param FileName - The name of the custom save file to be deleted.
	* @return - Returns true if the file was successfully deleted; false otherwise.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Custom Player", meta = (WorldContext = "WorldContextObject", DisplayName = "Delete Custom Player"))
	static bool DeleteCustomPlayerFile(UObject* WorldContextObject, const FString& FileName);


	/** Backup */
public:

	/**
	 * Returns the EMS backup name corresponding to the given base name.
	 *
	 * The backup name is generated by appending a backup suffix.
	 * to the original name. For example: "File" you get "File_Bak0".
	 *
	 * @param - BaseName The original name (e.g., of a save slot or file) to derive the backup name from.
	 * @return - A generated backup name string based on the given base name.
	 */
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Backup", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Backup Name"))
	static FString GetBackupName(UObject* WorldContextObject, const FString& BaseName);

};


