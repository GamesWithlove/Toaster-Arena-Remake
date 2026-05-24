// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlockoutToolsSettings.h"

#ifdef BLOCKOUTTOOLSPLUGIN_BlockoutToolsSettings_generated_h
#error "BlockoutToolsSettings.generated.h already included, missing '#pragma once' in BlockoutToolsSettings.h"
#endif
#define BLOCKOUTTOOLSPLUGIN_BlockoutToolsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlockoutToolsSettings ***************************************************
struct Z_Construct_UClass_UBlockoutToolsSettings_Statics;
BLOCKOUTTOOLSPLUGIN_API UClass* Z_Construct_UClass_UBlockoutToolsSettings_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Public_BlockoutToolsSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlockoutToolsSettings(); \
	friend struct ::Z_Construct_UClass_UBlockoutToolsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLOCKOUTTOOLSPLUGIN_API UClass* ::Z_Construct_UClass_UBlockoutToolsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlockoutToolsSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlockoutToolsPlugin"), Z_Construct_UClass_UBlockoutToolsSettings_NoRegister) \
	DECLARE_SERIALIZER(UBlockoutToolsSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("BlockoutTools");} \



#define FID_Toaster_Arena_Remake_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Public_BlockoutToolsSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlockoutToolsSettings(UBlockoutToolsSettings&&) = delete; \
	UBlockoutToolsSettings(const UBlockoutToolsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlockoutToolsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlockoutToolsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlockoutToolsSettings) \
	NO_API virtual ~UBlockoutToolsSettings();


#define FID_Toaster_Arena_Remake_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Public_BlockoutToolsSettings_h_13_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Public_BlockoutToolsSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Public_BlockoutToolsSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Public_BlockoutToolsSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlockoutToolsSettings;

// ********** End Class UBlockoutToolsSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Public_BlockoutToolsSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
