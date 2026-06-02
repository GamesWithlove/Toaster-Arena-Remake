// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamCore/SteamCoreAsync.h"

#ifdef STEAMCORE_SteamCoreAsync_generated_h
#error "SteamCoreAsync.generated.h already included, missing '#pragma once' in SteamCoreAsync.h"
#endif
#define STEAMCORE_SteamCoreAsync_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnFailure ************************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_16_DELEGATE \
STEAMCORE_API void FOnFailure_DelegateWrapper(const FMulticastScriptDelegate& OnFailure);


// ********** End Delegate FOnFailure **************************************************************

// ********** Begin Class USteamCoreAsyncAction ****************************************************
struct Z_Construct_UClass_USteamCoreAsyncAction_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreAsyncAction(); \
	friend struct ::Z_Construct_UClass_USteamCoreAsyncAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_USteamCoreAsyncAction_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamCoreAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_USteamCoreAsyncAction_NoRegister) \
	DECLARE_SERIALIZER(USteamCoreAsyncAction)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_104_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamCoreAsyncAction(USteamCoreAsyncAction&&) = delete; \
	USteamCoreAsyncAction(const USteamCoreAsyncAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreAsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreAsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreAsyncAction) \
	NO_API virtual ~USteamCoreAsyncAction();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_101_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_104_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamCoreAsyncAction;

// ********** End Class USteamCoreAsyncAction ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
