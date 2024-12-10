/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInput
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamInputTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class ESteamCoreInputSource : uint8
{
	None = 0,
	LeftTrackpad,
	RightTrackpad,
	Joystick,
	ABXY,
	Switch,
	LeftTrigger,
	RightTrigger,
	LeftBumper,
	RightBumper,
	Gyro,
	CenterTrackpad,
	RightJoystick,
	DPad,
	Key,
	Mouse,
	LeftGyro,
	Count
};

UENUM(BlueprintType)
enum class ESteamCoreInputSourceMode : uint8
{
	None = 0,
	Dpad,
	Buttons,
	FourButtons,
	AbsoluteMouse,
	RelativeMouse,
	JoystickMove,
	JoystickMouse,
	JoystickCamera,
	ScrollWheel,
	Trigger,
	TouchMenu,
	MouseJoystick,
	MouseRegion,
	RadialMenu,
	SingleButton,
	Switches
};

UENUM(BlueprintType)
enum ESteamCoreInputActionOrigin
{
	// Steam Controller
	InputActionOrigin_None,
	InputActionOrigin_SteamController_A,
	InputActionOrigin_SteamController_B,
	InputActionOrigin_SteamController_X,
	InputActionOrigin_SteamController_Y,
	InputActionOrigin_SteamController_LeftBumper,
	InputActionOrigin_SteamController_RightBumper,
	InputActionOrigin_SteamController_LeftGrip,
	InputActionOrigin_SteamController_RightGrip,
	InputActionOrigin_SteamController_Start,
	InputActionOrigin_SteamController_Back,
	InputActionOrigin_SteamController_LeftPad_Touch,
	InputActionOrigin_SteamController_LeftPad_Swipe,
	InputActionOrigin_SteamController_LeftPad_Click,
	InputActionOrigin_SteamController_LeftPad_DPadNorth,
	InputActionOrigin_SteamController_LeftPad_DPadSouth,
	InputActionOrigin_SteamController_LeftPad_DPadWest,
	InputActionOrigin_SteamController_LeftPad_DPadEast,
	InputActionOrigin_SteamController_RightPad_Touch,
	InputActionOrigin_SteamController_RightPad_Swipe,
	InputActionOrigin_SteamController_RightPad_Click,
	InputActionOrigin_SteamController_RightPad_DPadNorth,
	InputActionOrigin_SteamController_RightPad_DPadSouth,
	InputActionOrigin_SteamController_RightPad_DPadWest,
	InputActionOrigin_SteamController_RightPad_DPadEast,
	InputActionOrigin_SteamController_LeftTrigger_Pull,
	InputActionOrigin_SteamController_LeftTrigger_Click,
	InputActionOrigin_SteamController_RightTrigger_Pull,
	InputActionOrigin_SteamController_RightTrigger_Click,
	InputActionOrigin_SteamController_LeftStick_Move,
	InputActionOrigin_SteamController_LeftStick_Click,
	InputActionOrigin_SteamController_LeftStick_DPadNorth,
	InputActionOrigin_SteamController_LeftStick_DPadSouth,
	InputActionOrigin_SteamController_LeftStick_DPadWest,
	InputActionOrigin_SteamController_LeftStick_DPadEast,
	InputActionOrigin_SteamController_Gyro_Move,
	InputActionOrigin_SteamController_Gyro_Pitch,
	InputActionOrigin_SteamController_Gyro_Yaw,
	InputActionOrigin_SteamController_Gyro_Roll,
	InputActionOrigin_SteamController_Reserved0,
	InputActionOrigin_SteamController_Reserved1,
	InputActionOrigin_SteamController_Reserved2,
	InputActionOrigin_SteamController_Reserved3,
	InputActionOrigin_SteamController_Reserved4,
	InputActionOrigin_SteamController_Reserved5,
	InputActionOrigin_SteamController_Reserved6,
	InputActionOrigin_SteamController_Reserved7,
	InputActionOrigin_SteamController_Reserved8,
	InputActionOrigin_SteamController_Reserved9,
	InputActionOrigin_SteamController_Reserved10,
	
