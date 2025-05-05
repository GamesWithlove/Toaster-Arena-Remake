// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameSearch/SteamGameSearchTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEndGameResultCallback;
struct FRequestPlayersForGameFinalResultCallback;
struct FRequestPlayersForGameProgressCallback;
struct FRequestPlayersForGameResultCallback;
struct FSearchForGameProgressCallback;
struct FSearchForGameResultCallback;
struct FSubmitPlayerResultResultCallback;
#ifdef STEAMCORE_SteamGameSearchTypes_generated_h
#error "SteamGameSearchTypes.generated.h already included, missing '#pragma once' in SteamGameSearchTypes.h"
#endif
#define STEAMCORE_SteamGameSearchTypes_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSearchForGameProgressCallback>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSearchForGameResultCallback>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRequestPlayersForGameProgressCallback_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRequestPlayersForGameProgressCallback>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRequestPlayersForGameResultCallback>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_252_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRequestPlayersForGameFinalResultCallback_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRequestPlayersForGameFinalResultCallback>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_283_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSubmitPlayerResultResultCallback>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_315_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEndGameResultCallback_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FEndGameResultCallback>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_341_DELEGATE \
STEAMCORE_API void FSearchForGameProgressDelegate_DelegateWrapper(const FMulticastScriptDelegate& SearchForGameProgressDelegate, FSearchForGameProgressCallback const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_342_DELEGATE \
STEAMCORE_API void FSearchForGameResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& SearchForGameResultDelegate, FSearchForGameResultCallback const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_343_DELEGATE \
STEAMCORE_API void FRequestPlayersForGameProgressDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestPlayersForGameProgressDelegate, FRequestPlayersForGameProgressCallback const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_344_DELEGATE \
STEAMCORE_API void FRequestPlayersForGameResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestPlayersForGameResultDelegate, FRequestPlayersForGameResultCallback const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_345_DELEGATE \
STEAMCORE_API void FRequestPlayersForGameFinalResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestPlayersForGameFinalResultDelegate, FRequestPlayersForGameFinalResultCallback const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_346_DELEGATE \
STEAMCORE_API void FSubmitPlayerResultResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& SubmitPlayerResultResultDelegate, FSubmitPlayerResultResultCallback const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h_347_DELEGATE \
STEAMCORE_API void FEndGameResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& EndGameResultDelegate, FEndGameResultCallback const& Data);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearchTypes_h


#define FOREACH_ENUM_ESTEAMGAMESEARCHERRORCODE(op) \
	op(ESteamGameSearchErrorCode::Invalid) \
	op(ESteamGameSearchErrorCode::OK) \
	op(ESteamGameSearchErrorCode::Failed_Search_Already_In_Progress) \
	op(ESteamGameSearchErrorCode::Failed_No_Search_In_Progress) \
	op(ESteamGameSearchErrorCode::Failed_Not_Lobby_Leader) \
	op(ESteamGameSearchErrorCode::Failed_No_Host_Available) \
	op(ESteamGameSearchErrorCode::Failed_Search_Params_Invalid) \
	op(ESteamGameSearchErrorCode::Failed_Offline) \
	op(ESteamGameSearchErrorCode::Failed_NotAuthorized) \
	op(ESteamGameSearchErrorCode::Failed_Unknown_Error) 

enum class ESteamGameSearchErrorCode : uint8;
template<> struct TIsUEnumClass<ESteamGameSearchErrorCode> { enum { Value = true }; };
template<> STEAMCORE_API UEnum* StaticEnum<ESteamGameSearchErrorCode>();

#define FOREACH_ENUM_ESTEAMPLAYERRESULT(op) \
	op(ESteamPlayerResult::Invalid) \
	op(ESteamPlayerResult::FailedToConnect) \
	op(ESteamPlayerResult::Abandoned) \
	op(ESteamPlayerResult::Kicked) \
	op(ESteamPlayerResult::Incomplete) \
	op(ESteamPlayerResult::Completed) 

enum class ESteamPlayerResult : uint8;
template<> struct TIsUEnumClass<ESteamPlayerResult> { enum { Value = true }; };
template<> STEAMCORE_API UEnum* StaticEnum<ESteamPlayerResult>();

#define FOREACH_ENUM_ESTEAMPLAYERACCEPTSTATE(op) \
	op(ESteamPlayerAcceptState::Unknown) \
	op(ESteamPlayerAcceptState::PlayerAccepted) \
	op(ESteamPlayerAcceptState::PlayerDeclined) 

enum class ESteamPlayerAcceptState : uint8;
template<> struct TIsUEnumClass<ESteamPlayerAcceptState> { enum { Value = true }; };
template<> STEAMCORE_API UEnum* StaticEnum<ESteamPlayerAcceptState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
