// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamParties/SteamPartiesAsyncActions.h"

#ifdef STEAMCORE_SteamPartiesAsyncActions_generated_h
#error "SteamPartiesAsyncActions.generated.h already included, missing '#pragma once' in SteamPartiesAsyncActions.h"
#endif
#define STEAMCORE_SteamPartiesAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots;
class USteamCoreSteamPartiesAsyncActionCreateBeacon;
class USteamCoreSteamPartiesAsyncActionJoinParty;
struct FChangeNumOpenSlotsData;
struct FCreateBeaconData;
struct FJoinPartyData;
struct FPartyBeaconID;
struct FSteamPartyBeaconLocation;

// ********** Begin Delegate FOnJoinPartyCallback **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_16_DELEGATE \
STEAMCORE_API void FOnJoinPartyCallback_DelegateWrapper(const FMulticastScriptDelegate& OnJoinPartyCallback, FJoinPartyData const& Data, bool bWasSuccessful);


// ********** End Delegate FOnJoinPartyCallback ****************************************************

// ********** Begin Delegate FOnCreateBeaconCallback ***********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_17_DELEGATE \
STEAMCORE_API void FOnCreateBeaconCallback_DelegateWrapper(const FMulticastScriptDelegate& OnCreateBeaconCallback, FCreateBeaconData const& Data, bool bWasSuccessful);


// ********** End Delegate FOnCreateBeaconCallback *************************************************

// ********** Begin Delegate FOnChangeNumOpenSlotsCallback *****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_18_DELEGATE \
STEAMCORE_API void FOnChangeNumOpenSlotsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnChangeNumOpenSlotsCallback, FChangeNumOpenSlotsData const& Data, bool bWasSuccessful);


// ********** End Delegate FOnChangeNumOpenSlotsCallback *******************************************

// ********** Begin Class USteamCoreSteamPartiesAsyncActionJoinParty *******************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execJoinPartyAsync);


struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionJoinParty(); \
	friend struct ::Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreSteamPartiesAsyncActionJoinParty, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionJoinParty_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreSteamPartiesAsyncActionJoinParty)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSteamPartiesAsyncActionJoinParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreSteamPartiesAsyncActionJoinParty(USteamCoreSteamPartiesAsyncActionJoinParty&&) = delete; \
	USteamCoreSteamPartiesAsyncActionJoinParty(const USteamCoreSteamPartiesAsyncActionJoinParty&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSteamPartiesAsyncActionJoinParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSteamPartiesAsyncActionJoinParty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreSteamPartiesAsyncActionJoinParty) \
	NO_API virtual ~USteamCoreSteamPartiesAsyncActionJoinParty();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_24_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreSteamPartiesAsyncActionJoinParty;

// ********** End Class USteamCoreSteamPartiesAsyncActionJoinParty *********************************

// ********** Begin Class USteamCoreSteamPartiesAsyncActionCreateBeacon ****************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateBeaconAsync);


struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionCreateBeacon(); \
	friend struct ::Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreSteamPartiesAsyncActionCreateBeacon, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionCreateBeacon_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreSteamPartiesAsyncActionCreateBeacon)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSteamPartiesAsyncActionCreateBeacon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreSteamPartiesAsyncActionCreateBeacon(USteamCoreSteamPartiesAsyncActionCreateBeacon&&) = delete; \
	USteamCoreSteamPartiesAsyncActionCreateBeacon(const USteamCoreSteamPartiesAsyncActionCreateBeacon&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSteamPartiesAsyncActionCreateBeacon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSteamPartiesAsyncActionCreateBeacon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreSteamPartiesAsyncActionCreateBeacon) \
	NO_API virtual ~USteamCoreSteamPartiesAsyncActionCreateBeacon();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_50_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreSteamPartiesAsyncActionCreateBeacon;

// ********** End Class USteamCoreSteamPartiesAsyncActionCreateBeacon ******************************

// ********** Begin Class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots **********************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execChangeNumOpenSlotsAsync);


struct Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(); \
	friend struct ::Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots&&) = delete; \
	USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots(const USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots) \
	NO_API virtual ~USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_81_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots;

// ********** End Class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots ************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParties_SteamPartiesAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