	// PS4 Dual Shock
	InputActionOrigin_PS4_X,
	InputActionOrigin_PS4_Circle,
	InputActionOrigin_PS4_Triangle,
	InputActionOrigin_PS4_Square,
	InputActionOrigin_PS4_LeftBumper,
	InputActionOrigin_PS4_RightBumper,
	InputActionOrigin_PS4_Options,	//Start
	InputActionOrigin_PS4_Share,		//Back
	InputActionOrigin_PS4_LeftPad_Touch,
	InputActionOrigin_PS4_LeftPad_Swipe,
	InputActionOrigin_PS4_LeftPad_Click,
	InputActionOrigin_PS4_LeftPad_DPadNorth,
	InputActionOrigin_PS4_LeftPad_DPadSouth,
	InputActionOrigin_PS4_LeftPad_DPadWest,
	InputActionOrigin_PS4_LeftPad_DPadEast,
	InputActionOrigin_PS4_RightPad_Touch,
	InputActionOrigin_PS4_RightPad_Swipe,
	InputActionOrigin_PS4_RightPad_Click,
	InputActionOrigin_PS4_RightPad_DPadNorth,
	InputActionOrigin_PS4_RightPad_DPadSouth,
	InputActionOrigin_PS4_RightPad_DPadWest,
	InputActionOrigin_PS4_RightPad_DPadEast,
	InputActionOrigin_PS4_CenterPad_Touch,
	InputActionOrigin_PS4_CenterPad_Swipe,
	InputActionOrigin_PS4_CenterPad_Click,
	InputActionOrigin_PS4_CenterPad_DPadNorth,
	InputActionOrigin_PS4_CenterPad_DPadSouth,
	InputActionOrigin_PS4_CenterPad_DPadWest,
	InputActionOrigin_PS4_CenterPad_DPadEast,
	InputActionOrigin_PS4_LeftTrigger_Pull,
	InputActionOrigin_PS4_LeftTrigger_Click,
	InputActionOrigin_PS4_RightTrigger_Pull,
	InputActionOrigin_PS4_RightTrigger_Click,
	InputActionOrigin_PS4_LeftStick_Move,
	InputActionOrigin_PS4_LeftStick_Click,
	InputActionOrigin_PS4_LeftStick_DPadNorth,
	InputActionOrigin_PS4_LeftStick_DPadSouth,
	InputActionOrigin_PS4_LeftStick_DPadWest,
	InputActionOrigin_PS4_LeftStick_DPadEast,
	InputActionOrigin_PS4_RightStick_Move,
	InputActionOrigin_PS4_RightStick_Click,
	InputActionOrigin_PS4_RightStick_DPadNorth,
	InputActionOrigin_PS4_RightStick_DPadSouth,
	InputActionOrigin_PS4_RightStick_DPadWest,
	InputActionOrigin_PS4_RightStick_DPadEast,
	InputActionOrigin_PS4_DPad_North,
	InputActionOrigin_PS4_DPad_South,
	InputActionOrigin_PS4_DPad_West,
	InputActionOrigin_PS4_DPad_East,
	InputActionOrigin_PS4_Gyro_Move,
	InputActionOrigin_PS4_Gyro_Pitch,
	InputActionOrigin_PS4_Gyro_Yaw,
	InputActionOrigin_PS4_Gyro_Roll,
	InputActionOrigin_PS4_DPad_Move,
	InputActionOrigin_PS4_Reserved1,
	InputActionOrigin_PS4_Reserved2,
	InputActionOrigin_PS4_Reserved3,
	InputActionOrigin_PS4_Reserved4,
	InputActionOrigin_PS4_Reserved5,
	InputActionOrigin_PS4_Reserved6,
	InputActionOrigin_PS4_Reserved7,
	InputActionOrigin_PS4_Reserved8,
	InputActionOrigin_PS4_Reserved9,
	InputActionOrigin_PS4_Reserved10,

