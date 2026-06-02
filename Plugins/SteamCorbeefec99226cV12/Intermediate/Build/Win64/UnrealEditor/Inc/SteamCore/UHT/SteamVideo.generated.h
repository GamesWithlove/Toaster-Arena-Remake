// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamVideo/SteamVideo.h"

#ifdef STEAMCORE_SteamVideo_generated_h
#error "SteamVideo.generated.h already included, missing '#pragma once' in SteamVideo.h"
#endif
#define STEAMCORE_SteamVideo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVideo *******************************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamVideo_SteamVideo_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsBroadcasting); \
	DECLARE_FUNCTION(execGetVideoURL); \
	DECLARE_FUNCTION(execGetOPFStringForApp); \
	DECLARE_FUNCTION(execGetOPFSettings);


struct Z_Construct_UClass_UVideo_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_UVideo_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamVideo_SteamVideo_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVideo(); \
	friend struct ::Z_Construct_UClass_UVideo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_UVideo_NoRegister(); \
public: \
	DECLARE_CLASS2(UVideo, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_UVideo_NoRegister) \
	DECLARE_SERIALIZER(UVideo)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamVideo_SteamVideo_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVideo(UVideo&&) = delete; \
	UVideo(const UVideo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVideo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVideo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVideo) \
	NO_API virtual ~UVideo();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamVideo_SteamVideo_h_14_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamVideo_SteamVideo_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamVideo_SteamVideo_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamVideo_SteamVideo_h_17_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamVideo_SteamVideo_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVideo;

// ********** End Class UVideo *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamVideo_SteamVideo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
