// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mesh/RealtimeMeshBlueprintMeshBuilder.h"

#ifdef REALTIMEMESHCOMPONENT_RealtimeMeshBlueprintMeshBuilder_generated_h
#error "RealtimeMeshBlueprintMeshBuilder.generated.h already included, missing '#pragma once' in RealtimeMeshBlueprintMeshBuilder.h"
#endif
#define REALTIMEMESHCOMPONENT_RealtimeMeshBlueprintMeshBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URealtimeMeshLocalBuilder;
class URealtimeMeshStream;
class URealtimeMeshStreamSet;
enum class ERealtimeMeshSimpleStreamConfig : uint8;
enum class ERealtimeMeshSimpleStreamType : uint8;
struct FLinearColor;
struct FRealtimeMeshBasicVertex;
struct FRealtimeMeshStreamKey;
struct FRealtimeMeshStreamRowPtr;
struct FRealtimeMeshStreamSetFromComponents;

// ********** Begin ScriptStruct FRealtimeMeshBasicVertex ******************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics;
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRealtimeMeshBasicVertex;
// ********** End ScriptStruct FRealtimeMeshBasicVertex ********************************************

// ********** Begin ScriptStruct FRealtimeMeshStreamRowPtr *****************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr_Statics;
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRealtimeMeshStreamRowPtr;
// ********** End ScriptStruct FRealtimeMeshStreamRowPtr *******************************************

// ********** Begin Class URealtimeMeshStream ******************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVector4); \
	DECLARE_FUNCTION(execGetVector3); \
	DECLARE_FUNCTION(execGetVector2); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetInt); \
	DECLARE_FUNCTION(execSetVector4); \
	DECLARE_FUNCTION(execSetVector3); \
	DECLARE_FUNCTION(execSetVector2); \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execSetInt); \
	DECLARE_FUNCTION(execAddVector4); \
	DECLARE_FUNCTION(execAddVector3); \
	DECLARE_FUNCTION(execAddVector2); \
	DECLARE_FUNCTION(execAddFloat); \
	DECLARE_FUNCTION(execAddInt); \
	DECLARE_FUNCTION(execEditRow); \
	DECLARE_FUNCTION(execAddZeroed); \
	DECLARE_FUNCTION(execAddUninitialized); \
	DECLARE_FUNCTION(execSetNumZeroed); \
	DECLARE_FUNCTION(execSetNumUninitialized); \
	DECLARE_FUNCTION(execEmpty); \
	DECLARE_FUNCTION(execShrink); \
	DECLARE_FUNCTION(execReserve); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execIsIndexValid); \
	DECLARE_FUNCTION(execGetNum);


struct Z_Construct_UClass_URealtimeMeshStream_Statics;
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStream_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeMeshStream(); \
	friend struct ::Z_Construct_UClass_URealtimeMeshStream_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHCOMPONENT_API UClass* ::Z_Construct_UClass_URealtimeMeshStream_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMeshStream, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealtimeMeshComponent"), Z_Construct_UClass_URealtimeMeshStream_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMeshStream)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_103_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtimeMeshStream(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMeshStream(URealtimeMeshStream&&) = delete; \
	URealtimeMeshStream(const URealtimeMeshStream&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeMeshStream); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMeshStream); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeMeshStream) \
	NO_API virtual ~URealtimeMeshStream();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_100_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_103_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMeshStream;

// ********** End Class URealtimeMeshStream ********************************************************

// ********** Begin Class URealtimeMeshStreamSet ***************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_209_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeLocalMeshBuilder); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execRemoveStream); \
	DECLARE_FUNCTION(execAddStream);


struct Z_Construct_UClass_URealtimeMeshStreamSet_Statics;
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_209_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeMeshStreamSet(); \
	friend struct ::Z_Construct_UClass_URealtimeMeshStreamSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHCOMPONENT_API UClass* ::Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMeshStreamSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealtimeMeshComponent"), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMeshStreamSet)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_209_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMeshStreamSet(URealtimeMeshStreamSet&&) = delete; \
	URealtimeMeshStreamSet(const URealtimeMeshStreamSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeMeshStreamSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMeshStreamSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URealtimeMeshStreamSet) \
	NO_API virtual ~URealtimeMeshStreamSet();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_206_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_209_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_209_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_209_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_209_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMeshStreamSet;

