// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamGameSearch/SteamGameSearchTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamGameSearchTypes() {}

// ********** Begin Cross Module References ********************************************************
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
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESteamGameSearchErrorCode *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamGameSearchErrorCode;
static UEnum* ESteamGameSearchErrorCode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamGameSearchErrorCode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamGameSearchErrorCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamGameSearchErrorCode"));
	}
	return Z_Registration_Info_UEnum_ESteamGameSearchErrorCode.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamGameSearchErrorCode>()
{
	return ESteamGameSearchErrorCode_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
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
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamGameSearchErrorCode",
	"ESteamGameSearchErrorCode",
	Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode()
{
	if (!Z_Registration_Info_UEnum_ESteamGameSearchErrorCode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamGameSearchErrorCode.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamGameSearchErrorCode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamGameSearchErrorCode.InnerSingleton;
}
// ********** End Enum ESteamGameSearchErrorCode ***************************************************

// ********** Begin Enum ESteamPlayerResult ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamPlayerResult;
static UEnum* ESteamPlayerResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamPlayerResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamPlayerResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamPlayerResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamPlayerResult"));
	}
	return Z_Registration_Info_UEnum_ESteamPlayerResult.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamPlayerResult>()
{
	return ESteamPlayerResult_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamPlayerResult::Invalid", (int64)ESteamPlayerResult::Invalid },
		{ "ESteamPlayerResult::FailedToConnect", (int64)ESteamPlayerResult::FailedToConnect },
		{ "ESteamPlayerResult::Abandoned", (int64)ESteamPlayerResult::Abandoned },
		{ "ESteamPlayerResult::Kicked", (int64)ESteamPlayerResult::Kicked },
		{ "ESteamPlayerResult::Incomplete", (int64)ESteamPlayerResult::Incomplete },
		{ "ESteamPlayerResult::Completed", (int64)ESteamPlayerResult::Completed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamPlayerResult",
	"ESteamPlayerResult",
	Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerResult()
{
	if (!Z_Registration_Info_UEnum_ESteamPlayerResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamPlayerResult.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamPlayerResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamPlayerResult.InnerSingleton;
}
// ********** End Enum ESteamPlayerResult **********************************************************

// ********** Begin Enum ESteamPlayerAcceptState ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamPlayerAcceptState;
static UEnum* ESteamPlayerAcceptState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamPlayerAcceptState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamPlayerAcceptState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamPlayerAcceptState"));
	}
	return Z_Registration_Info_UEnum_ESteamPlayerAcceptState.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamPlayerAcceptState>()
{
	return ESteamPlayerAcceptState_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "PlayerAccepted.Name", "ESteamPlayerAcceptState::PlayerAccepted" },
		{ "PlayerDeclined.Name", "ESteamPlayerAcceptState::PlayerDeclined" },
		{ "Unknown.Name", "ESteamPlayerAcceptState::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamPlayerAcceptState::Unknown", (int64)ESteamPlayerAcceptState::Unknown },
		{ "ESteamPlayerAcceptState::PlayerAccepted", (int64)ESteamPlayerAcceptState::PlayerAccepted },
		{ "ESteamPlayerAcceptState::PlayerDeclined", (int64)ESteamPlayerAcceptState::PlayerDeclined },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamPlayerAcceptState",
	"ESteamPlayerAcceptState",
	Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState()
{
	if (!Z_Registration_Info_UEnum_ESteamPlayerAcceptState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamPlayerAcceptState.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamPlayerAcceptState.InnerSingleton;
}
// ********** End Enum ESteamPlayerAcceptState *****************************************************

// ********** Begin ScriptStruct FSearchForGameProgressCallback ************************************
struct Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSearchForGameProgressCallback); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSearchForGameProgressCallback); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// all future callbacks referencing this search will include this Search ID\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "all future callbacks referencing this search will include this Search ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if search has started this result will be k_EResultOK, any other value indicates search has failed to start or has terminated\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if search has started this result will be k_EResultOK, any other value indicates search has failed to start or has terminated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// lobby ID if lobby search, invalid steamID otherwise\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "lobby ID if lobby search, invalid steamID otherwise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDEndedSearch_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if search was terminated, steamID that terminated search\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if search was terminated, steamID that terminated search" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondsRemainingEstimate_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayersSearching_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSearchForGameProgressCallback constinit property declarations ****
	static const UECodeGen_Private::FStrPropertyParams NewProp_SearchID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDEndedSearch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsRemainingEstimate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersSearching;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSearchForGameProgressCallback constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchForGameProgressCallback>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSearchForGameProgressCallback;
class UScriptStruct* FSearchForGameProgressCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSearchForGameProgressCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSearchForGameProgressCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchForGameProgressCallback, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SearchForGameProgressCallback"));
	}
	return Z_Registration_Info_UScriptStruct_FSearchForGameProgressCallback.OuterSingleton;
	}

