// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SMMSkeletalMeshMergerSubsystem.h"

#ifdef SKELETALMESHMERGER_SMMSkeletalMeshMergerSubsystem_generated_h
#error "SMMSkeletalMeshMergerSubsystem.generated.h already included, missing '#pragma once' in SMMSkeletalMeshMergerSubsystem.h"
#endif
#define SKELETALMESHMERGER_SMMSkeletalMeshMergerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UObject;
class USkeletalMesh;
class USkeleton;
struct FSkeletalMeshMergeParams;
struct FSkeletonMergeParams;

// ********** Begin Class USMMSkeletalMeshMergerSubsystem ******************************************
#define FID_Toaster_Arena_Remake_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreatePackageFromObject); \
	DECLARE_FUNCTION(execExtractSkeletalMeshesFromBlueprint); \
	DECLARE_FUNCTION(execMergeSkeletons); \
	DECLARE_FUNCTION(execRuntimeMergeMesh); \
	DECLARE_FUNCTION(execMergeMeshes);


struct Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics;
SKELETALMESHMERGER_API UClass* Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMMSkeletalMeshMergerSubsystem(); \
	friend struct ::Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SKELETALMESHMERGER_API UClass* ::Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USMMSkeletalMeshMergerSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletalMeshMerger"), Z_Construct_UClass_USMMSkeletalMeshMergerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USMMSkeletalMeshMergerSubsystem)


#define FID_Toaster_Arena_Remake_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMMSkeletalMeshMergerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USMMSkeletalMeshMergerSubsystem(USMMSkeletalMeshMergerSubsystem&&) = delete; \
	USMMSkeletalMeshMergerSubsystem(const USMMSkeletalMeshMergerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMMSkeletalMeshMergerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMMSkeletalMeshMergerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMMSkeletalMeshMergerSubsystem) \
	NO_API virtual ~USMMSkeletalMeshMergerSubsystem();


#define FID_Toaster_Arena_Remake_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_13_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USMMSkeletalMeshMergerSubsystem;

// ********** End Class USMMSkeletalMeshMergerSubsystem ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMSkeletalMeshMergerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
