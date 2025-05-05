// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGGraph;
class UPCGNode;
class UPCGSettings;
#ifdef PCG_PCGNode_generated_h
#error "PCGNode.generated.h already included, missing '#pragma once' in PCGNode.h"
#endif
#define PCG_PCGNode_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSettings); \
	DECLARE_FUNCTION(execRemoveEdgeTo); \
	DECLARE_FUNCTION(execAddEdgeTo); \
	DECLARE_FUNCTION(execGetGraph);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSettings); \
	DECLARE_FUNCTION(execRemoveEdgeTo); \
	DECLARE_FUNCTION(execAddEdgeTo); \
	DECLARE_FUNCTION(execGetGraph);


#if WITH_EDITOR
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetNodePosition); \
	DECLARE_FUNCTION(execGetNodePosition);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNodePosition); \
	DECLARE_FUNCTION(execGetNodePosition);


#else
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGNode(); \
	friend struct Z_Construct_UClass_UPCGNode_Statics; \
public: \
	DECLARE_CLASS(UPCGNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGNode)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUPCGNode(); \
	friend struct Z_Construct_UClass_UPCGNode_Statics; \
public: \
	DECLARE_CLASS(UPCGNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGNode)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGNode(UPCGNode&&); \
	NO_API UPCGNode(const UPCGNode&); \
public: \
	NO_API virtual ~UPCGNode();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGNode(UPCGNode&&); \
	NO_API UPCGNode(const UPCGNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGNode) \
	NO_API virtual ~UPCGNode();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_22_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
