// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorPool.h"

#ifdef TOASTERGAME_ActorPool_generated_h
#error "ActorPool.generated.h already included, missing '#pragma once' in ActorPool.h"
#endif
#define TOASTERGAME_ActorPool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APooledActor *************************************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPooled);


#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_10_CALLBACK_WRAPPERS
struct Z_Construct_UClass_APooledActor_Statics;
TOASTERGAME_API UClass* Z_Construct_UClass_APooledActor_NoRegister();

#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPooledActor(); \
	friend struct ::Z_Construct_UClass_APooledActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOASTERGAME_API UClass* ::Z_Construct_UClass_APooledActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APooledActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToasterGame"), Z_Construct_UClass_APooledActor_NoRegister) \
	DECLARE_SERIALIZER(APooledActor)


#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APooledActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APooledActor(APooledActor&&) = delete; \
	APooledActor(const APooledActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APooledActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APooledActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APooledActor) \
	NO_API virtual ~APooledActor();


#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_7_PROLOG
#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_10_CALLBACK_WRAPPERS \
	FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_10_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APooledActor;

// ********** End Class APooledActor ***************************************************************

// ********** Begin Class UActorPool ***************************************************************
struct Z_Construct_UClass_UActorPool_Statics;
TOASTERGAME_API UClass* Z_Construct_UClass_UActorPool_NoRegister();

#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorPool(); \
	friend struct ::Z_Construct_UClass_UActorPool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOASTERGAME_API UClass* ::Z_Construct_UClass_UActorPool_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorPool, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToasterGame"), Z_Construct_UClass_UActorPool_NoRegister) \
	DECLARE_SERIALIZER(UActorPool)


#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorPool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorPool(UActorPool&&) = delete; \
	UActorPool(const UActorPool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorPool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorPool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorPool) \
	NO_API virtual ~UActorPool();


#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_46_PROLOG
#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_49_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorPool;

// ********** End Class UActorPool *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
