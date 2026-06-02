// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/Public/EMSCompSaveInterface.h"

#ifdef EASYMULTISAVE_EMSCompSaveInterface_generated_h
#error "EMSCompSaveInterface.generated.h already included, missing '#pragma once' in EMSCompSaveInterface.h"
#endif
#define EASYMULTISAVE_EMSCompSaveInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UEMSCompSaveInterface ************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execComponentLoaded); \
	DECLARE_FUNCTION(execComponentPreLoad); \
	DECLARE_FUNCTION(execComponentSaved); \
	DECLARE_FUNCTION(execComponentPreSave);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h_12_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UEMSCompSaveInterface_Statics;
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSCompSaveInterface_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEMSCompSaveInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEMSCompSaveInterface(UEMSCompSaveInterface&&) = delete; \
	UEMSCompSaveInterface(const UEMSCompSaveInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSCompSaveInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSCompSaveInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEMSCompSaveInterface) \
	virtual ~UEMSCompSaveInterface() = default;


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEMSCompSaveInterface(); \
	friend struct ::Z_Construct_UClass_UEMSCompSaveInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASYMULTISAVE_API UClass* ::Z_Construct_UClass_UEMSCompSaveInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UEMSCompSaveInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), Z_Construct_UClass_UEMSCompSaveInterface_NoRegister) \
	DECLARE_SERIALIZER(UEMSCompSaveInterface)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEMSCompSaveInterface() {} \
public: \
	typedef UEMSCompSaveInterface UClassType; \
	typedef IEMSCompSaveInterface ThisClass; \
	static void Execute_ComponentLoaded(UObject* O); \
	static void Execute_ComponentPreLoad(UObject* O); \
	static void Execute_ComponentPreSave(UObject* O); \
	static void Execute_ComponentSaved(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h_9_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h_12_CALLBACK_WRAPPERS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEMSCompSaveInterface;

// ********** End Interface UEMSCompSaveInterface **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
