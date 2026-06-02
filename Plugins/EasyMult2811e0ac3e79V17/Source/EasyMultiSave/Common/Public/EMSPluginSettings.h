//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "EMSTypes.h"
#include "EMSInfoSaveGame.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMSPluginSettings.generated.h"

UCLASS(config=Engine, defaultconfig)
class EASYMULTISAVE_API UEMSPluginSettings : public UObject
{
	GENERATED_BODY()

public:

	/**The default save game slot name, that is used if no name is set with 'Set Current Save Slot Name'.*/
	UPROPERTY(config, EditAnywhere, Category = "General Settings", meta = (DisplayName = "Default Slot Name"))
	FString DefaultSaveGameName = "MySaveGame";

	/**The Blueprint class that you want to use for the slot info, usually does not need a custom class.*/
	UPROPERTY(config, EditAnywhere, Category = "General Settings", meta = (MetaClass = "/Script/EasyMultiSave.EMSInfoSaveGame", DisplayName = "Slot Info Class"))
	FSoftClassPath SlotInfoSaveGameClass;

	/**The file system that is used depending on the platform.*/
	UPROPERTY(config, EditAnywhere, Category = "General Settings", meta = (DisplayName = "File System"))
	EFileSaveMethod FileSaveMethod = EFileSaveMethod::FM_Desktop;
	
	/**
	 * When enabled, automatically creates a backup of the current Save Data before overwriting it.
	 * The backup is saved with the same Slot/File Name, prefixed by '_bak0'.
	 * To access the backup, use the 'Get Backup Name' node.
	 * Only valid data suitable for loading will be backed up. 
	 */
	UPROPERTY(config, EditAnywhere, Category = "General Settings", meta = (DisplayName = "Auto Backup Previous Data"))
	bool bAutoBackup = false;

public:

	/**Struct and Map variables with 'Save Game' checked are saved automatically for all Actors. Otherwise only the desired variables inside a struct are saved.*/
	UPROPERTY(config, EditAnywhere, Category = "Actors", meta = (DisplayName = "Auto Save Structs"))
	bool bAutoSaveStructs = true;

	/**
	* Enable automatic saving and loading of destroyed Actors, re-destroying them upon load.
	* Less flexible compared to manual handling, but offers greater convenience in World Partition levels.
	* Will handle Actors that implement the Actor Save Interface.
	*/
	UPROPERTY(config, EditAnywhere, Category = "Actors", meta = (DisplayName = "Auto Destroy Actors"))
	bool bAutoDestroyActors = true;

	/**If enabled, the system runs a more expensive check for spawned Actors. This is useful if you spawn Actors at the beginning of a level and experience issues.*/
	UPROPERTY(config, EditAnywhere, AdvancedDisplay, Category = "Actors", meta = (DisplayName = "Advanced Spawn Check"))
	bool bAdvancedSpawnCheck = false;

public:

	/**If enabled, saving player and level actors is outsourced to a background thread.*/
	UPROPERTY(config, EditAnywhere, Category = "Save and Load", meta = (DisplayName = "Multi-Thread Saving"))
	bool bMultiThreadSaving = false;

	/**The method that is used to load level-actors.*/
	UPROPERTY(config, EditAnywhere, Category = "Save and Load", meta = (DisplayName = "Level Load Method"))
	ELoadMethod LoadMethod = ELoadMethod::LM_Default;

	/**Estimated Number of Actors to load in one batch when using Multi-Thread or Deferred Loading.*/
	UPROPERTY(config, EditAnywhere, AdvancedDisplay, Category = "Save and Load", meta = (UIMin=1, ClampMin=1, DisplayName = "Load Batch Size", EditCondition = "LoadMethod != ELoadMethod::LM_Default"))
	int DeferredLoadStackSize = 20;

	/**
	* How long the 'Wait For Save or Load Completed' and 'Load Game Actors' nodes are allowed to remain fixed in a state.
	* The 'Save Game Actors' node will always complete in one or another way. 
	*/
	UPROPERTY(config, EditAnywhere, AdvancedDisplay, Category = "Save and Load", meta = (DisplayName = "Async Wait Delay"))
	float AsyncWaitDelay = 10.f;

	/**
	* The Pre-Save events (for Actors and Components) are forced to be called on the Game Thread when using Multi-Thread saving.
	* This should be enabled if you directly access Game Thread-only objects (Timers, Widgets, etc.) or rendering-related properties from the event.
	* Enabling this adds some overhead to save time with no game performance impact.
	*/
	UPROPERTY(config, EditAnywhere, AdvancedDisplay, Category = "Save and Load", meta = (DisplayName = "Pre-Save On Game Thread", EditCondition = "bMultiThreadSaving == true"))
	bool bPreSaveOnGameThread = false;

public:

