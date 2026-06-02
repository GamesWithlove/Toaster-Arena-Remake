// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamNetworkingUtils/SteamNetworkingUtils.h"

#ifdef STEAMCORE_SteamNetworkingUtils_generated_h
#error "SteamNetworkingUtils.generated.h already included, missing '#pragma once' in SteamNetworkingUtils.h"
#endif
#define STEAMCORE_SteamNetworkingUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamNetworkPingLocation;

// ********** Begin Class UNetworkingUtils *********************************************************
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckPingDataUpToDate); \
	DECLARE_FUNCTION(execParsePingLocationString); \
	DECLARE_FUNCTION(execConvertPingLocationToString); \
	DECLARE_FUNCTION(execEstimatePingTimeFromLocalHost); \
	DECLARE_FUNCTION(execEstimatePingTimeBetweenTwoLocations); \
	DECLARE_FUNCTION(execGetLocalPingLocation); \
	DECLARE_FUNCTION(execInitRelayNetworkAccess);


struct Z_Construct_UClass_UNetworkingUtils_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_UNetworkingUtils_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkingUtils(); \
	friend struct ::Z_Construct_UClass_UNetworkingUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_UNetworkingUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkingUtils, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_UNetworkingUtils_NoRegister) \
	DECLARE_SERIALIZER(UNetworkingUtils)


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkingUtils(UNetworkingUtils&&) = delete; \
	UNetworkingUtils(const UNetworkingUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkingUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkingUtils); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkingUtils) \
	NO_API virtual ~UNetworkingUtils();


#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_14_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkingUtils;

// ********** End Class UNetworkingUtils ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
