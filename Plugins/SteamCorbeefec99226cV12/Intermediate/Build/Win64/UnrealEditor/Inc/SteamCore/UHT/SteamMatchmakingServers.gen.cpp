// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamMatchmakingServers/SteamMatchmakingServers.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamMatchmakingServers() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UClass* Z_Construct_UClass_UMatchmakingServers();
STEAMCORE_API UClass* Z_Construct_UClass_UMatchmakingServers_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_UServerFilter_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMatchmakingServers Function PingServer **********************************
struct Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics
{
	struct MatchmakingServers_eventPingServer_Parms
	{
		FScriptDelegate Callback;
		FString Ip;
		int32 QueryPort;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|MatchmakingServers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.\n\x09*\n\x09* @param\x09Ip\x09\x09\x09The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09QueryPort\x09The port of the game server you are querying, in host order.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.\n\n@param        Ip                      The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        QueryPort       The port of the game server you are querying, in host order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PingServer constinit property declarations ****************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ip;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PingServer constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PingServer Property Definitions ***************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventPingServer_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 429227007
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_Ip = { "Ip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventPingServer_Parms, Ip), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventPingServer_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_Ip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_QueryPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::PropPointers) < 2048);
// ********** End Function PingServer Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "PingServer", 	Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::MatchmakingServers_eventPingServer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::MatchmakingServers_eventPingServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmakingServers_PingServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmakingServers::execPingServer)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ip);
	P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PingServer(FOnServerPing(Z_Param_Out_Callback),Z_Param_Ip,Z_Param_QueryPort);
	P_NATIVE_END;
}
// ********** End Class UMatchmakingServers Function PingServer ************************************

// ********** Begin Class UMatchmakingServers Function RequestFavoritesServerList ******************
struct Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics
{
	struct MatchmakingServers_eventRequestFavoritesServerList_Parms
	{
		FScriptDelegate ServerCallback;
		int32 AppId;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09* @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out \n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09* @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09*/" },
#endif
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param        AppId                                   The app to request the server list of.\n@param        Timeout                                 How long to run the function until we time out.\n@param        MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param        ServerFilter                    Optional server filter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestFavoritesServerList constinit property declarations ************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestFavoritesServerList constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestFavoritesServerList Property Definitions ***********************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFavoritesServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerCallback_MetaData), NewProp_ServerCallback_MetaData) }; // 4083196289
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFavoritesServerList_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFavoritesServerList_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFavoritesServerList_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((MatchmakingServers_eventRequestFavoritesServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MatchmakingServers_eventRequestFavoritesServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFavoritesServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_ServerCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_ServerFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::PropPointers) < 2048);
// ********** End Function RequestFavoritesServerList Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestFavoritesServerList", 	Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::MatchmakingServers_eventRequestFavoritesServerList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::MatchmakingServers_eventRequestFavoritesServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmakingServers::execRequestFavoritesServerList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ServerCallback);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestFavoritesServerList(FOnServerUpdated(Z_Param_Out_ServerCallback),Z_Param_AppId,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class UMatchmakingServers Function RequestFavoritesServerList ********************

// ********** Begin Class UMatchmakingServers Function RequestFriendsServerList ********************
struct Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics
{
	struct MatchmakingServers_eventRequestFriendsServerList_Parms
	{
		FScriptDelegate ServerCallback;
		int32 AppId;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09* @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out \n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09* @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09*/" },
#endif
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param        AppId                                   The app to request the server list of.\n@param        Timeout                                 How long to run the function until we time out.\n@param        MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param        ServerFilter                    Optional server filter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestFriendsServerList constinit property declarations **************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestFriendsServerList constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestFriendsServerList Property Definitions *************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFriendsServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerCallback_MetaData), NewProp_ServerCallback_MetaData) }; // 4083196289
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFriendsServerList_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFriendsServerList_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFriendsServerList_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((MatchmakingServers_eventRequestFriendsServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MatchmakingServers_eventRequestFriendsServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFriendsServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_ServerCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_ServerFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::PropPointers) < 2048);
// ********** End Function RequestFriendsServerList Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestFriendsServerList", 	Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::MatchmakingServers_eventRequestFriendsServerList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::MatchmakingServers_eventRequestFriendsServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmakingServers::execRequestFriendsServerList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ServerCallback);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestFriendsServerList(FOnServerUpdated(Z_Param_Out_ServerCallback),Z_Param_AppId,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class UMatchmakingServers Function RequestFriendsServerList **********************