	// XBox One
	InputActionOrigin_XBoxOne_A,
	InputActionOrigin_XBoxOne_B,
	InputActionOrigin_XBoxOne_X,
	InputActionOrigin_XBoxOne_Y,
	InputActionOrigin_XBoxOne_LeftBumper,
	InputActionOrigin_XBoxOne_RightBumper,
	InputActionOrigin_XBoxOne_Menu,  //Start
	InputActionOrigin_XBoxOne_View,  //Back
	InputActionOrigin_XBoxOne_LeftTrigger_Pull,
	InputActionOrigin_XBoxOne_LeftTrigger_Click,
	InputActionOrigin_XBoxOne_RightTrigger_Pull,
	InputActionOrigin_XBoxOne_RightTrigger_Click,
	InputActionOrigin_XBoxOne_LeftStick_Move,
	InputActionOrigin_XBoxOne_LeftStick_Click,
	InputActionOrigin_XBoxOne_LeftStick_DPadNorth,
	InputActionOrigin_XBoxOne_LeftStick_DPadSouth,
	InputActionOrigin_XBoxOne_LeftStick_DPadWest,
	InputActionOrigin_XBoxOne_LeftStick_DPadEast,
	InputActionOrigin_XBoxOne_RightStick_Move,
	InputActionOrigin_XBoxOne_RightStick_Click,
	InputActionOrigin_XBoxOne_RightStick_DPadNorth,
	InputActionOrigin_XBoxOne_RightStick_DPadSouth,
	InputActionOrigin_XBoxOne_RightStick_DPadWest,
	InputActionOrigin_XBoxOne_RightStick_DPadEast,
	InputActionOrigin_XBoxOne_DPad_North,
	InputActionOrigin_XBoxOne_DPad_South,
	InputActionOrigin_XBoxOne_DPad_West,
	InputActionOrigin_XBoxOne_DPad_East,
	InputActionOrigin_XBoxOne_DPad_Move,
	InputActionOrigin_XBoxOne_LeftGrip_Lower,
	InputActionOrigin_XBoxOne_LeftGrip_Upper,
	InputActionOrigin_XBoxOne_RightGrip_Lower,
	InputActionOrigin_XBoxOne_RightGrip_Upper,
	InputActionOrigin_XBoxOne_Share, // Xbox Series X controllers only
	InputActionOrigin_XBoxOne_Reserved6,
	InputActionOrigin_XBoxOne_Reserved7,
	InputActionOrigin_XBoxOne_Reserved8,
	InputActionOrigin_XBoxOne_Reserved9,
	InputActionOrigin_XBoxOne_Reserved10,

	// XBox 360
	InputActionOrigin_XBox360_A,
	InputActionOrigin_XBox360_B,
	InputActionOrigin_XBox360_X,
	InputActionOrigin_XBox360_Y,
	InputActionOrigin_XBox360_LeftBumper,
	InputActionOrigin_XBox360_RightBumper,
	InputActionOrigin_XBox360_Start,		//Start
	InputActionOrigin_XBox360_Back,		//Back
	InputActionOrigin_XBox360_LeftTrigger_Pull,
	InputActionOrigin_XBox360_LeftTrigger_Click,
	InputActionOrigin_XBox360_RightTrigger_Pull,
	InputActionOrigin_XBox360_RightTrigger_Click,
	InputActionOrigin_XBox360_LeftStick_Move,
	InputActionOrigin_XBox360_LeftStick_Click,
	InputActionOrigin_XBox360_LeftStick_DPadNorth,
	InputActionOrigin_XBox360_LeftStick_DPadSouth,
	InputActionOrigin_XBox360_LeftStick_DPadWest,
	InputActionOrigin_XBox360_LeftStick_DPadEast,
	InputActionOrigin_XBox360_RightStick_Move,
	InputActionOrigin_XBox360_RightStick_Click,
	InputActionOrigin_XBox360_RightStick_DPadNorth,
	InputActionOrigin_XBox360_RightStick_DPadSouth,
	InputActionOrigin_XBox360_RightStick_DPadWest,
	InputActionOrigin_XBox360_RightStick_DPadEast,
	InputActionOrigin_XBox360_DPad_North,
	InputActionOrigin_XBox360_DPad_South,
	InputActionOrigin_XBox360_DPad_West,
	InputActionOrigin_XBox360_DPad_East,	
	InputActionOrigin_XBox360_DPad_Move,
	InputActionOrigin_XBox360_Reserved1,
	InputActionOrigin_XBox360_Reserved2,
	InputActionOrigin_XBox360_Reserved3,
	InputActionOrigin_XBox360_Reserved4,
	InputActionOrigin_XBox360_Reserved5,
	InputActionOrigin_XBox360_Reserved6,
	InputActionOrigin_XBox360_Reserved7,
	InputActionOrigin_XBox360_Reserved8,
	InputActionOrigin_XBox360_Reserved9,
	InputActionOrigin_XBox360_Reserved10,


