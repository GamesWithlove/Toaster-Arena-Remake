// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Common/Public/EMSCustomSaveGame.h"

#ifdef EASYMULTISAVE_EMSCustomSaveGame_generated_h
#error "EMSCustomSaveGame.generated.h already included, missing '#pragma once' in EMSCustomSaveGame.h"
#endif
#define EASYMULTISAVE_EMSCustomSaveGame_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEMSCustomSaveGame *******************************************************
struct Z_Construct_UClass_UEMSCustomSaveGame_Statics;
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSCustomSaveGame_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSCustomSaveGame_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEMSCustomSaveGame(); \
	friend struct ::Z_Construct_UClass_UEMSCustomSaveGame_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASYMULTISAVE_API UClass* ::Z_Construct_UClass_UEMSCustomSaveGame_NoRegister(); \
public: \
	DECLARE_CLASS2(UEMSCustomSaveGame, USaveGame, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EasyMultiSave"), Z_Construct_UClass_UEMSCustomSaveGame_NoRegister) \
	DECLARE_SERIALIZER(UEMSCustomSaveGame)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSCustomSaveGame_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEMSCustomSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEMSCustomSaveGame(UEMSCustomSaveGame&&) = delete; \
	UEMSCustomSaveGame(const UEMSCustomSaveGame&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEMSCustomSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEMSCustomSaveGame); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEMSCustomSaveGame) \
	NO_API virtual ~UEMSCustomSaveGame();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSCustomSaveGame_h_10_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSCustomSaveGame_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSCustomSaveGame_h_13_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSCustomSaveGame_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEMSCustomSaveGame;

// ********** End Class UEMSCustomSaveGame *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Common_Public_EMSCustomSaveGame_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
