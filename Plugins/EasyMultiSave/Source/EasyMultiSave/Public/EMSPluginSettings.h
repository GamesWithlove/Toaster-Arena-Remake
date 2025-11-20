//Easy Multi Save - Copyright (C) 2024 by Michael Hegemann.  

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMSInfoSaveGame.h"
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

	/**If enabled, the system runs a more expensive check for spawned Actors. This is useful if you spawn Actors at the beginning of a level and experience issues.*/
	UPROPERTY(config, EditAnywhere, Category = "Actors", meta = (DisplayName = "Advanced Spawn Check"))
	bool bAdvancedSpawnCheck = false;

	/**
	Struct and Map variables with 'Save Game' checked are saved automatically for all Actors. Otherwise only the desired variables inside a struct are saved.
	*/
	UPROPERTY(config, EditAnywhere, Category = "Actors", meta = (DisplayName = "Auto Save Structs"))
	bool bAutoSaveStructs = true;

	/**
	* UE 5.3 and higher only. Enable automatic saving and loading of destroyed Actors, re-destroying them upon load.
	* Less flexible compared to manual handling, but offers greater convenience in World Partition levels.
	* Will handle Actors that implement the Actor Save Interface.
	*/
	UPROPERTY(config, EditAnywhere, Category = "Actors", meta = (DisplayName = "Auto Destroy Actors"))
	bool bAutoDestroyActors = true;

	/**If enabled, saving player and level actors is outsourced to a background thread.*/
	UPROPERTY(config, EditAnywhere, Category = "Save and Load", meta = (DisplayName = "Multi-Thread Saving"))
	bool bMultiThreadSaving = false;

	/**The method that is used to load level-actors.*/
	UPROPERTY(config, EditAnywhere, Category = "Save and Load", meta = (DisplayName = "Level Load Method"))
	ELoadMethod LoadMethod = ELoadMethod::LM_Default;

	/**Estimated Number of Actors to load in one batch.*/
	UPROPERTY(config, EditAnywhere, AdvancedDisplay, Category = "Save and Load", meta = (DisplayName = "Deferred Load Size", EditCondition = "LoadMethod == ELoadMethod::LM_Deferred"))
	int DeferredLoadStackSize = 20;

	/**How long the Async load/wait nodes are allowed to remain fixed in a state.*/
	UPROPERTY(config, EditAnywhere, AdvancedDisplay, Category = "Save and Load", meta = (DisplayName = "Async Wait Delay"))
	float AsyncWaitDelay = 10.f;

	/**
	* How Level Actor Save Data is kept between levels.
	* Prevents old save data from being overwritten. 
	* 
	* Game Mode is persistent and not saved per level. 
	* Player is persistent and transform is saved per level.
	* 
	* The level name from the slot is always the last saved level.
	*/
	UPROPERTY(config, EditAnywhere, Category = "Persistence", meta = (DisplayName = "Multi-Level Saving"))
	EMultiLevelSaveMethod MultiLevelSaving = EMultiLevelSaveMethod::ML_Disabled;

	/**The controller, pawn and player state can be loaded independent of the level without transforms.*/
	UPROPERTY(config, EditAnywhere, Category = "Persistence", meta = (DisplayName = "Persistent Player", EditCondition = "MultiLevelSaving == EMultiLevelSaveMethod::ML_Disabled"))
	bool bPersistentPlayer;

	/**The game mode and game state can be loaded independent of the level.*/
	UPROPERTY(config, EditAnywhere, Category = "Persistence", meta = (DisplayName = "Persistent Game Mode", EditCondition = "MultiLevelSaving == EMultiLevelSaveMethod::ML_Disabled"))
	bool bPersistentGameMode;

	/**
	The method to use for automatic saving and loading of World Partition levels.
	Multi-Level Saving must be set to Streaming or Full.
	*/
	UPROPERTY(config, EditAnywhere, Category = "World Partition", meta = (DisplayName = "World Partition Saving", EditCondition = "MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full"))
	EWorldPartitionMethod WorldPartitionSaving = EWorldPartitionMethod::Enabled;

	/**
	The mode for initially loading World Partition levels.
	*/
	UPROPERTY(config, EditAnywhere, Category = "World Partition", meta = (DisplayName = "World Partition Init Mode", EditCondition = "(MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full) && WorldPartitionSaving != EWorldPartitionMethod::Disabled"))
	EWorldPartitionInit WorldPartitionInit = EWorldPartitionInit::Default;

	/**
	How long to wait until initial World Partition loading starts. Avoids unnecessary overhead on begin.
	During this time, the Player should set it's initial transform either manually or by loading Player Actors. 
	*/
	UPROPERTY(config, EditAnywhere, Category = "World Partition", meta = (DisplayName = "World Partition Init Time", EditCondition = "(MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full) && WorldPartitionInit != EWorldPartitionInit::Skip && WorldPartitionSaving != EWorldPartitionMethod::Disabled"))
	float WorldPartitionInitTime = 1.f;

	/**
	The image compression format for thumbnails.
	*/
	UPROPERTY(config, EditAnywhere, Category = "Compression", meta = (DisplayName = "Thumbnail Image Format"))
	EThumbnailImageFormat ThumbnailFormat = EThumbnailImageFormat::Png;

	/**
	A predefined file version that is written to all save files.
	*/
	UPROPERTY(config, EditAnywhere, Category = "Versioning", meta = (DisplayName = "Save Game Version"))
	uint32 SaveGameVersion = 1000;

	/**
	Required when migrating older save files without versioning to a new engine build.
	Select the Unreal Engine version that the old files were created with.
	*/
	UPROPERTY(config, EditAnywhere, Category = "Versioning", meta = (DisplayName = "Migrated Save Engine Version"))
	EOldPackageEngine MigratedSaveEngineVersion = EOldPackageEngine::EN_UE50;

	/**
	Enable this when migrating older files with Multi-Level Saving. Mandatory with UE 5.4+
	Will make sure that cached Actors are loaded with the proper version.
	*/
	UPROPERTY(config, EditAnywhere, Category = "Versioning", meta = (DisplayName = "Migrate Multi-Level Save Actors"))
	bool bMigratedSaveActorVersionCheck = false;

	/*
	When renaming/moving Blueprint classes that are runtime spawned by EMS, you need a redirector to the new class.

	The old class must be referenced as the generated class path name like this:
	/Game/EasyMultiSaveContent/Blueprints/LevelActors/EMS_ExampleProjectile.EMS_ExampleProjectile_C

	The new class can just be selected from the list or the content browser.
	*/
	UPROPERTY(config, EditAnywhere, Category = "Redirectors", meta = (DisplayName = "Runtime Actor Redirects"))
	TMap<FString, FSoftClassPath> RuntimeClasses;

public:

	static FORCEINLINE UEMSPluginSettings* Get()
	{
		UEMSPluginSettings* Settings = GetMutableDefault<UEMSPluginSettings>();
		check(Settings);

		return Settings;
	}
};