// ********** Begin ScriptStruct FSearchForGameProgressCallback Property Definitions ***************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, SearchID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchID_MetaData), NewProp_SearchID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, LobbyID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyID_MetaData), NewProp_LobbyID_MetaData) }; // 3382971600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SteamIDEndedSearch = { "SteamIDEndedSearch", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, SteamIDEndedSearch), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDEndedSearch_MetaData), NewProp_SteamIDEndedSearch_MetaData) }; // 3382971600
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SecondsRemainingEstimate = { "SecondsRemainingEstimate", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, SecondsRemainingEstimate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondsRemainingEstimate_MetaData), NewProp_SecondsRemainingEstimate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_PlayersSearching = { "PlayersSearching", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, PlayersSearching), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayersSearching_MetaData), NewProp_PlayersSearching_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SearchID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_LobbyID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SteamIDEndedSearch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SecondsRemainingEstimate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_PlayersSearching,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSearchForGameProgressCallback Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SearchForGameProgressCallback",
	Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::PropPointers),
	sizeof(FSearchForGameProgressCallback),
	alignof(FSearchForGameProgressCallback),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSearchForGameProgressCallback()
{
	if (!Z_Registration_Info_UScriptStruct_FSearchForGameProgressCallback.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSearchForGameProgressCallback.InnerSingleton, Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSearchForGameProgressCallback.InnerSingleton);
}
// ********** End ScriptStruct FSearchForGameProgressCallback **************************************

// ********** Begin ScriptStruct FSearchForGameResultCallback **************************************
struct Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSearchForGameResultCallback); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSearchForGameResultCallback); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Notification to all players searching that a game has been found\n*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "* Notification to all players searching that a game has been found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if game/host was lost this will be an error value\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if game/host was lost this will be an error value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountPlayersInGame_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if m_bGameFound is true the following are non-zero\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if m_bGameFound is true the following are non-zero" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountAcceptedGame_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if m_bGameFound is true the following are non-zero\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if m_bGameFound is true the following are non-zero" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDHost_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if SteamIDHost is valid the host has started the game\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if SteamIDHost is valid the host has started the game" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFinalCallback_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSearchForGameResultCallback constinit property declarations ******
	static const UECodeGen_Private::FStrPropertyParams NewProp_SearchID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountPlayersInGame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountAcceptedGame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDHost;
	static void NewProp_bFinalCallback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinalCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSearchForGameResultCallback constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchForGameResultCallback>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSearchForGameResultCallback;
class UScriptStruct* FSearchForGameResultCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSearchForGameResultCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSearchForGameResultCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchForGameResultCallback, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SearchForGameResultCallback"));
	}
	return Z_Registration_Info_UScriptStruct_FSearchForGameResultCallback.OuterSingleton;
	}

