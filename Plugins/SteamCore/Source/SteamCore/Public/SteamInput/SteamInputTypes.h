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
enum class ESteamCoreInputActionOrigin : uint8
{
	// Steam Controller
	None = 0,
	SteamController_A,
	SteamController_B,
	SteamController_X,
	SteamController_Y,
	SteamController_LeftBumper,
	SteamController_RightBumper,
	SteamController_LeftGrip,
	SteamController_RightGrip,
	SteamController_Start,
	SteamController_Back,
	SteamController_LeftPad_Touch,
	SteamController_LeftPad_Swipe,
	SteamController_LeftPad_Click,
	SteamController_LeftPad_DPadNorth,
	SteamController_LeftPad_DPadSouth,
	SteamController_LeftPad_DPadWest,
	SteamController_LeftPad_DPadEast,
	SteamController_RightPad_Touch,
	SteamController_RightPad_Swipe,
	SteamController_RightPad_Click,
	SteamController_RightPad_DPadNorth,
	SteamController_RightPad_DPadSouth,
	SteamController_RightPad_DPadWest,
	SteamController_RightPad_DPadEast,
	SteamController_LeftTrigger_Pull,
	SteamController_LeftTrigger_Click,
	SteamController_RightTrigger_Pull,
	SteamController_RightTrigger_Click,
	SteamController_LeftStick_Move,
	SteamController_LeftStick_Click,
	SteamController_LeftStick_DPadNorth,
	SteamController_LeftStick_DPadSouth,
	SteamController_LeftStick_DPadWest,
	SteamController_LeftStick_DPadEast,
	SteamController_Gyro_Move,
	SteamController_Gyro_Pitch,
	SteamController_Gyro_Yaw,
	SteamController_Gyro_Roll,
	SteamController_Reserved0,
	SteamController_Reserved1,
	SteamController_Reserved2,
	SteamController_Reserved3,
	SteamController_Reserved4,
	SteamController_Reserved5,
	SteamController_Reserved6,
	SteamController_Reserved7,
	SteamController_Reserved8,
	SteamController_Reserved9,
	SteamController_Reserved10,

	// PS4 Dual Shock
	PS4_X,
	PS4_Circle,
	PS4_Triangle,
	PS4_Square,
	PS4_LeftBumper,
	PS4_RightBumper,
	PS4_Options,
	PS4_Share,
	PS4_LeftPad_Touch,
	PS4_LeftPad_Swipe,
	PS4_LeftPad_Click,
	PS4_LeftPad_DPadNorth,
	PS4_LeftPad_DPadSouth,
	PS4_LeftPad_DPadWest,
	PS4_LeftPad_DPadEast,
	PS4_RightPad_Touch,
	PS4_RightPad_Swipe,
	PS4_RightPad_Click,
	PS4_RightPad_DPadNorth,
	PS4_RightPad_DPadSouth,
	PS4_RightPad_DPadWest,
	PS4_RightPad_DPadEast,
	PS4_CenterPad_Touch,
	PS4_CenterPad_Swipe,
	PS4_CenterPad_Click,
	PS4_CenterPad_DPadNorth,
	PS4_CenterPad_DPadSouth,
	PS4_CenterPad_DPadWest,
	PS4_CenterPad_DPadEast,
	PS4_LeftTrigger_Pull,
	PS4_LeftTrigger_Click,
	PS4_RightTrigger_Pull,
	PS4_RightTrigger_Click,
	PS4_LeftStick_Move,
	PS4_LeftStick_Click,
	PS4_LeftStick_DPadNorth,
	PS4_LeftStick_DPadSouth,
	PS4_LeftStick_DPadWest,
	PS4_LeftStick_DPadEast,
	PS4_RightStick_Move,
	PS4_RightStick_Click,
	PS4_RightStick_DPadNorth,
	PS4_RightStick_DPadSouth,
	PS4_RightStick_DPadWest,
	PS4_RightStick_DPadEast,
	PS4_DPad_North,
	PS4_DPad_South,
	PS4_DPad_West,
	PS4_DPad_East,
	PS4_Gyro_Move,
	PS4_Gyro_Pitch,
	PS4_Gyro_Yaw,
	PS4_Gyro_Roll,
	PS4_DPad_Move,
	PS4_Reserved1,
	PS4_Reserved2,
	PS4_Reserved3,
	PS4_Reserved4,
	PS4_Reserved5,
	PS4_Reserved6,
	PS4_Reserved7,
	PS4_Reserved8,
	PS4_Reserved9,
	PS4_Reserved10,

	// XBox One
	XBoxOne_A,
	XBoxOne_B,
	XBoxOne_X,
	XBoxOne_Y,
	XBoxOne_LeftBumper,
	XBoxOne_RightBumper,
	XBoxOne_Menu,
	XBoxOne_View,
	XBoxOne_LeftTrigger_Pull,
	XBoxOne_LeftTrigger_Click,
	XBoxOne_RightTrigger_Pull,
	XBoxOne_RightTrigger_Click,
	XBoxOne_LeftStick_Move,
	XBoxOne_LeftStick_Click,
	XBoxOne_LeftStick_DPadNorth,
	XBoxOne_LeftStick_DPadSouth,
	XBoxOne_LeftStick_DPadWest,
	XBoxOne_LeftStick_DPadEast,
	XBoxOne_RightStick_Move,
	XBoxOne_RightStick_Click,
	XBoxOne_RightStick_DPadNorth,
	XBoxOne_RightStick_DPadSouth,
	XBoxOne_RightStick_DPadWest,
	XBoxOne_RightStick_DPadEast,
	XBoxOne_DPad_North,
	XBoxOne_DPad_South,
	XBoxOne_DPad_West,
	XBoxOne_DPad_East,
	XBoxOne_DPad_Move,
	XBoxOne_Reserved1,
	XBoxOne_Reserved2,
	XBoxOne_Reserved3,
	XBoxOne_Reserved4,
	XBoxOne_Reserved5,
	XBoxOne_Reserved6,
	XBoxOne_Reserved7,
	XBoxOne_Reserved8,
	XBoxOne_Reserved9,
	XBoxOne_Reserved10,