	/**
	* How Level Actor Save Data is kept between levels.
	* Prevents old save data from being overwritten. 
	* 
	* Game Mode is persistent and saved independent of the level. 
	* Player is persistent and transform is saved per level.
	* 
	* The level name from the slot is always the last saved level.
	* 
	* Multi-Level Saving modes are only partly compatible with each other:
	* Disabled <AND> Streaming
	* Basic    <AND> Full 
	*/
	UPROPERTY(config, EditAnywhere, Category = "Persistence", meta = (DisplayName = "Multi-Level Saving"))
	EMultiLevelSaveMethod MultiLevelSaving = EMultiLevelSaveMethod::ML_Disabled;

public:

	/**
	* The method to use for automatic saving and loading of manually streamed levels.
	* Multi-Level Saving must be set to Streaming or Full.
	*/
	UPROPERTY(config, EditAnywhere, Category = "Streaming", meta = (DisplayName = "Streaming Level Saving", EditCondition = "MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full"))
	EAutoSaveStreamMethod LevelStreamSaving = EAutoSaveStreamMethod::Disabled;

	/** 
	* Minimum duration a streaming level must remain unloaded before the auto-save is triggered.
	* This optimizes performance by batching save operations when multiple levels unload simultaneously.
	* Avoid re-streaming these levels until this cooldown period has elapsed.
	*/
	UPROPERTY(config, EditAnywhere, AdvancedDisplay, Category = "Streaming", meta = (DisplayName = "Streaming Save Threshold", EditCondition = "(MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full) && WorldPartitionInit != EWorldPartitionInit::Skip && WorldPartitionSaving != EWorldPartitionMethod::Disabled"))
	float StreamingSaveThreshold = 0.5f;

	/**
	* Enables support for Runtime Level Instances and multiple Streaming Levels of the same type.
	* Also enables support for Actors inside Level Instances within Streaming Levels that are loaded and unloaded. 
	* Has no effect for World Partition levels, as those handle Level Instances automatically.
	* 
	* Make sure to use 'Opitional Level Name Override' for dynamically spawned Level Instances.
	* After spawning ensure a delay before invoking Load Game Actors.
	* 
	* This setting is not backwards-compatible, as it generates different unique IDs for Actors.
	*/
	UPROPERTY(config, EditAnywhere, AdvancedDisplay, Category = "Streaming", meta = (DisplayName = "Allow Dynamic Streaming Levels", EditCondition = "MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full"))

	bool bDynamicLevelStreaming = false;

public:

	/**
	* The method to use for automatic saving and loading of World Partition levels.
	* Multi-Level Saving must be set to Streaming or Full.
	*/
	UPROPERTY(config, EditAnywhere, Category = "World Partition", meta = (DisplayName = "World Partition Saving", EditCondition = "MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full"))
	EWorldPartitionMethod WorldPartitionSaving = EWorldPartitionMethod::MemoryOnly;

	/**The mode for initially loading World Partition levels.*/
	UPROPERTY(config, EditAnywhere, Category = "World Partition", meta = (DisplayName = "World Partition Init Mode", EditCondition = "(MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full) && WorldPartitionSaving != EWorldPartitionMethod::Disabled"))
	EWorldPartitionInit WorldPartitionInit = EWorldPartitionInit::Default;

	/**
	* Delay before the initial World Partition loading process can begin.
	* During this time, the players position (transform) should be set, either manually or by loading Player Actors.
	*/
	UPROPERTY(config, EditAnywhere, AdvancedDisplay, Category = "World Partition", meta = (DisplayName = "World Partition Init Delay", EditCondition = "(MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full) && WorldPartitionInit != EWorldPartitionInit::Skip && WorldPartitionSaving != EWorldPartitionMethod::Disabled"))
	float WorldPartitionInitTime = 1.f;

	/**The minimum time that level streaming must remain in a finished state until the initial World Partition load will start.*/
	UPROPERTY(config, EditAnywhere, AdvancedDisplay, Category = "World Partition", meta = (DisplayName = "World Partition Init Threshold", EditCondition = "(MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full) && WorldPartitionInit != EWorldPartitionInit::Skip && WorldPartitionSaving != EWorldPartitionMethod::Disabled"))
	float WorldPartitionInitThreshold = 1.f;

public:

	/**The image compression format for thumbnails.*/
	UPROPERTY(config, EditAnywhere, Category = "Compression", meta = (DisplayName = "Thumbnail Image Format"))
	EThumbnailImageFormat ThumbnailFormat = EThumbnailImageFormat::Jpeg;

public:

	/**A predefined file version that is written to all save files.*/
	UPROPERTY(config, EditAnywhere, Category = "Versioning", meta = (DisplayName = "Save Game Version"))
	uint32 SaveGameVersion = 1000;