// ********** Begin ScriptStruct FSearchForGameResultCallback Property Definitions *****************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchForGameResultCallback, SearchID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchID_MetaData), NewProp_SearchID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchForGameResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountPlayersInGame = { "CountPlayersInGame", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchForGameResultCallback, CountPlayersInGame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountPlayersInGame_MetaData), NewProp_CountPlayersInGame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountAcceptedGame = { "CountAcceptedGame", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchForGameResultCallback, CountAcceptedGame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountAcceptedGame_MetaData), NewProp_CountAcceptedGame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SteamIDHost = { "SteamIDHost", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSearchForGameResultCallback, SteamIDHost), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDHost_MetaData), NewProp_SteamIDHost_MetaData) }; // 3382971600
void Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback_SetBit(void* Obj)
{
	((FSearchForGameResultCallback*)Obj)->bFinalCallback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback = { "bFinalCallback", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSearchForGameResultCallback), &Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFinalCallback_MetaData), NewProp_bFinalCallback_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SearchID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountPlayersInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountAcceptedGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SteamIDHost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSearchForGameResultCallback Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SearchForGameResultCallback",
	Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::PropPointers),
	sizeof(FSearchForGameResultCallback),
	alignof(FSearchForGameResultCallback),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSearchForGameResultCallback()
{
	if (!Z_Registration_Info_UScriptStruct_FSearchForGameResultCallback.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSearchForGameResultCallback.InnerSingleton, Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSearchForGameResultCallback.InnerSingleton);
}
// ********** End ScriptStruct FSearchForGameResultCallback ****************************************

// ********** Begin ScriptStruct FRequestPlayersForGameProgressCallback ****************************
struct Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRequestPlayersForGameProgressCallback); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRequestPlayersForGameProgressCallback); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Callback from RequestPlayersForGame when the matchmaking service has started or ended search\n* Callback will also follow a call from CancelRequestPlayersForGame - m_bSearchInProgress will be false\n*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "* Callback from RequestPlayersForGame when the matchmaking service has started or ended search\n* Callback will also follow a call from CancelRequestPlayersForGame - m_bSearchInProgress will be false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// SearchID will be non-zero if this is k_EResultOK\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "SearchID will be non-zero if this is k_EResultOK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// all future callbacks referencing this search will include this Search ID\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "all future callbacks referencing this search will include this Search ID" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRequestPlayersForGameProgressCallback constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SearchID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRequestPlayersForGameProgressCallback constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestPlayersForGameProgressCallback>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRequestPlayersForGameProgressCallback;
class UScriptStruct* FRequestPlayersForGameProgressCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRequestPlayersForGameProgressCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRequestPlayersForGameProgressCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("RequestPlayersForGameProgressCallback"));
	}
	return Z_Registration_Info_UScriptStruct_FRequestPlayersForGameProgressCallback.OuterSingleton;
	}

// ********** Begin ScriptStruct FRequestPlayersForGameProgressCallback Property Definitions *******
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestPlayersForGameProgressCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestPlayersForGameProgressCallback, SearchID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchID_MetaData), NewProp_SearchID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewProp_SearchID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRequestPlayersForGameProgressCallback Property Definitions *********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"RequestPlayersForGameProgressCallback",
	Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::PropPointers),
	sizeof(FRequestPlayersForGameProgressCallback),
	alignof(FRequestPlayersForGameProgressCallback),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback()
{
	if (!Z_Registration_Info_UScriptStruct_FRequestPlayersForGameProgressCallback.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRequestPlayersForGameProgressCallback.InnerSingleton, Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRequestPlayersForGameProgressCallback.InnerSingleton);
}
// ********** End ScriptStruct FRequestPlayersForGameProgressCallback ******************************

