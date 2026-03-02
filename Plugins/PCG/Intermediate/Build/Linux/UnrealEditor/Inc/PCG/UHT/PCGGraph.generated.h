// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGGraph;
class UPCGNode;
class UPCGSettings;
#ifdef PCG_PCGGraph_generated_h
#error "PCGGraph.generated.h already included, missing '#pragma once' in PCGGraph.h"
#endif
#define PCG_PCGGraph_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGOverrideInstancedPropertyBag_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PCG_API UScriptStruct* StaticStruct<struct FPCGOverrideInstancedPropertyBag>();

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetConstPCGGraph); \
	DECLARE_FUNCTION(execGetMutablePCGGraph);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetConstPCGGraph); \
	DECLARE_FUNCTION(execGetMutablePCGGraph);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGraphInterface(); \
	friend struct Z_Construct_UClass_UPCGGraphInterface_Statics; \
public: \
	DECLARE_CLASS(UPCGGraphInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGGraphInterface)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUPCGGraphInterface(); \
	friend struct Z_Construct_UClass_UPCGGraphInterface_Statics; \
public: \
	DECLARE_CLASS(UPCGGraphInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGGraphInterface)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGGraphInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGraphInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGGraphInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGraphInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGGraphInterface(UPCGGraphInterface&&); \
	NO_API UPCGGraphInterface(const UPCGGraphInterface&); \
public: \
	NO_API virtual ~UPCGGraphInterface();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGGraphInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGGraphInterface(UPCGGraphInterface&&); \
	NO_API UPCGGraphInterface(const UPCGGraphInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGGraphInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGraphInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGraphInterface) \
	NO_API virtual ~UPCGGraphInterface();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_71_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGGraphInterface>();

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOutputNode); \
	DECLARE_FUNCTION(execGetInputNode); \
	DECLARE_FUNCTION(execRemoveEdge); \
	DECLARE_FUNCTION(execAddEdge); \
	DECLARE_FUNCTION(execRemoveNode); \
	DECLARE_FUNCTION(execAddNodeCopy); \
	DECLARE_FUNCTION(execAddNodeInstance); \
	DECLARE_FUNCTION(execAddNodeOfType);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOutputNode); \
	DECLARE_FUNCTION(execGetInputNode); \
	DECLARE_FUNCTION(execRemoveEdge); \
	DECLARE_FUNCTION(execAddEdge); \
	DECLARE_FUNCTION(execRemoveNode); \
	DECLARE_FUNCTION(execAddNodeCopy); \
	DECLARE_FUNCTION(execAddNodeInstance); \
	DECLARE_FUNCTION(execAddNodeOfType);


#if WITH_EDITOR
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execForceNotificationForEditor);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execForceNotificationForEditor);


#else
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGraph(); \
	friend struct Z_Construct_UClass_UPCGGraph_Statics; \
public: \
	DECLARE_CLASS(UPCGGraph, UPCGGraphInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGGraph)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_INCLASS \
private: \
	static void StaticRegisterNativesUPCGGraph(); \
	friend struct Z_Construct_UClass_UPCGGraph_Statics; \
public: \
	DECLARE_CLASS(UPCGGraph, UPCGGraphInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGGraph)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGGraph(UPCGGraph&&); \
	NO_API UPCGGraph(const UPCGGraph&); \
public: \
	NO_API virtual ~UPCGGraph();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGGraph(UPCGGraph&&); \
	NO_API UPCGGraph(const UPCGGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGraph) \
	NO_API virtual ~UPCGGraph();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_101_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGGraph>();

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_RPC_WRAPPERS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGraphInstance(); \
	friend struct Z_Construct_UClass_UPCGGraphInstance_Statics; \
public: \
	DECLARE_CLASS(UPCGGraphInstance, UPCGGraphInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGGraphInstance)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_INCLASS \
private: \
	static void StaticRegisterNativesUPCGGraphInstance(); \
	friend struct Z_Construct_UClass_UPCGGraphInstance_Statics; \
public: \
	DECLARE_CLASS(UPCGGraphInstance, UPCGGraphInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGGraphInstance)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGGraphInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGraphInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGGraphInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGraphInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGGraphInstance(UPCGGraphInstance&&); \
	NO_API UPCGGraphInstance(const UPCGGraphInstance&); \
public: \
	NO_API virtual ~UPCGGraphInstance();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGGraphInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGGraphInstance(UPCGGraphInstance&&); \
	NO_API UPCGGraphInstance(const UPCGGraphInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGGraphInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGraphInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGraphInstance) \
	NO_API virtual ~UPCGGraphInstance();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_264_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h_267_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGGraphInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
