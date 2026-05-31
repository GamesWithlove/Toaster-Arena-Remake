// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamMatchmakingServers/SteamMatchmakingServersTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamMatchmakingServersTypes() {}

// ********** Begin Cross Module References ********************************************************
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
// ********** End Cross Module References **********************************************************

// ********** Begin Class UServerFilter Function AddFilterAnd **************************************
struct Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics
{
	struct ServerFilter_eventAddFilterAnd_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterAnd constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFilterAnd constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFilterAnd Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterAnd_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::PropPointers) < 2048);
// ********** End Function AddFilterAnd Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterAnd", 	Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::ServerFilter_eventAddFilterAnd_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::ServerFilter_eventAddFilterAnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterAnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterAnd)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterAnd(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterAnd ****************************************

// ********** Begin Class UServerFilter Function AddFilterDedicated ********************************
struct Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers running dedicated\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers running dedicated" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterDedicated constinit property declarations ********************
// ********** End Function AddFilterDedicated constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterDedicated", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterDedicated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterDedicated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterDedicated();
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterDedicated **********************************

// ********** Begin Class UServerFilter Function AddFilterGameAddr *********************************
struct Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics
{
	struct ServerFilter_eventAddFilterGameAddr_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \x09Return only servers on the specified IP address (port supported and optional)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "*       Return only servers on the specified IP address (port supported and optional)" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterGameAddr constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFilterGameAddr constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFilterGameAddr Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameAddr_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::PropPointers) < 2048);
// ********** End Function AddFilterGameAddr Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameAddr", 	Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::ServerFilter_eventAddFilterGameAddr_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::ServerFilter_eventAddFilterGameAddr_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameAddr()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterGameAddr)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterGameAddr(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterGameAddr ***********************************

// ********** Begin Class UServerFilter Function AddFilterGameDataAnd ******************************
struct Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics
{
	struct ServerFilter_eventAddFilterGameDataAnd_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterGameDataAnd constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFilterGameDataAnd constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFilterGameDataAnd Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameDataAnd_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::PropPointers) < 2048);
// ********** End Function AddFilterGameDataAnd Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameDataAnd", 	Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::ServerFilter_eventAddFilterGameDataAnd_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::ServerFilter_eventAddFilterGameDataAnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterGameDataAnd)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterGameDataAnd(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterGameDataAnd ********************************

// ********** Begin Class UServerFilter Function AddFilterGameDataNor ******************************
struct Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics
{
	struct ServerFilter_eventAddFilterGameDataNor_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterGameDataNor constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFilterGameDataNor constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFilterGameDataNor Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameDataNor_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::PropPointers) < 2048);
// ********** End Function AddFilterGameDataNor Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameDataNor", 	Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::ServerFilter_eventAddFilterGameDataNor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::ServerFilter_eventAddFilterGameDataNor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterGameDataNor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterGameDataNor(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterGameDataNor ********************************

// ********** Begin Class UServerFilter Function AddFilterGameDataOr *******************************
struct Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics
{
	struct ServerFilter_eventAddFilterGameDataOr_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers with any of the given tag(s) in their 'hidden' tags (L4D2)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers with any of the given tag(s) in their 'hidden' tags (L4D2)" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterGameDataOr constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFilterGameDataOr constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFilterGameDataOr Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameDataOr_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::PropPointers) < 2048);
// ********** End Function AddFilterGameDataOr Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameDataOr", 	Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::ServerFilter_eventAddFilterGameDataOr_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::ServerFilter_eventAddFilterGameDataOr_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterGameDataOr)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterGameDataOr(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterGameDataOr *********************************

// ********** Begin Class UServerFilter Function AddFilterGameTagsAnd ******************************
struct Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics
{
	struct ServerFilter_eventAddFilterGameTagsAnd_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterGameTagsAnd constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFilterGameTagsAnd constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFilterGameTagsAnd Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameTagsAnd_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::PropPointers) < 2048);
