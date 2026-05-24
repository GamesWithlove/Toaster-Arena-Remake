// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplaySystemBPLibrary.h"
#include "ReplayStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeReplaySystemBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UDeleteReplayObject_NoRegister();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UGetSavedReplaysObject_NoRegister();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UGoToTimeObject_NoRegister();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_URenameReplayObject_NoRegister();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UReplayDataObject_NoRegister();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UReplaySystemBPLibrary();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UReplaySystemBPLibrary_NoRegister();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_URequestEventsObject_NoRegister();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSettings();
UPackage* Z_Construct_UPackage__Script_ReplaySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UReplaySystemBPLibrary Function AddEventToActiveReplay *******************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics
{
	struct ReplaySystemBPLibrary_eventAddEventToActiveReplay_Parms
	{
		UObject* WorldContextObject;
		FString EventName;
		FString Group;
		UReplayDataObject* DataObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds or Updates said event in the replay currently being recorded\n\x09 * @param WorldContextObject \n\x09 * @param EventName The name of the event\n\x09 * @param Group The group this event belongs to \n\x09 * @param DataObject optional object containing extra data\n\x09 * @return \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds or Updates said event in the replay currently being recorded\n@param WorldContextObject\n@param EventName The name of the event\n@param Group The group this event belongs to\n@param DataObject optional object containing extra data\n@return" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddEventToActiveReplay constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Group;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddEventToActiveReplay constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddEventToActiveReplay Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventAddEventToActiveReplay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventAddEventToActiveReplay_Parms, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventAddEventToActiveReplay_Parms, Group), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Group_MetaData), NewProp_Group_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::NewProp_DataObject = { "DataObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventAddEventToActiveReplay_Parms, DataObject), Z_Construct_UClass_UReplayDataObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReplaySystemBPLibrary_eventAddEventToActiveReplay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReplaySystemBPLibrary_eventAddEventToActiveReplay_Parms), &Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::NewProp_DataObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::PropPointers) < 2048);
