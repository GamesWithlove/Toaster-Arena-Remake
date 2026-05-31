// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EMSPluginSettings.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEMSPluginSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSPluginSettings();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSPluginSettings_NoRegister();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EAutoSaveStreamMethod();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadMethod();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEMSPluginSettings *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEMSPluginSettings;
UClass* UEMSPluginSettings::GetPrivateStaticClass()
{
	using TClass = UEMSPluginSettings;
	if (!Z_Registration_Info_UClass_UEMSPluginSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EMSPluginSettings"),
			Z_Registration_Info_UClass_UEMSPluginSettings.InnerSingleton,
			StaticRegisterNativesUEMSPluginSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UEMSPluginSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UEMSPluginSettings_NoRegister()
{
	return UEMSPluginSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEMSPluginSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Common/Public/EMSPluginSettings.h" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSaveGameName_MetaData[] = {
		{ "Category", "General Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**The default save game slot name, that is used if no name is set with 'Set Current Save Slot Name'.*/" },
#endif
		{ "DisplayName", "Default Slot Name" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default save game slot name, that is used if no name is set with 'Set Current Save Slot Name'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotInfoSaveGameClass_MetaData[] = {
		{ "Category", "General Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**The Blueprint class that you want to use for the slot info, usually does not need a custom class.*/" },
#endif
		{ "DisplayName", "Slot Info Class" },
		{ "MetaClass", "/Script/EasyMultiSave.EMSInfoSaveGame" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Blueprint class that you want to use for the slot info, usually does not need a custom class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileSaveMethod_MetaData[] = {
		{ "Category", "General Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**The file system that is used depending on the platform.*/" },
#endif
		{ "DisplayName", "File System" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The file system that is used depending on the platform." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBackup_MetaData[] = {
		{ "Category", "General Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * When enabled, automatically creates a backup of the current Save Data before overwriting it.\n\x09 * The backup is saved with the same Slot/File Name, prefixed by '_bak0'.\n\x09 * To access the backup, use the 'Get Backup Name' node.\n\x09 * Only valid data suitable for loading will be backed up. \n\x09 */" },
#endif
		{ "DisplayName", "Auto Backup Previous Data" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, automatically creates a backup of the current Save Data before overwriting it.\nThe backup is saved with the same Slot/File Name, prefixed by '_bak0'.\nTo access the backup, use the 'Get Backup Name' node.\nOnly valid data suitable for loading will be backed up." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSaveStructs_MetaData[] = {
		{ "Category", "Actors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Struct and Map variables with 'Save Game' checked are saved automatically for all Actors. Otherwise only the desired variables inside a struct are saved.*/" },
#endif
		{ "DisplayName", "Auto Save Structs" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct and Map variables with 'Save Game' checked are saved automatically for all Actors. Otherwise only the desired variables inside a struct are saved." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroyActors_MetaData[] = {
		{ "Category", "Actors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Enable automatic saving and loading of destroyed Actors, re-destroying them upon load.\n\x09* Less flexible compared to manual handling, but offers greater convenience in World Partition levels.\n\x09* Will handle Actors that implement the Actor Save Interface.\n\x09*/" },
#endif
		{ "DisplayName", "Auto Destroy Actors" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable automatic saving and loading of destroyed Actors, re-destroying them upon load.\nLess flexible compared to manual handling, but offers greater convenience in World Partition levels.\nWill handle Actors that implement the Actor Save Interface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdvancedSpawnCheck_MetaData[] = {
		{ "Category", "Actors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**If enabled, the system runs a more expensive check for spawned Actors. This is useful if you spawn Actors at the beginning of a level and experience issues.*/" },
#endif
		{ "DisplayName", "Advanced Spawn Check" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, the system runs a more expensive check for spawned Actors. This is useful if you spawn Actors at the beginning of a level and experience issues." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMultiThreadSaving_MetaData[] = {
		{ "Category", "Save and Load" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**If enabled, saving player and level actors is outsourced to a background thread.*/" },
#endif
		{ "DisplayName", "Multi-Thread Saving" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, saving player and level actors is outsourced to a background thread." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadMethod_MetaData[] = {
		{ "Category", "Save and Load" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**The method that is used to load level-actors.*/" },
#endif
		{ "DisplayName", "Level Load Method" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The method that is used to load level-actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeferredLoadStackSize_MetaData[] = {
		{ "Category", "Save and Load" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Estimated Number of Actors to load in one batch when using Multi-Thread or Deferred Loading.*/" },
#endif
		{ "DisplayName", "Load Batch Size" },
		{ "EditCondition", "LoadMethod != ELoadMethod::LM_Default" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Estimated Number of Actors to load in one batch when using Multi-Thread or Deferred Loading." },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsyncWaitDelay_MetaData[] = {
		{ "Category", "Save and Load" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* How long the 'Wait For Save or Load Completed' and 'Load Game Actors' nodes are allowed to remain fixed in a state.\n\x09* The 'Save Game Actors' node will always complete in one or another way. \n\x09*/" },
#endif
		{ "DisplayName", "Async Wait Delay" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long the 'Wait For Save or Load Completed' and 'Load Game Actors' nodes are allowed to remain fixed in a state.\nThe 'Save Game Actors' node will always complete in one or another way." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreSaveOnGameThread_MetaData[] = {
		{ "Category", "Save and Load" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The Pre-Save events (for Actors and Components) are forced to be called on the Game Thread when using Multi-Thread saving.\n\x09* This should be enabled if you directly access Game Thread-only objects (Timers, Widgets, etc.) or rendering-related properties from the event.\n\x09* Enabling this adds some overhead to save time with no game performance impact.\n\x09*/" },
#endif
		{ "DisplayName", "Pre-Save On Game Thread" },
		{ "EditCondition", "bMultiThreadSaving == true" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Pre-Save events (for Actors and Components) are forced to be called on the Game Thread when using Multi-Thread saving.\nThis should be enabled if you directly access Game Thread-only objects (Timers, Widgets, etc.) or rendering-related properties from the event.\nEnabling this adds some overhead to save time with no game performance impact." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiLevelSaving_MetaData[] = {
		{ "Category", "Persistence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* How Level Actor Save Data is kept between levels.\n\x09* Prevents old save data from being overwritten. \n\x09* \n\x09* Game Mode is persistent and saved independent of the level. \n\x09* Player is persistent and transform is saved per level.\n\x09* \n\x09* The level name from the slot is always the last saved level.\n\x09* \n\x09* Multi-Level Saving modes are only partly compatible with each other:\n\x09* Disabled <AND> Streaming\n\x09* Basic    <AND> Full \n\x09*/" },
#endif
		{ "DisplayName", "Multi-Level Saving" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How Level Actor Save Data is kept between levels.\nPrevents old save data from being overwritten.\n\nGame Mode is persistent and saved independent of the level.\nPlayer is persistent and transform is saved per level.\n\nThe level name from the slot is always the last saved level.\n\nMulti-Level Saving modes are only partly compatible with each other:\nDisabled <AND> Streaming\nBasic    <AND> Full" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreamSaving_MetaData[] = {
		{ "Category", "Streaming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The method to use for automatic saving and loading of manually streamed levels.\n\x09* Multi-Level Saving must be set to Streaming or Full.\n\x09*/" },
#endif
		{ "DisplayName", "Streaming Level Saving" },
		{ "EditCondition", "MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The method to use for automatic saving and loading of manually streamed levels.\nMulti-Level Saving must be set to Streaming or Full." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingSaveThreshold_MetaData[] = {
		{ "Category", "Streaming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Minimum duration a streaming level must remain unloaded before the auto-save is triggered.\n\x09* This optimizes performance by batching save operations when multiple levels unload simultaneously.\n\x09* Avoid re-streaming these levels until this cooldown period has elapsed.\n\x09*/" },
#endif
		{ "DisplayName", "Streaming Save Threshold" },
		{ "EditCondition", "(MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full) && WorldPartitionInit != EWorldPartitionInit::Skip && WorldPartitionSaving != EWorldPartitionMethod::Disabled" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum duration a streaming level must remain unloaded before the auto-save is triggered.\nThis optimizes performance by batching save operations when multiple levels unload simultaneously.\nAvoid re-streaming these levels until this cooldown period has elapsed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicLevelStreaming_MetaData[] = {
		{ "Category", "Streaming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Enables support for Runtime Level Instances and multiple Streaming Levels of the same type.\n\x09* Also enables support for Actors inside Level Instances within Streaming Levels that are loaded and unloaded. \n\x09* Has no effect for World Partition levels, as those handle Level Instances automatically.\n\x09* \n\x09* Make sure to use 'Opitional Level Name Override' for dynamically spawned Level Instances.\n\x09* After spawning ensure a delay before invoking Load Game Actors.\n\x09* \n\x09* This setting is not backwards-compatible, as it generates different unique IDs for Actors.\n\x09*/" },
#endif
		{ "DisplayName", "Allow Dynamic Streaming Levels" },
		{ "EditCondition", "MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables support for Runtime Level Instances and multiple Streaming Levels of the same type.\nAlso enables support for Actors inside Level Instances within Streaming Levels that are loaded and unloaded.\nHas no effect for World Partition levels, as those handle Level Instances automatically.\n\nMake sure to use 'Opitional Level Name Override' for dynamically spawned Level Instances.\nAfter spawning ensure a delay before invoking Load Game Actors.\n\nThis setting is not backwards-compatible, as it generates different unique IDs for Actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionSaving_MetaData[] = {
		{ "Category", "World Partition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The method to use for automatic saving and loading of World Partition levels.\n\x09* Multi-Level Saving must be set to Streaming or Full.\n\x09*/" },
#endif
		{ "DisplayName", "World Partition Saving" },
		{ "EditCondition", "MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The method to use for automatic saving and loading of World Partition levels.\nMulti-Level Saving must be set to Streaming or Full." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionInit_MetaData[] = {
		{ "Category", "World Partition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**The mode for initially loading World Partition levels.*/" },
#endif
		{ "DisplayName", "World Partition Init Mode" },
		{ "EditCondition", "(MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full) && WorldPartitionSaving != EWorldPartitionMethod::Disabled" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The mode for initially loading World Partition levels." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionInitTime_MetaData[] = {
		{ "Category", "World Partition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Delay before the initial World Partition loading process can begin.\n\x09* During this time, the players position (transform) should be set, either manually or by loading Player Actors.\n\x09*/" },
#endif
		{ "DisplayName", "World Partition Init Delay" },
		{ "EditCondition", "(MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full) && WorldPartitionInit != EWorldPartitionInit::Skip && WorldPartitionSaving != EWorldPartitionMethod::Disabled" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delay before the initial World Partition loading process can begin.\nDuring this time, the players position (transform) should be set, either manually or by loading Player Actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionInitThreshold_MetaData[] = {
		{ "Category", "World Partition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**The minimum time that level streaming must remain in a finished state until the initial World Partition load will start.*/" },
#endif
		{ "DisplayName", "World Partition Init Threshold" },
		{ "EditCondition", "(MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full) && WorldPartitionInit != EWorldPartitionInit::Skip && WorldPartitionSaving != EWorldPartitionMethod::Disabled" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The minimum time that level streaming must remain in a finished state until the initial World Partition load will start." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailFormat_MetaData[] = {
		{ "Category", "Compression" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**The image compression format for thumbnails.*/" },
#endif
		{ "DisplayName", "Thumbnail Image Format" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The image compression format for thumbnails." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameVersion_MetaData[] = {
		{ "Category", "Versioning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**A predefined file version that is written to all save files.*/" },
#endif
		{ "DisplayName", "Save Game Version" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A predefined file version that is written to all save files." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MigratedSaveEngineVersion_MetaData[] = {
		{ "Category", "Versioning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Required when migrating very old LEGACY(<UE 5.4) save files to a new engine build.\n\x09* Newer versions of Unreal have much better backward compatibility.\n\x09* Select the minimum Engine version that the old files were created with.\n\x09*/" },
#endif
		{ "DisplayName", "Migrated Save Engine Version" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Required when migrating very old LEGACY(<UE 5.4) save files to a new engine build.\nNewer versions of Unreal have much better backward compatibility.\nSelect the minimum Engine version that the old files were created with." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeClasses_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Actor" },
		{ "Category", "Redirectors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Map old Blueprint class paths to new ones to handle renamed or moved runtime-spawned actors.\n\x09* For already existing save files!\n\x09*\n\x09* Key:   Old Blueprint class path (MUST use generated class format with _C suffix)\n\x09* Value: New Blueprint class path (can be selected from dropdown or content browser)\n\x09*\n\x09* To get the class path:\n\x09* 1. Right-click the Blueprint in Content Browser\n\x09* 2. Select \"Copy Object Path\"\n\x09* 3. Paste - it will look like: /Game/Path/MyActor.MyActor\n\x09* 4. Convert to generated class format: /Game/Path/MyActor.MyActor_C\n\x09*\n\x09* Example:\n\x09* Key:   /Game/OldFolder/Blueprints/EMS_OldProjectile.EMS_OldProjectile_C\n\x09* Value: Selected from Content Browser\n\x09*\n\x09* Result: Save data referencing the old class will spawn the new class instead.\n\x09* This ensures existing save data continues to work after Blueprint reorganization.\n\x09*/" },
#endif
		{ "DisplayName", "Runtime Actor Redirects" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map old Blueprint class paths to new ones to handle renamed or moved runtime-spawned actors.\nFor already existing save files!\n\nKey:   Old Blueprint class path (MUST use generated class format with _C suffix)\nValue: New Blueprint class path (can be selected from dropdown or content browser)\n\nTo get the class path:\n1. Right-click the Blueprint in Content Browser\n2. Select \"Copy Object Path\"\n3. Paste - it will look like: /Game/Path/MyActor.MyActor\n4. Convert to generated class format: /Game/Path/MyActor.MyActor_C\n\nExample:\nKey:   /Game/OldFolder/Blueprints/EMS_OldProjectile.EMS_OldProjectile_C\nValue: Selected from Content Browser\n\nResult: Save data referencing the old class will spawn the new class instead.\nThis ensures existing save data continues to work after Blueprint reorganization." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelRedirects_MetaData[] = {
		{ "Category", "Redirectors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Map level package paths to handle renamed or moved levels.\n\x09* For already existing save files!\n\x09*\n\x09* Key:   Original level path that should redirect to the value.\n\x09* Value: The canonical level path that will be redirected to.\n\x09*\n\x09* To get the level path:\n\x09* 1. Right-click the level in Content Browser\n\x09* 2. Select \"Copy Package Path\"\n\x09* 3. Paste the full path (e.g., /Game/Maps/MyLevel)\n\x09*\n\x09* Example:\n\x09* Key:   /Game/OldLocation/Maps/LegacyLevelName\n\x09* Value: /Game/NewLocation/Maps/CurrentLevelName \n\x09* \n\x09* If you rename a level multiple times, just keep the original Level as Key.\n\x09* \n\x09* DO NOT replace the old level asset with a new level of the same name. \n\x09*/" },
#endif
		{ "DisplayName", "Level Redirects" },
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map level package paths to handle renamed or moved levels.\nFor already existing save files!\n\nKey:   Original level path that should redirect to the value.\nValue: The canonical level path that will be redirected to.\n\nTo get the level path:\n1. Right-click the level in Content Browser\n2. Select \"Copy Package Path\"\n3. Paste the full path (e.g., /Game/Maps/MyLevel)\n\nExample:\nKey:   /Game/OldLocation/Maps/LegacyLevelName\nValue: /Game/NewLocation/Maps/CurrentLevelName\n\nIf you rename a level multiple times, just keep the original Level as Key.\n\nDO NOT replace the old level asset with a new level of the same name." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionInitPollingRate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The time between checking if World Partition can initially load. */" },
#endif
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time between checking if World Partition can initially load." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDataSize_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Log the total data size of any serialized Object when saving. */" },
#endif
		{ "ModuleRelativePath", "Common/Public/EMSPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Log the total data size of any serialized Object when saving." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UEMSPluginSettings constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSaveGameName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotInfoSaveGameClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FileSaveMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FileSaveMethod;
	static void NewProp_bAutoBackup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBackup;
	static void NewProp_bAutoSaveStructs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSaveStructs;
	static void NewProp_bAutoDestroyActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroyActors;
	static void NewProp_bAdvancedSpawnCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvancedSpawnCheck;
	static void NewProp_bMultiThreadSaving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreadSaving;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LoadMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadMethod;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeferredLoadStackSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AsyncWaitDelay;
	static void NewProp_bPreSaveOnGameThread_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreSaveOnGameThread;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MultiLevelSaving_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MultiLevelSaving;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LevelStreamSaving_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LevelStreamSaving;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StreamingSaveThreshold;
	static void NewProp_bDynamicLevelStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicLevelStreaming;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPartitionSaving_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldPartitionSaving;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPartitionInit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldPartitionInit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldPartitionInitTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldPartitionInitThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThumbnailFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThumbnailFormat;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SaveGameVersion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MigratedSaveEngineVersion_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MigratedSaveEngineVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeClasses_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RuntimeClasses_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RuntimeClasses;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelRedirects_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelRedirects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LevelRedirects;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldPartitionInitPollingRate;
	static void NewProp_bDebugDataSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDataSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEMSPluginSettings constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSPluginSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEMSPluginSettings_Statics

// ********** Begin Class UEMSPluginSettings Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DefaultSaveGameName = { "DefaultSaveGameName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, DefaultSaveGameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSaveGameName_MetaData), NewProp_DefaultSaveGameName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SlotInfoSaveGameClass = { "SlotInfoSaveGameClass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, SlotInfoSaveGameClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotInfoSaveGameClass_MetaData), NewProp_SlotInfoSaveGameClass_MetaData) }; // 3467803280
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_FileSaveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_FileSaveMethod = { "FileSaveMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, FileSaveMethod), Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileSaveMethod_MetaData), NewProp_FileSaveMethod_MetaData) }; // 920385345
void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoBackup_SetBit(void* Obj)
{
	((UEMSPluginSettings*)Obj)->bAutoBackup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoBackup = { "bAutoBackup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoBackup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoBackup_MetaData), NewProp_bAutoBackup_MetaData) };
void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoSaveStructs_SetBit(void* Obj)
{
	((UEMSPluginSettings*)Obj)->bAutoSaveStructs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoSaveStructs = { "bAutoSaveStructs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoSaveStructs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSaveStructs_MetaData), NewProp_bAutoSaveStructs_MetaData) };
void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoDestroyActors_SetBit(void* Obj)
{
	((UEMSPluginSettings*)Obj)->bAutoDestroyActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoDestroyActors = { "bAutoDestroyActors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoDestroyActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDestroyActors_MetaData), NewProp_bAutoDestroyActors_MetaData) };
void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAdvancedSpawnCheck_SetBit(void* Obj)
{
	((UEMSPluginSettings*)Obj)->bAdvancedSpawnCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAdvancedSpawnCheck = { "bAdvancedSpawnCheck", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAdvancedSpawnCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdvancedSpawnCheck_MetaData), NewProp_bAdvancedSpawnCheck_MetaData) };
void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving_SetBit(void* Obj)
{
	((UEMSPluginSettings*)Obj)->bMultiThreadSaving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving = { "bMultiThreadSaving", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMultiThreadSaving_MetaData), NewProp_bMultiThreadSaving_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod = { "LoadMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, LoadMethod), Z_Construct_UEnum_EasyMultiSave_ELoadMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadMethod_MetaData), NewProp_LoadMethod_MetaData) }; // 2881638976
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DeferredLoadStackSize = { "DeferredLoadStackSize", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, DeferredLoadStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeferredLoadStackSize_MetaData), NewProp_DeferredLoadStackSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_AsyncWaitDelay = { "AsyncWaitDelay", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, AsyncWaitDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsyncWaitDelay_MetaData), NewProp_AsyncWaitDelay_MetaData) };
void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPreSaveOnGameThread_SetBit(void* Obj)
{
	((UEMSPluginSettings*)Obj)->bPreSaveOnGameThread = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPreSaveOnGameThread = { "bPreSaveOnGameThread", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPreSaveOnGameThread_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreSaveOnGameThread_MetaData), NewProp_bPreSaveOnGameThread_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MultiLevelSaving_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MultiLevelSaving = { "MultiLevelSaving", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, MultiLevelSaving), Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiLevelSaving_MetaData), NewProp_MultiLevelSaving_MetaData) }; // 1716654252
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LevelStreamSaving_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LevelStreamSaving = { "LevelStreamSaving", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, LevelStreamSaving), Z_Construct_UEnum_EasyMultiSave_EAutoSaveStreamMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelStreamSaving_MetaData), NewProp_LevelStreamSaving_MetaData) }; // 3385659069
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_StreamingSaveThreshold = { "StreamingSaveThreshold", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, StreamingSaveThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingSaveThreshold_MetaData), NewProp_StreamingSaveThreshold_MetaData) };
void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bDynamicLevelStreaming_SetBit(void* Obj)
{
	((UEMSPluginSettings*)Obj)->bDynamicLevelStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bDynamicLevelStreaming = { "bDynamicLevelStreaming", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bDynamicLevelStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDynamicLevelStreaming_MetaData), NewProp_bDynamicLevelStreaming_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionSaving_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionSaving = { "WorldPartitionSaving", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, WorldPartitionSaving), Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPartitionSaving_MetaData), NewProp_WorldPartitionSaving_MetaData) }; // 4152695580
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInit = { "WorldPartitionInit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, WorldPartitionInit), Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPartitionInit_MetaData), NewProp_WorldPartitionInit_MetaData) }; // 2810195111
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInitTime = { "WorldPartitionInitTime", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, WorldPartitionInitTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPartitionInitTime_MetaData), NewProp_WorldPartitionInitTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInitThreshold = { "WorldPartitionInitThreshold", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, WorldPartitionInitThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPartitionInitThreshold_MetaData), NewProp_WorldPartitionInitThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_ThumbnailFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_ThumbnailFormat = { "ThumbnailFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, ThumbnailFormat), Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailFormat_MetaData), NewProp_ThumbnailFormat_MetaData) }; // 4107142756
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SaveGameVersion = { "SaveGameVersion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, SaveGameVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameVersion_MetaData), NewProp_SaveGameVersion_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MigratedSaveEngineVersion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MigratedSaveEngineVersion = { "MigratedSaveEngineVersion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, MigratedSaveEngineVersion), Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MigratedSaveEngineVersion_MetaData), NewProp_MigratedSaveEngineVersion_MetaData) }; // 773600468
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_RuntimeClasses_ValueProp = { "RuntimeClasses", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(0, nullptr) }; // 3467803280
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_RuntimeClasses_Key_KeyProp = { "RuntimeClasses_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_RuntimeClasses = { "RuntimeClasses", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, RuntimeClasses), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeClasses_MetaData), NewProp_RuntimeClasses_MetaData) }; // 3467803280
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LevelRedirects_ValueProp = { "LevelRedirects", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LevelRedirects_Key_KeyProp = { "LevelRedirects_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LevelRedirects = { "LevelRedirects", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, LevelRedirects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelRedirects_MetaData), NewProp_LevelRedirects_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInitPollingRate = { "WorldPartitionInitPollingRate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEMSPluginSettings, WorldPartitionInitPollingRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPartitionInitPollingRate_MetaData), NewProp_WorldPartitionInitPollingRate_MetaData) };
void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bDebugDataSize_SetBit(void* Obj)
{
	((UEMSPluginSettings*)Obj)->bDebugDataSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bDebugDataSize = { "bDebugDataSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bDebugDataSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugDataSize_MetaData), NewProp_bDebugDataSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSPluginSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DefaultSaveGameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SlotInfoSaveGameClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_FileSaveMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_FileSaveMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoBackup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoSaveStructs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoDestroyActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAdvancedSpawnCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DeferredLoadStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_AsyncWaitDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPreSaveOnGameThread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MultiLevelSaving_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MultiLevelSaving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LevelStreamSaving_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LevelStreamSaving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_StreamingSaveThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bDynamicLevelStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionSaving_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionSaving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInitThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_ThumbnailFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_ThumbnailFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SaveGameVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MigratedSaveEngineVersion_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MigratedSaveEngineVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_RuntimeClasses_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_RuntimeClasses_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_RuntimeClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LevelRedirects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LevelRedirects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LevelRedirects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInitPollingRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bDebugDataSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::PropPointers) < 2048);
// ********** End Class UEMSPluginSettings Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UEMSPluginSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSPluginSettings_Statics::ClassParams = {
	&UEMSPluginSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEMSPluginSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UEMSPluginSettings_Statics::Class_MetaDataParams)
};
void UEMSPluginSettings::StaticRegisterNativesUEMSPluginSettings()
{
}
UClass* Z_Construct_UClass_UEMSPluginSettings()
{
	if (!Z_Registration_Info_UClass_UEMSPluginSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSPluginSettings.OuterSingleton, Z_Construct_UClass_UEMSPluginSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEMSPluginSettings.OuterSingleton;
}
UEMSPluginSettings::UEMSPluginSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEMSPluginSettings);
UEMSPluginSettings::~UEMSPluginSettings() {}
// ********** End Class UEMSPluginSettings *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMult2811e0ac3e79V17_Source_EasyMultiSave_Common_Public_EMSPluginSettings_h__Script_EasyMultiSave_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEMSPluginSettings, UEMSPluginSettings::StaticClass, TEXT("UEMSPluginSettings"), &Z_Registration_Info_UClass_UEMSPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSPluginSettings), 495415848U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMult2811e0ac3e79V17_Source_EasyMultiSave_Common_Public_EMSPluginSettings_h__Script_EasyMultiSave_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMult2811e0ac3e79V17_Source_EasyMultiSave_Common_Public_EMSPluginSettings_h__Script_EasyMultiSave_3108306660{
	TEXT("/Script/EasyMultiSave"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMult2811e0ac3e79V17_Source_EasyMultiSave_Common_Public_EMSPluginSettings_h__Script_EasyMultiSave_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMult2811e0ac3e79V17_Source_EasyMultiSave_Common_Public_EMSPluginSettings_h__Script_EasyMultiSave_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
