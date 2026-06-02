// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealtimeMeshActor.h"

#ifdef REALTIMEMESHCOMPONENT_RealtimeMeshActor_generated_h
#error "RealtimeMeshActor.generated.h already included, missing '#pragma once' in RealtimeMeshActor.h"
#endif
#define REALTIMEMESHCOMPONENT_RealtimeMeshActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URealtimeMeshComponent;
class URealtimeMeshLocalBuilder;
class URealtimeMeshStream;
class URealtimeMeshStreamSet;
enum class ERealtimeMeshSimpleStreamConfig : uint8;
enum class ERealtimeMeshSimpleStreamType : uint8;
struct FRealtimeMeshStreamKey;

// ********** Begin Class ARealtimeMeshActor *******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnGenerateMesh); \
	DECLARE_FUNCTION(execGetRealtimeMeshComponent); \
	DECLARE_FUNCTION(execMakeMeshBuilder); \
	DECLARE_FUNCTION(execMakeStreamSet); \
	DECLARE_FUNCTION(execMakeStream);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshActor_h_14_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ARealtimeMeshActor_Statics;
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARealtimeMeshActor(); \
	friend struct ::Z_Construct_UClass_ARealtimeMeshActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHCOMPONENT_API UClass* ::Z_Construct_UClass_ARealtimeMeshActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ARealtimeMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RealtimeMeshComponent"), Z_Construct_UClass_ARealtimeMeshActor_NoRegister) \
	DECLARE_SERIALIZER(ARealtimeMeshActor)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARealtimeMeshActor(ARealtimeMeshActor&&) = delete; \
	ARealtimeMeshActor(const ARealtimeMeshActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARealtimeMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARealtimeMeshActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARealtimeMeshActor)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshActor_h_11_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshActor_h_14_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARealtimeMeshActor;

// ********** End Class ARealtimeMeshActor *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