// ********** End Class URealtimeMeshStreamSet *****************************************************

// ********** Begin Class URealtimeMeshLocalBuilder ************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_247_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVertex); \
	DECLARE_FUNCTION(execEditVertex); \
	DECLARE_FUNCTION(execAddVertex); \
	DECLARE_FUNCTION(execGetTriangle); \
	DECLARE_FUNCTION(execSetTriangle); \
	DECLARE_FUNCTION(execAddTriangle); \
	DECLARE_FUNCTION(execDisablePolyGroups); \
	DECLARE_FUNCTION(execEnablePolyGroups); \
	DECLARE_FUNCTION(execDisableDepthOnlyTriangles); \
	DECLARE_FUNCTION(execEnableDepthOnlyTriangles); \
	DECLARE_FUNCTION(execDisableTexCoords); \
	DECLARE_FUNCTION(execEnableTexCoords); \
	DECLARE_FUNCTION(execDisableColors); \
	DECLARE_FUNCTION(execEnableColors); \
	DECLARE_FUNCTION(execDisableTangents); \
	DECLARE_FUNCTION(execEnableTangents); \
	DECLARE_FUNCTION(execInitialize);


struct Z_Construct_UClass_URealtimeMeshLocalBuilder_Statics;
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_247_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeMeshLocalBuilder(); \
	friend struct ::Z_Construct_UClass_URealtimeMeshLocalBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHCOMPONENT_API UClass* ::Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMeshLocalBuilder, URealtimeMeshStreamSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealtimeMeshComponent"), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMeshLocalBuilder)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_247_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMeshLocalBuilder(URealtimeMeshLocalBuilder&&) = delete; \
	URealtimeMeshLocalBuilder(const URealtimeMeshLocalBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeMeshLocalBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMeshLocalBuilder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URealtimeMeshLocalBuilder) \
	NO_API virtual ~URealtimeMeshLocalBuilder();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_244_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_247_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_247_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_247_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_247_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMeshLocalBuilder;

// ********** End Class URealtimeMeshLocalBuilder **************************************************

// ********** Begin Class URealtimeMeshStreamPool **************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_360_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFreeAllStreams); \
	DECLARE_FUNCTION(execReturnAllStreams); \
	DECLARE_FUNCTION(execReturnMeshBuilder); \
	DECLARE_FUNCTION(execRequestMeshBuilder); \
	DECLARE_FUNCTION(execReturnStreamSet); \
	DECLARE_FUNCTION(execRequestStreamSet); \
	DECLARE_FUNCTION(execReturnStream); \
	DECLARE_FUNCTION(execRequestStream);


struct Z_Construct_UClass_URealtimeMeshStreamPool_Statics;
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStreamPool_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_360_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeMeshStreamPool(); \
	friend struct ::Z_Construct_UClass_URealtimeMeshStreamPool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHCOMPONENT_API UClass* ::Z_Construct_UClass_URealtimeMeshStreamPool_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMeshStreamPool, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RealtimeMeshComponent"), Z_Construct_UClass_URealtimeMeshStreamPool_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMeshStreamPool)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_360_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REALTIMEMESHCOMPONENT_API URealtimeMeshStreamPool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMeshStreamPool(URealtimeMeshStreamPool&&) = delete; \
	URealtimeMeshStreamPool(const URealtimeMeshStreamPool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REALTIMEMESHCOMPONENT_API, URealtimeMeshStreamPool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMeshStreamPool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeMeshStreamPool) \
	REALTIMEMESHCOMPONENT_API virtual ~URealtimeMeshStreamPool();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_357_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_360_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_360_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_360_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_360_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMeshStreamPool;

// ********** End Class URealtimeMeshStreamPool ****************************************************

