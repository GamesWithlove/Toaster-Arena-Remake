// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameServersService/WebGameServersService.h"

#ifdef STEAMCOREWEB_WebGameServersService_generated_h
#error "WebGameServersService.generated.h already included, missing '#pragma once' in WebGameServersService.h"
#endif
#define STEAMCOREWEB_WebGameServersService_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebGameServersService ***************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_GameServersService_WebGameServersService_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetServerIPsBySteamId); \
	DECLARE_FUNCTION(execGetServerSteamIdsByIP); \
	DECLARE_FUNCTION(execSetBanStatus); \
	DECLARE_FUNCTION(execQueryLoginToken); \
	DECLARE_FUNCTION(execGetAccountPublicInfo); \
	DECLARE_FUNCTION(execDeleteAccount); \
	DECLARE_FUNCTION(execResetLoginToken); \
	DECLARE_FUNCTION(execSetMemo); \
	DECLARE_FUNCTION(execCreateAccount); \
	DECLARE_FUNCTION(execGetAccountList);


struct Z_Construct_UClass_UWebGameServersService_Statics;
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameServersService_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_GameServersService_WebGameServersService_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebGameServersService(); \
	friend struct ::Z_Construct_UClass_UWebGameServersService_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCOREWEB_API UClass* ::Z_Construct_UClass_UWebGameServersService_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebGameServersService, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), Z_Construct_UClass_UWebGameServersService_NoRegister) \
	DECLARE_SERIALIZER(UWebGameServersService)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_GameServersService_WebGameServersService_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebGameServersService(UWebGameServersService&&) = delete; \
	UWebGameServersService(const UWebGameServersService&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebGameServersService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebGameServersService); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebGameServersService) \
	NO_API virtual ~UWebGameServersService();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_GameServersService_WebGameServersService_h_19_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_GameServersService_WebGameServersService_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_GameServersService_WebGameServersService_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_GameServersService_WebGameServersService_h_22_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_GameServersService_WebGameServersService_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebGameServersService;

// ********** End Class UWebGameServersService *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_GameServersService_WebGameServersService_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
