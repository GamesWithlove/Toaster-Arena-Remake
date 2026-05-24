// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PakLoaderSubsystem.h"

#ifdef PAKLOADER_PakLoaderSubsystem_generated_h
#error "PakLoaderSubsystem.generated.h already included, missing '#pragma once' in PakLoaderSubsystem.h"
#endif
#define PAKLOADER_PakLoaderSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FPakLoaderOnContentPathMounted ****************************************
#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderSubsystem_h_9_DELEGATE \
PAKLOADER_API void FPakLoaderOnContentPathMounted_DelegateWrapper(const FMulticastScriptDelegate& PakLoaderOnContentPathMounted, const FString& AssetPath, const FString& ContentPath);


// ********** End Delegate FPakLoaderOnContentPathMounted ******************************************

// ********** Begin Delegate FOnPakFileMounted2 ****************************************************
#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderSubsystem_h_10_DELEGATE \
PAKLOADER_API void FOnPakFileMounted2_DelegateWrapper(const FMulticastScriptDelegate& OnPakFileMounted2, const FString& PakFilename, const FString& MountPoint, int32 NumFiles);


// ********** End Delegate FOnPakFileMounted2 ******************************************************

// ********** Begin Class UPakLoaderSubsystem ******************************************************
struct Z_Construct_UClass_UPakLoaderSubsystem_Statics;
PAKLOADER_API UClass* Z_Construct_UClass_UPakLoaderSubsystem_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPakLoaderSubsystem(); \
	friend struct ::Z_Construct_UClass_UPakLoaderSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PAKLOADER_API UClass* ::Z_Construct_UClass_UPakLoaderSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UPakLoaderSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PakLoader"), Z_Construct_UClass_UPakLoaderSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UPakLoaderSubsystem)


#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderSubsystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPakLoaderSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPakLoaderSubsystem(UPakLoaderSubsystem&&) = delete; \
	UPakLoaderSubsystem(const UPakLoaderSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPakLoaderSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPakLoaderSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPakLoaderSubsystem) \
	NO_API virtual ~UPakLoaderSubsystem();


#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderSubsystem_h_15_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPakLoaderSubsystem;

// ********** End Class UPakLoaderSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
