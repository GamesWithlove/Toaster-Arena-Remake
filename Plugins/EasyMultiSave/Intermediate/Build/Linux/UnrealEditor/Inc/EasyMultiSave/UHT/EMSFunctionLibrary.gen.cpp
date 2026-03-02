// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSFunctionLibrary.h"
#include "EasyMultiSave/Public/EMSData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSCustomSaveGame_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSFunctionLibrary();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSFunctionLibrary_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSInfoSaveGame_NoRegister();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FRawObjectSaveData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References
	DEFINE_FUNCTION(UEMSFunctionLibrary::execLoadRawObject)
	{
		P_GET_OBJECT(AActor,Z_Param_WorldContextActor);
		P_GET_STRUCT(FRawObjectSaveData,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UEMSFunctionLibrary::LoadRawObject(Z_Param_WorldContextActor,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execSaveRawObject)
	{
		P_GET_OBJECT(AActor,Z_Param_WorldContextActor);
		P_GET_STRUCT(FRawObjectSaveData,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEMSFunctionLibrary::SaveRawObject(Z_Param_WorldContextActor,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execClearWorldPartition)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEMSFunctionLibrary::ClearWorldPartition(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execIsWorldPartition)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEMSFunctionLibrary::IsWorldPartition(Z_Param_WorldContextObject);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UEMSFunctionLibrary::execSaveCustom)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UEMSCustomSaveGame,Z_Param_SaveGame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEMSFunctionLibrary::SaveCustom(Z_Param_WorldContextObject,Z_Param_SaveGame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execIsSavingOrLoading)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEMSFunctionLibrary::IsSavingOrLoading(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execSetActorSaveProperties)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bSkipSave);
		P_GET_UBOOL(Z_Param_bPersistent);
		P_GET_UBOOL(Z_Param_bSkipTransform);
		P_GET_ENUM(ELoadedStateMod,Z_Param_LoadedState);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEMSFunctionLibrary::SetActorSaveProperties(Z_Param_WorldContextObject,Z_Param_bSkipSave,Z_Param_bPersistent,Z_Param_bSkipTransform,ELoadedStateMod(Z_Param_LoadedState));
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UEMSFunctionLibrary::execImportSaveThumbnail)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveGameName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UEMSFunctionLibrary::ImportSaveThumbnail(Z_Param_WorldContextObject,Z_Param_SaveGameName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execClearMultiLevelSave)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEMSFunctionLibrary::ClearMultiLevelSave(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execDeleteAllSaveDataForSlot)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveGameName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEMSFunctionLibrary::DeleteAllSaveDataForSlot(Z_Param_WorldContextObject,Z_Param_SaveGameName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execDoesSaveSlotExist)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveGameName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEMSFunctionLibrary::DoesSaveSlotExist(Z_Param_WorldContextObject,Z_Param_SaveGameName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execGetAllSaveUsers)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UEMSFunctionLibrary::GetAllSaveUsers(Z_Param_WorldContextObject);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UEMSFunctionLibrary::execSetCurrentSaveUserName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEMSFunctionLibrary::SetCurrentSaveUserName(Z_Param_WorldContextObject,Z_Param_UserName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execGetSortedSaveSlots)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UEMSFunctionLibrary::GetSortedSaveSlots(Z_Param_WorldContextObject);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UEMSFunctionLibrary::execGetSlotInfoSaveGame)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SaveGameName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEMSInfoSaveGame**)Z_Param__Result=UEMSFunctionLibrary::GetSlotInfoSaveGame(Z_Param_WorldContextObject,Z_Param_Out_SaveGameName);
		P_NATIVE_END;
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
	void UEMSFunctionLibrary::StaticRegisterNativesUEMSFunctionLibrary()
	{
		UClass* Class = UEMSFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearMultiLevelSave", &UEMSFunctionLibrary::execClearMultiLevelSave },
			{ "ClearWorldPartition", &UEMSFunctionLibrary::execClearWorldPartition },
			{ "DeleteAllSaveDataForSlot", &UEMSFunctionLibrary::execDeleteAllSaveDataForSlot },
			{ "DeleteCustomSave", &UEMSFunctionLibrary::execDeleteCustomSave },
			{ "DeleteSaveUser", &UEMSFunctionLibrary::execDeleteSaveUser },
			{ "DoesSaveSlotExist", &UEMSFunctionLibrary::execDoesSaveSlotExist },
			{ "ExportSaveThumbnail", &UEMSFunctionLibrary::execExportSaveThumbnail },
			{ "GetAllSaveUsers", &UEMSFunctionLibrary::execGetAllSaveUsers },
			{ "GetCustomSave", &UEMSFunctionLibrary::execGetCustomSave },
			{ "GetNamedSlotInfo", &UEMSFunctionLibrary::execGetNamedSlotInfo },
			{ "GetSlotInfoSaveGame", &UEMSFunctionLibrary::execGetSlotInfoSaveGame },
			{ "GetSortedSaveSlots", &UEMSFunctionLibrary::execGetSortedSaveSlots },
			{ "ImportSaveThumbnail", &UEMSFunctionLibrary::execImportSaveThumbnail },
			{ "IsSavingOrLoading", &UEMSFunctionLibrary::execIsSavingOrLoading },
			{ "IsWorldPartition", &UEMSFunctionLibrary::execIsWorldPartition },
			{ "LoadRawObject", &UEMSFunctionLibrary::execLoadRawObject },
			{ "SaveCustom", &UEMSFunctionLibrary::execSaveCustom },
			{ "SaveRawObject", &UEMSFunctionLibrary::execSaveRawObject },
			{ "SetActorSaveProperties", &UEMSFunctionLibrary::execSetActorSaveProperties },
			{ "SetCurrentSaveGameName", &UEMSFunctionLibrary::execSetCurrentSaveGameName },
			{ "SetCurrentSaveUserName", &UEMSFunctionLibrary::execSetCurrentSaveUserName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics
	{
		struct EMSFunctionLibrary_eventClearMultiLevelSave_Parms
		{
			UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventClearMultiLevelSave_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Multi Level" },
		{ "Comment", "/**\n\x09* Deletes the cache for Multi-Level Saving. \n\x09* All save data from currently unloaded levels is removed from memory. \n\x09*\n\x09*/" },
		{ "DisplayName", "Clear Multi Level Save" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Deletes the cache for Multi-Level Saving.\nAll save data from currently unloaded levels is removed from memory." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "ClearMultiLevelSave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::EMSFunctionLibrary_eventClearMultiLevelSave_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics
	{
		struct EMSFunctionLibrary_eventClearWorldPartition_Parms
		{
			UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventClearWorldPartition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | World Partition" },
		{ "Comment", "/**\n\x09* Clears all World Partition Save Data. \n\x09* This can be useful for nonlinear streaming such as teleporting the player. \n\x09*/" },
		{ "DisplayName", "Clear World Partition Save" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Clears all World Partition Save Data.\nThis can be useful for nonlinear streaming such as teleporting the player." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "ClearWorldPartition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::EMSFunctionLibrary_eventClearWorldPartition_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics
	{
		struct EMSFunctionLibrary_eventDeleteAllSaveDataForSlot_Parms
		{
			UObject* WorldContextObject;
			FString SaveGameName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventDeleteAllSaveDataForSlot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_SaveGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventDeleteAllSaveDataForSlot_Parms, SaveGameName), METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_SaveGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_SaveGameName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_SaveGameName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Slots" },
		{ "Comment", "/**\n\x09* Deletes all data and directories for a save game.\n\x09*\n\x09* @param SaveGameName - The name of the save game to delete.\n\x09*/" },
		{ "DisplayName", "Delete Save Slot" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Deletes all data and directories for a save game.\n\n@param SaveGameName - The name of the save game to delete." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "DeleteAllSaveDataForSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::EMSFunctionLibrary_eventDeleteAllSaveDataForSlot_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics
	{
		struct EMSFunctionLibrary_eventDeleteCustomSave_Parms
		{
			UObject* WorldContextObject;
			UEMSCustomSaveGame* SaveGame;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventDeleteCustomSave_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventDeleteCustomSave_Parms, SaveGame), Z_Construct_UClass_UEMSCustomSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::NewProp_SaveGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Custom" },
		{ "Comment", "/**\n\x09* Deletes the desired EmsCustomSaveGame object.\n\x09*/" },
		{ "DisplayName", "Delete Custom Save Object" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Deletes the desired EmsCustomSaveGame object." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "DeleteCustomSave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::EMSFunctionLibrary_eventDeleteCustomSave_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics
	{
		struct EMSFunctionLibrary_eventDeleteSaveUser_Parms
		{
			UObject* WorldContextObject;
			FString UserName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventDeleteSaveUser_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::NewProp_UserName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventDeleteSaveUser_Parms, UserName), METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::NewProp_UserName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::NewProp_UserName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Multi User" },
		{ "Comment", "/**\n\x09* Fully removes all save files of a specific user.\n\x09*\n\x09* @param UserName - The user to delete.\n\x09*/" },
		{ "DisplayName", "Delete Save User" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Fully removes all save files of a specific user.\n\n@param UserName - The user to delete." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "DeleteSaveUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::EMSFunctionLibrary_eventDeleteSaveUser_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics
	{
		struct EMSFunctionLibrary_eventDoesSaveSlotExist_Parms
		{
			UObject* WorldContextObject;
			FString SaveGameName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventDoesSaveSlotExist_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_SaveGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventDoesSaveSlotExist_Parms, SaveGameName), METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_SaveGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_SaveGameName_MetaData)) };
	void Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EMSFunctionLibrary_eventDoesSaveSlotExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EMSFunctionLibrary_eventDoesSaveSlotExist_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_SaveGameName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Slots" },
		{ "Comment", "/**\n\x09* Check if a specific save slot exists. \n\n\x09* @param SaveGameName - The save slot to look for.\n\x09* @return - If the slot is valid.\n\x09*/" },
		{ "DisplayName", "Does Save Slot Exist" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Check if a specific save slot exists.\n\n@param SaveGameName - The save slot to look for.\n@return - If the slot is valid." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "DoesSaveSlotExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::EMSFunctionLibrary_eventDoesSaveSlotExist_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics
	{
		struct EMSFunctionLibrary_eventExportSaveThumbnail_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			FString SaveGameName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventExportSaveThumbnail_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventExportSaveThumbnail_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_SaveGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventExportSaveThumbnail_Parms, SaveGameName), METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_SaveGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_SaveGameName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_TextureRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_SaveGameName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Thumbnail" },
		{ "Comment", "/**\n\x09* Saves a thumbnail from a render target texture as .png to the save game folder.\n\x09*\n\x09* @param TextureRenderTarget - The texture target from the scene capture 2d source.\n\x09* @param SaveGameName - The name of the Savegame/Slot that is tied to the thumbnail.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Saves a thumbnail from a render target texture as .png to the save game folder.\n\n@param TextureRenderTarget - The texture target from the scene capture 2d source.\n@param SaveGameName - The name of the Savegame/Slot that is tied to the thumbnail." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "ExportSaveThumbnail", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::EMSFunctionLibrary_eventExportSaveThumbnail_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics
	{
		struct EMSFunctionLibrary_eventGetAllSaveUsers_Parms
		{
			UObject* WorldContextObject;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventGetAllSaveUsers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventGetAllSaveUsers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Multi User" },
		{ "Comment", "/**\n\x09* Returns an array of all available save users that were added using 'Set Current Save User'. Sorted by name.\n\x09*\n\x09* @return - The array of available save users.\n\x09*/" },
		{ "DisplayName", "Get Save Users" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Returns an array of all available save users that were added using 'Set Current Save User'. Sorted by name.\n\n@return - The array of available save users." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "GetAllSaveUsers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::EMSFunctionLibrary_eventGetAllSaveUsers_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics
	{
		struct EMSFunctionLibrary_eventGetCustomSave_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<UEMSCustomSaveGame>  SaveGameClass;
			FString SaveSlot;
			FString FileName;
			UEMSCustomSaveGame* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_SaveGameClass;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlot;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventGetCustomSave_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_SaveGameClass = { "SaveGameClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventGetCustomSave_Parms, SaveGameClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEMSCustomSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_SaveSlot = { "SaveSlot", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventGetCustomSave_Parms, SaveSlot), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventGetCustomSave_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventGetCustomSave_Parms, ReturnValue), Z_Construct_UClass_UEMSCustomSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_SaveGameClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_SaveSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SaveSlot, FileName" },
		{ "Category", "Easy Multi Save | Custom" },
		{ "Comment", "/**\n\x09* Gets the desired EmsCustomSaveGame object.\n\x09*\n\x09* @param SaveGameClass - The class of the save object.\n\x09* @param SaveSlot - Optional name of the Slot you want to get the Custom Save from. Must be valid! If empty, will use the Current Slot.\n\x09* @param FileName - Optional custom file name. Allows for multiple Custom Save Objects from one Class. If Empty, will use the default file name from the Class.\n\x09* @return - The custom save object.\n\x09*/" },
		{ "DeterminesOutputType", "SaveGameClass" },
		{ "DisplayName", "Get Custom Save Object" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Gets the desired EmsCustomSaveGame object.\n\n@param SaveGameClass - The class of the save object.\n@param SaveSlot - Optional name of the Slot you want to get the Custom Save from. Must be valid! If empty, will use the Current Slot.\n@param FileName - Optional custom file name. Allows for multiple Custom Save Objects from one Class. If Empty, will use the default file name from the Class.\n@return - The custom save object." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "GetCustomSave", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::EMSFunctionLibrary_eventGetCustomSave_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics
	{
		struct EMSFunctionLibrary_eventGetNamedSlotInfo_Parms
		{
			UObject* WorldContextObject;
			FString SaveGameName;
			UEMSInfoSaveGame* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventGetNamedSlotInfo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_SaveGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventGetNamedSlotInfo_Parms, SaveGameName), METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_SaveGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_SaveGameName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventGetNamedSlotInfo_Parms, ReturnValue), Z_Construct_UClass_UEMSInfoSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_SaveGameName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Slots" },
		{ "Comment", "/**\n\x09* Get a save game slot by name.\n\n\x09* @param SaveGameName - The slot name you want to get the info from.\n\x09* @return - The desired slot info. Will return the current slot if SaveGameName is empty.\n\x09*/" },
		{ "DisplayName", "Get Named Save Slot" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Get a save game slot by name.\n\n@param SaveGameName - The slot name you want to get the info from.\n@return - The desired slot info. Will return the current slot if SaveGameName is empty." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "GetNamedSlotInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::EMSFunctionLibrary_eventGetNamedSlotInfo_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics
	{
		struct EMSFunctionLibrary_eventGetSlotInfoSaveGame_Parms
		{
			UObject* WorldContextObject;
			FString SaveGameName;
			UEMSInfoSaveGame* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventGetSlotInfoSaveGame_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventGetSlotInfoSaveGame_Parms, SaveGameName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventGetSlotInfoSaveGame_Parms, ReturnValue), Z_Construct_UClass_UEMSInfoSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_SaveGameName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Slots" },
		{ "Comment", "/**\n\x09* Get the current save game slot defined by 'Set Current Save Slot'.\n\n\x09* @param SaveGameName - Convenient reference, so you don't nee to use the SlotInfo struct.\n\x09* @return - The current slot info and save game name.\n\x09*/" },
		{ "DisplayName", "Get Current Save Slot" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Get the current save game slot defined by 'Set Current Save Slot'.\n\n@param SaveGameName - Convenient reference, so you don't nee to use the SlotInfo struct.\n@return - The current slot info and save game name." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "GetSlotInfoSaveGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::EMSFunctionLibrary_eventGetSlotInfoSaveGame_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics
	{
		struct EMSFunctionLibrary_eventGetSortedSaveSlots_Parms
		{
			UObject* WorldContextObject;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventGetSortedSaveSlots_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventGetSortedSaveSlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Slots" },
		{ "Comment", "/**\n\x09* Loads the array of available save games / slots, sorted by their time of saving.\n\x09*\n\x09* @return - The array of available save game slots.\n\x09*/" },
		{ "DisplayName", "Get All Save Slots" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Loads the array of available save games / slots, sorted by their time of saving.\n\n@return - The array of available save game slots." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "GetSortedSaveSlots", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::EMSFunctionLibrary_eventGetSortedSaveSlots_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics
	{
		struct EMSFunctionLibrary_eventImportSaveThumbnail_Parms
		{
			UObject* WorldContextObject;
			FString SaveGameName;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventImportSaveThumbnail_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_SaveGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventImportSaveThumbnail_Parms, SaveGameName), METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_SaveGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_SaveGameName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventImportSaveThumbnail_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_SaveGameName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Thumbnail" },
		{ "Comment", "/**\n\x09* Imports a thumbnail as .png from the save game folder.\n\x09*\n\x09* @param SaveGameName - The name of the Savegame/Slot that is tied to the thumbnail.\n\x09* @return - The loaded thumbnail as Texture2D.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Imports a thumbnail as .png from the save game folder.\n\n@param SaveGameName - The name of the Savegame/Slot that is tied to the thumbnail.\n@return - The loaded thumbnail as Texture2D." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "ImportSaveThumbnail", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::EMSFunctionLibrary_eventImportSaveThumbnail_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics
	{
		struct EMSFunctionLibrary_eventIsSavingOrLoading_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventIsSavingOrLoading_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EMSFunctionLibrary_eventIsSavingOrLoading_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EMSFunctionLibrary_eventIsSavingOrLoading_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Actors" },
		{ "Comment", "/**\n\x09* Checks if SaveGameActors or LoadGameActors is currently active.\n\x09* \n\x09* @return - True if SaveGameActors or LoadGameActors is currently active.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Checks if SaveGameActors or LoadGameActors is currently active.\n\n@return - True if SaveGameActors or LoadGameActors is currently active." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "IsSavingOrLoading", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::EMSFunctionLibrary_eventIsSavingOrLoading_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics
	{
		struct EMSFunctionLibrary_eventIsWorldPartition_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventIsWorldPartition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EMSFunctionLibrary_eventIsWorldPartition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EMSFunctionLibrary_eventIsWorldPartition_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | World Partition" },
		{ "Comment", "/**\n\x09* If the current Persistent Level is using World Partition with EMS.\n\x09* \n\x09* @return - If the World uses World Partition.\n\x09*/" },
		{ "DisplayName", "Is World Partition Save" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "If the current Persistent Level is using World Partition with EMS.\n\n@return - If the World uses World Partition." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "IsWorldPartition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::EMSFunctionLibrary_eventIsWorldPartition_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics
	{
		struct EMSFunctionLibrary_eventLoadRawObject_Parms
		{
			AActor* WorldContextActor;
			FRawObjectSaveData Data;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::NewProp_WorldContextActor = { "WorldContextActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventLoadRawObject_Parms, WorldContextActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventLoadRawObject_Parms, Data), Z_Construct_UScriptStruct_FRawObjectSaveData, METADATA_PARAMS(nullptr, 0) }; // 674332204
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventLoadRawObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::NewProp_WorldContextActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Raw Objects" },
		{ "Comment", "/**\n\x09* Retrieves a specific saved UObject from this Actor on demand.\n\x09* This function should be called after the Actor has finished loading, like from the Actor Loaded event.\n\x09* Note that the Objects are not automatically re-created, so they must be valid when you access the data.\n\x09*\n\x09* @return - The serialized UObject if successful. Returns an invalid result if the retrieval fails or if the Object cannot be found by its ID.\n\x09*/" },
		{ "DisplayName", "Load Raw Object Data" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Retrieves a specific saved UObject from this Actor on demand.\nThis function should be called after the Actor has finished loading, like from the Actor Loaded event.\nNote that the Objects are not automatically re-created, so they must be valid when you access the data.\n\n@return - The serialized UObject if successful. Returns an invalid result if the retrieval fails or if the Object cannot be found by its ID." },
		{ "WorldContext", "WorldContextActor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "LoadRawObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::EMSFunctionLibrary_eventLoadRawObject_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics
	{
		struct EMSFunctionLibrary_eventSaveCustom_Parms
		{
			UObject* WorldContextObject;
			UEMSCustomSaveGame* SaveGame;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventSaveCustom_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventSaveCustom_Parms, SaveGame), Z_Construct_UClass_UEMSCustomSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EMSFunctionLibrary_eventSaveCustom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EMSFunctionLibrary_eventSaveCustom_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::NewProp_SaveGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SaveGame" },
		{ "Category", "Easy Multi Save | Custom" },
		{ "Comment", "/**\n\x09* Saves all or a specific Custom Save Object.\n\x09* When the SaveGame input is empty, it saves all available custom save objects automatically.\n\x09*\n\x09* @param SaveGame - Optional input save object. You can connect a 'Get Custom Save Object' to it.\n\x09* @return - If the object was saved.\n\x09*/" },
		{ "DisplayName", "Save Custom Objects" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Saves all or a specific Custom Save Object.\nWhen the SaveGame input is empty, it saves all available custom save objects automatically.\n\n@param SaveGame - Optional input save object. You can connect a 'Get Custom Save Object' to it.\n@return - If the object was saved." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "SaveCustom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::EMSFunctionLibrary_eventSaveCustom_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics
	{
		struct EMSFunctionLibrary_eventSaveRawObject_Parms
		{
			AActor* WorldContextActor;
			FRawObjectSaveData Data;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::NewProp_WorldContextActor = { "WorldContextActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventSaveRawObject_Parms, WorldContextActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventSaveRawObject_Parms, Data), Z_Construct_UScriptStruct_FRawObjectSaveData, METADATA_PARAMS(nullptr, 0) }; // 674332204
	void Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EMSFunctionLibrary_eventSaveRawObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EMSFunctionLibrary_eventSaveRawObject_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::NewProp_WorldContextActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Raw Objects" },
		{ "Comment", "/**\n\x09* Adds any UObject to the Actor's save data. This can include other Actors, Subsystems, and similar objects.\n\x09* The provided ID must be unique and can be a GUID converted to a string or any other unique identifier.\n\x09* The data is written alongside the Actor when it gets saved.\n\x09*\n\x09* @return - True if the UObject was successfully serialized, false otherwise.\n\x09*/" },
		{ "DisplayName", "Save Raw Object Data" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Adds any UObject to the Actor's save data. This can include other Actors, Subsystems, and similar objects.\nThe provided ID must be unique and can be a GUID converted to a string or any other unique identifier.\nThe data is written alongside the Actor when it gets saved.\n\n@return - True if the UObject was successfully serialized, false otherwise." },
		{ "WorldContext", "WorldContextActor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "SaveRawObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::EMSFunctionLibrary_eventSaveRawObject_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics
	{
		struct EMSFunctionLibrary_eventSetActorSaveProperties_Parms
		{
			UObject* WorldContextObject;
			bool bSkipSave;
			bool bPersistent;
			bool bSkipTransform;
			ELoadedStateMod LoadedState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bSkipSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipSave;
		static void NewProp_bPersistent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPersistent;
		static void NewProp_bSkipTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipTransform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LoadedState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadedState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventSetActorSaveProperties_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bSkipSave_SetBit(void* Obj)
	{
		((EMSFunctionLibrary_eventSetActorSaveProperties_Parms*)Obj)->bSkipSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bSkipSave = { "bSkipSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EMSFunctionLibrary_eventSetActorSaveProperties_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bSkipSave_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bPersistent_SetBit(void* Obj)
	{
		((EMSFunctionLibrary_eventSetActorSaveProperties_Parms*)Obj)->bPersistent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bPersistent = { "bPersistent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EMSFunctionLibrary_eventSetActorSaveProperties_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bPersistent_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bSkipTransform_SetBit(void* Obj)
	{
		((EMSFunctionLibrary_eventSetActorSaveProperties_Parms*)Obj)->bSkipTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bSkipTransform = { "bSkipTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EMSFunctionLibrary_eventSetActorSaveProperties_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bSkipTransform_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_LoadedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_LoadedState = { "LoadedState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventSetActorSaveProperties_Parms, LoadedState), Z_Construct_UEnum_EasyMultiSave_ELoadedStateMod, METADATA_PARAMS(nullptr, 0) }; // 1903958542
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bSkipSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bPersistent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_bSkipTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_LoadedState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::NewProp_LoadedState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Actors" },
		{ "Comment", "/**\n\x09* Adds and Removes the common EMS property tags. A good place to call it is Begin Play. Should not be called from EMS Interface Events. \n\x09*\n\x09* @param bSkipSave -  The Actor is not saved at all.\n\x09* @param bPersistent - Loads this Actor independent of the level. Not valid for Player Actors. Does not save Transform.\n\x09* @param bSkipTransform - Skips saving/loading of the Actors transform. Spawned Actors appear at (0,0,0).\n\x09* @param LoadedState - Changes the loaded state. For example, an Actor might be loaded again without 'Full Reload' .\n\x09*/" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Adds and Removes the common EMS property tags. A good place to call it is Begin Play. Should not be called from EMS Interface Events.\n\n@param bSkipSave -  The Actor is not saved at all.\n@param bPersistent - Loads this Actor independent of the level. Not valid for Player Actors. Does not save Transform.\n@param bSkipTransform - Skips saving/loading of the Actors transform. Spawned Actors appear at (0,0,0).\n@param LoadedState - Changes the loaded state. For example, an Actor might be loaded again without 'Full Reload' ." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "SetActorSaveProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::EMSFunctionLibrary_eventSetActorSaveProperties_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics
	{
		struct EMSFunctionLibrary_eventSetCurrentSaveGameName_Parms
		{
			UObject* WorldContextObject;
			FString SaveGameName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventSetCurrentSaveGameName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_SaveGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventSetCurrentSaveGameName_Parms, SaveGameName), METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_SaveGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_SaveGameName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_SaveGameName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Slots" },
		{ "Comment", "/**\n\x09* Define a global save game name. If empty, it will use the default name from the Plugin Settings.\n\x09*\n\x09* @param SaveGameName - The name.\n\x09*/" },
		{ "DisplayName", "Set Current Save Slot" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Define a global save game name. If empty, it will use the default name from the Plugin Settings.\n\n@param SaveGameName - The name." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "SetCurrentSaveGameName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::EMSFunctionLibrary_eventSetCurrentSaveGameName_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics
	{
		struct EMSFunctionLibrary_eventSetCurrentSaveUserName_Parms
		{
			UObject* WorldContextObject;
			FString UserName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventSetCurrentSaveUserName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::NewProp_UserName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSFunctionLibrary_eventSetCurrentSaveUserName_Parms, UserName), METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::NewProp_UserName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::NewProp_UserName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Multi User" },
		{ "Comment", "/**\n\x09* Useful if you have a multi-user game. \n\x09* Puts all save game data into /UserSaveGames/UserName instead of /SaveGames/\n\x09* If the name is none, it just uses the /SaveGames/ folder.\n\x09*\n\x09* @param UserName - The desired name.\n\x09*/" },
		{ "DisplayName", "Set Current Save User" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Useful if you have a multi-user game.\nPuts all save game data into /UserSaveGames/UserName instead of /SaveGames/\nIf the name is none, it just uses the /SaveGames/ folder.\n\n@param UserName - The desired name." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "SetCurrentSaveUserName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::EMSFunctionLibrary_eventSetCurrentSaveUserName_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEMSFunctionLibrary);
	UClass* Z_Construct_UClass_UEMSFunctionLibrary_NoRegister()
	{
		return UEMSFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEMSFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEMSFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEMSFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_ClearMultiLevelSave, "ClearMultiLevelSave" }, // 2732446090
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_ClearWorldPartition, "ClearWorldPartition" }, // 588558597
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot, "DeleteAllSaveDataForSlot" }, // 934066885
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_DeleteCustomSave, "DeleteCustomSave" }, // 135690030
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_DeleteSaveUser, "DeleteSaveUser" }, // 3793714695
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_DoesSaveSlotExist, "DoesSaveSlotExist" }, // 1291541290
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail, "ExportSaveThumbnail" }, // 961119236
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_GetAllSaveUsers, "GetAllSaveUsers" }, // 1852132700
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_GetCustomSave, "GetCustomSave" }, // 1924183739
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo, "GetNamedSlotInfo" }, // 4226105924
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame, "GetSlotInfoSaveGame" }, // 743964171
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots, "GetSortedSaveSlots" }, // 791612416
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail, "ImportSaveThumbnail" }, // 3473588155
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_IsSavingOrLoading, "IsSavingOrLoading" }, // 277868527
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_IsWorldPartition, "IsWorldPartition" }, // 982993039
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_LoadRawObject, "LoadRawObject" }, // 2900106490
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_SaveCustom, "SaveCustom" }, // 2333423136
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_SaveRawObject, "SaveRawObject" }, // 3678993571
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_SetActorSaveProperties, "SetActorSaveProperties" }, // 1820534949
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName, "SetCurrentSaveGameName" }, // 257883743
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveUserName, "SetCurrentSaveUserName" }, // 4272375491
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EMSFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEMSFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSFunctionLibrary>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UEMSFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEMSFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UEMSFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSFunctionLibrary.OuterSingleton, Z_Construct_UClass_UEMSFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEMSFunctionLibrary.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UClass* StaticClass<UEMSFunctionLibrary>()
	{
		return UEMSFunctionLibrary::StaticClass();
	}
	UEMSFunctionLibrary::UEMSFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSFunctionLibrary);
	UEMSFunctionLibrary::~UEMSFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEMSFunctionLibrary, UEMSFunctionLibrary::StaticClass, TEXT("UEMSFunctionLibrary"), &Z_Registration_Info_UClass_UEMSFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSFunctionLibrary), 530996026U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_3162864914(TEXT("/Script/EasyMultiSave"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
