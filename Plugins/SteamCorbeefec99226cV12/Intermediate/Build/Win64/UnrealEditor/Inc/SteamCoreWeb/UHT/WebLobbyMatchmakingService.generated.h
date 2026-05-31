// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LobbyMatchmakingService/WebLobbyMatchmakingService.h"

#ifdef STEAMCOREWEB_WebLobbyMatchmakingService_generated_h
#error "WebLobbyMatchmakingService.generated.h already included, missing '#pragma once' in WebLobbyMatchmakingService.h"
#endif
#define STEAMCOREWEB_WebLobbyMatchmakingService_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamCoreWebLobbyType : uint8;

// ********** Begin Class UWebLobbyMatchmakingService **********************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingService_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveUserFromLobby); \
	DECLARE_FUNCTION(execCreateLobby);


struct Z_Construct_UClass_UWebLobbyMatchmakingService_Statics;
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebLobbyMatchmakingService_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingService_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebLobbyMatchmakingService(); \
	friend struct ::Z_Construct_UClass_UWebLobbyMatchmakingService_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCOREWEB_API UClass* ::Z_Construct_UClass_UWebLobbyMatchmakingService_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebLobbyMatchmakingService, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), Z_Construct_UClass_UWebLobbyMatchmakingService_NoRegister) \
	DECLARE_SERIALIZER(UWebLobbyMatchmakingService)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingService_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebLobbyMatchmakingService(UWebLobbyMatchmakingService&&) = delete; \
	UWebLobbyMatchmakingService(const UWebLobbyMatchmakingService&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebLobbyMatchmakingService); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebLobbyMatchmakingService); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebLobbyMatchmakingService) \
	NO_API virtual ~UWebLobbyMatchmakingService();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingService_h_17_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingService_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingService_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingService_h_20_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingService_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebLobbyMatchmakingService;

// ********** End Class UWebLobbyMatchmakingService ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_LobbyMatchmakingService_WebLobbyMatchmakingService_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
