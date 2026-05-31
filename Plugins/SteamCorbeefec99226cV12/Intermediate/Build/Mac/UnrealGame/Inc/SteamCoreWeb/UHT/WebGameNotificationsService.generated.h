// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameNotificationsService/WebGameNotificationsService.h"

#ifdef STEAMCOREWEB_WebGameNotificationsService_generated_h
#error "WebGameNotificationsService.generated.h already included, missing '#pragma once' in WebGameNotificationsService.h"
#endif
#define STEAMCOREWEB_WebGameNotificationsService_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebGameNotificationsService *********************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameNotificationsService_WebGameNotificationsService_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeleteSessionBatch); \
	DECLARE_FUNCTION(execDeleteSession); \
	DECLARE_FUNCTION(execRequestNotifications); \
	DECLARE_FUNCTION(execGetSessionDetailsForApp); \
	DECLARE_FUNCTION(execEnumerateSessionsForApp); \
	DECLARE_FUNCTION(execUpdateSession); \
	DECLARE_FUNCTION(execCreateSession);


struct Z_Construct_UClass_UWebGameNotificationsService_Statics;
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameNotificationsService_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameNotificationsService_WebGameNotificationsService_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebGameNotificationsService(); \
	friend struct ::Z_Construct_UClass_UWebGameNotificationsService_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCOREWEB_API UClass* ::Z_Construct_UClass_UWebGameNotificationsService_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebGameNotificationsService, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), Z_Construct_UClass_UWebGameNotificationsService_NoRegister) \
	DECLARE_SERIALIZER(UWebGameNotificationsService)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameNotificationsService_WebGameNotificationsService_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebGameNotificationsService(UWebGameNotificationsService&&) = delete; \
	UWebGameNotificationsService(const UWebGameNotificationsService&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebGameNotificationsService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebGameNotificationsService); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebGameNotificationsService) \
	NO_API virtual ~UWebGameNotificationsService();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameNotificationsService_WebGameNotificationsService_h_21_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameNotificationsService_WebGameNotificationsService_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameNotificationsService_WebGameNotificationsService_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameNotificationsService_WebGameNotificationsService_h_24_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameNotificationsService_WebGameNotificationsService_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebGameNotificationsService;

// ********** End Class UWebGameNotificationsService ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_GameNotificationsService_WebGameNotificationsService_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
