// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToasterGameplayStatics.h"

#ifdef TOASTERGAME_ToasterGameplayStatics_generated_h
#error "ToasterGameplayStatics.generated.h already included, missing '#pragma once' in ToasterGameplayStatics.h"
#endif
#define TOASTERGAME_ToasterGameplayStatics_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APooledActor;
class UClass;
class UObject;

// ********** Begin Class UToasterGameplayStatics **************************************************
#define FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFinishSpawningPooledActor); \
	DECLARE_FUNCTION(execSpawnPooledActorDefer); \
	DECLARE_FUNCTION(execSpawnPooledActor);


struct Z_Construct_UClass_UToasterGameplayStatics_Statics;
TOASTERGAME_API UClass* Z_Construct_UClass_UToasterGameplayStatics_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToasterGameplayStatics(); \
	friend struct ::Z_Construct_UClass_UToasterGameplayStatics_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOASTERGAME_API UClass* ::Z_Construct_UClass_UToasterGameplayStatics_NoRegister(); \
public: \
	DECLARE_CLASS2(UToasterGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToasterGame"), Z_Construct_UClass_UToasterGameplayStatics_NoRegister) \
	DECLARE_SERIALIZER(UToasterGameplayStatics)


#define FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToasterGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToasterGameplayStatics(UToasterGameplayStatics&&) = delete; \
	UToasterGameplayStatics(const UToasterGameplayStatics&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToasterGameplayStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToasterGameplayStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToasterGameplayStatics) \
	NO_API virtual ~UToasterGameplayStatics();


#define FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h_7_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h_10_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToasterGameplayStatics;

// ********** End Class UToasterGameplayStatics ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