// ********** End Function AddFilterGameTagsAnd Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameTagsAnd", 	Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::ServerFilter_eventAddFilterGameTagsAnd_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::ServerFilter_eventAddFilterGameTagsAnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterGameTagsAnd)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterGameTagsAnd(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterGameTagsAnd ********************************

// ********** Begin Class UServerFilter Function AddFilterGameTagsNor ******************************
struct Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics
{
	struct ServerFilter_eventAddFilterGameTagsNor_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterGameTagsNor constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFilterGameTagsNor constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFilterGameTagsNor Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameTagsNor_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::PropPointers) < 2048);
// ********** End Function AddFilterGameTagsNor Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameTagsNor", 	Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::ServerFilter_eventAddFilterGameTagsNor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::ServerFilter_eventAddFilterGameTagsNor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterGameTagsNor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterGameTagsNor(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterGameTagsNor ********************************

// ********** Begin Class UServerFilter Function AddFilterHasPlayers *******************************
struct Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are not empty\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are not empty" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterHasPlayers constinit property declarations *******************
// ********** End Function AddFilterHasPlayers constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterHasPlayers", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterHasPlayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterHasPlayers();
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterHasPlayers *********************************

// ********** Begin Class UServerFilter Function AddFilterLinux ************************************
struct Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers running on a Linux platform\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers running on a Linux platform" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterLinux constinit property declarations ************************
// ********** End Function AddFilterLinux constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterLinux", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterLinux()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterLinux)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterLinux();
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterLinux **************************************

