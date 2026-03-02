// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SMMSkeletalMeshMergerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class USkeletalMesh;
class USkeleton;
struct FSkeletalMeshMergeParams;
struct FSkeletonMergeParams;
#ifdef SKELETALMESHMERGER_SMMSkeletalMeshMergerSubsystem_generated_h
#error "SMMSkeletalMeshMergerSubsystem.generated.h already included, missing '#pragma once' in SMMSkeletalMeshMergerSubsystem.h"
#endif
#define SKELETALMESHMERGER_SMMSkeletalMeshMergerSubsystem_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreatePackageFromObject); \
	DECLARE_FUNCTION(execExtractSkeletalMeshesFromBlueprint); \
	DECLARE_FUNCTION(execMergeSkeletons); \
	DECLARE_FUNCTION(execRuntimeMergeMesh); \
	DECLARE_FUNCTION(execMergeMeshes);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreatePackageFromObject); \
	DECLARE_FUNCTION(execExtractSkeletalMeshesFromBlueprint); \
	DECLARE_FUNCTION(execMergeSkeletons); \
	DECLARE_FUNCTION(execRuntimeMergeMesh); \
	DECLARE_FUNCTION(execMergeMeshes);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMMSkeletalMeshMergerSubsystem(); \
	friend struct Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics; \
public: \
	DECLARE_CLASS(USMMSkeletalMeshMergerSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletalMeshMerger"), NO_API) \
	DECLARE_SERIALIZER(USMMSkeletalMeshMergerSubsystem)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSMMSkeletalMeshMergerSubsystem(); \
	friend struct Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics; \
public: \
	DECLARE_CLASS(USMMSkeletalMeshMergerSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletalMeshMerger"), NO_API) \
	DECLARE_SERIALIZER(USMMSkeletalMeshMergerSubsystem)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMMSkeletalMeshMergerSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMMSkeletalMeshMergerSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMMSkeletalMeshMergerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMMSkeletalMeshMergerSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMMSkeletalMeshMergerSubsystem(USMMSkeletalMeshMergerSubsystem&&); \
	NO_API USMMSkeletalMeshMergerSubsystem(const USMMSkeletalMeshMergerSubsystem&); \
public: \
	NO_API virtual ~USMMSkeletalMeshMergerSubsystem();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMMSkeletalMeshMergerSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMMSkeletalMeshMergerSubsystem(USMMSkeletalMeshMergerSubsystem&&); \
	NO_API USMMSkeletalMeshMergerSubsystem(const USMMSkeletalMeshMergerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMMSkeletalMeshMergerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMMSkeletalMeshMergerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMMSkeletalMeshMergerSubsystem) \
	NO_API virtual ~USMMSkeletalMeshMergerSubsystem();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_13_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKELETALMESHMERGER_API UClass* StaticClass<class USMMSkeletalMeshMergerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
