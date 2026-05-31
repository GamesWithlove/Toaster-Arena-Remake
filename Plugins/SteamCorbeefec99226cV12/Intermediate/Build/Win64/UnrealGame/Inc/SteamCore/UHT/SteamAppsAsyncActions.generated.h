// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamApps/SteamAppsAsyncActions.h"

#ifdef STEAMCORE_SteamAppsAsyncActions_generated_h
#error "SteamAppsAsyncActions.generated.h already included, missing '#pragma once' in SteamAppsAsyncActions.h"
#endif
#define STEAMCORE_SteamAppsAsyncActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USteamCoreAppsAsyncActionGetFileDetails;
struct FFileDetailsResult;

// ********** Begin Delegate FOnFileDetailsResultAsyncDelegate *************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_16_DELEGATE \
STEAMCORE_API void FOnFileDetailsResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultAsyncDelegate, FFileDetailsResult const& Data, bool bWasSuccessful);


// ********** End Delegate FOnFileDetailsResultAsyncDelegate ***************************************

// ********** Begin Class USteamCoreAppsAsyncActionGetFileDetails **********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetFileDetailsAsync);


struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetFileDetails_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetFileDetails_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreAppsAsyncActionGetFileDetails(); \
	friend struct ::Z_Construct_UClass_USteamCoreAppsAsyncActionGetFileDetails_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreAppsAsyncActionGetFileDetails_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreAppsAsyncActionGetFileDetails, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreAppsAsyncActionGetFileDetails_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreAppsAsyncActionGetFileDetails)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreAppsAsyncActionGetFileDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreAppsAsyncActionGetFileDetails(USteamCoreAppsAsyncActionGetFileDetails&&) = delete; \
	USteamCoreAppsAsyncActionGetFileDetails(const USteamCoreAppsAsyncActionGetFileDetails&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreAppsAsyncActionGetFileDetails); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreAppsAsyncActionGetFileDetails); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreAppsAsyncActionGetFileDetails) \
	NO_API virtual ~USteamCoreAppsAsyncActionGetFileDetails();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_21_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreAppsAsyncActionGetFileDetails;

// ********** End Class USteamCoreAppsAsyncActionGetFileDetails ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamAppsAsyncActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