	// Switch - Pro or Joycons used as a single input device.
	// This does not apply to a single joycon
	InputActionOrigin_Switch_A,
	InputActionOrigin_Switch_B,
	InputActionOrigin_Switch_X,
	InputActionOrigin_Switch_Y,
	InputActionOrigin_Switch_LeftBumper,
	InputActionOrigin_Switch_RightBumper,
	InputActionOrigin_Switch_Plus,	//Start
	InputActionOrigin_Switch_Minus,	//Back
	InputActionOrigin_Switch_Capture,
	InputActionOrigin_Switch_LeftTrigger_Pull,
	InputActionOrigin_Switch_LeftTrigger_Click,
	InputActionOrigin_Switch_RightTrigger_Pull,
	InputActionOrigin_Switch_RightTrigger_Click,
	InputActionOrigin_Switch_LeftStick_Move,
	InputActionOrigin_Switch_LeftStick_Click,
	InputActionOrigin_Switch_LeftStick_DPadNorth,
	InputActionOrigin_Switch_LeftStick_DPadSouth,
	InputActionOrigin_Switch_LeftStick_DPadWest,
	InputActionOrigin_Switch_LeftStick_DPadEast,
	InputActionOrigin_Switch_RightStick_Move,
	InputActionOrigin_Switch_RightStick_Click,
	InputActionOrigin_Switch_RightStick_DPadNorth,
	InputActionOrigin_Switch_RightStick_DPadSouth,
	InputActionOrigin_Switch_RightStick_DPadWest,
	InputActionOrigin_Switch_RightStick_DPadEast,
	InputActionOrigin_Switch_DPad_North,
	InputActionOrigin_Switch_DPad_South,
	InputActionOrigin_Switch_DPad_West,
	InputActionOrigin_Switch_DPad_East,
	InputActionOrigin_Switch_ProGyro_Move,  // Primary Gyro in Pro Controller, or Right JoyCon
	InputActionOrigin_Switch_ProGyro_Pitch,  // Primary Gyro in Pro Controller, or Right JoyCon
	InputActionOrigin_Switch_ProGyro_Yaw,  // Primary Gyro in Pro Controller, or Right JoyCon
	InputActionOrigin_Switch_ProGyro_Roll,  // Primary Gyro in Pro Controller, or Right JoyCon
	InputActionOrigin_Switch_DPad_Move,
	InputActionOrigin_Switch_Reserved1,
	InputActionOrigin_Switch_Reserved2,
	InputActionOrigin_Switch_Reserved3,
	InputActionOrigin_Switch_Reserved4,
	InputActionOrigin_Switch_Reserved5,
	InputActionOrigin_Switch_Reserved6,
	InputActionOrigin_Switch_Reserved7,
	InputActionOrigin_Switch_Reserved8,
	InputActionOrigin_Switch_Reserved9,
	InputActionOrigin_Switch_Reserved10,

	// Switch JoyCon Specific
	InputActionOrigin_Switch_RightGyro_Move,  // Right JoyCon Gyro generally should correspond to Pro's single gyro
	InputActionOrigin_Switch_RightGyro_Pitch,  // Right JoyCon Gyro generally should correspond to Pro's single gyro
	InputActionOrigin_Switch_RightGyro_Yaw,  // Right JoyCon Gyro generally should correspond to Pro's single gyro
	InputActionOrigin_Switch_RightGyro_Roll,  // Right JoyCon Gyro generally should correspond to Pro's single gyro
	InputActionOrigin_Switch_LeftGyro_Move,
	InputActionOrigin_Switch_LeftGyro_Pitch,
	InputActionOrigin_Switch_LeftGyro_Yaw,
	InputActionOrigin_Switch_LeftGyro_Roll,
	InputActionOrigin_Switch_LeftGrip_Lower, // Left JoyCon SR Button
	InputActionOrigin_Switch_LeftGrip_Upper, // Left JoyCon SL Button
	InputActionOrigin_Switch_RightGrip_Lower,  // Right JoyCon SL Button
	InputActionOrigin_Switch_RightGrip_Upper,  // Right JoyCon SR Button
	InputActionOrigin_Switch_Reserved11,
	InputActionOrigin_Switch_Reserved12,
	InputActionOrigin_Switch_Reserved13,
	InputActionOrigin_Switch_Reserved14,
	InputActionOrigin_Switch_Reserved15,
	InputActionOrigin_Switch_Reserved16,
	InputActionOrigin_Switch_Reserved17,
	InputActionOrigin_Switch_Reserved18,
	InputActionOrigin_Switch_Reserved19,
	InputActionOrigin_Switch_Reserved20,
	