// ********** Begin ScriptStruct FRequestPlayersForGameResultCallback ******************************
struct Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRequestPlayersForGameResultCallback); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRequestPlayersForGameResultCallback); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Callback from RequestPlayersForGame\n* One of these will be sent per player \n* Followed by additional callbacks when players accept or decline the game\n*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "* Callback from RequestPlayersForGame\n* One of these will be sent per player\n* Followed by additional callbacks when players accept or decline the game" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// SearchID will be non-zero if this is k_EResultOK\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "SearchID will be non-zero if this is k_EResultOK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDPlayerFound_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// player steamID\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "player steamID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// if the player is in a lobby, the lobby ID\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "if the player is in a lobby, the lobby ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAcceptState_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalPlayersFound_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalPlayersAcceptedGame_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "Comment", "// expect this many callbacks at minimum\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "expect this many callbacks at minimum" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedTeamIndex_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueGameID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRequestPlayersForGameResultCallback constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SearchID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDPlayerFound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerAcceptState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerAcceptState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalPlayersFound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalPlayersAcceptedGame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SuggestedTeamIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRequestPlayersForGameResultCallback constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestPlayersForGameResultCallback>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRequestPlayersForGameResultCallback;
class UScriptStruct* FRequestPlayersForGameResultCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRequestPlayersForGameResultCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRequestPlayersForGameResultCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("RequestPlayersForGameResultCallback"));
	}
	return Z_Registration_Info_UScriptStruct_FRequestPlayersForGameResultCallback.OuterSingleton;
	}

// ********** Begin ScriptStruct FRequestPlayersForGameResultCallback Property Definitions *********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, SearchID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchID_MetaData), NewProp_SearchID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDPlayerFound = { "SteamIDPlayerFound", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, SteamIDPlayerFound), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDPlayerFound_MetaData), NewProp_SteamIDPlayerFound_MetaData) }; // 3382971600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDLobby_MetaData), NewProp_SteamIDLobby_MetaData) }; // 3382971600
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState = { "PlayerAcceptState", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, PlayerAcceptState), Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAcceptState_MetaData), NewProp_PlayerAcceptState_MetaData) }; // 3499140495
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, PlayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerIndex_MetaData), NewProp_PlayerIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersFound = { "TotalPlayersFound", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, TotalPlayersFound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalPlayersFound_MetaData), NewProp_TotalPlayersFound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersAcceptedGame = { "TotalPlayersAcceptedGame", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, TotalPlayersAcceptedGame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalPlayersAcceptedGame_MetaData), NewProp_TotalPlayersAcceptedGame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SuggestedTeamIndex = { "SuggestedTeamIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, SuggestedTeamIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuggestedTeamIndex_MetaData), NewProp_SuggestedTeamIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, UniqueGameID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueGameID_MetaData), NewProp_UniqueGameID_MetaData) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRequestPlayersForGameResultCallback Property Definitions ***********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"RequestPlayersForGameResultCallback",
	Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::PropPointers),
	sizeof(FRequestPlayersForGameResultCallback),
	alignof(FRequestPlayersForGameResultCallback),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback()
{
	if (!Z_Registration_Info_UScriptStruct_FRequestPlayersForGameResultCallback.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRequestPlayersForGameResultCallback.InnerSingleton, Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRequestPlayersForGameResultCallback.InnerSingleton);
}
// ********** End ScriptStruct FRequestPlayersForGameResultCallback ********************************

// ********** Begin ScriptStruct FRequestPlayersForGameFinalResultCallback *************************
struct Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRequestPlayersForGameFinalResultCallback); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRequestPlayersForGameFinalResultCallback); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueGameID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRequestPlayersForGameFinalResultCallback constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SearchID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRequestPlayersForGameFinalResultCallback constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestPlayersForGameFinalResultCallback>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRequestPlayersForGameFinalResultCallback;
class UScriptStruct* FRequestPlayersForGameFinalResultCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRequestPlayersForGameFinalResultCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRequestPlayersForGameFinalResultCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("RequestPlayersForGameFinalResultCallback"));
	}
	return Z_Registration_Info_UScriptStruct_FRequestPlayersForGameFinalResultCallback.OuterSingleton;
	}