// ********** Begin Class UServerFilter Function AddFilterMap **************************************
struct Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics
{
	struct ServerFilter_eventAddFilterMap_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers running the specified map (ex. cs_italy)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers running the specified map (ex. cs_italy)" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterMap constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFilterMap constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFilterMap Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterMap_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::PropPointers) < 2048);
// ********** End Function AddFilterMap Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterMap", 	Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::ServerFilter_eventAddFilterMap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::ServerFilter_eventAddFilterMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterMap)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterMap(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterMap ****************************************

// ********** Begin Class UServerFilter Function AddFilterName *************************************
struct Z_Construct_UFunction_UServerFilter_AddFilterName_Statics
{
	struct ServerFilter_eventAddFilterName_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09 * Servers with their hostname matching [hostname] (can use * as a wildcard)\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers with their hostname matching [hostname] (can use * as a wildcard)" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterName constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFilterName constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFilterName Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::PropPointers) < 2048);
// ********** End Function AddFilterName Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterName", 	Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::ServerFilter_eventAddFilterName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::ServerFilter_eventAddFilterName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterName(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterName ***************************************

// ********** Begin Class UServerFilter Function AddFilterNand *************************************
struct Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics
{
	struct ServerFilter_eventAddFilterNand_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* A special filter, specifies that servers matching all of the following [x] conditions should not be returned\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* A special filter, specifies that servers matching all of the following [x] conditions should not be returned" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterNand constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFilterNand constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFilterNand Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterNand_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::PropPointers) < 2048);
// ********** End Function AddFilterNand Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNand", 	Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::ServerFilter_eventAddFilterNand_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::ServerFilter_eventAddFilterNand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterNand)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterNand(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterNand ***************************************

// ********** Begin Class UServerFilter Function AddFilterNoPlayers ********************************
struct Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are empty\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are empty" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterNoPlayers constinit property declarations ********************
// ********** End Function AddFilterNoPlayers constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNoPlayers", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterNoPlayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterNoPlayers();
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterNoPlayers **********************************

// ********** Begin Class UServerFilter Function AddFilterNor **************************************
struct Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics
{
	struct ServerFilter_eventAddFilterNor_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* A special filter, specifies that servers matching any of the following [x] conditions should not be returned\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* A special filter, specifies that servers matching any of the following [x] conditions should not be returned" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterNor constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFilterNor constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFilterNor Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterNor_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::PropPointers) < 2048);
// ********** End Function AddFilterNor Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNor", 	Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::ServerFilter_eventAddFilterNor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::ServerFilter_eventAddFilterNor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterNor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterNor(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterNor ****************************************

// ********** Begin Class UServerFilter Function AddFilterNotAppId *********************************
struct Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics
{
	struct ServerFilter_eventAddFilterNotAppId_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are NOT running game [appid] (This was introduced to block Left 4 Dead games from the Steam Server Browser)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are NOT running game [appid] (This was introduced to block Left 4 Dead games from the Steam Server Browser)" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterNotAppId constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFilterNotAppId constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFilterNotAppId Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterNotAppId_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::PropPointers) < 2048);
// ********** End Function AddFilterNotAppId Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNotAppId", 	Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::ServerFilter_eventAddFilterNotAppId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::ServerFilter_eventAddFilterNotAppId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNotAppId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterNotAppId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterNotAppId(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterNotAppId ***********************************

// ********** Begin Class UServerFilter Function AddFilterNotFull **********************************
struct Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are not full\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are not full" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterNotFull constinit property declarations **********************
// ********** End Function AddFilterNotFull constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNotFull", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNotFull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterNotFull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterNotFull();
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterNotFull ************************************

// ********** Begin Class UServerFilter Function AddFilterOr ***************************************
struct Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics
{
	struct ServerFilter_eventAddFilterOr_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterOr constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFilterOr constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFilterOr Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterOr_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::PropPointers) < 2048);
// ********** End Function AddFilterOr Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterOr", 	Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::ServerFilter_eventAddFilterOr_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::ServerFilter_eventAddFilterOr_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterOr()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterOr)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterOr(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterOr *****************************************

// ********** Begin Class UServerFilter Function AddFilterPassword *********************************
struct Z_Construct_UFunction_UServerFilter_AddFilterPassword_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are not password protected\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are not password protected" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterPassword constinit property declarations *********************
// ********** End Function AddFilterPassword constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterPassword_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterPassword", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterPassword_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterPassword_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterPassword()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterPassword_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterPassword)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterPassword();
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterPassword ***********************************

// ********** Begin Class UServerFilter Function AddFilterProxy ************************************
struct Z_Construct_UFunction_UServerFilter_AddFilterProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are spectator proxies\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are spectator proxies" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterProxy constinit property declarations ************************
// ********** End Function AddFilterProxy constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterProxy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterProxy", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterProxy_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterProxy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterProxy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterProxy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterProxy();
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterProxy **************************************

// ********** Begin Class UServerFilter Function AddFilterSecure ***********************************
struct Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers using anti-cheat technology (VAC, but potentially others as well)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers using anti-cheat technology (VAC, but potentially others as well)" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterSecure constinit property declarations ***********************
// ********** End Function AddFilterSecure constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterSecure", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterSecure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterSecure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterSecure();
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterSecure *************************************

// ********** Begin Class UServerFilter Function AddFilterVersion **********************************
struct Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics
{
	struct ServerFilter_eventAddFilterVersion_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09 * Servers running version [version] (can use * as a wildcard)\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers running version [version] (can use * as a wildcard)" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterVersion constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFilterVersion constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFilterVersion Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterVersion_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::PropPointers) < 2048);
// ********** End Function AddFilterVersion Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterVersion", 	Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::ServerFilter_eventAddFilterVersion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::ServerFilter_eventAddFilterVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterVersion)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterVersion(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterVersion ************************************

// ********** Begin Class UServerFilter Function AddFilterWhitelisted ******************************
struct Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are whitelisted\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are whitelisted" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFilterWhitelisted constinit property declarations ******************
// ********** End Function AddFilterWhitelisted constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterWhitelisted", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterWhitelisted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterWhitelisted();
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function AddFilterWhitelisted ********************************

// ********** Begin Class UServerFilter Function GetFilters ****************************************
struct Z_Construct_UFunction_UServerFilter_GetFilters_Statics
{
	struct ServerFilter_eventGetFilters_Parms
	{
		TMap<FString,FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFilters constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFilters constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFilters Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventGetFilters_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_GetFilters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_GetFilters_Statics::PropPointers) < 2048);
// ********** End Function GetFilters Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_GetFilters_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "GetFilters", 	Z_Construct_UFunction_UServerFilter_GetFilters_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_GetFilters_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UServerFilter_GetFilters_Statics::ServerFilter_eventGetFilters_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_GetFilters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_GetFilters_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_GetFilters_Statics::ServerFilter_eventGetFilters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_GetFilters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_GetFilters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execGetFilters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetFilters();
	P_NATIVE_END;
}
// ********** End Class UServerFilter Function GetFilters ******************************************

// ********** Begin Class UServerFilter ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UServerFilter;
UClass* UServerFilter::GetPrivateStaticClass()
{
	using TClass = UServerFilter;
	if (!Z_Registration_Info_UClass_UServerFilter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ServerFilter"),
			Z_Registration_Info_UClass_UServerFilter.InnerSingleton,
			StaticRegisterNativesUServerFilter,
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
	return Z_Registration_Info_UClass_UServerFilter.InnerSingleton;
}
UClass* Z_Construct_UClass_UServerFilter_NoRegister()
{
	return UServerFilter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UServerFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UServerFilter constinit property declarations ****************************
// ********** End Class UServerFilter constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddFilterAnd"), .Pointer = &UServerFilter::execAddFilterAnd },
		{ .NameUTF8 = UTF8TEXT("AddFilterDedicated"), .Pointer = &UServerFilter::execAddFilterDedicated },
		{ .NameUTF8 = UTF8TEXT("AddFilterGameAddr"), .Pointer = &UServerFilter::execAddFilterGameAddr },
		{ .NameUTF8 = UTF8TEXT("AddFilterGameDataAnd"), .Pointer = &UServerFilter::execAddFilterGameDataAnd },
		{ .NameUTF8 = UTF8TEXT("AddFilterGameDataNor"), .Pointer = &UServerFilter::execAddFilterGameDataNor },
		{ .NameUTF8 = UTF8TEXT("AddFilterGameDataOr"), .Pointer = &UServerFilter::execAddFilterGameDataOr },
		{ .NameUTF8 = UTF8TEXT("AddFilterGameTagsAnd"), .Pointer = &UServerFilter::execAddFilterGameTagsAnd },
		{ .NameUTF8 = UTF8TEXT("AddFilterGameTagsNor"), .Pointer = &UServerFilter::execAddFilterGameTagsNor },
		{ .NameUTF8 = UTF8TEXT("AddFilterHasPlayers"), .Pointer = &UServerFilter::execAddFilterHasPlayers },
		{ .NameUTF8 = UTF8TEXT("AddFilterLinux"), .Pointer = &UServerFilter::execAddFilterLinux },
		{ .NameUTF8 = UTF8TEXT("AddFilterMap"), .Pointer = &UServerFilter::execAddFilterMap },
		{ .NameUTF8 = UTF8TEXT("AddFilterName"), .Pointer = &UServerFilter::execAddFilterName },
		{ .NameUTF8 = UTF8TEXT("AddFilterNand"), .Pointer = &UServerFilter::execAddFilterNand },
		{ .NameUTF8 = UTF8TEXT("AddFilterNoPlayers"), .Pointer = &UServerFilter::execAddFilterNoPlayers },
		{ .NameUTF8 = UTF8TEXT("AddFilterNor"), .Pointer = &UServerFilter::execAddFilterNor },
		{ .NameUTF8 = UTF8TEXT("AddFilterNotAppId"), .Pointer = &UServerFilter::execAddFilterNotAppId },
		{ .NameUTF8 = UTF8TEXT("AddFilterNotFull"), .Pointer = &UServerFilter::execAddFilterNotFull },
		{ .NameUTF8 = UTF8TEXT("AddFilterOr"), .Pointer = &UServerFilter::execAddFilterOr },
		{ .NameUTF8 = UTF8TEXT("AddFilterPassword"), .Pointer = &UServerFilter::execAddFilterPassword },
		{ .NameUTF8 = UTF8TEXT("AddFilterProxy"), .Pointer = &UServerFilter::execAddFilterProxy },
		{ .NameUTF8 = UTF8TEXT("AddFilterSecure"), .Pointer = &UServerFilter::execAddFilterSecure },
		{ .NameUTF8 = UTF8TEXT("AddFilterVersion"), .Pointer = &UServerFilter::execAddFilterVersion },
		{ .NameUTF8 = UTF8TEXT("AddFilterWhitelisted"), .Pointer = &UServerFilter::execAddFilterWhitelisted },
		{ .NameUTF8 = UTF8TEXT("GetFilters"), .Pointer = &UServerFilter::execGetFilters },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UServerFilter_AddFilterAnd, "AddFilterAnd" }, // 3443314127
		{ &Z_Construct_UFunction_UServerFilter_AddFilterDedicated, "AddFilterDedicated" }, // 1394765025
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameAddr, "AddFilterGameAddr" }, // 1450530125
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd, "AddFilterGameDataAnd" }, // 3404212242
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor, "AddFilterGameDataNor" }, // 2196849985
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr, "AddFilterGameDataOr" }, // 1923052561
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd, "AddFilterGameTagsAnd" }, // 3231323664
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor, "AddFilterGameTagsNor" }, // 993008492
		{ &Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers, "AddFilterHasPlayers" }, // 2686062693
		{ &Z_Construct_UFunction_UServerFilter_AddFilterLinux, "AddFilterLinux" }, // 4238031167
		{ &Z_Construct_UFunction_UServerFilter_AddFilterMap, "AddFilterMap" }, // 1494917731
		{ &Z_Construct_UFunction_UServerFilter_AddFilterName, "AddFilterName" }, // 3961474545
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNand, "AddFilterNand" }, // 2879339364
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers, "AddFilterNoPlayers" }, // 357087858
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNor, "AddFilterNor" }, // 4132691941
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNotAppId, "AddFilterNotAppId" }, // 1452134747
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNotFull, "AddFilterNotFull" }, // 1029259594
		{ &Z_Construct_UFunction_UServerFilter_AddFilterOr, "AddFilterOr" }, // 559824038
		{ &Z_Construct_UFunction_UServerFilter_AddFilterPassword, "AddFilterPassword" }, // 2435934715
		{ &Z_Construct_UFunction_UServerFilter_AddFilterProxy, "AddFilterProxy" }, // 1333730820
		{ &Z_Construct_UFunction_UServerFilter_AddFilterSecure, "AddFilterSecure" }, // 2823314311
		{ &Z_Construct_UFunction_UServerFilter_AddFilterVersion, "AddFilterVersion" }, // 2666962890
		{ &Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted, "AddFilterWhitelisted" }, // 4266511745
		{ &Z_Construct_UFunction_UServerFilter_GetFilters, "GetFilters" }, // 3189711914
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UServerFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UServerFilter_Statics
UObject* (*const Z_Construct_UClass_UServerFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UServerFilter_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UServerFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UServerFilter_Statics::Class_MetaDataParams)
};
void UServerFilter::StaticRegisterNativesUServerFilter()
{
	UClass* Class = UServerFilter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UServerFilter_Statics::Funcs));
}
UClass* Z_Construct_UClass_UServerFilter()
{
	if (!Z_Registration_Info_UClass_UServerFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UServerFilter.OuterSingleton, Z_Construct_UClass_UServerFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UServerFilter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UServerFilter);
// ********** End Class UServerFilter **************************************************************

// ********** Begin ScriptStruct FSteamServerAddr **************************************************
struct Z_Construct_UScriptStruct_FSteamServerAddr_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamServerAddr); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamServerAddr); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryPort_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionAddressString_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamP2PAddr_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamServerAddr constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionAddressString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamP2PAddr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSteamServerAddr constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamServerAddr>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamServerAddr_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamServerAddr;
class UScriptStruct* FSteamServerAddr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamServerAddr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamServerAddr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamServerAddr, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamServerAddr"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamServerAddr.OuterSingleton;
	}

