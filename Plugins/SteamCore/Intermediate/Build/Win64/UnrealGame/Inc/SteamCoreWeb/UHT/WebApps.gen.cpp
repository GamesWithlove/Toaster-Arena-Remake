// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/Apps/WebApps.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebApps() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebApps();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebApps_NoRegister();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(UWebApps::execUpToDateCheck)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Version);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpToDateCheck(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_AppID,Z_Param_Version);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execSetAppBuildLive)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_BuildID);
		P_GET_PROPERTY(FStrProperty,Z_Param_BetaKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAppBuildLive(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_BuildID,Z_Param_BetaKey,Z_Param_Description);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetServersAtAddress)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Addr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetServersAtAddress(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Addr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetServerList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filter);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetServerList(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_Filter,Z_Param_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetPlayersBanned)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayersBanned(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetCheatingReports)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_TimeBegin);
		P_GET_PROPERTY(FIntProperty,Z_Param_TimeEnd);
		P_GET_UBOOL(Z_Param_bIncludeReports);
		P_GET_UBOOL(Z_Param_bIncludeBans);
		P_GET_PROPERTY(FIntProperty,Z_Param_ReportidMin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCheatingReports(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_TimeBegin,Z_Param_TimeEnd,Z_Param_bIncludeReports,Z_Param_bIncludeBans,Z_Param_ReportidMin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetAppList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAppList(FOnSteamCoreWebAppListCallback(Z_Param_Out_Callback),Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetAppDepotVersions)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAppDepotVersions(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetAppBuilds)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAppBuilds(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebApps::execGetAppBetas)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAppBetas(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID);
		P_NATIVE_END;
	}
	void UWebApps::StaticRegisterNativesUWebApps()
	{
		UClass* Class = UWebApps::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAppBetas", &UWebApps::execGetAppBetas },
			{ "GetAppBuilds", &UWebApps::execGetAppBuilds },
			{ "GetAppDepotVersions", &UWebApps::execGetAppDepotVersions },
			{ "GetAppList", &UWebApps::execGetAppList },
			{ "GetCheatingReports", &UWebApps::execGetCheatingReports },
			{ "GetPlayersBanned", &UWebApps::execGetPlayersBanned },
			{ "GetServerList", &UWebApps::execGetServerList },
			{ "GetServersAtAddress", &UWebApps::execGetServersAtAddress },
			{ "SetAppBuildLive", &UWebApps::execSetAppBuildLive },
			{ "UpToDateCheck", &UWebApps::execUpToDateCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebApps_GetAppBetas_Statics
	{
		struct WebApps_eventGetAppBetas_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetAppBetas_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetAppBetas_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetAppBetas_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* Gets all of the beta branches for the specified application.\n\x09*\n\x09* NOTE: This call requires the publisher API Key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppID\x09\x09The App ID to get the betas of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "Gets all of the beta branches for the specified application.\n\nNOTE: This call requires the publisher API Key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        AppID           The App ID to get the betas of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetAppBetas", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::WebApps_eventGetAppBetas_Parms), Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetAppBetas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_GetAppBetas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics
	{
		struct WebApps_eventGetAppBuilds_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			int32 Count;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetAppBuilds_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetAppBuilds_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetAppBuilds_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetAppBuilds_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09*\xef\xbf\xbdGets an applications build history.\n\x09*\n\x09* NOTE: This call requires the publisher API Key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppID\x09\x09The App ID to get the build history of.\n\x09* @param\x09""Count\x09\x09The number of builds to retrieve, the default is 10.\n\x09*/" },
		{ "CPP_Default_Count", "10" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "\xef\xbf\xbdGets an applications build history.\n\nNOTE: This call requires the publisher API Key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        AppID           The App ID to get the build history of.\n@param        Count           The number of builds to retrieve, the default is 10." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetAppBuilds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::WebApps_eventGetAppBuilds_Parms), Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetAppBuilds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_GetAppBuilds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics
	{
		struct WebApps_eventGetAppDepotVersions_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetAppDepotVersions_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetAppDepotVersions_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetAppDepotVersions_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* Gets all the versions of all the depots for the specified application.\n\x09*\n\x09* NOTE: This call requires the publisher API Key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppID\x09\x09The App ID to get the depot versions for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "Gets all the versions of all the depots for the specified application.\n\nNOTE: This call requires the publisher API Key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        AppID           The App ID to get the depot versions for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetAppDepotVersions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::WebApps_eventGetAppDepotVersions_Parms), Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetAppDepotVersions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_GetAppDepotVersions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetAppList_Statics
	{
		struct WebApps_eventGetAppList_Parms
		{
			FScriptDelegate Callback;
			FString Key;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetAppList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Callback_MetaData)) }; // 2515059740
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetAppList_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetAppList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetAppList_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetAppList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* Gets the complete list of public apps.\n\x09*\n\x09* @param\x09Key\x09\x09Steamworks Web API publisher authentication Key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "Gets the complete list of public apps.\n\n@param        Key             Steamworks Web API publisher authentication Key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetAppList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetAppList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebApps_GetAppList_Statics::WebApps_eventGetAppList_Parms), Z_Construct_UFunction_UWebApps_GetAppList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetAppList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetAppList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetAppList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_GetAppList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics
	{
		struct WebApps_eventGetCheatingReports_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			int32 TimeBegin;
			int32 TimeEnd;
			bool bIncludeReports;
			bool bIncludeBans;
			int32 ReportidMin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeBegin;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeEnd;
		static void NewProp_bIncludeReports_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeReports;
		static void NewProp_bIncludeBans_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeBans;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReportidMin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_TimeBegin = { "TimeBegin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, TimeBegin), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_TimeEnd = { "TimeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, TimeEnd), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeReports_SetBit(void* Obj)
	{
		((WebApps_eventGetCheatingReports_Parms*)Obj)->bIncludeReports = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeReports = { "bIncludeReports", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebApps_eventGetCheatingReports_Parms), &Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeReports_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeBans_SetBit(void* Obj)
	{
		((WebApps_eventGetCheatingReports_Parms*)Obj)->bIncludeBans = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeBans = { "bIncludeBans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebApps_eventGetCheatingReports_Parms), &Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeBans_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_ReportidMin = { "ReportidMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetCheatingReports_Parms, ReportidMin), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_TimeBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_TimeEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeReports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_bIncludeBans,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::NewProp_ReportidMin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* Get a list of cheating reports submitted for this app.\n\x09*\n\x09* Used to gather the cheating reports so that they may be reviewed and a determination made.\n\x09* NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppID\x09\x09\x09\x09""AppID of game\n\x09* @param\x09TimeBegin\x09\x09\x09Time range begin\n\x09* @param\x09TimeEnd\x09\x09\x09\x09Time range end\n\x09* @param\x09""bIncludeReports\x09\x09include reports that were not bans\n\x09* @param\x09""bIncludeBans\x09\x09include reports that were bans\n\x09* @param\x09ReportidMin\x09\x09\x09minimum report id\n\x09*/" },
		{ "CPP_Default_ReportidMin", "0" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "Get a list of cheating reports submitted for this app.\n\nUsed to gather the cheating reports so that they may be reviewed and a determination made.\nNOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppID                           AppID of game\n@param        TimeBegin                       Time range begin\n@param        TimeEnd                         Time range end\n@param        bIncludeReports         include reports that were not bans\n@param        bIncludeBans            include reports that were bans\n@param        ReportidMin                     minimum report id" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetCheatingReports", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::WebApps_eventGetCheatingReports_Parms), Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetCheatingReports()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_GetCheatingReports_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics
	{
		struct WebApps_eventGetPlayersBanned_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetPlayersBanned_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetPlayersBanned_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetPlayersBanned_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09Key\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppID\x09\x09""AppID of game\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        Key             Steamworks Web API publisher authentication Key.\n@param        AppID           AppID of game" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetPlayersBanned", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::WebApps_eventGetPlayersBanned_Parms), Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetPlayersBanned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_GetPlayersBanned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetServerList_Statics
	{
		struct WebApps_eventGetServerList_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString Filter;
			int32 Limit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetServerList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetServerList_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetServerList_Parms, Filter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetServerList_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetServerList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServerList_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetServerList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""Filter\x09\x09Query filter string\n\x09* @param\x09Limit\x09\x09Limit number of servers in the response\n\x09*/" },
		{ "CPP_Default_Limit", "10" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        Filter          Query filter string\n@param        Limit           Limit number of servers in the response" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetServerList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebApps_GetServerList_Statics::WebApps_eventGetServerList_Parms), Z_Construct_UFunction_UWebApps_GetServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetServerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetServerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_GetServerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics
	{
		struct WebApps_eventGetServersAtAddress_Parms
		{
			FScriptDelegate Callback;
			FString Addr;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Addr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetServersAtAddress_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_Addr = { "Addr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventGetServersAtAddress_Parms, Addr), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::NewProp_Addr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* @param\x09""Addr\x09IP or IP:queryport to list\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "@param        Addr    IP or IP:queryport to list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "GetServersAtAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::WebApps_eventGetServersAtAddress_Parms), Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_GetServersAtAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_GetServersAtAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics
	{
		struct WebApps_eventSetAppBuildLive_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			int32 BuildID;
			FString BetaKey;
			FString Description;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BuildID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BetaKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_BuildID = { "BuildID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, BuildID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_BetaKey = { "BetaKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, BetaKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventSetAppBuildLive_Parms, Description), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_BuildID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_BetaKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::NewProp_Description,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppID\x09\x09\x09""AppID of game\n\x09* @param\x09""BuildID\x09\x09\x09""BuildID\n\x09* @param\x09""BetaKey\x09\x09\x09""beta Key, required. Use public for default branch\n\x09* @param\x09""Description\x09\x09optional description for this build\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "NOTE: This call requires a publisher API Key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppID                   AppID of game\n@param        BuildID                 BuildID\n@param        BetaKey                 beta Key, required. Use public for default branch\n@param        Description             optional description for this build" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "SetAppBuildLive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::WebApps_eventSetAppBuildLive_Parms), Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_SetAppBuildLive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_SetAppBuildLive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics
	{
		struct WebApps_eventUpToDateCheck_Parms
		{
			FScriptDelegate Callback;
			int32 AppID;
			int32 Version;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventUpToDateCheck_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventUpToDateCheck_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebApps_eventUpToDateCheck_Parms, Version), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::NewProp_Version,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
		{ "Comment", "/**\n\x09* @param\x09""AppID\x09\x09""AppID of game\n\x09* @param\x09Version\x09\x09The installed version of the game\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
		{ "ToolTip", "@param        AppID           AppID of game\n@param        Version         The installed version of the game" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebApps, nullptr, "UpToDateCheck", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::WebApps_eventUpToDateCheck_Parms), Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebApps_UpToDateCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebApps_UpToDateCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebApps);
	UClass* Z_Construct_UClass_UWebApps_NoRegister()
	{
		return UWebApps::StaticClass();
	}
	struct Z_Construct_UClass_UWebApps_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebApps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebApps_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebApps_GetAppBetas, "GetAppBetas" }, // 1179584554
		{ &Z_Construct_UFunction_UWebApps_GetAppBuilds, "GetAppBuilds" }, // 1139995996
		{ &Z_Construct_UFunction_UWebApps_GetAppDepotVersions, "GetAppDepotVersions" }, // 2933410768
		{ &Z_Construct_UFunction_UWebApps_GetAppList, "GetAppList" }, // 3360581797
		{ &Z_Construct_UFunction_UWebApps_GetCheatingReports, "GetCheatingReports" }, // 464670305
		{ &Z_Construct_UFunction_UWebApps_GetPlayersBanned, "GetPlayersBanned" }, // 3810643753
		{ &Z_Construct_UFunction_UWebApps_GetServerList, "GetServerList" }, // 1743343179
		{ &Z_Construct_UFunction_UWebApps_GetServersAtAddress, "GetServersAtAddress" }, // 1063481519
		{ &Z_Construct_UFunction_UWebApps_SetAppBuildLive, "SetAppBuildLive" }, // 1453902970
		{ &Z_Construct_UFunction_UWebApps_UpToDateCheck, "UpToDateCheck" }, // 1838212576
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebApps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Apps/WebApps.h" },
		{ "ModuleRelativePath", "Public/Apps/WebApps.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebApps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebApps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebApps_Statics::ClassParams = {
		&UWebApps::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebApps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebApps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebApps()
	{
		if (!Z_Registration_Info_UClass_UWebApps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebApps.OuterSingleton, Z_Construct_UClass_UWebApps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebApps.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebApps>()
	{
		return UWebApps::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebApps);
	UWebApps::~UWebApps() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebApps_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebApps_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebApps, UWebApps::StaticClass, TEXT("UWebApps"), &Z_Registration_Info_UClass_UWebApps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebApps), 1935875859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebApps_h_738693582(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebApps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebApps_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
