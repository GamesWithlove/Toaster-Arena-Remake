// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/Public/EMSObjectBase.h"

#ifdef EASYMULTISAVE_EMSObjectBase_generated_h
#error "EMSObjectBase.generated.h already included, missing '#pragma once' in EMSObjectBase.h"
#endif
#define EASYMULTISAVE_EMSObjectBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEMSObjectBase ***********************************************************
struct Z_Construct_UClass_UEMSObjectBase_Statics;
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObjectBase_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObjectBase_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEMSObjectBase(); \
	friend struct ::Z_Construct_UClass_UEMSObjectBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASYMULTISAVE_API UClass* ::Z_Construct_UClass_UEMSObjectBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UEMSObjectBase, UGameInstanceSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), Z_Construct_UClass_UEMSObjectBase_NoRegister) \
	DECLARE_SERIALIZER(UEMSObjectBase) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EmsUser");} \



#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObjectBase_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEMSObjectBase(UEMSObjectBase&&) = delete; \
	UEMSObjectBase(const UEMSObjectBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSObjectBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UEMSObjectBase) \
	NO_API virtual ~UEMSObjectBase();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObjectBase_h_26_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObjectBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObjectBase_h_29_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObjectBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEMSObjectBase;

// ********** End Class UEMSObjectBase *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObjectBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
