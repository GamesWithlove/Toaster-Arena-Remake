// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Async/Public/EMSAsyncWait.h"

#ifdef EASYMULTISAVE_EMSAsyncWait_generated_h
#error "EMSAsyncWait.generated.h already included, missing '#pragma once' in EMSAsyncWait.h"
#endif
#define EASYMULTISAVE_EMSAsyncWait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UEMSAsyncWait;
class UObject;
enum class EAsyncCheckType : uint8;

// ********** Begin Delegate FAsyncWaitOutputPin ***************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncWait_h_13_DELEGATE \
EASYMULTISAVE_API void FAsyncWaitOutputPin_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitOutputPin);


// ********** End Delegate FAsyncWaitOutputPin *****************************************************

// ********** Begin Class UEMSAsyncWait ************************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncWait_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAsyncWaitForOperation);


struct Z_Construct_UClass_UEMSAsyncWait_Statics;
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncWait_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncWait_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEMSAsyncWait(); \
	friend struct ::Z_Construct_UClass_UEMSAsyncWait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASYMULTISAVE_API UClass* ::Z_Construct_UClass_UEMSAsyncWait_NoRegister(); \
public: \
	DECLARE_CLASS2(UEMSAsyncWait, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), Z_Construct_UClass_UEMSAsyncWait_NoRegister) \
	DECLARE_SERIALIZER(UEMSAsyncWait)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncWait_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEMSAsyncWait(UEMSAsyncWait&&) = delete; \
	UEMSAsyncWait(const UEMSAsyncWait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSAsyncWait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSAsyncWait); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEMSAsyncWait) \
	NO_API virtual ~UEMSAsyncWait();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncWait_h_15_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncWait_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncWait_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncWait_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncWait_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEMSAsyncWait;

// ********** End Class UEMSAsyncWait **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Async_Public_EMSAsyncWait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
