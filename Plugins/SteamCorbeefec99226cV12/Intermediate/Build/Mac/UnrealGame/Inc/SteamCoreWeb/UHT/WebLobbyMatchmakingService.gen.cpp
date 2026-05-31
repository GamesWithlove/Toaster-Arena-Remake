// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LobbyMatchmakingService/WebLobbyMatchmakingService.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebLobbyMatchmakingService() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebLobbyMatchmakingService();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebLobbyMatchmakingService_NoRegister();
STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebLobbyMatchmakingService Function CreateLobby *************************
struct Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics
{
	struct WebLobbyMatchmakingService_eventCreateLobby_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		int32 MaxMembers;
		ESteamCoreWebLobbyType LobbyType;
		FString LobbyName;
		FString InputJson;
		TArray<FString> SteamIdInvitedMembers;
		FString LobbyMetaData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|LobbyMatchmakingService" },
		{ "Comment", "/**\n\x09* When using the CreateLobby WebAPI, you'll probably want to set lobby_type to 4 (k_ELobbyTypePrivateUnique). \n\x09* This lobby type is a private, unique lobby that does not get deleted when emptied, and only one will exist per unique appid/lobby_name.\n\x09* A private unique lobby can only be created by this WebAPI call. But you can also use CreateLobby to generate the more traditional and ephemeral lobbies when no lobby_name is used.\n\x09*\n\x09* Steamid_invited_members will be a json array of all the steamIDs that should be currently allowed into the lobby. \n\x09* You can update the list of members by calling CreateLobby with the same lobby_name and new complete set of steamIDs.\n\x09* Any steamIDs that were previously in the lobby and not included in the new call will be removed from the lobby.\n\x09* Lobby_metadata is completely optional, but can be used to send general lobby data that needs to be communicated to users in the client.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API user authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The ID of the application associated with the lobby.\n\x09* @param\x09MaxMembers\x09\x09\x09\x09Maximum number of members for this lobby.\n\x09* @param\x09LobbyType\x09\x09\x09\x09""ESteamCoreWebLobbyType - The type and visibility of this lobby.\n\x09* @param\x09LobbyName\x09\x09\x09\x09Unique lobby name if lobby_type = 4. Find lobby with this name if it exists.\n\x09* @param\x09InputJson\x09\x09\x09\x09Json data. Required for data that cannot be posted parameters, but can also be used for the other parameters\n\x09* @param\x09SteamIdInvitedMembers\x09""Array of steamIDs to add slots for. Must be specified in the input_json parameter.\n\x09* @param\x09LobbyMetaData\x09\x09\x09Optional lobby data. Must be specified in the input_json parameter.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LobbyMatchmakingService/WebLobbyMatchmakingService.h" },
		{ "ToolTip", "When using the CreateLobby WebAPI, you'll probably want to set lobby_type to 4 (k_ELobbyTypePrivateUnique).\nThis lobby type is a private, unique lobby that does not get deleted when emptied, and only one will exist per unique appid/lobby_name.\nA private unique lobby can only be created by this WebAPI call. But you can also use CreateLobby to generate the more traditional and ephemeral lobbies when no lobby_name is used.\n\nSteamid_invited_members will be a json array of all the steamIDs that should be currently allowed into the lobby.\nYou can update the list of members by calling CreateLobby with the same lobby_name and new complete set of steamIDs.\nAny steamIDs that were previously in the lobby and not included in the new call will be removed from the lobby.\nLobby_metadata is completely optional, but can be used to send general lobby data that needs to be communicated to users in the client.\n\n@param        Key                                             Steamworks Web API user authentication Key.\n@param        AppId                                   The ID of the application associated with the lobby.\n@param        MaxMembers                              Maximum number of members for this lobby.\n@param        LobbyType                               ESteamCoreWebLobbyType - The type and visibility of this lobby.\n@param        LobbyName                               Unique lobby name if lobby_type = 4. Find lobby with this name if it exists.\n@param        InputJson                               Json data. Required for data that cannot be posted parameters, but can also be used for the other parameters\n@param        SteamIdInvitedMembers   Array of steamIDs to add slots for. Must be specified in the input_json parameter.\n@param        LobbyMetaData                   Optional lobby data. Must be specified in the input_json parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateLobby constinit property declarations ***************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LobbyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputJson;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIdInvitedMembers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamIdInvitedMembers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LobbyMetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateLobby constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateLobby Property Definitions **************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, MaxMembers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, LobbyType), Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType, METADATA_PARAMS(0, nullptr) }; // 580576451
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_LobbyName = { "LobbyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, LobbyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_InputJson = { "InputJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, InputJson), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_SteamIdInvitedMembers_Inner = { "SteamIdInvitedMembers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_SteamIdInvitedMembers = { "SteamIdInvitedMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, SteamIdInvitedMembers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_LobbyMetaData = { "LobbyMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, LobbyMetaData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_MaxMembers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_LobbyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_LobbyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_LobbyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_InputJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_SteamIdInvitedMembers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_SteamIdInvitedMembers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_LobbyMetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::PropPointers) < 2048);
// ********** End Function CreateLobby Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebLobbyMatchmakingService, nullptr, "CreateLobby", 	Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::WebLobbyMatchmakingService_eventCreateLobby_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::WebLobbyMatchmakingService_eventCreateLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebLobbyMatchmakingService::execCreateLobby)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxMembers);
	P_GET_ENUM(ESteamCoreWebLobbyType,Z_Param_LobbyType);
	P_GET_PROPERTY(FStrProperty,Z_Param_LobbyName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InputJson);
	P_GET_TARRAY(FString,Z_Param_SteamIdInvitedMembers);
	P_GET_PROPERTY(FStrProperty,Z_Param_LobbyMetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateLobby(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_MaxMembers,ESteamCoreWebLobbyType(Z_Param_LobbyType),Z_Param_LobbyName,Z_Param_InputJson,Z_Param_SteamIdInvitedMembers,Z_Param_LobbyMetaData);
	P_NATIVE_END;
}
// ********** End Class UWebLobbyMatchmakingService Function CreateLobby ***************************

// ********** Begin Class UWebLobbyMatchmakingService Function RemoveUserFromLobby *****************
struct Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics
{
	struct WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString SteamIdToRemove;
		FString SteamIdLobby;
		FString InputJson;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|LobbyMatchmakingService" },
		{ "Comment", "/**\n\x09* Remove user from lobby\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API user authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The ID of the application associated with the lobby.\n\x09* @param\x09SteamIdToRemove\x09\x09\x09SteamID of the user to remove. If the user is not online when called, this will remove their reserved slot in the lobby.\n\x09* @param\x09SteamIdLobby\x09\x09\x09Lobby ID\n\x09* @param\x09InputJson\x09\x09\x09\x09Json data. Required for data that cannot be posted parameters, but can also be used for the other parameters\n\x09*/" },
		{ "ModuleRelativePath", "Public/LobbyMatchmakingService/WebLobbyMatchmakingService.h" },
		{ "ToolTip", "Remove user from lobby\n\n@param        Key                                             Steamworks Web API user authentication Key.\n@param        AppId                                   The ID of the application associated with the lobby.\n@param        SteamIdToRemove                 SteamID of the user to remove. If the user is not online when called, this will remove their reserved slot in the lobby.\n@param        SteamIdLobby                    Lobby ID\n@param        InputJson                               Json data. Required for data that cannot be posted parameters, but can also be used for the other parameters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveUserFromLobby constinit property declarations *******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIdToRemove;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIdLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputJson;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveUserFromLobby constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveUserFromLobby Property Definitions ******************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_SteamIdToRemove = { "SteamIdToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, SteamIdToRemove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_SteamIdLobby = { "SteamIdLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, SteamIdLobby), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_InputJson = { "InputJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, InputJson), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_SteamIdToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_SteamIdLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_InputJson,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::PropPointers) < 2048);
// ********** End Function RemoveUserFromLobby Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebLobbyMatchmakingService, nullptr, "RemoveUserFromLobby", 	Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebLobbyMatchmakingService::execRemoveUserFromLobby)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamIdToRemove);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamIdLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_InputJson);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveUserFromLobby(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_SteamIdToRemove,Z_Param_SteamIdLobby,Z_Param_InputJson);
	P_NATIVE_END;
}
// ********** End Class UWebLobbyMatchmakingService Function RemoveUserFromLobby *******************

// ********** Begin Class UWebLobbyMatchmakingService **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWebLobbyMatchmakingService;
UClass* UWebLobbyMatchmakingService::GetPrivateStaticClass()
{
	using TClass = UWebLobbyMatchmakingService;
	if (!Z_Registration_Info_UClass_UWebLobbyMatchmakingService.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WebLobbyMatchmakingService"),
			Z_Registration_Info_UClass_UWebLobbyMatchmakingService.InnerSingleton,
			StaticRegisterNativesUWebLobbyMatchmakingService,
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
	return Z_Registration_Info_UClass_UWebLobbyMatchmakingService.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebLobbyMatchmakingService_NoRegister()
{
	return UWebLobbyMatchmakingService::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebLobbyMatchmakingService_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LobbyMatchmakingService/WebLobbyMatchmakingService.h" },
		{ "ModuleRelativePath", "Public/LobbyMatchmakingService/WebLobbyMatchmakingService.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWebLobbyMatchmakingService constinit property declarations **************
// ********** End Class UWebLobbyMatchmakingService constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateLobby"), .Pointer = &UWebLobbyMatchmakingService::execCreateLobby },
		{ .NameUTF8 = UTF8TEXT("RemoveUserFromLobby"), .Pointer = &UWebLobbyMatchmakingService::execRemoveUserFromLobby },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby, "CreateLobby" }, // 1930896481
		{ &Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby, "RemoveUserFromLobby" }, // 3804475828
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebLobbyMatchmakingService>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWebLobbyMatchmakingService_Statics
UObject* (*const Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::ClassParams = {
	&UWebLobbyMatchmakingService::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::Class_MetaDataParams)
};
void UWebLobbyMatchmakingService::StaticRegisterNativesUWebLobbyMatchmakingService()
{
	UClass* Class = UWebLobbyMatchmakingService::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWebLobbyMatchmakingService()
{
	if (!Z_Registration_Info_UClass_UWebLobbyMatchmakingService.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebLobbyMatchmakingService.OuterSingleton, Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebLobbyMatchmakingService.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWebLobbyMatchmakingService);
UWebLobbyMatchmakingService::~UWebLobbyMatchmakingService() {}
// ********** End Class UWebLobbyMatchmakingService ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingService_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebLobbyMatchmakingService, UWebLobbyMatchmakingService::StaticClass, TEXT("UWebLobbyMatchmakingService"), &Z_Registration_Info_UClass_UWebLobbyMatchmakingService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebLobbyMatchmakingService), 2548720475U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingService_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingService_h__Script_SteamCoreWeb_2363203625{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingService_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingService_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
