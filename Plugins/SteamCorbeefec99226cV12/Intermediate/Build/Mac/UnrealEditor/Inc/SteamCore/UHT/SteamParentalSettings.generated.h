// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamParentalSettings/SteamParentalSettings.h"

#ifdef STEAMCORE_SteamParentalSettings_generated_h
#error "SteamParentalSettings.generated.h already included, missing '#pragma once' in SteamParentalSettings.h"
#endif
#define STEAMCORE_SteamParentalSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamParentalFeature : uint8;

// ********** Begin Class UParentalSettings ********************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBIsFeatureInBlockList); \
	DECLARE_FUNCTION(execBIsFeatureBlocked); \
	DECLARE_FUNCTION(execBIsAppInBlockList); \
	DECLARE_FUNCTION(execBIsAppBlocked); \
	DECLARE_FUNCTION(execBIsParentalLockLocked); \
	DECLARE_FUNCTION(execBIsParentalLockEnabled);


struct Z_Construct_UClass_UParentalSettings_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_UParentalSettings_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParentalSettings(); \
	friend struct ::Z_Construct_UClass_UParentalSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_UParentalSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UParentalSettings, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_UParentalSettings_NoRegister) \
	DECLARE_SERIALIZER(UParentalSettings)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParentalSettings(UParentalSettings&&) = delete; \
	UParentalSettings(const UParentalSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParentalSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParentalSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UParentalSettings) \
	NO_API virtual ~UParentalSettings();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettings_h_14_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParentalSettings;

// ********** End Class UParentalSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
