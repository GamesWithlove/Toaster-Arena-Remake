// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SMMSkeletalMergerFunctionLibrary.h"

#ifdef RUNTIMEMERGER_SMMSkeletalMergerFunctionLibrary_generated_h
#error "SMMSkeletalMergerFunctionLibrary.generated.h already included, missing '#pragma once' in SMMSkeletalMergerFunctionLibrary.h"
#endif
#define RUNTIMEMERGER_SMMSkeletalMergerFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USkeletalMesh;
class USkeleton;

// ********** Begin Class USMMSkeletalMergerFunctionLibrary ****************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMergeAllSkeletalMeshesInActor); \
	DECLARE_FUNCTION(execMergeSkeletalMeshes);


struct Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics;
RUNTIMEMERGER_API UClass* Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_NoRegister();

#define FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMMSkeletalMergerFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RUNTIMEMERGER_API UClass* ::Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USMMSkeletalMergerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMerger"), Z_Construct_UClass_USMMSkeletalMergerFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(USMMSkeletalMergerFunctionLibrary)


#define FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMMSkeletalMergerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USMMSkeletalMergerFunctionLibrary(USMMSkeletalMergerFunctionLibrary&&) = delete; \
	USMMSkeletalMergerFunctionLibrary(const USMMSkeletalMergerFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMMSkeletalMergerFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMMSkeletalMergerFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMMSkeletalMergerFunctionLibrary) \
	NO_API virtual ~USMMSkeletalMergerFunctionLibrary();


#define FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h_16_PROLOG
#define FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USMMSkeletalMergerFunctionLibrary;

// ********** End Class USMMSkeletalMergerFunctionLibrary ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_RuntimeMerger_Public_SMMSkeletalMergerFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
