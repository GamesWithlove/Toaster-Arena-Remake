// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UGCBlueprintLibrary.h"

#ifdef SIMPLEUGC_UGCBlueprintLibrary_generated_h
#error "UGCBlueprintLibrary.generated.h already included, missing '#pragma once' in UGCBlueprintLibrary.h"
#endif
#define SIMPLEUGC_UGCBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UUGCRegistry;

// ********** Begin Class UUGCBlueprintLibrary *****************************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUGCRegistry);


struct Z_Construct_UClass_UUGCBlueprintLibrary_Statics;
SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCBlueprintLibrary_NoRegister();

#define FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUGCBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UUGCBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMPLEUGC_API UClass* ::Z_Construct_UClass_UUGCBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UUGCBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleUGC"), Z_Construct_UClass_UUGCBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UUGCBlueprintLibrary)


#define FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUGCBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUGCBlueprintLibrary(UUGCBlueprintLibrary&&) = delete; \
	UUGCBlueprintLibrary(const UUGCBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGCBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGCBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUGCBlueprintLibrary) \
	NO_API virtual ~UUGCBlueprintLibrary();


#define FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h_10_PROLOG
#define FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUGCBlueprintLibrary;

// ********** End Class UUGCBlueprintLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
