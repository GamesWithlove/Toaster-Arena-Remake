// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamInput/SteamInputTypes.h"

#ifdef STEAMCORE_SteamInputTypes_generated_h
#error "SteamInputTypes.generated.h already included, missing '#pragma once' in SteamInputTypes.h"
#endif
#define STEAMCORE_SteamInputTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInputAnalogActionData ********************************************
struct Z_Construct_UScriptStruct_FInputAnalogActionData_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_139_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputAnalogActionData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FInputAnalogActionData;
// ********** End ScriptStruct FInputAnalogActionData **********************************************

// ********** Begin ScriptStruct FInputDigitalActionData *******************************************
struct Z_Construct_UScriptStruct_FInputDigitalActionData_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_172_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputDigitalActionData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FInputDigitalActionData;
// ********** End ScriptStruct FInputDigitalActionData *********************************************

// ********** Begin ScriptStruct FInputMotionData **************************************************
struct Z_Construct_UScriptStruct_FInputMotionData_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_197_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputMotionData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


struct FInputMotionData;
// ********** End ScriptStruct FInputMotionData ****************************************************

// ********** Begin ScriptStruct FInputHandle ******************************************************
struct Z_Construct_UScriptStruct_FInputHandle_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_254_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputHandle_Statics; \
	static class UScriptStruct* StaticStruct();


struct FInputHandle;
// ********** End ScriptStruct FInputHandle ********************************************************

// ********** Begin ScriptStruct FInputActionSetHandle *********************************************
struct Z_Construct_UScriptStruct_FInputActionSetHandle_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_277_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputActionSetHandle_Statics; \
	static class UScriptStruct* StaticStruct();


struct FInputActionSetHandle;
// ********** End ScriptStruct FInputActionSetHandle ***********************************************

// ********** Begin ScriptStruct FInputDigitalActionHandle *****************************************
struct Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_300_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics; \
	static class UScriptStruct* StaticStruct();


struct FInputDigitalActionHandle;
// ********** End ScriptStruct FInputDigitalActionHandle *******************************************

// ********** Begin ScriptStruct FInputAnalogActionHandle ******************************************
struct Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_323_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics; \
	static class UScriptStruct* StaticStruct();


struct FInputAnalogActionHandle;
// ********** End ScriptStruct FInputAnalogActionHandle ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInputTypes_h

// ********** Begin Enum ESteamCoreInputSource *****************************************************
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
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreInputSource>();
// ********** End Enum ESteamCoreInputSource *******************************************************

// ********** Begin Enum ESteamCoreInputSourceMode *************************************************
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
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreInputSourceMode>();
// ********** End Enum ESteamCoreInputSourceMode ***************************************************

// ********** Begin Enum ESteamCoreXboxOrigin ******************************************************
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
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreXboxOrigin>();
// ********** End Enum ESteamCoreXboxOrigin ********************************************************

// ********** Begin Enum ESteamCoreControllerPad ***************************************************
#define FOREACH_ENUM_ESTEAMCORECONTROLLERPAD(op) \
	op(ESteamCoreControllerPad::Left) \
	op(ESteamCoreControllerPad::Right) 

enum class ESteamCoreControllerPad : uint8;
template<> struct TIsUEnumClass<ESteamCoreControllerPad> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreControllerPad>();
// ********** End Enum ESteamCoreControllerPad *****************************************************

// ********** Begin Enum ESteamCoreInputType *******************************************************
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
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreInputType>();
// ********** End Enum ESteamCoreInputType *********************************************************

// ********** Begin Enum ESteamCoreInputLEDFlag ****************************************************
#define FOREACH_ENUM_ESTEAMCOREINPUTLEDFLAG(op) \
	op(ESteamCoreInputLEDFlag::SetColor) \
	op(ESteamCoreInputLEDFlag::RestoreUserDefault) 

enum class ESteamCoreInputLEDFlag : uint8;
template<> struct TIsUEnumClass<ESteamCoreInputLEDFlag> { enum { Value = true }; };
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreInputLEDFlag>();
// ********** End Enum ESteamCoreInputLEDFlag ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
