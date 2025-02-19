// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamGameServerStats/WebSteamGameServerStats.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamGameServerStats() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamGameServerStats();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamGameServerStats_NoRegister();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(UWebSteamGameServerStats::execGetGameServerPlayerStatsForGame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_RangeStart);
		P_GET_PROPERTY(FStrProperty,Z_Param_RangeEnd);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGameServerPlayerStatsForGame(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_GameId,Z_Param_AppId,Z_Param_RangeStart,Z_Param_RangeEnd,Z_Param_MaxResults);
		P_NATIVE_END;
	}
	void UWebSteamGameServerStats::StaticRegisterNativesUWebSteamGameServerStats()
	{
		UClass* Class = UWebSteamGameServerStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameServerPlayerStatsForGame", &UWebSteamGameServerStats::execGetGameServerPlayerStatsForGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics
	{
		struct WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString GameId;
			int32 AppId;
			FString RangeStart;
			FString RangeEnd;
			int32 MaxResults;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RangeStart;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RangeEnd;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_GameId = { "GameId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, GameId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, RangeStart), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, RangeEnd), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_GameId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_RangeEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::NewProp_MaxResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamGameServerStats" },
		{ "Comment", "/**\n\x09* Get Game Server Player Stats For Game\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09GameId\x09\x09\x09game id to get stats for, if not a mod, it's safe to use appid here\n\x09* @param\x09""AppId\x09\x09\x09""appID of the game\n\x09* @param\x09RangeStart\x09\x09range start date/time (Format: YYYY-MM-DD HH:MM:SS, Seattle local time)\n\x09* @param\x09RangeEnd\x09\x09range end date/time (Format: YYYY-MM-DD HH:MM:SS, Seattle local time)\n\x09* @param\x09MaxResults\x09\x09Max number of results to return (up to 1000)\n\x09*/" },
		{ "CPP_Default_MaxResults", "1000" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/WebSteamGameServerStats.h" },
		{ "ToolTip", "Get Game Server Player Stats For Game\n\n@param        Key                             Steamworks Web API publisher authentication key.\n@param        GameId                  game id to get stats for, if not a mod, it's safe to use appid here\n@param        AppId                   appID of the game\n@param        RangeStart              range start date/time (Format: YYYY-MM-DD HH:MM:SS, Seattle local time)\n@param        RangeEnd                range end date/time (Format: YYYY-MM-DD HH:MM:SS, Seattle local time)\n@param        MaxResults              Max number of results to return (up to 1000)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamGameServerStats, nullptr, "GetGameServerPlayerStatsForGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::WebSteamGameServerStats_eventGetGameServerPlayerStatsForGame_Parms), Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebSteamGameServerStats);
	UClass* Z_Construct_UClass_UWebSteamGameServerStats_NoRegister()
	{
		return UWebSteamGameServerStats::StaticClass();
	}
	struct Z_Construct_UClass_UWebSteamGameServerStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSteamGameServerStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSteamGameServerStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamGameServerStats_GetGameServerPlayerStatsForGame, "GetGameServerPlayerStatsForGame" }, // 2498814100
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSteamGameServerStats_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamGameServerStats/WebSteamGameServerStats.h" },
		{ "ModuleRelativePath", "Public/SteamGameServerStats/WebSteamGameServerStats.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSteamGameServerStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamGameServerStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamGameServerStats_Statics::ClassParams = {
		&UWebSteamGameServerStats::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebSteamGameServerStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamGameServerStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSteamGameServerStats()
	{
		if (!Z_Registration_Info_UClass_UWebSteamGameServerStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSteamGameServerStats.OuterSingleton, Z_Construct_UClass_UWebSteamGameServerStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebSteamGameServerStats.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebSteamGameServerStats>()
	{
		return UWebSteamGameServerStats::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSteamGameServerStats);
	UWebSteamGameServerStats::~UWebSteamGameServerStats() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamGameServerStats_WebSteamGameServerStats_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamGameServerStats_WebSteamGameServerStats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebSteamGameServerStats, UWebSteamGameServerStats::StaticClass, TEXT("UWebSteamGameServerStats"), &Z_Registration_Info_UClass_UWebSteamGameServerStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSteamGameServerStats), 2457619776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamGameServerStats_WebSteamGameServerStats_h_1884248450(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamGameServerStats_WebSteamGameServerStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamGameServerStats_WebSteamGameServerStats_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
