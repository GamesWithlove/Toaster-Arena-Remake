/**
* Copyright (C) 2017-2025 eelDev AB
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

#if WITH_STEAMCORE
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

#if WITH_STEAMCORE
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

#if WITH_STEAMCORE
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
