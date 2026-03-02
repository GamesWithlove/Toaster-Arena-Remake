// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSPluginSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSPluginSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSPluginSettings();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSPluginSettings_NoRegister();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadMethod();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References
	void UEMSPluginSettings::StaticRegisterNativesUEMSPluginSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEMSPluginSettings);
	UClass* Z_Construct_UClass_UEMSPluginSettings_NoRegister()
	{
		return UEMSPluginSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEMSPluginSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSaveGameName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSaveGameName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotInfoSaveGameClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotInfoSaveGameClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FileSaveMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileSaveMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FileSaveMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdvancedSpawnCheck_MetaData[];
#endif
		static void NewProp_bAdvancedSpawnCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvancedSpawnCheck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSaveStructs_MetaData[];
#endif
		static void NewProp_bAutoSaveStructs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSaveStructs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroyActors_MetaData[];
#endif
		static void NewProp_bAutoDestroyActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroyActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMultiThreadSaving_MetaData[];
#endif
		static void NewProp_bMultiThreadSaving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreadSaving;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LoadMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeferredLoadStackSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DeferredLoadStackSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsyncWaitDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AsyncWaitDelay;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MultiLevelSaving_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiLevelSaving_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MultiLevelSaving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPersistentPlayer_MetaData[];
#endif
		static void NewProp_bPersistentPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPersistentPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPersistentGameMode_MetaData[];
#endif
		static void NewProp_bPersistentGameMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPersistentGameMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPartitionSaving_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionSaving_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldPartitionSaving;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPartitionInit_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionInit_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldPartitionInit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionInitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldPartitionInitTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ThumbnailFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ThumbnailFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameVersion_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SaveGameVersion;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MigratedSaveEngineVersion_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MigratedSaveEngineVersion_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MigratedSaveEngineVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMigratedSaveActorVersionCheck_MetaData[];
#endif
		static void NewProp_bMigratedSaveActorVersionCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMigratedSaveActorVersionCheck;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeClasses_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RuntimeClasses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeClasses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RuntimeClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEMSPluginSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EMSPluginSettings.h" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DefaultSaveGameName_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "/**The default save game slot name, that is used if no name is set with 'Set Current Save Slot Name'.*/" },
		{ "DisplayName", "Default Slot Name" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "The default save game slot name, that is used if no name is set with 'Set Current Save Slot Name'." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DefaultSaveGameName = { "DefaultSaveGameName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSPluginSettings, DefaultSaveGameName), METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DefaultSaveGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DefaultSaveGameName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SlotInfoSaveGameClass_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "/**The Blueprint class that you want to use for the slot info, usually does not need a custom class.*/" },
		{ "DisplayName", "Slot Info Class" },
		{ "MetaClass", "/Script/EasyMultiSave.EMSInfoSaveGame" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "The Blueprint class that you want to use for the slot info, usually does not need a custom class." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SlotInfoSaveGameClass = { "SlotInfoSaveGameClass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSPluginSettings, SlotInfoSaveGameClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SlotInfoSaveGameClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SlotInfoSaveGameClass_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_FileSaveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_FileSaveMethod_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "/**The file system that is used depending on the platform.*/" },
		{ "DisplayName", "File System" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "The file system that is used depending on the platform." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_FileSaveMethod = { "FileSaveMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSPluginSettings, FileSaveMethod), Z_Construct_UEnum_EasyMultiSave_EFileSaveMethod, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_FileSaveMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_FileSaveMethod_MetaData)) }; // 3517802261
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAdvancedSpawnCheck_MetaData[] = {
		{ "Category", "Actors" },
		{ "Comment", "/**If enabled, the system runs a more expensive check for spawned Actors. This is useful if you spawn Actors at the beginning of a level and experience issues.*/" },
		{ "DisplayName", "Advanced Spawn Check" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "If enabled, the system runs a more expensive check for spawned Actors. This is useful if you spawn Actors at the beginning of a level and experience issues." },
	};
#endif
	void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAdvancedSpawnCheck_SetBit(void* Obj)
	{
		((UEMSPluginSettings*)Obj)->bAdvancedSpawnCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAdvancedSpawnCheck = { "bAdvancedSpawnCheck", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAdvancedSpawnCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAdvancedSpawnCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAdvancedSpawnCheck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoSaveStructs_MetaData[] = {
		{ "Category", "Actors" },
		{ "Comment", "/**\n\x09Struct and Map variables with 'Save Game' checked are saved automatically for all Actors. Otherwise only the desired variables inside a struct are saved.\n\x09*/" },
		{ "DisplayName", "Auto Save Structs" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "Struct and Map variables with 'Save Game' checked are saved automatically for all Actors. Otherwise only the desired variables inside a struct are saved." },
	};
#endif
	void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoSaveStructs_SetBit(void* Obj)
	{
		((UEMSPluginSettings*)Obj)->bAutoSaveStructs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoSaveStructs = { "bAutoSaveStructs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoSaveStructs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoSaveStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoSaveStructs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoDestroyActors_MetaData[] = {
		{ "Category", "Actors" },
		{ "Comment", "/**\n\x09* UE 5.3 and higher only. Enable automatic saving and loading of destroyed Actors, re-destroying them upon load.\n\x09* Less flexible compared to manual handling, but offers greater convenience in World Partition levels.\n\x09* Will handle Actors that implement the Actor Save Interface.\n\x09*/" },
		{ "DisplayName", "Auto Destroy Actors" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "UE 5.3 and higher only. Enable automatic saving and loading of destroyed Actors, re-destroying them upon load.\nLess flexible compared to manual handling, but offers greater convenience in World Partition levels.\nWill handle Actors that implement the Actor Save Interface." },
	};
#endif
	void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoDestroyActors_SetBit(void* Obj)
	{
		((UEMSPluginSettings*)Obj)->bAutoDestroyActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoDestroyActors = { "bAutoDestroyActors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoDestroyActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoDestroyActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoDestroyActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving_MetaData[] = {
		{ "Category", "Save and Load" },
		{ "Comment", "/**If enabled, saving player and level actors is outsourced to a background thread.*/" },
		{ "DisplayName", "Multi-Thread Saving" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "If enabled, saving player and level actors is outsourced to a background thread." },
	};
#endif
	void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving_SetBit(void* Obj)
	{
		((UEMSPluginSettings*)Obj)->bMultiThreadSaving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving = { "bMultiThreadSaving", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod_MetaData[] = {
		{ "Category", "Save and Load" },
		{ "Comment", "/**The method that is used to load level-actors.*/" },
		{ "DisplayName", "Level Load Method" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "The method that is used to load level-actors." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod = { "LoadMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSPluginSettings, LoadMethod), Z_Construct_UEnum_EasyMultiSave_ELoadMethod, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod_MetaData)) }; // 3320513782
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DeferredLoadStackSize_MetaData[] = {
		{ "Category", "Save and Load" },
		{ "Comment", "/**Estimated Number of Actors to load in one batch.*/" },
		{ "DisplayName", "Deferred Load Size" },
		{ "EditCondition", "LoadMethod == ELoadMethod::LM_Deferred" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "Estimated Number of Actors to load in one batch." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DeferredLoadStackSize = { "DeferredLoadStackSize", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSPluginSettings, DeferredLoadStackSize), METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DeferredLoadStackSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DeferredLoadStackSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_AsyncWaitDelay_MetaData[] = {
		{ "Category", "Save and Load" },
		{ "Comment", "/**How long the Async load/wait nodes are allowed to remain fixed in a state.*/" },
		{ "DisplayName", "Async Wait Delay" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "How long the Async load/wait nodes are allowed to remain fixed in a state." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_AsyncWaitDelay = { "AsyncWaitDelay", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSPluginSettings, AsyncWaitDelay), METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_AsyncWaitDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_AsyncWaitDelay_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MultiLevelSaving_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MultiLevelSaving_MetaData[] = {
		{ "Category", "Persistence" },
		{ "Comment", "/**\n\x09* How Level Actor Save Data is kept between levels.\n\x09* Prevents old save data from being overwritten. \n\x09* \n\x09* Game Mode is persistent and not saved per level. \n\x09* Player is persistent and transform is saved per level.\n\x09* \n\x09* The level name from the slot is always the last saved level.\n\x09*/" },
		{ "DisplayName", "Multi-Level Saving" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "How Level Actor Save Data is kept between levels.\nPrevents old save data from being overwritten.\n\nGame Mode is persistent and not saved per level.\nPlayer is persistent and transform is saved per level.\n\nThe level name from the slot is always the last saved level." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MultiLevelSaving = { "MultiLevelSaving", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSPluginSettings, MultiLevelSaving), Z_Construct_UEnum_EasyMultiSave_EMultiLevelSaveMethod, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MultiLevelSaving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MultiLevelSaving_MetaData)) }; // 4088156773
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentPlayer_MetaData[] = {
		{ "Category", "Persistence" },
		{ "Comment", "/**The controller, pawn and player state can be loaded independent of the level without transforms.*/" },
		{ "DisplayName", "Persistent Player" },
		{ "EditCondition", "MultiLevelSaving == EMultiLevelSaveMethod::ML_Disabled" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "The controller, pawn and player state can be loaded independent of the level without transforms." },
	};
#endif
	void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentPlayer_SetBit(void* Obj)
	{
		((UEMSPluginSettings*)Obj)->bPersistentPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentPlayer = { "bPersistentPlayer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentGameMode_MetaData[] = {
		{ "Category", "Persistence" },
		{ "Comment", "/**The game mode and game state can be loaded independent of the level.*/" },
		{ "DisplayName", "Persistent Game Mode" },
		{ "EditCondition", "MultiLevelSaving == EMultiLevelSaveMethod::ML_Disabled" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "The game mode and game state can be loaded independent of the level." },
	};
#endif
	void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentGameMode_SetBit(void* Obj)
	{
		((UEMSPluginSettings*)Obj)->bPersistentGameMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentGameMode = { "bPersistentGameMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentGameMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentGameMode_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionSaving_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionSaving_MetaData[] = {
		{ "Category", "World Partition" },
		{ "Comment", "/**\n\x09The method to use for automatic saving and loading of World Partition levels.\n\x09Multi-Level Saving must be set to Streaming or Full.\n\x09*/" },
		{ "DisplayName", "World Partition Saving" },
		{ "EditCondition", "MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "The method to use for automatic saving and loading of World Partition levels.\nMulti-Level Saving must be set to Streaming or Full." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionSaving = { "WorldPartitionSaving", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSPluginSettings, WorldPartitionSaving), Z_Construct_UEnum_EasyMultiSave_EWorldPartitionMethod, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionSaving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionSaving_MetaData)) }; // 997150232
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInit_MetaData[] = {
		{ "Category", "World Partition" },
		{ "Comment", "/**\n\x09The mode for initially loading World Partition levels.\n\x09*/" },
		{ "DisplayName", "World Partition Init Mode" },
		{ "EditCondition", "(MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full) && WorldPartitionSaving != EWorldPartitionMethod::Disabled" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "The mode for initially loading World Partition levels." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInit = { "WorldPartitionInit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSPluginSettings, WorldPartitionInit), Z_Construct_UEnum_EasyMultiSave_EWorldPartitionInit, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInit_MetaData)) }; // 3553696299
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInitTime_MetaData[] = {
		{ "Category", "World Partition" },
		{ "Comment", "/**\n\x09How long to wait until initial World Partition loading starts. Avoids unnecessary overhead on begin.\n\x09""During this time, the Player should set it's initial transform either manually or by loading Player Actors. \n\x09*/" },
		{ "DisplayName", "World Partition Init Time" },
		{ "EditCondition", "(MultiLevelSaving == EMultiLevelSaveMethod::ML_Stream || MultiLevelSaving == EMultiLevelSaveMethod::ML_Full) && WorldPartitionInit != EWorldPartitionInit::Skip && WorldPartitionSaving != EWorldPartitionMethod::Disabled" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "How long to wait until initial World Partition loading starts. Avoids unnecessary overhead on begin.\nDuring this time, the Player should set it's initial transform either manually or by loading Player Actors." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInitTime = { "WorldPartitionInitTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSPluginSettings, WorldPartitionInitTime), METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInitTime_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_ThumbnailFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_ThumbnailFormat_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/**\n\x09The image compression format for thumbnails.\n\x09*/" },
		{ "DisplayName", "Thumbnail Image Format" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "The image compression format for thumbnails." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_ThumbnailFormat = { "ThumbnailFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSPluginSettings, ThumbnailFormat), Z_Construct_UEnum_EasyMultiSave_EThumbnailImageFormat, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_ThumbnailFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_ThumbnailFormat_MetaData)) }; // 1811406035
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SaveGameVersion_MetaData[] = {
		{ "Category", "Versioning" },
		{ "Comment", "/**\n\x09""A predefined file version that is written to all save files.\n\x09*/" },
		{ "DisplayName", "Save Game Version" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "A predefined file version that is written to all save files." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SaveGameVersion = { "SaveGameVersion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSPluginSettings, SaveGameVersion), METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SaveGameVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SaveGameVersion_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MigratedSaveEngineVersion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MigratedSaveEngineVersion_MetaData[] = {
		{ "Category", "Versioning" },
		{ "Comment", "/**\n\x09Required when migrating older save files without versioning to a new engine build.\n\x09Select the Unreal Engine version that the old files were created with.\n\x09*/" },
		{ "DisplayName", "Migrated Save Engine Version" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "Required when migrating older save files without versioning to a new engine build.\nSelect the Unreal Engine version that the old files were created with." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MigratedSaveEngineVersion = { "MigratedSaveEngineVersion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSPluginSettings, MigratedSaveEngineVersion), Z_Construct_UEnum_EasyMultiSave_EOldPackageEngine, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MigratedSaveEngineVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MigratedSaveEngineVersion_MetaData)) }; // 2475030580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMigratedSaveActorVersionCheck_MetaData[] = {
		{ "Category", "Versioning" },
		{ "Comment", "/**\n\x09""Enable this when migrating older files with Multi-Level Saving. Mandatory with UE 5.4+\n\x09Will make sure that cached Actors are loaded with the proper version.\n\x09*/" },
		{ "DisplayName", "Migrate Multi-Level Save Actors" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "Enable this when migrating older files with Multi-Level Saving. Mandatory with UE 5.4+\nWill make sure that cached Actors are loaded with the proper version." },
	};
#endif
	void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMigratedSaveActorVersionCheck_SetBit(void* Obj)
	{
		((UEMSPluginSettings*)Obj)->bMigratedSaveActorVersionCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMigratedSaveActorVersionCheck = { "bMigratedSaveActorVersionCheck", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMigratedSaveActorVersionCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMigratedSaveActorVersionCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMigratedSaveActorVersionCheck_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_RuntimeClasses_ValueProp = { "RuntimeClasses", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_RuntimeClasses_Key_KeyProp = { "RuntimeClasses_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_RuntimeClasses_MetaData[] = {
		{ "Category", "Redirectors" },
		{ "Comment", "/*\n\x09When renaming/moving Blueprint classes that are runtime spawned by EMS, you need a redirector to the new class.\n\n\x09The old class must be referenced as the generated class path name like this:\n\x09/Game/EasyMultiSaveContent/Blueprints/LevelActors/EMS_ExampleProjectile.EMS_ExampleProjectile_C\n\n\x09The new class can just be selected from the list or the content browser.\n\x09*/" },
		{ "DisplayName", "Runtime Actor Redirects" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "When renaming/moving Blueprint classes that are runtime spawned by EMS, you need a redirector to the new class.\n\nThe old class must be referenced as the generated class path name like this:\n/Game/EasyMultiSaveContent/Blueprints/LevelActors/EMS_ExampleProjectile.EMS_ExampleProjectile_C\n\nThe new class can just be selected from the list or the content browser." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_RuntimeClasses = { "RuntimeClasses", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSPluginSettings, RuntimeClasses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_RuntimeClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_RuntimeClasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSPluginSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DefaultSaveGameName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SlotInfoSaveGameClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_FileSaveMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_FileSaveMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAdvancedSpawnCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoSaveStructs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bAutoDestroyActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DeferredLoadStackSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_AsyncWaitDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MultiLevelSaving_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MultiLevelSaving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionSaving_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionSaving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_WorldPartitionInitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_ThumbnailFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_ThumbnailFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SaveGameVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MigratedSaveEngineVersion_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_MigratedSaveEngineVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMigratedSaveActorVersionCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_RuntimeClasses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_RuntimeClasses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_RuntimeClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEMSPluginSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSPluginSettings>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEMSPluginSettings()
	{
		if (!Z_Registration_Info_UClass_UEMSPluginSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSPluginSettings.OuterSingleton, Z_Construct_UClass_UEMSPluginSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEMSPluginSettings.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UClass* StaticClass<UEMSPluginSettings>()
	{
		return UEMSPluginSettings::StaticClass();
	}
	UEMSPluginSettings::UEMSPluginSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSPluginSettings);
	UEMSPluginSettings::~UEMSPluginSettings() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSPluginSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSPluginSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEMSPluginSettings, UEMSPluginSettings::StaticClass, TEXT("UEMSPluginSettings"), &Z_Registration_Info_UClass_UEMSPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSPluginSettings), 3433868706U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSPluginSettings_h_1709878982(TEXT("/Script/EasyMultiSave"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSPluginSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSPluginSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
