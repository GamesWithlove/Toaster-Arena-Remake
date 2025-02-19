// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameSearch/SteamGameSearch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamGameSearchErrorCode : uint8;
enum class ESteamPlayerResult : uint8;
struct FSteamID;
#ifdef STEAMCORE_SteamGameSearch_generated_h
#error "SteamGameSearch.generated.h already included, missing '#pragma once' in SteamGameSearch.h"
#endif
#define STEAMCORE_SteamGameSearch_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_RPC_WRAPPERS \
 \
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


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
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


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamGameSearch(); \
	friend struct Z_Construct_UClass_USteamGameSearch_Statics; \
public: \
	DECLARE_CLASS(USteamGameSearch, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamGameSearch)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSteamGameSearch(); \
	friend struct Z_Construct_UClass_USteamGameSearch_Statics; \
public: \
	DECLARE_CLASS(USteamGameSearch, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamGameSearch)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamGameSearch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamGameSearch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamGameSearch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamGameSearch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamGameSearch(USteamGameSearch&&); \
	NO_API USteamGameSearch(const USteamGameSearch&); \
public: \
	NO_API virtual ~USteamGameSearch();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamGameSearch(USteamGameSearch&&); \
	NO_API USteamGameSearch(const USteamGameSearch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamGameSearch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamGameSearch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamGameSearch) \
	NO_API virtual ~USteamGameSearch();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_16_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamGameSearch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameSearch_SteamGameSearch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
