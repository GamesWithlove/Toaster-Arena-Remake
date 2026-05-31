// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EMSData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEMSData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FActorByteKey();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FActorInitContext();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSaveData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSaveData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FControllerSaveData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FGameObjectSaveData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelArchive();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelScriptSaveData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelStackArchive();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FMultiLevelStreamingData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FPawnSaveData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerArchive();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerPositionArchive();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStackArchive();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FRawObjectSaveData();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FSaveSlotInfo();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSaveSlotInfo *****************************************************
struct Z_Construct_UScriptStruct_FSaveSlotInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSaveSlotInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSaveSlotInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nSave Slots\n**/" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "Save Slots" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "Comment", "//The name of the save slot, used to identify the save file.\n" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "The name of the save slot, used to identify the save file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "Comment", "//The timestamp of when the save slot was last updated.\n" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "The timestamp of when the save slot was last updated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "Comment", "//The name of the current level associated with this save slot.\n" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "The name of the current level associated with this save slot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "Comment", "//List of persistent level names in this save slot. Only valid with Multi-Level saving.\n" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "List of persistent level names in this save slot. Only valid with Multi-Level saving." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomLevel_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "Comment", "//Optional custom level name that you can set individually, empty by default. \n" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "Optional custom level name that you can set individually, empty by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[] = {
		{ "Category", "SaveSlotInfo" },
		{ "Comment", "//List of player names associated with this save slot.\n" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "List of player names associated with this save slot." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSaveSlotInfo constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStamp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Level;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Levels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Levels;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomLevel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Players_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Players;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSaveSlotInfo constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveSlotInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSaveSlotInfo_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSaveSlotInfo;
class UScriptStruct* FSaveSlotInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSaveSlotInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSaveSlotInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveSlotInfo, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("SaveSlotInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FSaveSlotInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FSaveSlotInfo Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveSlotInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveSlotInfo, TimeStamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStamp_MetaData), NewProp_TimeStamp_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveSlotInfo, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Levels_Inner = { "Levels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Levels = { "Levels", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveSlotInfo, Levels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Levels_MetaData), NewProp_Levels_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_CustomLevel = { "CustomLevel", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveSlotInfo, CustomLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomLevel_MetaData), NewProp_CustomLevel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSaveSlotInfo, Players), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Players_MetaData), NewProp_Players_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_TimeStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Levels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Levels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_CustomLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewProp_Players,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSaveSlotInfo Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"SaveSlotInfo",
	Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::PropPointers),
	sizeof(FSaveSlotInfo),
	alignof(FSaveSlotInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSaveSlotInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FSaveSlotInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSaveSlotInfo.InnerSingleton, Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSaveSlotInfo.InnerSingleton);
}
// ********** End ScriptStruct FSaveSlotInfo *******************************************************

// ********** Begin ScriptStruct FComponentSaveData ************************************************
struct Z_Construct_UScriptStruct_FComponentSaveData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FComponentSaveData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FComponentSaveData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\nGeneric Save Archives\n**/" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "Generic Save Archives" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FComponentSaveData constinit property declarations ****************
// ********** End ScriptStruct FComponentSaveData constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FComponentSaveData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FComponentSaveData;
class UScriptStruct* FComponentSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FComponentSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FComponentSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ComponentSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FComponentSaveData.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"ComponentSaveData",
	nullptr,
	0,
	sizeof(FComponentSaveData),
	alignof(FComponentSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComponentSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComponentSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FComponentSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FComponentSaveData.InnerSingleton, Z_Construct_UScriptStruct_FComponentSaveData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FComponentSaveData.InnerSingleton);
}
// ********** End ScriptStruct FComponentSaveData **************************************************

// ********** Begin ScriptStruct FGameObjectSaveData ***********************************************
struct Z_Construct_UScriptStruct_FGameObjectSaveData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FGameObjectSaveData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGameObjectSaveData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGameObjectSaveData constinit property declarations ***************
// ********** End ScriptStruct FGameObjectSaveData constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameObjectSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FGameObjectSaveData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGameObjectSaveData;
class UScriptStruct* FGameObjectSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGameObjectSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGameObjectSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameObjectSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("GameObjectSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FGameObjectSaveData.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"GameObjectSaveData",
	nullptr,
	0,
	sizeof(FGameObjectSaveData),
	alignof(FGameObjectSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameObjectSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FGameObjectSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGameObjectSaveData.InnerSingleton, Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGameObjectSaveData.InnerSingleton);
}
// ********** End ScriptStruct FGameObjectSaveData *************************************************

