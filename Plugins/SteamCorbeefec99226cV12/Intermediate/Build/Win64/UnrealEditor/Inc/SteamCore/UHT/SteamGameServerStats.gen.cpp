// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamGameServerStats/SteamGameServerStats.h"
#include "Engine/GameInstance.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamGameServerStats() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UClass* Z_Construct_UClass_UGameServerStats();
STEAMCORE_API UClass* Z_Construct_UClass_UGameServerStats_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameServerStats Function ClearUserAchievement ***************************
struct Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics
{
	struct GameServerStats_eventClearUserAchievement_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Resets the unlock status of an achievement for the specified user.\n\x09*\n\x09* This is primarily only ever used for testing.\n\x09* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to clear the achievement for.\n\x09* @param\x09Name\x09\x09\x09The 'API Name' of the Achievement to reset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the unlock status of an achievement for the specified user.\n\nThis is primarily only ever used for testing.\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\n@param        SteamIDUser             The Steam ID of the user to clear the achievement for.\n@param        Name                    The 'API Name' of the Achievement to reset." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ClearUserAchievement constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearUserAchievement constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearUserAchievement Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventClearUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventClearUserAchievement_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameServerStats_eventClearUserAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameServerStats_eventClearUserAchievement_Parms), &Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::PropPointers) < 2048);
// ********** End Function ClearUserAchievement Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "ClearUserAchievement", 	Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::GameServerStats_eventClearUserAchievement_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::GameServerStats_eventClearUserAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameServerStats_ClearUserAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameServerStats::execClearUserAchievement)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ClearUserAchievement(Z_Param_SteamIDUser,Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UGameServerStats Function ClearUserAchievement *****************************

// ********** Begin Class UGameServerStats Function GetUserAchievement *****************************
struct Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics
{
	struct GameServerStats_eventGetUserAchievement_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		bool bAchieved;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the unlock status of the Achievement.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to get the achievement for.\n\x09* @param\x09Name\x09\x09\x09The 'API Name' of the achievement.\n\x09* @param\x09""bAchieved\x09\x09Returns the unlock status of the achievement.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the unlock status of the Achievement.\n\n@param        SteamIDUser             The Steam ID of the user to get the achievement for.\n@param        Name                    The 'API Name' of the achievement.\n@param        bAchieved               Returns the unlock status of the achievement." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserAchievement constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserAchievement constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserAchievement Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventGetUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventGetUserAchievement_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((GameServerStats_eventGetUserAchievement_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameServerStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameServerStats_eventGetUserAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameServerStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::PropPointers) < 2048);
// ********** End Function GetUserAchievement Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "GetUserAchievement", 	Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::GameServerStats_eventGetUserAchievement_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::GameServerStats_eventGetUserAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameServerStats_GetUserAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameServerStats::execGetUserAchievement)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUserAchievement(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_bAchieved);
	P_NATIVE_END;
}
// ********** End Class UGameServerStats Function GetUserAchievement *******************************

// ********** Begin Class UGameServerStats Function GetUserStatFloat *******************************
struct Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics
{
	struct GameServerStats_eventGetUserStatFloat_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		float Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the current value of the a stat for the specified user.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to get the stat for.\n\x09* @param\x09Name\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""Data\x09\x09\x09The variable to return the stat value into.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current value of the a stat for the specified user.\n\n@param        SteamIDUser             The Steam ID of the user to get the stat for.\n@param        Name                    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        Data                    The variable to return the stat value into." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserStatFloat constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserStatFloat constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserStatFloat Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatFloat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatFloat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameServerStats_eventGetUserStatFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameServerStats_eventGetUserStatFloat_Parms), &Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::PropPointers) < 2048);
// ********** End Function GetUserStatFloat Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "GetUserStatFloat", 	Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::GameServerStats_eventGetUserStatFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::GameServerStats_eventGetUserStatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameServerStats_GetUserStatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameServerStats::execGetUserStatFloat)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUserStatFloat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class UGameServerStats Function GetUserStatFloat *********************************

// ********** Begin Class UGameServerStats Function GetUserStatInt *********************************
struct Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics
{
	struct GameServerStats_eventGetUserStatInt_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		int32 Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the current value of the a stat for the specified user.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to get the stat for.\n\x09* @param\x09Name\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""Data\x09\x09\x09The variable to return the stat value into.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current value of the a stat for the specified user.\n\n@param        SteamIDUser             The Steam ID of the user to get the stat for.\n@param        Name                    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        Data                    The variable to return the stat value into." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserStatInt constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserStatInt constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserStatInt Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatInt_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatInt_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatInt_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameServerStats_eventGetUserStatInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameServerStats_eventGetUserStatInt_Parms), &Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::PropPointers) < 2048);
// ********** End Function GetUserStatInt Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "GetUserStatInt", 	Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::GameServerStats_eventGetUserStatInt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::GameServerStats_eventGetUserStatInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameServerStats_GetUserStatInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameServerStats::execGetUserStatInt)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUserStatInt(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class UGameServerStats Function GetUserStatInt ***********************************

// ********** Begin Class UGameServerStats Function ServerRequestUserStats *************************
struct Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics
{
	struct GameServerStats_eventServerRequestUserStats_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamIDUser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Asynchronously downloads stats and achievements for the specified user from the server.\n\x09*\n\x09* These stats will only be auto-updated for clients currently playing on the server. For other users you'll need to call this function again to refresh any data.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to request the stats for.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asynchronously downloads stats and achievements for the specified user from the server.\n\nThese stats will only be auto-updated for clients currently playing on the server. For other users you'll need to call this function again to refresh any data.\n\n@param        SteamIDUser             The Steam ID of the user to request the stats for." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerRequestUserStats constinit property declarations ****************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerRequestUserStats constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerRequestUserStats Property Definitions ***************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventServerRequestUserStats_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 4285681072
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventServerRequestUserStats_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_SteamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::PropPointers) < 2048);
// ********** End Function ServerRequestUserStats Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "ServerRequestUserStats", 	Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::GameServerStats_eventServerRequestUserStats_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::GameServerStats_eventServerRequestUserStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameServerStats::execServerRequestUserStats)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRequestUserStats(FOnServerRequestUserStats(Z_Param_Out_Callback),Z_Param_SteamIDUser);
	P_NATIVE_END;
}
// ********** End Class UGameServerStats Function ServerRequestUserStats ***************************

// ********** Begin Class UGameServerStats Function ServerStoreUserStats ***************************
struct Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics
{
	struct GameServerStats_eventServerStoreUserStats_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamIDUser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Send the changed stats and achievements data to the server for permanent storage for the specified user.\n\x09*\n\x09* If this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.\n\x09* This call can be rate limited. Call frequency should be on the order of minutes, rather than seconds. \n\x09* You should only be calling this during major state changes such as the end of a round, the map changing, or the user leaving a server.\n\x09* If you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process \n\x09* ends then this function will automatically be called.\n\x09* You can find additional debug information written to the %steam_install%\\logs\\stats_log.txt file.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to store the stats of.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send the changed stats and achievements data to the server for permanent storage for the specified user.\n\nIf this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.\nThis call can be rate limited. Call frequency should be on the order of minutes, rather than seconds.\nYou should only be calling this during major state changes such as the end of a round, the map changing, or the user leaving a server.\nIf you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process\nends then this function will automatically be called.\nYou can find additional debug information written to the %steam_install%\\logs\\stats_log.txt file.\n\n@param        SteamIDUser             The Steam ID of the user to store the stats of." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerStoreUserStats constinit property declarations ******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerStoreUserStats constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerStoreUserStats Property Definitions *****************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventServerStoreUserStats_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1006508152
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventServerStoreUserStats_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_SteamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::PropPointers) < 2048);
// ********** End Function ServerStoreUserStats Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "ServerStoreUserStats", 	Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::GameServerStats_eventServerStoreUserStats_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::GameServerStats_eventServerStoreUserStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameServerStats::execServerStoreUserStats)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStoreUserStats(FOnServerStoreUserStats(Z_Param_Out_Callback),Z_Param_SteamIDUser);
	P_NATIVE_END;
}
// ********** End Class UGameServerStats Function ServerStoreUserStats *****************************

