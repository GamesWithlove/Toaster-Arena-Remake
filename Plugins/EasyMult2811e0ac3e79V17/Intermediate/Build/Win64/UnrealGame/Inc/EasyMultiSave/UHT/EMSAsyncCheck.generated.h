// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Async/Public/EMSAsyncCheck.h"

#ifdef EASYMULTISAVE_EMSAsyncCheck_generated_h
#error "EMSAsyncCheck.generated.h already included, missing '#pragma once' in EMSAsyncCheck.h"
#endif
#define EASYMULTISAVE_EMSAsyncCheck_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEMSAsyncCheck;
class UObject;
enum class ESaveFileCheckType : uint8;

// ********** Begin Delegate FCheckCompletedPin ****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_13_DELEGATE \
EASYMULTISAVE_API void FCheckCompletedPin_DelegateWrapper(const FMulticastScriptDelegate& CheckCompletedPin);


// ********** End Delegate FCheckCompletedPin ******************************************************

// ********** Begin Delegate FCheckFailedPin *******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_14_DELEGATE \
EASYMULTISAVE_API void FCheckFailedPin_DelegateWrapper(const FMulticastScriptDelegate& CheckFailedPin);


// ********** End Delegate FCheckFailedPin *********************************************************

// ********** Begin Delegate FCheckVersionMismatchPin **********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_15_DELEGATE \
EASYMULTISAVE_API void FCheckVersionMismatchPin_DelegateWrapper(const FMulticastScriptDelegate& CheckVersionMismatchPin);


// ********** End Delegate FCheckVersionMismatchPin ************************************************

// ********** Begin Class UEMSAsyncCheck ***********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckSaveFiles);


struct Z_Construct_UClass_UEMSAsyncCheck_Statics;
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncCheck_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEMSAsyncCheck(); \
	friend struct ::Z_Construct_UClass_UEMSAsyncCheck_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASYMULTISAVE_API UClass* ::Z_Construct_UClass_UEMSAsyncCheck_NoRegister(); \
public: \
	DECLARE_CLASS2(UEMSAsyncCheck, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), Z_Construct_UClass_UEMSAsyncCheck_NoRegister) \
	DECLARE_SERIALIZER(UEMSAsyncCheck)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEMSAsyncCheck(UEMSAsyncCheck&&) = delete; \
	UEMSAsyncCheck(const UEMSAsyncCheck&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSAsyncCheck); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSAsyncCheck); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEMSAsyncCheck) \
	NO_API virtual ~UEMSAsyncCheck();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_17_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_20_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEMSAsyncCheck;

// ********** End Class UEMSAsyncCheck *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncCheck_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