// ********** Begin ScriptStruct FRequestPlayersForGameFinalResultCallback Property Definitions ****
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestPlayersForGameFinalResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestPlayersForGameFinalResultCallback, SearchID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchID_MetaData), NewProp_SearchID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestPlayersForGameFinalResultCallback, UniqueGameID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueGameID_MetaData), NewProp_UniqueGameID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_SearchID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewProp_UniqueGameID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRequestPlayersForGameFinalResultCallback Property Definitions ******
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"RequestPlayersForGameFinalResultCallback",
	Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::PropPointers),
	sizeof(FRequestPlayersForGameFinalResultCallback),
	alignof(FRequestPlayersForGameFinalResultCallback),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback()
{
	if (!Z_Registration_Info_UScriptStruct_FRequestPlayersForGameFinalResultCallback.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRequestPlayersForGameFinalResultCallback.InnerSingleton, Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRequestPlayersForGameFinalResultCallback.InnerSingleton);
}
// ********** End ScriptStruct FRequestPlayersForGameFinalResultCallback ***************************

// ********** Begin ScriptStruct FSubmitPlayerResultResultCallback *********************************
struct Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSubmitPlayerResultResultCallback); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSubmitPlayerResultResultCallback); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* This callback confirms that results were received by the matchmaking service for this player\n*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "* This callback confirms that results were received by the matchmaking service for this player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueGameID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDPlayer_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSubmitPlayerResultResultCallback constinit property declarations *
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSubmitPlayerResultResultCallback constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmitPlayerResultResultCallback>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSubmitPlayerResultResultCallback;
class UScriptStruct* FSubmitPlayerResultResultCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSubmitPlayerResultResultCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSubmitPlayerResultResultCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SubmitPlayerResultResultCallback"));
	}
	return Z_Registration_Info_UScriptStruct_FSubmitPlayerResultResultCallback.OuterSingleton;
	}

// ********** Begin ScriptStruct FSubmitPlayerResultResultCallback Property Definitions ************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmitPlayerResultResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmitPlayerResultResultCallback, UniqueGameID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueGameID_MetaData), NewProp_UniqueGameID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_SteamIDPlayer = { "SteamIDPlayer", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmitPlayerResultResultCallback, SteamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDPlayer_MetaData), NewProp_SteamIDPlayer_MetaData) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_UniqueGameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_SteamIDPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSubmitPlayerResultResultCallback Property Definitions **************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SubmitPlayerResultResultCallback",
	Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::PropPointers),
	sizeof(FSubmitPlayerResultResultCallback),
	alignof(FSubmitPlayerResultResultCallback),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback()
{
	if (!Z_Registration_Info_UScriptStruct_FSubmitPlayerResultResultCallback.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSubmitPlayerResultResultCallback.InnerSingleton, Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSubmitPlayerResultResultCallback.InnerSingleton);
}
// ********** End ScriptStruct FSubmitPlayerResultResultCallback ***********************************

// ********** Begin ScriptStruct FEndGameResultCallback ********************************************
struct Z_Construct_UScriptStruct_FEndGameResultCallback_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FEndGameResultCallback); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEndGameResultCallback); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* This callback confirms that the game is recorded as complete on the matchmaking service\n* The next call to RequestPlayersForGame will generate a new unique game ID\n*/" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "* This callback confirms that the game is recorded as complete on the matchmaking service\n* The next call to RequestPlayersForGame will generate a new unique game ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueGameID_MetaData[] = {
		{ "Category", "GameSearch" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEndGameResultCallback constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEndGameResultCallback constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEndGameResultCallback>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FEndGameResultCallback_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEndGameResultCallback;
class UScriptStruct* FEndGameResultCallback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEndGameResultCallback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEndGameResultCallback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEndGameResultCallback, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("EndGameResultCallback"));
	}
	return Z_Registration_Info_UScriptStruct_FEndGameResultCallback.OuterSingleton;
	}

// ********** Begin ScriptStruct FEndGameResultCallback Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEndGameResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEndGameResultCallback, UniqueGameID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueGameID_MetaData), NewProp_UniqueGameID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_UniqueGameID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FEndGameResultCallback Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"EndGameResultCallback",
	Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::PropPointers),
	sizeof(FEndGameResultCallback),
	alignof(FEndGameResultCallback),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEndGameResultCallback()
{
	if (!Z_Registration_Info_UScriptStruct_FEndGameResultCallback.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEndGameResultCallback.InnerSingleton, Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEndGameResultCallback.InnerSingleton);
}
// ********** End ScriptStruct FEndGameResultCallback **********************************************

