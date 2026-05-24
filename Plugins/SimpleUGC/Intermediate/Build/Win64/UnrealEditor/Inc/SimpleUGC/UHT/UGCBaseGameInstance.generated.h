// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UGCBaseGameInstance.h"

#ifdef SIMPLEUGC_UGCBaseGameInstance_generated_h
#error "UGCBaseGameInstance.generated.h already included, missing '#pragma once' in UGCBaseGameInstance.h"
#endif
#define SIMPLEUGC_UGCBaseGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUGCBaseGameInstance *****************************************************
struct Z_Construct_UClass_UUGCBaseGameInstance_Statics;
SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCBaseGameInstance_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBaseGameInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUGCBaseGameInstance(); \
	friend struct ::Z_Construct_UClass_UUGCBaseGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMPLEUGC_API UClass* ::Z_Construct_UClass_UUGCBaseGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UUGCBaseGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SimpleUGC"), Z_Construct_UClass_UUGCBaseGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UUGCBaseGameInstance)


#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBaseGameInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUGCBaseGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUGCBaseGameInstance(UUGCBaseGameInstance&&) = delete; \
	UUGCBaseGameInstance(const UUGCBaseGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGCBaseGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGCBaseGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUGCBaseGameInstance) \
	NO_API virtual ~UUGCBaseGameInstance();


#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBaseGameInstance_h_13_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBaseGameInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBaseGameInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBaseGameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUGCBaseGameInstance;

// ********** End Class UUGCBaseGameInstance *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBaseGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
