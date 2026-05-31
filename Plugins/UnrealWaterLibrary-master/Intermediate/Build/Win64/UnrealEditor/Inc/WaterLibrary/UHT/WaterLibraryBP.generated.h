// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterLibraryBP.h"

#ifdef WATERLIBRARY_WaterLibraryBP_generated_h
#error "WaterLibraryBP.generated.h already included, missing '#pragma once' in WaterLibraryBP.h"
#endif
#define WATERLIBRARY_WaterLibraryBP_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UGerstnerWaterWaves;
class UObject;
class UWaterWaves;

// ********** Begin Class UWaterLibraryBP **********************************************************
#define FID_Toaster_Arena_Remake_Plugins_UnrealWaterLibrary_master_Source_WaterLibrary_Public_WaterLibraryBP_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execChangeWaterWaveAsset); \
	DECLARE_FUNCTION(execLoadWaterWaveAssetFile); \
	DECLARE_FUNCTION(execRecalcWaveData);


struct Z_Construct_UClass_UWaterLibraryBP_Statics;
WATERLIBRARY_API UClass* Z_Construct_UClass_UWaterLibraryBP_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_UnrealWaterLibrary_master_Source_WaterLibrary_Public_WaterLibraryBP_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUWaterLibraryBP(); \
	friend struct ::Z_Construct_UClass_UWaterLibraryBP_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATERLIBRARY_API UClass* ::Z_Construct_UClass_UWaterLibraryBP_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterLibraryBP, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaterLibrary"), Z_Construct_UClass_UWaterLibraryBP_NoRegister) \
	DECLARE_SERIALIZER(UWaterLibraryBP)


#define FID_Toaster_Arena_Remake_Plugins_UnrealWaterLibrary_master_Source_WaterLibrary_Public_WaterLibraryBP_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterLibraryBP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterLibraryBP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterLibraryBP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterLibraryBP); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterLibraryBP(UWaterLibraryBP&&) = delete; \
	UWaterLibraryBP(const UWaterLibraryBP&) = delete; \
	NO_API virtual ~UWaterLibraryBP();


#define FID_Toaster_Arena_Remake_Plugins_UnrealWaterLibrary_master_Source_WaterLibrary_Public_WaterLibraryBP_h_25_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_UnrealWaterLibrary_master_Source_WaterLibrary_Public_WaterLibraryBP_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_UnrealWaterLibrary_master_Source_WaterLibrary_Public_WaterLibraryBP_h_28_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_UnrealWaterLibrary_master_Source_WaterLibrary_Public_WaterLibraryBP_h_28_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_UnrealWaterLibrary_master_Source_WaterLibrary_Public_WaterLibraryBP_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterLibraryBP;

// ********** End Class UWaterLibraryBP ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_UnrealWaterLibrary_master_Source_WaterLibrary_Public_WaterLibraryBP_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
