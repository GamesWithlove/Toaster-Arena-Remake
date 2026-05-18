// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToasterGameStateBase.h"

#ifdef TOASTERGAME_ToasterGameStateBase_generated_h
#error "ToasterGameStateBase.generated.h already included, missing '#pragma once' in ToasterGameStateBase.h"
#endif
#define TOASTERGAME_ToasterGameStateBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APooledActor;
class UClass;

// ********** Begin Class AToasterGameStateBase ****************************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitActorPools); \
	DECLARE_FUNCTION(execSpawnActorFromPoolDefer); \
	DECLARE_FUNCTION(execSpawnActorFromPool);


struct Z_Construct_UClass_AToasterGameStateBase_Statics;
TOASTERGAME_API UClass* Z_Construct_UClass_AToasterGameStateBase_NoRegister();

#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAToasterGameStateBase(); \
	friend struct ::Z_Construct_UClass_AToasterGameStateBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOASTERGAME_API UClass* ::Z_Construct_UClass_AToasterGameStateBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AToasterGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToasterGame"), Z_Construct_UClass_AToasterGameStateBase_NoRegister) \
	DECLARE_SERIALIZER(AToasterGameStateBase)


#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AToasterGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AToasterGameStateBase(AToasterGameStateBase&&) = delete; \
	AToasterGameStateBase(const AToasterGameStateBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AToasterGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AToasterGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AToasterGameStateBase) \
	NO_API virtual ~AToasterGameStateBase();


#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h_8_PROLOG
#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h_11_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AToasterGameStateBase;

// ********** End Class AToasterGameStateBase ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
