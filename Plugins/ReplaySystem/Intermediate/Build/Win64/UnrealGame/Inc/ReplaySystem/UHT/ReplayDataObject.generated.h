// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReplayDataObject.h"

#ifdef REPLAYSYSTEM_ReplayDataObject_generated_h
#error "ReplayDataObject.generated.h already included, missing '#pragma once' in ReplayDataObject.h"
#endif
#define REPLAYSYSTEM_ReplayDataObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReplayDataObject ********************************************************
#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDataObject_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadReplayMetaDataFromString); \
	DECLARE_FUNCTION(execSaveReplayMetaDataToString); \
	DECLARE_FUNCTION(execGetTransformData); \
	DECLARE_FUNCTION(execGetRotatorData); \
	DECLARE_FUNCTION(execGetVectorData); \
	DECLARE_FUNCTION(execGetTextData); \
	DECLARE_FUNCTION(execGetStringData); \
	DECLARE_FUNCTION(execGetNameData); \
	DECLARE_FUNCTION(execGetFloatData); \
	DECLARE_FUNCTION(execGetInteger64Data); \
	DECLARE_FUNCTION(execGetIntegerData); \
	DECLARE_FUNCTION(execGetByteData); \
	DECLARE_FUNCTION(execGetBooleanData); \
	DECLARE_FUNCTION(execRemoveTransformData); \
	DECLARE_FUNCTION(execRemoveRotatorData); \
	DECLARE_FUNCTION(execRemoveVectorData); \
	DECLARE_FUNCTION(execRemoveTextData); \
	DECLARE_FUNCTION(execRemoveStringData); \
	DECLARE_FUNCTION(execRemoveNameData); \
	DECLARE_FUNCTION(execRemoveFloatData); \
	DECLARE_FUNCTION(execRemoveInteger64Data); \
	DECLARE_FUNCTION(execRemoveIntegerData); \
	DECLARE_FUNCTION(execRemoveByteData); \
	DECLARE_FUNCTION(execRemoveBooleanData); \
	DECLARE_FUNCTION(execAddTransformData); \
	DECLARE_FUNCTION(execAddRotatorData); \
	DECLARE_FUNCTION(execAddVectorData); \
	DECLARE_FUNCTION(execAddTextData); \
	DECLARE_FUNCTION(execAddStringData); \
	DECLARE_FUNCTION(execAddNameData); \
	DECLARE_FUNCTION(execAddFloatData); \
	DECLARE_FUNCTION(execAddInteger64Data); \
	DECLARE_FUNCTION(execAddIntegerData); \
	DECLARE_FUNCTION(execAddByteData); \
	DECLARE_FUNCTION(execAddBooleanData); \
	DECLARE_FUNCTION(execDoesTransformDataExist); \
	DECLARE_FUNCTION(execDoesRotatorDataExist); \
	DECLARE_FUNCTION(execDoesVectorDataExist); \
	DECLARE_FUNCTION(execDoesTextDataExist); \
	DECLARE_FUNCTION(execDoesStringDataExist); \
	DECLARE_FUNCTION(execDoesNameDataExist); \
	DECLARE_FUNCTION(execDoesFloatDataExist); \
	DECLARE_FUNCTION(execDoesInteger64DataExist); \
	DECLARE_FUNCTION(execDoesIntegerDataExist); \
	DECLARE_FUNCTION(execDoesByteDataExist); \
	DECLARE_FUNCTION(execDoesBooleanDataExist);


struct Z_Construct_UClass_UReplayDataObject_Statics;
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UReplayDataObject_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDataObject_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplayDataObject(); \
	friend struct ::Z_Construct_UClass_UReplayDataObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLAYSYSTEM_API UClass* ::Z_Construct_UClass_UReplayDataObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplayDataObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReplaySystem"), Z_Construct_UClass_UReplayDataObject_NoRegister) \
	DECLARE_SERIALIZER(UReplayDataObject)


#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDataObject_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplayDataObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplayDataObject(UReplayDataObject&&) = delete; \
	UReplayDataObject(const UReplayDataObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplayDataObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplayDataObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplayDataObject) \
	NO_API virtual ~UReplayDataObject();


#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDataObject_h_15_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDataObject_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDataObject_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDataObject_h_19_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDataObject_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplayDataObject;

// ********** End Class UReplayDataObject **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDataObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
