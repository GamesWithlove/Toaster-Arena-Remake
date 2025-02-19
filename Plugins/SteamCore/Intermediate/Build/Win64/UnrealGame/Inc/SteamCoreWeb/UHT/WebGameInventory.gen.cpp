// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/GameInventory/WebGameInventory.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebGameInventory() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameInventory();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameInventory_NoRegister();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(UWebGameInventory::execUpdateItemDefs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateItemDefs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameInventory::execSupportGetAssetHistory)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SupportGetAssetHistory(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_AssetId,Z_Param_ContextId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameInventory::execHistoryExecuteCommands)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
		P_GET_PROPERTY(FIntProperty,Z_Param_ActorId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HistoryExecuteCommands(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_ContextId,Z_Param_ActorId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameInventory::execGetUserHistory)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserHistory(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_ContextId,Z_Param_StartTime,Z_Param_EndTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameInventory::execGetHistoryCommandDetails)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Arguments);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHistoryCommandDetails(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_Command,Z_Param_ContextId,Z_Param_Arguments);
		P_NATIVE_END;
	}
	void UWebGameInventory::StaticRegisterNativesUWebGameInventory()
	{
		UClass* Class = UWebGameInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHistoryCommandDetails", &UWebGameInventory::execGetHistoryCommandDetails },
			{ "GetUserHistory", &UWebGameInventory::execGetUserHistory },
			{ "HistoryExecuteCommands", &UWebGameInventory::execHistoryExecuteCommands },
			{ "SupportGetAssetHistory", &UWebGameInventory::execSupportGetAssetHistory },
			{ "UpdateItemDefs", &UWebGameInventory::execUpdateItemDefs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics
	{
		struct WebGameInventory_eventGetHistoryCommandDetails_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppId;
			FString SteamId;
			FString Command;
			FString ContextId;
			FString Arguments;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Arguments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, Command), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, ContextId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, Arguments), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Command,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_ContextId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Arguments,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameInventory" },
		{ "Comment", "/**\n\x09* Gets a history of Commands\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09""appid of game\n\x09* @param\x09SteamId\x09\x09\x09The steam ID of the account to operate on\n\x09* @param\x09""Command\x09\x09\x09The Command to run on that asset\n\x09* @param\x09""ContextId\x09\x09The context to fetch history for\n\x09* @param\x09""Arguments\x09\x09The arguments that were provided with the Command in the first place\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventory.h" },
		{ "ToolTip", "Gets a history of Commands\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   appid of game\n@param        SteamId                 The steam ID of the account to operate on\n@param        Command                 The Command to run on that asset\n@param        ContextId               The context to fetch history for\n@param        Arguments               The arguments that were provided with the Command in the first place" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameInventory, nullptr, "GetHistoryCommandDetails", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::WebGameInventory_eventGetHistoryCommandDetails_Parms), Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics
	{
		struct WebGameInventory_eventGetUserHistory_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppId;
			FString SteamId;
			FString ContextId;
			int32 StartTime;
			int32 EndTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, ContextId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, EndTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_ContextId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_EndTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameInventory" },
		{ "Comment", "/**\n\x09* Gets a history of user\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09""appid of game\n\x09* @param\x09SteamId\x09\x09\x09The Steam ID to fetch history for\n\x09* @param\x09""ContextId\x09\x09The context to fetch history for\n\x09* @param\x09StartTime\x09\x09Start time of the history range to collect\n\x09* @param\x09""EndTime\x09\x09\x09""End time of the history range to collect\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventory.h" },
		{ "ToolTip", "Gets a history of user\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   appid of game\n@param        SteamId                 The Steam ID to fetch history for\n@param        ContextId               The context to fetch history for\n@param        StartTime               Start time of the history range to collect\n@param        EndTime                 End time of the history range to collect" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameInventory, nullptr, "GetUserHistory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::WebGameInventory_eventGetUserHistory_Parms), Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameInventory_GetUserHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics
	{
		struct WebGameInventory_eventHistoryExecuteCommands_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppId;
			FString SteamId;
			FString ContextId;
			int32 ActorId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActorId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, ContextId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_ActorId = { "ActorId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, ActorId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_ContextId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_ActorId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameInventory" },
		{ "Comment", "/**\n\x09* Gets a history of user\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09""appid of game\n\x09* @param\x09SteamId\x09\x09\x09The Steam ID to fetch history for\n\x09* @param\x09""ContextId\x09\x09The context to fetch history for\n\x09* @param\x09""ActorId\x09\x09\x09""A unique 32 bit ID for the support person executing the Command\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventory.h" },
		{ "ToolTip", "Gets a history of user\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   appid of game\n@param        SteamId                 The Steam ID to fetch history for\n@param        ContextId               The context to fetch history for\n@param        ActorId                 A unique 32 bit ID for the support person executing the Command" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameInventory, nullptr, "HistoryExecuteCommands", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::WebGameInventory_eventHistoryExecuteCommands_Parms), Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics
	{
		struct WebGameInventory_eventSupportGetAssetHistory_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppId;
			FString AssetId;
			FString ContextId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventSupportGetAssetHistory_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventSupportGetAssetHistory_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventSupportGetAssetHistory_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventSupportGetAssetHistory_Parms, AssetId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameInventory_eventSupportGetAssetHistory_Parms, ContextId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_AssetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_ContextId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameInventory" },
		{ "Comment", "/**\n\x09* Gets a history of user\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09""appid of game\n\x09* @param\x09""AssetId\x09\x09\x09The asset ID to operate on\n\x09* @param\x09""ContextId\x09\x09The context to fetch history for\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventory.h" },
		{ "ToolTip", "Gets a history of user\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   appid of game\n@param        AssetId                 The asset ID to operate on\n@param        ContextId               The context to fetch history for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameInventory, nullptr, "SupportGetAssetHistory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::WebGameInventory_eventSupportGetAssetHistory_Parms), Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameInventory" },
		{ "Comment", "/**\n\x09* FUNCTION NOT SUPPORTED\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventory.h" },
		{ "ToolTip", "FUNCTION NOT SUPPORTED" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameInventory, nullptr, "UpdateItemDefs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebGameInventory);
	UClass* Z_Construct_UClass_UWebGameInventory_NoRegister()
	{
		return UWebGameInventory::StaticClass();
	}
	struct Z_Construct_UClass_UWebGameInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebGameInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebGameInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails, "GetHistoryCommandDetails" }, // 3100132214
		{ &Z_Construct_UFunction_UWebGameInventory_GetUserHistory, "GetUserHistory" }, // 679694402
		{ &Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands, "HistoryExecuteCommands" }, // 1167430972
		{ &Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory, "SupportGetAssetHistory" }, // 1931958006
		{ &Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs, "UpdateItemDefs" }, // 1622099998
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebGameInventory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameInventory/WebGameInventory.h" },
		{ "ModuleRelativePath", "Public/GameInventory/WebGameInventory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebGameInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebGameInventory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebGameInventory_Statics::ClassParams = {
		&UWebGameInventory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebGameInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebGameInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebGameInventory()
	{
		if (!Z_Registration_Info_UClass_UWebGameInventory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebGameInventory.OuterSingleton, Z_Construct_UClass_UWebGameInventory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebGameInventory.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebGameInventory>()
	{
		return UWebGameInventory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebGameInventory);
	UWebGameInventory::~UWebGameInventory() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameInventory_WebGameInventory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameInventory_WebGameInventory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebGameInventory, UWebGameInventory::StaticClass, TEXT("UWebGameInventory"), &Z_Registration_Info_UClass_UWebGameInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebGameInventory), 2609666561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameInventory_WebGameInventory_h_1427495593(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameInventory_WebGameInventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameInventory_WebGameInventory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