// ********** Begin ScriptStruct FRealtimeMeshStreamSetFromComponents ******************************
struct Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics;
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_429_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRealtimeMeshStreamSetFromComponents;
// ********** End ScriptStruct FRealtimeMeshStreamSetFromComponents ********************************

// ********** Begin Class URealtimeMeshStreamUtils *************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_480_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVector4Element); \
	DECLARE_FUNCTION(execGetVector3Element); \
	DECLARE_FUNCTION(execGetVector2Element); \
	DECLARE_FUNCTION(execGetFloatElement); \
	DECLARE_FUNCTION(execGetIntElement); \
	DECLARE_FUNCTION(execSetVector4Element); \
	DECLARE_FUNCTION(execSetVector3Element); \
	DECLARE_FUNCTION(execSetVector2Element); \
	DECLARE_FUNCTION(execSetFloatElement); \
	DECLARE_FUNCTION(execSetIntElement); \
	DECLARE_FUNCTION(execCopyStreamSetFromComponents);


struct Z_Construct_UClass_URealtimeMeshStreamUtils_Statics;
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStreamUtils_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_480_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeMeshStreamUtils(); \
	friend struct ::Z_Construct_UClass_URealtimeMeshStreamUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHCOMPONENT_API UClass* ::Z_Construct_UClass_URealtimeMeshStreamUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMeshStreamUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealtimeMeshComponent"), Z_Construct_UClass_URealtimeMeshStreamUtils_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMeshStreamUtils)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_480_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtimeMeshStreamUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMeshStreamUtils(URealtimeMeshStreamUtils&&) = delete; \
	URealtimeMeshStreamUtils(const URealtimeMeshStreamUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeMeshStreamUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMeshStreamUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeMeshStreamUtils) \
	NO_API virtual ~URealtimeMeshStreamUtils();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_477_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_480_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_480_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_480_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h_480_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMeshStreamUtils;

// ********** End Class URealtimeMeshStreamUtils ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h

// ********** Begin Enum ERealtimeMeshSimpleStreamType *********************************************
#define FOREACH_ENUM_EREALTIMEMESHSIMPLESTREAMTYPE(op) \
	op(ERealtimeMeshSimpleStreamType::Unknown) \
	op(ERealtimeMeshSimpleStreamType::Int16) \
	op(ERealtimeMeshSimpleStreamType::UInt16) \
	op(ERealtimeMeshSimpleStreamType::Int32) \
	op(ERealtimeMeshSimpleStreamType::UInt32) \
	op(ERealtimeMeshSimpleStreamType::Float) \
	op(ERealtimeMeshSimpleStreamType::Vector2) \
	op(ERealtimeMeshSimpleStreamType::Vector3) \
	op(ERealtimeMeshSimpleStreamType::HalfVector2) \
	op(ERealtimeMeshSimpleStreamType::PackedNormal) \
	op(ERealtimeMeshSimpleStreamType::PackedRGBA16N) \
	op(ERealtimeMeshSimpleStreamType::Triangle16) \
	op(ERealtimeMeshSimpleStreamType::Triangle32) 

enum class ERealtimeMeshSimpleStreamType : uint8;
template<> struct TIsUEnumClass<ERealtimeMeshSimpleStreamType> { enum { Value = true }; };
template<> REALTIMEMESHCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshSimpleStreamType>();
// ********** End Enum ERealtimeMeshSimpleStreamType ***********************************************

// ********** Begin Enum ERealtimeMeshSimpleStreamConfig *******************************************
#define FOREACH_ENUM_EREALTIMEMESHSIMPLESTREAMCONFIG(op) \
	op(ERealtimeMeshSimpleStreamConfig::None) \
	op(ERealtimeMeshSimpleStreamConfig::Normal) \
	op(ERealtimeMeshSimpleStreamConfig::HighPrecision) 

enum class ERealtimeMeshSimpleStreamConfig : uint8;
template<> struct TIsUEnumClass<ERealtimeMeshSimpleStreamConfig> { enum { Value = true }; };
template<> REALTIMEMESHCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshSimpleStreamConfig>();
// ********** End Enum ERealtimeMeshSimpleStreamConfig *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