// ********** Begin Class UGameServerStats Function SetUserAchievement *****************************
struct Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics
{
	struct GameServerStats_eventSetUserAchievement_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Unlocks an achievement for the specified user.\n\x09*\n\x09* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to unlock the achievement for.\n\x09* @param\x09Name\x09\x09\x09The 'API Name' of the Achievement to unlock.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unlocks an achievement for the specified user.\n\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\n@param        SteamIDUser             The Steam ID of the user to unlock the achievement for.\n@param        Name                    The 'API Name' of the Achievement to unlock." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetUserAchievement constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetUserAchievement constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetUserAchievement Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventSetUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventSetUserAchievement_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameServerStats_eventSetUserAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameServerStats_eventSetUserAchievement_Parms), &Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::PropPointers) < 2048);
// ********** End Function SetUserAchievement Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "SetUserAchievement", 	Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::GameServerStats_eventSetUserAchievement_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::GameServerStats_eventSetUserAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameServerStats_SetUserAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameServerStats::execSetUserAchievement)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetUserAchievement(Z_Param_SteamIDUser,Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UGameServerStats Function SetUserAchievement *******************************

// ********** Begin Class UGameServerStats Function SetUserStatFloat *******************************
struct Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics
{
	struct GameServerStats_eventSetUserStatFloat_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		float Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets / updates the value of a given stat for the specified user.\n\x09*\n\x09* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to set the stat on.\n\x09* @param\x09Name\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""Data\x09\x09\x09The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets / updates the value of a given stat for the specified user.\n\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\n@param        SteamIDUser             The Steam ID of the user to set the stat on.\n@param        Name                    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        Data                    The new value of the stat. This must be an absolute value, it will not increment or decrement for you." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetUserStatFloat constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetUserStatFloat constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetUserStatFloat Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatFloat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatFloat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameServerStats_eventSetUserStatFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameServerStats_eventSetUserStatFloat_Parms), &Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::PropPointers) < 2048);
// ********** End Function SetUserStatFloat Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "SetUserStatFloat", 	Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::GameServerStats_eventSetUserStatFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::GameServerStats_eventSetUserStatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameServerStats_SetUserStatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameServerStats::execSetUserStatFloat)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetUserStatFloat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UGameServerStats Function SetUserStatFloat *********************************

// ********** Begin Class UGameServerStats Function SetUserStatInt *********************************
struct Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics
{
	struct GameServerStats_eventSetUserStatInt_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		int32 Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets / updates the value of a given stat for the specified user.\n\x09*\n\x09* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to set the stat on.\n\x09* @param\x09Name\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""Data\x09\x09\x09The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets / updates the value of a given stat for the specified user.\n\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\n@param        SteamIDUser             The Steam ID of the user to set the stat on.\n@param        Name                    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        Data                    The new value of the stat. This must be an absolute value, it will not increment or decrement for you." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetUserStatInt constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetUserStatInt constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetUserStatInt Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatInt_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatInt_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatInt_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameServerStats_eventSetUserStatInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameServerStats_eventSetUserStatInt_Parms), &Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::PropPointers) < 2048);
// ********** End Function SetUserStatInt Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "SetUserStatInt", 	Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::GameServerStats_eventSetUserStatInt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::GameServerStats_eventSetUserStatInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameServerStats_SetUserStatInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameServerStats::execSetUserStatInt)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FIntProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetUserStatInt(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UGameServerStats Function SetUserStatInt ***********************************

// ********** Begin Class UGameServerStats Function UpdateUserAvgRateStat **************************
struct Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics
{
	struct GameServerStats_eventUpdateUserAvgRateStat_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		float CountThisSession;
		float SessionLength;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Updates an AVGRATE stat with new values for the specified user.\n\x09*\n\x09* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09* These updates will work only on stats that game servers are allowed to edit. \n\x09* If the \"Set By\" field for this stat is \"Official GS\" then only game servers that have been declared as officially \n\x09* controlled by you will be able to set it. To do this you must set the IP range of your official servers in the \n\x09* Dedicated Servers section of App Admin.\n\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09\x09The Steam ID of the user to update the AVGRATE stat for.\n\x09* @param\x09Name\x09\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""CountThisSession\x09The value accumulation since the last call to this function.\n\x09* @param\x09SessionLength\x09\x09The amount of time in seconds since the last call to this function.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates an AVGRATE stat with new values for the specified user.\n\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\nThese updates will work only on stats that game servers are allowed to edit.\nIf the \"Set By\" field for this stat is \"Official GS\" then only game servers that have been declared as officially\ncontrolled by you will be able to set it. To do this you must set the IP range of your official servers in the\nDedicated Servers section of App Admin.\n\n\n@param        SteamIDUser                     The Steam ID of the user to update the AVGRATE stat for.\n@param        Name                            The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        CountThisSession        The value accumulation since the last call to this function.\n@param        SessionLength           The amount of time in seconds since the last call to this function." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateUserAvgRateStat constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CountThisSession;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SessionLength;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateUserAvgRateStat constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateUserAvgRateStat Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventUpdateUserAvgRateStat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventUpdateUserAvgRateStat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_CountThisSession = { "CountThisSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventUpdateUserAvgRateStat_Parms, CountThisSession), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SessionLength = { "SessionLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameServerStats_eventUpdateUserAvgRateStat_Parms, SessionLength), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameServerStats_eventUpdateUserAvgRateStat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameServerStats_eventUpdateUserAvgRateStat_Parms), &Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_CountThisSession,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SessionLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers) < 2048);
// ********** End Function UpdateUserAvgRateStat Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "UpdateUserAvgRateStat", 	Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::GameServerStats_eventUpdateUserAvgRateStat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::GameServerStats_eventUpdateUserAvgRateStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameServerStats::execUpdateUserAvgRateStat)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CountThisSession);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SessionLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UpdateUserAvgRateStat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_CountThisSession,Z_Param_SessionLength);
	P_NATIVE_END;
}
// ********** End Class UGameServerStats Function UpdateUserAvgRateStat ****************************

