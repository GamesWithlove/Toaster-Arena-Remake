// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VaRestJsonValue.h"

#ifdef VAREST_VaRestJsonValue_generated_h
#error "VaRestJsonValue.generated.h already included, missing '#pragma once' in VaRestJsonValue.h"
#endif
#define VAREST_VaRestJsonValue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVaRestJsonObject;
class UVaRestJsonValue;
enum class EVaJson : uint8;

// ********** Begin Class UVaRestJsonValue *********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_RPC_WRAPPERS \
	DECLARE_FUNCTION(execAsObject); \
	DECLARE_FUNCTION(execAsArray); \
	DECLARE_FUNCTION(execAsBool); \
	DECLARE_FUNCTION(execAsString); \
	DECLARE_FUNCTION(execAsInt64); \
	DECLARE_FUNCTION(execAsInt32); \
	DECLARE_FUNCTION(execAsNumber); \
	DECLARE_FUNCTION(execIsNull); \
	DECLARE_FUNCTION(execGetTypeString); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execReset);


struct Z_Construct_UClass_UVaRestJsonValue_Statics;
VAREST_API UClass* Z_Construct_UClass_UVaRestJsonValue_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUVaRestJsonValue(); \
	friend struct ::Z_Construct_UClass_UVaRestJsonValue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VAREST_API UClass* ::Z_Construct_UClass_UVaRestJsonValue_NoRegister(); \
public: \
	DECLARE_CLASS2(UVaRestJsonValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaRest"), Z_Construct_UClass_UVaRestJsonValue_NoRegister) \
	DECLARE_SERIALIZER(UVaRestJsonValue)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestJsonValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestJsonValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestJsonValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestJsonValue); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVaRestJsonValue(UVaRestJsonValue&&) = delete; \
	UVaRestJsonValue(const UVaRestJsonValue&) = delete; \
	NO_API virtual ~UVaRestJsonValue();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_28_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_RPC_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_INCLASS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVaRestJsonValue;

// ********** End Class UVaRestJsonValue ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h

// ********** Begin Enum EVaJson *******************************************************************
#define FOREACH_ENUM_EVAJSON(op) \
	op(EVaJson::None) \
	op(EVaJson::Null) \
	op(EVaJson::String) \
	op(EVaJson::Number) \
	op(EVaJson::Boolean) \
	op(EVaJson::Array) \
	op(EVaJson::Object) 

enum class EVaJson : uint8;
template<> struct TIsUEnumClass<EVaJson> { enum { Value = true }; };
template<> VAREST_NON_ATTRIBUTED_API UEnum* StaticEnum<EVaJson>();
// ********** End Enum EVaJson *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
