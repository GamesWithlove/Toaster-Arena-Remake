// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h"

#ifdef STEAMCORE_SteamMatchmakingServersAsyncActions_generated_h
#error "SteamMatchmakingServersAsyncActions.generated.h already included, missing '#pragma once' in SteamMatchmakingServersAsyncActions.h"
#endif
#define STEAMCORE_SteamMatchmakingServersAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UServerFilter;
class USteamCoreMatchmakingServersAsyncActionPingServer;
class USteamCoreMatchmakingServersAsyncActionRequestServerList;
class USteamCoreMatchmakingServersAsyncActionServerRules;
struct FGameServerItem;
struct FGameServerRule;

// ********** Begin Delegate FOnPingServerAsyncDelegate ********************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_16_DELEGATE \
STEAMCORE_API void FOnPingServerAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPingServerAsyncDelegate, FGameServerItem const& Data, bool bWasSuccessful);


// ********** End Delegate FOnPingServerAsyncDelegate **********************************************

// ********** Begin Delegate FOnServerUpdatedAsyncDelegate *****************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_17_DELEGATE \
STEAMCORE_API void FOnServerUpdatedAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnServerUpdatedAsyncDelegate, FGameServerItem const& Data);


// ********** End Delegate FOnServerUpdatedAsyncDelegate *******************************************

// ********** Begin Delegate FOnServerRuleAsyncDelegate ********************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_18_DELEGATE \
STEAMCORE_API void FOnServerRuleAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnServerRuleAsyncDelegate, TArray<FGameServerRule> const& Data, bool bWasSuccessful);


// ********** End Delegate FOnServerRuleAsyncDelegate **********************************************

// ********** Begin Delegate FOnServerRefreshCompleteDelegate **************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_19_DELEGATE \
STEAMCORE_API void FOnServerRefreshCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnServerRefreshCompleteDelegate);


// ********** End Delegate FOnServerRefreshCompleteDelegate ****************************************

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionPingServer ************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCancelPingQueries); \
	DECLARE_FUNCTION(execPingServerAsync);


struct Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingServersAsyncActionPingServer(); \
	friend struct ::Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreMatchmakingServersAsyncActionPingServer, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionPingServer_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingServersAsyncActionPingServer)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingServersAsyncActionPingServer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreMatchmakingServersAsyncActionPingServer(USteamCoreMatchmakingServersAsyncActionPingServer&&) = delete; \
	USteamCoreMatchmakingServersAsyncActionPingServer(const USteamCoreMatchmakingServersAsyncActionPingServer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingServersAsyncActionPingServer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingServersAsyncActionPingServer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingServersAsyncActionPingServer) \
	NO_API virtual ~USteamCoreMatchmakingServersAsyncActionPingServer();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_24_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_27_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreMatchmakingServersAsyncActionPingServer;

// ********** End Class USteamCoreMatchmakingServersAsyncActionPingServer **************************

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionRequestServerList *****************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleServerListFinished); \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCancelServerListQueries); \
	DECLARE_FUNCTION(execRequestSpectatorServerListAsync); \
	DECLARE_FUNCTION(execRequestLANServerListAsync); \
	DECLARE_FUNCTION(execRequestInternetServerListAsync); \
	DECLARE_FUNCTION(execRequestHistoryServerListAsync); \
	DECLARE_FUNCTION(execRequestFriendsServerListAsync); \
	DECLARE_FUNCTION(execRequestFavoritesServerListAsync);


struct Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingServersAsyncActionRequestServerList(); \
	friend struct ::Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreMatchmakingServersAsyncActionRequestServerList, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionRequestServerList_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingServersAsyncActionRequestServerList)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingServersAsyncActionRequestServerList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreMatchmakingServersAsyncActionRequestServerList(USteamCoreMatchmakingServersAsyncActionRequestServerList&&) = delete; \
	USteamCoreMatchmakingServersAsyncActionRequestServerList(const USteamCoreMatchmakingServersAsyncActionRequestServerList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingServersAsyncActionRequestServerList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingServersAsyncActionRequestServerList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingServersAsyncActionRequestServerList) \
	NO_API virtual ~USteamCoreMatchmakingServersAsyncActionRequestServerList();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_56_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_59_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreMatchmakingServersAsyncActionRequestServerList;

// ********** End Class USteamCoreMatchmakingServersAsyncActionRequestServerList *******************

// ********** Begin Class USteamCoreMatchmakingServersAsyncActionServerRules ***********************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCancelServerRulesQueries); \
	DECLARE_FUNCTION(execServerRulesAsync);


struct Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_142_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingServersAsyncActionServerRules(); \
	friend struct ::Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreMatchmakingServersAsyncActionServerRules, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreMatchmakingServersAsyncActionServerRules_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingServersAsyncActionServerRules)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_142_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingServersAsyncActionServerRules(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreMatchmakingServersAsyncActionServerRules(USteamCoreMatchmakingServersAsyncActionServerRules&&) = delete; \
	USteamCoreMatchmakingServersAsyncActionServerRules(const USteamCoreMatchmakingServersAsyncActionServerRules&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingServersAsyncActionServerRules); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingServersAsyncActionServerRules); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingServersAsyncActionServerRules) \
	NO_API virtual ~USteamCoreMatchmakingServersAsyncActionServerRules();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_139_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_142_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_142_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_142_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreMatchmakingServersAsyncActionServerRules;

// ********** End Class USteamCoreMatchmakingServersAsyncActionServerRules *************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
