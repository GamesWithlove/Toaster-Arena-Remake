// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamScreenshots/SteamScreenshots.h"

#ifdef STEAMCORE_SteamScreenshots_generated_h
#error "SteamScreenshots.generated.h already included, missing '#pragma once' in SteamScreenshots.h"
#endif
#define STEAMCORE_SteamScreenshots_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamVRScreenshotType : uint8;
struct FPublishedFileID;
struct FScreenshotHandle;
struct FSteamID;

// ********** Begin Class UScreenshots *************************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWriteScreenshot); \
	DECLARE_FUNCTION(execTriggerScreenshot); \
	DECLARE_FUNCTION(execTagUser); \
	DECLARE_FUNCTION(execTagPublishedFile); \
	DECLARE_FUNCTION(execSetLocation); \
	DECLARE_FUNCTION(execIsScreenshotsHooked); \
	DECLARE_FUNCTION(execHookScreenshots); \
	DECLARE_FUNCTION(execAddVRScreenshotToLibrary); \
	DECLARE_FUNCTION(execAddScreenshotToLibrary);


struct Z_Construct_UClass_UScreenshots_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_UScreenshots_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScreenshots(); \
	friend struct ::Z_Construct_UClass_UScreenshots_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_UScreenshots_NoRegister(); \
public: \
	DECLARE_CLASS2(UScreenshots, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_UScreenshots_NoRegister) \
	DECLARE_SERIALIZER(UScreenshots)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScreenshots(UScreenshots&&) = delete; \
	UScreenshots(const UScreenshots&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenshots); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenshots); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScreenshots) \
	NO_API virtual ~UScreenshots();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_14_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScreenshots;

// ********** End Class UScreenshots ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
