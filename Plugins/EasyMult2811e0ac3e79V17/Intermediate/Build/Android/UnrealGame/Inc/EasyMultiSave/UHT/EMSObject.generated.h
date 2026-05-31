// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/Public/EMSObject.h"

#ifdef EASYMULTISAVE_EMSObject_generated_h
#error "EMSObject.generated.h already included, missing '#pragma once' in EMSObject.h"
#endif
#define EASYMULTISAVE_EMSObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;

// ********** Begin Delegate FEmsLoadPlayerComplete ************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h_22_DELEGATE \
EASYMULTISAVE_API void FEmsLoadPlayerComplete_DelegateWrapper(const FMulticastScriptDelegate& EmsLoadPlayerComplete, const APlayerController* LoadedPlayer);


// ********** End Delegate FEmsLoadPlayerComplete **************************************************

// ********** Begin Delegate FEmsLoadLevelComplete *************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h_23_DELEGATE \
EASYMULTISAVE_API void FEmsLoadLevelComplete_DelegateWrapper(const FMulticastScriptDelegate& EmsLoadLevelComplete, TArray<TSoftObjectPtr<AActor>> const& LoadedActors);


// ********** End Delegate FEmsLoadLevelComplete ***************************************************

// ********** Begin Class UEMSObject ***************************************************************
struct Z_Construct_UClass_UEMSObject_Statics;
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObject_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEMSObject(); \
	friend struct ::Z_Construct_UClass_UEMSObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASYMULTISAVE_API UClass* ::Z_Construct_UClass_UEMSObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UEMSObject, UEMSObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), Z_Construct_UClass_UEMSObject_NoRegister) \
	DECLARE_SERIALIZER(UEMSObject)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEMSObject(UEMSObject&&) = delete; \
	UEMSObject(const UEMSObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEMSObject) \
	NO_API virtual ~UEMSObject();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h_25_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h_28_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEMSObject;

// ********** End Class UEMSObject *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
