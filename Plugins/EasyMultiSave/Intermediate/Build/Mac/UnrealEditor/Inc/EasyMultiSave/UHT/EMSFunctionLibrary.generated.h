// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EMSFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UEMSCustomSaveGame;
class UEMSInfoSaveGame;
class UObject;
class UTexture2D;
class UTextureRenderTarget2D;
enum class ELoadedStateMod : uint8;
struct FRawObjectSaveData;
#ifdef EASYMULTISAVE_EMSFunctionLibrary_generated_h
#error "EMSFunctionLibrary.generated.h already included, missing '#pragma once' in EMSFunctionLibrary.h"
#endif
#define EASYMULTISAVE_EMSFunctionLibrary_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadRawObject); \
	DECLARE_FUNCTION(execSaveRawObject); \
	DECLARE_FUNCTION(execClearWorldPartition); \
	DECLARE_FUNCTION(execIsWorldPartition); \
	DECLARE_FUNCTION(execDeleteCustomSave); \
	DECLARE_FUNCTION(execGetCustomSave); \
	DECLARE_FUNCTION(execSaveCustom); \
	DECLARE_FUNCTION(execIsSavingOrLoading); \
	DECLARE_FUNCTION(execSetActorSaveProperties); \
	DECLARE_FUNCTION(execExportSaveThumbnail); \
	DECLARE_FUNCTION(execImportSaveThumbnail); \
	DECLARE_FUNCTION(execClearMultiLevelSave); \
	DECLARE_FUNCTION(execDeleteAllSaveDataForSlot); \
	DECLARE_FUNCTION(execDoesSaveSlotExist); \
	DECLARE_FUNCTION(execGetAllSaveUsers); \
	DECLARE_FUNCTION(execDeleteSaveUser); \
	DECLARE_FUNCTION(execSetCurrentSaveUserName); \
	DECLARE_FUNCTION(execGetSortedSaveSlots); \
	DECLARE_FUNCTION(execGetNamedSlotInfo); \
	DECLARE_FUNCTION(execGetSlotInfoSaveGame); \
	DECLARE_FUNCTION(execSetCurrentSaveGameName);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadRawObject); \
	DECLARE_FUNCTION(execSaveRawObject); \
	DECLARE_FUNCTION(execClearWorldPartition); \
	DECLARE_FUNCTION(execIsWorldPartition); \
	DECLARE_FUNCTION(execDeleteCustomSave); \
	DECLARE_FUNCTION(execGetCustomSave); \
	DECLARE_FUNCTION(execSaveCustom); \
	DECLARE_FUNCTION(execIsSavingOrLoading); \
	DECLARE_FUNCTION(execSetActorSaveProperties); \
	DECLARE_FUNCTION(execExportSaveThumbnail); \
	DECLARE_FUNCTION(execImportSaveThumbnail); \
	DECLARE_FUNCTION(execClearMultiLevelSave); \
	DECLARE_FUNCTION(execDeleteAllSaveDataForSlot); \
	DECLARE_FUNCTION(execDoesSaveSlotExist); \
	DECLARE_FUNCTION(execGetAllSaveUsers); \
	DECLARE_FUNCTION(execDeleteSaveUser); \
	DECLARE_FUNCTION(execSetCurrentSaveUserName); \
	DECLARE_FUNCTION(execGetSortedSaveSlots); \
	DECLARE_FUNCTION(execGetNamedSlotInfo); \
	DECLARE_FUNCTION(execGetSlotInfoSaveGame); \
	DECLARE_FUNCTION(execSetCurrentSaveGameName);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEMSFunctionLibrary(); \
	friend struct Z_Construct_UClass_UEMSFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UEMSFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), NO_API) \
	DECLARE_SERIALIZER(UEMSFunctionLibrary)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUEMSFunctionLibrary(); \
	friend struct Z_Construct_UClass_UEMSFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UEMSFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), NO_API) \
	DECLARE_SERIALIZER(UEMSFunctionLibrary)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEMSFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEMSFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEMSFunctionLibrary(UEMSFunctionLibrary&&); \
	NO_API UEMSFunctionLibrary(const UEMSFunctionLibrary&); \
public: \
	NO_API virtual ~UEMSFunctionLibrary();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEMSFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEMSFunctionLibrary(UEMSFunctionLibrary&&); \
	NO_API UEMSFunctionLibrary(const UEMSFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEMSFunctionLibrary) \
	NO_API virtual ~UEMSFunctionLibrary();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_9_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYMULTISAVE_API UClass* StaticClass<class UEMSFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
