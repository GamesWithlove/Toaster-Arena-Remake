// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamGameSearch/SteamGameSearch.h"
#include "Engine/GameInstance.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamGameSearch() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
STEAMCORE_API UClass* Z_Construct_UClass_USteamGameSearch();
STEAMCORE_API UClass* Z_Construct_UClass_USteamGameSearch_NoRegister();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerResult();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamGameSearch Function AcceptGame *************************************
struct Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics
{
	struct SteamGameSearch_eventAcceptGame_Parms
	{
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* after receiving SearchForGameResultCallback_t, accept or decline the game\n\x09* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* after receiving SearchForGameResultCallback_t, accept or decline the game\n* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game" },
	};
#endif // WITH_METADATA

// ********** Begin Function AcceptGame constinit property declarations ****************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AcceptGame constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AcceptGame Property Definitions ***************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventAcceptGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1276743680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::PropPointers) < 2048);
// ********** End Function AcceptGame Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "AcceptGame", 	Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::SteamGameSearch_eventAcceptGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::SteamGameSearch_eventAcceptGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameSearch_AcceptGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameSearch::execAcceptGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->AcceptGame();
	P_NATIVE_END;
}
// ********** End Class USteamGameSearch Function AcceptGame ***************************************

// ********** Begin Class USteamGameSearch Function AddGameSearchParams ****************************
struct Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics
{
	struct SteamGameSearch_eventAddGameSearchParams_Parms
	{
		FString KeyToFind;
		TArray<FString> ValuesToFind;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* A keyname and a list of comma separated values: one of which is must be found in order for the match to qualify\n\x09* fails if a search is currently in progress\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* A keyname and a list of comma separated values: one of which is must be found in order for the match to qualify\n* fails if a search is currently in progress" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddGameSearchParams constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToFind;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValuesToFind_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValuesToFind;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddGameSearchParams constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddGameSearchParams Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_KeyToFind = { "KeyToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventAddGameSearchParams_Parms, KeyToFind), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind_Inner = { "ValuesToFind", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind = { "ValuesToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventAddGameSearchParams_Parms, ValuesToFind), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventAddGameSearchParams_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1276743680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_KeyToFind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::PropPointers) < 2048);
// ********** End Function AddGameSearchParams Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "AddGameSearchParams", 	Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::SteamGameSearch_eventAddGameSearchParams_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::SteamGameSearch_eventAddGameSearchParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameSearch::execAddGameSearchParams)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KeyToFind);
	P_GET_TARRAY(FString,Z_Param_ValuesToFind);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->AddGameSearchParams(Z_Param_KeyToFind,Z_Param_ValuesToFind);
	P_NATIVE_END;
}
// ********** End Class USteamGameSearch Function AddGameSearchParams ******************************

// ********** Begin Class USteamGameSearch Function CancelRequestPlayersForGame ********************
struct Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics
{
	struct SteamGameSearch_eventCancelRequestPlayersForGame_Parms
	{
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* cancel request and leave the pool of game hosts looking for players\n\x09* if a set of players has already been sent to host, all players will receive SearchForGameHostFailedToConfirm_t\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* cancel request and leave the pool of game hosts looking for players\n* if a set of players has already been sent to host, all players will receive SearchForGameHostFailedToConfirm_t" },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelRequestPlayersForGame constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CancelRequestPlayersForGame constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CancelRequestPlayersForGame Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventCancelRequestPlayersForGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1276743680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::PropPointers) < 2048);
// ********** End Function CancelRequestPlayersForGame Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "CancelRequestPlayersForGame", 	Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::SteamGameSearch_eventCancelRequestPlayersForGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::SteamGameSearch_eventCancelRequestPlayersForGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameSearch::execCancelRequestPlayersForGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->CancelRequestPlayersForGame();
	P_NATIVE_END;
}
// ********** End Class USteamGameSearch Function CancelRequestPlayersForGame **********************

// ********** Begin Class USteamGameSearch Function DeclineGame ************************************
struct Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics
{
	struct SteamGameSearch_eventDeclineGame_Parms
	{
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* after receiving SearchForGameResultCallback_t, accept or decline the game\n\x09* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* after receiving SearchForGameResultCallback_t, accept or decline the game\n* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeclineGame constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeclineGame constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeclineGame Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventDeclineGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1276743680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::PropPointers) < 2048);
// ********** End Function DeclineGame Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "DeclineGame", 	Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::SteamGameSearch_eventDeclineGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::SteamGameSearch_eventDeclineGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameSearch_DeclineGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameSearch::execDeclineGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->DeclineGame();
	P_NATIVE_END;
}
// ********** End Class USteamGameSearch Function DeclineGame **************************************

// ********** Begin Class USteamGameSearch Function EndGame ****************************************
struct Z_Construct_UFunction_USteamGameSearch_EndGame_Statics
{
	struct SteamGameSearch_eventEndGame_Parms
	{
		FString UniqueGameID;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* ends the game. no further SubmitPlayerResults for ullUniqueGameID will be accepted\n\x09* any future requests will provide a new ullUniqueGameID\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* ends the game. no further SubmitPlayerResults for ullUniqueGameID will be accepted\n* any future requests will provide a new ullUniqueGameID" },
	};
#endif // WITH_METADATA

// ********** Begin Function EndGame constinit property declarations *******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EndGame constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EndGame Property Definitions ******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventEndGame_Parms, UniqueGameID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventEndGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1276743680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_UniqueGameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::PropPointers) < 2048);
// ********** End Function EndGame Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "EndGame", 	Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::SteamGameSearch_eventEndGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::SteamGameSearch_eventEndGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameSearch_EndGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameSearch::execEndGame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UniqueGameID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->EndGame(Z_Param_UniqueGameID);
	P_NATIVE_END;
}
// ********** End Class USteamGameSearch Function EndGame ******************************************

// ********** Begin Class USteamGameSearch Function EndGameSearch **********************************
struct Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics
{
	struct SteamGameSearch_eventEndGameSearch_Parms
	{
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* leaves queue if still waiting\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* leaves queue if still waiting" },
	};
#endif // WITH_METADATA

// ********** Begin Function EndGameSearch constinit property declarations *************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EndGameSearch constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EndGameSearch Property Definitions ************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventEndGameSearch_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1276743680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::PropPointers) < 2048);
// ********** End Function EndGameSearch Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "EndGameSearch", 	Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::SteamGameSearch_eventEndGameSearch_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::SteamGameSearch_eventEndGameSearch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameSearch_EndGameSearch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameSearch::execEndGameSearch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->EndGameSearch();
	P_NATIVE_END;
}
// ********** End Class USteamGameSearch Function EndGameSearch ************************************

// ********** Begin Class USteamGameSearch Function HostConfirmGameStart ***************************
struct Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics
{
	struct SteamGameSearch_eventHostConfirmGameStart_Parms
	{
		FString UniqueGameID;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* accept the player list and release connection details to players\n\x09* players will only be given connection details and host steamid when this is called\n\x09* (allows host to accept after all players confirm, some confirm, or none confirm. decision is entirely up to the host)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* accept the player list and release connection details to players\n* players will only be given connection details and host steamid when this is called\n* (allows host to accept after all players confirm, some confirm, or none confirm. decision is entirely up to the host)" },
	};
#endif // WITH_METADATA

// ********** Begin Function HostConfirmGameStart constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HostConfirmGameStart constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HostConfirmGameStart Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventHostConfirmGameStart_Parms, UniqueGameID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventHostConfirmGameStart_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1276743680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_UniqueGameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::PropPointers) < 2048);
// ********** End Function HostConfirmGameStart Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "HostConfirmGameStart", 	Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::SteamGameSearch_eventHostConfirmGameStart_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::SteamGameSearch_eventHostConfirmGameStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameSearch::execHostConfirmGameStart)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UniqueGameID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->HostConfirmGameStart(Z_Param_UniqueGameID);
	P_NATIVE_END;
}
// ********** End Class USteamGameSearch Function HostConfirmGameStart *****************************

// ********** Begin Class USteamGameSearch Function RequestPlayersForGame **************************
struct Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics
{
	struct SteamGameSearch_eventRequestPlayersForGame_Parms
	{
		int32 PlayerMin;
		int32 PlayerMax;
		int32 MaxTeamSize;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* mark server as available for more players with nPlayerMin,nPlayerMax desired\n\x09* accept no lobbies with playercount greater than nMaxTeamSize\n\x09* the set of lobbies returned must be partitionable into teams of no more than nMaxTeamSize\n\x09* RequestPlayersForGameNotificationCallback_t callback will be sent when the search has started\n\x09* multiple RequestPlayersForGameResultCallback_t callbacks will follow when players are found\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* mark server as available for more players with nPlayerMin,nPlayerMax desired\n* accept no lobbies with playercount greater than nMaxTeamSize\n* the set of lobbies returned must be partitionable into teams of no more than nMaxTeamSize\n* RequestPlayersForGameNotificationCallback_t callback will be sent when the search has started\n* multiple RequestPlayersForGameResultCallback_t callbacks will follow when players are found" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestPlayersForGame constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTeamSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestPlayersForGame constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestPlayersForGame Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMin = { "PlayerMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventRequestPlayersForGame_Parms, PlayerMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMax = { "PlayerMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventRequestPlayersForGame_Parms, PlayerMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_MaxTeamSize = { "MaxTeamSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventRequestPlayersForGame_Parms, MaxTeamSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventRequestPlayersForGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1276743680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_MaxTeamSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::PropPointers) < 2048);
// ********** End Function RequestPlayersForGame Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "RequestPlayersForGame", 	Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::SteamGameSearch_eventRequestPlayersForGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::SteamGameSearch_eventRequestPlayersForGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameSearch::execRequestPlayersForGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMin);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMax);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxTeamSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->RequestPlayersForGame(Z_Param_PlayerMin,Z_Param_PlayerMax,Z_Param_MaxTeamSize);
	P_NATIVE_END;
}
// ********** End Class USteamGameSearch Function RequestPlayersForGame ****************************

// ********** Begin Class USteamGameSearch Function RetrieveConnectionDetails **********************
struct Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics
{
	struct SteamGameSearch_eventRetrieveConnectionDetails_Parms
	{
		FSteamID SteamIDHost;
		FString ConnectionDetails;
		int32 NumConnectionDetails;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* after receiving GameStartedByHostCallback_t get connection details to server\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* after receiving GameStartedByHostCallback_t get connection details to server" },
	};
#endif // WITH_METADATA

// ********** Begin Function RetrieveConnectionDetails constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDHost;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionDetails;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumConnectionDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RetrieveConnectionDetails constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RetrieveConnectionDetails Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_SteamIDHost = { "SteamIDHost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventRetrieveConnectionDetails_Parms, SteamIDHost), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ConnectionDetails = { "ConnectionDetails", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventRetrieveConnectionDetails_Parms, ConnectionDetails), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_NumConnectionDetails = { "NumConnectionDetails", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventRetrieveConnectionDetails_Parms, NumConnectionDetails), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventRetrieveConnectionDetails_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1276743680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_SteamIDHost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ConnectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_NumConnectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::PropPointers) < 2048);
// ********** End Function RetrieveConnectionDetails Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "RetrieveConnectionDetails", 	Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::SteamGameSearch_eventRetrieveConnectionDetails_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::SteamGameSearch_eventRetrieveConnectionDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameSearch::execRetrieveConnectionDetails)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDHost);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ConnectionDetails);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumConnectionDetails);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->RetrieveConnectionDetails(Z_Param_SteamIDHost,Z_Param_Out_ConnectionDetails,Z_Param_NumConnectionDetails);
	P_NATIVE_END;
}
// ********** End Class USteamGameSearch Function RetrieveConnectionDetails ************************

// ********** Begin Class USteamGameSearch Function SearchForGameSolo ******************************
struct Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics
{
	struct SteamGameSearch_eventSearchForGameSolo_Parms
	{
		int32 PlayerMin;
		int32 PlayerMax;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* user enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n\x09* periodic callbacks will be sent as queue time estimates change\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* user enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n* periodic callbacks will be sent as queue time estimates change" },
	};
#endif // WITH_METADATA

// ********** Begin Function SearchForGameSolo constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMax;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SearchForGameSolo constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SearchForGameSolo Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMin = { "PlayerMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameSolo_Parms, PlayerMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMax = { "PlayerMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameSolo_Parms, PlayerMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameSolo_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1276743680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::PropPointers) < 2048);
// ********** End Function SearchForGameSolo Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "SearchForGameSolo", 	Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::SteamGameSearch_eventSearchForGameSolo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::SteamGameSearch_eventSearchForGameSolo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameSearch::execSearchForGameSolo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMin);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SearchForGameSolo(Z_Param_PlayerMin,Z_Param_PlayerMax);
	P_NATIVE_END;
}
// ********** End Class USteamGameSearch Function SearchForGameSolo ********************************

// ********** Begin Class USteamGameSearch Function SearchForGameWithLobby *************************
struct Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics
{
	struct SteamGameSearch_eventSearchForGameWithLobby_Parms
	{
		FSteamID SteamIDLobby;
		int32 PlayerMin;
		int32 PlayerMax;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* all players in lobby enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n\x09* if not the owner of the lobby or search already in progress this call fails\n\x09* periodic callbacks will be sent as queue time estimates change\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* all players in lobby enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n* if not the owner of the lobby or search already in progress this call fails\n* periodic callbacks will be sent as queue time estimates change" },
	};
#endif // WITH_METADATA

// ********** Begin Function SearchForGameWithLobby constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMax;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SearchForGameWithLobby constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SearchForGameWithLobby Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameWithLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMin = { "PlayerMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameWithLobby_Parms, PlayerMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMax = { "PlayerMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameWithLobby_Parms, PlayerMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameWithLobby_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1276743680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::PropPointers) < 2048);
// ********** End Function SearchForGameWithLobby Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "SearchForGameWithLobby", 	Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::SteamGameSearch_eventSearchForGameWithLobby_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::SteamGameSearch_eventSearchForGameWithLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameSearch::execSearchForGameWithLobby)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMin);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SearchForGameWithLobby(Z_Param_SteamIDLobby,Z_Param_PlayerMin,Z_Param_PlayerMax);
	P_NATIVE_END;
}
// ********** End Class USteamGameSearch Function SearchForGameWithLobby ***************************

// ********** Begin Class USteamGameSearch Function SetConnectionDetails ***************************
struct Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics
{
	struct SteamGameSearch_eventSetConnectionDetails_Parms
	{
		FString ConnectionDetails;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* set connection details for players once game is found so they can connect to this server\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* set connection details for players once game is found so they can connect to this server" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetConnectionDetails constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetConnectionDetails constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetConnectionDetails Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ConnectionDetails = { "ConnectionDetails", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventSetConnectionDetails_Parms, ConnectionDetails), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventSetConnectionDetails_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1276743680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ConnectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::PropPointers) < 2048);
// ********** End Function SetConnectionDetails Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "SetConnectionDetails", 	Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::SteamGameSearch_eventSetConnectionDetails_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::SteamGameSearch_eventSetConnectionDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameSearch::execSetConnectionDetails)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ConnectionDetails);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SetConnectionDetails(Z_Param_ConnectionDetails);
	P_NATIVE_END;
}
// ********** End Class USteamGameSearch Function SetConnectionDetails *****************************

// ********** Begin Class USteamGameSearch Function SetGameHostParams ******************************
struct Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics
{
	struct SteamGameSearch_eventSetGameHostParams_Parms
	{
		FString Key;
		TArray<FString> Values;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* a keyname and a list of comma separated values: all the values you allow\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* a keyname and a list of comma separated values: all the values you allow" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGameHostParams constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGameHostParams constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGameHostParams Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventSetGameHostParams_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventSetGameHostParams_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventSetGameHostParams_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1276743680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::PropPointers) < 2048);
// ********** End Function SetGameHostParams Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "SetGameHostParams", 	Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::SteamGameSearch_eventSetGameHostParams_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::SteamGameSearch_eventSetGameHostParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameSearch_SetGameHostParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameSearch::execSetGameHostParams)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY(FString,Z_Param_Values);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SetGameHostParams(Z_Param_Key,Z_Param_Values);
	P_NATIVE_END;
}
// ********** End Class USteamGameSearch Function SetGameHostParams ********************************

// ********** Begin Class USteamGameSearch Function SubmitPlayerResult *****************************
struct Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics
{
	struct SteamGameSearch_eventSubmitPlayerResult_Parms
	{
		FString UniqueGameID;
		FSteamID SteamIDPlayer;
		ESteamPlayerResult PlayerResult;
		ESteamGameSearchErrorCode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* submit a result for one player. does not end the game. ullUniqueGameID continues to describe this game\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* submit a result for one player. does not end the game. ullUniqueGameID continues to describe this game" },
	};
#endif // WITH_METADATA

// ********** Begin Function SubmitPlayerResult constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDPlayer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerResult;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SubmitPlayerResult constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SubmitPlayerResult Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventSubmitPlayerResult_Parms, UniqueGameID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_SteamIDPlayer = { "SteamIDPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventSubmitPlayerResult_Parms, SteamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult = { "PlayerResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventSubmitPlayerResult_Parms, PlayerResult), Z_Construct_UEnum_SteamCore_ESteamPlayerResult, METADATA_PARAMS(0, nullptr) }; // 2564552485
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameSearch_eventSubmitPlayerResult_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(0, nullptr) }; // 1276743680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_UniqueGameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_SteamIDPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::PropPointers) < 2048);
// ********** End Function SubmitPlayerResult Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "SubmitPlayerResult", 	Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::SteamGameSearch_eventSubmitPlayerResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::SteamGameSearch_eventSubmitPlayerResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameSearch::execSubmitPlayerResult)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UniqueGameID);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDPlayer);
	P_GET_ENUM(ESteamPlayerResult,Z_Param_PlayerResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SubmitPlayerResult(Z_Param_UniqueGameID,Z_Param_SteamIDPlayer,ESteamPlayerResult(Z_Param_PlayerResult));
	P_NATIVE_END;
}
// ********** End Class USteamGameSearch Function SubmitPlayerResult *******************************

// ********** Begin Class USteamGameSearch *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamGameSearch;
UClass* USteamGameSearch::GetPrivateStaticClass()
{
	using TClass = USteamGameSearch;
	if (!Z_Registration_Info_UClass_USteamGameSearch.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamGameSearch"),
			Z_Registration_Info_UClass_USteamGameSearch.InnerSingleton,
			StaticRegisterNativesUSteamGameSearch,
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
	return Z_Registration_Info_UClass_USteamGameSearch.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamGameSearch_NoRegister()
{
	return USteamGameSearch::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamGameSearch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n* Purpose: Functions for match making services for clients to get to favorites\n* and to operate on game lobbies.\n*/" },
		{ "IncludePath", "SteamGameSearch/SteamGameSearch.h" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* Purpose: Functions for match making services for clients to get to favorites\n* and to operate on game lobbies." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchForGameProgressDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchForGameResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameProgressDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameFinalResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmitPlayerResultResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndGameResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamGameSearch constinit property declarations *************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SearchForGameProgressDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SearchForGameResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameProgressDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameFinalResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SubmitPlayerResultResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EndGameResultDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamGameSearch constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AcceptGame"), .Pointer = &USteamGameSearch::execAcceptGame },
		{ .NameUTF8 = UTF8TEXT("AddGameSearchParams"), .Pointer = &USteamGameSearch::execAddGameSearchParams },
		{ .NameUTF8 = UTF8TEXT("CancelRequestPlayersForGame"), .Pointer = &USteamGameSearch::execCancelRequestPlayersForGame },
		{ .NameUTF8 = UTF8TEXT("DeclineGame"), .Pointer = &USteamGameSearch::execDeclineGame },
		{ .NameUTF8 = UTF8TEXT("EndGame"), .Pointer = &USteamGameSearch::execEndGame },
		{ .NameUTF8 = UTF8TEXT("EndGameSearch"), .Pointer = &USteamGameSearch::execEndGameSearch },
		{ .NameUTF8 = UTF8TEXT("HostConfirmGameStart"), .Pointer = &USteamGameSearch::execHostConfirmGameStart },
		{ .NameUTF8 = UTF8TEXT("RequestPlayersForGame"), .Pointer = &USteamGameSearch::execRequestPlayersForGame },
		{ .NameUTF8 = UTF8TEXT("RetrieveConnectionDetails"), .Pointer = &USteamGameSearch::execRetrieveConnectionDetails },
		{ .NameUTF8 = UTF8TEXT("SearchForGameSolo"), .Pointer = &USteamGameSearch::execSearchForGameSolo },
		{ .NameUTF8 = UTF8TEXT("SearchForGameWithLobby"), .Pointer = &USteamGameSearch::execSearchForGameWithLobby },
		{ .NameUTF8 = UTF8TEXT("SetConnectionDetails"), .Pointer = &USteamGameSearch::execSetConnectionDetails },
		{ .NameUTF8 = UTF8TEXT("SetGameHostParams"), .Pointer = &USteamGameSearch::execSetGameHostParams },
		{ .NameUTF8 = UTF8TEXT("SubmitPlayerResult"), .Pointer = &USteamGameSearch::execSubmitPlayerResult },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamGameSearch_AcceptGame, "AcceptGame" }, // 1629535427
		{ &Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams, "AddGameSearchParams" }, // 1241357644
		{ &Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame, "CancelRequestPlayersForGame" }, // 3755782429
		{ &Z_Construct_UFunction_USteamGameSearch_DeclineGame, "DeclineGame" }, // 3386367531
		{ &Z_Construct_UFunction_USteamGameSearch_EndGame, "EndGame" }, // 4127853215
		{ &Z_Construct_UFunction_USteamGameSearch_EndGameSearch, "EndGameSearch" }, // 2716068057
		{ &Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart, "HostConfirmGameStart" }, // 3686987503
		{ &Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame, "RequestPlayersForGame" }, // 1792510547
		{ &Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails, "RetrieveConnectionDetails" }, // 361114798
		{ &Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo, "SearchForGameSolo" }, // 3891130667
		{ &Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby, "SearchForGameWithLobby" }, // 54420638
		{ &Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails, "SetConnectionDetails" }, // 3011820754
		{ &Z_Construct_UFunction_USteamGameSearch_SetGameHostParams, "SetGameHostParams" }, // 266829918
		{ &Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult, "SubmitPlayerResult" }, // 1093065551
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamGameSearch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamGameSearch_Statics

// ********** Begin Class USteamGameSearch Property Definitions ************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameProgressDelegate = { "SearchForGameProgressDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameSearch, SearchForGameProgressDelegate), Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchForGameProgressDelegate_MetaData), NewProp_SearchForGameProgressDelegate_MetaData) }; // 3416346441
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameResultDelegate = { "SearchForGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameSearch, SearchForGameResultDelegate), Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchForGameResultDelegate_MetaData), NewProp_SearchForGameResultDelegate_MetaData) }; // 1018309584
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate = { "RequestPlayersForGameProgressDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameSearch, RequestPlayersForGameProgressDelegate), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestPlayersForGameProgressDelegate_MetaData), NewProp_RequestPlayersForGameProgressDelegate_MetaData) }; // 2116019653
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate = { "RequestPlayersForGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameSearch, RequestPlayersForGameResultDelegate), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestPlayersForGameResultDelegate_MetaData), NewProp_RequestPlayersForGameResultDelegate_MetaData) }; // 2685878997
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate = { "RequestPlayersForGameFinalResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameSearch, RequestPlayersForGameFinalResultDelegate), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestPlayersForGameFinalResultDelegate_MetaData), NewProp_RequestPlayersForGameFinalResultDelegate_MetaData) }; // 3236031764
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate = { "SubmitPlayerResultResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameSearch, SubmitPlayerResultResultDelegate), Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmitPlayerResultResultDelegate_MetaData), NewProp_SubmitPlayerResultResultDelegate_MetaData) }; // 229831862
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_EndGameResultDelegate = { "EndGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameSearch, EndGameResultDelegate), Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndGameResultDelegate_MetaData), NewProp_EndGameResultDelegate_MetaData) }; // 1291119820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamGameSearch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameProgressDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_EndGameResultDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::PropPointers) < 2048);
// ********** End Class USteamGameSearch Property Definitions **************************************
UObject* (*const Z_Construct_UClass_USteamGameSearch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamGameSearch_Statics::ClassParams = {
	&USteamGameSearch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamGameSearch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamGameSearch_Statics::Class_MetaDataParams)
};
void USteamGameSearch::StaticRegisterNativesUSteamGameSearch()
{
	UClass* Class = USteamGameSearch::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamGameSearch_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamGameSearch()
{
	if (!Z_Registration_Info_UClass_USteamGameSearch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamGameSearch.OuterSingleton, Z_Construct_UClass_USteamGameSearch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamGameSearch.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamGameSearch);
USteamGameSearch::~USteamGameSearch() {}
// ********** End Class USteamGameSearch ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamGameSearch, USteamGameSearch::StaticClass, TEXT("USteamGameSearch"), &Z_Registration_Info_UClass_USteamGameSearch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamGameSearch), 3323445179U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h__Script_SteamCore_3372310939{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
