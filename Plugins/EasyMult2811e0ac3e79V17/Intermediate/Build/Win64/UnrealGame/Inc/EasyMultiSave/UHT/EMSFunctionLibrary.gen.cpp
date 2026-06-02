// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EMSFunctionLibrary.h"
#include "EMSData.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEMSFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSCustomSaveGame_NoRegister();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSFunctionLibrary();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSFunctionLibrary_NoRegister();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSInfoSaveGame_NoRegister();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EDeleteSlotType();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod();
EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FRawObjectSaveData();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEMSFunctionLibrary Function ClearMultiLevelSave *************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics
{
	struct EMSFunctionLibrary_eventClearMultiLevelSave_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Multi Level" },
		{ "Comment", "/**\n\x09* Clears the cache used for Multi-Level Saving.\n\x09* Removes all save data belonging to currently unloaded levels from memory.\n\x09* Player and Game Mode data is preserved and can be carried over to the next level.\n\x09*/" },
		{ "DisplayName", "Clear Multi Level Save" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Clears the cache used for Multi-Level Saving.\nRemoves all save data belonging to currently unloaded levels from memory.\nPlayer and Game Mode data is preserved and can be carried over to the next level." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearMultiLevelSave constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearMultiLevelSave constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearMultiLevelSave Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventClearMultiLevelSave_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::PropPointers) < 2048);
// ********** End Function ClearMultiLevelSave Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "ClearMultiLevelSave", 	Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::EMSFunctionLibrary_eventClearMultiLevelSave_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::EMSFunctionLibrary_eventClearMultiLevelSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execClearMultiLevelSave)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEMSFunctionLibrary::ClearMultiLevelSave(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function ClearMultiLevelSave ***************************

// ********** Begin Class UEMSFunctionLibrary Function ClearWorldPartition *************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics
{
	struct EMSFunctionLibrary_eventClearWorldPartition_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | World Partition" },
		{ "Comment", "/**\n\x09* Clears all World Partition Save Data. \n\x09* This can be useful for nonlinear streaming such as teleporting the player. \n\x09*/" },
		{ "DisplayName", "Clear World Partition Save" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Clears all World Partition Save Data.\nThis can be useful for nonlinear streaming such as teleporting the player." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearWorldPartition constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearWorldPartition constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearWorldPartition Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventClearWorldPartition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::PropPointers) < 2048);
// ********** End Function ClearWorldPartition Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "ClearWorldPartition", 	Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::EMSFunctionLibrary_eventClearWorldPartition_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::EMSFunctionLibrary_eventClearWorldPartition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execClearWorldPartition)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEMSFunctionLibrary::ClearWorldPartition(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function ClearWorldPartition ***************************

// ********** Begin Class UEMSFunctionLibrary Function DeleteAllSaveDataForSlot ********************
struct Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics
{
	struct EMSFunctionLibrary_eventDeleteAllSaveDataForSlot_Parms
	{
		UObject* WorldContextObject;
		FString SaveGameName;
		EDeleteSlotType Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Data" },
		{ "Category", "Easy Multi Save | Slots" },
		{ "Comment", "/**\n\x09* Deletes all or specific data for a save slot.\n\x09*\n\x09* @param SaveGameName - The name of the save game to delete.\n\x09* @param Data - The specific Data you want to remove from the Slot.\n\x09*/" },
		{ "DisplayName", "Delete Save Slot" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Deletes all or specific data for a save slot.\n\n@param SaveGameName - The name of the save game to delete.\n@param Data - The specific Data you want to remove from the Slot." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteAllSaveDataForSlot constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteAllSaveDataForSlot constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteAllSaveDataForSlot Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventDeleteAllSaveDataForSlot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventDeleteAllSaveDataForSlot_Parms, SaveGameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameName_MetaData), NewProp_SaveGameName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_Data_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventDeleteAllSaveDataForSlot_Parms, Data), Z_Construct_UEnum_EasyMultiSave_EDeleteSlotType, METADATA_PARAMS(0, nullptr) }; // 2488421181
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_SaveGameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_Data_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::PropPointers) < 2048);
// ********** End Function DeleteAllSaveDataForSlot Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "DeleteAllSaveDataForSlot", 	Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::EMSFunctionLibrary_eventDeleteAllSaveDataForSlot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::EMSFunctionLibrary_eventDeleteAllSaveDataForSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execDeleteAllSaveDataForSlot)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveGameName);
	P_GET_ENUM(EDeleteSlotType,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEMSFunctionLibrary::DeleteAllSaveDataForSlot(Z_Param_WorldContextObject,Z_Param_SaveGameName,EDeleteSlotType(Z_Param_Data));
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function DeleteAllSaveDataForSlot **********************

// ********** Begin Class UEMSFunctionLibrary Function DeleteCustomPlayerFile **********************
struct Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics
{
	struct EMSFunctionLibrary_eventDeleteCustomPlayerFile_Parms
	{
		UObject* WorldContextObject;
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Custom Player" },
		{ "Comment", "/**\n\x09* Deletes a custom save file associated with a specific player. Uses the current save slot.\n\x09* This function is useful in scenarios where outdated or unnecessary player data needs to be removed from storage.\n\x09*\n\x09* @param FileName - The name of the custom save file to be deleted.\n\x09* @return - Returns true if the file was successfully deleted; false otherwise.\n\x09*/" },
		{ "DisplayName", "Delete Custom Player" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Deletes a custom save file associated with a specific player. Uses the current save slot.\nThis function is useful in scenarios where outdated or unnecessary player data needs to be removed from storage.\n\n@param FileName - The name of the custom save file to be deleted.\n@return - Returns true if the file was successfully deleted; false otherwise." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteCustomPlayerFile constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteCustomPlayerFile constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteCustomPlayerFile Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventDeleteCustomPlayerFile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventDeleteCustomPlayerFile_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
void Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EMSFunctionLibrary_eventDeleteCustomPlayerFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSFunctionLibrary_eventDeleteCustomPlayerFile_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::PropPointers) < 2048);
// ********** End Function DeleteCustomPlayerFile Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "DeleteCustomPlayerFile", 	Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::EMSFunctionLibrary_eventDeleteCustomPlayerFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::EMSFunctionLibrary_eventDeleteCustomPlayerFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execDeleteCustomPlayerFile)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEMSFunctionLibrary::DeleteCustomPlayerFile(Z_Param_WorldContextObject,Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function DeleteCustomPlayerFile ************************

// ********** Begin Class UEMSFunctionLibrary Function DeleteCustomSave ****************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics
{
	struct EMSFunctionLibrary_eventDeleteCustomSave_Parms
	{
		UObject* WorldContextObject;
		UEMSCustomSaveGame* SaveGame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Custom" },
		{ "Comment", "/**\n\x09 * Permanently deletes the specified Custom Save object and removes its associated data.\n\x09 * Use with caution \xe2\x80\x94 this operation cannot be undone.\n\x09 *\n\x09 * @param SaveGame - The Custom Save object to delete.\n\x09 */" },
		{ "DisplayName", "Delete Custom Save Object" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Permanently deletes the specified Custom Save object and removes its associated data.\nUse with caution \xe2\x80\x94 this operation cannot be undone.\n\n@param SaveGame - The Custom Save object to delete." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteCustomSave constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteCustomSave constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteCustomSave Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventDeleteCustomSave_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventDeleteCustomSave_Parms, SaveGame), Z_Construct_UClass_UEMSCustomSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::NewProp_SaveGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::PropPointers) < 2048);
// ********** End Function DeleteCustomSave Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "DeleteCustomSave", 	Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::EMSFunctionLibrary_eventDeleteCustomSave_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::EMSFunctionLibrary_eventDeleteCustomSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execDeleteCustomSave)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UEMSCustomSaveGame,Z_Param_SaveGame);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEMSFunctionLibrary::DeleteCustomSave(Z_Param_WorldContextObject,Z_Param_SaveGame);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function DeleteCustomSave ******************************

// ********** Begin Class UEMSFunctionLibrary Function DeleteSaveUser ******************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics
{
	struct EMSFunctionLibrary_eventDeleteSaveUser_Parms
	{
		UObject* WorldContextObject;
		FString UserName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Users" },
		{ "Comment", "/**\n\x09* Fully removes all save files of a specific user.\n\x09*\n\x09* @param UserName - The user to delete.\n\x09*/" },
		{ "DisplayName", "Delete Save User" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Fully removes all save files of a specific user.\n\n@param UserName - The user to delete." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteSaveUser constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteSaveUser constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteSaveUser Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventDeleteSaveUser_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventDeleteSaveUser_Parms, UserName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserName_MetaData), NewProp_UserName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::NewProp_UserName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::PropPointers) < 2048);
// ********** End Function DeleteSaveUser Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "DeleteSaveUser", 	Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::EMSFunctionLibrary_eventDeleteSaveUser_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::EMSFunctionLibrary_eventDeleteSaveUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execDeleteSaveUser)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEMSFunctionLibrary::DeleteSaveUser(Z_Param_WorldContextObject,Z_Param_UserName);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function DeleteSaveUser ********************************

// ********** Begin Class UEMSFunctionLibrary Function DoesCustomSaveFileExist *********************
struct Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics
{
	struct EMSFunctionLibrary_eventDoesCustomSaveFileExist_Parms
	{
		UObject* WorldContextObject;
		FString SaveSlot;
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Custom" },
		{ "Comment", "/**\n\x09* Checks if an actual Custom Save File exists.\n\x09*\n\x09* @param SaveSlot - Optional name of the Slot you want to get the Custom Save from. \n\x09* @param FileName - The name of the Custom Save File.\n\x09* @return - If the file actually exists.\n\x09*/" },
		{ "DisplayName", "Does Custom Save Exist" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Checks if an actual Custom Save File exists.\n\n@param SaveSlot - Optional name of the Slot you want to get the Custom Save from.\n@param FileName - The name of the Custom Save File.\n@return - If the file actually exists." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesCustomSaveFileExist constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlot;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesCustomSaveFileExist constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesCustomSaveFileExist Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventDoesCustomSaveFileExist_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::NewProp_SaveSlot = { "SaveSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventDoesCustomSaveFileExist_Parms, SaveSlot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventDoesCustomSaveFileExist_Parms, FileName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EMSFunctionLibrary_eventDoesCustomSaveFileExist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSFunctionLibrary_eventDoesCustomSaveFileExist_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::NewProp_SaveSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::PropPointers) < 2048);
// ********** End Function DoesCustomSaveFileExist Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "DoesCustomSaveFileExist", 	Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::EMSFunctionLibrary_eventDoesCustomSaveFileExist_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::EMSFunctionLibrary_eventDoesCustomSaveFileExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execDoesCustomSaveFileExist)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveSlot);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEMSFunctionLibrary::DoesCustomSaveFileExist(Z_Param_WorldContextObject,Z_Param_SaveSlot,Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function DoesCustomSaveFileExist ***********************

// ********** Begin Class UEMSFunctionLibrary Function DoesSaveSlotExist ***************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics
{
	struct EMSFunctionLibrary_eventDoesSaveSlotExist_Parms
	{
		UObject* WorldContextObject;
		FString SaveGameName;
		bool bComplete;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bComplete" },
		{ "Category", "Easy Multi Save | Slots" },
		{ "Comment", "/**\n\x09* Check if a specific save slot exists.\n\n\x09* @param SaveGameName - The save slot to look for.\n\x09* @param bComplete - Checks if the Slot includes Player and Level save files and not just for the Slot Info.\n\x09* @return - If the slot is valid.\n\x09*/" },
		{ "DisplayName", "Does Save Slot Exist" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Check if a specific save slot exists.\n\n@param SaveGameName - The save slot to look for.\n@param bComplete - Checks if the Slot includes Player and Level save files and not just for the Slot Info.\n@return - If the slot is valid." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesSaveSlotExist constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
	static void NewProp_bComplete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComplete;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesSaveSlotExist constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesSaveSlotExist Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventDoesSaveSlotExist_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventDoesSaveSlotExist_Parms, SaveGameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameName_MetaData), NewProp_SaveGameName_MetaData) };
void Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_bComplete_SetBit(void* Obj)
{
	((EMSFunctionLibrary_eventDoesSaveSlotExist_Parms*)Obj)->bComplete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_bComplete = { "bComplete", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSFunctionLibrary_eventDoesSaveSlotExist_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_bComplete_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EMSFunctionLibrary_eventDoesSaveSlotExist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSFunctionLibrary_eventDoesSaveSlotExist_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_SaveGameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_bComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::PropPointers) < 2048);
// ********** End Function DoesSaveSlotExist Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "DoesSaveSlotExist", 	Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::EMSFunctionLibrary_eventDoesSaveSlotExist_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::EMSFunctionLibrary_eventDoesSaveSlotExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execDoesSaveSlotExist)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveGameName);
	P_GET_UBOOL(Z_Param_bComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEMSFunctionLibrary::DoesSaveSlotExist(Z_Param_WorldContextObject,Z_Param_SaveGameName,Z_Param_bComplete);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function DoesSaveSlotExist *****************************

// ********** Begin Class UEMSFunctionLibrary Function ExportSaveThumbnail *************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics
{
	struct EMSFunctionLibrary_eventExportSaveThumbnail_Parms
	{
		UObject* WorldContextObject;
		UTextureRenderTarget2D* TextureRenderTarget;
		FString SaveGameName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Thumbnail" },
		{ "Comment", "/**\n\x09* Saves a thumbnail from a render target texture as .png to the save game folder.\n\x09*\n\x09* @param TextureRenderTarget - The texture target from the scene capture 2d source.\n\x09* @param SaveGameName - The name of the Savegame/Slot that is tied to the thumbnail.\n\x09*/" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Saves a thumbnail from a render target texture as .png to the save game folder.\n\n@param TextureRenderTarget - The texture target from the scene capture 2d source.\n@param SaveGameName - The name of the Savegame/Slot that is tied to the thumbnail." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExportSaveThumbnail constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExportSaveThumbnail constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExportSaveThumbnail Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventExportSaveThumbnail_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventExportSaveThumbnail_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventExportSaveThumbnail_Parms, SaveGameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameName_MetaData), NewProp_SaveGameName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_TextureRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_SaveGameName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::PropPointers) < 2048);
// ********** End Function ExportSaveThumbnail Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "ExportSaveThumbnail", 	Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::EMSFunctionLibrary_eventExportSaveThumbnail_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::EMSFunctionLibrary_eventExportSaveThumbnail_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execExportSaveThumbnail)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveGameName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEMSFunctionLibrary::ExportSaveThumbnail(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_SaveGameName);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function ExportSaveThumbnail ***************************

// ********** Begin Class UEMSFunctionLibrary Function GetAllSaveUsers *****************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics
{
	struct EMSFunctionLibrary_eventGetAllSaveUsers_Parms
	{
		UObject* WorldContextObject;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Users" },
		{ "Comment", "/**\n\x09* Returns an array of all available save users that were added using 'Set Current Save User'. Sorted by name.\n\x09*\n\x09* @return - The array of available save users.\n\x09*/" },
		{ "DisplayName", "Get Save Users" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Returns an array of all available save users that were added using 'Set Current Save User'. Sorted by name.\n\n@return - The array of available save users." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllSaveUsers constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllSaveUsers constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllSaveUsers Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetAllSaveUsers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetAllSaveUsers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::PropPointers) < 2048);
// ********** End Function GetAllSaveUsers Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "GetAllSaveUsers", 	Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::EMSFunctionLibrary_eventGetAllSaveUsers_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::EMSFunctionLibrary_eventGetAllSaveUsers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execGetAllSaveUsers)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UEMSFunctionLibrary::GetAllSaveUsers(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function GetAllSaveUsers *******************************

// ********** Begin Class UEMSFunctionLibrary Function GetBackupName *******************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName_Statics
{
	struct EMSFunctionLibrary_eventGetBackupName_Parms
	{
		UObject* WorldContextObject;
		FString BaseName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Backup" },
		{ "Comment", "/**\n\x09 * Returns the EMS backup name corresponding to the given base name.\n\x09 *\n\x09 * The backup name is generated by appending a backup suffix.\n\x09 * to the original name. For example: \"File\" you get \"File_Bak0\".\n\x09 *\n\x09 * @param - BaseName The original name (e.g., of a save slot or file) to derive the backup name from.\n\x09 * @return - A generated backup name string based on the given base name.\n\x09 */" },
		{ "DisplayName", "Get Backup Name" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Returns the EMS backup name corresponding to the given base name.\n\nThe backup name is generated by appending a backup suffix.\nto the original name. For example: \"File\" you get \"File_Bak0\".\n\n@param - BaseName The original name (e.g., of a save slot or file) to derive the backup name from.\n@return - A generated backup name string based on the given base name." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBackupName constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BaseName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBackupName constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBackupName Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetBackupName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetBackupName_Parms, BaseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseName_MetaData), NewProp_BaseName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetBackupName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName_Statics::NewProp_BaseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName_Statics::PropPointers) < 2048);
// ********** End Function GetBackupName Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "GetBackupName", 	Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName_Statics::EMSFunctionLibrary_eventGetBackupName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName_Statics::EMSFunctionLibrary_eventGetBackupName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execGetBackupName)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_BaseName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEMSFunctionLibrary::GetBackupName(Z_Param_WorldContextObject,Z_Param_BaseName);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function GetBackupName *********************************

// ********** Begin Class UEMSFunctionLibrary Function GetCurrentSaveUser **************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_GetCurrentSaveUser_Statics
{
	struct EMSFunctionLibrary_eventGetCurrentSaveUser_Parms
	{
		UObject* WorldContextObject;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Users" },
		{ "Comment", "/**\n\x09* Get the current save user name defined by 'Set Current Save User'.\n\x09*\n\x09* @return - The current save user name.\n\x09*/" },
		{ "DisplayName", "Get Current Save User" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Get the current save user name defined by 'Set Current Save User'.\n\n@return - The current save user name." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentSaveUser constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentSaveUser constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentSaveUser Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetCurrentSaveUser_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetCurrentSaveUser_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetCurrentSaveUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetCurrentSaveUser_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_GetCurrentSaveUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetCurrentSaveUser_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetCurrentSaveUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetCurrentSaveUser_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentSaveUser Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_GetCurrentSaveUser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "GetCurrentSaveUser", 	Z_Construct_UFunction_UEMSFunctionLibrary_GetCurrentSaveUser_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetCurrentSaveUser_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetCurrentSaveUser_Statics::EMSFunctionLibrary_eventGetCurrentSaveUser_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetCurrentSaveUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_GetCurrentSaveUser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetCurrentSaveUser_Statics::EMSFunctionLibrary_eventGetCurrentSaveUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_GetCurrentSaveUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_GetCurrentSaveUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execGetCurrentSaveUser)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UEMSFunctionLibrary::GetCurrentSaveUser(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function GetCurrentSaveUser ****************************

// ********** Begin Class UEMSFunctionLibrary Function GetCustomSave *******************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics
{
	struct EMSFunctionLibrary_eventGetCustomSave_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<UEMSCustomSaveGame> SaveGameClass;
		FString SaveSlot;
		FString FileName;
		UEMSCustomSaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SaveSlot, FileName" },
		{ "Category", "Easy Multi Save | Custom" },
		{ "Comment", "/**\n\x09* Gets the desired Custom Save Object(EmsCustomSaveGame). It is always valid.\n\x09*\n\x09* @param SaveGameClass - The class of the save object.\n\x09* @param SaveSlot - Optional name of the Slot you want to get the Custom Save from. 'Use Save Slot' must be true in the Class. If empty, will use the Current Slot.\n\x09* @param FileName - Optional custom file name. Allows for multiple Custom Save Objects from one Class. If Empty, will use the default file name from the Class.\n\x09* @return - The custom save object.\n\x09*/" },
		{ "DeterminesOutputType", "SaveGameClass" },
		{ "DisplayName", "Get Custom Save Object" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Gets the desired Custom Save Object(EmsCustomSaveGame). It is always valid.\n\n@param SaveGameClass - The class of the save object.\n@param SaveSlot - Optional name of the Slot you want to get the Custom Save from. 'Use Save Slot' must be true in the Class. If empty, will use the Current Slot.\n@param FileName - Optional custom file name. Allows for multiple Custom Save Objects from one Class. If Empty, will use the default file name from the Class.\n@return - The custom save object." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCustomSave constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SaveGameClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlot;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCustomSave constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCustomSave Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetCustomSave_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_SaveGameClass = { "SaveGameClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetCustomSave_Parms, SaveGameClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UEMSCustomSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_SaveSlot = { "SaveSlot", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetCustomSave_Parms, SaveSlot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetCustomSave_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetCustomSave_Parms, ReturnValue), Z_Construct_UClass_UEMSCustomSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_SaveGameClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_SaveSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::PropPointers) < 2048);
// ********** End Function GetCustomSave Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "GetCustomSave", 	Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::EMSFunctionLibrary_eventGetCustomSave_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::EMSFunctionLibrary_eventGetCustomSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execGetCustomSave)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_SaveGameClass);
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveSlot);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEMSCustomSaveGame**)Z_Param__Result=UEMSFunctionLibrary::GetCustomSave(Z_Param_WorldContextObject,Z_Param_SaveGameClass,Z_Param_SaveSlot,Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function GetCustomSave *********************************

// ********** Begin Class UEMSFunctionLibrary Function GetNamedSlotInfo ****************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics
{
	struct EMSFunctionLibrary_eventGetNamedSlotInfo_Parms
	{
		UObject* WorldContextObject;
		FString SaveGameName;
		UEMSInfoSaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Slots" },
		{ "Comment", "/**\n\x09* Get a save game slot by name.\n\n\x09* @param SaveGameName - The slot name you want to get the info from.\n\x09* @return - The desired slot info. Will return the current slot if SaveGameName is empty.\n\x09*/" },
		{ "DisplayName", "Get Named Save Slot" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Get a save game slot by name.\n\n@param SaveGameName - The slot name you want to get the info from.\n@return - The desired slot info. Will return the current slot if SaveGameName is empty." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNamedSlotInfo constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNamedSlotInfo constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNamedSlotInfo Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetNamedSlotInfo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetNamedSlotInfo_Parms, SaveGameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameName_MetaData), NewProp_SaveGameName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetNamedSlotInfo_Parms, ReturnValue), Z_Construct_UClass_UEMSInfoSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_SaveGameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::PropPointers) < 2048);
// ********** End Function GetNamedSlotInfo Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "GetNamedSlotInfo", 	Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::EMSFunctionLibrary_eventGetNamedSlotInfo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::EMSFunctionLibrary_eventGetNamedSlotInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execGetNamedSlotInfo)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveGameName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEMSInfoSaveGame**)Z_Param__Result=UEMSFunctionLibrary::GetNamedSlotInfo(Z_Param_WorldContextObject,Z_Param_SaveGameName);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function GetNamedSlotInfo ******************************

// ********** Begin Class UEMSFunctionLibrary Function GetSlotInfoSaveGame *************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics
{
	struct EMSFunctionLibrary_eventGetSlotInfoSaveGame_Parms
	{
		UObject* WorldContextObject;
		FString SaveGameName;
		UEMSInfoSaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Slots" },
		{ "Comment", "/**\n\x09* Get the current save game slot defined by 'Set Current Save Slot'.\n\n\x09* @param SaveGameName - Convenient reference, so you don't nee to use the SlotInfo struct.\n\x09* @return - The current slot info and save game name.\n\x09*/" },
		{ "DisplayName", "Get Current Save Slot" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Get the current save game slot defined by 'Set Current Save Slot'.\n\n@param SaveGameName - Convenient reference, so you don't nee to use the SlotInfo struct.\n@return - The current slot info and save game name." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSlotInfoSaveGame constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSlotInfoSaveGame constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSlotInfoSaveGame Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetSlotInfoSaveGame_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetSlotInfoSaveGame_Parms, SaveGameName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetSlotInfoSaveGame_Parms, ReturnValue), Z_Construct_UClass_UEMSInfoSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_SaveGameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::PropPointers) < 2048);
// ********** End Function GetSlotInfoSaveGame Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "GetSlotInfoSaveGame", 	Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::EMSFunctionLibrary_eventGetSlotInfoSaveGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::EMSFunctionLibrary_eventGetSlotInfoSaveGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execGetSlotInfoSaveGame)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SaveGameName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEMSInfoSaveGame**)Z_Param__Result=UEMSFunctionLibrary::GetSlotInfoSaveGame(Z_Param_WorldContextObject,Z_Param_Out_SaveGameName);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function GetSlotInfoSaveGame ***************************

// ********** Begin Class UEMSFunctionLibrary Function GetSortedSaveSlots **************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics
{
	struct EMSFunctionLibrary_eventGetSortedSaveSlots_Parms
	{
		UObject* WorldContextObject;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Slots" },
		{ "Comment", "/**\n\x09* Loads the array of available save games / slots, sorted by their time of saving.\n\x09*\n\x09* @return - The array of available save game slots.\n\x09*/" },
		{ "DisplayName", "Get All Save Slots" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Loads the array of available save games / slots, sorted by their time of saving.\n\n@return - The array of available save game slots." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSortedSaveSlots constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSortedSaveSlots constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSortedSaveSlots Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetSortedSaveSlots_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetSortedSaveSlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::PropPointers) < 2048);
// ********** End Function GetSortedSaveSlots Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "GetSortedSaveSlots", 	Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::EMSFunctionLibrary_eventGetSortedSaveSlots_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::EMSFunctionLibrary_eventGetSortedSaveSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execGetSortedSaveSlots)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UEMSFunctionLibrary::GetSortedSaveSlots(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function GetSortedSaveSlots ****************************

// ********** Begin Class UEMSFunctionLibrary Function ImportSaveThumbnail *************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics
{
	struct EMSFunctionLibrary_eventImportSaveThumbnail_Parms
	{
		UObject* WorldContextObject;
		FString SaveGameName;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Thumbnail" },
		{ "Comment", "/**\n\x09* Imports a thumbnail as .png from the save game folder.\n\x09*\n\x09* @param SaveGameName - The name of the Savegame/Slot that is tied to the thumbnail.\n\x09* @return - The loaded thumbnail as Texture2D.\n\x09*/" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Imports a thumbnail as .png from the save game folder.\n\n@param SaveGameName - The name of the Savegame/Slot that is tied to the thumbnail.\n@return - The loaded thumbnail as Texture2D." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ImportSaveThumbnail constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ImportSaveThumbnail constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ImportSaveThumbnail Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventImportSaveThumbnail_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventImportSaveThumbnail_Parms, SaveGameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameName_MetaData), NewProp_SaveGameName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventImportSaveThumbnail_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_SaveGameName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::PropPointers) < 2048);
// ********** End Function ImportSaveThumbnail Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "ImportSaveThumbnail", 	Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::EMSFunctionLibrary_eventImportSaveThumbnail_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::EMSFunctionLibrary_eventImportSaveThumbnail_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execImportSaveThumbnail)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveGameName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UEMSFunctionLibrary::ImportSaveThumbnail(Z_Param_WorldContextObject,Z_Param_SaveGameName);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function ImportSaveThumbnail ***************************

// ********** Begin Class UEMSFunctionLibrary Function IsLevelStreamingActive **********************
struct Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive_Statics
{
	struct EMSFunctionLibrary_eventIsLevelStreamingActive_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Streaming" },
		{ "Comment", "/**\n\x09* If Level Streaming is still marked as active for EMS saving or loading.\n\x09*\n\x09* @return - If Level Streaming is still active.\n\x09*/" },
		{ "DisplayName", "Is Level Streaming Active" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "If Level Streaming is still marked as active for EMS saving or loading.\n\n@return - If Level Streaming is still active." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsLevelStreamingActive constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsLevelStreamingActive constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsLevelStreamingActive Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventIsLevelStreamingActive_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EMSFunctionLibrary_eventIsLevelStreamingActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSFunctionLibrary_eventIsLevelStreamingActive_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive_Statics::PropPointers) < 2048);
// ********** End Function IsLevelStreamingActive Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "IsLevelStreamingActive", 	Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive_Statics::EMSFunctionLibrary_eventIsLevelStreamingActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive_Statics::EMSFunctionLibrary_eventIsLevelStreamingActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execIsLevelStreamingActive)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEMSFunctionLibrary::IsLevelStreamingActive(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function IsLevelStreamingActive ************************

// ********** Begin Class UEMSFunctionLibrary Function IsLoadedState *******************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState_Statics
{
	struct EMSFunctionLibrary_eventIsLoadedState_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Actors" },
		{ "Comment", "/**\n\x09* Returns whether an Actor is currently considered loaded.\n\x09*\n\x09* True one frame after the 'Actor Loaded' event.\n\x09* Also true directly after saving to avoid redundant reloads.\n\x09* Can be manually overridden using 'Set Actor Save Properties'.\n\x09*\n\x09* @param Actor - The Actor to evaluate. Defaults to self.\n\x09* @return - True if the Actor is in a loaded state.\n\x09*/" },
		{ "DefaultToSelf", "Actor" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Returns whether an Actor is currently considered loaded.\n\nTrue one frame after the 'Actor Loaded' event.\nAlso true directly after saving to avoid redundant reloads.\nCan be manually overridden using 'Set Actor Save Properties'.\n\n@param Actor - The Actor to evaluate. Defaults to self.\n@return - True if the Actor is in a loaded state." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsLoadedState constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsLoadedState constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsLoadedState Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventIsLoadedState_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EMSFunctionLibrary_eventIsLoadedState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSFunctionLibrary_eventIsLoadedState_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState_Statics::PropPointers) < 2048);
// ********** End Function IsLoadedState Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "IsLoadedState", 	Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState_Statics::EMSFunctionLibrary_eventIsLoadedState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState_Statics::EMSFunctionLibrary_eventIsLoadedState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execIsLoadedState)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEMSFunctionLibrary::IsLoadedState(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function IsLoadedState *********************************

// ********** Begin Class UEMSFunctionLibrary Function IsSavingOrLoading ***************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics
{
	struct EMSFunctionLibrary_eventIsSavingOrLoading_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Actors" },
		{ "Comment", "/**\n\x09* Checks if SaveGameActors or LoadGameActors is currently active.\n\x09* \n\x09* @return - True if SaveGameActors or LoadGameActors is currently active.\n\x09*/" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Checks if SaveGameActors or LoadGameActors is currently active.\n\n@return - True if SaveGameActors or LoadGameActors is currently active." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSavingOrLoading constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSavingOrLoading constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSavingOrLoading Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventIsSavingOrLoading_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EMSFunctionLibrary_eventIsSavingOrLoading_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSFunctionLibrary_eventIsSavingOrLoading_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::PropPointers) < 2048);
// ********** End Function IsSavingOrLoading Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "IsSavingOrLoading", 	Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::EMSFunctionLibrary_eventIsSavingOrLoading_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::EMSFunctionLibrary_eventIsSavingOrLoading_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execIsSavingOrLoading)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEMSFunctionLibrary::IsSavingOrLoading(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function IsSavingOrLoading *****************************

// ********** Begin Class UEMSFunctionLibrary Function IsWorldPartition ****************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics
{
	struct EMSFunctionLibrary_eventIsWorldPartition_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | World Partition" },
		{ "Comment", "/**\n\x09* If the current Persistent Level is using World Partition with EMS.\n\x09* \n\x09* @return - If the World uses World Partition.\n\x09*/" },
		{ "DisplayName", "Is World Partition Save" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "If the current Persistent Level is using World Partition with EMS.\n\n@return - If the World uses World Partition." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsWorldPartition constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsWorldPartition constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsWorldPartition Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventIsWorldPartition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EMSFunctionLibrary_eventIsWorldPartition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSFunctionLibrary_eventIsWorldPartition_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::PropPointers) < 2048);
// ********** End Function IsWorldPartition Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "IsWorldPartition", 	Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::EMSFunctionLibrary_eventIsWorldPartition_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::EMSFunctionLibrary_eventIsWorldPartition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execIsWorldPartition)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEMSFunctionLibrary::IsWorldPartition(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function IsWorldPartition ******************************

// ********** Begin Class UEMSFunctionLibrary Function LoadPlayerActorsCustom **********************
struct Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics
{
	struct EMSFunctionLibrary_eventLoadPlayerActorsCustom_Parms
	{
		AController* Controller;
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Custom Player" },
		{ "Comment", "/**\n\x09* Loads player-specific data from a custom save file synchronously. Uses the current save slot.\n\x09* This function is intended for use on dedicated servers, where client-specific data needs to be stored on the server side.\n\x09* A good place to call this function is 'On Restart Player' in your Game Mode. \n\x09*\n\x09* @param Controller - The controller associated with the player whose data is being loaded.\n\x09* @param FileName - The name of the custom save file containing the player's data.\n\x09* @return - Returns true if the player data was successfully loaded from the file; false otherwise.\n\x09*/" },
		{ "DisplayName", "Load Custom Player" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Loads player-specific data from a custom save file synchronously. Uses the current save slot.\nThis function is intended for use on dedicated servers, where client-specific data needs to be stored on the server side.\nA good place to call this function is 'On Restart Player' in your Game Mode.\n\n@param Controller - The controller associated with the player whose data is being loaded.\n@param FileName - The name of the custom save file containing the player's data.\n@return - Returns true if the player data was successfully loaded from the file; false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadPlayerActorsCustom constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadPlayerActorsCustom constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadPlayerActorsCustom Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventLoadPlayerActorsCustom_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventLoadPlayerActorsCustom_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
void Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EMSFunctionLibrary_eventLoadPlayerActorsCustom_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSFunctionLibrary_eventLoadPlayerActorsCustom_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::PropPointers) < 2048);
// ********** End Function LoadPlayerActorsCustom Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "LoadPlayerActorsCustom", 	Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::EMSFunctionLibrary_eventLoadPlayerActorsCustom_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::EMSFunctionLibrary_eventLoadPlayerActorsCustom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execLoadPlayerActorsCustom)
{
	P_GET_OBJECT(AController,Z_Param_Controller);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEMSFunctionLibrary::LoadPlayerActorsCustom(Z_Param_Controller,Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function LoadPlayerActorsCustom ************************

// ********** Begin Class UEMSFunctionLibrary Function LoadRawObject *******************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics
{
	struct EMSFunctionLibrary_eventLoadRawObject_Parms
	{
		UObject* WorldContextObject;
		FRawObjectSaveData Data;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Raw Objects" },
		{ "Comment", "/**\n\x09* Retrieves a specific saved UObject from this Actor on demand.\n\x09* This function should be called after the Actor has finished loading, like from the Actor Loaded event.\n\x09* Note that the Objects are not automatically re-created, so they must be valid when you access the data.\n\x09*\n\x09* @return - The serialized UObject if successful. Returns an invalid result if the retrieval fails or if the Object cannot be found by its ID.\n\x09*/" },
		{ "DisplayName", "Load Raw Object Data" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Retrieves a specific saved UObject from this Actor on demand.\nThis function should be called after the Actor has finished loading, like from the Actor Loaded event.\nNote that the Objects are not automatically re-created, so they must be valid when you access the data.\n\n@return - The serialized UObject if successful. Returns an invalid result if the retrieval fails or if the Object cannot be found by its ID." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadRawObject constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadRawObject constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadRawObject Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventLoadRawObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventLoadRawObject_Parms, Data), Z_Construct_UScriptStruct_FRawObjectSaveData, METADATA_PARAMS(0, nullptr) }; // 2275000115
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventLoadRawObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::PropPointers) < 2048);
// ********** End Function LoadRawObject Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "LoadRawObject", 	Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::EMSFunctionLibrary_eventLoadRawObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::EMSFunctionLibrary_eventLoadRawObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execLoadRawObject)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FRawObjectSaveData,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UEMSFunctionLibrary::LoadRawObject(Z_Param_WorldContextObject,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function LoadRawObject *********************************

// ********** Begin Class UEMSFunctionLibrary Function ResetCustomSave *****************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics
{
	struct EMSFunctionLibrary_eventResetCustomSave_Parms
	{
		UObject* WorldContextObject;
		UEMSCustomSaveGame* SaveGame;
		EResetCustomSaveType Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Custom" },
		{ "Comment", "/**\n\x09 * Resets the specified Custom Save object according to the selected type.\n\x09 * Use with caution \xe2\x80\x94 performing a reset before saving may result in data loss.\n\x09 *\n\x09 * @param SaveGame - The Custom Save object to reset.\n\x09 * @param Type - The type of reset operation to perform.\n\x09 */" },
		{ "DisplayName", "Reset Custom Save Object" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Resets the specified Custom Save object according to the selected type.\nUse with caution \xe2\x80\x94 performing a reset before saving may result in data loss.\n\n@param SaveGame - The Custom Save object to reset.\n@param Type - The type of reset operation to perform." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetCustomSave constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResetCustomSave constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResetCustomSave Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventResetCustomSave_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventResetCustomSave_Parms, SaveGame), Z_Construct_UClass_UEMSCustomSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventResetCustomSave_Parms, Type), Z_Construct_UEnum_EasyMultiSave_EResetCustomSaveType, METADATA_PARAMS(0, nullptr) }; // 674170833
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::NewProp_SaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::PropPointers) < 2048);
// ********** End Function ResetCustomSave Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "ResetCustomSave", 	Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::EMSFunctionLibrary_eventResetCustomSave_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::EMSFunctionLibrary_eventResetCustomSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execResetCustomSave)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UEMSCustomSaveGame,Z_Param_SaveGame);
	P_GET_ENUM(EResetCustomSaveType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEMSFunctionLibrary::ResetCustomSave(Z_Param_WorldContextObject,Z_Param_SaveGame,EResetCustomSaveType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function ResetCustomSave *******************************

// ********** Begin Class UEMSFunctionLibrary Function SaveCustom **********************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics
{
	struct EMSFunctionLibrary_eventSaveCustom_Parms
	{
		UObject* WorldContextObject;
		UEMSCustomSaveGame* SaveGame;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SaveGame" },
		{ "Category", "Easy Multi Save | Custom" },
		{ "Comment", "/**\n\x09* Saves either all Custom Save Objects or a specific one, based on the input.\n\x09* If no SaveGame object is provided, all registered Custom Save Objects will be saved automatically.\n\x09* If UseSaveSlot is enabled, only the Objects in the current Save Slot will be saved.\n\x09*\n\x09* @param SaveGame - (Optional) The specific save object to store. You can connect a 'Get Custom Save Object' node here.\n\x09* @return - True if the save process completed successfully.\n\x09*/" },
		{ "DisplayName", "Save Custom Object(s)" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Saves either all Custom Save Objects or a specific one, based on the input.\nIf no SaveGame object is provided, all registered Custom Save Objects will be saved automatically.\nIf UseSaveSlot is enabled, only the Objects in the current Save Slot will be saved.\n\n@param SaveGame - (Optional) The specific save object to store. You can connect a 'Get Custom Save Object' node here.\n@return - True if the save process completed successfully." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SaveCustom constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveCustom constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveCustom Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventSaveCustom_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventSaveCustom_Parms, SaveGame), Z_Construct_UClass_UEMSCustomSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EMSFunctionLibrary_eventSaveCustom_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSFunctionLibrary_eventSaveCustom_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::NewProp_SaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::PropPointers) < 2048);
// ********** End Function SaveCustom Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "SaveCustom", 	Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::EMSFunctionLibrary_eventSaveCustom_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::EMSFunctionLibrary_eventSaveCustom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execSaveCustom)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UEMSCustomSaveGame,Z_Param_SaveGame);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEMSFunctionLibrary::SaveCustom(Z_Param_WorldContextObject,Z_Param_SaveGame);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function SaveCustom ************************************

// ********** Begin Class UEMSFunctionLibrary Function SavePlayerActorsCustom **********************
struct Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics
{
	struct EMSFunctionLibrary_eventSavePlayerActorsCustom_Parms
	{
		AController* Controller;
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Custom Player" },
		{ "Comment", "/**\n\x09* Saves player-specific data to a custom save file. Uses the current save slot.\n\x09* This function is intended for use on dedicated servers, where client-specific data needs to be stored on the server side.\n\x09*\n\x09* @param Controller - The controller associated with the player whose data is being saved.\n\x09* @param FileName - The name of the custom save file to which the player's data will be written.\n\x09* @return - Returns true if the player data was successfully saved to the file; false otherwise.\n\x09*/" },
		{ "DisplayName", "Save Custom Player" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Saves player-specific data to a custom save file. Uses the current save slot.\nThis function is intended for use on dedicated servers, where client-specific data needs to be stored on the server side.\n\n@param Controller - The controller associated with the player whose data is being saved.\n@param FileName - The name of the custom save file to which the player's data will be written.\n@return - Returns true if the player data was successfully saved to the file; false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SavePlayerActorsCustom constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SavePlayerActorsCustom constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SavePlayerActorsCustom Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventSavePlayerActorsCustom_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventSavePlayerActorsCustom_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
void Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EMSFunctionLibrary_eventSavePlayerActorsCustom_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSFunctionLibrary_eventSavePlayerActorsCustom_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::PropPointers) < 2048);
// ********** End Function SavePlayerActorsCustom Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "SavePlayerActorsCustom", 	Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::EMSFunctionLibrary_eventSavePlayerActorsCustom_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::EMSFunctionLibrary_eventSavePlayerActorsCustom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execSavePlayerActorsCustom)
{
	P_GET_OBJECT(AController,Z_Param_Controller);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEMSFunctionLibrary::SavePlayerActorsCustom(Z_Param_Controller,Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function SavePlayerActorsCustom ************************

// ********** Begin Class UEMSFunctionLibrary Function SaveRawObject *******************************
struct Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics
{
	struct EMSFunctionLibrary_eventSaveRawObject_Parms
	{
		UObject* WorldContextObject;
		FRawObjectSaveData Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Raw Objects" },
		{ "Comment", "/**\n\x09* Adds any UObject to the Actor's save data. This can include other Actors, Subsystems, and similar objects.\n\x09* The provided ID must be unique and can be a GUID converted to a string or any other unique identifier.\n\x09* The data is written alongside the Actor when it gets saved.\n\x09*\n\x09* @return - True if the UObject was successfully serialized, false otherwise.\n\x09*/" },
		{ "DisplayName", "Save Raw Object Data" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Adds any UObject to the Actor's save data. This can include other Actors, Subsystems, and similar objects.\nThe provided ID must be unique and can be a GUID converted to a string or any other unique identifier.\nThe data is written alongside the Actor when it gets saved.\n\n@return - True if the UObject was successfully serialized, false otherwise." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SaveRawObject constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveRawObject constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveRawObject Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventSaveRawObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventSaveRawObject_Parms, Data), Z_Construct_UScriptStruct_FRawObjectSaveData, METADATA_PARAMS(0, nullptr) }; // 2275000115
void Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EMSFunctionLibrary_eventSaveRawObject_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSFunctionLibrary_eventSaveRawObject_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::PropPointers) < 2048);
// ********** End Function SaveRawObject Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "SaveRawObject", 	Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::EMSFunctionLibrary_eventSaveRawObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::EMSFunctionLibrary_eventSaveRawObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execSaveRawObject)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FRawObjectSaveData,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEMSFunctionLibrary::SaveRawObject(Z_Param_WorldContextObject,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function SaveRawObject *********************************

// ********** Begin Class UEMSFunctionLibrary Function SetActorSaveProperties **********************
struct Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics
{
	struct EMSFunctionLibrary_eventSetActorSaveProperties_Parms
	{
		AActor* Actor;
		bool bSkipSave;
		bool bPersistent;
		bool bSkipTransform;
		ELoadedStateMod LoadedState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Actors" },
		{ "Comment", "/**\n\x09* Adds and Removes the common EMS property tags. A good place to call it is Begin Play. Should not be called from EMS Interface Events. \n\x09*\n\x09* @param bSkipSave -  The Actor is not saved at all.\n\x09* @param bPersistent - Loads this Actor independent of the level. Not valid for Player Actors. Does not save Transform.\n\x09* @param bSkipTransform - Skips saving/loading of the Actors transform. Spawned Actors appear at (0,0,0).\n\x09* @param LoadedState - Changes the loaded state. For example, an Actor might be loaded again without 'Full Reload' .\n\x09*/" },
		{ "DefaultToSelf", "Actor" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Adds and Removes the common EMS property tags. A good place to call it is Begin Play. Should not be called from EMS Interface Events.\n\n@param bSkipSave -  The Actor is not saved at all.\n@param bPersistent - Loads this Actor independent of the level. Not valid for Player Actors. Does not save Transform.\n@param bSkipTransform - Skips saving/loading of the Actors transform. Spawned Actors appear at (0,0,0).\n@param LoadedState - Changes the loaded state. For example, an Actor might be loaded again without 'Full Reload' ." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetActorSaveProperties constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_bSkipSave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipSave;
	static void NewProp_bPersistent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPersistent;
	static void NewProp_bSkipTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LoadedState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadedState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetActorSaveProperties constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetActorSaveProperties Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventSetActorSaveProperties_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bSkipSave_SetBit(void* Obj)
{
	((EMSFunctionLibrary_eventSetActorSaveProperties_Parms*)Obj)->bSkipSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bSkipSave = { "bSkipSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSFunctionLibrary_eventSetActorSaveProperties_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bSkipSave_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bPersistent_SetBit(void* Obj)
{
	((EMSFunctionLibrary_eventSetActorSaveProperties_Parms*)Obj)->bPersistent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bPersistent = { "bPersistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSFunctionLibrary_eventSetActorSaveProperties_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bPersistent_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bSkipTransform_SetBit(void* Obj)
{
	((EMSFunctionLibrary_eventSetActorSaveProperties_Parms*)Obj)->bSkipTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bSkipTransform = { "bSkipTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSFunctionLibrary_eventSetActorSaveProperties_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bSkipTransform_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_LoadedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_LoadedState = { "LoadedState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventSetActorSaveProperties_Parms, LoadedState), Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod, METADATA_PARAMS(0, nullptr) }; // 591343747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bSkipSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bPersistent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bSkipTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_LoadedState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_LoadedState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::PropPointers) < 2048);
// ********** End Function SetActorSaveProperties Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "SetActorSaveProperties", 	Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::EMSFunctionLibrary_eventSetActorSaveProperties_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::EMSFunctionLibrary_eventSetActorSaveProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execSetActorSaveProperties)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_UBOOL(Z_Param_bSkipSave);
	P_GET_UBOOL(Z_Param_bPersistent);
	P_GET_UBOOL(Z_Param_bSkipTransform);
	P_GET_ENUM(ELoadedStateMod,Z_Param_LoadedState);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEMSFunctionLibrary::SetActorSaveProperties(Z_Param_Actor,Z_Param_bSkipSave,Z_Param_bPersistent,Z_Param_bSkipTransform,ELoadedStateMod(Z_Param_LoadedState));
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function SetActorSaveProperties ************************

// ********** Begin Class UEMSFunctionLibrary Function SetCurrentSaveGameName **********************
struct Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics
{
	struct EMSFunctionLibrary_eventSetCurrentSaveGameName_Parms
	{
		UObject* WorldContextObject;
		FString SaveGameName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Slots" },
		{ "Comment", "/**\n\x09* Define a global save game name. If empty, it will use the default name from the Plugin Settings.\n\x09*\n\x09* @param SaveGameName - The name.\n\x09*/" },
		{ "DisplayName", "Set Current Save Slot" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Define a global save game name. If empty, it will use the default name from the Plugin Settings.\n\n@param SaveGameName - The name." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCurrentSaveGameName constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCurrentSaveGameName constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCurrentSaveGameName Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventSetCurrentSaveGameName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventSetCurrentSaveGameName_Parms, SaveGameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameName_MetaData), NewProp_SaveGameName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_SaveGameName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::PropPointers) < 2048);
// ********** End Function SetCurrentSaveGameName Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "SetCurrentSaveGameName", 	Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::EMSFunctionLibrary_eventSetCurrentSaveGameName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::EMSFunctionLibrary_eventSetCurrentSaveGameName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execSetCurrentSaveGameName)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveGameName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEMSFunctionLibrary::SetCurrentSaveGameName(Z_Param_WorldContextObject,Z_Param_SaveGameName);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function SetCurrentSaveGameName ************************

// ********** Begin Class UEMSFunctionLibrary Function SetCurrentSaveUserName **********************
struct Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics
{
	struct EMSFunctionLibrary_eventSetCurrentSaveUserName_Parms
	{
		UObject* WorldContextObject;
		FString UserName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Users" },
		{ "Comment", "/**\n\x09* Useful if you have a multi-user game. \n\x09* Puts all save game data into /UserSaveGames/UserName instead of /SaveGames/\n\x09* If the name is none, it just uses the /SaveGames/ folder.\n\x09*\n\x09* @param UserName - The desired name.\n\x09*/" },
		{ "DisplayName", "Set Current Save User" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Useful if you have a multi-user game.\nPuts all save game data into /UserSaveGames/UserName instead of /SaveGames/\nIf the name is none, it just uses the /SaveGames/ folder.\n\n@param UserName - The desired name." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCurrentSaveUserName constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCurrentSaveUserName constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCurrentSaveUserName Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventSetCurrentSaveUserName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventSetCurrentSaveUserName_Parms, UserName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserName_MetaData), NewProp_UserName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::NewProp_UserName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::PropPointers) < 2048);
// ********** End Function SetCurrentSaveUserName Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "SetCurrentSaveUserName", 	Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::EMSFunctionLibrary_eventSetCurrentSaveUserName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::EMSFunctionLibrary_eventSetCurrentSaveUserName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSFunctionLibrary::execSetCurrentSaveUserName)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEMSFunctionLibrary::SetCurrentSaveUserName(Z_Param_WorldContextObject,Z_Param_UserName);
	P_NATIVE_END;
}
// ********** End Class UEMSFunctionLibrary Function SetCurrentSaveUserName ************************

// ********** Begin Class UEMSFunctionLibrary ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEMSFunctionLibrary;
UClass* UEMSFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UEMSFunctionLibrary;
	if (!Z_Registration_Info_UClass_UEMSFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EMSFunctionLibrary"),
			Z_Registration_Info_UClass_UEMSFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUEMSFunctionLibrary,
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
	return Z_Registration_Info_UClass_UEMSFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UEMSFunctionLibrary_NoRegister()
{
	return UEMSFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEMSFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Common/Public/EMSFunctionLibrary.h" },
		{ "ModuleRelativePath", "Common/Public/EMSFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEMSFunctionLibrary constinit property declarations **********************
// ********** End Class UEMSFunctionLibrary constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearMultiLevelSave"), .Pointer = &UEMSFunctionLibrary::execClearMultiLevelSave },
		{ .NameUTF8 = UTF8TEXT("ClearWorldPartition"), .Pointer = &UEMSFunctionLibrary::execClearWorldPartition },
		{ .NameUTF8 = UTF8TEXT("DeleteAllSaveDataForSlot"), .Pointer = &UEMSFunctionLibrary::execDeleteAllSaveDataForSlot },
		{ .NameUTF8 = UTF8TEXT("DeleteCustomPlayerFile"), .Pointer = &UEMSFunctionLibrary::execDeleteCustomPlayerFile },
		{ .NameUTF8 = UTF8TEXT("DeleteCustomSave"), .Pointer = &UEMSFunctionLibrary::execDeleteCustomSave },
		{ .NameUTF8 = UTF8TEXT("DeleteSaveUser"), .Pointer = &UEMSFunctionLibrary::execDeleteSaveUser },
		{ .NameUTF8 = UTF8TEXT("DoesCustomSaveFileExist"), .Pointer = &UEMSFunctionLibrary::execDoesCustomSaveFileExist },
		{ .NameUTF8 = UTF8TEXT("DoesSaveSlotExist"), .Pointer = &UEMSFunctionLibrary::execDoesSaveSlotExist },
		{ .NameUTF8 = UTF8TEXT("ExportSaveThumbnail"), .Pointer = &UEMSFunctionLibrary::execExportSaveThumbnail },
		{ .NameUTF8 = UTF8TEXT("GetAllSaveUsers"), .Pointer = &UEMSFunctionLibrary::execGetAllSaveUsers },
		{ .NameUTF8 = UTF8TEXT("GetBackupName"), .Pointer = &UEMSFunctionLibrary::execGetBackupName },
		{ .NameUTF8 = UTF8TEXT("GetCurrentSaveUser"), .Pointer = &UEMSFunctionLibrary::execGetCurrentSaveUser },
		{ .NameUTF8 = UTF8TEXT("GetCustomSave"), .Pointer = &UEMSFunctionLibrary::execGetCustomSave },
		{ .NameUTF8 = UTF8TEXT("GetNamedSlotInfo"), .Pointer = &UEMSFunctionLibrary::execGetNamedSlotInfo },
		{ .NameUTF8 = UTF8TEXT("GetSlotInfoSaveGame"), .Pointer = &UEMSFunctionLibrary::execGetSlotInfoSaveGame },
		{ .NameUTF8 = UTF8TEXT("GetSortedSaveSlots"), .Pointer = &UEMSFunctionLibrary::execGetSortedSaveSlots },
		{ .NameUTF8 = UTF8TEXT("ImportSaveThumbnail"), .Pointer = &UEMSFunctionLibrary::execImportSaveThumbnail },
		{ .NameUTF8 = UTF8TEXT("IsLevelStreamingActive"), .Pointer = &UEMSFunctionLibrary::execIsLevelStreamingActive },
		{ .NameUTF8 = UTF8TEXT("IsLoadedState"), .Pointer = &UEMSFunctionLibrary::execIsLoadedState },
		{ .NameUTF8 = UTF8TEXT("IsSavingOrLoading"), .Pointer = &UEMSFunctionLibrary::execIsSavingOrLoading },
		{ .NameUTF8 = UTF8TEXT("IsWorldPartition"), .Pointer = &UEMSFunctionLibrary::execIsWorldPartition },
		{ .NameUTF8 = UTF8TEXT("LoadPlayerActorsCustom"), .Pointer = &UEMSFunctionLibrary::execLoadPlayerActorsCustom },
		{ .NameUTF8 = UTF8TEXT("LoadRawObject"), .Pointer = &UEMSFunctionLibrary::execLoadRawObject },
		{ .NameUTF8 = UTF8TEXT("ResetCustomSave"), .Pointer = &UEMSFunctionLibrary::execResetCustomSave },
		{ .NameUTF8 = UTF8TEXT("SaveCustom"), .Pointer = &UEMSFunctionLibrary::execSaveCustom },
		{ .NameUTF8 = UTF8TEXT("SavePlayerActorsCustom"), .Pointer = &UEMSFunctionLibrary::execSavePlayerActorsCustom },
		{ .NameUTF8 = UTF8TEXT("SaveRawObject"), .Pointer = &UEMSFunctionLibrary::execSaveRawObject },
		{ .NameUTF8 = UTF8TEXT("SetActorSaveProperties"), .Pointer = &UEMSFunctionLibrary::execSetActorSaveProperties },
		{ .NameUTF8 = UTF8TEXT("SetCurrentSaveGameName"), .Pointer = &UEMSFunctionLibrary::execSetCurrentSaveGameName },
		{ .NameUTF8 = UTF8TEXT("SetCurrentSaveUserName"), .Pointer = &UEMSFunctionLibrary::execSetCurrentSaveUserName },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave, "ClearMultiLevelSave" }, // 1012712657
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition, "ClearWorldPartition" }, // 898258080
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot, "DeleteAllSaveDataForSlot" }, // 2124287859
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomPlayerFile, "DeleteCustomPlayerFile" }, // 919565474
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave, "DeleteCustomSave" }, // 2566724664
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser, "DeleteSaveUser" }, // 3844637619
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_DoesCustomSaveFileExist, "DoesCustomSaveFileExist" }, // 1415170051
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist, "DoesSaveSlotExist" }, // 2230119249
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail, "ExportSaveThumbnail" }, // 4284453395
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers, "GetAllSaveUsers" }, // 1988930489
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_GetBackupName, "GetBackupName" }, // 3932459994
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_GetCurrentSaveUser, "GetCurrentSaveUser" }, // 3550519235
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave, "GetCustomSave" }, // 1712554825
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo, "GetNamedSlotInfo" }, // 4232487869
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame, "GetSlotInfoSaveGame" }, // 3925952704
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots, "GetSortedSaveSlots" }, // 3016995131
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail, "ImportSaveThumbnail" }, // 211785963
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_IsLevelStreamingActive, "IsLevelStreamingActive" }, // 1332254981
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_IsLoadedState, "IsLoadedState" }, // 730499767
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading, "IsSavingOrLoading" }, // 67479414
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition, "IsWorldPartition" }, // 2761939319
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_LoadPlayerActorsCustom, "LoadPlayerActorsCustom" }, // 2991284705
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject, "LoadRawObject" }, // 2722221498
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_ResetCustomSave, "ResetCustomSave" }, // 2309216267
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom, "SaveCustom" }, // 4082920493
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_SavePlayerActorsCustom, "SavePlayerActorsCustom" }, // 497094940
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject, "SaveRawObject" }, // 3993906000
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties, "SetActorSaveProperties" }, // 3247134444
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName, "SetCurrentSaveGameName" }, // 1850195629
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName, "SetCurrentSaveUserName" }, // 2898341780
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEMSFunctionLibrary_Statics
UObject* (*const Z_Construct_UClass_UEMSFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSFunctionLibrary_Statics::ClassParams = {
	&UEMSFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UEMSFunctionLibrary_Statics::Class_MetaDataParams)
};
void UEMSFunctionLibrary::StaticRegisterNativesUEMSFunctionLibrary()
{
	UClass* Class = UEMSFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UEMSFunctionLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UEMSFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UEMSFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSFunctionLibrary.OuterSingleton, Z_Construct_UClass_UEMSFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEMSFunctionLibrary.OuterSingleton;
}
UEMSFunctionLibrary::UEMSFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEMSFunctionLibrary);
UEMSFunctionLibrary::~UEMSFunctionLibrary() {}
// ********** End Class UEMSFunctionLibrary ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSFunctionLibrary_h__Script_EasyMultiSave_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEMSFunctionLibrary, UEMSFunctionLibrary::StaticClass, TEXT("UEMSFunctionLibrary"), &Z_Registration_Info_UClass_UEMSFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSFunctionLibrary), 4004992457U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSFunctionLibrary_h__Script_EasyMultiSave_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSFunctionLibrary_h__Script_EasyMultiSave_3334472028{
	TEXT("/Script/EasyMultiSave"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSFunctionLibrary_h__Script_EasyMultiSave_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSFunctionLibrary_h__Script_EasyMultiSave_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