	// Added in SDK 1.51
	InputActionOrigin_PS5_X,
	InputActionOrigin_PS5_Circle,
	InputActionOrigin_PS5_Triangle,
	InputActionOrigin_PS5_Square,
	InputActionOrigin_PS5_LeftBumper,
	InputActionOrigin_PS5_RightBumper,
	InputActionOrigin_PS5_Option,	//Start
	InputActionOrigin_PS5_Create,		//Back
	InputActionOrigin_PS5_Mute,
	InputActionOrigin_PS5_LeftPad_Touch,
	InputActionOrigin_PS5_LeftPad_Swipe,
	InputActionOrigin_PS5_LeftPad_Click,
	InputActionOrigin_PS5_LeftPad_DPadNorth,
	InputActionOrigin_PS5_LeftPad_DPadSouth,
	InputActionOrigin_PS5_LeftPad_DPadWest,
	InputActionOrigin_PS5_LeftPad_DPadEast,
	InputActionOrigin_PS5_RightPad_Touch,
	InputActionOrigin_PS5_RightPad_Swipe,
	InputActionOrigin_PS5_RightPad_Click,
	InputActionOrigin_PS5_RightPad_DPadNorth,
	InputActionOrigin_PS5_RightPad_DPadSouth,
	InputActionOrigin_PS5_RightPad_DPadWest,
	InputActionOrigin_PS5_RightPad_DPadEast,
	InputActionOrigin_PS5_CenterPad_Touch,
	InputActionOrigin_PS5_CenterPad_Swipe,
	InputActionOrigin_PS5_CenterPad_Click,
	InputActionOrigin_PS5_CenterPad_DPadNorth,
	InputActionOrigin_PS5_CenterPad_DPadSouth,
	InputActionOrigin_PS5_CenterPad_DPadWest,
	InputActionOrigin_PS5_CenterPad_DPadEast,
	InputActionOrigin_PS5_LeftTrigger_Pull,
	InputActionOrigin_PS5_LeftTrigger_Click,
	InputActionOrigin_PS5_RightTrigger_Pull,
	InputActionOrigin_PS5_RightTrigger_Click,
	InputActionOrigin_PS5_LeftStick_Move,
	InputActionOrigin_PS5_LeftStick_Click,
	InputActionOrigin_PS5_LeftStick_DPadNorth,
	InputActionOrigin_PS5_LeftStick_DPadSouth,
	InputActionOrigin_PS5_LeftStick_DPadWest,
	InputActionOrigin_PS5_LeftStick_DPadEast,
	InputActionOrigin_PS5_RightStick_Move,
	InputActionOrigin_PS5_RightStick_Click,
	InputActionOrigin_PS5_RightStick_DPadNorth,
	InputActionOrigin_PS5_RightStick_DPadSouth,
	InputActionOrigin_PS5_RightStick_DPadWest,
	InputActionOrigin_PS5_RightStick_DPadEast,
	InputActionOrigin_PS5_DPad_North,
	InputActionOrigin_PS5_DPad_South,
	InputActionOrigin_PS5_DPad_West,
	InputActionOrigin_PS5_DPad_East,
	InputActionOrigin_PS5_Gyro_Move,
	InputActionOrigin_PS5_Gyro_Pitch,
	InputActionOrigin_PS5_Gyro_Yaw,
	InputActionOrigin_PS5_Gyro_Roll,
	InputActionOrigin_PS5_DPad_Move,
	InputActionOrigin_PS5_Reserved1,
	InputActionOrigin_PS5_Reserved2,
	InputActionOrigin_PS5_Reserved3,
	InputActionOrigin_PS5_Reserved4,
	InputActionOrigin_PS5_Reserved5,
	InputActionOrigin_PS5_Reserved6,
	InputActionOrigin_PS5_Reserved7,
	InputActionOrigin_PS5_Reserved8,
	InputActionOrigin_PS5_Reserved9,
	InputActionOrigin_PS5_Reserved10,
	InputActionOrigin_PS5_Reserved11,
	InputActionOrigin_PS5_Reserved12,
	InputActionOrigin_PS5_Reserved13,
	InputActionOrigin_PS5_Reserved14,
	InputActionOrigin_PS5_Reserved15,
	InputActionOrigin_PS5_Reserved16,
	InputActionOrigin_PS5_Reserved17,
	InputActionOrigin_PS5_Reserved18,
	InputActionOrigin_PS5_Reserved19,
	InputActionOrigin_PS5_Reserved20,

