// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUser/SteamUserAsyncActions.h"

#ifdef STEAMCORE_SteamUserAsyncActions_generated_h
#error "SteamUserAsyncActions.generated.h already included, missing '#pragma once' in SteamUserAsyncActions.h"
#endif
#define STEAMCORE_SteamUserAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USteamCoreUserAsyncActionRequestEncryptedAppTicket;
class USteamCoreUserAsyncActionRequestStoreAuthURL;
struct FEncryptedAppTicketResponse;
struct FStoreAuthURLResponse;

// ********** Begin Delegate FRequestEncryptedAppTicketDelegate ************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_16_DELEGATE \
STEAMCORE_API void FRequestEncryptedAppTicketDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestEncryptedAppTicketDelegate, FEncryptedAppTicketResponse const& Data, bool bWasSuccessful);


// ********** End Delegate FRequestEncryptedAppTicketDelegate **************************************

// ********** Begin Delegate FRequestStoreAuthURLDelegate ******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_17_DELEGATE \
STEAMCORE_API void FRequestStoreAuthURLDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestStoreAuthURLDelegate, FStoreAuthURLResponse const& Data, bool bWasSuccessful);


// ********** End Delegate FRequestStoreAuthURLDelegate ********************************************

// ********** Begin Class USteamCoreUserAsyncActionRequestEncryptedAppTicket ***********************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestEncryptedAppTicketAsync);


struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUserAsyncActionRequestEncryptedAppTicket(); \
	friend struct ::Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUserAsyncActionRequestEncryptedAppTicket, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUserAsyncActionRequestEncryptedAppTicket)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUserAsyncActionRequestEncryptedAppTicket(USteamCoreUserAsyncActionRequestEncryptedAppTicket&&) = delete; \
	USteamCoreUserAsyncActionRequestEncryptedAppTicket(const USteamCoreUserAsyncActionRequestEncryptedAppTicket&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUserAsyncActionRequestEncryptedAppTicket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUserAsyncActionRequestEncryptedAppTicket); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUserAsyncActionRequestEncryptedAppTicket) \
	NO_API virtual ~USteamCoreUserAsyncActionRequestEncryptedAppTicket();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_22_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUserAsyncActionRequestEncryptedAppTicket;

// ********** End Class USteamCoreUserAsyncActionRequestEncryptedAppTicket *************************

// ********** Begin Class USteamCoreUserAsyncActionRequestStoreAuthURL *****************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestStoreAuthURLAsync);


struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUserAsyncActionRequestStoreAuthURL(); \
	friend struct ::Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreUserAsyncActionRequestStoreAuthURL, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreUserAsyncActionRequestStoreAuthURL)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreUserAsyncActionRequestStoreAuthURL(USteamCoreUserAsyncActionRequestStoreAuthURL&&) = delete; \
	USteamCoreUserAsyncActionRequestStoreAuthURL(const USteamCoreUserAsyncActionRequestStoreAuthURL&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUserAsyncActionRequestStoreAuthURL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUserAsyncActionRequestStoreAuthURL); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUserAsyncActionRequestStoreAuthURL) \
	NO_API virtual ~USteamCoreUserAsyncActionRequestStoreAuthURL();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_49_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreUserAsyncActionRequestStoreAuthURL;

// ********** End Class USteamCoreUserAsyncActionRequestStoreAuthURL *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUserAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
