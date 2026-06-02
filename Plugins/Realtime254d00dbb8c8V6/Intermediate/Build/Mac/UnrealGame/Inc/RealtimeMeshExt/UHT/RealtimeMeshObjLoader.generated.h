// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealtimeMeshObjLoader.h"

#ifdef REALTIMEMESHEXT_RealtimeMeshObjLoader_generated_h
#error "RealtimeMeshObjLoader.generated.h already included, missing '#pragma once' in RealtimeMeshObjLoader.h"
#endif
#define REALTIMEMESHEXT_RealtimeMeshObjLoader_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URealtimeMeshStreamSet;
struct FRealtimeMeshOBJLoadOptions;
struct FRealtimeMeshOBJLoadResult;
struct FRealtimeMeshOBJMaterial;

// ********** Begin ScriptStruct FRealtimeMeshOBJTextureInfo ***************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics;
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRealtimeMeshOBJTextureInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRealtimeMeshOBJTextureInfo;
// ********** End ScriptStruct FRealtimeMeshOBJTextureInfo *****************************************

// ********** Begin ScriptStruct FRealtimeMeshOBJMaterial ******************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics;
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRealtimeMeshOBJMaterial_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRealtimeMeshOBJMaterial;
// ********** End ScriptStruct FRealtimeMeshOBJMaterial ********************************************

// ********** Begin ScriptStruct FRealtimeMeshOBJLoadResult ****************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics;
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h_130_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadResult_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRealtimeMeshOBJLoadResult;
// ********** End ScriptStruct FRealtimeMeshOBJLoadResult ******************************************

// ********** Begin ScriptStruct FRealtimeMeshOBJLoadOptions ***************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics;
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h_141_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRealtimeMeshOBJLoadOptions_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRealtimeMeshOBJLoadOptions;
// ********** End ScriptStruct FRealtimeMeshOBJLoadOptions *****************************************

// ********** Begin Class URealtimeMeshObjLoader ***************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h_165_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadStreamSetFromOBJFile);


struct Z_Construct_UClass_URealtimeMeshObjLoader_Statics;
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshObjLoader_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h_165_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeMeshObjLoader(); \
	friend struct ::Z_Construct_UClass_URealtimeMeshObjLoader_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHEXT_API UClass* ::Z_Construct_UClass_URealtimeMeshObjLoader_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMeshObjLoader, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealtimeMeshExt"), Z_Construct_UClass_URealtimeMeshObjLoader_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMeshObjLoader)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h_165_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtimeMeshObjLoader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMeshObjLoader(URealtimeMeshObjLoader&&) = delete; \
	URealtimeMeshObjLoader(const URealtimeMeshObjLoader&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeMeshObjLoader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMeshObjLoader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeMeshObjLoader) \
	NO_API virtual ~URealtimeMeshObjLoader();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h_162_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h_165_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h_165_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h_165_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h_165_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMeshObjLoader;

// ********** End Class URealtimeMeshObjLoader *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshObjLoader_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
