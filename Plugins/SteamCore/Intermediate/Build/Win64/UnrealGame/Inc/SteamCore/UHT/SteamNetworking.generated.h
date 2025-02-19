// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamNetworking/SteamNetworking.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamP2PSend : uint8;
struct FSteamID;
struct FSteamP2PSessionState;
#ifdef STEAMCORE_SteamNetworking_generated_h
#error "SteamNetworking.generated.h already included, missing '#pragma once' in SteamNetworking.h"
#endif
#define STEAMCORE_SteamNetworking_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendP2PPacket); \
	DECLARE_FUNCTION(execReadP2PPacket); \
	DECLARE_FUNCTION(execIsP2PPacketAvailable); \
	DECLARE_FUNCTION(execGetP2PSessionState); \
	DECLARE_FUNCTION(execCloseP2PSessionWithUser); \
	DECLARE_FUNCTION(execCloseP2PChannelWithUser); \
	DECLARE_FUNCTION(execAllowP2PPacketRelay); \
	DECLARE_FUNCTION(execAcceptP2PSessionWithUser);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendP2PPacket); \
	DECLARE_FUNCTION(execReadP2PPacket); \
	DECLARE_FUNCTION(execIsP2PPacketAvailable); \
	DECLARE_FUNCTION(execGetP2PSessionState); \
	DECLARE_FUNCTION(execCloseP2PSessionWithUser); \
	DECLARE_FUNCTION(execCloseP2PChannelWithUser); \
	DECLARE_FUNCTION(execAllowP2PPacketRelay); \
	DECLARE_FUNCTION(execAcceptP2PSessionWithUser);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworking(); \
	friend struct Z_Construct_UClass_UNetworking_Statics; \
public: \
	DECLARE_CLASS(UNetworking, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UNetworking)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUNetworking(); \
	friend struct Z_Construct_UClass_UNetworking_Statics; \
public: \
	DECLARE_CLASS(UNetworking, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UNetworking)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworking(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworking) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworking); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetworking(UNetworking&&); \
	NO_API UNetworking(const UNetworking&); \
public: \
	NO_API virtual ~UNetworking();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetworking(UNetworking&&); \
	NO_API UNetworking(const UNetworking&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworking); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworking) \
	NO_API virtual ~UNetworking();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_14_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UNetworking>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworking_SteamNetworking_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
