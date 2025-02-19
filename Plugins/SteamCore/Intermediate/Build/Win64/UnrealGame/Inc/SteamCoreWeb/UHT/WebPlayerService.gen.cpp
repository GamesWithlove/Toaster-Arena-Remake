// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/PlayerService/WebPlayerService.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPlayerService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPlayerService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPlayerService_NoRegister();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(UWebPlayerService::execIsPlayingSharedGame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppIdPlaying);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IsPlayingSharedGame(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppIdPlaying);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPlayerService::execGetCommunityBadgeProgress)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FIntProperty,Z_Param_BadgeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCommunityBadgeProgress(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_BadgeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPlayerService::execGetBadges)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBadges(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPlayerService::execGetSteamLevel)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSteamLevel(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPlayerService::execGetOwnedGames)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_UBOOL(Z_Param_bIncludeAppInfo);
		P_GET_UBOOL(Z_Param_bIncludePlayedFreeGames);
		P_GET_TARRAY(int32,Z_Param_Filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOwnedGames(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_bIncludeAppInfo,Z_Param_bIncludePlayedFreeGames,Z_Param_Filter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPlayerService::execGetRecentlyPlayedGames)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRecentlyPlayedGames(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_Count);
		P_NATIVE_END;
	}
	void UWebPlayerService::StaticRegisterNativesUWebPlayerService()
	{
		UClass* Class = UWebPlayerService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBadges", &UWebPlayerService::execGetBadges },
			{ "GetCommunityBadgeProgress", &UWebPlayerService::execGetCommunityBadgeProgress },
			{ "GetOwnedGames", &UWebPlayerService::execGetOwnedGames },
			{ "GetRecentlyPlayedGames", &UWebPlayerService::execGetRecentlyPlayedGames },
			{ "GetSteamLevel", &UWebPlayerService::execGetSteamLevel },
			{ "IsPlayingSharedGame", &UWebPlayerService::execIsPlayingSharedGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics
	{
		struct WebPlayerService_eventGetBadges_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetBadges_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetBadges_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetBadges_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::NewProp_SteamId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
		{ "Comment", "/**\n\x09* Gets badges that are owned by a specific user\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09The player we're asking about\n\x09*/" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
		{ "ToolTip", "Gets badges that are owned by a specific user\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 The player we're asking about" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "GetBadges", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::WebPlayerService_eventGetBadges_Parms), Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPlayerService_GetBadges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPlayerService_GetBadges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics
	{
		struct WebPlayerService_eventGetCommunityBadgeProgress_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamId;
			int32 BadgeId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BadgeId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetCommunityBadgeProgress_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetCommunityBadgeProgress_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetCommunityBadgeProgress_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_BadgeId = { "BadgeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetCommunityBadgeProgress_Parms, BadgeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::NewProp_BadgeId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
		{ "Comment", "/**\n\x09* Gets all the quests needed to get the specified badge, and which are completed\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09The player we're asking about\n\x09* @param\x09""BadgeId\x09\x09\x09The badge we're asking about\n\x09*/" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
		{ "ToolTip", "Gets all the quests needed to get the specified badge, and which are completed\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 The player we're asking about\n@param        BadgeId                 The badge we're asking about" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "GetCommunityBadgeProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::WebPlayerService_eventGetCommunityBadgeProgress_Parms), Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics
	{
		struct WebPlayerService_eventGetOwnedGames_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamId;
			bool bIncludeAppInfo;
			bool bIncludePlayedFreeGames;
			TArray<int32> Filter;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static void NewProp_bIncludeAppInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeAppInfo;
		static void NewProp_bIncludePlayedFreeGames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludePlayedFreeGames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Filter_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetOwnedGames_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetOwnedGames_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetOwnedGames_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludeAppInfo_SetBit(void* Obj)
	{
		((WebPlayerService_eventGetOwnedGames_Parms*)Obj)->bIncludeAppInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludeAppInfo = { "bIncludeAppInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebPlayerService_eventGetOwnedGames_Parms), &Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludeAppInfo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludePlayedFreeGames_SetBit(void* Obj)
	{
		((WebPlayerService_eventGetOwnedGames_Parms*)Obj)->bIncludePlayedFreeGames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludePlayedFreeGames = { "bIncludePlayedFreeGames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebPlayerService_eventGetOwnedGames_Parms), &Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludePlayedFreeGames_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Filter_Inner = { "Filter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetOwnedGames_Parms, Filter), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludeAppInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_bIncludePlayedFreeGames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Filter_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
		{ "Comment", "/**\n\x09* Return a list of games owned by the player\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09\x09The player we're asking about\n\x09* @param\x09""bIncludeAppInfo\x09\x09\x09\x09true if we want additional details (name, icon) about each game\n\x09* @param\x09""bIncludePlayedFreeGames\x09\x09""Free games are excluded by default. If this is set, free games the user has played will be returned.\n\x09* @param\x09""Filter\x09\x09\x09\x09\x09\x09if set, restricts result set to the passed in apps\n\x09*/" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
		{ "ToolTip", "Return a list of games owned by the player\n\n@param        Key                                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                                         The player we're asking about\n@param        bIncludeAppInfo                         true if we want additional details (name, icon) about each game\n@param        bIncludePlayedFreeGames         Free games are excluded by default. If this is set, free games the user has played will be returned.\n@param        Filter                                          if set, restricts result set to the passed in apps" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "GetOwnedGames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::WebPlayerService_eventGetOwnedGames_Parms), Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPlayerService_GetOwnedGames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPlayerService_GetOwnedGames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics
	{
		struct WebPlayerService_eventGetRecentlyPlayedGames_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamId;
			int32 Count;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetRecentlyPlayedGames_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetRecentlyPlayedGames_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetRecentlyPlayedGames_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetRecentlyPlayedGames_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
		{ "Comment", "/**\n\x09* Gets information about a player's recently played games\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09The player we're asking about\n\x09* @param\x09""Count\x09\x09The number of games to return (0/unset: all)\n\x09*/" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
		{ "ToolTip", "Gets information about a player's recently played games\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         The player we're asking about\n@param        Count           The number of games to return (0/unset: all)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "GetRecentlyPlayedGames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::WebPlayerService_eventGetRecentlyPlayedGames_Parms), Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics
	{
		struct WebPlayerService_eventGetSteamLevel_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetSteamLevel_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetSteamLevel_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventGetSteamLevel_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::NewProp_SteamId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
		{ "Comment", "/**\n\x09* Returns the Steam Level of a user\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09\x09The player we're asking about\n\x09*/" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
		{ "ToolTip", "Returns the Steam Level of a user\n\n@param        Key                                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                                         The player we're asking about" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "GetSteamLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::WebPlayerService_eventGetSteamLevel_Parms), Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPlayerService_GetSteamLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPlayerService_GetSteamLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics
	{
		struct WebPlayerService_eventIsPlayingSharedGame_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamId;
			int32 AppIdPlaying;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppIdPlaying;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventIsPlayingSharedGame_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventIsPlayingSharedGame_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventIsPlayingSharedGame_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_AppIdPlaying = { "AppIdPlaying", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebPlayerService_eventIsPlayingSharedGame_Parms, AppIdPlaying), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::NewProp_AppIdPlaying,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|PlayerService" },
		{ "Comment", "/**\n\x09* Returns valid lender SteamID if game currently played is borrowed\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09The player we're asking about\n\x09* @param\x09""AppIdPlaying\x09The game player is currently playing\n\x09*/" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
		{ "ToolTip", "Returns valid lender SteamID if game currently played is borrowed\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 The player we're asking about\n@param        AppIdPlaying    The game player is currently playing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPlayerService, nullptr, "IsPlayingSharedGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::WebPlayerService_eventIsPlayingSharedGame_Parms), Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebPlayerService);
	UClass* Z_Construct_UClass_UWebPlayerService_NoRegister()
	{
		return UWebPlayerService::StaticClass();
	}
	struct Z_Construct_UClass_UWebPlayerService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebPlayerService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebPlayerService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebPlayerService_GetBadges, "GetBadges" }, // 2545442556
		{ &Z_Construct_UFunction_UWebPlayerService_GetCommunityBadgeProgress, "GetCommunityBadgeProgress" }, // 3441940654
		{ &Z_Construct_UFunction_UWebPlayerService_GetOwnedGames, "GetOwnedGames" }, // 369244548
		{ &Z_Construct_UFunction_UWebPlayerService_GetRecentlyPlayedGames, "GetRecentlyPlayedGames" }, // 1663073569
		{ &Z_Construct_UFunction_UWebPlayerService_GetSteamLevel, "GetSteamLevel" }, // 3911623732
		{ &Z_Construct_UFunction_UWebPlayerService_IsPlayingSharedGame, "IsPlayingSharedGame" }, // 1247957941
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebPlayerService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerService/WebPlayerService.h" },
		{ "ModuleRelativePath", "Public/PlayerService/WebPlayerService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebPlayerService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebPlayerService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebPlayerService_Statics::ClassParams = {
		&UWebPlayerService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebPlayerService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebPlayerService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebPlayerService()
	{
		if (!Z_Registration_Info_UClass_UWebPlayerService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebPlayerService.OuterSingleton, Z_Construct_UClass_UWebPlayerService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebPlayerService.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebPlayerService>()
	{
		return UWebPlayerService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebPlayerService);
	UWebPlayerService::~UWebPlayerService() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebPlayerService, UWebPlayerService::StaticClass, TEXT("UWebPlayerService"), &Z_Registration_Info_UClass_UWebPlayerService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebPlayerService), 3206227469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_123273459(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_PlayerService_WebPlayerService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
