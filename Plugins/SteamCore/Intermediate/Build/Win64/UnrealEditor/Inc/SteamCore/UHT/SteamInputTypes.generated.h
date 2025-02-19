// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamInput/SteamInputTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_SteamInputTypes_generated_h
#error "SteamInputTypes.generated.h already included, missing '#pragma once' in SteamInputTypes.h"
#endif
#define STEAMCORE_SteamInputTypes_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_570_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputAnalogActionData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FInputAnalogActionData>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_603_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputDigitalActionData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FInputDigitalActionData>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_628_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputMotionData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FInputMotionData>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_685_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FInputHandle>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_708_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputActionSetHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FInputActionSetHandle>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_731_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FInputDigitalActionHandle>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_754_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FInputAnalogActionHandle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h


#define FOREACH_ENUM_ESTEAMCOREINPUTSOURCE(op) \
	op(ESteamCoreInputSource::None) \
	op(ESteamCoreInputSource::LeftTrackpad) \
	op(ESteamCoreInputSource::RightTrackpad) \
	op(ESteamCoreInputSource::Joystick) \
	op(ESteamCoreInputSource::ABXY) \
	op(ESteamCoreInputSource::Switch) \
	op(ESteamCoreInputSource::LeftTrigger) \
	op(ESteamCoreInputSource::RightTrigger) \
	op(ESteamCoreInputSource::LeftBumper) \
	op(ESteamCoreInputSource::RightBumper) \
	op(ESteamCoreInputSource::Gyro) \
	op(ESteamCoreInputSource::CenterTrackpad) \
	op(ESteamCoreInputSource::RightJoystick) \
	op(ESteamCoreInputSource::DPad) \
	op(ESteamCoreInputSource::Key) \
	op(ESteamCoreInputSource::Mouse) \
	op(ESteamCoreInputSource::LeftGyro) \
	op(ESteamCoreInputSource::Count) 

enum class ESteamCoreInputSource : uint8;
template<> struct TIsUEnumClass<ESteamCoreInputSource> { enum { Value = true }; };
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputSource>();

#define FOREACH_ENUM_ESTEAMCOREINPUTSOURCEMODE(op) \
	op(ESteamCoreInputSourceMode::None) \
	op(ESteamCoreInputSourceMode::Dpad) \
	op(ESteamCoreInputSourceMode::Buttons) \
	op(ESteamCoreInputSourceMode::FourButtons) \
	op(ESteamCoreInputSourceMode::AbsoluteMouse) \
	op(ESteamCoreInputSourceMode::RelativeMouse) \
	op(ESteamCoreInputSourceMode::JoystickMove) \
	op(ESteamCoreInputSourceMode::JoystickMouse) \
	op(ESteamCoreInputSourceMode::JoystickCamera) \
	op(ESteamCoreInputSourceMode::ScrollWheel) \
	op(ESteamCoreInputSourceMode::Trigger) \
	op(ESteamCoreInputSourceMode::TouchMenu) \
	op(ESteamCoreInputSourceMode::MouseJoystick) \
	op(ESteamCoreInputSourceMode::MouseRegion) \
	op(ESteamCoreInputSourceMode::RadialMenu) \
	op(ESteamCoreInputSourceMode::SingleButton) \
	op(ESteamCoreInputSourceMode::Switches) 

enum class ESteamCoreInputSourceMode : uint8;
template<> struct TIsUEnumClass<ESteamCoreInputSourceMode> { enum { Value = true }; };
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputSourceMode>();

