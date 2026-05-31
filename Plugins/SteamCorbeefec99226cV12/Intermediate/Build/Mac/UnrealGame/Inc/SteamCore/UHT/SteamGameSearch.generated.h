// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameSearch/SteamGameSearch.h"

#ifdef STEAMCORE_SteamGameSearch_generated_h
#error "SteamGameSearch.generated.h already included, missing '#pragma once' in SteamGameSearch.h"
#endif
#define STEAMCORE_SteamGameSearch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamGameSearchErrorCode : uint8;
enum class ESteamPlayerResult : uint8;
struct FSteamID;

// ********** Begin Class USteamGameSearch *********************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execSubmitPlayerResult); \
	DECLARE_FUNCTION(execCancelRequestPlayersForGame); \
	DECLARE_FUNCTION(execHostConfirmGameStart); \
	DECLARE_FUNCTION(execRequestPlayersForGame); \
	DECLARE_FUNCTION(execSetConnectionDetails); \
	DECLARE_FUNCTION(execSetGameHostParams); \
	DECLARE_FUNCTION(execEndGameSearch); \
	DECLARE_FUNCTION(execRetrieveConnectionDetails); \
	DECLARE_FUNCTION(execDeclineGame); \
	DECLARE_FUNCTION(execAcceptGame); \
	DECLARE_FUNCTION(execSearchForGameSolo); \
	DECLARE_FUNCTION(execSearchForGameWithLobby); \
	DECLARE_FUNCTION(execAddGameSearchParams);


struct Z_Construct_UClass_USteamGameSearch_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamGameSearch_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamGameSearch(); \
	friend struct ::Z_Construct_UClass_USteamGameSearch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamGameSearch_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamGameSearch, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamGameSearch_NoRegister) \
	DECLARE_SERIALIZER(USteamGameSearch)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamGameSearch(USteamGameSearch&&) = delete; \
	USteamGameSearch(const USteamGameSearch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamGameSearch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamGameSearch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamGameSearch) \
	NO_API virtual ~USteamGameSearch();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_16_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamGameSearch;

// ********** End Class USteamGameSearch ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
