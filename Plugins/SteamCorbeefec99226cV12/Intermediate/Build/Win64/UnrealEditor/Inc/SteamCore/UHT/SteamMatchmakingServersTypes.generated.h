// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMatchmakingServers/SteamMatchmakingServersTypes.h"

#ifdef STEAMCORE_SteamMatchmakingServersTypes_generated_h
#error "SteamMatchmakingServersTypes.generated.h already included, missing '#pragma once' in SteamMatchmakingServersTypes.h"
#endif
#define STEAMCORE_SteamMatchmakingServersTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameServerItem;
struct FGameServerRule;

// ********** Begin Class UServerFilter ************************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFilters); \
	DECLARE_FUNCTION(execAddFilterPassword); \
	DECLARE_FUNCTION(execAddFilterProxy); \
	DECLARE_FUNCTION(execAddFilterNotAppId); \
	DECLARE_FUNCTION(execAddFilterWhitelisted); \
	DECLARE_FUNCTION(execAddFilterName); \
	DECLARE_FUNCTION(execAddFilterVersion); \
	DECLARE_FUNCTION(execAddFilterLinux); \
	DECLARE_FUNCTION(execAddFilterNoPlayers); \
	DECLARE_FUNCTION(execAddFilterHasPlayers); \
	DECLARE_FUNCTION(execAddFilterNotFull); \
	DECLARE_FUNCTION(execAddFilterSecure); \
	DECLARE_FUNCTION(execAddFilterDedicated); \
	DECLARE_FUNCTION(execAddFilterGameAddr); \
	DECLARE_FUNCTION(execAddFilterNor); \
	DECLARE_FUNCTION(execAddFilterNand); \
	DECLARE_FUNCTION(execAddFilterOr); \
	DECLARE_FUNCTION(execAddFilterAnd); \
	DECLARE_FUNCTION(execAddFilterGameTagsNor); \
	DECLARE_FUNCTION(execAddFilterGameTagsAnd); \
	DECLARE_FUNCTION(execAddFilterGameDataNor); \
	DECLARE_FUNCTION(execAddFilterGameDataOr); \
	DECLARE_FUNCTION(execAddFilterGameDataAnd); \
	DECLARE_FUNCTION(execAddFilterMap);


struct Z_Construct_UClass_UServerFilter_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_UServerFilter_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUServerFilter(); \
	friend struct ::Z_Construct_UClass_UServerFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_UServerFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UServerFilter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_UServerFilter_NoRegister) \
	DECLARE_SERIALIZER(UServerFilter)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UServerFilter(UServerFilter&&) = delete; \
	UServerFilter(const UServerFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UServerFilter)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_14_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_17_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UServerFilter;

// ********** End Class UServerFilter **************************************************************

// ********** Begin ScriptStruct FSteamServerAddr **************************************************
struct Z_Construct_UScriptStruct_FSteamServerAddr_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_207_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSteamServerAddr_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSteamServerAddr;
// ********** End ScriptStruct FSteamServerAddr ****************************************************

// ********** Begin ScriptStruct FGameServerItem ***************************************************
struct Z_Construct_UScriptStruct_FGameServerItem_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_242_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameServerItem_Statics; \
	static class UScriptStruct* StaticStruct();


struct FGameServerItem;
// ********** End ScriptStruct FGameServerItem *****************************************************

// ********** Begin ScriptStruct FGameServerRule ***************************************************
struct Z_Construct_UScriptStruct_FGameServerRule_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_327_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameServerRule_Statics; \
	static class UScriptStruct* StaticStruct();


struct FGameServerRule;
// ********** End ScriptStruct FGameServerRule *****************************************************

// ********** Begin Delegate FOnServerUpdated ******************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_347_DELEGATE \
STEAMCORE_API void FOnServerUpdated_DelegateWrapper(const FScriptDelegate& OnServerUpdated, FGameServerItem const& data);


// ********** End Delegate FOnServerUpdated ********************************************************

// ********** Begin Delegate FOnServerPing *********************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_349_DELEGATE \
STEAMCORE_API void FOnServerPing_DelegateWrapper(const FScriptDelegate& OnServerPing, FGameServerItem const& data, bool bWasSuccessful);


// ********** End Delegate FOnServerPing ***********************************************************

// ********** Begin Delegate FOnServerRules ********************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_351_DELEGATE \
STEAMCORE_API void FOnServerRules_DelegateWrapper(const FScriptDelegate& OnServerRules, TArray<FGameServerRule> const& data, bool bWasSuccessful);


// ********** End Delegate FOnServerRules **********************************************************

// ********** Begin Delegate FOnServerRefreshCompleted *********************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_353_DELEGATE \
STEAMCORE_API void FOnServerRefreshCompleted_DelegateWrapper(const FScriptDelegate& OnServerRefreshCompleted);


// ********** End Delegate FOnServerRefreshCompleted ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