// ********** Begin Delegate FSearchForGameProgressDelegate ****************************************
struct Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventSearchForGameProgressDelegate_Parms
	{
		FSearchForGameProgressCallback Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSearchForGameProgressDelegate constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSearchForGameProgressDelegate constinit property declarations **********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSearchForGameProgressDelegate Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventSearchForGameProgressDelegate_Parms, Data), Z_Construct_UScriptStruct_FSearchForGameProgressCallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1081105948
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSearchForGameProgressDelegate Property Definitions *********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "SearchForGameProgressDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::_Script_SteamCore_eventSearchForGameProgressDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::_Script_SteamCore_eventSearchForGameProgressDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_SearchForGameProgressDelegate__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FSearchForGameProgressDelegate ******************************************

// ********** Begin Delegate FSearchForGameResultDelegate ******************************************
struct Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventSearchForGameResultDelegate_Parms
	{
		FSearchForGameResultCallback Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSearchForGameResultDelegate constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSearchForGameResultDelegate constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSearchForGameResultDelegate Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventSearchForGameResultDelegate_Parms, Data), Z_Construct_UScriptStruct_FSearchForGameResultCallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1869088276
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSearchForGameResultDelegate Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "SearchForGameResultDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventSearchForGameResultDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventSearchForGameResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_SearchForGameResultDelegate__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FSearchForGameResultDelegate ********************************************

// ********** Begin Delegate FRequestPlayersForGameProgressDelegate ********************************
struct Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventRequestPlayersForGameProgressDelegate_Parms
	{
		FRequestPlayersForGameProgressCallback Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRequestPlayersForGameProgressDelegate constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRequestPlayersForGameProgressDelegate constinit property declarations **
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRequestPlayersForGameProgressDelegate Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventRequestPlayersForGameProgressDelegate_Parms, Data), Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2238655954
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FRequestPlayersForGameProgressDelegate Property Definitions *************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "RequestPlayersForGameProgressDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::_Script_SteamCore_eventRequestPlayersForGameProgressDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::_Script_SteamCore_eventRequestPlayersForGameProgressDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameProgressDelegate__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FRequestPlayersForGameProgressDelegate **********************************

// ********** Begin Delegate FRequestPlayersForGameResultDelegate **********************************
struct Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventRequestPlayersForGameResultDelegate_Parms
	{
		FRequestPlayersForGameResultCallback Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRequestPlayersForGameResultDelegate constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRequestPlayersForGameResultDelegate constinit property declarations ****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRequestPlayersForGameResultDelegate Property Definitions *************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventRequestPlayersForGameResultDelegate_Parms, Data), Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 901038853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FRequestPlayersForGameResultDelegate Property Definitions ***************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "RequestPlayersForGameResultDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventRequestPlayersForGameResultDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventRequestPlayersForGameResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameResultDelegate__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FRequestPlayersForGameResultDelegate ************************************

// ********** Begin Delegate FRequestPlayersForGameFinalResultDelegate *****************************
struct Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventRequestPlayersForGameFinalResultDelegate_Parms
	{
		FRequestPlayersForGameFinalResultCallback Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRequestPlayersForGameFinalResultDelegate constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRequestPlayersForGameFinalResultDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRequestPlayersForGameFinalResultDelegate Property Definitions ********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventRequestPlayersForGameFinalResultDelegate_Parms, Data), Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1413539714
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FRequestPlayersForGameFinalResultDelegate Property Definitions **********
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "RequestPlayersForGameFinalResultDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventRequestPlayersForGameFinalResultDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventRequestPlayersForGameFinalResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_RequestPlayersForGameFinalResultDelegate__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FRequestPlayersForGameFinalResultDelegate *******************************