	// XBox 360
	XBox360_A,
	XBox360_B,
	XBox360_X,
	XBox360_Y,
	XBox360_LeftBumper,
	XBox360_RightBumper,
	XBox360_Start,
	XBox360_Back,
	XBox360_LeftTrigger_Pull,
	XBox360_LeftTrigger_Click,
	XBox360_RightTrigger_Pull,
	XBox360_RightTrigger_Click,
	XBox360_LeftStick_Move,
	XBox360_LeftStick_Click,
	XBox360_LeftStick_DPadNorth,
	XBox360_LeftStick_DPadSouth,
	XBox360_LeftStick_DPadWest,
	XBox360_LeftStick_DPadEast,
	XBox360_RightStick_Move,
	XBox360_RightStick_Click,
	XBox360_RightStick_DPadNorth,
	XBox360_RightStick_DPadSouth,
	XBox360_RightStick_DPadWest,
	XBox360_RightStick_DPadEast,
	XBox360_DPad_North,
	XBox360_DPad_South,
	XBox360_DPad_West,
	XBox360_DPad_East,
	XBox360_DPad_Move,
	XBox360_Reserved1,
	XBox360_Reserved2,
	XBox360_Reserved3,
	XBox360_Reserved4,
	XBox360_Reserved5,
	XBox360_Reserved6,
	XBox360_Reserved7,
	XBox360_Reserved8,
	XBox360_Reserved9,
	XBox360_Reserved10,

	// Switch - Pro or Joycons used as a single input device.
	// This does not apply to a single joycon
	Switch_A,
	Switch_B,
	Switch_X,
	Switch_Y,
	Switch_LeftBumper,
	Switch_RightBumper,
	Switch_Plus,
	Switch_Minus,
	Switch_Capture,
	Switch_LeftTrigger_Pull,
	Switch_LeftTrigger_Click,
	Switch_RightTrigger_Pull,
	Switch_RightTrigger_Click,
	Switch_LeftStick_Move,
	Switch_LeftStick_Click,
	Switch_LeftStick_DPadNorth,
	Switch_LeftStick_DPadSouth,
	Switch_LeftStick_DPadWest,
	Switch_LeftStick_DPadEast,
	Switch_RightStick_Move,
	Switch_RightStick_Click,
	Switch_RightStick_DPadNorth,
	Switch_RightStick_DPadSouth,
	Switch_RightStick_DPadWest,
	Switch_RightStick_DPadEast,
	Switch_DPad_North,
	Switch_DPad_South,
	Switch_DPad_West,
	Switch_DPad_East,
	Switch_ProGyro_Move,
	Switch_ProGyro_Pitch,
	Switch_ProGyro_Yaw,
	Switch_ProGyro_Roll,
	Switch_DPad_Move,
	Switch_Reserved1,
	Switch_Reserved2,
	Switch_Reserved3,
	Switch_Reserved4,
	Switch_Reserved5,
	Switch_Reserved6,
	Switch_Reserved7,
	Switch_Reserved8,
	Switch_Reserved9,
	Switch_Reserved10,

	// Switch JoyCon Specific
	Switch_RightGyro_Move,
	Switch_RightGyro_Pitch,
	Switch_RightGyro_Yaw,
	Switch_RightGyro_Roll,
	Switch_LeftGyro_Move,
	Switch_LeftGyro_Pitch,
	Switch_LeftGyro_Yaw,
	Switch_LeftGyro_Roll,
	Switch_LeftGrip_Lower,
	Switch_LeftGrip_Upper,
	Switch_RightGrip_Lower,
	Switch_RightGrip_Upper,
	Switch_Reserved11,
	Switch_Reserved12,
	Switch_Reserved13,
	Switch_Reserved14,
	Switch_Reserved15,
	Switch_Reserved16,
	Switch_Reserved17,
	Switch_Reserved18
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
	Unknown = 0,
	SteamController,
	XBox360Controller,
	XBoxOneController,
	GenericGamepad,
	PS4Controller,
	AppleMFiController,
	AndroidController,
	SwitchJoyConPair,
	SwitchJoyConSingle,
	SwitchProController,
	MobileTouch,
	PS3Controller,
	Count,
	MaximumPossibleValue = 255
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

	FInputAnalogActionData(const InputAnalogActionData_t& data)
		: Mode(static_cast<ESteamCoreInputSourceMode>(data.eMode))
		  , X(data.x)
		  , Y(data.y)
		  , bActive(data.bActive)
	{
	}
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

	FInputDigitalActionData(const InputDigitalActionData_t& data)
		: bState(data.bState)
		  , bActive(data.bActive)
	{
	}
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

	FInputMotionData(const InputMotionData_t& data)
		: RotQuatX(data.rotQuatX)
		  , RotQuatY(data.rotQuatY)
		  , RotQuatZ(data.rotQuatZ)
		  , RotQuatW(data.rotQuatW)
		  , PosAccelX(data.posAccelX)
		  , PosAccelY(data.posAccelY)
		  , PosAccelZ(data.posAccelZ)
		  , RotVelX(data.rotVelX)
		  , RotVelY(data.rotVelY)
		  , RotVelZ(data.rotVelZ)
	{
	}
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
