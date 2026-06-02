// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealtimeMeshCollisionLibrary.h"

#ifdef REALTIMEMESHCOMPONENT_RealtimeMeshCollisionLibrary_generated_h
#error "RealtimeMeshCollisionLibrary.generated.h already included, missing '#pragma once' in RealtimeMeshCollisionLibrary.h"
#endif
#define REALTIMEMESHCOMPONENT_RealtimeMeshCollisionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FRealtimeMeshCollisionBox;
struct FRealtimeMeshCollisionCapsule;
struct FRealtimeMeshCollisionConvex;
struct FRealtimeMeshCollisionMesh;
struct FRealtimeMeshCollisionSphere;
struct FRealtimeMeshCollisionTaperedCapsule;
struct FRealtimeMeshSimpleGeometry;

// ********** Begin Class URealtimeMeshCollisionTools **********************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCookComplexMesh); \
	DECLARE_FUNCTION(execCookConvexHull); \
	DECLARE_FUNCTION(execFindCollisionUVRealtimeMesh);


struct Z_Construct_UClass_URealtimeMeshCollisionTools_Statics;
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshCollisionTools_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeMeshCollisionTools(); \
	friend struct ::Z_Construct_UClass_URealtimeMeshCollisionTools_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHCOMPONENT_API UClass* ::Z_Construct_UClass_URealtimeMeshCollisionTools_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMeshCollisionTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealtimeMeshComponent"), Z_Construct_UClass_URealtimeMeshCollisionTools_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMeshCollisionTools)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtimeMeshCollisionTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMeshCollisionTools(URealtimeMeshCollisionTools&&) = delete; \
	URealtimeMeshCollisionTools(const URealtimeMeshCollisionTools&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeMeshCollisionTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMeshCollisionTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeMeshCollisionTools) \
	NO_API virtual ~URealtimeMeshCollisionTools();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h_12_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMeshCollisionTools;

// ********** End Class URealtimeMeshCollisionTools ************************************************

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary *******************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveConvexByName); \
	DECLARE_FUNCTION(execRemoveConvex); \
	DECLARE_FUNCTION(execUpdateConvex); \
	DECLARE_FUNCTION(execGetConvexByName); \
	DECLARE_FUNCTION(execInsertConvex); \
	DECLARE_FUNCTION(execAddConvex); \
	DECLARE_FUNCTION(execRemoveTaperedCapsuleByName); \
	DECLARE_FUNCTION(execRemoveTaperedCapsule); \
	DECLARE_FUNCTION(execUpdateTaperedCapsule); \
	DECLARE_FUNCTION(execGetTaperedCapsuleByName); \
	DECLARE_FUNCTION(execInsertTaperedCapsule); \
	DECLARE_FUNCTION(execAddTaperedCapsule); \
	DECLARE_FUNCTION(execRemoveCapsuleByName); \
	DECLARE_FUNCTION(execRemoveCapsule); \
	DECLARE_FUNCTION(execUpdateCapsule); \
	DECLARE_FUNCTION(execGetCapsuleByName); \
	DECLARE_FUNCTION(execInsertCapsule); \
	DECLARE_FUNCTION(execAddCapsule); \
	DECLARE_FUNCTION(execRemoveBoxByName); \
	DECLARE_FUNCTION(execRemoveBox); \
	DECLARE_FUNCTION(execUpdateBox); \
	DECLARE_FUNCTION(execGetBoxByName); \
	DECLARE_FUNCTION(execInsertBox); \
	DECLARE_FUNCTION(execAddBox); \
	DECLARE_FUNCTION(execRemoveSphereByName); \
	DECLARE_FUNCTION(execRemoveSphere); \
	DECLARE_FUNCTION(execUpdateSphere); \
	DECLARE_FUNCTION(execGetSphereByName); \
	DECLARE_FUNCTION(execInsertSphere); \
	DECLARE_FUNCTION(execAddSphere);


struct Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary_Statics;
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeMeshSimpleGeometryFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHCOMPONENT_API UClass* ::Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMeshSimpleGeometryFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealtimeMeshComponent"), Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMeshSimpleGeometryFunctionLibrary)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtimeMeshSimpleGeometryFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMeshSimpleGeometryFunctionLibrary(URealtimeMeshSimpleGeometryFunctionLibrary&&) = delete; \
	URealtimeMeshSimpleGeometryFunctionLibrary(const URealtimeMeshSimpleGeometryFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeMeshSimpleGeometryFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMeshSimpleGeometryFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeMeshSimpleGeometryFunctionLibrary) \
	NO_API virtual ~URealtimeMeshSimpleGeometryFunctionLibrary();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h_37_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h_40_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMeshSimpleGeometryFunctionLibrary;

// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
