// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealtimeMeshDynamicMeshConverter.h"

#ifdef REALTIMEMESHEXT_RealtimeMeshDynamicMeshConverter_generated_h
#error "RealtimeMeshDynamicMeshConverter.generated.h already included, missing '#pragma once' in RealtimeMeshDynamicMeshConverter.h"
#endif
#define REALTIMEMESHEXT_RealtimeMeshDynamicMeshConverter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class URealtimeMeshSimple;
class URealtimeMeshStreamSet;
enum class ERealtimeMeshOutcomePins : uint8;
struct FRealtimeMeshDynamicMeshConversionOptions;
struct FStreamSetDynamicMeshConversionOptions;

// ********** Begin ScriptStruct FStreamSetDynamicMeshConversionOptions ****************************
struct Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics;
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


struct FStreamSetDynamicMeshConversionOptions;
// ********** End ScriptStruct FStreamSetDynamicMeshConversionOptions ******************************

// ********** Begin ScriptStruct FRealtimeMeshDynamicMeshConversionOptions *************************
struct Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics;
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRealtimeMeshDynamicMeshConversionOptions;
// ********** End ScriptStruct FRealtimeMeshDynamicMeshConversionOptions ***************************

// ********** Begin Class URealtimeMeshDynamicMeshConverter ****************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCopyRealtimeMeshToDynamicMesh); \
	DECLARE_FUNCTION(execCopyRealtimeMeshFromDynamicMesh); \
	DECLARE_FUNCTION(execCopyStreamSetToDynamicMesh); \
	DECLARE_FUNCTION(execCopyStreamSetFromDynamicMesh);


struct Z_Construct_UClass_URealtimeMeshDynamicMeshConverter_Statics;
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshDynamicMeshConverter_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeMeshDynamicMeshConverter(); \
	friend struct ::Z_Construct_UClass_URealtimeMeshDynamicMeshConverter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHEXT_API UClass* ::Z_Construct_UClass_URealtimeMeshDynamicMeshConverter_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMeshDynamicMeshConverter, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealtimeMeshExt"), Z_Construct_UClass_URealtimeMeshDynamicMeshConverter_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMeshDynamicMeshConverter)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtimeMeshDynamicMeshConverter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMeshDynamicMeshConverter(URealtimeMeshDynamicMeshConverter&&) = delete; \
	URealtimeMeshDynamicMeshConverter(const URealtimeMeshDynamicMeshConverter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeMeshDynamicMeshConverter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMeshDynamicMeshConverter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeMeshDynamicMeshConverter) \
	NO_API virtual ~URealtimeMeshDynamicMeshConverter();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h_79_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h_82_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMeshDynamicMeshConverter;

// ********** End Class URealtimeMeshDynamicMeshConverter ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
