// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamInput/SteamInput.h"

#ifdef STEAMCORE_SteamInput_generated_h
#error "SteamInput.generated.h already included, missing '#pragma once' in SteamInput.h"
#endif
#define STEAMCORE_SteamInput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamCoreControllerPad : uint8;
enum class ESteamCoreInputLEDFlag : uint8;
enum class ESteamCoreInputType : uint8;
enum class ESteamCoreXboxOrigin : uint8;
struct FInputActionSetHandle;
struct FInputAnalogActionData;
struct FInputAnalogActionHandle;
struct FInputDigitalActionData;
struct FInputDigitalActionHandle;
struct FInputHandle;
struct FInputMotionData;

// ********** Begin Class UInput *******************************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInput_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInputActionOriginAsString); \
	DECLARE_FUNCTION(execGetInputActionOriginAsInteger); \
	DECLARE_FUNCTION(execGetInputActionOrigins); \
	DECLARE_FUNCTION(execGetRemotePlaySessionID); \
	DECLARE_FUNCTION(execGetDeviceBindingRevision); \
	DECLARE_FUNCTION(execTranslateActionOrigin); \
	DECLARE_FUNCTION(execGetActionOriginFromXboxOrigin); \
	DECLARE_FUNCTION(execGetGlyphForXboxOrigin); \
	DECLARE_FUNCTION(execGetStringForXboxOrigin); \
	DECLARE_FUNCTION(execGetGamepadIndexForController); \
	DECLARE_FUNCTION(execGetControllerForGamepadIndex); \
	DECLARE_FUNCTION(execGetInputTypeForHandle); \
	DECLARE_FUNCTION(execShowBindingPanel); \
	DECLARE_FUNCTION(execTriggerRepeatedHapticPulse); \
	DECLARE_FUNCTION(execTriggerHapticPulse); \
	DECLARE_FUNCTION(execSetLEDColor); \
	DECLARE_FUNCTION(execTriggerVibration); \
	DECLARE_FUNCTION(execGetMotionData); \
	DECLARE_FUNCTION(execStopAnalogActionMomentum); \
	DECLARE_FUNCTION(execGetStringForActionOrigin); \
	DECLARE_FUNCTION(execGetGlyphForActionOrigin); \
	DECLARE_FUNCTION(execGetAnalogActionOrigins); \
	DECLARE_FUNCTION(execGetAnalogActionData); \
	DECLARE_FUNCTION(execGetAnalogActionHandle); \
	DECLARE_FUNCTION(execGetDigitalActionOrigins); \
	DECLARE_FUNCTION(execGetDigitalActionData); \
	DECLARE_FUNCTION(execGetDigitalActionHandle); \
	DECLARE_FUNCTION(execGetActiveActionSetLayers); \
	DECLARE_FUNCTION(execDeactivateAllActionSetLayers); \
	DECLARE_FUNCTION(execDeactivateActionSetLayer); \
	DECLARE_FUNCTION(execActivateActionSetLayer); \
	DECLARE_FUNCTION(execGetCurrentActionSet); \
	DECLARE_FUNCTION(execActivateActionSet); \
	DECLARE_FUNCTION(execGetActionSetHandle); \
	DECLARE_FUNCTION(execGetConnectedControllers); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execInit);


struct Z_Construct_UClass_UInput_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_UInput_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInput_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInput(); \
	friend struct ::Z_Construct_UClass_UInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_UInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UInput, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_UInput_NoRegister) \
	DECLARE_SERIALIZER(UInput)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInput_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInput(UInput&&) = delete; \
	UInput(const UInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInput) \
	NO_API virtual ~UInput();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInput_h_14_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInput_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInput_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInput_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInput_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInput;

// ********** End Class UInput *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