// ********** Begin ScriptStruct FActorSaveData ****************************************************
struct Z_Construct_UScriptStruct_FActorSaveData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FActorSaveData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FActorSaveData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FActorSaveData constinit property declarations ********************
// ********** End ScriptStruct FActorSaveData constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FActorSaveData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActorSaveData;
class UScriptStruct* FActorSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActorSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActorSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ActorSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FActorSaveData.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"ActorSaveData",
	nullptr,
	0,
	sizeof(FActorSaveData),
	alignof(FActorSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FActorSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActorSaveData.InnerSingleton, Z_Construct_UScriptStruct_FActorSaveData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FActorSaveData.InnerSingleton);
}
// ********** End ScriptStruct FActorSaveData ******************************************************

// ********** Begin ScriptStruct FLevelScriptSaveData **********************************************
struct Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLevelScriptSaveData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLevelScriptSaveData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\nLevel Save Archives\n**/" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "Level Save Archives" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLevelScriptSaveData constinit property declarations **************
// ********** End ScriptStruct FLevelScriptSaveData constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelScriptSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLevelScriptSaveData;
class UScriptStruct* FLevelScriptSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLevelScriptSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLevelScriptSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelScriptSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("LevelScriptSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FLevelScriptSaveData.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"LevelScriptSaveData",
	nullptr,
	0,
	sizeof(FLevelScriptSaveData),
	alignof(FLevelScriptSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelScriptSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FLevelScriptSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLevelScriptSaveData.InnerSingleton, Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLevelScriptSaveData.InnerSingleton);
}
// ********** End ScriptStruct FLevelScriptSaveData ************************************************

// ********** Begin ScriptStruct FLevelArchive *****************************************************
struct Z_Construct_UScriptStruct_FLevelArchive_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLevelArchive); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLevelArchive); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLevelArchive constinit property declarations *********************
// ********** End ScriptStruct FLevelArchive constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelArchive>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLevelArchive_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLevelArchive;
class UScriptStruct* FLevelArchive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLevelArchive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLevelArchive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelArchive, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("LevelArchive"));
	}
	return Z_Registration_Info_UScriptStruct_FLevelArchive.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelArchive_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"LevelArchive",
	nullptr,
	0,
	sizeof(FLevelArchive),
	alignof(FLevelArchive),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelArchive_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelArchive_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelArchive()
{
	if (!Z_Registration_Info_UScriptStruct_FLevelArchive.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLevelArchive.InnerSingleton, Z_Construct_UScriptStruct_FLevelArchive_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLevelArchive.InnerSingleton);
}
// ********** End ScriptStruct FLevelArchive *******************************************************

// ********** Begin ScriptStruct FActorByteKey *****************************************************
struct Z_Construct_UScriptStruct_FActorByteKey_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FActorByteKey); }
	static inline consteval int16 GetStructAlignment() { return alignof(FActorByteKey); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\nActor Byte Key\nUsed to find Actors by ID\n**/" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "Actor Byte Key\nUsed to find Actors by ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FActorByteKey constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FActorByteKey constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorByteKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FActorByteKey_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActorByteKey;
class UScriptStruct* FActorByteKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActorByteKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActorByteKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorByteKey, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ActorByteKey"));
	}
	return Z_Registration_Info_UScriptStruct_FActorByteKey.OuterSingleton;
	}

// ********** Begin ScriptStruct FActorByteKey Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActorByteKey_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorByteKey_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorByteKey, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bytes_MetaData), NewProp_Bytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorByteKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorByteKey_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorByteKey_Statics::NewProp_Bytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorByteKey_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FActorByteKey Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorByteKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"ActorByteKey",
	Z_Construct_UScriptStruct_FActorByteKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorByteKey_Statics::PropPointers),
	sizeof(FActorByteKey),
	alignof(FActorByteKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorByteKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorByteKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorByteKey()
{
	if (!Z_Registration_Info_UScriptStruct_FActorByteKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActorByteKey.InnerSingleton, Z_Construct_UScriptStruct_FActorByteKey_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FActorByteKey.InnerSingleton);
}
// ********** End ScriptStruct FActorByteKey *******************************************************

// ********** Begin ScriptStruct FLevelStackArchive ************************************************
struct Z_Construct_UScriptStruct_FLevelStackArchive_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLevelStackArchive); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLevelStackArchive); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\nMulti-Level Archives\n**/" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "Multi-Level Archives" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLevelStackArchive constinit property declarations ****************
// ********** End ScriptStruct FLevelStackArchive constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelStackArchive>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLevelStackArchive_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLevelStackArchive;
class UScriptStruct* FLevelStackArchive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLevelStackArchive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLevelStackArchive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelStackArchive, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("LevelStackArchive"));
	}
	return Z_Registration_Info_UScriptStruct_FLevelStackArchive.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelStackArchive_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"LevelStackArchive",
	nullptr,
	0,
	sizeof(FLevelStackArchive),
	alignof(FLevelStackArchive),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelStackArchive_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelStackArchive_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelStackArchive()
{
	if (!Z_Registration_Info_UScriptStruct_FLevelStackArchive.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLevelStackArchive.InnerSingleton, Z_Construct_UScriptStruct_FLevelStackArchive_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLevelStackArchive.InnerSingleton);
}
// ********** End ScriptStruct FLevelStackArchive **************************************************

