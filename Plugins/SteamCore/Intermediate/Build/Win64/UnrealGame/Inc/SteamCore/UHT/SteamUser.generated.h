// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamUser/SteamUser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamBeginAuthSessionResult : uint8;
enum class ESteamUserHasLicenseForAppResult : uint8;
enum class ESteamVoiceResult : uint8;
struct FSteamID;
struct FSteamTicketHandle;
#ifdef STEAMCORE_SteamUser_generated_h
#error "SteamUser.generated.h already included, missing '#pragma once' in SteamUser.h"
#endif
#define STEAMCORE_SteamUser_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execStopVoiceRecording); \
	DECLARE_FUNCTION(execStartVoiceRecording); \
	DECLARE_FUNCTION(execRequestStoreAuthURL); \
	DECLARE_FUNCTION(execRequestEncryptedAppTicket); \
	DECLARE_FUNCTION(execGetVoiceOptimalSampleRate); \
	DECLARE_FUNCTION(execGetVoice); \
	DECLARE_FUNCTION(execGetSteamID); \
	DECLARE_FUNCTION(execGetSteamID_Pure); \
	DECLARE_FUNCTION(execGetPlayerSteamLevel); \
	DECLARE_FUNCTION(execGetGameBadgeLevel); \
	DECLARE_FUNCTION(execGetEncryptedAppTicket); \
	DECLARE_FUNCTION(execGetAvailableVoice); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execDecompressVoice); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execBIsTwoFactorEnabled); \
	DECLARE_FUNCTION(execBIsPhoneVerified); \
	DECLARE_FUNCTION(execBIsPhoneRequiringVerification); \
	DECLARE_FUNCTION(execBIsPhoneIdentifying); \
	DECLARE_FUNCTION(execBIsBehindNAT); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execAdvertiseGame);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execStopVoiceRecording); \
	DECLARE_FUNCTION(execStartVoiceRecording); \
	DECLARE_FUNCTION(execRequestStoreAuthURL); \
	DECLARE_FUNCTION(execRequestEncryptedAppTicket); \
	DECLARE_FUNCTION(execGetVoiceOptimalSampleRate); \
	DECLARE_FUNCTION(execGetVoice); \
	DECLARE_FUNCTION(execGetSteamID); \
	DECLARE_FUNCTION(execGetSteamID_Pure); \
	DECLARE_FUNCTION(execGetPlayerSteamLevel); \
	DECLARE_FUNCTION(execGetGameBadgeLevel); \
	DECLARE_FUNCTION(execGetEncryptedAppTicket); \
	DECLARE_FUNCTION(execGetAvailableVoice); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execDecompressVoice); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execBIsTwoFactorEnabled); \
	DECLARE_FUNCTION(execBIsPhoneVerified); \
	DECLARE_FUNCTION(execBIsPhoneRequiringVerification); \
	DECLARE_FUNCTION(execBIsPhoneIdentifying); \
	DECLARE_FUNCTION(execBIsBehindNAT); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execAdvertiseGame);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUser(); \
	friend struct Z_Construct_UClass_UUser_Statics; \
public: \
	DECLARE_CLASS(UUser, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UUser)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUser(); \
	friend struct Z_Construct_UClass_UUser_Statics; \
public: \
	DECLARE_CLASS(UUser, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UUser)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUser(UUser&&); \
	NO_API UUser(const UUser&); \
public: \
	NO_API virtual ~UUser();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUser(UUser&&); \
	NO_API UUser(const UUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUser) \
	NO_API virtual ~UUser();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_14_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUser_SteamUser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
