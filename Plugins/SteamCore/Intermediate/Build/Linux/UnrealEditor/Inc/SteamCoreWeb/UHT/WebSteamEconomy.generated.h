// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamEconomy/WebSteamEconomy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCOREWEB_WebSteamEconomy_generated_h
#error "WebSteamEconomy.generated.h already included, missing '#pragma once' in WebSteamEconomy.h"
#endif
#define STEAMCOREWEB_WebSteamEconomy_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartTrade); \
	DECLARE_FUNCTION(execStartAssetTransaction); \
	DECLARE_FUNCTION(execGetMarketPrices); \
	DECLARE_FUNCTION(execGetExportedAssetsForUser); \
	DECLARE_FUNCTION(execGetAssetPrices); \
	DECLARE_FUNCTION(execGetAssetClassInfo); \
	DECLARE_FUNCTION(execFinalizeAssetTransaction); \
	DECLARE_FUNCTION(execCanTrade);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartTrade); \
	DECLARE_FUNCTION(execStartAssetTransaction); \
	DECLARE_FUNCTION(execGetMarketPrices); \
	DECLARE_FUNCTION(execGetExportedAssetsForUser); \
	DECLARE_FUNCTION(execGetAssetPrices); \
	DECLARE_FUNCTION(execGetAssetClassInfo); \
	DECLARE_FUNCTION(execFinalizeAssetTransaction); \
	DECLARE_FUNCTION(execCanTrade);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSteamEconomy(); \
	friend struct Z_Construct_UClass_UWebSteamEconomy_Statics; \
public: \
	DECLARE_CLASS(UWebSteamEconomy, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), NO_API) \
	DECLARE_SERIALIZER(UWebSteamEconomy)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUWebSteamEconomy(); \
	friend struct Z_Construct_UClass_UWebSteamEconomy_Statics; \
public: \
	DECLARE_CLASS(UWebSteamEconomy, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), NO_API) \
	DECLARE_SERIALIZER(UWebSteamEconomy)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebSteamEconomy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSteamEconomy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSteamEconomy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSteamEconomy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSteamEconomy(UWebSteamEconomy&&); \
	NO_API UWebSteamEconomy(const UWebSteamEconomy&); \
public: \
	NO_API virtual ~UWebSteamEconomy();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSteamEconomy(UWebSteamEconomy&&); \
	NO_API UWebSteamEconomy(const UWebSteamEconomy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSteamEconomy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSteamEconomy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebSteamEconomy) \
	NO_API virtual ~UWebSteamEconomy();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_16_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREWEB_API UClass* StaticClass<class UWebSteamEconomy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