// ********** Begin ScriptStruct FMultiLevelStreamingData ******************************************
struct Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMultiLevelStreamingData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMultiLevelStreamingData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMultiLevelStreamingData constinit property declarations **********
// ********** End ScriptStruct FMultiLevelStreamingData constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiLevelStreamingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMultiLevelStreamingData;
class UScriptStruct* FMultiLevelStreamingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMultiLevelStreamingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMultiLevelStreamingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiLevelStreamingData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("MultiLevelStreamingData"));
	}
	return Z_Registration_Info_UScriptStruct_FMultiLevelStreamingData.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"MultiLevelStreamingData",
	nullptr,
	0,
	sizeof(FMultiLevelStreamingData),
	alignof(FMultiLevelStreamingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMultiLevelStreamingData()
{
	if (!Z_Registration_Info_UScriptStruct_FMultiLevelStreamingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMultiLevelStreamingData.InnerSingleton, Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMultiLevelStreamingData.InnerSingleton);
}
// ********** End ScriptStruct FMultiLevelStreamingData ********************************************

// ********** Begin ScriptStruct FPawnSaveData *****************************************************
struct Z_Construct_UScriptStruct_FPawnSaveData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPawnSaveData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPawnSaveData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\nPlayer Save Archives\n**/" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
		{ "ToolTip", "Player Save Archives" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPawnSaveData constinit property declarations *********************
// ********** End ScriptStruct FPawnSaveData constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPawnSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPawnSaveData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPawnSaveData;
class UScriptStruct* FPawnSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPawnSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPawnSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPawnSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("PawnSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FPawnSaveData.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPawnSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"PawnSaveData",
	nullptr,
	0,
	sizeof(FPawnSaveData),
	alignof(FPawnSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPawnSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPawnSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FPawnSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPawnSaveData.InnerSingleton, Z_Construct_UScriptStruct_FPawnSaveData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPawnSaveData.InnerSingleton);
}
// ********** End ScriptStruct FPawnSaveData *******************************************************

// ********** Begin ScriptStruct FControllerSaveData ***********************************************
struct Z_Construct_UScriptStruct_FControllerSaveData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FControllerSaveData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FControllerSaveData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FControllerSaveData constinit property declarations ***************
// ********** End ScriptStruct FControllerSaveData constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControllerSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FControllerSaveData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FControllerSaveData;
class UScriptStruct* FControllerSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FControllerSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FControllerSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControllerSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ControllerSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FControllerSaveData.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControllerSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"ControllerSaveData",
	nullptr,
	0,
	sizeof(FControllerSaveData),
	alignof(FControllerSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControllerSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControllerSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FControllerSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FControllerSaveData.InnerSingleton, Z_Construct_UScriptStruct_FControllerSaveData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FControllerSaveData.InnerSingleton);
}
// ********** End ScriptStruct FControllerSaveData *************************************************

// ********** Begin ScriptStruct FPlayerArchive ****************************************************
struct Z_Construct_UScriptStruct_FPlayerArchive_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPlayerArchive); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPlayerArchive); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPlayerArchive constinit property declarations ********************
// ********** End ScriptStruct FPlayerArchive constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerArchive>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPlayerArchive_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPlayerArchive;
class UScriptStruct* FPlayerArchive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerArchive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPlayerArchive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerArchive, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("PlayerArchive"));
	}
	return Z_Registration_Info_UScriptStruct_FPlayerArchive.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerArchive_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"PlayerArchive",
	nullptr,
	0,
	sizeof(FPlayerArchive),
	alignof(FPlayerArchive),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerArchive_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerArchive_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerArchive()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerArchive.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPlayerArchive.InnerSingleton, Z_Construct_UScriptStruct_FPlayerArchive_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPlayerArchive.InnerSingleton);
}
// ********** End ScriptStruct FPlayerArchive ******************************************************

