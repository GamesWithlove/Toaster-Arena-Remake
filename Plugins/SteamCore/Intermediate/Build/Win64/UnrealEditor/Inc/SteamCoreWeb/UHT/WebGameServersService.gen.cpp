// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/GameServersService/WebGameServersService.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebGameServersService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameServersService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameServersService_NoRegister();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(UWebGameServersService::execGetServerIPsBySteamId)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerSteamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetServerIPsBySteamId(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_ServerSteamId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execGetServerSteamIdsByIP)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerIp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetServerSteamIdsByIP(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_ServerIp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execSetBanStatus)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_UBOOL(Z_Param_bBanned);
		P_GET_PROPERTY(FIntProperty,Z_Param_BanSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBanStatus(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_bBanned,Z_Param_BanSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execQueryLoginToken)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_LoginToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryLoginToken(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_LoginToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execGetAccountPublicInfo)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAccountPublicInfo(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execDeleteAccount)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteAccount(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execResetLoginToken)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetLoginToken(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execSetMemo)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Memo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMemo(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_Memo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execCreateAccount)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Memo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateAccount(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_Memo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execGetAccountList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAccountList(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key);
		P_NATIVE_END;
	}
	void UWebGameServersService::StaticRegisterNativesUWebGameServersService()
	{
		UClass* Class = UWebGameServersService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAccount", &UWebGameServersService::execCreateAccount },
			{ "DeleteAccount", &UWebGameServersService::execDeleteAccount },
			{ "GetAccountList", &UWebGameServersService::execGetAccountList },
			{ "GetAccountPublicInfo", &UWebGameServersService::execGetAccountPublicInfo },
			{ "GetServerIPsBySteamId", &UWebGameServersService::execGetServerIPsBySteamId },
			{ "GetServerSteamIdsByIP", &UWebGameServersService::execGetServerSteamIdsByIP },
			{ "QueryLoginToken", &UWebGameServersService::execQueryLoginToken },
			{ "ResetLoginToken", &UWebGameServersService::execResetLoginToken },
			{ "SetBanStatus", &UWebGameServersService::execSetBanStatus },
			{ "SetMemo", &UWebGameServersService::execSetMemo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics
	{
		struct WebGameServersService_eventCreateAccount_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppId;
			FString Memo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Memo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventCreateAccount_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventCreateAccount_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventCreateAccount_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Memo = { "Memo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventCreateAccount_Parms, Memo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Memo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* Creates a persistent game server account\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09The app to use the account for\n\x09* @param\x09Memo\x09\x09The Memo to set on the new account\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "Creates a persistent game server account\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        AppId           The app to use the account for\n@param        Memo            The Memo to set on the new account" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "CreateAccount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::WebGameServersService_eventCreateAccount_Parms), Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_CreateAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics
	{
		struct WebGameServersService_eventDeleteAccount_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventDeleteAccount_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventDeleteAccount_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventDeleteAccount_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_SteamId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* Deletes a persistent game server account\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09The SteamID of the game server account to delete\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "Deletes a persistent game server account\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         The SteamID of the game server account to delete" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "DeleteAccount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::WebGameServersService_eventDeleteAccount_Parms), Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_DeleteAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics
	{
		struct WebGameServersService_eventGetAccountList_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventGetAccountList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventGetAccountList_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* Gets a list of game server accounts with their logon tokens\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "Gets a list of game server accounts with their logon tokens\n\n@param        Key                     Steamworks Web API publisher authentication Key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "GetAccountList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::WebGameServersService_eventGetAccountList_Parms), Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_GetAccountList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics
	{
		struct WebGameServersService_eventGetAccountPublicInfo_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventGetAccountPublicInfo_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventGetAccountPublicInfo_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventGetAccountPublicInfo_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_SteamId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* Gets public information about a given game server account\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09The SteamID of the game server to get info on\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "Gets public information about a given game server account\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         The SteamID of the game server to get info on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "GetAccountPublicInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::WebGameServersService_eventGetAccountPublicInfo_Parms), Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics
	{
		struct WebGameServersService_eventGetServerIPsBySteamId_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString ServerSteamId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerSteamId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventGetServerIPsBySteamId_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventGetServerIPsBySteamId_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::NewProp_ServerSteamId = { "ServerSteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventGetServerIPsBySteamId_Parms, ServerSteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::NewProp_ServerSteamId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* Gets a list of server IP addresses given a list of SteamIDs\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09ServerSteamId\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "Gets a list of server IP addresses given a list of SteamIDs\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        ServerSteamId" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "GetServerIPsBySteamId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::WebGameServersService_eventGetServerIPsBySteamId_Parms), Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics
	{
		struct WebGameServersService_eventGetServerSteamIdsByIP_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString ServerIp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerIp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventGetServerSteamIdsByIP_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventGetServerSteamIdsByIP_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::NewProp_ServerIp = { "ServerIp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventGetServerSteamIdsByIP_Parms, ServerIp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::NewProp_ServerIp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* Gets a list of server SteamIDs given a list of IPs\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09ServerIp\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "Gets a list of server SteamIDs given a list of IPs\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        ServerIp" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "GetServerSteamIdsByIP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::WebGameServersService_eventGetServerSteamIdsByIP_Parms), Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics
	{
		struct WebGameServersService_eventQueryLoginToken_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString LoginToken;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LoginToken;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventQueryLoginToken_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventQueryLoginToken_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_LoginToken = { "LoginToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventQueryLoginToken_Parms, LoginToken), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_LoginToken,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* Queries the status of the specified token, which must be owned by you\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09LoginToken\x09\x09Login token to query\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "Queries the status of the specified token, which must be owned by you\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        LoginToken              Login token to query" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "QueryLoginToken", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::WebGameServersService_eventQueryLoginToken_Parms), Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_QueryLoginToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics
	{
		struct WebGameServersService_eventResetLoginToken_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventResetLoginToken_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventResetLoginToken_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventResetLoginToken_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_SteamId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* Generates a new login token for the specified game server\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09The SteamID of the game server to reset the login token of\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "Generates a new login token for the specified game server\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         The SteamID of the game server to reset the login token of" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "ResetLoginToken", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::WebGameServersService_eventResetLoginToken_Parms), Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_ResetLoginToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics
	{
		struct WebGameServersService_eventSetBanStatus_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamId;
			bool bBanned;
			int32 BanSeconds;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static void NewProp_bBanned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBanned;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BanSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventSetBanStatus_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventSetBanStatus_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventSetBanStatus_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_bBanned_SetBit(void* Obj)
	{
		((WebGameServersService_eventSetBanStatus_Parms*)Obj)->bBanned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_bBanned = { "bBanned", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebGameServersService_eventSetBanStatus_Parms), &Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_bBanned_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_BanSeconds = { "BanSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventSetBanStatus_Parms, BanSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_bBanned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_BanSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* performs a GSLT ban/unban of GSLT associated with a GS. If banning, also bans associated users' GSLTs.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\n\x09* @param\x09""bBanned\x09\x09\x09\n\x09* @param\x09""BanSeconds\x09\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "performs a GSLT ban/unban of GSLT associated with a GS. If banning, also bans associated users' GSLTs.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId\n@param        bBanned\n@param        BanSeconds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "SetBanStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::WebGameServersService_eventSetBanStatus_Parms), Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_SetBanStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics
	{
		struct WebGameServersService_eventSetMemo_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamId;
			FString Memo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Memo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventSetMemo_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventSetMemo_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventSetMemo_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Memo = { "Memo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebGameServersService_eventSetMemo_Parms, Memo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Memo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|GameServersService" },
		{ "Comment", "/**\n\x09* This method changes the Memo associated with the game server account. Memos do not affect the account in any way.\n\x09* The Memo shows up in the GetAccountList response and serves only as a reminder of what the account is used for.\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09The SteamID of the game server to set the Memo on\n\x09* @param\x09Memo\x09\x09The Memo to set on the new account\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
		{ "ToolTip", "This method changes the Memo associated with the game server account. Memos do not affect the account in any way.\nThe Memo shows up in the GetAccountList response and serves only as a reminder of what the account is used for.\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         The SteamID of the game server to set the Memo on\n@param        Memo            The Memo to set on the new account" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "SetMemo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::WebGameServersService_eventSetMemo_Parms), Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_SetMemo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebGameServersService);
	UClass* Z_Construct_UClass_UWebGameServersService_NoRegister()
	{
		return UWebGameServersService::StaticClass();
	}
	struct Z_Construct_UClass_UWebGameServersService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebGameServersService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebGameServersService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebGameServersService_CreateAccount, "CreateAccount" }, // 479135993
		{ &Z_Construct_UFunction_UWebGameServersService_DeleteAccount, "DeleteAccount" }, // 1518806947
		{ &Z_Construct_UFunction_UWebGameServersService_GetAccountList, "GetAccountList" }, // 1104527266
		{ &Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo, "GetAccountPublicInfo" }, // 294092269
		{ &Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamId, "GetServerIPsBySteamId" }, // 3631786774
		{ &Z_Construct_UFunction_UWebGameServersService_GetServerSteamIdsByIP, "GetServerSteamIdsByIP" }, // 2137608406
		{ &Z_Construct_UFunction_UWebGameServersService_QueryLoginToken, "QueryLoginToken" }, // 1380062854
		{ &Z_Construct_UFunction_UWebGameServersService_ResetLoginToken, "ResetLoginToken" }, // 1949247897
		{ &Z_Construct_UFunction_UWebGameServersService_SetBanStatus, "SetBanStatus" }, // 3998739878
		{ &Z_Construct_UFunction_UWebGameServersService_SetMemo, "SetMemo" }, // 352718773
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebGameServersService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameServersService/WebGameServersService.h" },
		{ "ModuleRelativePath", "Public/GameServersService/WebGameServersService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebGameServersService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebGameServersService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebGameServersService_Statics::ClassParams = {
		&UWebGameServersService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebGameServersService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebGameServersService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebGameServersService()
	{
		if (!Z_Registration_Info_UClass_UWebGameServersService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebGameServersService.OuterSingleton, Z_Construct_UClass_UWebGameServersService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebGameServersService.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebGameServersService>()
	{
		return UWebGameServersService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebGameServersService);
	UWebGameServersService::~UWebGameServersService() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameServersService_WebGameServersService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameServersService_WebGameServersService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebGameServersService, UWebGameServersService::StaticClass, TEXT("UWebGameServersService"), &Z_Registration_Info_UClass_UWebGameServersService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebGameServersService), 2192640165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameServersService_WebGameServersService_h_2450966783(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameServersService_WebGameServersService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameServersService_WebGameServersService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
