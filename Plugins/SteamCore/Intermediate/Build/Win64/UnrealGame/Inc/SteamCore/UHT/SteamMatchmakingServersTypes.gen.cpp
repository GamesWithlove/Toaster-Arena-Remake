// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMatchmakingServersTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	STEAMCORE_API UClass* Z_Construct_UClass_UServerFilter();
	STEAMCORE_API UClass* Z_Construct_UClass_UServerFilter_NoRegister();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleted__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerItem();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerRule();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServerAddr();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	DEFINE_FUNCTION(UServerFilter::execGetFilters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetFilters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterPassword)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterPassword();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterProxy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterProxy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterNotAppId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterNotAppId(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterWhitelisted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterWhitelisted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterName(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterVersion)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterVersion(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterLinux)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterLinux();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterNoPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterNoPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterHasPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterHasPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterNotFull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterNotFull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterSecure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterSecure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterDedicated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterDedicated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterGameAddr)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterGameAddr(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterNor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterNor(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterNand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterNand(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterOr)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterOr(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterAnd)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterAnd(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterGameTagsNor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterGameTagsNor(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterGameTagsAnd)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterGameTagsAnd(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterGameDataNor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterGameDataNor(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterGameDataOr)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterGameDataOr(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterGameDataAnd)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterGameDataAnd(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterMap)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterMap(Z_Param_Value);
		P_NATIVE_END;
	}
	void UServerFilter::StaticRegisterNativesUServerFilter()
	{
		UClass* Class = UServerFilter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFilterAnd", &UServerFilter::execAddFilterAnd },
			{ "AddFilterDedicated", &UServerFilter::execAddFilterDedicated },
			{ "AddFilterGameAddr", &UServerFilter::execAddFilterGameAddr },
			{ "AddFilterGameDataAnd", &UServerFilter::execAddFilterGameDataAnd },
			{ "AddFilterGameDataNor", &UServerFilter::execAddFilterGameDataNor },
			{ "AddFilterGameDataOr", &UServerFilter::execAddFilterGameDataOr },
			{ "AddFilterGameTagsAnd", &UServerFilter::execAddFilterGameTagsAnd },
			{ "AddFilterGameTagsNor", &UServerFilter::execAddFilterGameTagsNor },
			{ "AddFilterHasPlayers", &UServerFilter::execAddFilterHasPlayers },
			{ "AddFilterLinux", &UServerFilter::execAddFilterLinux },
			{ "AddFilterMap", &UServerFilter::execAddFilterMap },
			{ "AddFilterName", &UServerFilter::execAddFilterName },
			{ "AddFilterNand", &UServerFilter::execAddFilterNand },
			{ "AddFilterNoPlayers", &UServerFilter::execAddFilterNoPlayers },
			{ "AddFilterNor", &UServerFilter::execAddFilterNor },
			{ "AddFilterNotAppId", &UServerFilter::execAddFilterNotAppId },
			{ "AddFilterNotFull", &UServerFilter::execAddFilterNotFull },
			{ "AddFilterOr", &UServerFilter::execAddFilterOr },
			{ "AddFilterPassword", &UServerFilter::execAddFilterPassword },
			{ "AddFilterProxy", &UServerFilter::execAddFilterProxy },
			{ "AddFilterSecure", &UServerFilter::execAddFilterSecure },
			{ "AddFilterVersion", &UServerFilter::execAddFilterVersion },
			{ "AddFilterWhitelisted", &UServerFilter::execAddFilterWhitelisted },
			{ "GetFilters", &UServerFilter::execGetFilters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics
	{
		struct ServerFilter_eventAddFilterAnd_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ServerFilter_eventAddFilterAnd_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterAnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::ServerFilter_eventAddFilterAnd_Parms), Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterAnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers running dedicated\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers running dedicated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterDedicated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterDedicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics
	{
		struct ServerFilter_eventAddFilterGameAddr_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ServerFilter_eventAddFilterGameAddr_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \x09Return only servers on the specified IP address (port supported and optional)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "*       Return only servers on the specified IP address (port supported and optional)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameAddr", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::ServerFilter_eventAddFilterGameAddr_Parms), Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameAddr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics
	{
		struct ServerFilter_eventAddFilterGameDataAnd_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ServerFilter_eventAddFilterGameDataAnd_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameDataAnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::ServerFilter_eventAddFilterGameDataAnd_Parms), Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics
	{
		struct ServerFilter_eventAddFilterGameDataNor_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ServerFilter_eventAddFilterGameDataNor_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameDataNor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::ServerFilter_eventAddFilterGameDataNor_Parms), Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics
	{
		struct ServerFilter_eventAddFilterGameDataOr_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ServerFilter_eventAddFilterGameDataOr_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers with any of the given tag(s) in their 'hidden' tags (L4D2)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers with any of the given tag(s) in their 'hidden' tags (L4D2)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameDataOr", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::ServerFilter_eventAddFilterGameDataOr_Parms), Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics
	{
		struct ServerFilter_eventAddFilterGameTagsAnd_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ServerFilter_eventAddFilterGameTagsAnd_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameTagsAnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::ServerFilter_eventAddFilterGameTagsAnd_Parms), Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics
	{
		struct ServerFilter_eventAddFilterGameTagsNor_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ServerFilter_eventAddFilterGameTagsNor_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameTagsNor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::ServerFilter_eventAddFilterGameTagsNor_Parms), Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are not empty\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are not empty" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterHasPlayers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers running on a Linux platform\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers running on a Linux platform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterLinux", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterLinux()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics
	{
		struct ServerFilter_eventAddFilterMap_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ServerFilter_eventAddFilterMap_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers running the specified map (ex. cs_italy)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers running the specified map (ex. cs_italy)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::ServerFilter_eventAddFilterMap_Parms), Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterName_Statics
	{
		struct ServerFilter_eventAddFilterName_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ServerFilter_eventAddFilterName_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09 * Servers with their hostname matching [hostname] (can use * as a wildcard)\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers with their hostname matching [hostname] (can use * as a wildcard)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::ServerFilter_eventAddFilterName_Parms), Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics
	{
		struct ServerFilter_eventAddFilterNand_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ServerFilter_eventAddFilterNand_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* A special filter, specifies that servers matching all of the following [x] conditions should not be returned\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* A special filter, specifies that servers matching all of the following [x] conditions should not be returned" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNand", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::ServerFilter_eventAddFilterNand_Parms), Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are empty\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are empty" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNoPlayers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics
	{
		struct ServerFilter_eventAddFilterNor_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ServerFilter_eventAddFilterNor_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* A special filter, specifies that servers matching any of the following [x] conditions should not be returned\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* A special filter, specifies that servers matching any of the following [x] conditions should not be returned" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::ServerFilter_eventAddFilterNor_Parms), Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics
	{
		struct ServerFilter_eventAddFilterNotAppId_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ServerFilter_eventAddFilterNotAppId_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are NOT running game [appid] (This was introduced to block Left 4 Dead games from the Steam Server Browser)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are NOT running game [appid] (This was introduced to block Left 4 Dead games from the Steam Server Browser)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNotAppId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::ServerFilter_eventAddFilterNotAppId_Parms), Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNotAppId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are not full\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are not full" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNotFull", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNotFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics
	{
		struct ServerFilter_eventAddFilterOr_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ServerFilter_eventAddFilterOr_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterOr", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::ServerFilter_eventAddFilterOr_Parms), Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterOr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterPassword_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterPassword_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are not password protected\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are not password protected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterPassword", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterProxy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are spectator proxies\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are spectator proxies" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterProxy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterProxy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterProxy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers using anti-cheat technology (VAC, but potentially others as well)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers using anti-cheat technology (VAC, but potentially others as well)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterSecure", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterSecure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics
	{
		struct ServerFilter_eventAddFilterVersion_Parms
		{
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ServerFilter_eventAddFilterVersion_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09 * Servers running version [version] (can use * as a wildcard)\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers running version [version] (can use * as a wildcard)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::ServerFilter_eventAddFilterVersion_Parms), Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are whitelisted\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are whitelisted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterWhitelisted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_GetFilters_Statics
	{
		struct ServerFilter_eventGetFilters_Parms
		{
			TMap<FString,FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ServerFilter_eventGetFilters_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_GetFilters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_GetFilters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_GetFilters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "GetFilters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UServerFilter_GetFilters_Statics::ServerFilter_eventGetFilters_Parms), Z_Construct_UFunction_UServerFilter_GetFilters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_GetFilters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_GetFilters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_GetFilters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_GetFilters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_GetFilters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UServerFilter);
	UClass* Z_Construct_UClass_UServerFilter_NoRegister()
	{
		return UServerFilter::StaticClass();
	}
	struct Z_Construct_UClass_UServerFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UServerFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UServerFilter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UServerFilter_AddFilterAnd, "AddFilterAnd" }, // 3555134344
		{ &Z_Construct_UFunction_UServerFilter_AddFilterDedicated, "AddFilterDedicated" }, // 2990891551
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameAddr, "AddFilterGameAddr" }, // 2030005332
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd, "AddFilterGameDataAnd" }, // 3657060840
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor, "AddFilterGameDataNor" }, // 2811584648
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr, "AddFilterGameDataOr" }, // 1452153111
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd, "AddFilterGameTagsAnd" }, // 3973800656
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor, "AddFilterGameTagsNor" }, // 442127776
		{ &Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers, "AddFilterHasPlayers" }, // 2026575811
		{ &Z_Construct_UFunction_UServerFilter_AddFilterLinux, "AddFilterLinux" }, // 453708943
		{ &Z_Construct_UFunction_UServerFilter_AddFilterMap, "AddFilterMap" }, // 4041316085
		{ &Z_Construct_UFunction_UServerFilter_AddFilterName, "AddFilterName" }, // 3611425656
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNand, "AddFilterNand" }, // 1273634819
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers, "AddFilterNoPlayers" }, // 2810102362
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNor, "AddFilterNor" }, // 45596308
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNotAppId, "AddFilterNotAppId" }, // 2959206922
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNotFull, "AddFilterNotFull" }, // 956238001
		{ &Z_Construct_UFunction_UServerFilter_AddFilterOr, "AddFilterOr" }, // 3436002360
		{ &Z_Construct_UFunction_UServerFilter_AddFilterPassword, "AddFilterPassword" }, // 3950935226
		{ &Z_Construct_UFunction_UServerFilter_AddFilterProxy, "AddFilterProxy" }, // 2423232665
		{ &Z_Construct_UFunction_UServerFilter_AddFilterSecure, "AddFilterSecure" }, // 1485962189
		{ &Z_Construct_UFunction_UServerFilter_AddFilterVersion, "AddFilterVersion" }, // 2717324420
		{ &Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted, "AddFilterWhitelisted" }, // 2839294913
		{ &Z_Construct_UFunction_UServerFilter_GetFilters, "GetFilters" }, // 3225176273
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerFilter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UServerFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UServerFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UServerFilter_Statics::ClassParams = {
		&UServerFilter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UServerFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UServerFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UServerFilter()
	{
		if (!Z_Registration_Info_UClass_UServerFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UServerFilter.OuterSingleton, Z_Construct_UClass_UServerFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UServerFilter.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<UServerFilter>()
	{
		return UServerFilter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UServerFilter);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamServerAddr;
class UScriptStruct* FSteamServerAddr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamServerAddr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamServerAddr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamServerAddr, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamServerAddr"));
	}
	return Z_Registration_Info_UScriptStruct_SteamServerAddr.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamServerAddr>()
{
	return FSteamServerAddr::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamServerAddr_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionAddressString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionAddressString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamP2PAddr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamP2PAddr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamServerAddr>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamServerAddr, IP), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamServerAddr, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamServerAddr, QueryPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString = { "ConnectionAddressString", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamServerAddr, ConnectionAddressString), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr = { "SteamP2PAddr", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamServerAddr, SteamP2PAddr), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamServerAddr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamServerAddr",
		sizeof(FSteamServerAddr),
		alignof(FSteamServerAddr),
		Z_Construct_UScriptStruct_FSteamServerAddr_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamServerAddr()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamServerAddr.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamServerAddr.InnerSingleton, Z_Construct_UScriptStruct_FSteamServerAddr_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamServerAddr.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameServerItem;
class UScriptStruct* FGameServerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameServerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameServerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameServerItem, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GameServerItem"));
	}
	return Z_Registration_Info_UScriptStruct_GameServerItem.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGameServerItem>()
{
	return FGameServerItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameServerItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameTags_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamServerAddr_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamServerAddr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ping_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Players;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BotPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BotPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ServerVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPassword_MetaData[];
#endif
		static void NewProp_bPassword_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPassword;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSecure_MetaData[];
#endif
		static void NewProp_bSecure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameServerItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameServerItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameServerItem, ServerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameServerItem, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription = { "GameDescription", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameServerItem, GameDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags = { "GameTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameServerItem, GameTags), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr = { "SteamServerAddr", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameServerItem, SteamServerAddr), Z_Construct_UScriptStruct_FSteamServerAddr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr_MetaData)) }; // 1083755344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping = { "Ping", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameServerItem, Ping), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameServerItem, Players), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameServerItem, MaxPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers = { "BotPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameServerItem, BotPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion = { "ServerVersion", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameServerItem, ServerVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_SetBit(void* Obj)
	{
		((FGameServerItem*)Obj)->bPassword = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword = { "bPassword", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameServerItem), &Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure_SetBit(void* Obj)
	{
		((FGameServerItem*)Obj)->bSecure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure = { "bSecure", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameServerItem), &Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameServerItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameServerItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GameServerItem",
		sizeof(FGameServerItem),
		alignof(FGameServerItem),
		Z_Construct_UScriptStruct_FGameServerItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameServerItem()
	{
		if (!Z_Registration_Info_UScriptStruct_GameServerItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameServerItem.InnerSingleton, Z_Construct_UScriptStruct_FGameServerItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameServerItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameServerRule;
class UScriptStruct* FGameServerRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameServerRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameServerRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameServerRule, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GameServerRule"));
	}
	return Z_Registration_Info_UScriptStruct_GameServerRule.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGameServerRule>()
{
	return FGameServerRule::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameServerRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerRule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameServerRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameServerRule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameServerRule, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameServerRule, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameServerRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameServerRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GameServerRule",
		sizeof(FGameServerRule),
		alignof(FGameServerRule),
		Z_Construct_UScriptStruct_FGameServerRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerRule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerRule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameServerRule()
	{
		if (!Z_Registration_Info_UScriptStruct_GameServerRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameServerRule.InnerSingleton, Z_Construct_UScriptStruct_FGameServerRule_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameServerRule.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnServerUpdated_Parms
		{
			FGameServerItem data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnServerUpdated_Parms, data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::NewProp_data_MetaData)) }; // 3242340892
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::_Script_SteamCore_eventOnServerUpdated_Parms), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnServerUpdated_DelegateWrapper(const FScriptDelegate& OnServerUpdated, FGameServerItem const& data)
{
	struct _Script_SteamCore_eventOnServerUpdated_Parms
	{
		FGameServerItem data;
	};
	_Script_SteamCore_eventOnServerUpdated_Parms Parms;
	Parms.data=data;
	OnServerUpdated.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnServerPing_Parms
		{
			FGameServerItem data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnServerPing_Parms, data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_data_MetaData)) }; // 3242340892
	void Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnServerPing_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnServerPing_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerPing__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::_Script_SteamCore_eventOnServerPing_Parms), Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnServerPing_DelegateWrapper(const FScriptDelegate& OnServerPing, FGameServerItem const& data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnServerPing_Parms
	{
		FGameServerItem data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnServerPing_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnServerPing.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnServerRules_Parms
		{
			TArray<FGameServerRule> data;
			bool bWasSuccessful;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameServerRule, METADATA_PARAMS(nullptr, 0) }; // 2844864327
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnServerRules_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data_MetaData)) }; // 2844864327
	void Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnServerRules_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnServerRules_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerRules__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::_Script_SteamCore_eventOnServerRules_Parms), Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnServerRules_DelegateWrapper(const FScriptDelegate& OnServerRules, TArray<FGameServerRule> const& data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnServerRules_Parms
	{
		TArray<FGameServerRule> data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnServerRules_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnServerRules.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerRefreshCompleted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnServerRefreshCompleted_DelegateWrapper(const FScriptDelegate& OnServerRefreshCompleted)
{
	OnServerRefreshCompleted.ProcessDelegate<UObject>(NULL);
}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_Statics::ScriptStructInfo[] = {
		{ FSteamServerAddr::StaticStruct, Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewStructOps, TEXT("SteamServerAddr"), &Z_Registration_Info_UScriptStruct_SteamServerAddr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamServerAddr), 1083755344U) },
		{ FGameServerItem::StaticStruct, Z_Construct_UScriptStruct_FGameServerItem_Statics::NewStructOps, TEXT("GameServerItem"), &Z_Registration_Info_UScriptStruct_GameServerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameServerItem), 3242340892U) },
		{ FGameServerRule::StaticStruct, Z_Construct_UScriptStruct_FGameServerRule_Statics::NewStructOps, TEXT("GameServerRule"), &Z_Registration_Info_UScriptStruct_GameServerRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameServerRule), 2844864327U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UServerFilter, UServerFilter::StaticClass, TEXT("UServerFilter"), &Z_Registration_Info_UClass_UServerFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UServerFilter), 200698778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_3643298129(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
