// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Async/Public/EMSAsyncSaveGame.h"

#ifdef EASYMULTISAVE_EMSAsyncSaveGame_generated_h
#error "EMSAsyncSaveGame.generated.h already included, missing '#pragma once' in EMSAsyncSaveGame.h"
#endif
#define EASYMULTISAVE_EMSAsyncSaveGame_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEMSAsyncSaveGame;
class UEMSObject;
class UObject;

// ********** Begin Delegate FAsyncSaveOutputPin ***************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncSaveGame_h_15_DELEGATE \
EASYMULTISAVE_API void FAsyncSaveOutputPin_DelegateWrapper(const FMulticastScriptDelegate& AsyncSaveOutputPin);


// ********** End Delegate FAsyncSaveOutputPin *****************************************************

// ********** Begin Delegate FAsyncSaveFailedPin ***************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncSaveGame_h_16_DELEGATE \
EASYMULTISAVE_API void FAsyncSaveFailedPin_DelegateWrapper(const FMulticastScriptDelegate& AsyncSaveFailedPin);


// ********** End Delegate FAsyncSaveFailedPin *****************************************************

// ********** Begin Class UEMSAsyncSaveGame ********************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncSaveGame_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAutoSaveLevelActors); \
	DECLARE_FUNCTION(execAsyncSaveActors);


struct Z_Construct_UClass_UEMSAsyncSaveGame_Statics;
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncSaveGame_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncSaveGame_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEMSAsyncSaveGame(); \
	friend struct ::Z_Construct_UClass_UEMSAsyncSaveGame_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASYMULTISAVE_API UClass* ::Z_Construct_UClass_UEMSAsyncSaveGame_NoRegister(); \
public: \
	DECLARE_CLASS2(UEMSAsyncSaveGame, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), Z_Construct_UClass_UEMSAsyncSaveGame_NoRegister) \
	DECLARE_SERIALIZER(UEMSAsyncSaveGame)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncSaveGame_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEMSAsyncSaveGame(UEMSAsyncSaveGame&&) = delete; \
	UEMSAsyncSaveGame(const UEMSAsyncSaveGame&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSAsyncSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSAsyncSaveGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEMSAsyncSaveGame) \
	NO_API virtual ~UEMSAsyncSaveGame();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncSaveGame_h_18_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncSaveGame_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncSaveGame_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncSaveGame_h_21_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncSaveGame_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEMSAsyncSaveGame;

// ********** End Class UEMSAsyncSaveGame **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncSaveGame_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
