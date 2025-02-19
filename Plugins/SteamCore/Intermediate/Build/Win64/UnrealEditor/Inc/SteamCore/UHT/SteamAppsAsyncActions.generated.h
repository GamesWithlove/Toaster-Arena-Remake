// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamApps/SteamAppsAsyncActions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USteamCoreAppsAsyncActionGetFileDetails;
struct FFileDetailsResult;
#ifdef STEAMCORE_SteamAppsAsyncActions_generated_h
#error "SteamAppsAsyncActions.generated.h already included, missing '#pragma once' in SteamAppsAsyncActions.h"
#endif
#define STEAMCORE_SteamAppsAsyncActions_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_16_DELEGATE \
STEAMCORE_API void FOnFileDetailsResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultAsyncDelegate, FFileDetailsResult const& Data, bool bWasSuccessful);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetFileDetailsAsync);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetFileDetailsAsync);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreAppsAsyncActionGetFileDetails(); \
	friend struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetFileDetails_Statics; \
public: \
	DECLARE_CLASS(USteamCoreAppsAsyncActionGetFileDetails, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreAppsAsyncActionGetFileDetails)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreAppsAsyncActionGetFileDetails(); \
	friend struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetFileDetails_Statics; \
public: \
	DECLARE_CLASS(USteamCoreAppsAsyncActionGetFileDetails, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreAppsAsyncActionGetFileDetails)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreAppsAsyncActionGetFileDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreAppsAsyncActionGetFileDetails) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreAppsAsyncActionGetFileDetails); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreAppsAsyncActionGetFileDetails); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreAppsAsyncActionGetFileDetails(USteamCoreAppsAsyncActionGetFileDetails&&); \
	NO_API USteamCoreAppsAsyncActionGetFileDetails(const USteamCoreAppsAsyncActionGetFileDetails&); \
public: \
	NO_API virtual ~USteamCoreAppsAsyncActionGetFileDetails();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreAppsAsyncActionGetFileDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreAppsAsyncActionGetFileDetails(USteamCoreAppsAsyncActionGetFileDetails&&); \
	NO_API USteamCoreAppsAsyncActionGetFileDetails(const USteamCoreAppsAsyncActionGetFileDetails&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreAppsAsyncActionGetFileDetails); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreAppsAsyncActionGetFileDetails); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreAppsAsyncActionGetFileDetails) \
	NO_API virtual ~USteamCoreAppsAsyncActionGetFileDetails();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_21_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreAppsAsyncActionGetFileDetails>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
