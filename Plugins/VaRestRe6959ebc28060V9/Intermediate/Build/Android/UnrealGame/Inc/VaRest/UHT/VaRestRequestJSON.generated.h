// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VaRestRequestJSON.h"

#ifdef VAREST_VaRestRequestJSON_generated_h
#error "VaRestRequestJSON.generated.h already included, missing '#pragma once' in VaRestRequestJSON.h"
#endif
#define VAREST_VaRestRequestJSON_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UVaRestJsonObject;
class UVaRestJsonValue;
class UVaRestRequestJSON;
enum class EVaRestRequestContentType : uint8;
enum class EVaRestRequestStatus : uint8;
enum class EVaRestRequestVerb : uint8;
struct FLatentActionInfo;

// ********** Begin Delegate FOnRequestComplete ****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_76_DELEGATE \
VAREST_API void FOnRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRequestComplete, UVaRestRequestJSON* Request);


// ********** End Delegate FOnRequestComplete ******************************************************

// ********** Begin Delegate FOnRequestFail ********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_77_DELEGATE \
VAREST_API void FOnRequestFail_DelegateWrapper(const FMulticastScriptDelegate& OnRequestFail, UVaRestRequestJSON* Request);


// ********** End Delegate FOnRequestFail **********************************************************

// ********** Begin Class UVaRestRequestJSON *******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetResponseContentAsString); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execExecuteProcessRequest); \
	DECLARE_FUNCTION(execApplyURL); \
	DECLARE_FUNCTION(execProcessURL); \
	DECLARE_FUNCTION(execSetURL); \
	DECLARE_FUNCTION(execGetResponseContent); \
	DECLARE_FUNCTION(execGetResponseContentLength); \
	DECLARE_FUNCTION(execGetAllResponseHeaders); \
	DECLARE_FUNCTION(execGetResponseHeader); \
	DECLARE_FUNCTION(execGetResponseCode); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetVerb); \
	DECLARE_FUNCTION(execGetURL); \
	DECLARE_FUNCTION(execGetResponseValue); \
	DECLARE_FUNCTION(execSetResponseObject); \
	DECLARE_FUNCTION(execGetResponseObject); \
	DECLARE_FUNCTION(execSetRequestObject); \
	DECLARE_FUNCTION(execGetRequestObject); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execResetResponseData); \
	DECLARE_FUNCTION(execResetRequestData); \
	DECLARE_FUNCTION(execResetData); \
	DECLARE_FUNCTION(execSetHeader); \
	DECLARE_FUNCTION(execSetStringRequestContent); \
	DECLARE_FUNCTION(execSetBinaryRequestContent); \
	DECLARE_FUNCTION(execSetBinaryContentType); \
	DECLARE_FUNCTION(execSetContentType); \
	DECLARE_FUNCTION(execSetCustomVerb); \
	DECLARE_FUNCTION(execSetVerb);


struct Z_Construct_UClass_UVaRestRequestJSON_Statics;
VAREST_API UClass* Z_Construct_UClass_UVaRestRequestJSON_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_INCLASS \
private: \
	static void StaticRegisterNativesUVaRestRequestJSON(); \
	friend struct ::Z_Construct_UClass_UVaRestRequestJSON_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VAREST_API UClass* ::Z_Construct_UClass_UVaRestRequestJSON_NoRegister(); \
public: \
	DECLARE_CLASS2(UVaRestRequestJSON, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaRest"), Z_Construct_UClass_UVaRestRequestJSON_NoRegister) \
	DECLARE_SERIALIZER(UVaRestRequestJSON)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestRequestJSON(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestRequestJSON) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestRequestJSON); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestRequestJSON); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVaRestRequestJSON(UVaRestRequestJSON&&) = delete; \
	UVaRestRequestJSON(const UVaRestRequestJSON&) = delete; \
	NO_API virtual ~UVaRestRequestJSON();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_85_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_RPC_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_INCLASS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVaRestRequestJSON;

// ********** End Class UVaRestRequestJSON *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