// ********** Begin ScriptStruct FPlayerPositionArchive ********************************************
struct Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPlayerPositionArchive); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPlayerPositionArchive); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPlayerPositionArchive constinit property declarations ************
// ********** End ScriptStruct FPlayerPositionArchive constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerPositionArchive>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPlayerPositionArchive;
class UScriptStruct* FPlayerPositionArchive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerPositionArchive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPlayerPositionArchive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerPositionArchive, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("PlayerPositionArchive"));
	}
	return Z_Registration_Info_UScriptStruct_FPlayerPositionArchive.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"PlayerPositionArchive",
	nullptr,
	0,
	sizeof(FPlayerPositionArchive),
	alignof(FPlayerPositionArchive),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerPositionArchive()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerPositionArchive.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPlayerPositionArchive.InnerSingleton, Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPlayerPositionArchive.InnerSingleton);
}
// ********** End ScriptStruct FPlayerPositionArchive **********************************************

// ********** Begin ScriptStruct FPlayerStackArchive ***********************************************
struct Z_Construct_UScriptStruct_FPlayerStackArchive_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPlayerStackArchive); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPlayerStackArchive); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPlayerStackArchive constinit property declarations ***************
// ********** End ScriptStruct FPlayerStackArchive constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStackArchive>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPlayerStackArchive_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPlayerStackArchive;
class UScriptStruct* FPlayerStackArchive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerStackArchive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPlayerStackArchive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStackArchive, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("PlayerStackArchive"));
	}
	return Z_Registration_Info_UScriptStruct_FPlayerStackArchive.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStackArchive_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"PlayerStackArchive",
	nullptr,
	0,
	sizeof(FPlayerStackArchive),
	alignof(FPlayerStackArchive),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStackArchive_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerStackArchive_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerStackArchive()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerStackArchive.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPlayerStackArchive.InnerSingleton, Z_Construct_UScriptStruct_FPlayerStackArchive_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPlayerStackArchive.InnerSingleton);
}
// ********** End ScriptStruct FPlayerStackArchive *************************************************

// ********** Begin ScriptStruct FRawObjectSaveData ************************************************
struct Z_Construct_UScriptStruct_FRawObjectSaveData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRawObjectSaveData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRawObjectSaveData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "Category", "RawData" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "RawData" },
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRawObjectSaveData constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRawObjectSaveData constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawObjectSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRawObjectSaveData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRawObjectSaveData;
class UScriptStruct* FRawObjectSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRawObjectSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRawObjectSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawObjectSaveData, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("RawObjectSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FRawObjectSaveData.OuterSingleton;
	}

// ********** Begin ScriptStruct FRawObjectSaveData Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRawObjectSaveData, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRawObjectSaveData, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRawObjectSaveData Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"RawObjectSaveData",
	Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::PropPointers),
	sizeof(FRawObjectSaveData),
	alignof(FRawObjectSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRawObjectSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FRawObjectSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRawObjectSaveData.InnerSingleton, Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRawObjectSaveData.InnerSingleton);
}
// ********** End ScriptStruct FRawObjectSaveData **************************************************

// ********** Begin ScriptStruct FActorInitContext *************************************************
struct Z_Construct_UScriptStruct_FActorInitContext_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FActorInitContext); }
	static inline consteval int16 GetStructAlignment() { return alignof(FActorInitContext); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Data/Public/EMSData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FActorInitContext constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FActorInitContext constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorInitContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FActorInitContext_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActorInitContext;
class UScriptStruct* FActorInitContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActorInitContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActorInitContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorInitContext, (UObject*)Z_Construct_UPackage__Script_EasyMultiSave(), TEXT("ActorInitContext"));
	}
	return Z_Registration_Info_UScriptStruct_FActorInitContext.OuterSingleton;
	}

