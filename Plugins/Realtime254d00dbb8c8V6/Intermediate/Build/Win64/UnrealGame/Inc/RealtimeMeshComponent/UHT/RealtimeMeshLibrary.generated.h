// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealtimeMeshLibrary.h"

#ifdef REALTIMEMESHCOMPONENT_RealtimeMeshLibrary_generated_h
#error "RealtimeMeshLibrary.generated.h already included, missing '#pragma once' in RealtimeMeshLibrary.h"
#endif
#define REALTIMEMESHCOMPONENT_RealtimeMeshLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERealtimeMeshCommonStream : uint8;
enum class ERealtimeMeshStreamType : uint8;
struct FRealtimeMeshLODKey;
struct FRealtimeMeshSectionGroupKey;
struct FRealtimeMeshSectionKey;
struct FRealtimeMeshStreamKey;
struct FRealtimeMeshStreamRange;

// ********** Begin Class URealtimeMeshBlueprintFunctionLibrary ************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCommonStreamKey); \
	DECLARE_FUNCTION(execMakeStreamKey); \
	DECLARE_FUNCTION(execMakeStreamRange); \
	DECLARE_FUNCTION(execBreakLODKey); \
	DECLARE_FUNCTION(execMakeSectionKeyForPolygonGroup); \
	DECLARE_FUNCTION(execMakeSectionKeyNamed); \
	DECLARE_FUNCTION(execMakeSectionKeyIndexed); \
	DECLARE_FUNCTION(execMakeSectionKeyUnique); \
	DECLARE_FUNCTION(execMakeSectionGroupKeyNamed); \
	DECLARE_FUNCTION(execMakeSectionGroupKeyIndexed); \
	DECLARE_FUNCTION(execMakeSectionGroupKeyUnique); \
	DECLARE_FUNCTION(execMakeLODKey); \
	DECLARE_FUNCTION(execConv_IntToRealtimeMeshLODKey);


struct Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary_Statics;
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeMeshBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHCOMPONENT_API UClass* ::Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMeshBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealtimeMeshComponent"), Z_Construct_UClass_URealtimeMeshBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMeshBlueprintFunctionLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtimeMeshBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMeshBlueprintFunctionLibrary(URealtimeMeshBlueprintFunctionLibrary&&) = delete; \
	URealtimeMeshBlueprintFunctionLibrary(const URealtimeMeshBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeMeshBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMeshBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeMeshBlueprintFunctionLibrary) \
	NO_API virtual ~URealtimeMeshBlueprintFunctionLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshLibrary_h_23_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshLibrary_h_26_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMeshBlueprintFunctionLibrary;

// ********** End Class URealtimeMeshBlueprintFunctionLibrary **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshLibrary_h

// ********** Begin Enum ERealtimeMeshCommonStream *************************************************
#define FOREACH_ENUM_EREALTIMEMESHCOMMONSTREAM(op) \
	op(ERealtimeMeshCommonStream::Unknown) \
	op(ERealtimeMeshCommonStream::Position) \
	op(ERealtimeMeshCommonStream::Tangents) \
	op(ERealtimeMeshCommonStream::TexCoords) \
	op(ERealtimeMeshCommonStream::Colors) \
	op(ERealtimeMeshCommonStream::Triangles) \
	op(ERealtimeMeshCommonStream::DepthOnlyTriangles) \
	op(ERealtimeMeshCommonStream::PolyGroups) \
	op(ERealtimeMeshCommonStream::DepthOnlyPolyGroups) 

enum class ERealtimeMeshCommonStream : uint8;
template<> struct TIsUEnumClass<ERealtimeMeshCommonStream> { enum { Value = true }; };
template<> REALTIMEMESHCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshCommonStream>();
// ********** End Enum ERealtimeMeshCommonStream ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
