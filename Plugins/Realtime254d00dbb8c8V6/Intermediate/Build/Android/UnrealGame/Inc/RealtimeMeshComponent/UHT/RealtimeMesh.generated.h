// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealtimeMesh.h"

#ifdef REALTIMEMESHCOMPONENT_RealtimeMesh_generated_h
#error "RealtimeMesh.generated.h already included, missing '#pragma once' in RealtimeMesh.h"
#endif
#define REALTIMEMESHCOMPONENT_RealtimeMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class URealtimeMesh;
struct FRealtimeMeshLODConfig;
struct FRealtimeMeshLODKey;
struct FRealtimeMeshMaterialSlot;

// ********** Begin Class URealtimeMesh ************************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetShouldSerializeMeshData); \
	DECLARE_FUNCTION(execShouldSerializeMeshData); \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execGetMaterialSlots); \
	DECLARE_FUNCTION(execGetMaterialSlotNames); \
	DECLARE_FUNCTION(execGetNumMaterials); \
	DECLARE_FUNCTION(execGetMaterialSlot); \
	DECLARE_FUNCTION(execIsMaterialSlotNameValid); \
	DECLARE_FUNCTION(execGetMaterialSlotName); \
	DECLARE_FUNCTION(execGetMaterialIndex); \
	DECLARE_FUNCTION(execSetupMaterialSlot); \
	DECLARE_FUNCTION(execRemoveTrailingLOD); \
	DECLARE_FUNCTION(execUpdateLODConfig); \
	DECLARE_FUNCTION(execAddLOD); \
	DECLARE_FUNCTION(execGetLocalBounds); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execCalcTexCoordAtLocation);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h_17_CALLBACK_WRAPPERS
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URealtimeMesh, NO_API)


struct Z_Construct_UClass_URealtimeMesh_Statics;
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMesh_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURealtimeMesh(); \
	friend struct ::Z_Construct_UClass_URealtimeMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHCOMPONENT_API UClass* ::Z_Construct_UClass_URealtimeMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMesh, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RealtimeMeshComponent"), Z_Construct_UClass_URealtimeMesh_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMesh) \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h_17_ARCHIVESERIALIZER


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtimeMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMesh); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMesh(URealtimeMesh&&) = delete; \
	URealtimeMesh(const URealtimeMesh&) = delete; \
	NO_API virtual ~URealtimeMesh();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h_14_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h_17_RPC_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h_17_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h_17_INCLASS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMesh;

// ********** End Class URealtimeMesh **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
