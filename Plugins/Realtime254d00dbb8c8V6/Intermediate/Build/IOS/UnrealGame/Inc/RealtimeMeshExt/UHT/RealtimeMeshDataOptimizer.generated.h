// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealtimeMeshDataOptimizer.h"

#ifdef REALTIMEMESHEXT_RealtimeMeshDataOptimizer_generated_h
#error "RealtimeMeshDataOptimizer.generated.h already included, missing '#pragma once' in RealtimeMeshDataOptimizer.h"
#endif
#define REALTIMEMESHEXT_RealtimeMeshDataOptimizer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URealtimeMeshStreamSet;
enum class ERealtimeMeshOptimizationQuality : uint8;

// ********** Begin Class URealtimeMeshDataOptimizer ***********************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDataOptimizer_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOptimizeVertexFetch); \
	DECLARE_FUNCTION(execOptimizeOverdraw); \
	DECLARE_FUNCTION(execOptimizeVertexCache); \
	DECLARE_FUNCTION(execOptimizeMeshIndexing);


struct Z_Construct_UClass_URealtimeMeshDataOptimizer_Statics;
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshDataOptimizer_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDataOptimizer_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeMeshDataOptimizer(); \
	friend struct ::Z_Construct_UClass_URealtimeMeshDataOptimizer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHEXT_API UClass* ::Z_Construct_UClass_URealtimeMeshDataOptimizer_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMeshDataOptimizer, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealtimeMeshExt"), Z_Construct_UClass_URealtimeMeshDataOptimizer_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMeshDataOptimizer)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDataOptimizer_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtimeMeshDataOptimizer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMeshDataOptimizer(URealtimeMeshDataOptimizer&&) = delete; \
	URealtimeMeshDataOptimizer(const URealtimeMeshDataOptimizer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeMeshDataOptimizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMeshDataOptimizer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeMeshDataOptimizer) \
	NO_API virtual ~URealtimeMeshDataOptimizer();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDataOptimizer_h_22_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDataOptimizer_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDataOptimizer_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDataOptimizer_h_25_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDataOptimizer_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMeshDataOptimizer;

// ********** End Class URealtimeMeshDataOptimizer *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDataOptimizer_h

// ********** Begin Enum ERealtimeMeshOptimizationQuality ******************************************
#define FOREACH_ENUM_EREALTIMEMESHOPTIMIZATIONQUALITY(op) \
	op(ERealtimeMeshOptimizationQuality::RenderingEfficiency) \
	op(ERealtimeMeshOptimizationQuality::GenerationSpeed) 

enum class ERealtimeMeshOptimizationQuality : uint8;
template<> struct TIsUEnumClass<ERealtimeMeshOptimizationQuality> { enum { Value = true }; };
template<> REALTIMEMESHEXT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshOptimizationQuality>();
// ********** End Enum ERealtimeMeshOptimizationQuality ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
