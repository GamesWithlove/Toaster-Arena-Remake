// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealtimeMeshHeightfieldCollision.h"

#ifdef REALTIMEMESHEXT_RealtimeMeshHeightfieldCollision_generated_h
#error "RealtimeMeshHeightfieldCollision.generated.h already included, missing '#pragma once' in RealtimeMeshHeightfieldCollision.h"
#endif
#define REALTIMEMESHEXT_RealtimeMeshHeightfieldCollision_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhysicalMaterial;
struct FRealtimeMeshHeightFieldCollisionData;

// ********** Begin ScriptStruct FRealtimeMeshHeightFieldCollisionData *****************************
struct Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics;
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshHeightfieldCollision_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics; \
	REALTIMEMESHEXT_API static class UScriptStruct* StaticStruct();


struct FRealtimeMeshHeightFieldCollisionData;
// ********** End ScriptStruct FRealtimeMeshHeightFieldCollisionData *******************************

// ********** Begin Class URealtimeMeshHeightfieldCollision ****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshHeightfieldCollision_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInterpolatedHeight); \
	DECLARE_FUNCTION(execGetWorldPositionFromGridCoordinates); \
	DECLARE_FUNCTION(execGetGridCoordinatesFromWorldPosition); \
	DECLARE_FUNCTION(execGetWorldSizeFromGridSize); \
	DECLARE_FUNCTION(execEndBatchUpdate); \
	DECLARE_FUNCTION(execBeginBatchUpdate); \
	DECLARE_FUNCTION(execSetCellMaterialIndicesRegion); \
	DECLARE_FUNCTION(execGetCellMaterialIndex); \
	DECLARE_FUNCTION(execSetCellMaterialIndex); \
	DECLARE_FUNCTION(execAddHeightfieldPhysicalMaterial); \
	DECLARE_FUNCTION(execGetHeightfieldPhysicalMaterial); \
	DECLARE_FUNCTION(execSetHeightfieldPhysicalMaterial); \
	DECLARE_FUNCTION(execModifyHeightRegion); \
	DECLARE_FUNCTION(execGetHeightRegion); \
	DECLARE_FUNCTION(execSetHeightRegion); \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execSetHeight); \
	DECLARE_FUNCTION(execSetHeightFieldData);


struct Z_Construct_UClass_URealtimeMeshHeightfieldCollision_Statics;
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshHeightfieldCollision_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshHeightfieldCollision_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeMeshHeightfieldCollision(); \
	friend struct ::Z_Construct_UClass_URealtimeMeshHeightfieldCollision_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHEXT_API UClass* ::Z_Construct_UClass_URealtimeMeshHeightfieldCollision_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMeshHeightfieldCollision, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RealtimeMeshExt"), Z_Construct_UClass_URealtimeMeshHeightfieldCollision_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMeshHeightfieldCollision)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshHeightfieldCollision_h_63_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMeshHeightfieldCollision(URealtimeMeshHeightfieldCollision&&) = delete; \
	URealtimeMeshHeightfieldCollision(const URealtimeMeshHeightfieldCollision&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeMeshHeightfieldCollision); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMeshHeightfieldCollision); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URealtimeMeshHeightfieldCollision) \
	NO_API virtual ~URealtimeMeshHeightfieldCollision();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshHeightfieldCollision_h_60_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshHeightfieldCollision_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshHeightfieldCollision_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshHeightfieldCollision_h_63_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshHeightfieldCollision_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMeshHeightfieldCollision;

// ********** End Class URealtimeMeshHeightfieldCollision ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshHeightfieldCollision_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
