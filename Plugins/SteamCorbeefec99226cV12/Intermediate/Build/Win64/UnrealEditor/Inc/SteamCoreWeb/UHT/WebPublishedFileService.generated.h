// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PublishedFileService/WebPublishedFileService.h"

#ifdef STEAMCOREWEB_WebPublishedFileService_generated_h
#error "WebPublishedFileService.generated.h already included, missing '#pragma once' in WebPublishedFileService.h"
#endif
#define STEAMCOREWEB_WebPublishedFileService_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebPublishedFileService *************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PublishedFileService_WebPublishedFileService_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateTags); \
	DECLARE_FUNCTION(execUpdateIncompatibleStatus); \
	DECLARE_FUNCTION(execUpdateBanStatus); \
	DECLARE_FUNCTION(execSetDeveloperMetadata); \
	DECLARE_FUNCTION(execQueryFiles);


struct Z_Construct_UClass_UWebPublishedFileService_Statics;
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPublishedFileService_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PublishedFileService_WebPublishedFileService_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebPublishedFileService(); \
	friend struct ::Z_Construct_UClass_UWebPublishedFileService_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCOREWEB_API UClass* ::Z_Construct_UClass_UWebPublishedFileService_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebPublishedFileService, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), Z_Construct_UClass_UWebPublishedFileService_NoRegister) \
	DECLARE_SERIALIZER(UWebPublishedFileService)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PublishedFileService_WebPublishedFileService_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebPublishedFileService(UWebPublishedFileService&&) = delete; \
	UWebPublishedFileService(const UWebPublishedFileService&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebPublishedFileService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebPublishedFileService); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebPublishedFileService) \
	NO_API virtual ~UWebPublishedFileService();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PublishedFileService_WebPublishedFileService_h_16_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PublishedFileService_WebPublishedFileService_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PublishedFileService_WebPublishedFileService_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PublishedFileService_WebPublishedFileService_h_19_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PublishedFileService_WebPublishedFileService_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebPublishedFileService;

// ********** End Class UWebPublishedFileService ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_PublishedFileService_WebPublishedFileService_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
