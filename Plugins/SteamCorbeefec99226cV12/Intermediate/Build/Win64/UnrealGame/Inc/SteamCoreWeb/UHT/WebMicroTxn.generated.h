// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MicroTxn/WebMicroTxn.h"

#ifdef STEAMCOREWEB_WebMicroTxn_generated_h
#error "WebMicroTxn.generated.h already included, missing '#pragma once' in WebMicroTxn.h"
#endif
#define STEAMCOREWEB_WebMicroTxn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebMicroTxn *************************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxn_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeTransactionID); \
	DECLARE_FUNCTION(execRefundTxn); \
	DECLARE_FUNCTION(execQueryTxn); \
	DECLARE_FUNCTION(execProcessAgreement); \
	DECLARE_FUNCTION(execInitTxn); \
	DECLARE_FUNCTION(execGetUserInfo); \
	DECLARE_FUNCTION(execGetUserAgreementInfo); \
	DECLARE_FUNCTION(execGetReport); \
	DECLARE_FUNCTION(execFinalizeTxn); \
	DECLARE_FUNCTION(execCancelAgreement); \
	DECLARE_FUNCTION(execAdjustAgreement);


struct Z_Construct_UClass_UWebMicroTxn_Statics;
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebMicroTxn_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxn_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebMicroTxn(); \
	friend struct ::Z_Construct_UClass_UWebMicroTxn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCOREWEB_API UClass* ::Z_Construct_UClass_UWebMicroTxn_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebMicroTxn, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), Z_Construct_UClass_UWebMicroTxn_NoRegister) \
	DECLARE_SERIALIZER(UWebMicroTxn)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxn_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebMicroTxn(UWebMicroTxn&&) = delete; \
	UWebMicroTxn(const UWebMicroTxn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebMicroTxn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebMicroTxn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebMicroTxn) \
	NO_API virtual ~UWebMicroTxn();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxn_h_22_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxn_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxn_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxn_h_25_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxn_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebMicroTxn;

// ********** End Class UWebMicroTxn ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