// ********** Begin ScriptStruct FSteamServerAddr Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamServerAddr, IP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IP_MetaData), NewProp_IP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamServerAddr, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamServerAddr, QueryPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryPort_MetaData), NewProp_QueryPort_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString = { "ConnectionAddressString", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamServerAddr, ConnectionAddressString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionAddressString_MetaData), NewProp_ConnectionAddressString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr = { "SteamP2PAddr", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamServerAddr, SteamP2PAddr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamP2PAddr_MetaData), NewProp_SteamP2PAddr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamServerAddr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSteamServerAddr Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SteamServerAddr",
	Z_Construct_UScriptStruct_FSteamServerAddr_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::PropPointers),
	sizeof(FSteamServerAddr),
	alignof(FSteamServerAddr),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamServerAddr_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamServerAddr()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamServerAddr.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamServerAddr.InnerSingleton, Z_Construct_UScriptStruct_FSteamServerAddr_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamServerAddr.InnerSingleton);
}
// ********** End ScriptStruct FSteamServerAddr ****************************************************

// ********** Begin ScriptStruct FGameServerItem ***************************************************
struct Z_Construct_UScriptStruct_FGameServerItem_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FGameServerItem); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGameServerItem); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameDescription_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameTags_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamServerAddr_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ping_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BotPlayers_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerVersion_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPassword_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSecure_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGameServerItem constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameDescription;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamServerAddr;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ping;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Players;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BotPlayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerVersion;
	static void NewProp_bPassword_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPassword;
	static void NewProp_bSecure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FGameServerItem constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameServerItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FGameServerItem_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGameServerItem;
