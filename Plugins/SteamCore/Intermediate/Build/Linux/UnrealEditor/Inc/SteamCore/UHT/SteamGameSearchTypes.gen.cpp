// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamGameSearch/SteamGameSearchTypes.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamGameSearchTypes() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerResult();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEndGameResultCallback();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSearchForGameProgressCallback();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSearchForGameResultCallback();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamGameSearchErrorCode;
	static UEnum* ESteamGameSearchErrorCode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamGameSearchErrorCode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamGameSearchErrorCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamGameSearchErrorCode"));
		}
		return Z_Registration_Info_UEnum_ESteamGameSearchErrorCode.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamGameSearchErrorCode>()
	{
		return ESteamGameSearchErrorCode_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Statics::Enumerators[] = {
		{ "ESteamGameSearchErrorCode::Invalid", (int64)ESteamGameSearchErrorCode::Invalid },
		{ "ESteamGameSearchErrorCode::OK", (int64)ESteamGameSearchErrorCode::OK },
		{ "ESteamGameSearchErrorCode::Failed_Search_Already_In_Progress", (int64)ESteamGameSearchErrorCode::Failed_Search_Already_In_Progress },
		{ "ESteamGameSearchErrorCode::Failed_No_Search_In_Progress", (int64)ESteamGameSearchErrorCode::Failed_No_Search_In_Progress },
		{ "ESteamGameSearchErrorCode::Failed_Not_Lobby_Leader", (int64)ESteamGameSearchErrorCode::Failed_Not_Lobby_Leader },
		{ "ESteamGameSearchErrorCode::Failed_No_Host_Available", (int64)ESteamGameSearchErrorCode::Failed_No_Host_Available },
		{ "ESteamGameSearchErrorCode::Failed_Search_Params_Invalid", (int64)ESteamGameSearchErrorCode::Failed_Search_Params_Invalid },
		{ "ESteamGameSearchErrorCode::Failed_Offline", (int64)ESteamGameSearchErrorCode::Failed_Offline },
		{ "ESteamGameSearchErrorCode::Failed_NotAuthorized", (int64)ESteamGameSearchErrorCode::Failed_NotAuthorized },
		{ "ESteamGameSearchErrorCode::Failed_Unknown_Error", (int64)ESteamGameSearchErrorCode::Failed_Unknown_Error },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "Failed_No_Host_Available.Comment", "// if not the lobby leader can not call SearchForGameWithLobby\n" },
		{ "Failed_No_Host_Available.Name", "ESteamGameSearchErrorCode::Failed_No_Host_Available" },
		{ "Failed_No_Host_Available.ToolTip", "if not the lobby leader can not call SearchForGameWithLobby" },
		{ "Failed_No_Search_In_Progress.Name", "ESteamGameSearchErrorCode::Failed_No_Search_In_Progress" },
		{ "Failed_Not_Lobby_Leader.Name", "ESteamGameSearchErrorCode::Failed_Not_Lobby_Leader" },
		{ "Failed_NotAuthorized.Comment", "// offline, could not communicate with server\n" },
		{ "Failed_NotAuthorized.Name", "ESteamGameSearchErrorCode::Failed_NotAuthorized" },
		{ "Failed_NotAuthorized.ToolTip", "offline, could not communicate with server" },
		{ "Failed_Offline.Comment", "// search params are invalid\n" },
		{ "Failed_Offline.Name", "ESteamGameSearchErrorCode::Failed_Offline" },
		{ "Failed_Offline.ToolTip", "search params are invalid" },
		{ "Failed_Search_Already_In_Progress.Name", "ESteamGameSearchErrorCode::Failed_Search_Already_In_Progress" },
		{ "Failed_Search_Params_Invalid.Comment", "// no host is available that matches those search params\n" },
		{ "Failed_Search_Params_Invalid.Name", "ESteamGameSearchErrorCode::Failed_Search_Params_Invalid" },
		{ "Failed_Search_Params_Invalid.ToolTip", "no host is available that matches those search params" },
		{ "Failed_Unknown_Error.Comment", "// either the user or the application does not have priveledges to do this\n" },
		{ "Failed_Unknown_Error.Name", "ESteamGameSearchErrorCode::Failed_Unknown_Error" },
		{ "Failed_Unknown_Error.ToolTip", "either the user or the application does not have priveledges to do this" },
		{ "Invalid.Name", "ESteamGameSearchErrorCode::Invalid" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "OK.Name", "ESteamGameSearchErrorCode::OK" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamGameSearchErrorCode",
		"ESteamGameSearchErrorCode",
		Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode()
	{
		if (!Z_Registration_Info_UEnum_ESteamGameSearchErrorCode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamGameSearchErrorCode.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamGameSearchErrorCode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamPlayerResult;
	static UEnum* ESteamPlayerResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamPlayerResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamPlayerResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamPlayerResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamPlayerResult"));
		}
		return Z_Registration_Info_UEnum_ESteamPlayerResult.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamPlayerResult>()
	{
		return ESteamPlayerResult_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Statics::Enumerators[] = {
		{ "ESteamPlayerResult::Invalid", (int64)ESteamPlayerResult::Invalid },
		{ "ESteamPlayerResult::FailedToConnect", (int64)ESteamPlayerResult::FailedToConnect },
		{ "ESteamPlayerResult::Abandoned", (int64)ESteamPlayerResult::Abandoned },
		{ "ESteamPlayerResult::Kicked", (int64)ESteamPlayerResult::Kicked },
		{ "ESteamPlayerResult::Incomplete", (int64)ESteamPlayerResult::Incomplete },
		{ "ESteamPlayerResult::Completed", (int64)ESteamPlayerResult::Completed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Statics::Enum_MetaDataParams[] = {
		{ "Abandoned.Comment", "// failed to connect after confirming\n" },
		{ "Abandoned.Name", "ESteamPlayerResult::Abandoned" },
		{ "Abandoned.ToolTip", "failed to connect after confirming" },
		{ "BlueprintType", "true" },
		{ "Completed.Comment", "// player stayed to end but game did not conclude successfully ( nofault to player )\n" },
		{ "Completed.Name", "ESteamPlayerResult::Completed" },
		{ "Completed.ToolTip", "player stayed to end but game did not conclude successfully ( nofault to player )" },
		{ "FailedToConnect.Name", "ESteamPlayerResult::FailedToConnect" },
		{ "Incomplete.Comment", "// kicked by other players/moderator/server rules\n" },
		{ "Incomplete.Name", "ESteamPlayerResult::Incomplete" },
		{ "Incomplete.ToolTip", "kicked by other players/moderator/server rules" },
		{ "Invalid.Name", "ESteamPlayerResult::Invalid" },
		{ "Kicked.Comment", "// quit game without completing it\n" },
		{ "Kicked.Name", "ESteamPlayerResult::Kicked" },
		{ "Kicked.ToolTip", "quit game without completing it" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamPlayerResult",
		"ESteamPlayerResult",
		Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerResult()
	{
		if (!Z_Registration_Info_UEnum_ESteamPlayerResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamPlayerResult.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamPlayerResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamPlayerAcceptState;
	static UEnum* ESteamPlayerAcceptState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamPlayerAcceptState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamPlayerAcceptState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamPlayerAcceptState"));
		}
		return Z_Registration_Info_UEnum_ESteamPlayerAcceptState.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamPlayerAcceptState>()
	{
		return ESteamPlayerAcceptState_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Statics::Enumerators[] = {
		{ "ESteamPlayerAcceptState::Unknown", (int64)ESteamPlayerAcceptState::Unknown },
		{ "ESteamPlayerAcceptState::PlayerAccepted", (int64)ESteamPlayerAcceptState::PlayerAccepted },
		{ "ESteamPlayerAcceptState::PlayerDeclined", (int64)ESteamPlayerAcceptState::PlayerDeclined },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "PlayerAccepted.Name", "ESteamPlayerAcceptState::PlayerAccepted" },
		{ "PlayerDeclined.Name", "ESteamPlayerAcceptState::PlayerDeclined" },
		{ "Unknown.Name", "ESteamPlayerAcceptState::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamPlayerAcceptState",
		"ESteamPlayerAcceptState",
		Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState()
	{
		if (!Z_Registration_Info_UEnum_ESteamPlayerAcceptState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamPlayerAcceptState.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamPlayerAcceptState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SearchForGameProgressCallback;
class UScriptStruct* FSearchForGameProgressCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SearchForGameProgressCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SearchForGameProgressCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchForGameProgressCallback, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SearchForGameProgressCallback"));
	}
	return Z_Registration_Info_UScriptStruct_SearchForGameProgressCallback.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSearchForGameProgressCallback>()
{
	return FSearchForGameProgressCallback::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SearchID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDEndedSearch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDEndedSearch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondsRemainingEstimate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsRemainingEstimate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayersSearching_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersSearching;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchForGameProgressCallback>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SearchID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// all future callbacks referencing this search will include this Search ID\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "all future callbacks referencing this search will include this Search ID" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchForGameProgressCallback, SearchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SearchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SearchID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if search has started this result will be k_EResultOK, any other value indicates search has failed to start or has terminated\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if search has started this result will be k_EResultOK, any other value indicates search has failed to start or has terminated" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchForGameProgressCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_LobbyID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// lobby ID if lobby search, invalid steamID otherwise\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "lobby ID if lobby search, invalid steamID otherwise" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchForGameProgressCallback, LobbyID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_LobbyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_LobbyID_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SteamIDEndedSearch_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if search was terminated, steamID that terminated search\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if search was terminated, steamID that terminated search" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SteamIDEndedSearch = { "SteamIDEndedSearch", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchForGameProgressCallback, SteamIDEndedSearch), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SteamIDEndedSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SteamIDEndedSearch_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SecondsRemainingEstimate_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SecondsRemainingEstimate = { "SecondsRemainingEstimate", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchForGameProgressCallback, SecondsRemainingEstimate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SecondsRemainingEstimate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SecondsRemainingEstimate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_PlayersSearching_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_PlayersSearching = { "PlayersSearching", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchForGameProgressCallback, PlayersSearching), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_PlayersSearching_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_PlayersSearching_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SearchID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_LobbyID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SteamIDEndedSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SecondsRemainingEstimate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_PlayersSearching,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SearchForGameProgressCallback",
		sizeof(FSearchForGameProgressCallback),
		alignof(FSearchForGameProgressCallback),
		Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSearchForGameProgressCallback()
	{
		if (!Z_Registration_Info_UScriptStruct_SearchForGameProgressCallback.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SearchForGameProgressCallback.InnerSingleton, Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SearchForGameProgressCallback.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SearchForGameResultCallback;
class UScriptStruct* FSearchForGameResultCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SearchForGameResultCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SearchForGameResultCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchForGameResultCallback, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SearchForGameResultCallback"));
	}
	return Z_Registration_Info_UScriptStruct_SearchForGameResultCallback.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSearchForGameResultCallback>()
{
	return FSearchForGameResultCallback::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SearchID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountPlayersInGame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CountPlayersInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountAcceptedGame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CountAcceptedGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDHost_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDHost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFinalCallback_MetaData[];
#endif
		static void NewProp_bFinalCallback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinalCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Notification to all players searching that a game has been found\n*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "* Notification to all players searching that a game has been found" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchForGameResultCallback>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SearchID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchForGameResultCallback, SearchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SearchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SearchID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if game/host was lost this will be an error value\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if game/host was lost this will be an error value" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchForGameResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountPlayersInGame_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if m_bGameFound is true the following are non-zero\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if m_bGameFound is true the following are non-zero" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountPlayersInGame = { "CountPlayersInGame", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchForGameResultCallback, CountPlayersInGame), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountPlayersInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountPlayersInGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountAcceptedGame_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if m_bGameFound is true the following are non-zero\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if m_bGameFound is true the following are non-zero" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountAcceptedGame = { "CountAcceptedGame", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchForGameResultCallback, CountAcceptedGame), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountAcceptedGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountAcceptedGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SteamIDHost_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if SteamIDHost is valid the host has started the game\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if SteamIDHost is valid the host has started the game" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SteamIDHost = { "SteamIDHost", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchForGameResultCallback, SteamIDHost), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SteamIDHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SteamIDHost_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback_SetBit(void* Obj)
	{
		((FSearchForGameResultCallback*)Obj)->bFinalCallback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback = { "bFinalCallback", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSearchForGameResultCallback), &Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SearchID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountPlayersInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountAcceptedGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SteamIDHost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SearchForGameResultCallback",
		sizeof(FSearchForGameResultCallback),
		alignof(FSearchForGameResultCallback),
		Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSearchForGameResultCallback()
	{
		if (!Z_Registration_Info_UScriptStruct_SearchForGameResultCallback.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SearchForGameResultCallback.InnerSingleton, Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SearchForGameResultCallback.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RequestPlayersForGameProgressCallback;
class UScriptStruct* FRequestPlayersForGameProgressCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RequestPlayersForGameProgressCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RequestPlayersForGameProgressCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("RequestPlayersForGameProgressCallback"));
	}
	return Z_Registration_Info_UScriptStruct_RequestPlayersForGameProgressCallback.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRequestPlayersForGameProgressCallback>()
{
	return FRequestPlayersForGameProgressCallback::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SearchID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Callback from RequestPlayersForGame when the matchmaking service has started or ended search\n* Callback will also follow a call from CancelRequestPlayersForGame - m_bSearchInProgress will be false\n*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "* Callback from RequestPlayersForGame when the matchmaking service has started or ended search\n* Callback will also follow a call from CancelRequestPlayersForGame - m_bSearchInProgress will be false" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestPlayersForGameProgressCallback>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// SearchID will be non-zero if this is k_EResultOK\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "SearchID will be non-zero if this is k_EResultOK" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestPlayersForGameProgressCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_SearchID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// all future callbacks referencing this search will include this Search ID\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "all future callbacks referencing this search will include this Search ID" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestPlayersForGameProgressCallback, SearchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_SearchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_SearchID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_SearchID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RequestPlayersForGameProgressCallback",
		sizeof(FRequestPlayersForGameProgressCallback),
		alignof(FRequestPlayersForGameProgressCallback),
		Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback()
	{
		if (!Z_Registration_Info_UScriptStruct_RequestPlayersForGameProgressCallback.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RequestPlayersForGameProgressCallback.InnerSingleton, Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RequestPlayersForGameProgressCallback.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RequestPlayersForGameResultCallback;
class UScriptStruct* FRequestPlayersForGameResultCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RequestPlayersForGameResultCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RequestPlayersForGameResultCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("RequestPlayersForGameResultCallback"));
	}
	return Z_Registration_Info_UScriptStruct_RequestPlayersForGameResultCallback.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRequestPlayersForGameResultCallback>()
{
	return FRequestPlayersForGameResultCallback::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SearchID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDPlayerFound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDPlayerFound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerAcceptState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAcceptState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerAcceptState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalPlayersFound_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalPlayersFound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalPlayersAcceptedGame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalPlayersAcceptedGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedTeamIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SuggestedTeamIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueGameID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Callback from RequestPlayersForGame\n* One of these will be sent per player \n* Followed by additional callbacks when players accept or decline the game\n*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "* Callback from RequestPlayersForGame\n* One of these will be sent per player\n* Followed by additional callbacks when players accept or decline the game" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestPlayersForGameResultCallback>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SearchID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// SearchID will be non-zero if this is k_EResultOK\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "SearchID will be non-zero if this is k_EResultOK" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, SearchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SearchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SearchID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDPlayerFound_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// player steamID\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "player steamID" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDPlayerFound = { "SteamIDPlayerFound", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, SteamIDPlayerFound), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDPlayerFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDPlayerFound_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if the player is in a lobby, the lobby ID\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if the player is in a lobby, the lobby ID" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDLobby_MetaData)) }; // 1620016601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState = { "PlayerAcceptState", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, PlayerAcceptState), Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState_MetaData)) }; // 2748555219
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, PlayerIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersFound_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersFound = { "TotalPlayersFound", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, TotalPlayersFound), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersFound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersAcceptedGame_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// expect this many callbacks at minimum\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "expect this many callbacks at minimum" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersAcceptedGame = { "TotalPlayersAcceptedGame", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, TotalPlayersAcceptedGame), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersAcceptedGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersAcceptedGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SuggestedTeamIndex_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SuggestedTeamIndex = { "SuggestedTeamIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, SuggestedTeamIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SuggestedTeamIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SuggestedTeamIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_UniqueGameID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, UniqueGameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_UniqueGameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_UniqueGameID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SearchID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDPlayerFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersAcceptedGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SuggestedTeamIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_UniqueGameID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RequestPlayersForGameResultCallback",
		sizeof(FRequestPlayersForGameResultCallback),
		alignof(FRequestPlayersForGameResultCallback),
		Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback()
	{
		if (!Z_Registration_Info_UScriptStruct_RequestPlayersForGameResultCallback.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RequestPlayersForGameResultCallback.InnerSingleton, Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RequestPlayersForGameResultCallback.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RequestPlayersForGameFinalResultCallback;
class UScriptStruct* FRequestPlayersForGameFinalResultCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RequestPlayersForGameFinalResultCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RequestPlayersForGameFinalResultCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("RequestPlayersForGameFinalResultCallback"));
	}
	return Z_Registration_Info_UScriptStruct_RequestPlayersForGameFinalResultCallback.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRequestPlayersForGameFinalResultCallback>()
{
	return FRequestPlayersForGameFinalResultCallback::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SearchID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueGameID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestPlayersForGameFinalResultCallback>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestPlayersForGameFinalResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_SearchID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestPlayersForGameFinalResultCallback, SearchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_SearchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_SearchID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_UniqueGameID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequestPlayersForGameFinalResultCallback, UniqueGameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_UniqueGameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_UniqueGameID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_SearchID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_UniqueGameID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RequestPlayersForGameFinalResultCallback",
		sizeof(FRequestPlayersForGameFinalResultCallback),
		alignof(FRequestPlayersForGameFinalResultCallback),
		Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback()
	{
		if (!Z_Registration_Info_UScriptStruct_RequestPlayersForGameFinalResultCallback.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RequestPlayersForGameFinalResultCallback.InnerSingleton, Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RequestPlayersForGameFinalResultCallback.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmitPlayerResultResultCallback;
class UScriptStruct* FSubmitPlayerResultResultCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmitPlayerResultResultCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmitPlayerResultResultCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SubmitPlayerResultResultCallback"));
	}
	return Z_Registration_Info_UScriptStruct_SubmitPlayerResultResultCallback.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSubmitPlayerResultResultCallback>()
{
	return FSubmitPlayerResultResultCallback::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueGameID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* This callback confirms that results were received by the matchmaking service for this player\n*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "* This callback confirms that results were received by the matchmaking service for this player" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmitPlayerResultResultCallback>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmitPlayerResultResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_UniqueGameID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmitPlayerResultResultCallback, UniqueGameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_UniqueGameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_UniqueGameID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_SteamIDPlayer_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_SteamIDPlayer = { "SteamIDPlayer", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmitPlayerResultResultCallback, SteamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_SteamIDPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_SteamIDPlayer_MetaData)) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_UniqueGameID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_SteamIDPlayer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SubmitPlayerResultResultCallback",
		sizeof(FSubmitPlayerResultResultCallback),
		alignof(FSubmitPlayerResultResultCallback),
		Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback()
	{
		if (!Z_Registration_Info_UScriptStruct_SubmitPlayerResultResultCallback.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmitPlayerResultResultCallback.InnerSingleton, Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubmitPlayerResultResultCallback.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EndGameResultCallback;
class UScriptStruct* FEndGameResultCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EndGameResultCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EndGameResultCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEndGameResultCallback, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("EndGameResultCallback"));
	}
	return Z_Registration_Info_UScriptStruct_EndGameResultCallback.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FEndGameResultCallback>()
{
	return FEndGameResultCallback::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEndGameResultCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueGameID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* This callback confirms that the game is recorded as complete on the matchmaking service\n* The next call to RequestPlayersForGame will generate a new unique game ID\n*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "* This callback confirms that the game is recorded as complete on the matchmaking service\n* The next call to RequestPlayersForGame will generate a new unique game ID" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEndGameResultCallback>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEndGameResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_UniqueGameID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEndGameResultCallback, UniqueGameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_UniqueGameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_UniqueGameID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_UniqueGameID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"EndGameResultCallback",
		sizeof(FEndGameResultCallback),
		alignof(FEndGameResultCallback),
		Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEndGameResultCallback()
	{
		if (!Z_Registration_Info_UScriptStruct_EndGameResultCallback.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EndGameResultCallback.InnerSingleton, Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EndGameResultCallback.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventSearchForGameProgressDelegate_Parms
		{
			FSearchForGameProgressCallback Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventSearchForGameProgressDelegate_Parms, Data), Z_Construct_UScriptStruct_FSearchForGameProgressCallback, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 4168429076
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "SearchForGameProgressDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::_Script_SteamCore_eventSearchForGameProgressDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSearchForGameProgressDelegate_DelegateWrapper(const FMulticastScriptDelegate& SearchForGameProgressDelegate, FSearchForGameProgressCallback const& Data)
{
	struct _Script_SteamCore_eventSearchForGameProgressDelegate_Parms
	{
		FSearchForGameProgressCallback Data;
	};
	_Script_SteamCore_eventSearchForGameProgressDelegate_Parms Parms;
	Parms.Data=Data;
	SearchForGameProgressDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventSearchForGameResultDelegate_Parms
		{
			FSearchForGameResultCallback Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventSearchForGameResultDelegate_Parms, Data), Z_Construct_UScriptStruct_FSearchForGameResultCallback, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 738678117
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "SearchForGameResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventSearchForGameResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSearchForGameResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& SearchForGameResultDelegate, FSearchForGameResultCallback const& Data)
{
	struct _Script_SteamCore_eventSearchForGameResultDelegate_Parms
	{
		FSearchForGameResultCallback Data;
	};
	_Script_SteamCore_eventSearchForGameResultDelegate_Parms Parms;
	Parms.Data=Data;
	SearchForGameResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventRequestPlayersForGameProgressDelegate_Parms
		{
			FRequestPlayersForGameProgressCallback Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventRequestPlayersForGameProgressDelegate_Parms, Data), Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 177856105
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "RequestPlayersForGameProgressDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::_Script_SteamCore_eventRequestPlayersForGameProgressDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRequestPlayersForGameProgressDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestPlayersForGameProgressDelegate, FRequestPlayersForGameProgressCallback const& Data)
{
	struct _Script_SteamCore_eventRequestPlayersForGameProgressDelegate_Parms
	{
		FRequestPlayersForGameProgressCallback Data;
	};
	_Script_SteamCore_eventRequestPlayersForGameProgressDelegate_Parms Parms;
	Parms.Data=Data;
	RequestPlayersForGameProgressDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventRequestPlayersForGameResultDelegate_Parms
		{
			FRequestPlayersForGameResultCallback Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventRequestPlayersForGameResultDelegate_Parms, Data), Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2250816066
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "RequestPlayersForGameResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventRequestPlayersForGameResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRequestPlayersForGameResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestPlayersForGameResultDelegate, FRequestPlayersForGameResultCallback const& Data)
{
	struct _Script_SteamCore_eventRequestPlayersForGameResultDelegate_Parms
	{
		FRequestPlayersForGameResultCallback Data;
	};
	_Script_SteamCore_eventRequestPlayersForGameResultDelegate_Parms Parms;
	Parms.Data=Data;
	RequestPlayersForGameResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventRequestPlayersForGameFinalResultDelegate_Parms
		{
			FRequestPlayersForGameFinalResultCallback Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventRequestPlayersForGameFinalResultDelegate_Parms, Data), Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2426099221
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "RequestPlayersForGameFinalResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventRequestPlayersForGameFinalResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRequestPlayersForGameFinalResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestPlayersForGameFinalResultDelegate, FRequestPlayersForGameFinalResultCallback const& Data)
{
	struct _Script_SteamCore_eventRequestPlayersForGameFinalResultDelegate_Parms
	{
		FRequestPlayersForGameFinalResultCallback Data;
	};
	_Script_SteamCore_eventRequestPlayersForGameFinalResultDelegate_Parms Parms;
	Parms.Data=Data;
	RequestPlayersForGameFinalResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventSubmitPlayerResultResultDelegate_Parms
		{
			FSubmitPlayerResultResultCallback Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventSubmitPlayerResultResultDelegate_Parms, Data), Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2734435668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "SubmitPlayerResultResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventSubmitPlayerResultResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSubmitPlayerResultResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& SubmitPlayerResultResultDelegate, FSubmitPlayerResultResultCallback const& Data)
{
	struct _Script_SteamCore_eventSubmitPlayerResultResultDelegate_Parms
	{
		FSubmitPlayerResultResultCallback Data;
	};
	_Script_SteamCore_eventSubmitPlayerResultResultDelegate_Parms Parms;
	Parms.Data=Data;
	SubmitPlayerResultResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventEndGameResultDelegate_Parms
		{
			FEndGameResultCallback Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventEndGameResultDelegate_Parms, Data), Z_Construct_UScriptStruct_FEndGameResultCallback, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 2792369546
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "EndGameResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventEndGameResultDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FEndGameResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& EndGameResultDelegate, FEndGameResultCallback const& Data)
{
	struct _Script_SteamCore_eventEndGameResultDelegate_Parms
	{
		FEndGameResultCallback Data;
	};
	_Script_SteamCore_eventEndGameResultDelegate_Parms Parms;
	Parms.Data=Data;
	EndGameResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_Statics::EnumInfo[] = {
		{ ESteamGameSearchErrorCode_StaticEnum, TEXT("ESteamGameSearchErrorCode"), &Z_Registration_Info_UEnum_ESteamGameSearchErrorCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 614288159U) },
		{ ESteamPlayerResult_StaticEnum, TEXT("ESteamPlayerResult"), &Z_Registration_Info_UEnum_ESteamPlayerResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2499844594U) },
		{ ESteamPlayerAcceptState_StaticEnum, TEXT("ESteamPlayerAcceptState"), &Z_Registration_Info_UEnum_ESteamPlayerAcceptState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2748555219U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_Statics::ScriptStructInfo[] = {
		{ FSearchForGameProgressCallback::StaticStruct, Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewStructOps, TEXT("SearchForGameProgressCallback"), &Z_Registration_Info_UScriptStruct_SearchForGameProgressCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSearchForGameProgressCallback), 4168429076U) },
		{ FSearchForGameResultCallback::StaticStruct, Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewStructOps, TEXT("SearchForGameResultCallback"), &Z_Registration_Info_UScriptStruct_SearchForGameResultCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSearchForGameResultCallback), 738678117U) },
		{ FRequestPlayersForGameProgressCallback::StaticStruct, Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewStructOps, TEXT("RequestPlayersForGameProgressCallback"), &Z_Registration_Info_UScriptStruct_RequestPlayersForGameProgressCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRequestPlayersForGameProgressCallback), 177856105U) },
		{ FRequestPlayersForGameResultCallback::StaticStruct, Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewStructOps, TEXT("RequestPlayersForGameResultCallback"), &Z_Registration_Info_UScriptStruct_RequestPlayersForGameResultCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRequestPlayersForGameResultCallback), 2250816066U) },
		{ FRequestPlayersForGameFinalResultCallback::StaticStruct, Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewStructOps, TEXT("RequestPlayersForGameFinalResultCallback"), &Z_Registration_Info_UScriptStruct_RequestPlayersForGameFinalResultCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRequestPlayersForGameFinalResultCallback), 2426099221U) },
		{ FSubmitPlayerResultResultCallback::StaticStruct, Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewStructOps, TEXT("SubmitPlayerResultResultCallback"), &Z_Registration_Info_UScriptStruct_SubmitPlayerResultResultCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmitPlayerResultResultCallback), 2734435668U) },
		{ FEndGameResultCallback::StaticStruct, Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewStructOps, TEXT("EndGameResultCallback"), &Z_Registration_Info_UScriptStruct_EndGameResultCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEndGameResultCallback), 2792369546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_245695579(TEXT("/Script/SteamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
