// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VersionGrabber_TA.h"

#ifdef SHADOWSCODEPLUGIN_VersionGrabber_TA_generated_h
#error "VersionGrabber_TA.generated.h already included, missing '#pragma once' in VersionGrabber_TA.h"
#endif
#define SHADOWSCODEPLUGIN_VersionGrabber_TA_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVersionGrabber_TA *******************************************************
#define FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHardwareID); \
	DECLARE_FUNCTION(execGetProjectVersion);


struct Z_Construct_UClass_UVersionGrabber_TA_Statics;
SHADOWSCODEPLUGIN_API UClass* Z_Construct_UClass_UVersionGrabber_TA_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVersionGrabber_TA(); \
	friend struct ::Z_Construct_UClass_UVersionGrabber_TA_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHADOWSCODEPLUGIN_API UClass* ::Z_Construct_UClass_UVersionGrabber_TA_NoRegister(); \
public: \
	DECLARE_CLASS2(UVersionGrabber_TA, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShadowsCodePlugin"), Z_Construct_UClass_UVersionGrabber_TA_NoRegister) \
	DECLARE_SERIALIZER(UVersionGrabber_TA)


#define FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVersionGrabber_TA(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVersionGrabber_TA(UVersionGrabber_TA&&) = delete; \
	UVersionGrabber_TA(const UVersionGrabber_TA&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVersionGrabber_TA); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVersionGrabber_TA); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVersionGrabber_TA) \
	NO_API virtual ~UVersionGrabber_TA();


#define FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h_13_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h_16_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVersionGrabber_TA;

// ********** End Class UVersionGrabber_TA *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
