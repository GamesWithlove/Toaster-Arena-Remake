// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealtimeMeshDistanceFieldGenerator.h"

#ifdef REALTIMEMESHEXT_RealtimeMeshDistanceFieldGenerator_generated_h
#error "RealtimeMeshDistanceFieldGenerator.generated.h already included, missing '#pragma once' in RealtimeMeshDistanceFieldGenerator.h"
#endif
#define REALTIMEMESHEXT_RealtimeMeshDistanceFieldGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UObject;
class URealtimeMeshSimple;
class URealtimeMeshStreamSet;
enum class ERealtimeMeshOutcomePins : uint8;
struct FLatentActionInfo;
struct FRealtimeMeshDistanceField;
struct FRealtimeMeshDistanceFieldGeneratorOptions;

// ********** Begin ScriptStruct FRealtimeMeshDistanceFieldGeneratorOptions ************************
struct Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics;
#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshDistanceFieldGenerator_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics; \
	REALTIMEMESHEXT_API static class UScriptStruct* StaticStruct();


struct FRealtimeMeshDistanceFieldGeneratorOptions;
// ********** End ScriptStruct FRealtimeMeshDistanceFieldGeneratorOptions **************************

// ********** Begin Class URealtimeMeshDistanceFieldGeneration *************************************
#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshDistanceFieldGenerator_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateDistanceFieldForDynamicMeshAsync); \
	DECLARE_FUNCTION(execGenerateDistanceFieldForRealtimeMeshAsync); \
	DECLARE_FUNCTION(execGenerateDistanceFieldForStreamSetAsync); \
	DECLARE_FUNCTION(execGenerateDistanceFieldForDynamicMesh); \
	DECLARE_FUNCTION(execGenerateDistanceFieldForRealtimeMesh); \
	DECLARE_FUNCTION(execGenerateDistanceFieldForStreamSet);


struct Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration_Statics;
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshDistanceFieldGenerator_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeMeshDistanceFieldGeneration(); \
	friend struct ::Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHEXT_API UClass* ::Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMeshDistanceFieldGeneration, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealtimeMeshExt"), Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMeshDistanceFieldGeneration)


#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshDistanceFieldGenerator_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtimeMeshDistanceFieldGeneration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMeshDistanceFieldGeneration(URealtimeMeshDistanceFieldGeneration&&) = delete; \
	URealtimeMeshDistanceFieldGeneration(const URealtimeMeshDistanceFieldGeneration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeMeshDistanceFieldGeneration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMeshDistanceFieldGeneration); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeMeshDistanceFieldGeneration) \
	NO_API virtual ~URealtimeMeshDistanceFieldGeneration();


#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshDistanceFieldGenerator_h_38_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshDistanceFieldGenerator_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshDistanceFieldGenerator_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshDistanceFieldGenerator_h_41_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshDistanceFieldGenerator_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMeshDistanceFieldGeneration;

// ********** End Class URealtimeMeshDistanceFieldGeneration ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshDistanceFieldGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