// ********** End Function AddEventToActiveReplay Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "AddEventToActiveReplay", 	Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::ReplaySystemBPLibrary_eventAddEventToActiveReplay_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::ReplaySystemBPLibrary_eventAddEventToActiveReplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execAddEventToActiveReplay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Group);
	P_GET_OBJECT(UReplayDataObject,Z_Param_DataObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UReplaySystemBPLibrary::AddEventToActiveReplay(Z_Param_WorldContextObject,Z_Param_EventName,Z_Param_Group,Z_Param_DataObject);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function AddEventToActiveReplay *********************

// ********** Begin Class UReplaySystemBPLibrary Function CreateReplayDataObject *******************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_CreateReplayDataObject_Statics
{
	struct ReplaySystemBPLibrary_eventCreateReplayDataObject_Parms
	{
		UReplayDataObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*  Creates a data object for storing event meta data for a replay\n\x09* @return \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a data object for storing event meta data for a replay\n@return" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CreateReplayDataObject constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateReplayDataObject constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateReplayDataObject Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_CreateReplayDataObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventCreateReplayDataObject_Parms, ReturnValue), Z_Construct_UClass_UReplayDataObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_CreateReplayDataObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_CreateReplayDataObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_CreateReplayDataObject_Statics::PropPointers) < 2048);
// ********** End Function CreateReplayDataObject Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_CreateReplayDataObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "CreateReplayDataObject", 	Z_Construct_UFunction_UReplaySystemBPLibrary_CreateReplayDataObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_CreateReplayDataObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_CreateReplayDataObject_Statics::ReplaySystemBPLibrary_eventCreateReplayDataObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_CreateReplayDataObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_CreateReplayDataObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_CreateReplayDataObject_Statics::ReplaySystemBPLibrary_eventCreateReplayDataObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_CreateReplayDataObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_CreateReplayDataObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execCreateReplayDataObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UReplayDataObject**)Z_Param__Result=UReplaySystemBPLibrary::CreateReplayDataObject();
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function CreateReplayDataObject *********************

// ********** Begin Class UReplaySystemBPLibrary Function DeleteReplay *****************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay_Statics
{
	struct ReplaySystemBPLibrary_eventDeleteReplay_Parms
	{
		UObject* WorldContextObject;
		FString ReplayName;
		UDeleteReplayObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Delete a replay\n\x09 * @param WorldContextObject \n\x09 * @param ReplayName The name the replay is saved as on disk\n\x09 * @return \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delete a replay\n@param WorldContextObject\n@param ReplayName The name the replay is saved as on disk\n@return" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteReplay constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplayName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteReplay constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteReplay Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventDeleteReplay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventDeleteReplay_Parms, ReplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayName_MetaData), NewProp_ReplayName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventDeleteReplay_Parms, ReturnValue), Z_Construct_UClass_UDeleteReplayObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay_Statics::NewProp_ReplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay_Statics::PropPointers) < 2048);
// ********** End Function DeleteReplay Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "DeleteReplay", 	Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay_Statics::ReplaySystemBPLibrary_eventDeleteReplay_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay_Statics::ReplaySystemBPLibrary_eventDeleteReplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execDeleteReplay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_ReplayName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDeleteReplayObject**)Z_Param__Result=UReplaySystemBPLibrary::DeleteReplay(Z_Param_WorldContextObject,Z_Param_ReplayName);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function DeleteReplay *******************************

// ********** Begin Class UReplaySystemBPLibrary Function GetActiveReplayName **********************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_GetActiveReplayName_Statics
{
	struct ReplaySystemBPLibrary_eventGetActiveReplayName_Parms
	{
		UObject* WorldContextObject;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Gets the name on disk/memory of the replay currently playing or being recorded\n\x09 * @param WorldContextObject \n\x09 * @return \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the name on disk/memory of the replay currently playing or being recorded\n@param WorldContextObject\n@return" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveReplayName constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveReplayName constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveReplayName Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetActiveReplayName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGetActiveReplayName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetActiveReplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGetActiveReplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_GetActiveReplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GetActiveReplayName_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GetActiveReplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetActiveReplayName_Statics::PropPointers) < 2048);
// ********** End Function GetActiveReplayName Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetActiveReplayName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "GetActiveReplayName", 	Z_Construct_UFunction_UReplaySystemBPLibrary_GetActiveReplayName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetActiveReplayName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GetActiveReplayName_Statics::ReplaySystemBPLibrary_eventGetActiveReplayName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetActiveReplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_GetActiveReplayName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GetActiveReplayName_Statics::ReplaySystemBPLibrary_eventGetActiveReplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_GetActiveReplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_GetActiveReplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execGetActiveReplayName)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UReplaySystemBPLibrary::GetActiveReplayName(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function GetActiveReplayName ************************

// ********** Begin Class UReplaySystemBPLibrary Function GetCurrentReplayTime *********************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_GetCurrentReplayTime_Statics
{
	struct ReplaySystemBPLibrary_eventGetCurrentReplayTime_Parms
	{
		UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem|Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Get the current time in seconds of the replay\n\x09 * @param WorldContextObject \n\x09 * @return \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current time in seconds of the replay\n@param WorldContextObject\n@return" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentReplayTime constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentReplayTime constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentReplayTime Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetCurrentReplayTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGetCurrentReplayTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetCurrentReplayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGetCurrentReplayTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_GetCurrentReplayTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GetCurrentReplayTime_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GetCurrentReplayTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetCurrentReplayTime_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentReplayTime Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetCurrentReplayTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "GetCurrentReplayTime", 	Z_Construct_UFunction_UReplaySystemBPLibrary_GetCurrentReplayTime_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetCurrentReplayTime_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GetCurrentReplayTime_Statics::ReplaySystemBPLibrary_eventGetCurrentReplayTime_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetCurrentReplayTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_GetCurrentReplayTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GetCurrentReplayTime_Statics::ReplaySystemBPLibrary_eventGetCurrentReplayTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_GetCurrentReplayTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_GetCurrentReplayTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execGetCurrentReplayTime)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UReplaySystemBPLibrary::GetCurrentReplayTime(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function GetCurrentReplayTime ***********************

// ********** Begin Class UReplaySystemBPLibrary Function GetDemoDriver ****************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_GetDemoDriver_Statics
{
	struct ReplaySystemBPLibrary_eventGetDemoDriver_Parms
	{
		UObject* WorldContextObject;
		UDemoNetDriver* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDemoDriver constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDemoDriver constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDemoDriver Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetDemoDriver_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGetDemoDriver_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetDemoDriver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGetDemoDriver_Parms, ReturnValue), Z_Construct_UClass_UDemoNetDriver_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_GetDemoDriver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GetDemoDriver_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GetDemoDriver_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetDemoDriver_Statics::PropPointers) < 2048);
// ********** End Function GetDemoDriver Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetDemoDriver_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "GetDemoDriver", 	Z_Construct_UFunction_UReplaySystemBPLibrary_GetDemoDriver_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetDemoDriver_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GetDemoDriver_Statics::ReplaySystemBPLibrary_eventGetDemoDriver_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetDemoDriver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_GetDemoDriver_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GetDemoDriver_Statics::ReplaySystemBPLibrary_eventGetDemoDriver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_GetDemoDriver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_GetDemoDriver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execGetDemoDriver)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDemoNetDriver**)Z_Param__Result=UReplaySystemBPLibrary::GetDemoDriver(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function GetDemoDriver ******************************

// ********** Begin Class UReplaySystemBPLibrary Function GetMaxRecordHz ***************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_GetMaxRecordHz_Statics
{
	struct ReplaySystemBPLibrary_eventGetMaxRecordHz_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get the maximum number of frames recorded per second by the replay\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the maximum number of frames recorded per second by the replay" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetMaxRecordHz constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaxRecordHz constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaxRecordHz Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetMaxRecordHz_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGetMaxRecordHz_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_GetMaxRecordHz_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GetMaxRecordHz_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetMaxRecordHz_Statics::PropPointers) < 2048);
// ********** End Function GetMaxRecordHz Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetMaxRecordHz_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "GetMaxRecordHz", 	Z_Construct_UFunction_UReplaySystemBPLibrary_GetMaxRecordHz_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetMaxRecordHz_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GetMaxRecordHz_Statics::ReplaySystemBPLibrary_eventGetMaxRecordHz_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetMaxRecordHz_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_GetMaxRecordHz_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GetMaxRecordHz_Statics::ReplaySystemBPLibrary_eventGetMaxRecordHz_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_GetMaxRecordHz()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_GetMaxRecordHz_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execGetMaxRecordHz)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UReplaySystemBPLibrary::GetMaxRecordHz();
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function GetMaxRecordHz *****************************

// ********** Begin Class UReplaySystemBPLibrary Function GetPlaybackSpeed *************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_GetPlaybackSpeed_Statics
{
	struct ReplaySystemBPLibrary_eventGetPlaybackSpeed_Parms
	{
		UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem|Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Get the playback speed of the replay\n\x09 * @param WorldContextObject \n\x09 * @return \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the playback speed of the replay\n@param WorldContextObject\n@return" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlaybackSpeed constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlaybackSpeed constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlaybackSpeed Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetPlaybackSpeed_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGetPlaybackSpeed_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetPlaybackSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGetPlaybackSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_GetPlaybackSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GetPlaybackSpeed_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GetPlaybackSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetPlaybackSpeed_Statics::PropPointers) < 2048);
// ********** End Function GetPlaybackSpeed Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetPlaybackSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "GetPlaybackSpeed", 	Z_Construct_UFunction_UReplaySystemBPLibrary_GetPlaybackSpeed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetPlaybackSpeed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GetPlaybackSpeed_Statics::ReplaySystemBPLibrary_eventGetPlaybackSpeed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetPlaybackSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_GetPlaybackSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GetPlaybackSpeed_Statics::ReplaySystemBPLibrary_eventGetPlaybackSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_GetPlaybackSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_GetPlaybackSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execGetPlaybackSpeed)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UReplaySystemBPLibrary::GetPlaybackSpeed(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function GetPlaybackSpeed ***************************

// ********** Begin Class UReplaySystemBPLibrary Function GetReplayLength **************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplayLength_Statics
{
	struct ReplaySystemBPLibrary_eventGetReplayLength_Parms
	{
		UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem|Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Get the total length in seconds of the replay currently playing or being recorded\n\x09 * @param WorldContextObject \n\x09 * @return \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the total length in seconds of the replay currently playing or being recorded\n@param WorldContextObject\n@return" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetReplayLength constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetReplayLength constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetReplayLength Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplayLength_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGetReplayLength_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplayLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGetReplayLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplayLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplayLength_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplayLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplayLength_Statics::PropPointers) < 2048);
// ********** End Function GetReplayLength Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplayLength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "GetReplayLength", 	Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplayLength_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplayLength_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplayLength_Statics::ReplaySystemBPLibrary_eventGetReplayLength_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplayLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplayLength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplayLength_Statics::ReplaySystemBPLibrary_eventGetReplayLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplayLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplayLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execGetReplayLength)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UReplaySystemBPLibrary::GetReplayLength(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function GetReplayLength ****************************

// ********** Begin Class UReplaySystemBPLibrary Function GetReplaySavePath ************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplaySavePath_Statics
{
	struct ReplaySystemBPLibrary_eventGetReplaySavePath_Parms
	{
		UObject* WorldContextObject;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Gets the current path where replays are stored\n\x09 * @param WorldContextObject \n\x09 * @return Path\n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current path where replays are stored\n@param WorldContextObject\n@return Path" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetReplaySavePath constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetReplaySavePath constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetReplaySavePath Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplaySavePath_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGetReplaySavePath_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplaySavePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGetReplaySavePath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplaySavePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplaySavePath_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplaySavePath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplaySavePath_Statics::PropPointers) < 2048);
// ********** End Function GetReplaySavePath Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplaySavePath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "GetReplaySavePath", 	Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplaySavePath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplaySavePath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplaySavePath_Statics::ReplaySystemBPLibrary_eventGetReplaySavePath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplaySavePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplaySavePath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplaySavePath_Statics::ReplaySystemBPLibrary_eventGetReplaySavePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplaySavePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplaySavePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execGetReplaySavePath)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UReplaySystemBPLibrary::GetReplaySavePath(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function GetReplaySavePath **************************

// ********** Begin Class UReplaySystemBPLibrary Function GetSavedReplays **************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_GetSavedReplays_Statics
{
	struct ReplaySystemBPLibrary_eventGetSavedReplays_Parms
	{
		UObject* WorldContextObject;
		UGetSavedReplaysObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Get all the saved replays\n\x09 * @param WorldContextObject \n\x09 * @return \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all the saved replays\n@param WorldContextObject\n@return" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSavedReplays constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSavedReplays constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSavedReplays Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetSavedReplays_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGetSavedReplays_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetSavedReplays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGetSavedReplays_Parms, ReturnValue), Z_Construct_UClass_UGetSavedReplaysObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_GetSavedReplays_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GetSavedReplays_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GetSavedReplays_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetSavedReplays_Statics::PropPointers) < 2048);
// ********** End Function GetSavedReplays Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_GetSavedReplays_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "GetSavedReplays", 	Z_Construct_UFunction_UReplaySystemBPLibrary_GetSavedReplays_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetSavedReplays_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GetSavedReplays_Statics::ReplaySystemBPLibrary_eventGetSavedReplays_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GetSavedReplays_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_GetSavedReplays_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GetSavedReplays_Statics::ReplaySystemBPLibrary_eventGetSavedReplays_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_GetSavedReplays()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_GetSavedReplays_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execGetSavedReplays)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGetSavedReplaysObject**)Z_Param__Result=UReplaySystemBPLibrary::GetSavedReplays(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function GetSavedReplays ****************************

// ********** Begin Class UReplaySystemBPLibrary Function GoToSpecificTime *************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics
{
	struct ReplaySystemBPLibrary_eventGoToSpecificTime_Parms
	{
		UObject* WorldContextObject;
		float TimeToGoTo;
		bool bRetainCurrentPauseState;
		UGoToTimeObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem|Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Goto a specific time in the replay\n\x09 * @param WorldContextObject \n\x09 * @param TimeToGoTo Time in seconds to goto\n\x09 * @param bRetainCurrentPauseState Use this on a need basis as it can cause some physics issues\n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Goto a specific time in the replay\n@param WorldContextObject\n@param TimeToGoTo Time in seconds to goto\n@param bRetainCurrentPauseState Use this on a need basis as it can cause some physics issues" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GoToSpecificTime constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToGoTo;
	static void NewProp_bRetainCurrentPauseState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetainCurrentPauseState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GoToSpecificTime constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GoToSpecificTime Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGoToSpecificTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::NewProp_TimeToGoTo = { "TimeToGoTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGoToSpecificTime_Parms, TimeToGoTo), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::NewProp_bRetainCurrentPauseState_SetBit(void* Obj)
{
	((ReplaySystemBPLibrary_eventGoToSpecificTime_Parms*)Obj)->bRetainCurrentPauseState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::NewProp_bRetainCurrentPauseState = { "bRetainCurrentPauseState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReplaySystemBPLibrary_eventGoToSpecificTime_Parms), &Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::NewProp_bRetainCurrentPauseState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventGoToSpecificTime_Parms, ReturnValue), Z_Construct_UClass_UGoToTimeObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::NewProp_TimeToGoTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::NewProp_bRetainCurrentPauseState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::PropPointers) < 2048);
// ********** End Function GoToSpecificTime Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "GoToSpecificTime", 	Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::ReplaySystemBPLibrary_eventGoToSpecificTime_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::ReplaySystemBPLibrary_eventGoToSpecificTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execGoToSpecificTime)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToGoTo);
	P_GET_UBOOL(Z_Param_bRetainCurrentPauseState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGoToTimeObject**)Z_Param__Result=UReplaySystemBPLibrary::GoToSpecificTime(Z_Param_WorldContextObject,Z_Param_TimeToGoTo,Z_Param_bRetainCurrentPauseState);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function GoToSpecificTime ***************************

// ********** Begin Class UReplaySystemBPLibrary Function IsPlayingReplay **************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay_Statics
{
	struct ReplaySystemBPLibrary_eventIsPlayingReplay_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  returns true if a replay is being played\n\x09 * @param WorldContextObject \n\x09 * @return \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "returns true if a replay is being played\n@param WorldContextObject\n@return" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsPlayingReplay constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPlayingReplay constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPlayingReplay Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventIsPlayingReplay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReplaySystemBPLibrary_eventIsPlayingReplay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReplaySystemBPLibrary_eventIsPlayingReplay_Parms), &Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay_Statics::PropPointers) < 2048);
// ********** End Function IsPlayingReplay Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "IsPlayingReplay", 	Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay_Statics::ReplaySystemBPLibrary_eventIsPlayingReplay_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay_Statics::ReplaySystemBPLibrary_eventIsPlayingReplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execIsPlayingReplay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UReplaySystemBPLibrary::IsPlayingReplay(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function IsPlayingReplay ****************************

// ********** Begin Class UReplaySystemBPLibrary Function IsRecordingReplay ************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay_Statics
{
	struct ReplaySystemBPLibrary_eventIsRecordingReplay_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Finds out if a replay is being recorded\n\x09 * @param WorldContextObject \n\x09 * @return \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds out if a replay is being recorded\n@param WorldContextObject\n@return" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsRecordingReplay constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsRecordingReplay constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsRecordingReplay Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventIsRecordingReplay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReplaySystemBPLibrary_eventIsRecordingReplay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReplaySystemBPLibrary_eventIsRecordingReplay_Parms), &Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay_Statics::PropPointers) < 2048);
// ********** End Function IsRecordingReplay Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "IsRecordingReplay", 	Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay_Statics::ReplaySystemBPLibrary_eventIsRecordingReplay_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay_Statics::ReplaySystemBPLibrary_eventIsRecordingReplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execIsRecordingReplay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UReplaySystemBPLibrary::IsRecordingReplay(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function IsRecordingReplay **************************

// ********** Begin Class UReplaySystemBPLibrary Function IsReplayPlaybackPaused *******************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused_Statics
{
	struct ReplaySystemBPLibrary_eventIsReplayPlaybackPaused_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns true of the replay has been paused\n\x09 * @param WorldContextObject \n\x09 * @return \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true of the replay has been paused\n@param WorldContextObject\n@return" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsReplayPlaybackPaused constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsReplayPlaybackPaused constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsReplayPlaybackPaused Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventIsReplayPlaybackPaused_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReplaySystemBPLibrary_eventIsReplayPlaybackPaused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReplaySystemBPLibrary_eventIsReplayPlaybackPaused_Parms), &Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused_Statics::PropPointers) < 2048);
// ********** End Function IsReplayPlaybackPaused Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "IsReplayPlaybackPaused", 	Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused_Statics::ReplaySystemBPLibrary_eventIsReplayPlaybackPaused_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused_Statics::ReplaySystemBPLibrary_eventIsReplayPlaybackPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execIsReplayPlaybackPaused)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UReplaySystemBPLibrary::IsReplayPlaybackPaused(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function IsReplayPlaybackPaused *********************

// ********** Begin Class UReplaySystemBPLibrary Function MsToSeconds ******************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_MsToSeconds_Statics
{
	struct ReplaySystemBPLibrary_eventMsToSeconds_Parms
	{
		int32 MS;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Helper function to convert milliseconds to seconds\n\x09 * @param MS \n\x09 * @return \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper function to convert milliseconds to seconds\n@param MS\n@return" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MsToSeconds constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MsToSeconds constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MsToSeconds Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_MsToSeconds_Statics::NewProp_MS = { "MS", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventMsToSeconds_Parms, MS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MS_MetaData), NewProp_MS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_MsToSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventMsToSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_MsToSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_MsToSeconds_Statics::NewProp_MS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_MsToSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_MsToSeconds_Statics::PropPointers) < 2048);
// ********** End Function MsToSeconds Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_MsToSeconds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "MsToSeconds", 	Z_Construct_UFunction_UReplaySystemBPLibrary_MsToSeconds_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_MsToSeconds_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_MsToSeconds_Statics::ReplaySystemBPLibrary_eventMsToSeconds_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_MsToSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_MsToSeconds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_MsToSeconds_Statics::ReplaySystemBPLibrary_eventMsToSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_MsToSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_MsToSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execMsToSeconds)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UReplaySystemBPLibrary::MsToSeconds(Z_Param_MS);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function MsToSeconds ********************************

// ********** Begin Class UReplaySystemBPLibrary Function PausePlayback ****************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_PausePlayback_Statics
{
	struct ReplaySystemBPLibrary_eventPausePlayback_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem|Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Pause the replay playback\n\x09 * @param WorldContextObject \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pause the replay playback\n@param WorldContextObject" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PausePlayback constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PausePlayback constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PausePlayback Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_PausePlayback_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventPausePlayback_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_PausePlayback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_PausePlayback_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_PausePlayback_Statics::PropPointers) < 2048);
// ********** End Function PausePlayback Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_PausePlayback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "PausePlayback", 	Z_Construct_UFunction_UReplaySystemBPLibrary_PausePlayback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_PausePlayback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_PausePlayback_Statics::ReplaySystemBPLibrary_eventPausePlayback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_PausePlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_PausePlayback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_PausePlayback_Statics::ReplaySystemBPLibrary_eventPausePlayback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_PausePlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_PausePlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execPausePlayback)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReplaySystemBPLibrary::PausePlayback(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function PausePlayback ******************************

// ********** Begin Class UReplaySystemBPLibrary Function PlayRecordedReplay ***********************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics
{
	struct ReplaySystemBPLibrary_eventPlayRecordedReplay_Parms
	{
		UObject* WorldContextObject;
		FString ReplayName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem|Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Play a recorded replay\n\x09 * @param WorldContextObject \n\x09 * @param ReplayName\n\x09 * @return \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Play a recorded replay\n@param WorldContextObject\n@param ReplayName\n@return" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayRecordedReplay constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplayName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayRecordedReplay constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayRecordedReplay Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventPlayRecordedReplay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventPlayRecordedReplay_Parms, ReplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayName_MetaData), NewProp_ReplayName_MetaData) };
void Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReplaySystemBPLibrary_eventPlayRecordedReplay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReplaySystemBPLibrary_eventPlayRecordedReplay_Parms), &Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::NewProp_ReplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::PropPointers) < 2048);
// ********** End Function PlayRecordedReplay Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "PlayRecordedReplay", 	Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::ReplaySystemBPLibrary_eventPlayRecordedReplay_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::ReplaySystemBPLibrary_eventPlayRecordedReplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execPlayRecordedReplay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_ReplayName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UReplaySystemBPLibrary::PlayRecordedReplay(Z_Param_WorldContextObject,Z_Param_ReplayName);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function PlayRecordedReplay *************************

// ********** Begin Class UReplaySystemBPLibrary Function RecordReplay *****************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay_Statics
{
	struct ReplaySystemBPLibrary_eventRecordReplay_Parms
	{
		UObject* WorldContextObject;
		FString ReplayName;
		FString ReplayFriendlyName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem|Recording" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Starts recording a replay\n\x09 * @param WorldContextObject \n\x09 * @param ReplayName The name to save the replay as on disk (Used internally)\n\x09 * @param ReplayFriendlyName The Ui friendly name of the replay (Used by you or users)\n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts recording a replay\n@param WorldContextObject\n@param ReplayName The name to save the replay as on disk (Used internally)\n@param ReplayFriendlyName The Ui friendly name of the replay (Used by you or users)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayFriendlyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RecordReplay constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplayFriendlyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RecordReplay constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RecordReplay Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRecordReplay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRecordReplay_Parms, ReplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayName_MetaData), NewProp_ReplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay_Statics::NewProp_ReplayFriendlyName = { "ReplayFriendlyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRecordReplay_Parms, ReplayFriendlyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayFriendlyName_MetaData), NewProp_ReplayFriendlyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay_Statics::NewProp_ReplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay_Statics::NewProp_ReplayFriendlyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay_Statics::PropPointers) < 2048);
// ********** End Function RecordReplay Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "RecordReplay", 	Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay_Statics::ReplaySystemBPLibrary_eventRecordReplay_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay_Statics::ReplaySystemBPLibrary_eventRecordReplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execRecordReplay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_ReplayName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ReplayFriendlyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReplaySystemBPLibrary::RecordReplay(Z_Param_WorldContextObject,Z_Param_ReplayName,Z_Param_ReplayFriendlyName);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function RecordReplay *******************************

// ********** Begin Class UReplaySystemBPLibrary Function RenameReplay *****************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics
{
	struct ReplaySystemBPLibrary_eventRenameReplay_Parms
	{
		UObject* WorldContextObject;
		FString ReplayName;
		FString NewReplayName;
		int32 UserIndex;
		URenameReplayObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Changes the name a replay is saved as on the disk\n\x09 * @param WorldContextObject \n\x09 * @param ReplayName The current name on disk of this replay\n\x09 * @param NewReplayName New name to save as on disk\n\x09 * @param UserIndex \n\x09 * @return \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the name a replay is saved as on the disk\n@param WorldContextObject\n@param ReplayName The current name on disk of this replay\n@param NewReplayName New name to save as on disk\n@param UserIndex\n@return" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RenameReplay constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewReplayName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RenameReplay constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RenameReplay Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRenameReplay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRenameReplay_Parms, ReplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayName_MetaData), NewProp_ReplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::NewProp_NewReplayName = { "NewReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRenameReplay_Parms, NewReplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewReplayName_MetaData), NewProp_NewReplayName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRenameReplay_Parms, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRenameReplay_Parms, ReturnValue), Z_Construct_UClass_URenameReplayObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::NewProp_ReplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::NewProp_NewReplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::PropPointers) < 2048);
// ********** End Function RenameReplay Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "RenameReplay", 	Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::ReplaySystemBPLibrary_eventRenameReplay_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::ReplaySystemBPLibrary_eventRenameReplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execRenameReplay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_ReplayName);
	P_GET_PROPERTY(FStrProperty,Z_Param_NewReplayName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URenameReplayObject**)Z_Param__Result=UReplaySystemBPLibrary::RenameReplay(Z_Param_WorldContextObject,Z_Param_ReplayName,Z_Param_NewReplayName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function RenameReplay *******************************

// ********** Begin Class UReplaySystemBPLibrary Function RenameReplayFriendly *********************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics
{
	struct ReplaySystemBPLibrary_eventRenameReplayFriendly_Parms
	{
		UObject* WorldContextObject;
		FString ReplayName;
		FString NewFriendlyReplayName;
		int32 UserIndex;
		URenameReplayObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Changes the friendly name of a replay\n\x09 * @param WorldContextObject \n\x09 * @param ReplayName The current name on disk of this replay\n\x09 * @param NewFriendlyReplayName New friendly to give it\n\x09 * @param UserIndex \n\x09 * @return \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the friendly name of a replay\n@param WorldContextObject\n@param ReplayName The current name on disk of this replay\n@param NewFriendlyReplayName New friendly to give it\n@param UserIndex\n@return" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewFriendlyReplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RenameReplayFriendly constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewFriendlyReplayName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RenameReplayFriendly constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RenameReplayFriendly Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRenameReplayFriendly_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::NewProp_ReplayName = { "ReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRenameReplayFriendly_Parms, ReplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayName_MetaData), NewProp_ReplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::NewProp_NewFriendlyReplayName = { "NewFriendlyReplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRenameReplayFriendly_Parms, NewFriendlyReplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFriendlyReplayName_MetaData), NewProp_NewFriendlyReplayName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRenameReplayFriendly_Parms, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRenameReplayFriendly_Parms, ReturnValue), Z_Construct_UClass_URenameReplayObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::NewProp_ReplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::NewProp_NewFriendlyReplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::PropPointers) < 2048);
// ********** End Function RenameReplayFriendly Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "RenameReplayFriendly", 	Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::ReplaySystemBPLibrary_eventRenameReplayFriendly_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::ReplaySystemBPLibrary_eventRenameReplayFriendly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execRenameReplayFriendly)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_ReplayName);
	P_GET_PROPERTY(FStrProperty,Z_Param_NewFriendlyReplayName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URenameReplayObject**)Z_Param__Result=UReplaySystemBPLibrary::RenameReplayFriendly(Z_Param_WorldContextObject,Z_Param_ReplayName,Z_Param_NewFriendlyReplayName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function RenameReplayFriendly ***********************

// ********** Begin Class UReplaySystemBPLibrary Function RequestActiveReplayEvents ****************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics
{
	struct ReplaySystemBPLibrary_eventRequestActiveReplayEvents_Parms
	{
		UObject* WorldContextObject;
		FString Group;
		int32 UserIndex;
		URequestEventsObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Gets the Events of the replay currently playing\n\x09 * @param WorldContextObject \n\x09 * @param Group The group name\n\x09 * @param UserIndex \n\x09 * @return \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Events of the replay currently playing\n@param WorldContextObject\n@param Group The group name\n@param UserIndex\n@return" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RequestActiveReplayEvents constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Group;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestActiveReplayEvents constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestActiveReplayEvents Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRequestActiveReplayEvents_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRequestActiveReplayEvents_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRequestActiveReplayEvents_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRequestActiveReplayEvents_Parms, ReturnValue), Z_Construct_UClass_URequestEventsObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::PropPointers) < 2048);
// ********** End Function RequestActiveReplayEvents Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "RequestActiveReplayEvents", 	Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::ReplaySystemBPLibrary_eventRequestActiveReplayEvents_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::ReplaySystemBPLibrary_eventRequestActiveReplayEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execRequestActiveReplayEvents)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Group);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URequestEventsObject**)Z_Param__Result=UReplaySystemBPLibrary::RequestActiveReplayEvents(Z_Param_WorldContextObject,Z_Param_Group,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function RequestActiveReplayEvents ******************

// ********** Begin Class UReplaySystemBPLibrary Function RestartReplayPlayback ********************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_RestartReplayPlayback_Statics
{
	struct ReplaySystemBPLibrary_eventRestartReplayPlayback_Parms
	{
		UObject* WorldContextObject;
		UGoToTimeObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem|Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Restart the currently playing replay\n\x09 * @param WorldContextObject \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Restart the currently playing replay\n@param WorldContextObject" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RestartReplayPlayback constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RestartReplayPlayback constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RestartReplayPlayback Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RestartReplayPlayback_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRestartReplayPlayback_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_RestartReplayPlayback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventRestartReplayPlayback_Parms, ReturnValue), Z_Construct_UClass_UGoToTimeObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_RestartReplayPlayback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RestartReplayPlayback_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_RestartReplayPlayback_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_RestartReplayPlayback_Statics::PropPointers) < 2048);
// ********** End Function RestartReplayPlayback Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_RestartReplayPlayback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "RestartReplayPlayback", 	Z_Construct_UFunction_UReplaySystemBPLibrary_RestartReplayPlayback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_RestartReplayPlayback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_RestartReplayPlayback_Statics::ReplaySystemBPLibrary_eventRestartReplayPlayback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_RestartReplayPlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_RestartReplayPlayback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_RestartReplayPlayback_Statics::ReplaySystemBPLibrary_eventRestartReplayPlayback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_RestartReplayPlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_RestartReplayPlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execRestartReplayPlayback)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGoToTimeObject**)Z_Param__Result=UReplaySystemBPLibrary::RestartReplayPlayback(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function RestartReplayPlayback **********************

// ********** Begin Class UReplaySystemBPLibrary Function ResumePlayback ***************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_ResumePlayback_Statics
{
	struct ReplaySystemBPLibrary_eventResumePlayback_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem|Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Resume the replay playback\n\x09 * @param WorldContextObject \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resume the replay playback\n@param WorldContextObject" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ResumePlayback constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResumePlayback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResumePlayback Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_ResumePlayback_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventResumePlayback_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_ResumePlayback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_ResumePlayback_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_ResumePlayback_Statics::PropPointers) < 2048);
// ********** End Function ResumePlayback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_ResumePlayback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "ResumePlayback", 	Z_Construct_UFunction_UReplaySystemBPLibrary_ResumePlayback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_ResumePlayback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_ResumePlayback_Statics::ReplaySystemBPLibrary_eventResumePlayback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_ResumePlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_ResumePlayback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_ResumePlayback_Statics::ReplaySystemBPLibrary_eventResumePlayback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_ResumePlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_ResumePlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execResumePlayback)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReplaySystemBPLibrary::ResumePlayback(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function ResumePlayback *****************************

// ********** Begin Class UReplaySystemBPLibrary Function SetMaxRecordHz ***************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_SetMaxRecordHz_Statics
{
	struct ReplaySystemBPLibrary_eventSetMaxRecordHz_Parms
	{
		UObject* WorldContextObject;
		float Hz;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *Set the maximum number of frames recorded per second by the replay\n\x09 */" },
#endif
		{ "CPP_Default_Hz", "8.000000" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the maximum number of frames recorded per second by the replay" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetMaxRecordHz constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Hz;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMaxRecordHz constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMaxRecordHz Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_SetMaxRecordHz_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventSetMaxRecordHz_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_SetMaxRecordHz_Statics::NewProp_Hz = { "Hz", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventSetMaxRecordHz_Parms, Hz), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_SetMaxRecordHz_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_SetMaxRecordHz_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_SetMaxRecordHz_Statics::NewProp_Hz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_SetMaxRecordHz_Statics::PropPointers) < 2048);
// ********** End Function SetMaxRecordHz Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_SetMaxRecordHz_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "SetMaxRecordHz", 	Z_Construct_UFunction_UReplaySystemBPLibrary_SetMaxRecordHz_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_SetMaxRecordHz_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_SetMaxRecordHz_Statics::ReplaySystemBPLibrary_eventSetMaxRecordHz_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_SetMaxRecordHz_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_SetMaxRecordHz_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_SetMaxRecordHz_Statics::ReplaySystemBPLibrary_eventSetMaxRecordHz_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_SetMaxRecordHz()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_SetMaxRecordHz_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execSetMaxRecordHz)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Hz);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReplaySystemBPLibrary::SetMaxRecordHz(Z_Param_WorldContextObject,Z_Param_Hz);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function SetMaxRecordHz *****************************

// ********** Begin Class UReplaySystemBPLibrary Function SetPlaybackSpeed *************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_SetPlaybackSpeed_Statics
{
	struct ReplaySystemBPLibrary_eventSetPlaybackSpeed_Parms
	{
		UObject* WorldContextObject;
		float Speed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem|Playback" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Sets the Playback speed of the replay\n\x09 * @param WorldContextObject Set the playback speed of the replay\n\x09 * @param Speed Like time dilation 0.1,1,10\n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the Playback speed of the replay\n@param WorldContextObject Set the playback speed of the replay\n@param Speed Like time dilation 0.1,1,10" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetPlaybackSpeed constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPlaybackSpeed constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPlaybackSpeed Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_SetPlaybackSpeed_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventSetPlaybackSpeed_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_SetPlaybackSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventSetPlaybackSpeed_Parms, Speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_SetPlaybackSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_SetPlaybackSpeed_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_SetPlaybackSpeed_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_SetPlaybackSpeed_Statics::PropPointers) < 2048);
// ********** End Function SetPlaybackSpeed Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_SetPlaybackSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "SetPlaybackSpeed", 	Z_Construct_UFunction_UReplaySystemBPLibrary_SetPlaybackSpeed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_SetPlaybackSpeed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_SetPlaybackSpeed_Statics::ReplaySystemBPLibrary_eventSetPlaybackSpeed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_SetPlaybackSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_SetPlaybackSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_SetPlaybackSpeed_Statics::ReplaySystemBPLibrary_eventSetPlaybackSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_SetPlaybackSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_SetPlaybackSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execSetPlaybackSpeed)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReplaySystemBPLibrary::SetPlaybackSpeed(Z_Param_WorldContextObject,Z_Param_Speed);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function SetPlaybackSpeed ***************************

// ********** Begin Class UReplaySystemBPLibrary Function SetReplaySavePath ************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_SetReplaySavePath_Statics
{
	struct ReplaySystemBPLibrary_eventSetReplaySavePath_Parms
	{
		UObject* WorldContextObject;
		FString Path;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Sets the path for all replays (Does not copy existing replays over)\n\x09 * @param WorldContextObject \n\x09 * @param Path New path\n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the path for all replays (Does not copy existing replays over)\n@param WorldContextObject\n@param Path New path" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetReplaySavePath constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetReplaySavePath constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetReplaySavePath Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_SetReplaySavePath_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventSetReplaySavePath_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_SetReplaySavePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventSetReplaySavePath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_SetReplaySavePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_SetReplaySavePath_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_SetReplaySavePath_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_SetReplaySavePath_Statics::PropPointers) < 2048);
// ********** End Function SetReplaySavePath Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_SetReplaySavePath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "SetReplaySavePath", 	Z_Construct_UFunction_UReplaySystemBPLibrary_SetReplaySavePath_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_SetReplaySavePath_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_SetReplaySavePath_Statics::ReplaySystemBPLibrary_eventSetReplaySavePath_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_SetReplaySavePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_SetReplaySavePath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_SetReplaySavePath_Statics::ReplaySystemBPLibrary_eventSetReplaySavePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_SetReplaySavePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_SetReplaySavePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execSetReplaySavePath)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReplaySystemBPLibrary::SetReplaySavePath(Z_Param_WorldContextObject,Z_Param_Path);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function SetReplaySavePath **************************

// ********** Begin Class UReplaySystemBPLibrary Function SpectateActor ****************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor_Statics
{
	struct ReplaySystemBPLibrary_eventSpectateActor_Parms
	{
		UObject* WorldContextObject;
		AActor* Actor;
		FBlendSettings BlendSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Just sets the view target of the controller to the specified actor\n\x09 * @param WorldContextObject\n\x09 * @param Actor The pawn to spectate\n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Just sets the view target of the controller to the specified actor\n@param WorldContextObject\n@param Actor The pawn to spectate" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SpectateActor constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpectateActor constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpectateActor Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventSpectateActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventSpectateActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor_Statics::NewProp_BlendSettings = { "BlendSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventSpectateActor_Parms, BlendSettings), Z_Construct_UScriptStruct_FBlendSettings, METADATA_PARAMS(0, nullptr) }; // 3342006139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor_Statics::NewProp_BlendSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor_Statics::PropPointers) < 2048);
// ********** End Function SpectateActor Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "SpectateActor", 	Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor_Statics::ReplaySystemBPLibrary_eventSpectateActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor_Statics::ReplaySystemBPLibrary_eventSpectateActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execSpectateActor)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FBlendSettings,Z_Param_BlendSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReplaySystemBPLibrary::SpectateActor(Z_Param_WorldContextObject,Z_Param_Actor,Z_Param_BlendSettings);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function SpectateActor ******************************

// ********** Begin Class UReplaySystemBPLibrary Function StopRecordingReplay **********************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_StopRecordingReplay_Statics
{
	struct ReplaySystemBPLibrary_eventStopRecordingReplay_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem|Recording" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stop recording a replay\n\x09 * @param WorldContextObject \n\x09 * @return \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop recording a replay\n@param WorldContextObject\n@return" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StopRecordingReplay constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopRecordingReplay constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopRecordingReplay Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_StopRecordingReplay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventStopRecordingReplay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_StopRecordingReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_StopRecordingReplay_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_StopRecordingReplay_Statics::PropPointers) < 2048);
// ********** End Function StopRecordingReplay Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_StopRecordingReplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "StopRecordingReplay", 	Z_Construct_UFunction_UReplaySystemBPLibrary_StopRecordingReplay_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_StopRecordingReplay_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_StopRecordingReplay_Statics::ReplaySystemBPLibrary_eventStopRecordingReplay_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_StopRecordingReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_StopRecordingReplay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_StopRecordingReplay_Statics::ReplaySystemBPLibrary_eventStopRecordingReplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_StopRecordingReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_StopRecordingReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execStopRecordingReplay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReplaySystemBPLibrary::StopRecordingReplay(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function StopRecordingReplay ************************

// ********** Begin Class UReplaySystemBPLibrary Function StopSpectating ***************************
struct Z_Construct_UFunction_UReplaySystemBPLibrary_StopSpectating_Statics
{
	struct ReplaySystemBPLibrary_eventStopSpectating_Parms
	{
		UObject* WorldContextObject;
		FBlendSettings BlendSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ReplaySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Just sets the view target of the controller back to the possessed pawn\n\x09 * @param WorldContextObject \n\x09 * @param BlendSettings \n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Just sets the view target of the controller back to the possessed pawn\n@param WorldContextObject\n@param BlendSettings" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StopSpectating constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopSpectating constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopSpectating Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_StopSpectating_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventStopSpectating_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReplaySystemBPLibrary_StopSpectating_Statics::NewProp_BlendSettings = { "BlendSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplaySystemBPLibrary_eventStopSpectating_Parms, BlendSettings), Z_Construct_UScriptStruct_FBlendSettings, METADATA_PARAMS(0, nullptr) }; // 3342006139
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySystemBPLibrary_StopSpectating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_StopSpectating_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySystemBPLibrary_StopSpectating_Statics::NewProp_BlendSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_StopSpectating_Statics::PropPointers) < 2048);
// ********** End Function StopSpectating Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySystemBPLibrary_StopSpectating_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplaySystemBPLibrary, nullptr, "StopSpectating", 	Z_Construct_UFunction_UReplaySystemBPLibrary_StopSpectating_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_StopSpectating_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_StopSpectating_Statics::ReplaySystemBPLibrary_eventStopSpectating_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySystemBPLibrary_StopSpectating_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplaySystemBPLibrary_StopSpectating_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplaySystemBPLibrary_StopSpectating_Statics::ReplaySystemBPLibrary_eventStopSpectating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplaySystemBPLibrary_StopSpectating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySystemBPLibrary_StopSpectating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplaySystemBPLibrary::execStopSpectating)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FBlendSettings,Z_Param_BlendSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UReplaySystemBPLibrary::StopSpectating(Z_Param_WorldContextObject,Z_Param_BlendSettings);
	P_NATIVE_END;
}
// ********** End Class UReplaySystemBPLibrary Function StopSpectating *****************************

// ********** Begin Class UReplaySystemBPLibrary ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UReplaySystemBPLibrary;
UClass* UReplaySystemBPLibrary::GetPrivateStaticClass()
{
	using TClass = UReplaySystemBPLibrary;
	if (!Z_Registration_Info_UClass_UReplaySystemBPLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ReplaySystemBPLibrary"),
			Z_Registration_Info_UClass_UReplaySystemBPLibrary.InnerSingleton,
			StaticRegisterNativesUReplaySystemBPLibrary,
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
	return Z_Registration_Info_UClass_UReplaySystemBPLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UReplaySystemBPLibrary_NoRegister()
{
	return UReplaySystemBPLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UReplaySystemBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ReplaySystemBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ReplaySystemBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UReplaySystemBPLibrary constinit property declarations *******************
// ********** End Class UReplaySystemBPLibrary constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddEventToActiveReplay"), .Pointer = &UReplaySystemBPLibrary::execAddEventToActiveReplay },
		{ .NameUTF8 = UTF8TEXT("CreateReplayDataObject"), .Pointer = &UReplaySystemBPLibrary::execCreateReplayDataObject },
		{ .NameUTF8 = UTF8TEXT("DeleteReplay"), .Pointer = &UReplaySystemBPLibrary::execDeleteReplay },
		{ .NameUTF8 = UTF8TEXT("GetActiveReplayName"), .Pointer = &UReplaySystemBPLibrary::execGetActiveReplayName },
		{ .NameUTF8 = UTF8TEXT("GetCurrentReplayTime"), .Pointer = &UReplaySystemBPLibrary::execGetCurrentReplayTime },
		{ .NameUTF8 = UTF8TEXT("GetDemoDriver"), .Pointer = &UReplaySystemBPLibrary::execGetDemoDriver },
		{ .NameUTF8 = UTF8TEXT("GetMaxRecordHz"), .Pointer = &UReplaySystemBPLibrary::execGetMaxRecordHz },
		{ .NameUTF8 = UTF8TEXT("GetPlaybackSpeed"), .Pointer = &UReplaySystemBPLibrary::execGetPlaybackSpeed },
		{ .NameUTF8 = UTF8TEXT("GetReplayLength"), .Pointer = &UReplaySystemBPLibrary::execGetReplayLength },
		{ .NameUTF8 = UTF8TEXT("GetReplaySavePath"), .Pointer = &UReplaySystemBPLibrary::execGetReplaySavePath },
		{ .NameUTF8 = UTF8TEXT("GetSavedReplays"), .Pointer = &UReplaySystemBPLibrary::execGetSavedReplays },
		{ .NameUTF8 = UTF8TEXT("GoToSpecificTime"), .Pointer = &UReplaySystemBPLibrary::execGoToSpecificTime },
		{ .NameUTF8 = UTF8TEXT("IsPlayingReplay"), .Pointer = &UReplaySystemBPLibrary::execIsPlayingReplay },
		{ .NameUTF8 = UTF8TEXT("IsRecordingReplay"), .Pointer = &UReplaySystemBPLibrary::execIsRecordingReplay },
		{ .NameUTF8 = UTF8TEXT("IsReplayPlaybackPaused"), .Pointer = &UReplaySystemBPLibrary::execIsReplayPlaybackPaused },
		{ .NameUTF8 = UTF8TEXT("MsToSeconds"), .Pointer = &UReplaySystemBPLibrary::execMsToSeconds },
		{ .NameUTF8 = UTF8TEXT("PausePlayback"), .Pointer = &UReplaySystemBPLibrary::execPausePlayback },
		{ .NameUTF8 = UTF8TEXT("PlayRecordedReplay"), .Pointer = &UReplaySystemBPLibrary::execPlayRecordedReplay },
		{ .NameUTF8 = UTF8TEXT("RecordReplay"), .Pointer = &UReplaySystemBPLibrary::execRecordReplay },
		{ .NameUTF8 = UTF8TEXT("RenameReplay"), .Pointer = &UReplaySystemBPLibrary::execRenameReplay },
		{ .NameUTF8 = UTF8TEXT("RenameReplayFriendly"), .Pointer = &UReplaySystemBPLibrary::execRenameReplayFriendly },
		{ .NameUTF8 = UTF8TEXT("RequestActiveReplayEvents"), .Pointer = &UReplaySystemBPLibrary::execRequestActiveReplayEvents },
		{ .NameUTF8 = UTF8TEXT("RestartReplayPlayback"), .Pointer = &UReplaySystemBPLibrary::execRestartReplayPlayback },
		{ .NameUTF8 = UTF8TEXT("ResumePlayback"), .Pointer = &UReplaySystemBPLibrary::execResumePlayback },
		{ .NameUTF8 = UTF8TEXT("SetMaxRecordHz"), .Pointer = &UReplaySystemBPLibrary::execSetMaxRecordHz },
		{ .NameUTF8 = UTF8TEXT("SetPlaybackSpeed"), .Pointer = &UReplaySystemBPLibrary::execSetPlaybackSpeed },
		{ .NameUTF8 = UTF8TEXT("SetReplaySavePath"), .Pointer = &UReplaySystemBPLibrary::execSetReplaySavePath },
		{ .NameUTF8 = UTF8TEXT("SpectateActor"), .Pointer = &UReplaySystemBPLibrary::execSpectateActor },
		{ .NameUTF8 = UTF8TEXT("StopRecordingReplay"), .Pointer = &UReplaySystemBPLibrary::execStopRecordingReplay },
		{ .NameUTF8 = UTF8TEXT("StopSpectating"), .Pointer = &UReplaySystemBPLibrary::execStopSpectating },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_AddEventToActiveReplay, "AddEventToActiveReplay" }, // 987231946
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_CreateReplayDataObject, "CreateReplayDataObject" }, // 2407483891
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_DeleteReplay, "DeleteReplay" }, // 1049484686
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_GetActiveReplayName, "GetActiveReplayName" }, // 1544267226
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_GetCurrentReplayTime, "GetCurrentReplayTime" }, // 2930317906
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_GetDemoDriver, "GetDemoDriver" }, // 426381855
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_GetMaxRecordHz, "GetMaxRecordHz" }, // 826851946
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_GetPlaybackSpeed, "GetPlaybackSpeed" }, // 1818989000
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplayLength, "GetReplayLength" }, // 3852410259
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_GetReplaySavePath, "GetReplaySavePath" }, // 436378708
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_GetSavedReplays, "GetSavedReplays" }, // 2618712135
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_GoToSpecificTime, "GoToSpecificTime" }, // 1309185491
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_IsPlayingReplay, "IsPlayingReplay" }, // 3626629990
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_IsRecordingReplay, "IsRecordingReplay" }, // 319030980
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_IsReplayPlaybackPaused, "IsReplayPlaybackPaused" }, // 3435033955
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_MsToSeconds, "MsToSeconds" }, // 1686027966
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_PausePlayback, "PausePlayback" }, // 371905779
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_PlayRecordedReplay, "PlayRecordedReplay" }, // 3054224429
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_RecordReplay, "RecordReplay" }, // 3376958240
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplay, "RenameReplay" }, // 2784649558
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_RenameReplayFriendly, "RenameReplayFriendly" }, // 3577794261
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_RequestActiveReplayEvents, "RequestActiveReplayEvents" }, // 1292102061
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_RestartReplayPlayback, "RestartReplayPlayback" }, // 205431135
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_ResumePlayback, "ResumePlayback" }, // 452552548
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_SetMaxRecordHz, "SetMaxRecordHz" }, // 2277939431
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_SetPlaybackSpeed, "SetPlaybackSpeed" }, // 1135790244
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_SetReplaySavePath, "SetReplaySavePath" }, // 3287789755
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_SpectateActor, "SpectateActor" }, // 896265009
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_StopRecordingReplay, "StopRecordingReplay" }, // 859022679
		{ &Z_Construct_UFunction_UReplaySystemBPLibrary_StopSpectating, "StopSpectating" }, // 2291430160
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplaySystemBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UReplaySystemBPLibrary_Statics
UObject* (*const Z_Construct_UClass_UReplaySystemBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplaySystemBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplaySystemBPLibrary_Statics::ClassParams = {
	&UReplaySystemBPLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplaySystemBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UReplaySystemBPLibrary_Statics::Class_MetaDataParams)
};
void UReplaySystemBPLibrary::StaticRegisterNativesUReplaySystemBPLibrary()
{
	UClass* Class = UReplaySystemBPLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UReplaySystemBPLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UReplaySystemBPLibrary()
{
	if (!Z_Registration_Info_UClass_UReplaySystemBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplaySystemBPLibrary.OuterSingleton, Z_Construct_UClass_UReplaySystemBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReplaySystemBPLibrary.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UReplaySystemBPLibrary);
UReplaySystemBPLibrary::~UReplaySystemBPLibrary() {}
// ********** End Class UReplaySystemBPLibrary *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplaySystemBPLibrary_h__Script_ReplaySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReplaySystemBPLibrary, UReplaySystemBPLibrary::StaticClass, TEXT("UReplaySystemBPLibrary"), &Z_Registration_Info_UClass_UReplaySystemBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplaySystemBPLibrary), 3158831777U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplaySystemBPLibrary_h__Script_ReplaySystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplaySystemBPLibrary_h__Script_ReplaySystem_596353921{
	TEXT("/Script/ReplaySystem"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplaySystemBPLibrary_h__Script_ReplaySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplaySystemBPLibrary_h__Script_ReplaySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