// ********** Begin Class UMatchmakingServers Function RequestHistoryServerList ********************
struct Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics
{
	struct MatchmakingServers_eventRequestHistoryServerList_Parms
	{
		FScriptDelegate ServerCallback;
		int32 AppId;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09* @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out \n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09* @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09*/" },
#endif
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param        AppId                                   The app to request the server list of.\n@param        Timeout                                 How long to run the function until we time out.\n@param        MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param        ServerFilter                    Optional server filter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestHistoryServerList constinit property declarations **************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestHistoryServerList constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestHistoryServerList Property Definitions *************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestHistoryServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerCallback_MetaData), NewProp_ServerCallback_MetaData) }; // 4083196289
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestHistoryServerList_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestHistoryServerList_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestHistoryServerList_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((MatchmakingServers_eventRequestHistoryServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MatchmakingServers_eventRequestHistoryServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestHistoryServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_ServerCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_ServerFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::PropPointers) < 2048);
// ********** End Function RequestHistoryServerList Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestHistoryServerList", 	Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::MatchmakingServers_eventRequestHistoryServerList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::MatchmakingServers_eventRequestHistoryServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmakingServers::execRequestHistoryServerList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ServerCallback);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestHistoryServerList(FOnServerUpdated(Z_Param_Out_ServerCallback),Z_Param_AppId,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class UMatchmakingServers Function RequestHistoryServerList **********************

// ********** Begin Class UMatchmakingServers Function RequestInternetServerList *******************
struct Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics
{
	struct MatchmakingServers_eventRequestInternetServerList_Parms
	{
		FScriptDelegate ServerCallback;
		int32 AppId;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09* @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out \n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09* @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09* \n\x09*/" },
#endif
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param        AppId                                   The app to request the server list of.\n@param        Timeout                                 How long to run the function until we time out.\n@param        MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param        ServerFilter                    Optional server filter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestInternetServerList constinit property declarations *************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestInternetServerList constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestInternetServerList Property Definitions ************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestInternetServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerCallback_MetaData), NewProp_ServerCallback_MetaData) }; // 4083196289
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestInternetServerList_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestInternetServerList_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestInternetServerList_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((MatchmakingServers_eventRequestInternetServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MatchmakingServers_eventRequestInternetServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestInternetServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_ServerCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_ServerFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::PropPointers) < 2048);
// ********** End Function RequestInternetServerList Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestInternetServerList", 	Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::MatchmakingServers_eventRequestInternetServerList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::MatchmakingServers_eventRequestInternetServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmakingServers::execRequestInternetServerList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ServerCallback);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestInternetServerList(FOnServerUpdated(Z_Param_Out_ServerCallback),Z_Param_AppId,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class UMatchmakingServers Function RequestInternetServerList *********************

// ********** Begin Class UMatchmakingServers Function RequestLANServerList ************************
struct Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics
{
	struct MatchmakingServers_eventRequestLANServerList_Parms
	{
		FScriptDelegate ServerCallback;
		int32 AppId;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09* @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out \n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09* @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09*/" },
#endif
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param        AppId                                   The app to request the server list of.\n@param        Timeout                                 How long to run the function until we time out.\n@param        MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param        ServerFilter                    Optional server filter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestLANServerList constinit property declarations ******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestLANServerList constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestLANServerList Property Definitions *****************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestLANServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerCallback_MetaData), NewProp_ServerCallback_MetaData) }; // 4083196289
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestLANServerList_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestLANServerList_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestLANServerList_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((MatchmakingServers_eventRequestLANServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MatchmakingServers_eventRequestLANServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestLANServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_ServerCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_ServerFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::PropPointers) < 2048);
// ********** End Function RequestLANServerList Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestLANServerList", 	Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::MatchmakingServers_eventRequestLANServerList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::MatchmakingServers_eventRequestLANServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmakingServers::execRequestLANServerList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ServerCallback);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestLANServerList(FOnServerUpdated(Z_Param_Out_ServerCallback),Z_Param_AppId,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class UMatchmakingServers Function RequestLANServerList **************************

// ********** Begin Class UMatchmakingServers Function RequestSpectatorServerList ******************
struct Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics
{
	struct MatchmakingServers_eventRequestSpectatorServerList_Parms
	{
		FScriptDelegate ServerCallback;
		int32 AppId;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09* @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out \n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09* @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09*/" },
#endif
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param        AppId                                   The app to request the server list of.\n@param        Timeout                                 How long to run the function until we time out.\n@param        MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param        ServerFilter                    Optional server filter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestSpectatorServerList constinit property declarations ************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestSpectatorServerList constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestSpectatorServerList Property Definitions ***********************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestSpectatorServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerCallback_MetaData), NewProp_ServerCallback_MetaData) }; // 4083196289
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestSpectatorServerList_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestSpectatorServerList_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestSpectatorServerList_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((MatchmakingServers_eventRequestSpectatorServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MatchmakingServers_eventRequestSpectatorServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestSpectatorServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_ServerCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_ServerFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::PropPointers) < 2048);
// ********** End Function RequestSpectatorServerList Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestSpectatorServerList", 	Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::MatchmakingServers_eventRequestSpectatorServerList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::MatchmakingServers_eventRequestSpectatorServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmakingServers::execRequestSpectatorServerList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ServerCallback);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestSpectatorServerList(FOnServerUpdated(Z_Param_Out_ServerCallback),Z_Param_AppId,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// ********** End Class UMatchmakingServers Function RequestSpectatorServerList ********************