#define FOREACH_ENUM_ESTEAMCOREINPUTACTIONORIGIN(op) \
	op(InputActionOrigin_None) \
	op(InputActionOrigin_SteamController_A) \
	op(InputActionOrigin_SteamController_B) \
	op(InputActionOrigin_SteamController_X) \
	op(InputActionOrigin_SteamController_Y) \
	op(InputActionOrigin_SteamController_LeftBumper) \
	op(InputActionOrigin_SteamController_RightBumper) \
	op(InputActionOrigin_SteamController_LeftGrip) \
	op(InputActionOrigin_SteamController_RightGrip) \
	op(InputActionOrigin_SteamController_Start) \
	op(InputActionOrigin_SteamController_Back) \
	op(InputActionOrigin_SteamController_LeftPad_Touch) \
	op(InputActionOrigin_SteamController_LeftPad_Swipe) \
	op(InputActionOrigin_SteamController_LeftPad_Click) \
	op(InputActionOrigin_SteamController_LeftPad_DPadNorth) \
	op(InputActionOrigin_SteamController_LeftPad_DPadSouth) \
	op(InputActionOrigin_SteamController_LeftPad_DPadWest) \
	op(InputActionOrigin_SteamController_LeftPad_DPadEast) \
	op(InputActionOrigin_SteamController_RightPad_Touch) \
	op(InputActionOrigin_SteamController_RightPad_Swipe) \
	op(InputActionOrigin_SteamController_RightPad_Click) \
	op(InputActionOrigin_SteamController_RightPad_DPadNorth) \
	op(InputActionOrigin_SteamController_RightPad_DPadSouth) \
	op(InputActionOrigin_SteamController_RightPad_DPadWest) \
	op(InputActionOrigin_SteamController_RightPad_DPadEast) \
	op(InputActionOrigin_SteamController_LeftTrigger_Pull) \
	op(InputActionOrigin_SteamController_LeftTrigger_Click) \
	op(InputActionOrigin_SteamController_RightTrigger_Pull) \
	op(InputActionOrigin_SteamController_RightTrigger_Click) \
	op(InputActionOrigin_SteamController_LeftStick_Move) \
	op(InputActionOrigin_SteamController_LeftStick_Click) \
	op(InputActionOrigin_SteamController_LeftStick_DPadNorth) \
	op(InputActionOrigin_SteamController_LeftStick_DPadSouth) \
	op(InputActionOrigin_SteamController_LeftStick_DPadWest) \
	op(InputActionOrigin_SteamController_LeftStick_DPadEast) \
	op(InputActionOrigin_SteamController_Gyro_Move) \
	op(InputActionOrigin_SteamController_Gyro_Pitch) \
	op(InputActionOrigin_SteamController_Gyro_Yaw) \
	op(InputActionOrigin_SteamController_Gyro_Roll) \
	op(InputActionOrigin_SteamController_Reserved0) \
	op(InputActionOrigin_SteamController_Reserved1) \
	op(InputActionOrigin_SteamController_Reserved2) \
	op(InputActionOrigin_SteamController_Reserved3) \
	op(InputActionOrigin_SteamController_Reserved4) \
	op(InputActionOrigin_SteamController_Reserved5) \
	op(InputActionOrigin_SteamController_Reserved6) \
	op(InputActionOrigin_SteamController_Reserved7) \
	op(InputActionOrigin_SteamController_Reserved8) \
	op(InputActionOrigin_SteamController_Reserved9) \
	op(InputActionOrigin_SteamController_Reserved10) \
	op(InputActionOrigin_PS4_X) \
	op(InputActionOrigin_PS4_Circle) \
	op(InputActionOrigin_PS4_Triangle) \
	op(InputActionOrigin_PS4_Square) \
	op(InputActionOrigin_PS4_LeftBumper) \
	op(InputActionOrigin_PS4_RightBumper) \
	op(InputActionOrigin_PS4_Options) \
	op(InputActionOrigin_PS4_Share) \
	op(InputActionOrigin_PS4_LeftPad_Touch) \
	op(InputActionOrigin_PS4_LeftPad_Swipe) \
	op(InputActionOrigin_PS4_LeftPad_Click) \
	op(InputActionOrigin_PS4_LeftPad_DPadNorth) \
	op(InputActionOrigin_PS4_LeftPad_DPadSouth) \
	op(InputActionOrigin_PS4_LeftPad_DPadWest) \
	op(InputActionOrigin_PS4_LeftPad_DPadEast) \
	op(InputActionOrigin_PS4_RightPad_Touch) \
	op(InputActionOrigin_PS4_RightPad_Swipe) \
	op(InputActionOrigin_PS4_RightPad_Click) \
	op(InputActionOrigin_PS4_RightPad_DPadNorth) \
	op(InputActionOrigin_PS4_RightPad_DPadSouth) \
	op(InputActionOrigin_PS4_RightPad_DPadWest) \
	op(InputActionOrigin_PS4_RightPad_DPadEast) \
	op(InputActionOrigin_PS4_CenterPad_Touch) \
	op(InputActionOrigin_PS4_CenterPad_Swipe) \
	op(InputActionOrigin_PS4_CenterPad_Click) \
	op(InputActionOrigin_PS4_CenterPad_DPadNorth) \
	op(InputActionOrigin_PS4_CenterPad_DPadSouth) \
	op(InputActionOrigin_PS4_CenterPad_DPadWest) \
	op(InputActionOrigin_PS4_CenterPad_DPadEast) \
	op(InputActionOrigin_PS4_LeftTrigger_Pull) \
	op(InputActionOrigin_PS4_LeftTrigger_Click) \
	op(InputActionOrigin_PS4_RightTrigger_Pull) \
	op(InputActionOrigin_PS4_RightTrigger_Click) \
	op(InputActionOrigin_PS4_LeftStick_Move) \
	op(InputActionOrigin_PS4_LeftStick_Click) \
	op(InputActionOrigin_PS4_LeftStick_DPadNorth) \
	op(InputActionOrigin_PS4_LeftStick_DPadSouth) \
	op(InputActionOrigin_PS4_LeftStick_DPadWest) \
	op(InputActionOrigin_PS4_LeftStick_DPadEast) \
	op(InputActionOrigin_PS4_RightStick_Move) \
	op(InputActionOrigin_PS4_RightStick_Click) \
	op(InputActionOrigin_PS4_RightStick_DPadNorth) \
	op(InputActionOrigin_PS4_RightStick_DPadSouth) \
	op(InputActionOrigin_PS4_RightStick_DPadWest) \
	op(InputActionOrigin_PS4_RightStick_DPadEast) \
	op(InputActionOrigin_PS4_DPad_North) \
	op(InputActionOrigin_PS4_DPad_South) \
	op(InputActionOrigin_PS4_DPad_West) \
	op(InputActionOrigin_PS4_DPad_East) \
	op(InputActionOrigin_PS4_Gyro_Move) \
	op(InputActionOrigin_PS4_Gyro_Pitch) \
	op(InputActionOrigin_PS4_Gyro_Yaw) \
	op(InputActionOrigin_PS4_Gyro_Roll) \
	op(InputActionOrigin_PS4_DPad_Move) \
	op(InputActionOrigin_PS4_Reserved1) \
	op(InputActionOrigin_PS4_Reserved2) \
	op(InputActionOrigin_PS4_Reserved3) \
	op(InputActionOrigin_PS4_Reserved4) \
	op(InputActionOrigin_PS4_Reserved5) \
	op(InputActionOrigin_PS4_Reserved6) \
	op(InputActionOrigin_PS4_Reserved7) \
	op(InputActionOrigin_PS4_Reserved8) \
	op(InputActionOrigin_PS4_Reserved9) \
	op(InputActionOrigin_PS4_Reserved10) \
	op(InputActionOrigin_XBoxOne_A) \
	op(InputActionOrigin_XBoxOne_B) \
	op(InputActionOrigin_XBoxOne_X) \
	op(InputActionOrigin_XBoxOne_Y) \
	op(InputActionOrigin_XBoxOne_LeftBumper) \
	op(InputActionOrigin_XBoxOne_RightBumper) \
	op(InputActionOrigin_XBoxOne_Menu) \
	op(InputActionOrigin_XBoxOne_View) \
	op(InputActionOrigin_XBoxOne_LeftTrigger_Pull) \
	op(InputActionOrigin_XBoxOne_LeftTrigger_Click) \
	op(InputActionOrigin_XBoxOne_RightTrigger_Pull) \
	op(InputActionOrigin_XBoxOne_RightTrigger_Click) \
	op(InputActionOrigin_XBoxOne_LeftStick_Move) \
	op(InputActionOrigin_XBoxOne_LeftStick_Click) \
	op(InputActionOrigin_XBoxOne_LeftStick_DPadNorth) \
	op(InputActionOrigin_XBoxOne_LeftStick_DPadSouth) \
	op(InputActionOrigin_XBoxOne_LeftStick_DPadWest) \
	op(InputActionOrigin_XBoxOne_LeftStick_DPadEast) \
	op(InputActionOrigin_XBoxOne_RightStick_Move) \
	op(InputActionOrigin_XBoxOne_RightStick_Click) \
	op(InputActionOrigin_XBoxOne_RightStick_DPadNorth) \
	op(InputActionOrigin_XBoxOne_RightStick_DPadSouth) \
	op(InputActionOrigin_XBoxOne_RightStick_DPadWest) \
	op(InputActionOrigin_XBoxOne_RightStick_DPadEast) \
	op(InputActionOrigin_XBoxOne_DPad_North) \
	op(InputActionOrigin_XBoxOne_DPad_South) \
	op(InputActionOrigin_XBoxOne_DPad_West) \
	op(InputActionOrigin_XBoxOne_DPad_East) \
	op(InputActionOrigin_XBoxOne_DPad_Move) \
	op(InputActionOrigin_XBoxOne_LeftGrip_Lower) \
	op(InputActionOrigin_XBoxOne_LeftGrip_Upper) \
	op(InputActionOrigin_XBoxOne_RightGrip_Lower) \
	op(InputActionOrigin_XBoxOne_RightGrip_Upper) \
	op(InputActionOrigin_XBoxOne_Share) \
	op(InputActionOrigin_XBoxOne_Reserved6) \
	op(InputActionOrigin_XBoxOne_Reserved7) \
	op(InputActionOrigin_XBoxOne_Reserved8) \
	op(InputActionOrigin_XBoxOne_Reserved9) \
	op(InputActionOrigin_XBoxOne_Reserved10) \
	op(InputActionOrigin_XBox360_A) \
	op(InputActionOrigin_XBox360_B) \
	op(InputActionOrigin_XBox360_X) \
	op(InputActionOrigin_XBox360_Y) \
	op(InputActionOrigin_XBox360_LeftBumper) \
	op(InputActionOrigin_XBox360_RightBumper) \
	op(InputActionOrigin_XBox360_Start) \
	op(InputActionOrigin_XBox360_Back) \
	op(InputActionOrigin_XBox360_LeftTrigger_Pull) \
	op(InputActionOrigin_XBox360_LeftTrigger_Click) \
	op(InputActionOrigin_XBox360_RightTrigger_Pull) \
	op(InputActionOrigin_XBox360_RightTrigger_Click) \
	op(InputActionOrigin_XBox360_LeftStick_Move) \
	op(InputActionOrigin_XBox360_LeftStick_Click) \
	op(InputActionOrigin_XBox360_LeftStick_DPadNorth) \
	op(InputActionOrigin_XBox360_LeftStick_DPadSouth) \
	op(InputActionOrigin_XBox360_LeftStick_DPadWest) \
	op(InputActionOrigin_XBox360_LeftStick_DPadEast) \
	op(InputActionOrigin_XBox360_RightStick_Move) \
	op(InputActionOrigin_XBox360_RightStick_Click) \
	op(InputActionOrigin_XBox360_RightStick_DPadNorth) \
	op(InputActionOrigin_XBox360_RightStick_DPadSouth) \
	op(InputActionOrigin_XBox360_RightStick_DPadWest) \
	op(InputActionOrigin_XBox360_RightStick_DPadEast) \
	op(InputActionOrigin_XBox360_DPad_North) \
	op(InputActionOrigin_XBox360_DPad_South) \
	op(InputActionOrigin_XBox360_DPad_West) \
	op(InputActionOrigin_XBox360_DPad_East) \
	op(InputActionOrigin_XBox360_DPad_Move) \
	op(InputActionOrigin_XBox360_Reserved1) \
	op(InputActionOrigin_XBox360_Reserved2) \
	op(InputActionOrigin_XBox360_Reserved3) \
	op(InputActionOrigin_XBox360_Reserved4) \
	op(InputActionOrigin_XBox360_Reserved5) \
	op(InputActionOrigin_XBox360_Reserved6) \
	op(InputActionOrigin_XBox360_Reserved7) \
	op(InputActionOrigin_XBox360_Reserved8) \
	op(InputActionOrigin_XBox360_Reserved9) \
	op(InputActionOrigin_XBox360_Reserved10) \
	op(InputActionOrigin_Switch_A) \
	op(InputActionOrigin_Switch_B) \
	op(InputActionOrigin_Switch_X) \
	op(InputActionOrigin_Switch_Y) \
	op(InputActionOrigin_Switch_LeftBumper) \
	op(InputActionOrigin_Switch_RightBumper) \
	op(InputActionOrigin_Switch_Plus) \
	op(InputActionOrigin_Switch_Minus) \
	op(InputActionOrigin_Switch_Capture) \
	op(InputActionOrigin_Switch_LeftTrigger_Pull) \
	op(InputActionOrigin_Switch_LeftTrigger_Click) \
	op(InputActionOrigin_Switch_RightTrigger_Pull) \
	op(InputActionOrigin_Switch_RightTrigger_Click) \
	op(InputActionOrigin_Switch_LeftStick_Move) \
	op(InputActionOrigin_Switch_LeftStick_Click) \
	op(InputActionOrigin_Switch_LeftStick_DPadNorth) \
	op(InputActionOrigin_Switch_LeftStick_DPadSouth) \
	op(InputActionOrigin_Switch_LeftStick_DPadWest) \
	op(InputActionOrigin_Switch_LeftStick_DPadEast) \
	op(InputActionOrigin_Switch_RightStick_Move) \
	op(InputActionOrigin_Switch_RightStick_Click) \
	op(InputActionOrigin_Switch_RightStick_DPadNorth) \
	op(InputActionOrigin_Switch_RightStick_DPadSouth) \
	op(InputActionOrigin_Switch_RightStick_DPadWest) \
	op(InputActionOrigin_Switch_RightStick_DPadEast) \
	op(InputActionOrigin_Switch_DPad_North) \
	op(InputActionOrigin_Switch_DPad_South) \
	op(InputActionOrigin_Switch_DPad_West) \
	op(InputActionOrigin_Switch_DPad_East) \
	op(InputActionOrigin_Switch_ProGyro_Move) \
	op(InputActionOrigin_Switch_ProGyro_Pitch) \
	op(InputActionOrigin_Switch_ProGyro_Yaw) \
	op(InputActionOrigin_Switch_ProGyro_Roll) \
	op(InputActionOrigin_Switch_DPad_Move) \
	op(InputActionOrigin_Switch_Reserved1) \
	op(InputActionOrigin_Switch_Reserved2) \
	op(InputActionOrigin_Switch_Reserved3) \
	op(InputActionOrigin_Switch_Reserved4) \
	op(InputActionOrigin_Switch_Reserved5) \
	op(InputActionOrigin_Switch_Reserved6) \
	op(InputActionOrigin_Switch_Reserved7) \
	op(InputActionOrigin_Switch_Reserved8) \
	op(InputActionOrigin_Switch_Reserved9) \
	op(InputActionOrigin_Switch_Reserved10) \
	op(InputActionOrigin_Switch_RightGyro_Move) \
	op(InputActionOrigin_Switch_RightGyro_Pitch) \
	op(InputActionOrigin_Switch_RightGyro_Yaw) \
	op(InputActionOrigin_Switch_RightGyro_Roll) \
	op(InputActionOrigin_Switch_LeftGyro_Move) \
	op(InputActionOrigin_Switch_LeftGyro_Pitch) \
	op(InputActionOrigin_Switch_LeftGyro_Yaw) \
	op(InputActionOrigin_Switch_LeftGyro_Roll) \
	op(InputActionOrigin_Switch_LeftGrip_Lower) \
	op(InputActionOrigin_Switch_LeftGrip_Upper) \
	op(InputActionOrigin_Switch_RightGrip_Lower) \
	op(InputActionOrigin_Switch_RightGrip_Upper) \
	op(InputActionOrigin_Switch_Reserved11) \
	op(InputActionOrigin_Switch_Reserved12) \
	op(InputActionOrigin_Switch_Reserved13) \
	op(InputActionOrigin_Switch_Reserved14) \
	op(InputActionOrigin_Switch_Reserved15) \
	op(InputActionOrigin_Switch_Reserved16) \
	op(InputActionOrigin_Switch_Reserved17) \
	op(InputActionOrigin_Switch_Reserved18) \
	op(InputActionOrigin_Switch_Reserved19) \
	op(InputActionOrigin_Switch_Reserved20) \
	op(InputActionOrigin_PS5_X) \
	op(InputActionOrigin_PS5_Circle) \
	op(InputActionOrigin_PS5_Triangle) \
	op(InputActionOrigin_PS5_Square) \
	op(InputActionOrigin_PS5_LeftBumper) \
	op(InputActionOrigin_PS5_RightBumper) \
	op(InputActionOrigin_PS5_Option) \
	op(InputActionOrigin_PS5_Create) \
	op(InputActionOrigin_PS5_Mute) \
	op(InputActionOrigin_PS5_LeftPad_Touch) \
	op(InputActionOrigin_PS5_LeftPad_Swipe) \
	op(InputActionOrigin_PS5_LeftPad_Click) \
	op(InputActionOrigin_PS5_LeftPad_DPadNorth) \
	op(InputActionOrigin_PS5_LeftPad_DPadSouth) \
	op(InputActionOrigin_PS5_LeftPad_DPadWest) \
	op(InputActionOrigin_PS5_LeftPad_DPadEast) \
	op(InputActionOrigin_PS5_RightPad_Touch) \
	op(InputActionOrigin_PS5_RightPad_Swipe) \
	op(InputActionOrigin_PS5_RightPad_Click) \
	op(InputActionOrigin_PS5_RightPad_DPadNorth) \
	op(InputActionOrigin_PS5_RightPad_DPadSouth) \
	op(InputActionOrigin_PS5_RightPad_DPadWest) \
	op(InputActionOrigin_PS5_RightPad_DPadEast) \
	op(InputActionOrigin_PS5_CenterPad_Touch) \
	op(InputActionOrigin_PS5_CenterPad_Swipe) \
	op(InputActionOrigin_PS5_CenterPad_Click) \
	op(InputActionOrigin_PS5_CenterPad_DPadNorth) \
	op(InputActionOrigin_PS5_CenterPad_DPadSouth) \
	op(InputActionOrigin_PS5_CenterPad_DPadWest) \
	op(InputActionOrigin_PS5_CenterPad_DPadEast) \
	op(InputActionOrigin_PS5_LeftTrigger_Pull) \
	op(InputActionOrigin_PS5_LeftTrigger_Click) \
	op(InputActionOrigin_PS5_RightTrigger_Pull) \
	op(InputActionOrigin_PS5_RightTrigger_Click) \
	op(InputActionOrigin_PS5_LeftStick_Move) \
	op(InputActionOrigin_PS5_LeftStick_Click) \
	op(InputActionOrigin_PS5_LeftStick_DPadNorth) \
	op(InputActionOrigin_PS5_LeftStick_DPadSouth) \
	op(InputActionOrigin_PS5_LeftStick_DPadWest) \
	op(InputActionOrigin_PS5_LeftStick_DPadEast) \
	op(InputActionOrigin_PS5_RightStick_Move) \
	op(InputActionOrigin_PS5_RightStick_Click) \
	op(InputActionOrigin_PS5_RightStick_DPadNorth) \
	op(InputActionOrigin_PS5_RightStick_DPadSouth) \
	op(InputActionOrigin_PS5_RightStick_DPadWest) \
	op(InputActionOrigin_PS5_RightStick_DPadEast) \
	op(InputActionOrigin_PS5_DPad_North) \
	op(InputActionOrigin_PS5_DPad_South) \
	op(InputActionOrigin_PS5_DPad_West) \
	op(InputActionOrigin_PS5_DPad_East) \
	op(InputActionOrigin_PS5_Gyro_Move) \
	op(InputActionOrigin_PS5_Gyro_Pitch) \
	op(InputActionOrigin_PS5_Gyro_Yaw) \
	op(InputActionOrigin_PS5_Gyro_Roll) \
	op(InputActionOrigin_PS5_DPad_Move) \
	op(InputActionOrigin_PS5_Reserved1) \
	op(InputActionOrigin_PS5_Reserved2) \
	op(InputActionOrigin_PS5_Reserved3) \
	op(InputActionOrigin_PS5_Reserved4) \
	op(InputActionOrigin_PS5_Reserved5) \
	op(InputActionOrigin_PS5_Reserved6) \
	op(InputActionOrigin_PS5_Reserved7) \
	op(InputActionOrigin_PS5_Reserved8) \
	op(InputActionOrigin_PS5_Reserved9) \
	op(InputActionOrigin_PS5_Reserved10) \
	op(InputActionOrigin_PS5_Reserved11) \
	op(InputActionOrigin_PS5_Reserved12) \
	op(InputActionOrigin_PS5_Reserved13) \
	op(InputActionOrigin_PS5_Reserved14) \
	op(InputActionOrigin_PS5_Reserved15) \
	op(InputActionOrigin_PS5_Reserved16) \
	op(InputActionOrigin_PS5_Reserved17) \
	op(InputActionOrigin_PS5_Reserved18) \
	op(InputActionOrigin_PS5_Reserved19) \
	op(InputActionOrigin_PS5_Reserved20) \
	op(InputActionOrigin_SteamDeck_A) \
	op(InputActionOrigin_SteamDeck_B) \
	op(InputActionOrigin_SteamDeck_X) \
	op(InputActionOrigin_SteamDeck_Y) \
	op(InputActionOrigin_SteamDeck_L1) \
	op(InputActionOrigin_SteamDeck_R1) \
	op(InputActionOrigin_SteamDeck_Menu) \
	op(InputActionOrigin_SteamDeck_View) \
	op(InputActionOrigin_SteamDeck_LeftPad_Touch) \
	op(InputActionOrigin_SteamDeck_LeftPad_Swipe) \
	op(InputActionOrigin_SteamDeck_LeftPad_Click) \
	op(InputActionOrigin_SteamDeck_LeftPad_DPadNorth) \
	op(InputActionOrigin_SteamDeck_LeftPad_DPadSouth) \
	op(InputActionOrigin_SteamDeck_LeftPad_DPadWest) \
	op(InputActionOrigin_SteamDeck_LeftPad_DPadEast) \
	op(InputActionOrigin_SteamDeck_RightPad_Touch) \
	op(InputActionOrigin_SteamDeck_RightPad_Swipe) \
	op(InputActionOrigin_SteamDeck_RightPad_Click) \
	op(InputActionOrigin_SteamDeck_RightPad_DPadNorth) \
	op(InputActionOrigin_SteamDeck_RightPad_DPadSouth) \
	op(InputActionOrigin_SteamDeck_RightPad_DPadWest) \
	op(InputActionOrigin_SteamDeck_RightPad_DPadEast) \
	op(InputActionOrigin_SteamDeck_L2_SoftPull) \
	op(InputActionOrigin_SteamDeck_L2) \
	op(InputActionOrigin_SteamDeck_R2_SoftPull) \
	op(InputActionOrigin_SteamDeck_R2) \
	op(InputActionOrigin_SteamDeck_LeftStick_Move) \
	op(InputActionOrigin_SteamDeck_L3) \
	op(InputActionOrigin_SteamDeck_LeftStick_DPadNorth) \
	op(InputActionOrigin_SteamDeck_LeftStick_DPadSouth) \
	op(InputActionOrigin_SteamDeck_LeftStick_DPadWest) \
	op(InputActionOrigin_SteamDeck_LeftStick_DPadEast) \
	op(InputActionOrigin_SteamDeck_LeftStick_Touch) \
	op(InputActionOrigin_SteamDeck_RightStick_Move) \
	op(InputActionOrigin_SteamDeck_R3) \
	op(InputActionOrigin_SteamDeck_RightStick_DPadNorth) \
	op(InputActionOrigin_SteamDeck_RightStick_DPadSouth) \
	op(InputActionOrigin_SteamDeck_RightStick_DPadWest) \
	op(InputActionOrigin_SteamDeck_RightStick_DPadEast) \
	op(InputActionOrigin_SteamDeck_RightStick_Touch) \
	op(InputActionOrigin_SteamDeck_L4) \
	op(InputActionOrigin_SteamDeck_R4) \
	op(InputActionOrigin_SteamDeck_L5) \
	op(InputActionOrigin_SteamDeck_R5) \
	op(InputActionOrigin_SteamDeck_DPad_Move) \
	op(InputActionOrigin_SteamDeck_DPad_North) \
	op(InputActionOrigin_SteamDeck_DPad_South) \
	op(InputActionOrigin_SteamDeck_DPad_West) \
	op(InputActionOrigin_SteamDeck_DPad_East) \
	op(InputActionOrigin_SteamDeck_Gyro_Move) \
	op(InputActionOrigin_SteamDeck_Gyro_Pitch) \
	op(InputActionOrigin_SteamDeck_Gyro_Yaw) \
	op(InputActionOrigin_SteamDeck_Gyro_Roll) \
	op(InputActionOrigin_SteamDeck_Reserved1) \
	op(InputActionOrigin_SteamDeck_Reserved2) \
	op(InputActionOrigin_SteamDeck_Reserved3) \
	op(InputActionOrigin_SteamDeck_Reserved4) \
	op(InputActionOrigin_SteamDeck_Reserved5) \
	op(InputActionOrigin_SteamDeck_Reserved6) \
	op(InputActionOrigin_SteamDeck_Reserved7) \
	op(InputActionOrigin_SteamDeck_Reserved8) \
	op(InputActionOrigin_SteamDeck_Reserved9) \
	op(InputActionOrigin_SteamDeck_Reserved10) \
	op(InputActionOrigin_SteamDeck_Reserved11) \
	op(InputActionOrigin_SteamDeck_Reserved12) \
	op(InputActionOrigin_SteamDeck_Reserved13) \
	op(InputActionOrigin_SteamDeck_Reserved14) \
	op(InputActionOrigin_SteamDeck_Reserved15) \
	op(InputActionOrigin_SteamDeck_Reserved16) \
	op(InputActionOrigin_SteamDeck_Reserved17) \
	op(InputActionOrigin_SteamDeck_Reserved18) \
	op(InputActionOrigin_SteamDeck_Reserved19) \
	op(InputActionOrigin_SteamDeck_Reserved20) \
	op(InputActionOrigin_Count) \
	op(InputActionOrigin_MaximumPossibleValue) 
