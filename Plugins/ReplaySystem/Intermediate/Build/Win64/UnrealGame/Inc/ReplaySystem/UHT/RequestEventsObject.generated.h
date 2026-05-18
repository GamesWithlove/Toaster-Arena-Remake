// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RequestEventsObject.h"

#ifdef REPLAYSYSTEM_RequestEventsObject_generated_h
#error "RequestEventsObject.generated.h already included, missing '#pragma once' in RequestEventsObject.h"
#endif
#define REPLAYSYSTEM_RequestEventsObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URequestEventsObject *****************************************************
struct Z_Construct_UClass_URequestEventsObject_Statics;
REPLAYSYSTEM_API UClass* Z_Construct_UClass_URequestEventsObject_NoRegister();

#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RequestEventsObject_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURequestEventsObject(); \
	friend struct ::Z_Construct_UClass_URequestEventsObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLAYSYSTEM_API UClass* ::Z_Construct_UClass_URequestEventsObject_NoRegister(); \
public: \
	DECLARE_CLASS2(URequestEventsObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReplaySystem"), Z_Construct_UClass_URequestEventsObject_NoRegister) \
	DECLARE_SERIALIZER(URequestEventsObject)


#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RequestEventsObject_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URequestEventsObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URequestEventsObject(URequestEventsObject&&) = delete; \
	URequestEventsObject(const URequestEventsObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URequestEventsObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URequestEventsObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URequestEventsObject) \
	NO_API virtual ~URequestEventsObject();


#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RequestEventsObject_h_16_PROLOG
#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RequestEventsObject_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RequestEventsObject_h_20_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RequestEventsObject_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URequestEventsObject;

// ********** End Class URequestEventsObject *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RequestEventsObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