// ********** Begin Delegate FSubmitPlayerResultResultDelegate *************************************
struct Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventSubmitPlayerResultResultDelegate_Parms
	{
		FSubmitPlayerResultResultCallback Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSubmitPlayerResultResultDelegate constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSubmitPlayerResultResultDelegate constinit property declarations *******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSubmitPlayerResultResultDelegate Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventSubmitPlayerResultResultDelegate_Parms, Data), Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3278400390
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSubmitPlayerResultResultDelegate Property Definitions ******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "SubmitPlayerResultResultDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventSubmitPlayerResultResultDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventSubmitPlayerResultResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_SubmitPlayerResultResultDelegate__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FSubmitPlayerResultResultDelegate ***************************************

// ********** Begin Delegate FEndGameResultDelegate ************************************************
struct Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventEndGameResultDelegate_Parms
	{
		FEndGameResultCallback Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameSearch/SteamGameSearchTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FEndGameResultDelegate constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FEndGameResultDelegate constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FEndGameResultDelegate Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventEndGameResultDelegate_Parms, Data), Z_Construct_UScriptStruct_FEndGameResultCallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 652400710
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FEndGameResultDelegate Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "EndGameResultDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventEndGameResultDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::_Script_SteamCore_eventEndGameResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_EndGameResultDelegate__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FEndGameResultDelegate **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h__Script_SteamCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamGameSearchErrorCode_StaticEnum, TEXT("ESteamGameSearchErrorCode"), &Z_Registration_Info_UEnum_ESteamGameSearchErrorCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1276743680U) },
		{ ESteamPlayerResult_StaticEnum, TEXT("ESteamPlayerResult"), &Z_Registration_Info_UEnum_ESteamPlayerResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2564552485U) },
		{ ESteamPlayerAcceptState_StaticEnum, TEXT("ESteamPlayerAcceptState"), &Z_Registration_Info_UEnum_ESteamPlayerAcceptState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3499140495U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSearchForGameProgressCallback::StaticStruct, Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewStructOps, TEXT("SearchForGameProgressCallback"),&Z_Registration_Info_UScriptStruct_FSearchForGameProgressCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSearchForGameProgressCallback), 1081105948U) },
		{ FSearchForGameResultCallback::StaticStruct, Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewStructOps, TEXT("SearchForGameResultCallback"),&Z_Registration_Info_UScriptStruct_FSearchForGameResultCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSearchForGameResultCallback), 1869088276U) },
		{ FRequestPlayersForGameProgressCallback::StaticStruct, Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics::NewStructOps, TEXT("RequestPlayersForGameProgressCallback"),&Z_Registration_Info_UScriptStruct_FRequestPlayersForGameProgressCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRequestPlayersForGameProgressCallback), 2238655954U) },
		{ FRequestPlayersForGameResultCallback::StaticStruct, Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewStructOps, TEXT("RequestPlayersForGameResultCallback"),&Z_Registration_Info_UScriptStruct_FRequestPlayersForGameResultCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRequestPlayersForGameResultCallback), 901038853U) },
		{ FRequestPlayersForGameFinalResultCallback::StaticStruct, Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics::NewStructOps, TEXT("RequestPlayersForGameFinalResultCallback"),&Z_Registration_Info_UScriptStruct_FRequestPlayersForGameFinalResultCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRequestPlayersForGameFinalResultCallback), 1413539714U) },
		{ FSubmitPlayerResultResultCallback::StaticStruct, Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewStructOps, TEXT("SubmitPlayerResultResultCallback"),&Z_Registration_Info_UScriptStruct_FSubmitPlayerResultResultCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmitPlayerResultResultCallback), 3278400390U) },
		{ FEndGameResultCallback::StaticStruct, Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewStructOps, TEXT("EndGameResultCallback"),&Z_Registration_Info_UScriptStruct_FEndGameResultCallback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEndGameResultCallback), 652400710U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h__Script_SteamCore_320382868{
	TEXT("/Script/SteamCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h__Script_SteamCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h__Script_SteamCore_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h__Script_SteamCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h__Script_SteamCore_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
