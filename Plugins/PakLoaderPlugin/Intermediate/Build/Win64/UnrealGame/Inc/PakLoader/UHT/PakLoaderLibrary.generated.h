// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PakLoaderLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
class UMaterial;
class UMaterialInstanceConstant;
class UObject;
class USkeletalMesh;
class USoundBase;
class UStaticMesh;
class UTexture2D;
#ifdef PAKLOADER_PakLoaderLibrary_generated_h
#error "PakLoaderLibrary.generated.h already included, missing '#pragma once' in PakLoaderLibrary.h"
#endif
#define PAKLOADER_PakLoaderLibrary_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPakFileText); \
	DECLARE_FUNCTION(execGetPakFileAnimSequence); \
	DECLARE_FUNCTION(execGetPakFileMaterialInstanceConstant); \
	DECLARE_FUNCTION(execGetPakFileMaterial); \
	DECLARE_FUNCTION(execGetPakFileSound); \
	DECLARE_FUNCTION(execGetPakFileSkeletalMesh); \
	DECLARE_FUNCTION(execGetPakFileStaticMesh); \
	DECLARE_FUNCTION(execGetPakFileTexture2D); \
	DECLARE_FUNCTION(execGetPakFileObject); \
	DECLARE_FUNCTION(execGetPakFileClass); \
	DECLARE_FUNCTION(execDoesPakDirectoryExist); \
	DECLARE_FUNCTION(execGetFilesInPak); \
	DECLARE_FUNCTION(execGetFilesInPakDirectory); \
	DECLARE_FUNCTION(execRegisterEncryptionKey); \
	DECLARE_FUNCTION(execLoadPakAssetRegistryFile); \
	DECLARE_FUNCTION(execUnRegisterMountPoint); \
	DECLARE_FUNCTION(execRegisterMountPoint); \
	DECLARE_FUNCTION(execUnmountPakFile); \
	DECLARE_FUNCTION(execMountPakFile); \
	DECLARE_FUNCTION(execMountPakFileEasy); \
	DECLARE_FUNCTION(execIsValidPakFile); \
	DECLARE_FUNCTION(execGetMountedPakFilenames); \
	DECLARE_FUNCTION(execGetShortName); \
	DECLARE_FUNCTION(execTryConvertFilenameToLongPackageName); \
	DECLARE_FUNCTION(execSHA1SUM); \
	DECLARE_FUNCTION(execProjectPersistentDownloadDir); \
	DECLARE_FUNCTION(execGetProjectName); \
	DECLARE_FUNCTION(execRuntimeLog); \
	DECLARE_FUNCTION(execEnableRuntimeLog); \
	DECLARE_FUNCTION(execIsPackagedBuild);


#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPakFileText); \
	DECLARE_FUNCTION(execGetPakFileAnimSequence); \
	DECLARE_FUNCTION(execGetPakFileMaterialInstanceConstant); \
	DECLARE_FUNCTION(execGetPakFileMaterial); \
	DECLARE_FUNCTION(execGetPakFileSound); \
	DECLARE_FUNCTION(execGetPakFileSkeletalMesh); \
	DECLARE_FUNCTION(execGetPakFileStaticMesh); \
	DECLARE_FUNCTION(execGetPakFileTexture2D); \
	DECLARE_FUNCTION(execGetPakFileObject); \
	DECLARE_FUNCTION(execGetPakFileClass); \
	DECLARE_FUNCTION(execDoesPakDirectoryExist); \
	DECLARE_FUNCTION(execGetFilesInPak); \
	DECLARE_FUNCTION(execGetFilesInPakDirectory); \
	DECLARE_FUNCTION(execRegisterEncryptionKey); \
	DECLARE_FUNCTION(execLoadPakAssetRegistryFile); \
	DECLARE_FUNCTION(execUnRegisterMountPoint); \
	DECLARE_FUNCTION(execRegisterMountPoint); \
	DECLARE_FUNCTION(execUnmountPakFile); \
	DECLARE_FUNCTION(execMountPakFile); \
	DECLARE_FUNCTION(execMountPakFileEasy); \
	DECLARE_FUNCTION(execIsValidPakFile); \
	DECLARE_FUNCTION(execGetMountedPakFilenames); \
	DECLARE_FUNCTION(execGetShortName); \
	DECLARE_FUNCTION(execTryConvertFilenameToLongPackageName); \
	DECLARE_FUNCTION(execSHA1SUM); \
	DECLARE_FUNCTION(execProjectPersistentDownloadDir); \
	DECLARE_FUNCTION(execGetProjectName); \
	DECLARE_FUNCTION(execRuntimeLog); \
	DECLARE_FUNCTION(execEnableRuntimeLog); \
	DECLARE_FUNCTION(execIsPackagedBuild);


#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPakLoaderLibrary(); \
	friend struct Z_Construct_UClass_UPakLoaderLibrary_Statics; \
public: \
	DECLARE_CLASS(UPakLoaderLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PakLoader"), NO_API) \
	DECLARE_SERIALIZER(UPakLoaderLibrary)


#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUPakLoaderLibrary(); \
	friend struct Z_Construct_UClass_UPakLoaderLibrary_Statics; \
public: \
	DECLARE_CLASS(UPakLoaderLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PakLoader"), NO_API) \
	DECLARE_SERIALIZER(UPakLoaderLibrary)


#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPakLoaderLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPakLoaderLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPakLoaderLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPakLoaderLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPakLoaderLibrary(UPakLoaderLibrary&&); \
	NO_API UPakLoaderLibrary(const UPakLoaderLibrary&); \
public: \
	NO_API virtual ~UPakLoaderLibrary();


#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPakLoaderLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPakLoaderLibrary(UPakLoaderLibrary&&); \
	NO_API UPakLoaderLibrary(const UPakLoaderLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPakLoaderLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPakLoaderLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPakLoaderLibrary) \
	NO_API virtual ~UPakLoaderLibrary();


#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_21_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAKLOADER_API UClass* StaticClass<class UPakLoaderLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakLoaderLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