// ********** Begin Class UMatchmakingServers Function ServerRules *********************************
struct Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics
{
	struct MatchmakingServers_eventServerRules_Parms
	{
		FScriptDelegate Callback;
		FString Ip;
		int32 QueryPort;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|MatchmakingServers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)\n\x09*\n\x09* @param\x09Ip\x09\x09\x09The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09QueryPort\x09The port of the game server you are querying, in host order.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)\n\n@param        Ip                      The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        QueryPort       The port of the game server you are querying, in host order." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerRules constinit property declarations ***************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ip;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerRules constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerRules Property Definitions **************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventServerRules_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 4204297888
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_Ip = { "Ip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventServerRules_Parms, Ip), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MatchmakingServers_eventServerRules_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_Ip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_QueryPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::PropPointers) < 2048);
// ********** End Function ServerRules Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "ServerRules", 	Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::MatchmakingServers_eventServerRules_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::MatchmakingServers_eventServerRules_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmakingServers_ServerRules()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmakingServers::execServerRules)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ip);
	P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRules(FOnServerRules(Z_Param_Out_Callback),Z_Param_Ip,Z_Param_QueryPort);
	P_NATIVE_END;
}
// ********** End Class UMatchmakingServers Function ServerRules ***********************************

// ********** Begin Class UMatchmakingServers ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMatchmakingServers;
UClass* UMatchmakingServers::GetPrivateStaticClass()
{
	using TClass = UMatchmakingServers;
	if (!Z_Registration_Info_UClass_UMatchmakingServers.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MatchmakingServers"),
			Z_Registration_Info_UClass_UMatchmakingServers.InnerSingleton,
			StaticRegisterNativesUMatchmakingServers,
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
	return Z_Registration_Info_UClass_UMatchmakingServers.InnerSingleton;
}
UClass* Z_Construct_UClass_UMatchmakingServers_NoRegister()
{
	return UMatchmakingServers::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMatchmakingServers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamMatchmakingServers/SteamMatchmakingServers.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMatchmakingServers constinit property declarations **********************
// ********** End Class UMatchmakingServers constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("PingServer"), .Pointer = &UMatchmakingServers::execPingServer },
		{ .NameUTF8 = UTF8TEXT("RequestFavoritesServerList"), .Pointer = &UMatchmakingServers::execRequestFavoritesServerList },
		{ .NameUTF8 = UTF8TEXT("RequestFriendsServerList"), .Pointer = &UMatchmakingServers::execRequestFriendsServerList },
		{ .NameUTF8 = UTF8TEXT("RequestHistoryServerList"), .Pointer = &UMatchmakingServers::execRequestHistoryServerList },
		{ .NameUTF8 = UTF8TEXT("RequestInternetServerList"), .Pointer = &UMatchmakingServers::execRequestInternetServerList },
		{ .NameUTF8 = UTF8TEXT("RequestLANServerList"), .Pointer = &UMatchmakingServers::execRequestLANServerList },
		{ .NameUTF8 = UTF8TEXT("RequestSpectatorServerList"), .Pointer = &UMatchmakingServers::execRequestSpectatorServerList },
		{ .NameUTF8 = UTF8TEXT("ServerRules"), .Pointer = &UMatchmakingServers::execServerRules },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMatchmakingServers_PingServer, "PingServer" }, // 3129173216
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList, "RequestFavoritesServerList" }, // 914823977
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList, "RequestFriendsServerList" }, // 3020129203
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList, "RequestHistoryServerList" }, // 205207305
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList, "RequestInternetServerList" }, // 4125147494
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList, "RequestLANServerList" }, // 1905390212
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList, "RequestSpectatorServerList" }, // 3305460679
		{ &Z_Construct_UFunction_UMatchmakingServers_ServerRules, "ServerRules" }, // 2696332143
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchmakingServers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMatchmakingServers_Statics
UObject* (*const Z_Construct_UClass_UMatchmakingServers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakingServers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMatchmakingServers_Statics::ClassParams = {
	&UMatchmakingServers::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakingServers_Statics::Class_MetaDataParams), Z_Construct_UClass_UMatchmakingServers_Statics::Class_MetaDataParams)
};
void UMatchmakingServers::StaticRegisterNativesUMatchmakingServers()
{
	UClass* Class = UMatchmakingServers::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UMatchmakingServers_Statics::Funcs));
}
UClass* Z_Construct_UClass_UMatchmakingServers()
{
	if (!Z_Registration_Info_UClass_UMatchmakingServers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMatchmakingServers.OuterSingleton, Z_Construct_UClass_UMatchmakingServers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMatchmakingServers.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMatchmakingServers);
UMatchmakingServers::~UMatchmakingServers() {}
// ********** End Class UMatchmakingServers ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMatchmakingServers, UMatchmakingServers::StaticClass, TEXT("UMatchmakingServers"), &Z_Registration_Info_UClass_UMatchmakingServers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMatchmakingServers), 992203673U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h__Script_SteamCore_2437837942{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
