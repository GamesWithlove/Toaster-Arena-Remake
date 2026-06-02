// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamCore/SteamCoreSettings.h"

#ifdef STEAMCORE_SteamCoreSettings_generated_h
#error "SteamCoreSettings.generated.h already included, missing '#pragma once' in SteamCoreSettings.h"
#endif
#define STEAMCORE_SteamCoreSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USteamCoreSettings *******************************************************
struct Z_Construct_UClass_USteamCoreSettings_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSettings_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreSettings(); \
	friend struct ::Z_Construct_UClass_USteamCoreSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreSettings_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreSettings)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreSettings(USteamCoreSettings&&) = delete; \
	USteamCoreSettings(const USteamCoreSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamCoreSettings) \
	NO_API virtual ~USteamCoreSettings();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_44_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreSettings;

// ********** End Class USteamCoreSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h

// ********** Begin Enum ESteamSubsystem ***********************************************************
#define FOREACH_ENUM_ESTEAMSUBSYSTEM(op) \
	op(ESteamSubsystem::SteamCore) \
	op(ESteamSubsystem::AppList) \
	op(ESteamSubsystem::Apps) \
	op(ESteamSubsystem::Friends) \
	op(ESteamSubsystem::GameServer) \
	op(ESteamSubsystem::GameServerStats) \
	op(ESteamSubsystem::Inventory) \
	op(ESteamSubsystem::Input) \
	op(ESteamSubsystem::Matchmaking) \
	op(ESteamSubsystem::MatchmakingServers) \
	op(ESteamSubsystem::Music) \
	op(ESteamSubsystem::Networking) \
	op(ESteamSubsystem::NetworkingUtils) \
	op(ESteamSubsystem::ParentalSettings) \
	op(ESteamSubsystem::RemoteStorage) \
	op(ESteamSubsystem::RemotePlay) \
	op(ESteamSubsystem::Screenshots) \
	op(ESteamSubsystem::UGC) \
	op(ESteamSubsystem::User) \
	op(ESteamSubsystem::UserStats) \
	op(ESteamSubsystem::Utils) \
	op(ESteamSubsystem::Video) \
	op(ESteamSubsystem::SteamParties) \
	op(ESteamSubsystem::GameSearch) 

enum class ESteamSubsystem : uint8;
template<> struct TIsUEnumClass<ESteamSubsystem> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamSubsystem>();
// ********** End Enum ESteamSubsystem *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
