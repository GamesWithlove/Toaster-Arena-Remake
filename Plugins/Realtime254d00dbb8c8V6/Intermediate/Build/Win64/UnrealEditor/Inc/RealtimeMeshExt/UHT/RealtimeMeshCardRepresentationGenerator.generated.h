// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealtimeMeshCardRepresentationGenerator.h"

#ifdef REALTIMEMESHEXT_RealtimeMeshCardRepresentationGenerator_generated_h
#error "RealtimeMeshCardRepresentationGenerator.generated.h already included, missing '#pragma once' in RealtimeMeshCardRepresentationGenerator.h"
#endif
#define REALTIMEMESHEXT_RealtimeMeshCardRepresentationGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UObject;
class URealtimeMeshSimple;
class URealtimeMeshStreamSet;
enum class ERealtimeMeshOutcomePins : uint8;
struct FLatentActionInfo;
struct FRealtimeMeshCardRepresentation;
struct FRealtimeMeshCardRepresentationGeneratorOptions;
struct FRealtimeMeshDistanceField;

// ********** Begin ScriptStruct FRealtimeMeshCardRepresentationGeneratorOptions *******************
struct Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics;
#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshCardRepresentationGenerator_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics; \
	REALTIMEMESHEXT_API static class UScriptStruct* StaticStruct();


struct FRealtimeMeshCardRepresentationGeneratorOptions;
// ********** End ScriptStruct FRealtimeMeshCardRepresentationGeneratorOptions *********************

// ********** Begin Class URealtimeMeshCardRepresentationGenerator *********************************
#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshCardRepresentationGenerator_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateCardRepresentationForDynamicMeshAsync); \
	DECLARE_FUNCTION(execGenerateCardRepresentationForRealtimeMeshAsync); \
	DECLARE_FUNCTION(execGenerateCardRepresentationForStreamSetAsync); \
	DECLARE_FUNCTION(execGenerateCardRepresentationForDynamicMesh); \
	DECLARE_FUNCTION(execGenerateCardRepresentationForRealtimeMesh); \
	DECLARE_FUNCTION(execGenerateCardRepresentationForStreamSet);


struct Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator_Statics;
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshCardRepresentationGenerator_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeMeshCardRepresentationGenerator(); \
	friend struct ::Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHEXT_API UClass* ::Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMeshCardRepresentationGenerator, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealtimeMeshExt"), Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMeshCardRepresentationGenerator)


#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshCardRepresentationGenerator_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtimeMeshCardRepresentationGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMeshCardRepresentationGenerator(URealtimeMeshCardRepresentationGenerator&&) = delete; \
	URealtimeMeshCardRepresentationGenerator(const URealtimeMeshCardRepresentationGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeMeshCardRepresentationGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMeshCardRepresentationGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeMeshCardRepresentationGenerator) \
	NO_API virtual ~URealtimeMeshCardRepresentationGenerator();


#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshCardRepresentationGenerator_h_39_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshCardRepresentationGenerator_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshCardRepresentationGenerator_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshCardRepresentationGenerator_h_42_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshCardRepresentationGenerator_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMeshCardRepresentationGenerator;

// ********** End Class URealtimeMeshCardRepresentationGenerator ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshCardRepresentationGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