class UScriptStruct* FGameServerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGameServerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGameServerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameServerItem, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GameServerItem"));
	}
	return Z_Registration_Info_UScriptStruct_FGameServerItem.OuterSingleton;
	}

// ********** Begin ScriptStruct FGameServerItem Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, ServerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerName_MetaData), NewProp_ServerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription = { "GameDescription", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, GameDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameDescription_MetaData), NewProp_GameDescription_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags = { "GameTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, GameTags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameTags_MetaData), NewProp_GameTags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr = { "SteamServerAddr", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, SteamServerAddr), Z_Construct_UScriptStruct_FSteamServerAddr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamServerAddr_MetaData), NewProp_SteamServerAddr_MetaData) }; // 3350823999
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping = { "Ping", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, Ping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ping_MetaData), NewProp_Ping_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, Players), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Players_MetaData), NewProp_Players_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, MaxPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayers_MetaData), NewProp_MaxPlayers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers = { "BotPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, BotPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BotPlayers_MetaData), NewProp_BotPlayers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion = { "ServerVersion", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, ServerVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerVersion_MetaData), NewProp_ServerVersion_MetaData) };
void Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_SetBit(void* Obj)
{
	((FGameServerItem*)Obj)->bPassword = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword = { "bPassword", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameServerItem), &Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPassword_MetaData), NewProp_bPassword_MetaData) };
void Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure_SetBit(void* Obj)
{
	((FGameServerItem*)Obj)->bSecure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure = { "bSecure", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameServerItem), &Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSecure_MetaData), NewProp_bSecure_MetaData) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FGameServerItem Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameServerItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"GameServerItem",
	Z_Construct_UScriptStruct_FGameServerItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::PropPointers),
	sizeof(FGameServerItem),
	alignof(FGameServerItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameServerItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameServerItem()
{
	if (!Z_Registration_Info_UScriptStruct_FGameServerItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGameServerItem.InnerSingleton, Z_Construct_UScriptStruct_FGameServerItem_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGameServerItem.InnerSingleton);
}
// ********** End ScriptStruct FGameServerItem *****************************************************

// ********** Begin ScriptStruct FGameServerRule ***************************************************
struct Z_Construct_UScriptStruct_FGameServerRule_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FGameServerRule); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGameServerRule); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGameServerRule constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FGameServerRule constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameServerRule>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FGameServerRule_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGameServerRule;
class UScriptStruct* FGameServerRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGameServerRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGameServerRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameServerRule, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GameServerRule"));
	}
	return Z_Registration_Info_UScriptStruct_FGameServerRule.OuterSingleton;
	}

// ********** Begin ScriptStruct FGameServerRule Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerRule, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerRule, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameServerRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerRule_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FGameServerRule Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameServerRule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"GameServerRule",
	Z_Construct_UScriptStruct_FGameServerRule_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerRule_Statics::PropPointers),
	sizeof(FGameServerRule),
	alignof(FGameServerRule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameServerRule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameServerRule()
{
	if (!Z_Registration_Info_UScriptStruct_FGameServerRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGameServerRule.InnerSingleton, Z_Construct_UScriptStruct_FGameServerRule_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGameServerRule.InnerSingleton);
}
// ********** End ScriptStruct FGameServerRule *****************************************************

// ********** Begin Delegate FOnServerUpdated ******************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnServerUpdated_Parms
	{
		FGameServerItem data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnServerUpdated constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnServerUpdated constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnServerUpdated Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnServerUpdated_Parms, data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 3382945112
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::NewProp_data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnServerUpdated Property Definitions ***********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerUpdated__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::_Script_SteamCore_eventOnServerUpdated_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::_Script_SteamCore_eventOnServerUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerUpdated__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnServerUpdated ********************************************************

// ********** Begin Delegate FOnServerPing *********************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnServerPing_Parms
	{
		FGameServerItem data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnServerPing constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnServerPing constinit property declarations ***************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnServerPing Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnServerPing_Parms, data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 3382945112
void Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnServerPing_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnServerPing_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnServerPing Property Definitions **************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerPing__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::_Script_SteamCore_eventOnServerPing_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::_Script_SteamCore_eventOnServerPing_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnServerPing ***********************************************************

// ********** Begin Delegate FOnServerRules ********************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnServerRules_Parms
	{
		TArray<FGameServerRule> data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnServerRules constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnServerRules constinit property declarations **************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnServerRules Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameServerRule, METADATA_PARAMS(0, nullptr) }; // 920107276
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnServerRules_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 920107276
void Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnServerRules_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnServerRules_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnServerRules Property Definitions *************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerRules__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::_Script_SteamCore_eventOnServerRules_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::_Script_SteamCore_eventOnServerRules_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnServerRules **********************************************************

// ********** Begin Delegate FOnServerRefreshCompleted *********************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnServerRefreshCompleted constinit property declarations *************
// ********** End Delegate FOnServerRefreshCompleted constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerRefreshCompleted__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerRefreshCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnServerRefreshCompleted_DelegateWrapper(const FScriptDelegate& OnServerRefreshCompleted)
{
	OnServerRefreshCompleted.ProcessDelegate<UObject>(NULL);
}
// ********** End Delegate FOnServerRefreshCompleted ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h__Script_SteamCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamServerAddr::StaticStruct, Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewStructOps, TEXT("SteamServerAddr"),&Z_Registration_Info_UScriptStruct_FSteamServerAddr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamServerAddr), 3350823999U) },
		{ FGameServerItem::StaticStruct, Z_Construct_UScriptStruct_FGameServerItem_Statics::NewStructOps, TEXT("GameServerItem"),&Z_Registration_Info_UScriptStruct_FGameServerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameServerItem), 3382945112U) },
		{ FGameServerRule::StaticStruct, Z_Construct_UScriptStruct_FGameServerRule_Statics::NewStructOps, TEXT("GameServerRule"),&Z_Registration_Info_UScriptStruct_FGameServerRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameServerRule), 920107276U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UServerFilter, UServerFilter::StaticClass, TEXT("UServerFilter"), &Z_Registration_Info_UClass_UServerFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UServerFilter), 2925563954U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h__Script_SteamCore_2609281768{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h__Script_SteamCore_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h__Script_SteamCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h__Script_SteamCore_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