#define FOREACH_ENUM_ESTEAMCOREXBOXORIGIN(op) \
	op(ESteamCoreXboxOrigin::A) \
	op(ESteamCoreXboxOrigin::B) \
	op(ESteamCoreXboxOrigin::X) \
	op(ESteamCoreXboxOrigin::Y) \
	op(ESteamCoreXboxOrigin::LeftBumper) \
	op(ESteamCoreXboxOrigin::RightBumper) \
	op(ESteamCoreXboxOrigin::Menu) \
	op(ESteamCoreXboxOrigin::View) \
	op(ESteamCoreXboxOrigin::LeftTrigger_Pull) \
	op(ESteamCoreXboxOrigin::LeftTrigger_Click) \
	op(ESteamCoreXboxOrigin::RightTrigger_Pull) \
	op(ESteamCoreXboxOrigin::RightTrigger_Click) \
	op(ESteamCoreXboxOrigin::LeftStick_Move) \
	op(ESteamCoreXboxOrigin::LeftStick_Click) \
	op(ESteamCoreXboxOrigin::LeftStick_DPadNorth) \
	op(ESteamCoreXboxOrigin::LeftStick_DPadSouth) \
	op(ESteamCoreXboxOrigin::LeftStick_DPadWest) \
	op(ESteamCoreXboxOrigin::LeftStick_DPadEast) \
	op(ESteamCoreXboxOrigin::RightStick_Move) \
	op(ESteamCoreXboxOrigin::RightStick_Click) \
	op(ESteamCoreXboxOrigin::RightStick_DPadNorth) \
	op(ESteamCoreXboxOrigin::RightStick_DPadSouth) \
	op(ESteamCoreXboxOrigin::RightStick_DPadWest) \
	op(ESteamCoreXboxOrigin::RightStick_DPadEast) \
	op(ESteamCoreXboxOrigin::DPad_North) \
	op(ESteamCoreXboxOrigin::DPad_South) \
	op(ESteamCoreXboxOrigin::DPad_West) \
	op(ESteamCoreXboxOrigin::DPad_East) \
	op(ESteamCoreXboxOrigin::Count) 