	// Added in SDK 1.53
	InputActionOrigin_SteamDeck_A,
	InputActionOrigin_SteamDeck_B,
	InputActionOrigin_SteamDeck_X,
	InputActionOrigin_SteamDeck_Y,
	InputActionOrigin_SteamDeck_L1,
	InputActionOrigin_SteamDeck_R1,
	InputActionOrigin_SteamDeck_Menu,
	InputActionOrigin_SteamDeck_View,
	InputActionOrigin_SteamDeck_LeftPad_Touch,
	InputActionOrigin_SteamDeck_LeftPad_Swipe,
	InputActionOrigin_SteamDeck_LeftPad_Click,
	InputActionOrigin_SteamDeck_LeftPad_DPadNorth,
	InputActionOrigin_SteamDeck_LeftPad_DPadSouth,
	InputActionOrigin_SteamDeck_LeftPad_DPadWest,
	InputActionOrigin_SteamDeck_LeftPad_DPadEast,
	InputActionOrigin_SteamDeck_RightPad_Touch,
	InputActionOrigin_SteamDeck_RightPad_Swipe,
	InputActionOrigin_SteamDeck_RightPad_Click,
	InputActionOrigin_SteamDeck_RightPad_DPadNorth,
	InputActionOrigin_SteamDeck_RightPad_DPadSouth,
	InputActionOrigin_SteamDeck_RightPad_DPadWest,
	InputActionOrigin_SteamDeck_RightPad_DPadEast,
	InputActionOrigin_SteamDeck_L2_SoftPull,
	InputActionOrigin_SteamDeck_L2,
	InputActionOrigin_SteamDeck_R2_SoftPull,
	InputActionOrigin_SteamDeck_R2,
	InputActionOrigin_SteamDeck_LeftStick_Move,
	InputActionOrigin_SteamDeck_L3,
	InputActionOrigin_SteamDeck_LeftStick_DPadNorth,
	InputActionOrigin_SteamDeck_LeftStick_DPadSouth,
	InputActionOrigin_SteamDeck_LeftStick_DPadWest,
	InputActionOrigin_SteamDeck_LeftStick_DPadEast,
	InputActionOrigin_SteamDeck_LeftStick_Touch,
	InputActionOrigin_SteamDeck_RightStick_Move,
	InputActionOrigin_SteamDeck_R3,
	InputActionOrigin_SteamDeck_RightStick_DPadNorth,
	InputActionOrigin_SteamDeck_RightStick_DPadSouth,
	InputActionOrigin_SteamDeck_RightStick_DPadWest,
	InputActionOrigin_SteamDeck_RightStick_DPadEast,
	InputActionOrigin_SteamDeck_RightStick_Touch,
	InputActionOrigin_SteamDeck_L4,
	InputActionOrigin_SteamDeck_R4,
	InputActionOrigin_SteamDeck_L5,
	InputActionOrigin_SteamDeck_R5,
	InputActionOrigin_SteamDeck_DPad_Move,
	InputActionOrigin_SteamDeck_DPad_North,
	InputActionOrigin_SteamDeck_DPad_South,
	InputActionOrigin_SteamDeck_DPad_West,
	InputActionOrigin_SteamDeck_DPad_East,
	InputActionOrigin_SteamDeck_Gyro_Move,
	InputActionOrigin_SteamDeck_Gyro_Pitch,
	InputActionOrigin_SteamDeck_Gyro_Yaw,
	InputActionOrigin_SteamDeck_Gyro_Roll,
	InputActionOrigin_SteamDeck_Reserved1,
	InputActionOrigin_SteamDeck_Reserved2,
	InputActionOrigin_SteamDeck_Reserved3,
	InputActionOrigin_SteamDeck_Reserved4,
	InputActionOrigin_SteamDeck_Reserved5,
	InputActionOrigin_SteamDeck_Reserved6,
	InputActionOrigin_SteamDeck_Reserved7,
	InputActionOrigin_SteamDeck_Reserved8,
	InputActionOrigin_SteamDeck_Reserved9,
	InputActionOrigin_SteamDeck_Reserved10,
	InputActionOrigin_SteamDeck_Reserved11,
	InputActionOrigin_SteamDeck_Reserved12,
	InputActionOrigin_SteamDeck_Reserved13,
	InputActionOrigin_SteamDeck_Reserved14,
	InputActionOrigin_SteamDeck_Reserved15,
	InputActionOrigin_SteamDeck_Reserved16,
	InputActionOrigin_SteamDeck_Reserved17,
	InputActionOrigin_SteamDeck_Reserved18,
	InputActionOrigin_SteamDeck_Reserved19,
	InputActionOrigin_SteamDeck_Reserved20,

