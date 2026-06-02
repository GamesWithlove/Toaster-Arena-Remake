// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EngineFunctions.h"

#ifdef SHADOWSCODEPLUGIN_EngineFunctions_generated_h
#error "EngineFunctions.generated.h already included, missing '#pragma once' in EngineFunctions.h"
#endif
#define SHADOWSCODEPLUGIN_EngineFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UAnimSequenceBase;
class UObject;
class USkeleton;

// ********** Begin Class UEngineFunctions *********************************************************
#define FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execValidateAnimSequence); \
	DECLARE_FUNCTION(execValidateMontage); \
	DECLARE_FUNCTION(execK2_IsTearingDown);


struct Z_Construct_UClass_UEngineFunctions_Statics;
SHADOWSCODEPLUGIN_API UClass* Z_Construct_UClass_UEngineFunctions_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEngineFunctions(); \
	friend struct ::Z_Construct_UClass_UEngineFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHADOWSCODEPLUGIN_API UClass* ::Z_Construct_UClass_UEngineFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UEngineFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShadowsCodePlugin"), Z_Construct_UClass_UEngineFunctions_NoRegister) \
	DECLARE_SERIALIZER(UEngineFunctions)


#define FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEngineFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEngineFunctions(UEngineFunctions&&) = delete; \
	UEngineFunctions(const UEngineFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEngineFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngineFunctions) \
	NO_API virtual ~UEngineFunctions();


#define FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h_13_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h_16_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEngineFunctions;

// ********** End Class UEngineFunctions ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