enum class ESteamCoreXboxOrigin : uint8;
template<> struct TIsUEnumClass<ESteamCoreXboxOrigin> { enum { Value = true }; };
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreXboxOrigin>();

#define FOREACH_ENUM_ESTEAMCORECONTROLLERPAD(op) \
	op(ESteamCoreControllerPad::Left) \
	op(ESteamCoreControllerPad::Right) 

enum class ESteamCoreControllerPad : uint8;
template<> struct TIsUEnumClass<ESteamCoreControllerPad> { enum { Value = true }; };
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreControllerPad>();

#define FOREACH_ENUM_ESTEAMCOREINPUTTYPE(op) \
	op(ESteamCoreInputType::k_ESteamInputType_Unknown) \
	op(ESteamCoreInputType::k_ESteamInputType_SteamController) \
	op(ESteamCoreInputType::k_ESteamInputType_XBox360Controller) \
	op(ESteamCoreInputType::k_ESteamInputType_XBoxOneController) \
	op(ESteamCoreInputType::k_ESteamInputType_GenericGamepad) \
	op(ESteamCoreInputType::k_ESteamInputType_PS4Controller) \
	op(ESteamCoreInputType::k_ESteamInputType_AppleMFiController) \
	op(ESteamCoreInputType::k_ESteamInputType_AndroidController) \
	op(ESteamCoreInputType::k_ESteamInputType_SwitchJoyConPair) \
	op(ESteamCoreInputType::k_ESteamInputType_SwitchJoyConSingle) \
	op(ESteamCoreInputType::k_ESteamInputType_SwitchProController) \
	op(ESteamCoreInputType::k_ESteamInputType_MobileTouch) \
	op(ESteamCoreInputType::k_ESteamInputType_PS3Controller) \
	op(ESteamCoreInputType::k_ESteamInputType_PS5Controller) \
	op(ESteamCoreInputType::k_ESteamInputType_SteamDeckController) \
	op(ESteamCoreInputType::k_ESteamInputType_Count) \
	op(ESteamCoreInputType::k_ESteamInputType_MaximumPossibleValue) 

enum class ESteamCoreInputType : uint8;
template<> struct TIsUEnumClass<ESteamCoreInputType> { enum { Value = true }; };
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputType>();

#define FOREACH_ENUM_ESTEAMCOREINPUTLEDFLAG(op) \
	op(ESteamCoreInputLEDFlag::SetColor) \
	op(ESteamCoreInputLEDFlag::RestoreUserDefault) 

enum class ESteamCoreInputLEDFlag : uint8;
template<> struct TIsUEnumClass<ESteamCoreInputLEDFlag> { enum { Value = true }; };
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputLEDFlag>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
