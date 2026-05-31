// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VaRestJsonObject.h"

#ifdef VAREST_VaRestJsonObject_generated_h
#error "VaRestJsonObject.generated.h already included, missing '#pragma once' in VaRestJsonObject.h"
#endif
#define VAREST_VaRestJsonObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVaRestJsonObject;
class UVaRestJsonValue;

// ********** Begin Class UVaRestJsonObject ********************************************************
#define FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestJsonObject_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWriteToFilePath); \
	DECLARE_FUNCTION(execSetObjectArrayField); \
	DECLARE_FUNCTION(execGetObjectArrayField); \
	DECLARE_FUNCTION(execSetBoolArrayField); \
	DECLARE_FUNCTION(execGetBoolArrayField); \
	DECLARE_FUNCTION(execSetStringArrayField); \
	DECLARE_FUNCTION(execGetStringArrayField); \
	DECLARE_FUNCTION(execSetNumberArrayFieldDouble); \
	DECLARE_FUNCTION(execSetNumberArrayField); \
	DECLARE_FUNCTION(execGetIntegerArrayField); \
	DECLARE_FUNCTION(execGetNumberArrayField); \
	DECLARE_FUNCTION(execSetMapFields_bool); \
	DECLARE_FUNCTION(execSetMapFields_int64); \
	DECLARE_FUNCTION(execSetMapFields_int32); \
	DECLARE_FUNCTION(execSetMapFields_uint8); \
	DECLARE_FUNCTION(execSetMapFields_string); \
	DECLARE_FUNCTION(execSetObjectField); \
	DECLARE_FUNCTION(execGetObjectField); \
	DECLARE_FUNCTION(execSetBoolField); \
	DECLARE_FUNCTION(execGetBoolField); \
	DECLARE_FUNCTION(execSetStringField); \
	DECLARE_FUNCTION(execGetStringField); \
	DECLARE_FUNCTION(execSetInt64Field); \
	DECLARE_FUNCTION(execGetInt64Field); \
	DECLARE_FUNCTION(execSetIntegerField); \
	DECLARE_FUNCTION(execGetIntegerField); \
	DECLARE_FUNCTION(execSetNumberFieldDouble); \
	DECLARE_FUNCTION(execSetNumberField); \
	DECLARE_FUNCTION(execGetNumberField); \
	DECLARE_FUNCTION(execMergeJsonObject); \
	DECLARE_FUNCTION(execSetArrayField); \
	DECLARE_FUNCTION(execGetArrayField); \
	DECLARE_FUNCTION(execSetField); \
	DECLARE_FUNCTION(execGetField); \
	DECLARE_FUNCTION(execRemoveField); \
	DECLARE_FUNCTION(execHasField); \
	DECLARE_FUNCTION(execGetFieldNames); \
	DECLARE_FUNCTION(execGetFieldTypeString); \
	DECLARE_FUNCTION(execDecodeJson); \
	DECLARE_FUNCTION(execEncodeJsonToSingleString); \
	DECLARE_FUNCTION(execEncodeJson); \
	DECLARE_FUNCTION(execReset);


struct Z_Construct_UClass_UVaRestJsonObject_Statics;
VAREST_API UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestJsonObject_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUVaRestJsonObject(); \
	friend struct ::Z_Construct_UClass_UVaRestJsonObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VAREST_API UClass* ::Z_Construct_UClass_UVaRestJsonObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UVaRestJsonObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaRest"), Z_Construct_UClass_UVaRestJsonObject_NoRegister) \
	DECLARE_SERIALIZER(UVaRestJsonObject)


#define FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestJsonObject_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestJsonObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestJsonObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestJsonObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestJsonObject); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVaRestJsonObject(UVaRestJsonObject&&) = delete; \
	UVaRestJsonObject(const UVaRestJsonObject&) = delete; \
	NO_API virtual ~UVaRestJsonObject();


#define FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestJsonObject_h_17_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestJsonObject_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestJsonObject_h_20_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestJsonObject_h_20_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestJsonObject_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVaRestJsonObject;

// ********** End Class UVaRestJsonObject **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestJsonObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