// ********** Begin ScriptStruct FActorInitContext Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorInitContext_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorInitContext, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorInitContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorInitContext_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInitContext_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FActorInitContext Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorInitContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	nullptr,
	&NewStructOps,
	"ActorInitContext",
	Z_Construct_UScriptStruct_FActorInitContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInitContext_Statics::PropPointers),
	sizeof(FActorInitContext),
	alignof(FActorInitContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInitContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorInitContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorInitContext()
{
	if (!Z_Registration_Info_UScriptStruct_FActorInitContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActorInitContext.InnerSingleton, Z_Construct_UScriptStruct_FActorInitContext_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FActorInitContext.InnerSingleton);
}
// ********** End ScriptStruct FActorInitContext ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSData_h__Script_EasyMultiSave_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSaveSlotInfo::StaticStruct, Z_Construct_UScriptStruct_FSaveSlotInfo_Statics::NewStructOps, TEXT("SaveSlotInfo"),&Z_Registration_Info_UScriptStruct_FSaveSlotInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveSlotInfo), 2264383217U) },
		{ FComponentSaveData::StaticStruct, Z_Construct_UScriptStruct_FComponentSaveData_Statics::NewStructOps, TEXT("ComponentSaveData"),&Z_Registration_Info_UScriptStruct_FComponentSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentSaveData), 3661848835U) },
		{ FGameObjectSaveData::StaticStruct, Z_Construct_UScriptStruct_FGameObjectSaveData_Statics::NewStructOps, TEXT("GameObjectSaveData"),&Z_Registration_Info_UScriptStruct_FGameObjectSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameObjectSaveData), 1393915627U) },
		{ FActorSaveData::StaticStruct, Z_Construct_UScriptStruct_FActorSaveData_Statics::NewStructOps, TEXT("ActorSaveData"),&Z_Registration_Info_UScriptStruct_FActorSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorSaveData), 711273474U) },
		{ FLevelScriptSaveData::StaticStruct, Z_Construct_UScriptStruct_FLevelScriptSaveData_Statics::NewStructOps, TEXT("LevelScriptSaveData"),&Z_Registration_Info_UScriptStruct_FLevelScriptSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelScriptSaveData), 3332215324U) },
		{ FLevelArchive::StaticStruct, Z_Construct_UScriptStruct_FLevelArchive_Statics::NewStructOps, TEXT("LevelArchive"),&Z_Registration_Info_UScriptStruct_FLevelArchive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelArchive), 1515603252U) },
		{ FActorByteKey::StaticStruct, Z_Construct_UScriptStruct_FActorByteKey_Statics::NewStructOps, TEXT("ActorByteKey"),&Z_Registration_Info_UScriptStruct_FActorByteKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorByteKey), 768632040U) },
		{ FLevelStackArchive::StaticStruct, Z_Construct_UScriptStruct_FLevelStackArchive_Statics::NewStructOps, TEXT("LevelStackArchive"),&Z_Registration_Info_UScriptStruct_FLevelStackArchive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelStackArchive), 2518136036U) },
		{ FMultiLevelStreamingData::StaticStruct, Z_Construct_UScriptStruct_FMultiLevelStreamingData_Statics::NewStructOps, TEXT("MultiLevelStreamingData"),&Z_Registration_Info_UScriptStruct_FMultiLevelStreamingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiLevelStreamingData), 4054962974U) },
		{ FPawnSaveData::StaticStruct, Z_Construct_UScriptStruct_FPawnSaveData_Statics::NewStructOps, TEXT("PawnSaveData"),&Z_Registration_Info_UScriptStruct_FPawnSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPawnSaveData), 3033071153U) },
		{ FControllerSaveData::StaticStruct, Z_Construct_UScriptStruct_FControllerSaveData_Statics::NewStructOps, TEXT("ControllerSaveData"),&Z_Registration_Info_UScriptStruct_FControllerSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControllerSaveData), 237918494U) },
		{ FPlayerArchive::StaticStruct, Z_Construct_UScriptStruct_FPlayerArchive_Statics::NewStructOps, TEXT("PlayerArchive"),&Z_Registration_Info_UScriptStruct_FPlayerArchive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerArchive), 4038125825U) },
		{ FPlayerPositionArchive::StaticStruct, Z_Construct_UScriptStruct_FPlayerPositionArchive_Statics::NewStructOps, TEXT("PlayerPositionArchive"),&Z_Registration_Info_UScriptStruct_FPlayerPositionArchive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerPositionArchive), 3301630486U) },
		{ FPlayerStackArchive::StaticStruct, Z_Construct_UScriptStruct_FPlayerStackArchive_Statics::NewStructOps, TEXT("PlayerStackArchive"),&Z_Registration_Info_UScriptStruct_FPlayerStackArchive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerStackArchive), 2969074776U) },
		{ FRawObjectSaveData::StaticStruct, Z_Construct_UScriptStruct_FRawObjectSaveData_Statics::NewStructOps, TEXT("RawObjectSaveData"),&Z_Registration_Info_UScriptStruct_FRawObjectSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRawObjectSaveData), 2275000115U) },
		{ FActorInitContext::StaticStruct, Z_Construct_UScriptStruct_FActorInitContext_Statics::NewStructOps, TEXT("ActorInitContext"),&Z_Registration_Info_UScriptStruct_FActorInitContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorInitContext), 4186834825U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSData_h__Script_EasyMultiSave_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSData_h__Script_EasyMultiSave_2743378771{
	TEXT("/Script/EasyMultiSave"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSData_h__Script_EasyMultiSave_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Data_Public_EMSData_h__Script_EasyMultiSave_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
