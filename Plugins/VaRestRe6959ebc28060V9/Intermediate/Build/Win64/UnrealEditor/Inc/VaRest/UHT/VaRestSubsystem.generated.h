// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VaRestSubsystem.h"

#ifdef VAREST_VaRestSubsystem_generated_h
#error "VaRestSubsystem.generated.h already included, missing '#pragma once' in VaRestSubsystem.h"
#endif
#define VAREST_VaRestSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVaRestJsonObject;
class UVaRestJsonValue;
class UVaRestRequestJSON;
enum class EVaRestRequestContentType : uint8;
enum class EVaRestRequestVerb : uint8;

// ********** Begin Delegate FVaRestCallDelegate ***************************************************
#define FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestSubsystem_h_13_DELEGATE \
VAREST_API void FVaRestCallDelegate_DelegateWrapper(const FScriptDelegate& VaRestCallDelegate, UVaRestRequestJSON* Request);


// ********** End Delegate FVaRestCallDelegate *****************************************************

// ********** Begin ScriptStruct FVaRestCallResponse ***********************************************
struct Z_Construct_UScriptStruct_FVaRestCallResponse_Statics;
#define FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestSubsystem_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVaRestCallResponse_Statics; \
	VAREST_API static class UScriptStruct* StaticStruct();


struct FVaRestCallResponse;
// ********** End ScriptStruct FVaRestCallResponse *************************************************

// ********** Begin Class UVaRestSubsystem *********************************************************
#define FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadJsonFromFile); \
	DECLARE_FUNCTION(execDecodeJsonObject); \
	DECLARE_FUNCTION(execDecodeJsonValue); \
	DECLARE_FUNCTION(execConstructJsonValueObject); \
	DECLARE_FUNCTION(execConstructJsonValueArray); \
	DECLARE_FUNCTION(execConstructJsonValueBool); \
	DECLARE_FUNCTION(execConstructJsonValueString); \
	DECLARE_FUNCTION(execConstructJsonValueNumber); \
	DECLARE_FUNCTION(execStaticConstructVaRestJsonObject); \
	DECLARE_FUNCTION(execConstructVaRestJsonObject); \
	DECLARE_FUNCTION(execConstructVaRestRequestExt); \
	DECLARE_FUNCTION(execConstructVaRestRequest); \
	DECLARE_FUNCTION(execCallURL);


struct Z_Construct_UClass_UVaRestSubsystem_Statics;
VAREST_API UClass* Z_Construct_UClass_UVaRestSubsystem_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestSubsystem_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVaRestSubsystem(); \
	friend struct ::Z_Construct_UClass_UVaRestSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VAREST_API UClass* ::Z_Construct_UClass_UVaRestSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UVaRestSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaRest"), Z_Construct_UClass_UVaRestSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UVaRestSubsystem)


#define FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestSubsystem_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVaRestSubsystem(UVaRestSubsystem&&) = delete; \
	UVaRestSubsystem(const UVaRestSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVaRestSubsystem) \
	NO_API virtual ~UVaRestSubsystem();


#define FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestSubsystem_h_35_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestSubsystem_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestSubsystem_h_38_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestSubsystem_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVaRestSubsystem;

// ********** End Class UVaRestSubsystem ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
