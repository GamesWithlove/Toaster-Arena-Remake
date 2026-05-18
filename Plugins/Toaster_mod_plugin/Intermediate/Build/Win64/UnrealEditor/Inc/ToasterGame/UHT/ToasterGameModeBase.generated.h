// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToasterGameModeBase.h"

#ifdef TOASTERGAME_ToasterGameModeBase_generated_h
#error "ToasterGameModeBase.generated.h already included, missing '#pragma once' in ToasterGameModeBase.h"
#endif
#define TOASTERGAME_ToasterGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AToasterGameModeBase *****************************************************
struct Z_Construct_UClass_AToasterGameModeBase_Statics;
TOASTERGAME_API UClass* Z_Construct_UClass_AToasterGameModeBase_NoRegister();

#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameModeBase_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAToasterGameModeBase(); \
	friend struct ::Z_Construct_UClass_AToasterGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOASTERGAME_API UClass* ::Z_Construct_UClass_AToasterGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AToasterGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToasterGame"), Z_Construct_UClass_AToasterGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AToasterGameModeBase)


#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameModeBase_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AToasterGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AToasterGameModeBase(AToasterGameModeBase&&) = delete; \
	AToasterGameModeBase(const AToasterGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AToasterGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AToasterGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AToasterGameModeBase) \
	NO_API virtual ~AToasterGameModeBase();


#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameModeBase_h_6_PROLOG
#define FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameModeBase_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameModeBase_h_9_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameModeBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AToasterGameModeBase;

// ********** End Class AToasterGameModeBase *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
