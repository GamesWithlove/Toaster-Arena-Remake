// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PakFileManager.h"

#ifdef TOASTERGAME_PakFileManager_generated_h
#error "PakFileManager.generated.h already included, missing '#pragma once' in PakFileManager.h"
#endif
#define TOASTERGAME_PakFileManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPakFileManager;

// ********** Begin Class UPakFileManager **********************************************************
#define FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnmount); \
	DECLARE_FUNCTION(execMount); \
	DECLARE_FUNCTION(execGet);


struct Z_Construct_UClass_UPakFileManager_Statics;
TOASTERGAME_API UClass* Z_Construct_UClass_UPakFileManager_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPakFileManager(); \
	friend struct ::Z_Construct_UClass_UPakFileManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOASTERGAME_API UClass* ::Z_Construct_UClass_UPakFileManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UPakFileManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToasterGame"), Z_Construct_UClass_UPakFileManager_NoRegister) \
	DECLARE_SERIALIZER(UPakFileManager)


#define FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPakFileManager(UPakFileManager&&) = delete; \
	UPakFileManager(const UPakFileManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPakFileManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPakFileManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPakFileManager)


#define FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h_8_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h_11_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPakFileManager;

// ********** End Class UPakFileManager ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
