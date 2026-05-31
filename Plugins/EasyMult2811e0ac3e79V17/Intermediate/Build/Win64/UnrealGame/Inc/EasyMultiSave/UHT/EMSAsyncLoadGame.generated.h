// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Async/Public/EMSAsyncLoadGame.h"

#ifdef EASYMULTISAVE_EMSAsyncLoadGame_generated_h
#error "EMSAsyncLoadGame.generated.h already included, missing '#pragma once' in EMSAsyncLoadGame.h"
#endif
#define EASYMULTISAVE_EMSAsyncLoadGame_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEMSAsyncLoadGame;
class UEMSObject;
class UObject;

// ********** Begin Delegate FAsyncLoadOutputPin ***************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_14_DELEGATE \
EASYMULTISAVE_API void FAsyncLoadOutputPin_DelegateWrapper(const FMulticastScriptDelegate& AsyncLoadOutputPin);


// ********** End Delegate FAsyncLoadOutputPin *****************************************************

// ********** Begin Delegate FAsyncLoadFailedPin ***************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_15_DELEGATE \
EASYMULTISAVE_API void FAsyncLoadFailedPin_DelegateWrapper(const FMulticastScriptDelegate& AsyncLoadFailedPin);


// ********** End Delegate FAsyncLoadFailedPin *****************************************************

// ********** Begin Class UEMSAsyncLoadGame ********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAutoLoadLevelActors); \
	DECLARE_FUNCTION(execAsyncLoadActors);


struct Z_Construct_UClass_UEMSAsyncLoadGame_Statics;
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncLoadGame_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEMSAsyncLoadGame(); \
	friend struct ::Z_Construct_UClass_UEMSAsyncLoadGame_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASYMULTISAVE_API UClass* ::Z_Construct_UClass_UEMSAsyncLoadGame_NoRegister(); \
public: \
	DECLARE_CLASS2(UEMSAsyncLoadGame, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), Z_Construct_UClass_UEMSAsyncLoadGame_NoRegister) \
	DECLARE_SERIALIZER(UEMSAsyncLoadGame)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEMSAsyncLoadGame(UEMSAsyncLoadGame&&) = delete; \
	UEMSAsyncLoadGame(const UEMSAsyncLoadGame&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSAsyncLoadGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSAsyncLoadGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEMSAsyncLoadGame) \
	NO_API virtual ~UEMSAsyncLoadGame();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_17_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_20_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEMSAsyncLoadGame;

// ********** End Class UEMSAsyncLoadGame **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncLoadGame_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
