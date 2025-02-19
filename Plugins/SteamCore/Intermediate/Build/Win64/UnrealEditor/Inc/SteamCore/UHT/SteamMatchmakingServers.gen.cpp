// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamMatchmakingServers/SteamMatchmakingServers.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMatchmakingServers() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UMatchmakingServers();
	STEAMCORE_API UClass* Z_Construct_UClass_UMatchmakingServers_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UServerFilter_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
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
	void UMatchmakingServers::StaticRegisterNativesUMatchmakingServers()
	{
		UClass* Class = UMatchmakingServers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PingServer", &UMatchmakingServers::execPingServer },
			{ "RequestFavoritesServerList", &UMatchmakingServers::execRequestFavoritesServerList },
			{ "RequestFriendsServerList", &UMatchmakingServers::execRequestFriendsServerList },
			{ "RequestHistoryServerList", &UMatchmakingServers::execRequestHistoryServerList },
			{ "RequestInternetServerList", &UMatchmakingServers::execRequestInternetServerList },
			{ "RequestLANServerList", &UMatchmakingServers::execRequestLANServerList },
			{ "RequestSpectatorServerList", &UMatchmakingServers::execRequestSpectatorServerList },
			{ "ServerRules", &UMatchmakingServers::execServerRules },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics
	{
		struct MatchmakingServers_eventPingServer_Parms
		{
			FScriptDelegate Callback;
			FString Ip;
			int32 QueryPort;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Ip;
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventPingServer_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_Callback_MetaData)) }; // 3001484902
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_Ip = { "Ip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventPingServer_Parms, Ip), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventPingServer_Parms, QueryPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_Ip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_QueryPort,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|MatchmakingServers" },
		{ "Comment", "/**\n\x09* Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.\n\x09*\n\x09* @param\x09Ip\x09\x09\x09The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09QueryPort\x09The port of the game server you are querying, in host order.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
		{ "ToolTip", "Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.\n\n@param        Ip                      The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        QueryPort       The port of the game server you are querying, in host order." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "PingServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::MatchmakingServers_eventPingServer_Parms), Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmakingServers_PingServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestFavoritesServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_ServerCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_ServerCallback_MetaData)) }; // 1314296444
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestFavoritesServerList_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestFavoritesServerList_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestFavoritesServerList_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((MatchmakingServers_eventRequestFavoritesServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MatchmakingServers_eventRequestFavoritesServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestFavoritesServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_ServerCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_MaxResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_bIgnoreNonResponsive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_ServerFilter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09* @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out \n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09* @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09*/" },
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param        AppId                                   The app to request the server list of.\n@param        Timeout                                 How long to run the function until we time out.\n@param        MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param        ServerFilter                    Optional server filter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestFavoritesServerList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::MatchmakingServers_eventRequestFavoritesServerList_Parms), Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestFriendsServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_ServerCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_ServerCallback_MetaData)) }; // 1314296444
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestFriendsServerList_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestFriendsServerList_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestFriendsServerList_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((MatchmakingServers_eventRequestFriendsServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MatchmakingServers_eventRequestFriendsServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestFriendsServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_ServerCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_MaxResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_bIgnoreNonResponsive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_ServerFilter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09* @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out \n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09* @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09*/" },
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param        AppId                                   The app to request the server list of.\n@param        Timeout                                 How long to run the function until we time out.\n@param        MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param        ServerFilter                    Optional server filter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestFriendsServerList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::MatchmakingServers_eventRequestFriendsServerList_Parms), Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestHistoryServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_ServerCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_ServerCallback_MetaData)) }; // 1314296444
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestHistoryServerList_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestHistoryServerList_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestHistoryServerList_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((MatchmakingServers_eventRequestHistoryServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MatchmakingServers_eventRequestHistoryServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestHistoryServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_ServerCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_MaxResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_bIgnoreNonResponsive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_ServerFilter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09* @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out \n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09* @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09*/" },
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param        AppId                                   The app to request the server list of.\n@param        Timeout                                 How long to run the function until we time out.\n@param        MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param        ServerFilter                    Optional server filter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestHistoryServerList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::MatchmakingServers_eventRequestHistoryServerList_Parms), Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestInternetServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_ServerCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_ServerCallback_MetaData)) }; // 1314296444
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestInternetServerList_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestInternetServerList_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestInternetServerList_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((MatchmakingServers_eventRequestInternetServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MatchmakingServers_eventRequestInternetServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestInternetServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_ServerCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_MaxResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_bIgnoreNonResponsive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_ServerFilter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09* @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out \n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09* @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09* \n\x09*/" },
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param        AppId                                   The app to request the server list of.\n@param        Timeout                                 How long to run the function until we time out.\n@param        MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param        ServerFilter                    Optional server filter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestInternetServerList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::MatchmakingServers_eventRequestInternetServerList_Parms), Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestLANServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_ServerCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_ServerCallback_MetaData)) }; // 1314296444
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestLANServerList_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestLANServerList_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestLANServerList_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((MatchmakingServers_eventRequestLANServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MatchmakingServers_eventRequestLANServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestLANServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_ServerCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_MaxResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_bIgnoreNonResponsive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_ServerFilter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09* @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out \n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09* @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09*/" },
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param        AppId                                   The app to request the server list of.\n@param        Timeout                                 How long to run the function until we time out.\n@param        MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param        ServerFilter                    Optional server filter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestLANServerList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::MatchmakingServers_eventRequestLANServerList_Parms), Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ServerCallback;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_ServerCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_ServerCallback = { "ServerCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestSpectatorServerList_Parms, ServerCallback), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_ServerCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_ServerCallback_MetaData)) }; // 1314296444
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestSpectatorServerList_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestSpectatorServerList_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestSpectatorServerList_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((MatchmakingServers_eventRequestSpectatorServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MatchmakingServers_eventRequestSpectatorServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventRequestSpectatorServerList_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_ServerCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_Timeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_MaxResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_bIgnoreNonResponsive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_ServerFilter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* This function will continue to run until it either times out or has reached @MaxResults and for every new server\n\x09* that responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\x09*\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09\x09\x09\x09How long to run the function until we time out.\n\x09* @param\x09MaxResults\x09\x09\x09\x09Max amount of servers to get, when we reach this number the function will time out \n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09* @param\x09ServerFilter\x09\x09\x09Optional server filter\n\x09*/" },
		{ "CPP_Default_AppId", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\nThis function will continue to run until it either times out or has reached @MaxResults and for every new server\nthat responds you will get a new Callback with a Data struct that you can use to store/identify the server that responded.\n\n@param        AppId                                   The app to request the server list of.\n@param        Timeout                                 How long to run the function until we time out.\n@param        MaxResults                              Max amount of servers to get, when we reach this number the function will time out\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers\n@param        ServerFilter                    Optional server filter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestSpectatorServerList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::MatchmakingServers_eventRequestSpectatorServerList_Parms), Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics
	{
		struct MatchmakingServers_eventServerRules_Parms
		{
			FScriptDelegate Callback;
			FString Ip;
			int32 QueryPort;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Ip;
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventServerRules_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_Callback_MetaData)) }; // 201486877
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_Ip = { "Ip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventServerRules_Parms, Ip), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MatchmakingServers_eventServerRules_Parms, QueryPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_Ip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_QueryPort,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|MatchmakingServers" },
		{ "Comment", "/**\n\x09* Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)\n\x09*\n\x09* @param\x09Ip\x09\x09\x09The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09QueryPort\x09The port of the game server you are querying, in host order.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
		{ "ToolTip", "Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)\n\n@param        Ip                      The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        QueryPort       The port of the game server you are querying, in host order." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "ServerRules", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::MatchmakingServers_eventServerRules_Parms), Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmakingServers_ServerRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMatchmakingServers);
	UClass* Z_Construct_UClass_UMatchmakingServers_NoRegister()
	{
		return UMatchmakingServers::StaticClass();
	}
	struct Z_Construct_UClass_UMatchmakingServers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatchmakingServers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMatchmakingServers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMatchmakingServers_PingServer, "PingServer" }, // 3587049360
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList, "RequestFavoritesServerList" }, // 1376128541
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList, "RequestFriendsServerList" }, // 2376694453
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList, "RequestHistoryServerList" }, // 2393046491
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList, "RequestInternetServerList" }, // 2919519888
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList, "RequestLANServerList" }, // 2429988645
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList, "RequestSpectatorServerList" }, // 2598519617
		{ &Z_Construct_UFunction_UMatchmakingServers_ServerRules, "ServerRules" }, // 852739546
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmakingServers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamMatchmakingServers/SteamMatchmakingServers.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatchmakingServers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchmakingServers>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UMatchmakingServers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakingServers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatchmakingServers()
	{
		if (!Z_Registration_Info_UClass_UMatchmakingServers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMatchmakingServers.OuterSingleton, Z_Construct_UClass_UMatchmakingServers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMatchmakingServers.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<UMatchmakingServers>()
	{
		return UMatchmakingServers::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchmakingServers);
	UMatchmakingServers::~UMatchmakingServers() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMatchmakingServers, UMatchmakingServers::StaticClass, TEXT("UMatchmakingServers"), &Z_Registration_Info_UClass_UMatchmakingServers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMatchmakingServers), 1168641269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_2079627949(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
