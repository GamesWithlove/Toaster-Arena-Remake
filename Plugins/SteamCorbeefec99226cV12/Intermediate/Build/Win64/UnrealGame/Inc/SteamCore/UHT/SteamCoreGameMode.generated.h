// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamCore/SteamCoreGameMode.h"

#ifdef STEAMCORE_SteamCoreGameMode_generated_h
#error "SteamCoreGameMode.generated.h already included, missing '#pragma once' in SteamCoreGameMode.h"
#endif
#define STEAMCORE_SteamCoreGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASteamCoreGameMode *******************************************************
struct Z_Construct_UClass_ASteamCoreGameMode_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_ASteamCoreGameMode_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreGameMode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASteamCoreGameMode(); \
	friend struct ::Z_Construct_UClass_ASteamCoreGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_ASteamCoreGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ASteamCoreGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_ASteamCoreGameMode_NoRegister) \
	DECLARE_SERIALIZER(ASteamCoreGameMode)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreGameMode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASteamCoreGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASteamCoreGameMode(ASteamCoreGameMode&&) = delete; \
	ASteamCoreGameMode(const ASteamCoreGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASteamCoreGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASteamCoreGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASteamCoreGameMode) \
	NO_API virtual ~ASteamCoreGameMode();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreGameMode_h_11_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreGameMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreGameMode_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASteamCoreGameMode;

// ********** End Class ASteamCoreGameMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
