// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VaRestLibrary.h"

#ifdef VAREST_VaRestLibrary_generated_h
#error "VaRestLibrary.generated.h already included, missing '#pragma once' in VaRestLibrary.h"
#endif
#define VAREST_VaRestLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UVaRestSettings;
struct FVaRestURL;

// ********** Begin Class UVaRestLibrary ***********************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWorldURL); \
	DECLARE_FUNCTION(execGetVaRestVersion); \
	DECLARE_FUNCTION(execHTTPStatusIntToEnum); \
	DECLARE_FUNCTION(execStringToSha1); \
	DECLARE_FUNCTION(execStringToMd5); \
	DECLARE_FUNCTION(execBase64DecodeData); \
	DECLARE_FUNCTION(execBase64EncodeData); \
	DECLARE_FUNCTION(execBase64Decode); \
	DECLARE_FUNCTION(execBase64Encode); \
	DECLARE_FUNCTION(execPercentEncode); \
	DECLARE_FUNCTION(execGetVaRestSettings);


struct Z_Construct_UClass_UVaRestLibrary_Statics;
VAREST_API UClass* Z_Construct_UClass_UVaRestLibrary_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVaRestLibrary(); \
	friend struct ::Z_Construct_UClass_UVaRestLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VAREST_API UClass* ::Z_Construct_UClass_UVaRestLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UVaRestLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaRest"), Z_Construct_UClass_UVaRestLibrary_NoRegister) \
	DECLARE_SERIALIZER(UVaRestLibrary)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVaRestLibrary(UVaRestLibrary&&) = delete; \
	UVaRestLibrary(const UVaRestLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestLibrary) \
	NO_API virtual ~UVaRestLibrary();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_16_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVaRestLibrary;

// ********** End Class UVaRestLibrary *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
