// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUser/WebSteamUser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EVanityUrlType : uint8;
#ifdef STEAMCOREWEB_WebSteamUser_generated_h
#error "WebSteamUser.generated.h already included, missing '#pragma once' in WebSteamUser.h"
#endif
#define STEAMCOREWEB_WebSteamUser_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResolveVanityURL); \
	DECLARE_FUNCTION(execGrantPackage); \
	DECLARE_FUNCTION(execGetUserGroupList); \
	DECLARE_FUNCTION(execGetPublisherAppOwnershipChanges); \
	DECLARE_FUNCTION(execGetPublisherAppOwnership); \
	DECLARE_FUNCTION(execGetPlayerSummaries); \
	DECLARE_FUNCTION(execGetPlayerBans); \
	DECLARE_FUNCTION(execGetFriendList); \
	DECLARE_FUNCTION(execGetAppPriceInfo); \
	DECLARE_FUNCTION(execCheckAppOwnership);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResolveVanityURL); \
	DECLARE_FUNCTION(execGrantPackage); \
	DECLARE_FUNCTION(execGetUserGroupList); \
	DECLARE_FUNCTION(execGetPublisherAppOwnershipChanges); \
	DECLARE_FUNCTION(execGetPublisherAppOwnership); \
	DECLARE_FUNCTION(execGetPlayerSummaries); \
	DECLARE_FUNCTION(execGetPlayerBans); \
	DECLARE_FUNCTION(execGetFriendList); \
	DECLARE_FUNCTION(execGetAppPriceInfo); \
	DECLARE_FUNCTION(execCheckAppOwnership);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSteamUser(); \
	friend struct Z_Construct_UClass_UWebSteamUser_Statics; \
public: \
	DECLARE_CLASS(UWebSteamUser, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), NO_API) \
	DECLARE_SERIALIZER(UWebSteamUser)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUWebSteamUser(); \
	friend struct Z_Construct_UClass_UWebSteamUser_Statics; \
public: \
	DECLARE_CLASS(UWebSteamUser, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), NO_API) \
	DECLARE_SERIALIZER(UWebSteamUser)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebSteamUser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSteamUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSteamUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSteamUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSteamUser(UWebSteamUser&&); \
	NO_API UWebSteamUser(const UWebSteamUser&); \
public: \
	NO_API virtual ~UWebSteamUser();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSteamUser(UWebSteamUser&&); \
	NO_API UWebSteamUser(const UWebSteamUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSteamUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSteamUser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebSteamUser) \
	NO_API virtual ~UWebSteamUser();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_17_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREWEB_API UClass* StaticClass<class UWebSteamUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUser_WebSteamUser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
