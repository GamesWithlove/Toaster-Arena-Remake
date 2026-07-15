// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EFDFunctionLibrary.h"

#ifdef EASYFILEDIALOG_EFDFunctionLibrary_generated_h
#error "EFDFunctionLibrary.generated.h already included, missing '#pragma once' in EFDFunctionLibrary.h"
#endif
#define EASYFILEDIALOG_EFDFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEFDFunctionLibrary ******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOpenFolderDialog); \
	DECLARE_FUNCTION(execSaveFileDialog); \
	DECLARE_FUNCTION(execOpenFileDialog);


struct Z_Construct_UClass_UEFDFunctionLibrary_Statics;
EASYFILEDIALOG_API UClass* Z_Construct_UClass_UEFDFunctionLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEFDFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UEFDFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASYFILEDIALOG_API UClass* ::Z_Construct_UClass_UEFDFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UEFDFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyFileDialog"), Z_Construct_UClass_UEFDFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UEFDFunctionLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEFDFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEFDFunctionLibrary(UEFDFunctionLibrary&&) = delete; \
	UEFDFunctionLibrary(const UEFDFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEFDFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEFDFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEFDFunctionLibrary) \
	NO_API virtual ~UEFDFunctionLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEFDFunctionLibrary;

// ********** End Class UEFDFunctionLibrary ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyFileDialog_Source_EasyFileDialog_Public_EFDFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