	/**
	* Required when migrating very old LEGACY(<UE 5.4) save files to a new engine build.
	* Newer versions of Unreal have much better backward compatibility.
	* Select the minimum Engine version that the old files were created with.
	*/
	UPROPERTY(config, EditAnywhere, Category = "Versioning", meta = (DisplayName = "Migrated Save Engine Version"))
	EOldPackageEngine MigratedSaveEngineVersion = EOldPackageEngine::EN_UE54;

public:

	/**
	* Map old Blueprint class paths to new ones to handle renamed or moved runtime-spawned actors.
	* For already existing save files!
	*
	* Key:   Old Blueprint class path (MUST use generated class format with _C suffix)
	* Value: New Blueprint class path (can be selected from dropdown or content browser)
	*
	* To get the class path:
	* 1. Right-click the Blueprint in Content Browser
	* 2. Select "Copy Object Path"
	* 3. Paste - it will look like: /Game/Path/MyActor.MyActor
	* 4. Convert to generated class format: /Game/Path/MyActor.MyActor_C
	*
	* Example:
	* Key:   /Game/OldFolder/Blueprints/EMS_OldProjectile.EMS_OldProjectile_C
	* Value: Selected from Content Browser
	*
	* Result: Save data referencing the old class will spawn the new class instead.
	* This ensures existing save data continues to work after Blueprint reorganization.
	*/
	UPROPERTY(config, EditAnywhere, Category = "Redirectors", meta = (DisplayName = "Runtime Actor Redirects", AllowedClasses = "/Script/Engine.Actor"))
	TMap<FString, FSoftClassPath> RuntimeClasses;
	
	/**
	* Map level package paths to handle renamed or moved levels.
	* For already existing save files!
	*
	* Key:   Original level path that should redirect to the value.
	* Value: The canonical level path that will be redirected to.
	*
	* To get the level path:
	* 1. Right-click the level in Content Browser
	* 2. Select "Copy Package Path"
	* 3. Paste the full path (e.g., /Game/Maps/MyLevel)
	*
	* Example:
	* Key:   /Game/OldLocation/Maps/LegacyLevelName
	* Value: /Game/NewLocation/Maps/CurrentLevelName 
	* 
	* If you rename a level multiple times, just keep the original Level as Key.
	* 
	* DO NOT replace the old level asset with a new level of the same name. 
	*/
	UPROPERTY(config, EditAnywhere, Category = "Redirectors", meta = (DisplayName = "Level Redirects"))
	TMap<FString, FString> LevelRedirects;

public:

	/** The time between checking if World Partition can initially load. */
	UPROPERTY(config)
	float WorldPartitionInitPollingRate = 0.05f;

	/** Log the total data size of any serialized Object when saving. */
	UPROPERTY(config)
	bool bDebugDataSize = false;

public:

	static inline const UEMSPluginSettings* Get()
	{
		const UEMSPluginSettings* Settings = GetDefault<UEMSPluginSettings>();
		ensure(Settings);

		return Settings;
	}

	static inline UEMSPluginSettings* GetMutable()
	{
		UEMSPluginSettings* Settings = GetMutableDefault<UEMSPluginSettings>();
		ensure(Settings);

		return Settings;
	}

public:

	TMap<FString, FString> ShortLevelRedirects;         // Short: Old -> New
	TMap<FString, FString> ReverseLevelRedirects;       // Long: New -> Old (swapped)
	TMap<FString, FString> ReverseShortLevelRedirects;  // Short: New -> Old (swapped)

	static void BuildLevelRedirects()
	{
		UEMSPluginSettings* Settings = GetMutableDefault<UEMSPluginSettings>();
		ensure(Settings);

		Settings->ShortLevelRedirects.Reset();
		Settings->ReverseLevelRedirects.Reset();
		Settings->ReverseShortLevelRedirects.Reset();

		Settings->ShortLevelRedirects.Reserve(Settings->LevelRedirects.Num());
		Settings->ReverseLevelRedirects.Reserve(Settings->LevelRedirects.Num());
		Settings->ReverseShortLevelRedirects.Reserve(Settings->LevelRedirects.Num());

		for (const TPair<FString, FString>& Pair : Settings->LevelRedirects)
		{
			const FString OldShortName = FPackageName::GetShortName(Pair.Key);
			const FString NewShortName = FPackageName::GetShortName(Pair.Value);

			//Forward mappings
			Settings->ShortLevelRedirects.Add(OldShortName, NewShortName);

			//Reverse mappings (swapped)
			Settings->ReverseLevelRedirects.Add(Pair.Value, Pair.Key);
			Settings->ReverseShortLevelRedirects.Add(NewShortName, OldShortName);
		}
	}
};

