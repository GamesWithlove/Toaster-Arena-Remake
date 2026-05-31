// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/Public/EMSActorSaveInterface.h"

#ifdef EASYMULTISAVE_EMSActorSaveInterface_generated_h
#error "EMSActorSaveInterface.generated.h already included, missing '#pragma once' in EMSActorSaveInterface.h"
#endif
#define EASYMULTISAVE_EMSActorSaveInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;

// ********** Begin Interface UEMSActorSaveInterface ***********************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execComponentsToSave); \
	DECLARE_FUNCTION(execActorLoaded); \
	DECLARE_FUNCTION(execActorPreLoad); \
	DECLARE_FUNCTION(execActorSaved); \
	DECLARE_FUNCTION(execActorPreSave);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h_14_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UEMSActorSaveInterface_Statics;
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSActorSaveInterface_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEMSActorSaveInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEMSActorSaveInterface(UEMSActorSaveInterface&&) = delete; \
	UEMSActorSaveInterface(const UEMSActorSaveInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSActorSaveInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSActorSaveInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEMSActorSaveInterface) \
	virtual ~UEMSActorSaveInterface() = default;


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEMSActorSaveInterface(); \
	friend struct ::Z_Construct_UClass_UEMSActorSaveInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASYMULTISAVE_API UClass* ::Z_Construct_UClass_UEMSActorSaveInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UEMSActorSaveInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), Z_Construct_UClass_UEMSActorSaveInterface_NoRegister) \
	DECLARE_SERIALIZER(UEMSActorSaveInterface)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEMSActorSaveInterface() {} \
public: \
	typedef UEMSActorSaveInterface UClassType; \
	typedef IEMSActorSaveInterface ThisClass; \
	static void Execute_ActorLoaded(UObject* O); \
	static void Execute_ActorPreLoad(UObject* O); \
	static void Execute_ActorPreSave(UObject* O); \
	static void Execute_ActorSaved(UObject* O); \
	static void Execute_ComponentsToSave(UObject* O, TArray<UActorComponent*>& Components); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h_11_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h_14_CALLBACK_WRAPPERS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEMSActorSaveInterface;

// ********** End Interface UEMSActorSaveInterface *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSActorSaveInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
