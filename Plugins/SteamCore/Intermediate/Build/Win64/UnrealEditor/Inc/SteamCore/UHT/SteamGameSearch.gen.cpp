// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamGameSearch/SteamGameSearch.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamGameSearch() {}
// Cross Module References
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
// End Cross Module References
	DEFINE_FUNCTION(USteamGameSearch::execEndGame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UniqueGameID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->EndGame(Z_Param_UniqueGameID);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamGameSearch::execCancelRequestPlayersForGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->CancelRequestPlayersForGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameSearch::execHostConfirmGameStart)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UniqueGameID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->HostConfirmGameStart(Z_Param_UniqueGameID);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamGameSearch::execSetConnectionDetails)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConnectionDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->SetConnectionDetails(Z_Param_ConnectionDetails);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamGameSearch::execEndGameSearch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->EndGameSearch();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamGameSearch::execDeclineGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->DeclineGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameSearch::execAcceptGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->AcceptGame();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamGameSearch::execAddGameSearchParams)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_KeyToFind);
		P_GET_TARRAY(FString,Z_Param_ValuesToFind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamGameSearchErrorCode*)Z_Param__Result=P_THIS->AddGameSearchParams(Z_Param_KeyToFind,Z_Param_ValuesToFind);
		P_NATIVE_END;
	}
	void USteamGameSearch::StaticRegisterNativesUSteamGameSearch()
	{
		UClass* Class = USteamGameSearch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptGame", &USteamGameSearch::execAcceptGame },
			{ "AddGameSearchParams", &USteamGameSearch::execAddGameSearchParams },
			{ "CancelRequestPlayersForGame", &USteamGameSearch::execCancelRequestPlayersForGame },
			{ "DeclineGame", &USteamGameSearch::execDeclineGame },
			{ "EndGame", &USteamGameSearch::execEndGame },
			{ "EndGameSearch", &USteamGameSearch::execEndGameSearch },
			{ "HostConfirmGameStart", &USteamGameSearch::execHostConfirmGameStart },
			{ "RequestPlayersForGame", &USteamGameSearch::execRequestPlayersForGame },
			{ "RetrieveConnectionDetails", &USteamGameSearch::execRetrieveConnectionDetails },
			{ "SearchForGameSolo", &USteamGameSearch::execSearchForGameSolo },
			{ "SearchForGameWithLobby", &USteamGameSearch::execSearchForGameWithLobby },
			{ "SetConnectionDetails", &USteamGameSearch::execSetConnectionDetails },
			{ "SetGameHostParams", &USteamGameSearch::execSetGameHostParams },
			{ "SubmitPlayerResult", &USteamGameSearch::execSubmitPlayerResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics
	{
		struct SteamGameSearch_eventAcceptGame_Parms
		{
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventAcceptGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) }; // 614288159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* after receiving SearchForGameResultCallback_t, accept or decline the game\n\x09* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* after receiving SearchForGameResultCallback_t, accept or decline the game\n* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "AcceptGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::SteamGameSearch_eventAcceptGame_Parms), Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_AcceptGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_AcceptGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics
	{
		struct SteamGameSearch_eventAddGameSearchParams_Parms
		{
			FString KeyToFind;
			TArray<FString> ValuesToFind;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToFind;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ValuesToFind_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValuesToFind;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_KeyToFind = { "KeyToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventAddGameSearchParams_Parms, KeyToFind), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind_Inner = { "ValuesToFind", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind = { "ValuesToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventAddGameSearchParams_Parms, ValuesToFind), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventAddGameSearchParams_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) }; // 614288159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_KeyToFind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ValuesToFind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* A keyname and a list of comma separated values: one of which is must be found in order for the match to qualify\n\x09* fails if a search is currently in progress\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* A keyname and a list of comma separated values: one of which is must be found in order for the match to qualify\n* fails if a search is currently in progress" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "AddGameSearchParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::SteamGameSearch_eventAddGameSearchParams_Parms), Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics
	{
		struct SteamGameSearch_eventCancelRequestPlayersForGame_Parms
		{
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventCancelRequestPlayersForGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) }; // 614288159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* cancel request and leave the pool of game hosts looking for players\n\x09* if a set of players has already been sent to host, all players will receive SearchForGameHostFailedToConfirm_t\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* cancel request and leave the pool of game hosts looking for players\n* if a set of players has already been sent to host, all players will receive SearchForGameHostFailedToConfirm_t" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "CancelRequestPlayersForGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::SteamGameSearch_eventCancelRequestPlayersForGame_Parms), Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics
	{
		struct SteamGameSearch_eventDeclineGame_Parms
		{
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventDeclineGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) }; // 614288159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* after receiving SearchForGameResultCallback_t, accept or decline the game\n\x09* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* after receiving SearchForGameResultCallback_t, accept or decline the game\n* multiple SearchForGameResultCallback_t will follow as players accept game until the host starts or cancels the game" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "DeclineGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::SteamGameSearch_eventDeclineGame_Parms), Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_DeclineGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_DeclineGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_EndGame_Statics
	{
		struct SteamGameSearch_eventEndGame_Parms
		{
			FString UniqueGameID;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventEndGame_Parms, UniqueGameID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventEndGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) }; // 614288159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_UniqueGameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* ends the game. no further SubmitPlayerResults for ullUniqueGameID will be accepted\n\x09* any future requests will provide a new ullUniqueGameID\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* ends the game. no further SubmitPlayerResults for ullUniqueGameID will be accepted\n* any future requests will provide a new ullUniqueGameID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "EndGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::SteamGameSearch_eventEndGame_Parms), Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_EndGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_EndGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics
	{
		struct SteamGameSearch_eventEndGameSearch_Parms
		{
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventEndGameSearch_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) }; // 614288159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* leaves queue if still waiting\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* leaves queue if still waiting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "EndGameSearch", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::SteamGameSearch_eventEndGameSearch_Parms), Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_EndGameSearch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_EndGameSearch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics
	{
		struct SteamGameSearch_eventHostConfirmGameStart_Parms
		{
			FString UniqueGameID;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventHostConfirmGameStart_Parms, UniqueGameID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventHostConfirmGameStart_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) }; // 614288159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_UniqueGameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* accept the player list and release connection details to players\n\x09* players will only be given connection details and host steamid when this is called\n\x09* (allows host to accept after all players confirm, some confirm, or none confirm. decision is entirely up to the host)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* accept the player list and release connection details to players\n* players will only be given connection details and host steamid when this is called\n* (allows host to accept after all players confirm, some confirm, or none confirm. decision is entirely up to the host)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "HostConfirmGameStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::SteamGameSearch_eventHostConfirmGameStart_Parms), Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics
	{
		struct SteamGameSearch_eventRequestPlayersForGame_Parms
		{
			int32 PlayerMin;
			int32 PlayerMax;
			int32 MaxTeamSize;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMin;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMax;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTeamSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMin = { "PlayerMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventRequestPlayersForGame_Parms, PlayerMin), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMax = { "PlayerMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventRequestPlayersForGame_Parms, PlayerMax), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_MaxTeamSize = { "MaxTeamSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventRequestPlayersForGame_Parms, MaxTeamSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventRequestPlayersForGame_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) }; // 614288159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_PlayerMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_MaxTeamSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* mark server as available for more players with nPlayerMin,nPlayerMax desired\n\x09* accept no lobbies with playercount greater than nMaxTeamSize\n\x09* the set of lobbies returned must be partitionable into teams of no more than nMaxTeamSize\n\x09* RequestPlayersForGameNotificationCallback_t callback will be sent when the search has started\n\x09* multiple RequestPlayersForGameResultCallback_t callbacks will follow when players are found\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* mark server as available for more players with nPlayerMin,nPlayerMax desired\n* accept no lobbies with playercount greater than nMaxTeamSize\n* the set of lobbies returned must be partitionable into teams of no more than nMaxTeamSize\n* RequestPlayersForGameNotificationCallback_t callback will be sent when the search has started\n* multiple RequestPlayersForGameResultCallback_t callbacks will follow when players are found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "RequestPlayersForGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::SteamGameSearch_eventRequestPlayersForGame_Parms), Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics
	{
		struct SteamGameSearch_eventRetrieveConnectionDetails_Parms
		{
			FSteamID SteamIDHost;
			FString ConnectionDetails;
			int32 NumConnectionDetails;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDHost;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionDetails;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumConnectionDetails;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_SteamIDHost = { "SteamIDHost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventRetrieveConnectionDetails_Parms, SteamIDHost), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ConnectionDetails = { "ConnectionDetails", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventRetrieveConnectionDetails_Parms, ConnectionDetails), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_NumConnectionDetails = { "NumConnectionDetails", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventRetrieveConnectionDetails_Parms, NumConnectionDetails), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventRetrieveConnectionDetails_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) }; // 614288159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_SteamIDHost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ConnectionDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_NumConnectionDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* after receiving GameStartedByHostCallback_t get connection details to server\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* after receiving GameStartedByHostCallback_t get connection details to server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "RetrieveConnectionDetails", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::SteamGameSearch_eventRetrieveConnectionDetails_Parms), Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics
	{
		struct SteamGameSearch_eventSearchForGameSolo_Parms
		{
			int32 PlayerMin;
			int32 PlayerMax;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMin;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMax;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMin = { "PlayerMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameSolo_Parms, PlayerMin), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMax = { "PlayerMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameSolo_Parms, PlayerMax), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameSolo_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) }; // 614288159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_PlayerMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* user enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n\x09* periodic callbacks will be sent as queue time estimates change\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* user enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n* periodic callbacks will be sent as queue time estimates change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "SearchForGameSolo", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::SteamGameSearch_eventSearchForGameSolo_Parms), Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics
	{
		struct SteamGameSearch_eventSearchForGameWithLobby_Parms
		{
			FSteamID SteamIDLobby;
			int32 PlayerMin;
			int32 PlayerMax;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMin;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMax;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameWithLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMin = { "PlayerMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameWithLobby_Parms, PlayerMin), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMax = { "PlayerMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameWithLobby_Parms, PlayerMax), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventSearchForGameWithLobby_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) }; // 614288159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_PlayerMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Client" },
		{ "Comment", "/*\n\x09* all players in lobby enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n\x09* if not the owner of the lobby or search already in progress this call fails\n\x09* periodic callbacks will be sent as queue time estimates change\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* all players in lobby enter the queue and await a SearchForGameNotificationCallback_t callback. fails if another search is currently in progress\n* if not the owner of the lobby or search already in progress this call fails\n* periodic callbacks will be sent as queue time estimates change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "SearchForGameWithLobby", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::SteamGameSearch_eventSearchForGameWithLobby_Parms), Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics
	{
		struct SteamGameSearch_eventSetConnectionDetails_Parms
		{
			FString ConnectionDetails;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionDetails;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ConnectionDetails = { "ConnectionDetails", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventSetConnectionDetails_Parms, ConnectionDetails), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventSetConnectionDetails_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) }; // 614288159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ConnectionDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* set connection details for players once game is found so they can connect to this server\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* set connection details for players once game is found so they can connect to this server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "SetConnectionDetails", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::SteamGameSearch_eventSetConnectionDetails_Parms), Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics
	{
		struct SteamGameSearch_eventSetGameHostParams_Parms
		{
			FString Key;
			TArray<FString> Values;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventSetGameHostParams_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventSetGameHostParams_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventSetGameHostParams_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) }; // 614288159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* a keyname and a list of comma separated values: all the values you allow\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* a keyname and a list of comma separated values: all the values you allow" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "SetGameHostParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::SteamGameSearch_eventSetGameHostParams_Parms), Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_SetGameHostParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_SetGameHostParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics
	{
		struct SteamGameSearch_eventSubmitPlayerResult_Parms
		{
			FString UniqueGameID;
			FSteamID SteamIDPlayer;
			ESteamPlayerResult PlayerResult;
			ESteamGameSearchErrorCode ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDPlayer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerResult;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventSubmitPlayerResult_Parms, UniqueGameID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_SteamIDPlayer = { "SteamIDPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventSubmitPlayerResult_Parms, SteamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult = { "PlayerResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventSubmitPlayerResult_Parms, PlayerResult), Z_Construct_UEnum_SteamCore_ESteamPlayerResult, METADATA_PARAMS(nullptr, 0) }; // 2499844594
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamGameSearch_eventSubmitPlayerResult_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, METADATA_PARAMS(nullptr, 0) }; // 614288159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_UniqueGameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_SteamIDPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_PlayerResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameSearch|Host" },
		{ "Comment", "/*\n\x09* submit a result for one player. does not end the game. ullUniqueGameID continues to describe this game\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* submit a result for one player. does not end the game. ullUniqueGameID continues to describe this game" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameSearch, nullptr, "SubmitPlayerResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::SteamGameSearch_eventSubmitPlayerResult_Parms), Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamGameSearch);
	UClass* Z_Construct_UClass_USteamGameSearch_NoRegister()
	{
		return USteamGameSearch::StaticClass();
	}
	struct Z_Construct_UClass_USteamGameSearch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchForGameProgressDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SearchForGameProgressDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchForGameResultDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SearchForGameResultDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameProgressDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameProgressDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameResultDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameResultDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestPlayersForGameFinalResultDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestPlayersForGameFinalResultDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmitPlayerResultResultDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SubmitPlayerResultResultDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndGameResultDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EndGameResultDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamGameSearch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamGameSearch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamGameSearch_AcceptGame, "AcceptGame" }, // 338370224
		{ &Z_Construct_UFunction_USteamGameSearch_AddGameSearchParams, "AddGameSearchParams" }, // 573444034
		{ &Z_Construct_UFunction_USteamGameSearch_CancelRequestPlayersForGame, "CancelRequestPlayersForGame" }, // 4137790423
		{ &Z_Construct_UFunction_USteamGameSearch_DeclineGame, "DeclineGame" }, // 1225822283
		{ &Z_Construct_UFunction_USteamGameSearch_EndGame, "EndGame" }, // 1675636048
		{ &Z_Construct_UFunction_USteamGameSearch_EndGameSearch, "EndGameSearch" }, // 787983006
		{ &Z_Construct_UFunction_USteamGameSearch_HostConfirmGameStart, "HostConfirmGameStart" }, // 2627275850
		{ &Z_Construct_UFunction_USteamGameSearch_RequestPlayersForGame, "RequestPlayersForGame" }, // 3908831068
		{ &Z_Construct_UFunction_USteamGameSearch_RetrieveConnectionDetails, "RetrieveConnectionDetails" }, // 4254367006
		{ &Z_Construct_UFunction_USteamGameSearch_SearchForGameSolo, "SearchForGameSolo" }, // 2641459610
		{ &Z_Construct_UFunction_USteamGameSearch_SearchForGameWithLobby, "SearchForGameWithLobby" }, // 3540174345
		{ &Z_Construct_UFunction_USteamGameSearch_SetConnectionDetails, "SetConnectionDetails" }, // 1609690653
		{ &Z_Construct_UFunction_USteamGameSearch_SetGameHostParams, "SetGameHostParams" }, // 1874590637
		{ &Z_Construct_UFunction_USteamGameSearch_SubmitPlayerResult, "SubmitPlayerResult" }, // 1209120558
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameSearch_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n* Purpose: Functions for match making services for clients to get to favorites\n* and to operate on game lobbies.\n*/" },
		{ "IncludePath", "SteamGameSearch/SteamGameSearch.h" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
		{ "ToolTip", "* Purpose: Functions for match making services for clients to get to favorites\n* and to operate on game lobbies." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameProgressDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameProgressDelegate = { "SearchForGameProgressDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamGameSearch, SearchForGameProgressDelegate), Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameProgressDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameProgressDelegate_MetaData)) }; // 2216224499
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameResultDelegate = { "SearchForGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamGameSearch, SearchForGameResultDelegate), Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameResultDelegate_MetaData)) }; // 1971006980
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate = { "RequestPlayersForGameProgressDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamGameSearch, RequestPlayersForGameProgressDelegate), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate_MetaData)) }; // 2732425468
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate = { "RequestPlayersForGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamGameSearch, RequestPlayersForGameResultDelegate), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate_MetaData)) }; // 63126974
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate = { "RequestPlayersForGameFinalResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamGameSearch, RequestPlayersForGameFinalResultDelegate), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate_MetaData)) }; // 3263534696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate = { "SubmitPlayerResultResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamGameSearch, SubmitPlayerResultResultDelegate), Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate_MetaData)) }; // 166638045
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameSearch_Statics::NewProp_EndGameResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|GameSearch|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearch.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameSearch_Statics::NewProp_EndGameResultDelegate = { "EndGameResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamGameSearch, EndGameResultDelegate), Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_EndGameResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::NewProp_EndGameResultDelegate_MetaData)) }; // 3153558713
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamGameSearch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameProgressDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SearchForGameResultDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameProgressDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameResultDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_RequestPlayersForGameFinalResultDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_SubmitPlayerResultResultDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameSearch_Statics::NewProp_EndGameResultDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamGameSearch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamGameSearch>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamGameSearch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameSearch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamGameSearch()
	{
		if (!Z_Registration_Info_UClass_USteamGameSearch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamGameSearch.OuterSingleton, Z_Construct_UClass_USteamGameSearch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamGameSearch.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamGameSearch>()
	{
		return USteamGameSearch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamGameSearch);
	USteamGameSearch::~USteamGameSearch() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamGameSearch, USteamGameSearch::StaticClass, TEXT("USteamGameSearch"), &Z_Registration_Info_UClass_USteamGameSearch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamGameSearch), 3783172908U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_1068661886(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
