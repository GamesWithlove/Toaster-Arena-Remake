// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EconService/WebEconService.h"

#ifdef STEAMCOREWEB_WebEconService_generated_h
#error "WebEconService.generated.h already included, missing '#pragma once' in WebEconService.h"
#endif
#define STEAMCOREWEB_WebEconService_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebEconService **********************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_EconService_WebEconService_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCancelTradeOffer); \
	DECLARE_FUNCTION(execDeclineTradeOffer); \
	DECLARE_FUNCTION(execGetTradeOffersSummary); \
	DECLARE_FUNCTION(execGetTradeOffer); \
	DECLARE_FUNCTION(execGetTradeOffers); \
	DECLARE_FUNCTION(execFlushContextCache); \
	DECLARE_FUNCTION(execFlushAssetAppearanceCache); \
	DECLARE_FUNCTION(execFlushInventoryCache); \
	DECLARE_FUNCTION(execGetTradeHistory);


struct Z_Construct_UClass_UWebEconService_Statics;
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebEconService_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_EconService_WebEconService_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebEconService(); \
	friend struct ::Z_Construct_UClass_UWebEconService_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCOREWEB_API UClass* ::Z_Construct_UClass_UWebEconService_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebEconService, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), Z_Construct_UClass_UWebEconService_NoRegister) \
	DECLARE_SERIALIZER(UWebEconService)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_EconService_WebEconService_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebEconService(UWebEconService&&) = delete; \
	UWebEconService(const UWebEconService&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebEconService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebEconService); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebEconService) \
	NO_API virtual ~UWebEconService();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_EconService_WebEconService_h_19_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_EconService_WebEconService_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_EconService_WebEconService_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_EconService_WebEconService_h_22_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_EconService_WebEconService_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebEconService;

// ********** End Class UWebEconService ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_EconService_WebEconService_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