	InputActionOrigin_Count, // If Steam has added support for new controllers origins will go here.
	InputActionOrigin_MaximumPossibleValue = 32767, // Origins are currently a maximum of 16 bits.
};

UENUM(BlueprintType)
enum class ESteamCoreXboxOrigin : uint8
{
	A = 0,
	B,
	X,
	Y,
	LeftBumper,
	RightBumper,
	Menu,
	View,
	LeftTrigger_Pull,
	LeftTrigger_Click,
	RightTrigger_Pull,
	RightTrigger_Click,
	LeftStick_Move,
	LeftStick_Click,
	LeftStick_DPadNorth,
	LeftStick_DPadSouth,
	LeftStick_DPadWest,
	LeftStick_DPadEast,
	RightStick_Move,
	RightStick_Click,
	RightStick_DPadNorth,
	RightStick_DPadSouth,
	RightStick_DPadWest,
	RightStick_DPadEast,
	DPad_North,
	DPad_South,
	DPad_West,
	DPad_East,
	Count,
};

UENUM(BlueprintType)
enum class ESteamCoreControllerPad : uint8
{
	Left = 0,
	Right
};

UENUM(BlueprintType)
enum class ESteamCoreInputType : uint8
{
	k_ESteamInputType_Unknown,
	k_ESteamInputType_SteamController,
	k_ESteamInputType_XBox360Controller,
	k_ESteamInputType_XBoxOneController,
	k_ESteamInputType_GenericGamepad,		// DirectInput controllers
	k_ESteamInputType_PS4Controller,
	k_ESteamInputType_AppleMFiController,	// Unused
	k_ESteamInputType_AndroidController,	// Unused
	k_ESteamInputType_SwitchJoyConPair,		// Unused
	k_ESteamInputType_SwitchJoyConSingle,	// Unused
	k_ESteamInputType_SwitchProController,
	k_ESteamInputType_MobileTouch,			// Steam Link App On-screen Virtual Controller
	k_ESteamInputType_PS3Controller,		// Currently uses PS4 Origins
	k_ESteamInputType_PS5Controller,		// Added in SDK 151
	k_ESteamInputType_SteamDeckController,	// Added in SDK 153
	k_ESteamInputType_Count,
	k_ESteamInputType_MaximumPossibleValue = 255,
};

