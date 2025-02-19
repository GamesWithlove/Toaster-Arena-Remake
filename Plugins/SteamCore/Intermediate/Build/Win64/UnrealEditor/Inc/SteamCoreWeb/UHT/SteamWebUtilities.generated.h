// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamCoreWeb/SteamWebUtilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamJsonResult : uint8;
struct FSteamCoreJson;
#ifdef STEAMCOREWEB_SteamWebUtilities_generated_h
#error "SteamWebUtilities.generated.h already included, missing '#pragma once' in SteamWebUtilities.h"
#endif
#define STEAMCOREWEB_SteamWebUtilities_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDevSteamID); \
	DECLARE_FUNCTION(execGetProjectAppID); \
	DECLARE_FUNCTION(execGetProjectKey); \
	DECLARE_FUNCTION(execFindJsonNumbers); \
	DECLARE_FUNCTION(execFindJsonNumber); \
	DECLARE_FUNCTION(execFindJsonBools); \
	DECLARE_FUNCTION(execFindJsonBool); \
	DECLARE_FUNCTION(execFindJsonStrings); \
	DECLARE_FUNCTION(execFindJsonString); \
	DECLARE_FUNCTION(execParseJson);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDevSteamID); \
	DECLARE_FUNCTION(execGetProjectAppID); \
	DECLARE_FUNCTION(execGetProjectKey); \
	DECLARE_FUNCTION(execFindJsonNumbers); \
	DECLARE_FUNCTION(execFindJsonNumber); \
	DECLARE_FUNCTION(execFindJsonBools); \
	DECLARE_FUNCTION(execFindJsonBool); \
	DECLARE_FUNCTION(execFindJsonStrings); \
	DECLARE_FUNCTION(execFindJsonString); \
	DECLARE_FUNCTION(execParseJson);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamWebUtilities(); \
	friend struct Z_Construct_UClass_USteamWebUtilities_Statics; \
public: \
	DECLARE_CLASS(USteamWebUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), NO_API) \
	DECLARE_SERIALIZER(USteamWebUtilities)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSteamWebUtilities(); \
	friend struct Z_Construct_UClass_USteamWebUtilities_Statics; \
public: \
	DECLARE_CLASS(USteamWebUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), NO_API) \
	DECLARE_SERIALIZER(USteamWebUtilities)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamWebUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamWebUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamWebUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamWebUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamWebUtilities(USteamWebUtilities&&); \
	NO_API USteamWebUtilities(const USteamWebUtilities&); \
public: \
	NO_API virtual ~USteamWebUtilities();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamWebUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamWebUtilities(USteamWebUtilities&&); \
	NO_API USteamWebUtilities(const USteamWebUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamWebUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamWebUtilities); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamWebUtilities) \
	NO_API virtual ~USteamWebUtilities();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_17_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREWEB_API UClass* StaticClass<class USteamWebUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
