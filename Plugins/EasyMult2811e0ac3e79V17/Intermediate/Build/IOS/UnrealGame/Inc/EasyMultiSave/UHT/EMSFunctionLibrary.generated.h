// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Common/Public/EMSFunctionLibrary.h"

#ifdef EASYMULTISAVE_EMSFunctionLibrary_generated_h
#error "EMSFunctionLibrary.generated.h already included, missing '#pragma once' in EMSFunctionLibrary.h"
#endif
#define EASYMULTISAVE_EMSFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UClass;
class UEMSCustomSaveGame;
class UEMSInfoSaveGame;
class UObject;
class UTexture2D;
class UTextureRenderTarget2D;
enum class EDeleteSlotType : uint8;
enum class ELoadedStateMod : uint8;
enum class EResetCustomSaveType : uint8;
struct FRawObjectSaveData;

// ********** Begin Class UEMSFunctionLibrary ******************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBackupName); \
	DECLARE_FUNCTION(execDeleteCustomPlayerFile); \
	DECLARE_FUNCTION(execLoadPlayerActorsCustom); \
	DECLARE_FUNCTION(execSavePlayerActorsCustom); \
	DECLARE_FUNCTION(execIsLevelStreamingActive); \
	DECLARE_FUNCTION(execLoadRawObject); \
	DECLARE_FUNCTION(execSaveRawObject); \
	DECLARE_FUNCTION(execClearWorldPartition); \
	DECLARE_FUNCTION(execIsWorldPartition); \
	DECLARE_FUNCTION(execDoesCustomSaveFileExist); \
	DECLARE_FUNCTION(execResetCustomSave); \
	DECLARE_FUNCTION(execDeleteCustomSave); \
	DECLARE_FUNCTION(execGetCustomSave); \
	DECLARE_FUNCTION(execSaveCustom); \
	DECLARE_FUNCTION(execIsLoadedState); \
	DECLARE_FUNCTION(execIsSavingOrLoading); \
	DECLARE_FUNCTION(execSetActorSaveProperties); \
	DECLARE_FUNCTION(execExportSaveThumbnail); \
	DECLARE_FUNCTION(execImportSaveThumbnail); \
	DECLARE_FUNCTION(execClearMultiLevelSave); \
	DECLARE_FUNCTION(execGetAllSaveUsers); \
	DECLARE_FUNCTION(execDeleteSaveUser); \
	DECLARE_FUNCTION(execGetCurrentSaveUser); \
	DECLARE_FUNCTION(execSetCurrentSaveUserName); \
	DECLARE_FUNCTION(execDeleteAllSaveDataForSlot); \
	DECLARE_FUNCTION(execDoesSaveSlotExist); \
	DECLARE_FUNCTION(execGetSortedSaveSlots); \
	DECLARE_FUNCTION(execGetNamedSlotInfo); \
	DECLARE_FUNCTION(execGetSlotInfoSaveGame); \
	DECLARE_FUNCTION(execSetCurrentSaveGameName);


struct Z_Construct_UClass_UEMSFunctionLibrary_Statics;
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSFunctionLibrary_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEMSFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UEMSFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASYMULTISAVE_API UClass* ::Z_Construct_UClass_UEMSFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UEMSFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), Z_Construct_UClass_UEMSFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UEMSFunctionLibrary)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEMSFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEMSFunctionLibrary(UEMSFunctionLibrary&&) = delete; \
	UEMSFunctionLibrary(const UEMSFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEMSFunctionLibrary) \
	NO_API virtual ~UEMSFunctionLibrary();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSFunctionLibrary_h_15_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSFunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEMSFunctionLibrary;

// ********** End Class UEMSFunctionLibrary ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