// ********** Begin Class UGameServerStats *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGameServerStats;
UClass* UGameServerStats::GetPrivateStaticClass()
{
	using TClass = UGameServerStats;
	if (!Z_Registration_Info_UClass_UGameServerStats.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GameServerStats"),
			Z_Registration_Info_UClass_UGameServerStats.InnerSingleton,
			StaticRegisterNativesUGameServerStats,
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
	return Z_Registration_Info_UClass_UGameServerStats.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameServerStats_NoRegister()
{
	return UGameServerStats::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameServerStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamGameServerStats/SteamGameServerStats.h" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GSStatsUnloaded_MetaData[] = {
		{ "Category", "SteamCore|GameServerStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/SteamGameServerStats.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UGameServerStats constinit property declarations *************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSStatsUnloaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UGameServerStats constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearUserAchievement"), .Pointer = &UGameServerStats::execClearUserAchievement },
		{ .NameUTF8 = UTF8TEXT("GetUserAchievement"), .Pointer = &UGameServerStats::execGetUserAchievement },
		{ .NameUTF8 = UTF8TEXT("GetUserStatFloat"), .Pointer = &UGameServerStats::execGetUserStatFloat },
		{ .NameUTF8 = UTF8TEXT("GetUserStatInt"), .Pointer = &UGameServerStats::execGetUserStatInt },
		{ .NameUTF8 = UTF8TEXT("ServerRequestUserStats"), .Pointer = &UGameServerStats::execServerRequestUserStats },
		{ .NameUTF8 = UTF8TEXT("ServerStoreUserStats"), .Pointer = &UGameServerStats::execServerStoreUserStats },
		{ .NameUTF8 = UTF8TEXT("SetUserAchievement"), .Pointer = &UGameServerStats::execSetUserAchievement },
		{ .NameUTF8 = UTF8TEXT("SetUserStatFloat"), .Pointer = &UGameServerStats::execSetUserStatFloat },
		{ .NameUTF8 = UTF8TEXT("SetUserStatInt"), .Pointer = &UGameServerStats::execSetUserStatInt },
		{ .NameUTF8 = UTF8TEXT("UpdateUserAvgRateStat"), .Pointer = &UGameServerStats::execUpdateUserAvgRateStat },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameServerStats_ClearUserAchievement, "ClearUserAchievement" }, // 1340423931
		{ &Z_Construct_UFunction_UGameServerStats_GetUserAchievement, "GetUserAchievement" }, // 120721657
		{ &Z_Construct_UFunction_UGameServerStats_GetUserStatFloat, "GetUserStatFloat" }, // 1647329561
		{ &Z_Construct_UFunction_UGameServerStats_GetUserStatInt, "GetUserStatInt" }, // 2309008412
		{ &Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats, "ServerRequestUserStats" }, // 1821216946
		{ &Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats, "ServerStoreUserStats" }, // 2423691741
		{ &Z_Construct_UFunction_UGameServerStats_SetUserAchievement, "SetUserAchievement" }, // 568329638
		{ &Z_Construct_UFunction_UGameServerStats_SetUserStatFloat, "SetUserStatFloat" }, // 3507158586
		{ &Z_Construct_UFunction_UGameServerStats_SetUserStatInt, "SetUserStatInt" }, // 1115261673
		{ &Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat, "UpdateUserAvgRateStat" }, // 1396593066
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameServerStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGameServerStats_Statics

// ********** Begin Class UGameServerStats Property Definitions ************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameServerStats_Statics::NewProp_GSStatsUnloaded = { "GSStatsUnloaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameServerStats, GSStatsUnloaded), Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GSStatsUnloaded_MetaData), NewProp_GSStatsUnloaded_MetaData) }; // 324834690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameServerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameServerStats_Statics::NewProp_GSStatsUnloaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameServerStats_Statics::PropPointers) < 2048);
// ********** End Class UGameServerStats Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UGameServerStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameServerStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameServerStats_Statics::ClassParams = {
	&UGameServerStats::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameServerStats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameServerStats_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameServerStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameServerStats_Statics::Class_MetaDataParams)
};
void UGameServerStats::StaticRegisterNativesUGameServerStats()
{
	UClass* Class = UGameServerStats::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UGameServerStats_Statics::Funcs));
}
UClass* Z_Construct_UClass_UGameServerStats()
{
	if (!Z_Registration_Info_UClass_UGameServerStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameServerStats.OuterSingleton, Z_Construct_UClass_UGameServerStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameServerStats.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGameServerStats);
UGameServerStats::~UGameServerStats() {}
// ********** End Class UGameServerStats ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameServerStats, UGameServerStats::StaticClass, TEXT("UGameServerStats"), &Z_Registration_Info_UClass_UGameServerStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameServerStats), 3961785267U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h__Script_SteamCore_4172537679{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamGameServerStats_SteamGameServerStats_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
