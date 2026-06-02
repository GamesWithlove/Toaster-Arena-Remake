// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealtimeMeshComponent.h"

#ifdef REALTIMEMESHCOMPONENT_RealtimeMeshComponent_generated_h
#error "RealtimeMeshComponent.generated.h already included, missing '#pragma once' in RealtimeMeshComponent.h"
#endif
#define REALTIMEMESHCOMPONENT_RealtimeMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class URealtimeMesh;

// ********** Begin Class URealtimeMeshComponent ***************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_RealtimeMesh); \
	DECLARE_FUNCTION(execGetRealtimeMesh); \
	DECLARE_FUNCTION(execInitializeRealtimeMesh); \
	DECLARE_FUNCTION(execSetRealtimeMesh);


struct Z_Construct_UClass_URealtimeMeshComponent_Statics;
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshComponent_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeMeshComponent(); \
	friend struct ::Z_Construct_UClass_URealtimeMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHCOMPONENT_API UClass* ::Z_Construct_UClass_URealtimeMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RealtimeMeshComponent"), Z_Construct_UClass_URealtimeMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMeshComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RealtimeMesh=NETFIELD_REP_START, \
		NETFIELD_REP_END=RealtimeMesh	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMeshComponent(URealtimeMeshComponent&&) = delete; \
	URealtimeMeshComponent(const URealtimeMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URealtimeMeshComponent) \
	NO_API virtual ~URealtimeMeshComponent();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshComponent_h_14_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMeshComponent;

// ********** End Class URealtimeMeshComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