UENUM(BlueprintType, meta = (Bitflags))
enum class ESteamCoreInputLEDFlag : uint8
{
	SetColor = 0,
	RestoreUserDefault
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FInputAnalogActionData
{
	GENERATED_BODY()
public:
	FInputAnalogActionData()
		: Mode(ESteamCoreInputSourceMode::None)
		  , X(0)
		  , Y(0)
		  , bActive(false)
	{
	}

#if ENABLE_STEAMCORE
	FInputAnalogActionData(const InputAnalogActionData_t& Data)
		: Mode(static_cast<ESteamCoreInputSourceMode>(Data.eMode))
		  , X(Data.x)
		  , Y(Data.y)
		  , bActive(Data.bActive)
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	ESteamCoreInputSourceMode Mode;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float X;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float Y;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	bool bActive;
};

USTRUCT(BlueprintType)
struct FInputDigitalActionData
{
	GENERATED_BODY()
public:
	FInputDigitalActionData()
		: bState(false)
		  , bActive(false)
	{
	}

#if ENABLE_STEAMCORE
	FInputDigitalActionData(const InputDigitalActionData_t& Data)
		: bState(Data.bState)
		  , bActive(Data.bActive)
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	bool bState;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	bool bActive;
};

USTRUCT(BlueprintType)
struct FInputMotionData
{
	GENERATED_BODY()
public:
	FInputMotionData()
		: RotQuatX(0)
		  , RotQuatY(0)
		  , RotQuatZ(0)
		  , RotQuatW(0)
		  , PosAccelX(0)
		  , PosAccelY(0)
		  , PosAccelZ(0)
		  , RotVelX(0)
		  , RotVelY(0)
		  , RotVelZ(0)
	{
	}

#if ENABLE_STEAMCORE
	FInputMotionData(const InputMotionData_t& Data)
		: RotQuatX(Data.rotQuatX)
		  , RotQuatY(Data.rotQuatY)
		  , RotQuatZ(Data.rotQuatZ)
		  , RotQuatW(Data.rotQuatW)
		  , PosAccelX(Data.posAccelX)
		  , PosAccelY(Data.posAccelY)
		  , PosAccelZ(Data.posAccelZ)
		  , RotVelX(Data.rotVelX)
		  , RotVelY(Data.rotVelY)
		  , RotVelZ(Data.rotVelZ)
	{
	}
#endif
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float RotQuatX;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float RotQuatY;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float RotQuatZ;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float RotQuatW;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float PosAccelX;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float PosAccelY;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float PosAccelZ;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float RotVelX;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float RotVelY;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float RotVelZ;
};

USTRUCT(BlueprintType)
struct STEAMCORE_API FInputHandle
{
	GENERATED_BODY()
public:
	FInputHandle()
		: m_Value(0)
	{
	}

	FInputHandle(uint64 value)
		: m_Value(value)
	{
	}

public:
	uint64 GetValue() const { return m_Value; }
	operator uint64() const { return m_Value; }
	operator uint64() { return m_Value; }
private:
	uint64 m_Value;
};

USTRUCT(BlueprintType)
struct STEAMCORE_API FInputActionSetHandle
{
	GENERATED_BODY()
public:
	FInputActionSetHandle()
		: m_Value(0)
	{
	}

	FInputActionSetHandle(uint64 value)
		: m_Value(value)
	{
	}

public:
	uint64 GetValue() const { return m_Value; }
	operator uint64() const { return m_Value; }
	operator uint64() { return m_Value; }
private:
	uint64 m_Value;
};

USTRUCT(BlueprintType)
struct STEAMCORE_API FInputDigitalActionHandle
{
	GENERATED_BODY()
public:
	FInputDigitalActionHandle()
		: m_Value(0)
	{
	}

	FInputDigitalActionHandle(uint64 value)
		: m_Value(value)
	{
	}

public:
	uint64 GetValue() const { return m_Value; }
	operator uint64() const { return m_Value; }
	operator uint64() { return m_Value; }
private:
	uint64 m_Value;
};

USTRUCT(BlueprintType)
struct STEAMCORE_API FInputAnalogActionHandle
{
	GENERATED_BODY()
public:
	FInputAnalogActionHandle()
		: m_Value(0)
	{
	}

	FInputAnalogActionHandle(uint64 value)
		: m_Value(value)
	{
	}

public:
	uint64 GetValue() const { return m_Value; }
	operator uint64() const { return m_Value; }
	operator uint64() { return m_Value; }
private:
	uint64 m_Value;
};
