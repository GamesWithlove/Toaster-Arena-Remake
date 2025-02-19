// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamInput/SteamInputTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamInputTypes() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputSource();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputType();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionSetHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionData();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionData();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputMotionData();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreInputSource;
	static UEnum* ESteamCoreInputSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreInputSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamCoreInputSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputSource, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputSource"));
		}
		return Z_Registration_Info_UEnum_ESteamCoreInputSource.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputSource>()
	{
		return ESteamCoreInputSource_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Statics::Enumerators[] = {
		{ "ESteamCoreInputSource::None", (int64)ESteamCoreInputSource::None },
		{ "ESteamCoreInputSource::LeftTrackpad", (int64)ESteamCoreInputSource::LeftTrackpad },
		{ "ESteamCoreInputSource::RightTrackpad", (int64)ESteamCoreInputSource::RightTrackpad },
		{ "ESteamCoreInputSource::Joystick", (int64)ESteamCoreInputSource::Joystick },
		{ "ESteamCoreInputSource::ABXY", (int64)ESteamCoreInputSource::ABXY },
		{ "ESteamCoreInputSource::Switch", (int64)ESteamCoreInputSource::Switch },
		{ "ESteamCoreInputSource::LeftTrigger", (int64)ESteamCoreInputSource::LeftTrigger },
		{ "ESteamCoreInputSource::RightTrigger", (int64)ESteamCoreInputSource::RightTrigger },
		{ "ESteamCoreInputSource::LeftBumper", (int64)ESteamCoreInputSource::LeftBumper },
		{ "ESteamCoreInputSource::RightBumper", (int64)ESteamCoreInputSource::RightBumper },
		{ "ESteamCoreInputSource::Gyro", (int64)ESteamCoreInputSource::Gyro },
		{ "ESteamCoreInputSource::CenterTrackpad", (int64)ESteamCoreInputSource::CenterTrackpad },
		{ "ESteamCoreInputSource::RightJoystick", (int64)ESteamCoreInputSource::RightJoystick },
		{ "ESteamCoreInputSource::DPad", (int64)ESteamCoreInputSource::DPad },
		{ "ESteamCoreInputSource::Key", (int64)ESteamCoreInputSource::Key },
		{ "ESteamCoreInputSource::Mouse", (int64)ESteamCoreInputSource::Mouse },
		{ "ESteamCoreInputSource::LeftGyro", (int64)ESteamCoreInputSource::LeftGyro },
		{ "ESteamCoreInputSource::Count", (int64)ESteamCoreInputSource::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Statics::Enum_MetaDataParams[] = {
		{ "ABXY.Name", "ESteamCoreInputSource::ABXY" },
		{ "BlueprintType", "true" },
		{ "CenterTrackpad.Name", "ESteamCoreInputSource::CenterTrackpad" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "Count.Name", "ESteamCoreInputSource::Count" },
		{ "DPad.Name", "ESteamCoreInputSource::DPad" },
		{ "Gyro.Name", "ESteamCoreInputSource::Gyro" },
		{ "Joystick.Name", "ESteamCoreInputSource::Joystick" },
		{ "Key.Name", "ESteamCoreInputSource::Key" },
		{ "LeftBumper.Name", "ESteamCoreInputSource::LeftBumper" },
		{ "LeftGyro.Name", "ESteamCoreInputSource::LeftGyro" },
		{ "LeftTrackpad.Name", "ESteamCoreInputSource::LeftTrackpad" },
		{ "LeftTrigger.Name", "ESteamCoreInputSource::LeftTrigger" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "Mouse.Name", "ESteamCoreInputSource::Mouse" },
		{ "None.Name", "ESteamCoreInputSource::None" },
		{ "RightBumper.Name", "ESteamCoreInputSource::RightBumper" },
		{ "RightJoystick.Name", "ESteamCoreInputSource::RightJoystick" },
		{ "RightTrackpad.Name", "ESteamCoreInputSource::RightTrackpad" },
		{ "RightTrigger.Name", "ESteamCoreInputSource::RightTrigger" },
		{ "Switch.Name", "ESteamCoreInputSource::Switch" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamCoreInputSource",
		"ESteamCoreInputSource",
		Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputSource()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreInputSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreInputSource.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamCoreInputSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreInputSourceMode;
	static UEnum* ESteamCoreInputSourceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreInputSourceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamCoreInputSourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputSourceMode"));
		}
		return Z_Registration_Info_UEnum_ESteamCoreInputSourceMode.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputSourceMode>()
	{
		return ESteamCoreInputSourceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Statics::Enumerators[] = {
		{ "ESteamCoreInputSourceMode::None", (int64)ESteamCoreInputSourceMode::None },
		{ "ESteamCoreInputSourceMode::Dpad", (int64)ESteamCoreInputSourceMode::Dpad },
		{ "ESteamCoreInputSourceMode::Buttons", (int64)ESteamCoreInputSourceMode::Buttons },
		{ "ESteamCoreInputSourceMode::FourButtons", (int64)ESteamCoreInputSourceMode::FourButtons },
		{ "ESteamCoreInputSourceMode::AbsoluteMouse", (int64)ESteamCoreInputSourceMode::AbsoluteMouse },
		{ "ESteamCoreInputSourceMode::RelativeMouse", (int64)ESteamCoreInputSourceMode::RelativeMouse },
		{ "ESteamCoreInputSourceMode::JoystickMove", (int64)ESteamCoreInputSourceMode::JoystickMove },
		{ "ESteamCoreInputSourceMode::JoystickMouse", (int64)ESteamCoreInputSourceMode::JoystickMouse },
		{ "ESteamCoreInputSourceMode::JoystickCamera", (int64)ESteamCoreInputSourceMode::JoystickCamera },
		{ "ESteamCoreInputSourceMode::ScrollWheel", (int64)ESteamCoreInputSourceMode::ScrollWheel },
		{ "ESteamCoreInputSourceMode::Trigger", (int64)ESteamCoreInputSourceMode::Trigger },
		{ "ESteamCoreInputSourceMode::TouchMenu", (int64)ESteamCoreInputSourceMode::TouchMenu },
		{ "ESteamCoreInputSourceMode::MouseJoystick", (int64)ESteamCoreInputSourceMode::MouseJoystick },
		{ "ESteamCoreInputSourceMode::MouseRegion", (int64)ESteamCoreInputSourceMode::MouseRegion },
		{ "ESteamCoreInputSourceMode::RadialMenu", (int64)ESteamCoreInputSourceMode::RadialMenu },
		{ "ESteamCoreInputSourceMode::SingleButton", (int64)ESteamCoreInputSourceMode::SingleButton },
		{ "ESteamCoreInputSourceMode::Switches", (int64)ESteamCoreInputSourceMode::Switches },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Statics::Enum_MetaDataParams[] = {
		{ "AbsoluteMouse.Name", "ESteamCoreInputSourceMode::AbsoluteMouse" },
		{ "BlueprintType", "true" },
		{ "Buttons.Name", "ESteamCoreInputSourceMode::Buttons" },
		{ "Dpad.Name", "ESteamCoreInputSourceMode::Dpad" },
		{ "FourButtons.Name", "ESteamCoreInputSourceMode::FourButtons" },
		{ "JoystickCamera.Name", "ESteamCoreInputSourceMode::JoystickCamera" },
		{ "JoystickMouse.Name", "ESteamCoreInputSourceMode::JoystickMouse" },
		{ "JoystickMove.Name", "ESteamCoreInputSourceMode::JoystickMove" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "MouseJoystick.Name", "ESteamCoreInputSourceMode::MouseJoystick" },
		{ "MouseRegion.Name", "ESteamCoreInputSourceMode::MouseRegion" },
		{ "None.Name", "ESteamCoreInputSourceMode::None" },
		{ "RadialMenu.Name", "ESteamCoreInputSourceMode::RadialMenu" },
		{ "RelativeMouse.Name", "ESteamCoreInputSourceMode::RelativeMouse" },
		{ "ScrollWheel.Name", "ESteamCoreInputSourceMode::ScrollWheel" },
		{ "SingleButton.Name", "ESteamCoreInputSourceMode::SingleButton" },
		{ "Switches.Name", "ESteamCoreInputSourceMode::Switches" },
		{ "TouchMenu.Name", "ESteamCoreInputSourceMode::TouchMenu" },
		{ "Trigger.Name", "ESteamCoreInputSourceMode::Trigger" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamCoreInputSourceMode",
		"ESteamCoreInputSourceMode",
		Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreInputSourceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreInputSourceMode.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamCoreInputSourceMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreInputActionOrigin;
	static UEnum* ESteamCoreInputActionOrigin_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreInputActionOrigin.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamCoreInputActionOrigin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputActionOrigin"));
		}
		return Z_Registration_Info_UEnum_ESteamCoreInputActionOrigin.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputActionOrigin>()
	{
		return ESteamCoreInputActionOrigin_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin_Statics::Enumerators[] = {
		{ "InputActionOrigin_None", (int64)InputActionOrigin_None },
		{ "InputActionOrigin_SteamController_A", (int64)InputActionOrigin_SteamController_A },
		{ "InputActionOrigin_SteamController_B", (int64)InputActionOrigin_SteamController_B },
		{ "InputActionOrigin_SteamController_X", (int64)InputActionOrigin_SteamController_X },
		{ "InputActionOrigin_SteamController_Y", (int64)InputActionOrigin_SteamController_Y },
		{ "InputActionOrigin_SteamController_LeftBumper", (int64)InputActionOrigin_SteamController_LeftBumper },
		{ "InputActionOrigin_SteamController_RightBumper", (int64)InputActionOrigin_SteamController_RightBumper },
		{ "InputActionOrigin_SteamController_LeftGrip", (int64)InputActionOrigin_SteamController_LeftGrip },
		{ "InputActionOrigin_SteamController_RightGrip", (int64)InputActionOrigin_SteamController_RightGrip },
		{ "InputActionOrigin_SteamController_Start", (int64)InputActionOrigin_SteamController_Start },
		{ "InputActionOrigin_SteamController_Back", (int64)InputActionOrigin_SteamController_Back },
		{ "InputActionOrigin_SteamController_LeftPad_Touch", (int64)InputActionOrigin_SteamController_LeftPad_Touch },
		{ "InputActionOrigin_SteamController_LeftPad_Swipe", (int64)InputActionOrigin_SteamController_LeftPad_Swipe },
		{ "InputActionOrigin_SteamController_LeftPad_Click", (int64)InputActionOrigin_SteamController_LeftPad_Click },
		{ "InputActionOrigin_SteamController_LeftPad_DPadNorth", (int64)InputActionOrigin_SteamController_LeftPad_DPadNorth },
		{ "InputActionOrigin_SteamController_LeftPad_DPadSouth", (int64)InputActionOrigin_SteamController_LeftPad_DPadSouth },
		{ "InputActionOrigin_SteamController_LeftPad_DPadWest", (int64)InputActionOrigin_SteamController_LeftPad_DPadWest },
		{ "InputActionOrigin_SteamController_LeftPad_DPadEast", (int64)InputActionOrigin_SteamController_LeftPad_DPadEast },
		{ "InputActionOrigin_SteamController_RightPad_Touch", (int64)InputActionOrigin_SteamController_RightPad_Touch },
		{ "InputActionOrigin_SteamController_RightPad_Swipe", (int64)InputActionOrigin_SteamController_RightPad_Swipe },
		{ "InputActionOrigin_SteamController_RightPad_Click", (int64)InputActionOrigin_SteamController_RightPad_Click },
		{ "InputActionOrigin_SteamController_RightPad_DPadNorth", (int64)InputActionOrigin_SteamController_RightPad_DPadNorth },
		{ "InputActionOrigin_SteamController_RightPad_DPadSouth", (int64)InputActionOrigin_SteamController_RightPad_DPadSouth },
		{ "InputActionOrigin_SteamController_RightPad_DPadWest", (int64)InputActionOrigin_SteamController_RightPad_DPadWest },
		{ "InputActionOrigin_SteamController_RightPad_DPadEast", (int64)InputActionOrigin_SteamController_RightPad_DPadEast },
		{ "InputActionOrigin_SteamController_LeftTrigger_Pull", (int64)InputActionOrigin_SteamController_LeftTrigger_Pull },
		{ "InputActionOrigin_SteamController_LeftTrigger_Click", (int64)InputActionOrigin_SteamController_LeftTrigger_Click },
		{ "InputActionOrigin_SteamController_RightTrigger_Pull", (int64)InputActionOrigin_SteamController_RightTrigger_Pull },
		{ "InputActionOrigin_SteamController_RightTrigger_Click", (int64)InputActionOrigin_SteamController_RightTrigger_Click },
		{ "InputActionOrigin_SteamController_LeftStick_Move", (int64)InputActionOrigin_SteamController_LeftStick_Move },
		{ "InputActionOrigin_SteamController_LeftStick_Click", (int64)InputActionOrigin_SteamController_LeftStick_Click },
		{ "InputActionOrigin_SteamController_LeftStick_DPadNorth", (int64)InputActionOrigin_SteamController_LeftStick_DPadNorth },
		{ "InputActionOrigin_SteamController_LeftStick_DPadSouth", (int64)InputActionOrigin_SteamController_LeftStick_DPadSouth },
		{ "InputActionOrigin_SteamController_LeftStick_DPadWest", (int64)InputActionOrigin_SteamController_LeftStick_DPadWest },
		{ "InputActionOrigin_SteamController_LeftStick_DPadEast", (int64)InputActionOrigin_SteamController_LeftStick_DPadEast },
		{ "InputActionOrigin_SteamController_Gyro_Move", (int64)InputActionOrigin_SteamController_Gyro_Move },
		{ "InputActionOrigin_SteamController_Gyro_Pitch", (int64)InputActionOrigin_SteamController_Gyro_Pitch },
		{ "InputActionOrigin_SteamController_Gyro_Yaw", (int64)InputActionOrigin_SteamController_Gyro_Yaw },
		{ "InputActionOrigin_SteamController_Gyro_Roll", (int64)InputActionOrigin_SteamController_Gyro_Roll },
		{ "InputActionOrigin_SteamController_Reserved0", (int64)InputActionOrigin_SteamController_Reserved0 },
		{ "InputActionOrigin_SteamController_Reserved1", (int64)InputActionOrigin_SteamController_Reserved1 },
		{ "InputActionOrigin_SteamController_Reserved2", (int64)InputActionOrigin_SteamController_Reserved2 },
		{ "InputActionOrigin_SteamController_Reserved3", (int64)InputActionOrigin_SteamController_Reserved3 },
		{ "InputActionOrigin_SteamController_Reserved4", (int64)InputActionOrigin_SteamController_Reserved4 },
		{ "InputActionOrigin_SteamController_Reserved5", (int64)InputActionOrigin_SteamController_Reserved5 },
		{ "InputActionOrigin_SteamController_Reserved6", (int64)InputActionOrigin_SteamController_Reserved6 },
		{ "InputActionOrigin_SteamController_Reserved7", (int64)InputActionOrigin_SteamController_Reserved7 },
		{ "InputActionOrigin_SteamController_Reserved8", (int64)InputActionOrigin_SteamController_Reserved8 },
		{ "InputActionOrigin_SteamController_Reserved9", (int64)InputActionOrigin_SteamController_Reserved9 },
		{ "InputActionOrigin_SteamController_Reserved10", (int64)InputActionOrigin_SteamController_Reserved10 },
		{ "InputActionOrigin_PS4_X", (int64)InputActionOrigin_PS4_X },
		{ "InputActionOrigin_PS4_Circle", (int64)InputActionOrigin_PS4_Circle },
		{ "InputActionOrigin_PS4_Triangle", (int64)InputActionOrigin_PS4_Triangle },
		{ "InputActionOrigin_PS4_Square", (int64)InputActionOrigin_PS4_Square },
		{ "InputActionOrigin_PS4_LeftBumper", (int64)InputActionOrigin_PS4_LeftBumper },
		{ "InputActionOrigin_PS4_RightBumper", (int64)InputActionOrigin_PS4_RightBumper },
		{ "InputActionOrigin_PS4_Options", (int64)InputActionOrigin_PS4_Options },
		{ "InputActionOrigin_PS4_Share", (int64)InputActionOrigin_PS4_Share },
		{ "InputActionOrigin_PS4_LeftPad_Touch", (int64)InputActionOrigin_PS4_LeftPad_Touch },
		{ "InputActionOrigin_PS4_LeftPad_Swipe", (int64)InputActionOrigin_PS4_LeftPad_Swipe },
		{ "InputActionOrigin_PS4_LeftPad_Click", (int64)InputActionOrigin_PS4_LeftPad_Click },
		{ "InputActionOrigin_PS4_LeftPad_DPadNorth", (int64)InputActionOrigin_PS4_LeftPad_DPadNorth },
		{ "InputActionOrigin_PS4_LeftPad_DPadSouth", (int64)InputActionOrigin_PS4_LeftPad_DPadSouth },
		{ "InputActionOrigin_PS4_LeftPad_DPadWest", (int64)InputActionOrigin_PS4_LeftPad_DPadWest },
		{ "InputActionOrigin_PS4_LeftPad_DPadEast", (int64)InputActionOrigin_PS4_LeftPad_DPadEast },
		{ "InputActionOrigin_PS4_RightPad_Touch", (int64)InputActionOrigin_PS4_RightPad_Touch },
		{ "InputActionOrigin_PS4_RightPad_Swipe", (int64)InputActionOrigin_PS4_RightPad_Swipe },
		{ "InputActionOrigin_PS4_RightPad_Click", (int64)InputActionOrigin_PS4_RightPad_Click },
		{ "InputActionOrigin_PS4_RightPad_DPadNorth", (int64)InputActionOrigin_PS4_RightPad_DPadNorth },
		{ "InputActionOrigin_PS4_RightPad_DPadSouth", (int64)InputActionOrigin_PS4_RightPad_DPadSouth },
		{ "InputActionOrigin_PS4_RightPad_DPadWest", (int64)InputActionOrigin_PS4_RightPad_DPadWest },
		{ "InputActionOrigin_PS4_RightPad_DPadEast", (int64)InputActionOrigin_PS4_RightPad_DPadEast },
		{ "InputActionOrigin_PS4_CenterPad_Touch", (int64)InputActionOrigin_PS4_CenterPad_Touch },
		{ "InputActionOrigin_PS4_CenterPad_Swipe", (int64)InputActionOrigin_PS4_CenterPad_Swipe },
		{ "InputActionOrigin_PS4_CenterPad_Click", (int64)InputActionOrigin_PS4_CenterPad_Click },
		{ "InputActionOrigin_PS4_CenterPad_DPadNorth", (int64)InputActionOrigin_PS4_CenterPad_DPadNorth },
		{ "InputActionOrigin_PS4_CenterPad_DPadSouth", (int64)InputActionOrigin_PS4_CenterPad_DPadSouth },
		{ "InputActionOrigin_PS4_CenterPad_DPadWest", (int64)InputActionOrigin_PS4_CenterPad_DPadWest },
		{ "InputActionOrigin_PS4_CenterPad_DPadEast", (int64)InputActionOrigin_PS4_CenterPad_DPadEast },
		{ "InputActionOrigin_PS4_LeftTrigger_Pull", (int64)InputActionOrigin_PS4_LeftTrigger_Pull },
		{ "InputActionOrigin_PS4_LeftTrigger_Click", (int64)InputActionOrigin_PS4_LeftTrigger_Click },
		{ "InputActionOrigin_PS4_RightTrigger_Pull", (int64)InputActionOrigin_PS4_RightTrigger_Pull },
		{ "InputActionOrigin_PS4_RightTrigger_Click", (int64)InputActionOrigin_PS4_RightTrigger_Click },
		{ "InputActionOrigin_PS4_LeftStick_Move", (int64)InputActionOrigin_PS4_LeftStick_Move },
		{ "InputActionOrigin_PS4_LeftStick_Click", (int64)InputActionOrigin_PS4_LeftStick_Click },
		{ "InputActionOrigin_PS4_LeftStick_DPadNorth", (int64)InputActionOrigin_PS4_LeftStick_DPadNorth },
		{ "InputActionOrigin_PS4_LeftStick_DPadSouth", (int64)InputActionOrigin_PS4_LeftStick_DPadSouth },
		{ "InputActionOrigin_PS4_LeftStick_DPadWest", (int64)InputActionOrigin_PS4_LeftStick_DPadWest },
		{ "InputActionOrigin_PS4_LeftStick_DPadEast", (int64)InputActionOrigin_PS4_LeftStick_DPadEast },
		{ "InputActionOrigin_PS4_RightStick_Move", (int64)InputActionOrigin_PS4_RightStick_Move },
		{ "InputActionOrigin_PS4_RightStick_Click", (int64)InputActionOrigin_PS4_RightStick_Click },
		{ "InputActionOrigin_PS4_RightStick_DPadNorth", (int64)InputActionOrigin_PS4_RightStick_DPadNorth },
		{ "InputActionOrigin_PS4_RightStick_DPadSouth", (int64)InputActionOrigin_PS4_RightStick_DPadSouth },
		{ "InputActionOrigin_PS4_RightStick_DPadWest", (int64)InputActionOrigin_PS4_RightStick_DPadWest },
		{ "InputActionOrigin_PS4_RightStick_DPadEast", (int64)InputActionOrigin_PS4_RightStick_DPadEast },
		{ "InputActionOrigin_PS4_DPad_North", (int64)InputActionOrigin_PS4_DPad_North },
		{ "InputActionOrigin_PS4_DPad_South", (int64)InputActionOrigin_PS4_DPad_South },
		{ "InputActionOrigin_PS4_DPad_West", (int64)InputActionOrigin_PS4_DPad_West },
		{ "InputActionOrigin_PS4_DPad_East", (int64)InputActionOrigin_PS4_DPad_East },
		{ "InputActionOrigin_PS4_Gyro_Move", (int64)InputActionOrigin_PS4_Gyro_Move },
		{ "InputActionOrigin_PS4_Gyro_Pitch", (int64)InputActionOrigin_PS4_Gyro_Pitch },
		{ "InputActionOrigin_PS4_Gyro_Yaw", (int64)InputActionOrigin_PS4_Gyro_Yaw },
		{ "InputActionOrigin_PS4_Gyro_Roll", (int64)InputActionOrigin_PS4_Gyro_Roll },
		{ "InputActionOrigin_PS4_DPad_Move", (int64)InputActionOrigin_PS4_DPad_Move },
		{ "InputActionOrigin_PS4_Reserved1", (int64)InputActionOrigin_PS4_Reserved1 },
		{ "InputActionOrigin_PS4_Reserved2", (int64)InputActionOrigin_PS4_Reserved2 },
		{ "InputActionOrigin_PS4_Reserved3", (int64)InputActionOrigin_PS4_Reserved3 },
		{ "InputActionOrigin_PS4_Reserved4", (int64)InputActionOrigin_PS4_Reserved4 },
		{ "InputActionOrigin_PS4_Reserved5", (int64)InputActionOrigin_PS4_Reserved5 },
		{ "InputActionOrigin_PS4_Reserved6", (int64)InputActionOrigin_PS4_Reserved6 },
		{ "InputActionOrigin_PS4_Reserved7", (int64)InputActionOrigin_PS4_Reserved7 },
		{ "InputActionOrigin_PS4_Reserved8", (int64)InputActionOrigin_PS4_Reserved8 },
		{ "InputActionOrigin_PS4_Reserved9", (int64)InputActionOrigin_PS4_Reserved9 },
		{ "InputActionOrigin_PS4_Reserved10", (int64)InputActionOrigin_PS4_Reserved10 },
		{ "InputActionOrigin_XBoxOne_A", (int64)InputActionOrigin_XBoxOne_A },
		{ "InputActionOrigin_XBoxOne_B", (int64)InputActionOrigin_XBoxOne_B },
		{ "InputActionOrigin_XBoxOne_X", (int64)InputActionOrigin_XBoxOne_X },
		{ "InputActionOrigin_XBoxOne_Y", (int64)InputActionOrigin_XBoxOne_Y },
		{ "InputActionOrigin_XBoxOne_LeftBumper", (int64)InputActionOrigin_XBoxOne_LeftBumper },
		{ "InputActionOrigin_XBoxOne_RightBumper", (int64)InputActionOrigin_XBoxOne_RightBumper },
		{ "InputActionOrigin_XBoxOne_Menu", (int64)InputActionOrigin_XBoxOne_Menu },
		{ "InputActionOrigin_XBoxOne_View", (int64)InputActionOrigin_XBoxOne_View },
		{ "InputActionOrigin_XBoxOne_LeftTrigger_Pull", (int64)InputActionOrigin_XBoxOne_LeftTrigger_Pull },
		{ "InputActionOrigin_XBoxOne_LeftTrigger_Click", (int64)InputActionOrigin_XBoxOne_LeftTrigger_Click },
		{ "InputActionOrigin_XBoxOne_RightTrigger_Pull", (int64)InputActionOrigin_XBoxOne_RightTrigger_Pull },
		{ "InputActionOrigin_XBoxOne_RightTrigger_Click", (int64)InputActionOrigin_XBoxOne_RightTrigger_Click },
		{ "InputActionOrigin_XBoxOne_LeftStick_Move", (int64)InputActionOrigin_XBoxOne_LeftStick_Move },
		{ "InputActionOrigin_XBoxOne_LeftStick_Click", (int64)InputActionOrigin_XBoxOne_LeftStick_Click },
		{ "InputActionOrigin_XBoxOne_LeftStick_DPadNorth", (int64)InputActionOrigin_XBoxOne_LeftStick_DPadNorth },
		{ "InputActionOrigin_XBoxOne_LeftStick_DPadSouth", (int64)InputActionOrigin_XBoxOne_LeftStick_DPadSouth },
		{ "InputActionOrigin_XBoxOne_LeftStick_DPadWest", (int64)InputActionOrigin_XBoxOne_LeftStick_DPadWest },
		{ "InputActionOrigin_XBoxOne_LeftStick_DPadEast", (int64)InputActionOrigin_XBoxOne_LeftStick_DPadEast },
		{ "InputActionOrigin_XBoxOne_RightStick_Move", (int64)InputActionOrigin_XBoxOne_RightStick_Move },
		{ "InputActionOrigin_XBoxOne_RightStick_Click", (int64)InputActionOrigin_XBoxOne_RightStick_Click },
		{ "InputActionOrigin_XBoxOne_RightStick_DPadNorth", (int64)InputActionOrigin_XBoxOne_RightStick_DPadNorth },
		{ "InputActionOrigin_XBoxOne_RightStick_DPadSouth", (int64)InputActionOrigin_XBoxOne_RightStick_DPadSouth },
		{ "InputActionOrigin_XBoxOne_RightStick_DPadWest", (int64)InputActionOrigin_XBoxOne_RightStick_DPadWest },
		{ "InputActionOrigin_XBoxOne_RightStick_DPadEast", (int64)InputActionOrigin_XBoxOne_RightStick_DPadEast },
		{ "InputActionOrigin_XBoxOne_DPad_North", (int64)InputActionOrigin_XBoxOne_DPad_North },
		{ "InputActionOrigin_XBoxOne_DPad_South", (int64)InputActionOrigin_XBoxOne_DPad_South },
		{ "InputActionOrigin_XBoxOne_DPad_West", (int64)InputActionOrigin_XBoxOne_DPad_West },
		{ "InputActionOrigin_XBoxOne_DPad_East", (int64)InputActionOrigin_XBoxOne_DPad_East },
		{ "InputActionOrigin_XBoxOne_DPad_Move", (int64)InputActionOrigin_XBoxOne_DPad_Move },
		{ "InputActionOrigin_XBoxOne_LeftGrip_Lower", (int64)InputActionOrigin_XBoxOne_LeftGrip_Lower },
		{ "InputActionOrigin_XBoxOne_LeftGrip_Upper", (int64)InputActionOrigin_XBoxOne_LeftGrip_Upper },
		{ "InputActionOrigin_XBoxOne_RightGrip_Lower", (int64)InputActionOrigin_XBoxOne_RightGrip_Lower },
		{ "InputActionOrigin_XBoxOne_RightGrip_Upper", (int64)InputActionOrigin_XBoxOne_RightGrip_Upper },
		{ "InputActionOrigin_XBoxOne_Share", (int64)InputActionOrigin_XBoxOne_Share },
		{ "InputActionOrigin_XBoxOne_Reserved6", (int64)InputActionOrigin_XBoxOne_Reserved6 },
		{ "InputActionOrigin_XBoxOne_Reserved7", (int64)InputActionOrigin_XBoxOne_Reserved7 },
		{ "InputActionOrigin_XBoxOne_Reserved8", (int64)InputActionOrigin_XBoxOne_Reserved8 },
		{ "InputActionOrigin_XBoxOne_Reserved9", (int64)InputActionOrigin_XBoxOne_Reserved9 },
		{ "InputActionOrigin_XBoxOne_Reserved10", (int64)InputActionOrigin_XBoxOne_Reserved10 },
		{ "InputActionOrigin_XBox360_A", (int64)InputActionOrigin_XBox360_A },
		{ "InputActionOrigin_XBox360_B", (int64)InputActionOrigin_XBox360_B },
		{ "InputActionOrigin_XBox360_X", (int64)InputActionOrigin_XBox360_X },
		{ "InputActionOrigin_XBox360_Y", (int64)InputActionOrigin_XBox360_Y },
		{ "InputActionOrigin_XBox360_LeftBumper", (int64)InputActionOrigin_XBox360_LeftBumper },
		{ "InputActionOrigin_XBox360_RightBumper", (int64)InputActionOrigin_XBox360_RightBumper },
		{ "InputActionOrigin_XBox360_Start", (int64)InputActionOrigin_XBox360_Start },
		{ "InputActionOrigin_XBox360_Back", (int64)InputActionOrigin_XBox360_Back },
		{ "InputActionOrigin_XBox360_LeftTrigger_Pull", (int64)InputActionOrigin_XBox360_LeftTrigger_Pull },
		{ "InputActionOrigin_XBox360_LeftTrigger_Click", (int64)InputActionOrigin_XBox360_LeftTrigger_Click },
		{ "InputActionOrigin_XBox360_RightTrigger_Pull", (int64)InputActionOrigin_XBox360_RightTrigger_Pull },
		{ "InputActionOrigin_XBox360_RightTrigger_Click", (int64)InputActionOrigin_XBox360_RightTrigger_Click },
		{ "InputActionOrigin_XBox360_LeftStick_Move", (int64)InputActionOrigin_XBox360_LeftStick_Move },
		{ "InputActionOrigin_XBox360_LeftStick_Click", (int64)InputActionOrigin_XBox360_LeftStick_Click },
		{ "InputActionOrigin_XBox360_LeftStick_DPadNorth", (int64)InputActionOrigin_XBox360_LeftStick_DPadNorth },
		{ "InputActionOrigin_XBox360_LeftStick_DPadSouth", (int64)InputActionOrigin_XBox360_LeftStick_DPadSouth },
		{ "InputActionOrigin_XBox360_LeftStick_DPadWest", (int64)InputActionOrigin_XBox360_LeftStick_DPadWest },
		{ "InputActionOrigin_XBox360_LeftStick_DPadEast", (int64)InputActionOrigin_XBox360_LeftStick_DPadEast },
		{ "InputActionOrigin_XBox360_RightStick_Move", (int64)InputActionOrigin_XBox360_RightStick_Move },
		{ "InputActionOrigin_XBox360_RightStick_Click", (int64)InputActionOrigin_XBox360_RightStick_Click },
		{ "InputActionOrigin_XBox360_RightStick_DPadNorth", (int64)InputActionOrigin_XBox360_RightStick_DPadNorth },
		{ "InputActionOrigin_XBox360_RightStick_DPadSouth", (int64)InputActionOrigin_XBox360_RightStick_DPadSouth },
		{ "InputActionOrigin_XBox360_RightStick_DPadWest", (int64)InputActionOrigin_XBox360_RightStick_DPadWest },
		{ "InputActionOrigin_XBox360_RightStick_DPadEast", (int64)InputActionOrigin_XBox360_RightStick_DPadEast },
		{ "InputActionOrigin_XBox360_DPad_North", (int64)InputActionOrigin_XBox360_DPad_North },
		{ "InputActionOrigin_XBox360_DPad_South", (int64)InputActionOrigin_XBox360_DPad_South },
		{ "InputActionOrigin_XBox360_DPad_West", (int64)InputActionOrigin_XBox360_DPad_West },
		{ "InputActionOrigin_XBox360_DPad_East", (int64)InputActionOrigin_XBox360_DPad_East },
		{ "InputActionOrigin_XBox360_DPad_Move", (int64)InputActionOrigin_XBox360_DPad_Move },
		{ "InputActionOrigin_XBox360_Reserved1", (int64)InputActionOrigin_XBox360_Reserved1 },
		{ "InputActionOrigin_XBox360_Reserved2", (int64)InputActionOrigin_XBox360_Reserved2 },
		{ "InputActionOrigin_XBox360_Reserved3", (int64)InputActionOrigin_XBox360_Reserved3 },
		{ "InputActionOrigin_XBox360_Reserved4", (int64)InputActionOrigin_XBox360_Reserved4 },
		{ "InputActionOrigin_XBox360_Reserved5", (int64)InputActionOrigin_XBox360_Reserved5 },
		{ "InputActionOrigin_XBox360_Reserved6", (int64)InputActionOrigin_XBox360_Reserved6 },
		{ "InputActionOrigin_XBox360_Reserved7", (int64)InputActionOrigin_XBox360_Reserved7 },
		{ "InputActionOrigin_XBox360_Reserved8", (int64)InputActionOrigin_XBox360_Reserved8 },
		{ "InputActionOrigin_XBox360_Reserved9", (int64)InputActionOrigin_XBox360_Reserved9 },
		{ "InputActionOrigin_XBox360_Reserved10", (int64)InputActionOrigin_XBox360_Reserved10 },
		{ "InputActionOrigin_Switch_A", (int64)InputActionOrigin_Switch_A },
		{ "InputActionOrigin_Switch_B", (int64)InputActionOrigin_Switch_B },
		{ "InputActionOrigin_Switch_X", (int64)InputActionOrigin_Switch_X },
		{ "InputActionOrigin_Switch_Y", (int64)InputActionOrigin_Switch_Y },
		{ "InputActionOrigin_Switch_LeftBumper", (int64)InputActionOrigin_Switch_LeftBumper },
		{ "InputActionOrigin_Switch_RightBumper", (int64)InputActionOrigin_Switch_RightBumper },
		{ "InputActionOrigin_Switch_Plus", (int64)InputActionOrigin_Switch_Plus },
		{ "InputActionOrigin_Switch_Minus", (int64)InputActionOrigin_Switch_Minus },
		{ "InputActionOrigin_Switch_Capture", (int64)InputActionOrigin_Switch_Capture },
		{ "InputActionOrigin_Switch_LeftTrigger_Pull", (int64)InputActionOrigin_Switch_LeftTrigger_Pull },
		{ "InputActionOrigin_Switch_LeftTrigger_Click", (int64)InputActionOrigin_Switch_LeftTrigger_Click },
		{ "InputActionOrigin_Switch_RightTrigger_Pull", (int64)InputActionOrigin_Switch_RightTrigger_Pull },
		{ "InputActionOrigin_Switch_RightTrigger_Click", (int64)InputActionOrigin_Switch_RightTrigger_Click },
		{ "InputActionOrigin_Switch_LeftStick_Move", (int64)InputActionOrigin_Switch_LeftStick_Move },
		{ "InputActionOrigin_Switch_LeftStick_Click", (int64)InputActionOrigin_Switch_LeftStick_Click },
		{ "InputActionOrigin_Switch_LeftStick_DPadNorth", (int64)InputActionOrigin_Switch_LeftStick_DPadNorth },
		{ "InputActionOrigin_Switch_LeftStick_DPadSouth", (int64)InputActionOrigin_Switch_LeftStick_DPadSouth },
		{ "InputActionOrigin_Switch_LeftStick_DPadWest", (int64)InputActionOrigin_Switch_LeftStick_DPadWest },
		{ "InputActionOrigin_Switch_LeftStick_DPadEast", (int64)InputActionOrigin_Switch_LeftStick_DPadEast },
		{ "InputActionOrigin_Switch_RightStick_Move", (int64)InputActionOrigin_Switch_RightStick_Move },
		{ "InputActionOrigin_Switch_RightStick_Click", (int64)InputActionOrigin_Switch_RightStick_Click },
		{ "InputActionOrigin_Switch_RightStick_DPadNorth", (int64)InputActionOrigin_Switch_RightStick_DPadNorth },
		{ "InputActionOrigin_Switch_RightStick_DPadSouth", (int64)InputActionOrigin_Switch_RightStick_DPadSouth },
		{ "InputActionOrigin_Switch_RightStick_DPadWest", (int64)InputActionOrigin_Switch_RightStick_DPadWest },
		{ "InputActionOrigin_Switch_RightStick_DPadEast", (int64)InputActionOrigin_Switch_RightStick_DPadEast },
		{ "InputActionOrigin_Switch_DPad_North", (int64)InputActionOrigin_Switch_DPad_North },
		{ "InputActionOrigin_Switch_DPad_South", (int64)InputActionOrigin_Switch_DPad_South },
		{ "InputActionOrigin_Switch_DPad_West", (int64)InputActionOrigin_Switch_DPad_West },
		{ "InputActionOrigin_Switch_DPad_East", (int64)InputActionOrigin_Switch_DPad_East },
		{ "InputActionOrigin_Switch_ProGyro_Move", (int64)InputActionOrigin_Switch_ProGyro_Move },
		{ "InputActionOrigin_Switch_ProGyro_Pitch", (int64)InputActionOrigin_Switch_ProGyro_Pitch },
		{ "InputActionOrigin_Switch_ProGyro_Yaw", (int64)InputActionOrigin_Switch_ProGyro_Yaw },
		{ "InputActionOrigin_Switch_ProGyro_Roll", (int64)InputActionOrigin_Switch_ProGyro_Roll },
		{ "InputActionOrigin_Switch_DPad_Move", (int64)InputActionOrigin_Switch_DPad_Move },
		{ "InputActionOrigin_Switch_Reserved1", (int64)InputActionOrigin_Switch_Reserved1 },
		{ "InputActionOrigin_Switch_Reserved2", (int64)InputActionOrigin_Switch_Reserved2 },
		{ "InputActionOrigin_Switch_Reserved3", (int64)InputActionOrigin_Switch_Reserved3 },
		{ "InputActionOrigin_Switch_Reserved4", (int64)InputActionOrigin_Switch_Reserved4 },
		{ "InputActionOrigin_Switch_Reserved5", (int64)InputActionOrigin_Switch_Reserved5 },
		{ "InputActionOrigin_Switch_Reserved6", (int64)InputActionOrigin_Switch_Reserved6 },
		{ "InputActionOrigin_Switch_Reserved7", (int64)InputActionOrigin_Switch_Reserved7 },
		{ "InputActionOrigin_Switch_Reserved8", (int64)InputActionOrigin_Switch_Reserved8 },
		{ "InputActionOrigin_Switch_Reserved9", (int64)InputActionOrigin_Switch_Reserved9 },
		{ "InputActionOrigin_Switch_Reserved10", (int64)InputActionOrigin_Switch_Reserved10 },
		{ "InputActionOrigin_Switch_RightGyro_Move", (int64)InputActionOrigin_Switch_RightGyro_Move },
		{ "InputActionOrigin_Switch_RightGyro_Pitch", (int64)InputActionOrigin_Switch_RightGyro_Pitch },
		{ "InputActionOrigin_Switch_RightGyro_Yaw", (int64)InputActionOrigin_Switch_RightGyro_Yaw },
		{ "InputActionOrigin_Switch_RightGyro_Roll", (int64)InputActionOrigin_Switch_RightGyro_Roll },
		{ "InputActionOrigin_Switch_LeftGyro_Move", (int64)InputActionOrigin_Switch_LeftGyro_Move },
		{ "InputActionOrigin_Switch_LeftGyro_Pitch", (int64)InputActionOrigin_Switch_LeftGyro_Pitch },
		{ "InputActionOrigin_Switch_LeftGyro_Yaw", (int64)InputActionOrigin_Switch_LeftGyro_Yaw },
		{ "InputActionOrigin_Switch_LeftGyro_Roll", (int64)InputActionOrigin_Switch_LeftGyro_Roll },
		{ "InputActionOrigin_Switch_LeftGrip_Lower", (int64)InputActionOrigin_Switch_LeftGrip_Lower },
		{ "InputActionOrigin_Switch_LeftGrip_Upper", (int64)InputActionOrigin_Switch_LeftGrip_Upper },
		{ "InputActionOrigin_Switch_RightGrip_Lower", (int64)InputActionOrigin_Switch_RightGrip_Lower },
		{ "InputActionOrigin_Switch_RightGrip_Upper", (int64)InputActionOrigin_Switch_RightGrip_Upper },
		{ "InputActionOrigin_Switch_Reserved11", (int64)InputActionOrigin_Switch_Reserved11 },
		{ "InputActionOrigin_Switch_Reserved12", (int64)InputActionOrigin_Switch_Reserved12 },
		{ "InputActionOrigin_Switch_Reserved13", (int64)InputActionOrigin_Switch_Reserved13 },
		{ "InputActionOrigin_Switch_Reserved14", (int64)InputActionOrigin_Switch_Reserved14 },
		{ "InputActionOrigin_Switch_Reserved15", (int64)InputActionOrigin_Switch_Reserved15 },
		{ "InputActionOrigin_Switch_Reserved16", (int64)InputActionOrigin_Switch_Reserved16 },
		{ "InputActionOrigin_Switch_Reserved17", (int64)InputActionOrigin_Switch_Reserved17 },
		{ "InputActionOrigin_Switch_Reserved18", (int64)InputActionOrigin_Switch_Reserved18 },
		{ "InputActionOrigin_Switch_Reserved19", (int64)InputActionOrigin_Switch_Reserved19 },
		{ "InputActionOrigin_Switch_Reserved20", (int64)InputActionOrigin_Switch_Reserved20 },
		{ "InputActionOrigin_PS5_X", (int64)InputActionOrigin_PS5_X },
		{ "InputActionOrigin_PS5_Circle", (int64)InputActionOrigin_PS5_Circle },
		{ "InputActionOrigin_PS5_Triangle", (int64)InputActionOrigin_PS5_Triangle },
		{ "InputActionOrigin_PS5_Square", (int64)InputActionOrigin_PS5_Square },
		{ "InputActionOrigin_PS5_LeftBumper", (int64)InputActionOrigin_PS5_LeftBumper },
		{ "InputActionOrigin_PS5_RightBumper", (int64)InputActionOrigin_PS5_RightBumper },
		{ "InputActionOrigin_PS5_Option", (int64)InputActionOrigin_PS5_Option },
		{ "InputActionOrigin_PS5_Create", (int64)InputActionOrigin_PS5_Create },
		{ "InputActionOrigin_PS5_Mute", (int64)InputActionOrigin_PS5_Mute },
		{ "InputActionOrigin_PS5_LeftPad_Touch", (int64)InputActionOrigin_PS5_LeftPad_Touch },
		{ "InputActionOrigin_PS5_LeftPad_Swipe", (int64)InputActionOrigin_PS5_LeftPad_Swipe },
		{ "InputActionOrigin_PS5_LeftPad_Click", (int64)InputActionOrigin_PS5_LeftPad_Click },
		{ "InputActionOrigin_PS5_LeftPad_DPadNorth", (int64)InputActionOrigin_PS5_LeftPad_DPadNorth },
		{ "InputActionOrigin_PS5_LeftPad_DPadSouth", (int64)InputActionOrigin_PS5_LeftPad_DPadSouth },
		{ "InputActionOrigin_PS5_LeftPad_DPadWest", (int64)InputActionOrigin_PS5_LeftPad_DPadWest },
		{ "InputActionOrigin_PS5_LeftPad_DPadEast", (int64)InputActionOrigin_PS5_LeftPad_DPadEast },
		{ "InputActionOrigin_PS5_RightPad_Touch", (int64)InputActionOrigin_PS5_RightPad_Touch },
		{ "InputActionOrigin_PS5_RightPad_Swipe", (int64)InputActionOrigin_PS5_RightPad_Swipe },
		{ "InputActionOrigin_PS5_RightPad_Click", (int64)InputActionOrigin_PS5_RightPad_Click },
		{ "InputActionOrigin_PS5_RightPad_DPadNorth", (int64)InputActionOrigin_PS5_RightPad_DPadNorth },
		{ "InputActionOrigin_PS5_RightPad_DPadSouth", (int64)InputActionOrigin_PS5_RightPad_DPadSouth },
		{ "InputActionOrigin_PS5_RightPad_DPadWest", (int64)InputActionOrigin_PS5_RightPad_DPadWest },
		{ "InputActionOrigin_PS5_RightPad_DPadEast", (int64)InputActionOrigin_PS5_RightPad_DPadEast },
		{ "InputActionOrigin_PS5_CenterPad_Touch", (int64)InputActionOrigin_PS5_CenterPad_Touch },
		{ "InputActionOrigin_PS5_CenterPad_Swipe", (int64)InputActionOrigin_PS5_CenterPad_Swipe },
		{ "InputActionOrigin_PS5_CenterPad_Click", (int64)InputActionOrigin_PS5_CenterPad_Click },
		{ "InputActionOrigin_PS5_CenterPad_DPadNorth", (int64)InputActionOrigin_PS5_CenterPad_DPadNorth },
		{ "InputActionOrigin_PS5_CenterPad_DPadSouth", (int64)InputActionOrigin_PS5_CenterPad_DPadSouth },
		{ "InputActionOrigin_PS5_CenterPad_DPadWest", (int64)InputActionOrigin_PS5_CenterPad_DPadWest },
		{ "InputActionOrigin_PS5_CenterPad_DPadEast", (int64)InputActionOrigin_PS5_CenterPad_DPadEast },
		{ "InputActionOrigin_PS5_LeftTrigger_Pull", (int64)InputActionOrigin_PS5_LeftTrigger_Pull },
		{ "InputActionOrigin_PS5_LeftTrigger_Click", (int64)InputActionOrigin_PS5_LeftTrigger_Click },
		{ "InputActionOrigin_PS5_RightTrigger_Pull", (int64)InputActionOrigin_PS5_RightTrigger_Pull },
		{ "InputActionOrigin_PS5_RightTrigger_Click", (int64)InputActionOrigin_PS5_RightTrigger_Click },
		{ "InputActionOrigin_PS5_LeftStick_Move", (int64)InputActionOrigin_PS5_LeftStick_Move },
		{ "InputActionOrigin_PS5_LeftStick_Click", (int64)InputActionOrigin_PS5_LeftStick_Click },
		{ "InputActionOrigin_PS5_LeftStick_DPadNorth", (int64)InputActionOrigin_PS5_LeftStick_DPadNorth },
		{ "InputActionOrigin_PS5_LeftStick_DPadSouth", (int64)InputActionOrigin_PS5_LeftStick_DPadSouth },
		{ "InputActionOrigin_PS5_LeftStick_DPadWest", (int64)InputActionOrigin_PS5_LeftStick_DPadWest },
		{ "InputActionOrigin_PS5_LeftStick_DPadEast", (int64)InputActionOrigin_PS5_LeftStick_DPadEast },
		{ "InputActionOrigin_PS5_RightStick_Move", (int64)InputActionOrigin_PS5_RightStick_Move },
		{ "InputActionOrigin_PS5_RightStick_Click", (int64)InputActionOrigin_PS5_RightStick_Click },
		{ "InputActionOrigin_PS5_RightStick_DPadNorth", (int64)InputActionOrigin_PS5_RightStick_DPadNorth },
		{ "InputActionOrigin_PS5_RightStick_DPadSouth", (int64)InputActionOrigin_PS5_RightStick_DPadSouth },
		{ "InputActionOrigin_PS5_RightStick_DPadWest", (int64)InputActionOrigin_PS5_RightStick_DPadWest },
		{ "InputActionOrigin_PS5_RightStick_DPadEast", (int64)InputActionOrigin_PS5_RightStick_DPadEast },
		{ "InputActionOrigin_PS5_DPad_North", (int64)InputActionOrigin_PS5_DPad_North },
		{ "InputActionOrigin_PS5_DPad_South", (int64)InputActionOrigin_PS5_DPad_South },
		{ "InputActionOrigin_PS5_DPad_West", (int64)InputActionOrigin_PS5_DPad_West },
		{ "InputActionOrigin_PS5_DPad_East", (int64)InputActionOrigin_PS5_DPad_East },
		{ "InputActionOrigin_PS5_Gyro_Move", (int64)InputActionOrigin_PS5_Gyro_Move },
		{ "InputActionOrigin_PS5_Gyro_Pitch", (int64)InputActionOrigin_PS5_Gyro_Pitch },
		{ "InputActionOrigin_PS5_Gyro_Yaw", (int64)InputActionOrigin_PS5_Gyro_Yaw },
		{ "InputActionOrigin_PS5_Gyro_Roll", (int64)InputActionOrigin_PS5_Gyro_Roll },
		{ "InputActionOrigin_PS5_DPad_Move", (int64)InputActionOrigin_PS5_DPad_Move },
		{ "InputActionOrigin_PS5_Reserved1", (int64)InputActionOrigin_PS5_Reserved1 },
		{ "InputActionOrigin_PS5_Reserved2", (int64)InputActionOrigin_PS5_Reserved2 },
		{ "InputActionOrigin_PS5_Reserved3", (int64)InputActionOrigin_PS5_Reserved3 },
		{ "InputActionOrigin_PS5_Reserved4", (int64)InputActionOrigin_PS5_Reserved4 },
		{ "InputActionOrigin_PS5_Reserved5", (int64)InputActionOrigin_PS5_Reserved5 },
		{ "InputActionOrigin_PS5_Reserved6", (int64)InputActionOrigin_PS5_Reserved6 },
		{ "InputActionOrigin_PS5_Reserved7", (int64)InputActionOrigin_PS5_Reserved7 },
		{ "InputActionOrigin_PS5_Reserved8", (int64)InputActionOrigin_PS5_Reserved8 },
		{ "InputActionOrigin_PS5_Reserved9", (int64)InputActionOrigin_PS5_Reserved9 },
		{ "InputActionOrigin_PS5_Reserved10", (int64)InputActionOrigin_PS5_Reserved10 },
		{ "InputActionOrigin_PS5_Reserved11", (int64)InputActionOrigin_PS5_Reserved11 },
		{ "InputActionOrigin_PS5_Reserved12", (int64)InputActionOrigin_PS5_Reserved12 },
		{ "InputActionOrigin_PS5_Reserved13", (int64)InputActionOrigin_PS5_Reserved13 },
		{ "InputActionOrigin_PS5_Reserved14", (int64)InputActionOrigin_PS5_Reserved14 },
		{ "InputActionOrigin_PS5_Reserved15", (int64)InputActionOrigin_PS5_Reserved15 },
		{ "InputActionOrigin_PS5_Reserved16", (int64)InputActionOrigin_PS5_Reserved16 },
		{ "InputActionOrigin_PS5_Reserved17", (int64)InputActionOrigin_PS5_Reserved17 },
		{ "InputActionOrigin_PS5_Reserved18", (int64)InputActionOrigin_PS5_Reserved18 },
		{ "InputActionOrigin_PS5_Reserved19", (int64)InputActionOrigin_PS5_Reserved19 },
		{ "InputActionOrigin_PS5_Reserved20", (int64)InputActionOrigin_PS5_Reserved20 },
		{ "InputActionOrigin_SteamDeck_A", (int64)InputActionOrigin_SteamDeck_A },
		{ "InputActionOrigin_SteamDeck_B", (int64)InputActionOrigin_SteamDeck_B },
		{ "InputActionOrigin_SteamDeck_X", (int64)InputActionOrigin_SteamDeck_X },
		{ "InputActionOrigin_SteamDeck_Y", (int64)InputActionOrigin_SteamDeck_Y },
		{ "InputActionOrigin_SteamDeck_L1", (int64)InputActionOrigin_SteamDeck_L1 },
		{ "InputActionOrigin_SteamDeck_R1", (int64)InputActionOrigin_SteamDeck_R1 },
		{ "InputActionOrigin_SteamDeck_Menu", (int64)InputActionOrigin_SteamDeck_Menu },
		{ "InputActionOrigin_SteamDeck_View", (int64)InputActionOrigin_SteamDeck_View },
		{ "InputActionOrigin_SteamDeck_LeftPad_Touch", (int64)InputActionOrigin_SteamDeck_LeftPad_Touch },
		{ "InputActionOrigin_SteamDeck_LeftPad_Swipe", (int64)InputActionOrigin_SteamDeck_LeftPad_Swipe },
		{ "InputActionOrigin_SteamDeck_LeftPad_Click", (int64)InputActionOrigin_SteamDeck_LeftPad_Click },
		{ "InputActionOrigin_SteamDeck_LeftPad_DPadNorth", (int64)InputActionOrigin_SteamDeck_LeftPad_DPadNorth },
		{ "InputActionOrigin_SteamDeck_LeftPad_DPadSouth", (int64)InputActionOrigin_SteamDeck_LeftPad_DPadSouth },
		{ "InputActionOrigin_SteamDeck_LeftPad_DPadWest", (int64)InputActionOrigin_SteamDeck_LeftPad_DPadWest },
		{ "InputActionOrigin_SteamDeck_LeftPad_DPadEast", (int64)InputActionOrigin_SteamDeck_LeftPad_DPadEast },
		{ "InputActionOrigin_SteamDeck_RightPad_Touch", (int64)InputActionOrigin_SteamDeck_RightPad_Touch },
		{ "InputActionOrigin_SteamDeck_RightPad_Swipe", (int64)InputActionOrigin_SteamDeck_RightPad_Swipe },
		{ "InputActionOrigin_SteamDeck_RightPad_Click", (int64)InputActionOrigin_SteamDeck_RightPad_Click },
		{ "InputActionOrigin_SteamDeck_RightPad_DPadNorth", (int64)InputActionOrigin_SteamDeck_RightPad_DPadNorth },
		{ "InputActionOrigin_SteamDeck_RightPad_DPadSouth", (int64)InputActionOrigin_SteamDeck_RightPad_DPadSouth },
		{ "InputActionOrigin_SteamDeck_RightPad_DPadWest", (int64)InputActionOrigin_SteamDeck_RightPad_DPadWest },
		{ "InputActionOrigin_SteamDeck_RightPad_DPadEast", (int64)InputActionOrigin_SteamDeck_RightPad_DPadEast },
		{ "InputActionOrigin_SteamDeck_L2_SoftPull", (int64)InputActionOrigin_SteamDeck_L2_SoftPull },
		{ "InputActionOrigin_SteamDeck_L2", (int64)InputActionOrigin_SteamDeck_L2 },
		{ "InputActionOrigin_SteamDeck_R2_SoftPull", (int64)InputActionOrigin_SteamDeck_R2_SoftPull },
		{ "InputActionOrigin_SteamDeck_R2", (int64)InputActionOrigin_SteamDeck_R2 },
		{ "InputActionOrigin_SteamDeck_LeftStick_Move", (int64)InputActionOrigin_SteamDeck_LeftStick_Move },
		{ "InputActionOrigin_SteamDeck_L3", (int64)InputActionOrigin_SteamDeck_L3 },
		{ "InputActionOrigin_SteamDeck_LeftStick_DPadNorth", (int64)InputActionOrigin_SteamDeck_LeftStick_DPadNorth },
		{ "InputActionOrigin_SteamDeck_LeftStick_DPadSouth", (int64)InputActionOrigin_SteamDeck_LeftStick_DPadSouth },
		{ "InputActionOrigin_SteamDeck_LeftStick_DPadWest", (int64)InputActionOrigin_SteamDeck_LeftStick_DPadWest },
		{ "InputActionOrigin_SteamDeck_LeftStick_DPadEast", (int64)InputActionOrigin_SteamDeck_LeftStick_DPadEast },
		{ "InputActionOrigin_SteamDeck_LeftStick_Touch", (int64)InputActionOrigin_SteamDeck_LeftStick_Touch },
		{ "InputActionOrigin_SteamDeck_RightStick_Move", (int64)InputActionOrigin_SteamDeck_RightStick_Move },
		{ "InputActionOrigin_SteamDeck_R3", (int64)InputActionOrigin_SteamDeck_R3 },
		{ "InputActionOrigin_SteamDeck_RightStick_DPadNorth", (int64)InputActionOrigin_SteamDeck_RightStick_DPadNorth },
		{ "InputActionOrigin_SteamDeck_RightStick_DPadSouth", (int64)InputActionOrigin_SteamDeck_RightStick_DPadSouth },
		{ "InputActionOrigin_SteamDeck_RightStick_DPadWest", (int64)InputActionOrigin_SteamDeck_RightStick_DPadWest },
		{ "InputActionOrigin_SteamDeck_RightStick_DPadEast", (int64)InputActionOrigin_SteamDeck_RightStick_DPadEast },
		{ "InputActionOrigin_SteamDeck_RightStick_Touch", (int64)InputActionOrigin_SteamDeck_RightStick_Touch },
		{ "InputActionOrigin_SteamDeck_L4", (int64)InputActionOrigin_SteamDeck_L4 },
		{ "InputActionOrigin_SteamDeck_R4", (int64)InputActionOrigin_SteamDeck_R4 },
		{ "InputActionOrigin_SteamDeck_L5", (int64)InputActionOrigin_SteamDeck_L5 },
		{ "InputActionOrigin_SteamDeck_R5", (int64)InputActionOrigin_SteamDeck_R5 },
		{ "InputActionOrigin_SteamDeck_DPad_Move", (int64)InputActionOrigin_SteamDeck_DPad_Move },
		{ "InputActionOrigin_SteamDeck_DPad_North", (int64)InputActionOrigin_SteamDeck_DPad_North },
		{ "InputActionOrigin_SteamDeck_DPad_South", (int64)InputActionOrigin_SteamDeck_DPad_South },
		{ "InputActionOrigin_SteamDeck_DPad_West", (int64)InputActionOrigin_SteamDeck_DPad_West },
		{ "InputActionOrigin_SteamDeck_DPad_East", (int64)InputActionOrigin_SteamDeck_DPad_East },
		{ "InputActionOrigin_SteamDeck_Gyro_Move", (int64)InputActionOrigin_SteamDeck_Gyro_Move },
		{ "InputActionOrigin_SteamDeck_Gyro_Pitch", (int64)InputActionOrigin_SteamDeck_Gyro_Pitch },
		{ "InputActionOrigin_SteamDeck_Gyro_Yaw", (int64)InputActionOrigin_SteamDeck_Gyro_Yaw },
		{ "InputActionOrigin_SteamDeck_Gyro_Roll", (int64)InputActionOrigin_SteamDeck_Gyro_Roll },
		{ "InputActionOrigin_SteamDeck_Reserved1", (int64)InputActionOrigin_SteamDeck_Reserved1 },
		{ "InputActionOrigin_SteamDeck_Reserved2", (int64)InputActionOrigin_SteamDeck_Reserved2 },
		{ "InputActionOrigin_SteamDeck_Reserved3", (int64)InputActionOrigin_SteamDeck_Reserved3 },
		{ "InputActionOrigin_SteamDeck_Reserved4", (int64)InputActionOrigin_SteamDeck_Reserved4 },
		{ "InputActionOrigin_SteamDeck_Reserved5", (int64)InputActionOrigin_SteamDeck_Reserved5 },
		{ "InputActionOrigin_SteamDeck_Reserved6", (int64)InputActionOrigin_SteamDeck_Reserved6 },
		{ "InputActionOrigin_SteamDeck_Reserved7", (int64)InputActionOrigin_SteamDeck_Reserved7 },
		{ "InputActionOrigin_SteamDeck_Reserved8", (int64)InputActionOrigin_SteamDeck_Reserved8 },
		{ "InputActionOrigin_SteamDeck_Reserved9", (int64)InputActionOrigin_SteamDeck_Reserved9 },
		{ "InputActionOrigin_SteamDeck_Reserved10", (int64)InputActionOrigin_SteamDeck_Reserved10 },
		{ "InputActionOrigin_SteamDeck_Reserved11", (int64)InputActionOrigin_SteamDeck_Reserved11 },
		{ "InputActionOrigin_SteamDeck_Reserved12", (int64)InputActionOrigin_SteamDeck_Reserved12 },
		{ "InputActionOrigin_SteamDeck_Reserved13", (int64)InputActionOrigin_SteamDeck_Reserved13 },
		{ "InputActionOrigin_SteamDeck_Reserved14", (int64)InputActionOrigin_SteamDeck_Reserved14 },
		{ "InputActionOrigin_SteamDeck_Reserved15", (int64)InputActionOrigin_SteamDeck_Reserved15 },
		{ "InputActionOrigin_SteamDeck_Reserved16", (int64)InputActionOrigin_SteamDeck_Reserved16 },
		{ "InputActionOrigin_SteamDeck_Reserved17", (int64)InputActionOrigin_SteamDeck_Reserved17 },
		{ "InputActionOrigin_SteamDeck_Reserved18", (int64)InputActionOrigin_SteamDeck_Reserved18 },
		{ "InputActionOrigin_SteamDeck_Reserved19", (int64)InputActionOrigin_SteamDeck_Reserved19 },
		{ "InputActionOrigin_SteamDeck_Reserved20", (int64)InputActionOrigin_SteamDeck_Reserved20 },
		{ "InputActionOrigin_Count", (int64)InputActionOrigin_Count },
		{ "InputActionOrigin_MaximumPossibleValue", (int64)InputActionOrigin_MaximumPossibleValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "InputActionOrigin_Count.Name", "InputActionOrigin_Count" },
		{ "InputActionOrigin_MaximumPossibleValue.Comment", "// If Steam has added support for new controllers origins will go here.\n" },
		{ "InputActionOrigin_MaximumPossibleValue.Name", "InputActionOrigin_MaximumPossibleValue" },
		{ "InputActionOrigin_MaximumPossibleValue.ToolTip", "If Steam has added support for new controllers origins will go here." },
		{ "InputActionOrigin_None.Comment", "// Steam Controller\n" },
		{ "InputActionOrigin_None.Name", "InputActionOrigin_None" },
		{ "InputActionOrigin_None.ToolTip", "Steam Controller" },
		{ "InputActionOrigin_PS4_CenterPad_Click.Name", "InputActionOrigin_PS4_CenterPad_Click" },
		{ "InputActionOrigin_PS4_CenterPad_DPadEast.Name", "InputActionOrigin_PS4_CenterPad_DPadEast" },
		{ "InputActionOrigin_PS4_CenterPad_DPadNorth.Name", "InputActionOrigin_PS4_CenterPad_DPadNorth" },
		{ "InputActionOrigin_PS4_CenterPad_DPadSouth.Name", "InputActionOrigin_PS4_CenterPad_DPadSouth" },
		{ "InputActionOrigin_PS4_CenterPad_DPadWest.Name", "InputActionOrigin_PS4_CenterPad_DPadWest" },
		{ "InputActionOrigin_PS4_CenterPad_Swipe.Name", "InputActionOrigin_PS4_CenterPad_Swipe" },
		{ "InputActionOrigin_PS4_CenterPad_Touch.Name", "InputActionOrigin_PS4_CenterPad_Touch" },
		{ "InputActionOrigin_PS4_Circle.Name", "InputActionOrigin_PS4_Circle" },
		{ "InputActionOrigin_PS4_DPad_East.Name", "InputActionOrigin_PS4_DPad_East" },
		{ "InputActionOrigin_PS4_DPad_Move.Name", "InputActionOrigin_PS4_DPad_Move" },
		{ "InputActionOrigin_PS4_DPad_North.Name", "InputActionOrigin_PS4_DPad_North" },
		{ "InputActionOrigin_PS4_DPad_South.Name", "InputActionOrigin_PS4_DPad_South" },
		{ "InputActionOrigin_PS4_DPad_West.Name", "InputActionOrigin_PS4_DPad_West" },
		{ "InputActionOrigin_PS4_Gyro_Move.Name", "InputActionOrigin_PS4_Gyro_Move" },
		{ "InputActionOrigin_PS4_Gyro_Pitch.Name", "InputActionOrigin_PS4_Gyro_Pitch" },
		{ "InputActionOrigin_PS4_Gyro_Roll.Name", "InputActionOrigin_PS4_Gyro_Roll" },
		{ "InputActionOrigin_PS4_Gyro_Yaw.Name", "InputActionOrigin_PS4_Gyro_Yaw" },
		{ "InputActionOrigin_PS4_LeftBumper.Name", "InputActionOrigin_PS4_LeftBumper" },
		{ "InputActionOrigin_PS4_LeftPad_Click.Name", "InputActionOrigin_PS4_LeftPad_Click" },
		{ "InputActionOrigin_PS4_LeftPad_DPadEast.Name", "InputActionOrigin_PS4_LeftPad_DPadEast" },
		{ "InputActionOrigin_PS4_LeftPad_DPadNorth.Name", "InputActionOrigin_PS4_LeftPad_DPadNorth" },
		{ "InputActionOrigin_PS4_LeftPad_DPadSouth.Name", "InputActionOrigin_PS4_LeftPad_DPadSouth" },
		{ "InputActionOrigin_PS4_LeftPad_DPadWest.Name", "InputActionOrigin_PS4_LeftPad_DPadWest" },
		{ "InputActionOrigin_PS4_LeftPad_Swipe.Name", "InputActionOrigin_PS4_LeftPad_Swipe" },
		{ "InputActionOrigin_PS4_LeftPad_Touch.Comment", "//Back\n" },
		{ "InputActionOrigin_PS4_LeftPad_Touch.Name", "InputActionOrigin_PS4_LeftPad_Touch" },
		{ "InputActionOrigin_PS4_LeftPad_Touch.ToolTip", "Back" },
		{ "InputActionOrigin_PS4_LeftStick_Click.Name", "InputActionOrigin_PS4_LeftStick_Click" },
		{ "InputActionOrigin_PS4_LeftStick_DPadEast.Name", "InputActionOrigin_PS4_LeftStick_DPadEast" },
		{ "InputActionOrigin_PS4_LeftStick_DPadNorth.Name", "InputActionOrigin_PS4_LeftStick_DPadNorth" },
		{ "InputActionOrigin_PS4_LeftStick_DPadSouth.Name", "InputActionOrigin_PS4_LeftStick_DPadSouth" },
		{ "InputActionOrigin_PS4_LeftStick_DPadWest.Name", "InputActionOrigin_PS4_LeftStick_DPadWest" },
		{ "InputActionOrigin_PS4_LeftStick_Move.Name", "InputActionOrigin_PS4_LeftStick_Move" },
		{ "InputActionOrigin_PS4_LeftTrigger_Click.Name", "InputActionOrigin_PS4_LeftTrigger_Click" },
		{ "InputActionOrigin_PS4_LeftTrigger_Pull.Name", "InputActionOrigin_PS4_LeftTrigger_Pull" },
		{ "InputActionOrigin_PS4_Options.Name", "InputActionOrigin_PS4_Options" },
		{ "InputActionOrigin_PS4_Reserved1.Name", "InputActionOrigin_PS4_Reserved1" },
		{ "InputActionOrigin_PS4_Reserved10.Name", "InputActionOrigin_PS4_Reserved10" },
		{ "InputActionOrigin_PS4_Reserved2.Name", "InputActionOrigin_PS4_Reserved2" },
		{ "InputActionOrigin_PS4_Reserved3.Name", "InputActionOrigin_PS4_Reserved3" },
		{ "InputActionOrigin_PS4_Reserved4.Name", "InputActionOrigin_PS4_Reserved4" },
		{ "InputActionOrigin_PS4_Reserved5.Name", "InputActionOrigin_PS4_Reserved5" },
		{ "InputActionOrigin_PS4_Reserved6.Name", "InputActionOrigin_PS4_Reserved6" },
		{ "InputActionOrigin_PS4_Reserved7.Name", "InputActionOrigin_PS4_Reserved7" },
		{ "InputActionOrigin_PS4_Reserved8.Name", "InputActionOrigin_PS4_Reserved8" },
		{ "InputActionOrigin_PS4_Reserved9.Name", "InputActionOrigin_PS4_Reserved9" },
		{ "InputActionOrigin_PS4_RightBumper.Name", "InputActionOrigin_PS4_RightBumper" },
		{ "InputActionOrigin_PS4_RightPad_Click.Name", "InputActionOrigin_PS4_RightPad_Click" },
		{ "InputActionOrigin_PS4_RightPad_DPadEast.Name", "InputActionOrigin_PS4_RightPad_DPadEast" },
		{ "InputActionOrigin_PS4_RightPad_DPadNorth.Name", "InputActionOrigin_PS4_RightPad_DPadNorth" },
		{ "InputActionOrigin_PS4_RightPad_DPadSouth.Name", "InputActionOrigin_PS4_RightPad_DPadSouth" },
		{ "InputActionOrigin_PS4_RightPad_DPadWest.Name", "InputActionOrigin_PS4_RightPad_DPadWest" },
		{ "InputActionOrigin_PS4_RightPad_Swipe.Name", "InputActionOrigin_PS4_RightPad_Swipe" },
		{ "InputActionOrigin_PS4_RightPad_Touch.Name", "InputActionOrigin_PS4_RightPad_Touch" },
		{ "InputActionOrigin_PS4_RightStick_Click.Name", "InputActionOrigin_PS4_RightStick_Click" },
		{ "InputActionOrigin_PS4_RightStick_DPadEast.Name", "InputActionOrigin_PS4_RightStick_DPadEast" },
		{ "InputActionOrigin_PS4_RightStick_DPadNorth.Name", "InputActionOrigin_PS4_RightStick_DPadNorth" },
		{ "InputActionOrigin_PS4_RightStick_DPadSouth.Name", "InputActionOrigin_PS4_RightStick_DPadSouth" },
		{ "InputActionOrigin_PS4_RightStick_DPadWest.Name", "InputActionOrigin_PS4_RightStick_DPadWest" },
		{ "InputActionOrigin_PS4_RightStick_Move.Name", "InputActionOrigin_PS4_RightStick_Move" },
		{ "InputActionOrigin_PS4_RightTrigger_Click.Name", "InputActionOrigin_PS4_RightTrigger_Click" },
		{ "InputActionOrigin_PS4_RightTrigger_Pull.Name", "InputActionOrigin_PS4_RightTrigger_Pull" },
		{ "InputActionOrigin_PS4_Share.Comment", "//Start\n" },
		{ "InputActionOrigin_PS4_Share.Name", "InputActionOrigin_PS4_Share" },
		{ "InputActionOrigin_PS4_Share.ToolTip", "Start" },
		{ "InputActionOrigin_PS4_Square.Name", "InputActionOrigin_PS4_Square" },
		{ "InputActionOrigin_PS4_Triangle.Name", "InputActionOrigin_PS4_Triangle" },
		{ "InputActionOrigin_PS4_X.Comment", "// PS4 Dual Shock\n" },
		{ "InputActionOrigin_PS4_X.Name", "InputActionOrigin_PS4_X" },
		{ "InputActionOrigin_PS4_X.ToolTip", "PS4 Dual Shock" },
		{ "InputActionOrigin_PS5_CenterPad_Click.Name", "InputActionOrigin_PS5_CenterPad_Click" },
		{ "InputActionOrigin_PS5_CenterPad_DPadEast.Name", "InputActionOrigin_PS5_CenterPad_DPadEast" },
		{ "InputActionOrigin_PS5_CenterPad_DPadNorth.Name", "InputActionOrigin_PS5_CenterPad_DPadNorth" },
		{ "InputActionOrigin_PS5_CenterPad_DPadSouth.Name", "InputActionOrigin_PS5_CenterPad_DPadSouth" },
		{ "InputActionOrigin_PS5_CenterPad_DPadWest.Name", "InputActionOrigin_PS5_CenterPad_DPadWest" },
		{ "InputActionOrigin_PS5_CenterPad_Swipe.Name", "InputActionOrigin_PS5_CenterPad_Swipe" },
		{ "InputActionOrigin_PS5_CenterPad_Touch.Name", "InputActionOrigin_PS5_CenterPad_Touch" },
		{ "InputActionOrigin_PS5_Circle.Name", "InputActionOrigin_PS5_Circle" },
		{ "InputActionOrigin_PS5_Create.Comment", "//Start\n" },
		{ "InputActionOrigin_PS5_Create.Name", "InputActionOrigin_PS5_Create" },
		{ "InputActionOrigin_PS5_Create.ToolTip", "Start" },
		{ "InputActionOrigin_PS5_DPad_East.Name", "InputActionOrigin_PS5_DPad_East" },
		{ "InputActionOrigin_PS5_DPad_Move.Name", "InputActionOrigin_PS5_DPad_Move" },
		{ "InputActionOrigin_PS5_DPad_North.Name", "InputActionOrigin_PS5_DPad_North" },
		{ "InputActionOrigin_PS5_DPad_South.Name", "InputActionOrigin_PS5_DPad_South" },
		{ "InputActionOrigin_PS5_DPad_West.Name", "InputActionOrigin_PS5_DPad_West" },
		{ "InputActionOrigin_PS5_Gyro_Move.Name", "InputActionOrigin_PS5_Gyro_Move" },
		{ "InputActionOrigin_PS5_Gyro_Pitch.Name", "InputActionOrigin_PS5_Gyro_Pitch" },
		{ "InputActionOrigin_PS5_Gyro_Roll.Name", "InputActionOrigin_PS5_Gyro_Roll" },
		{ "InputActionOrigin_PS5_Gyro_Yaw.Name", "InputActionOrigin_PS5_Gyro_Yaw" },
		{ "InputActionOrigin_PS5_LeftBumper.Name", "InputActionOrigin_PS5_LeftBumper" },
		{ "InputActionOrigin_PS5_LeftPad_Click.Name", "InputActionOrigin_PS5_LeftPad_Click" },
		{ "InputActionOrigin_PS5_LeftPad_DPadEast.Name", "InputActionOrigin_PS5_LeftPad_DPadEast" },
		{ "InputActionOrigin_PS5_LeftPad_DPadNorth.Name", "InputActionOrigin_PS5_LeftPad_DPadNorth" },
		{ "InputActionOrigin_PS5_LeftPad_DPadSouth.Name", "InputActionOrigin_PS5_LeftPad_DPadSouth" },
		{ "InputActionOrigin_PS5_LeftPad_DPadWest.Name", "InputActionOrigin_PS5_LeftPad_DPadWest" },
		{ "InputActionOrigin_PS5_LeftPad_Swipe.Name", "InputActionOrigin_PS5_LeftPad_Swipe" },
		{ "InputActionOrigin_PS5_LeftPad_Touch.Name", "InputActionOrigin_PS5_LeftPad_Touch" },
		{ "InputActionOrigin_PS5_LeftStick_Click.Name", "InputActionOrigin_PS5_LeftStick_Click" },
		{ "InputActionOrigin_PS5_LeftStick_DPadEast.Name", "InputActionOrigin_PS5_LeftStick_DPadEast" },
		{ "InputActionOrigin_PS5_LeftStick_DPadNorth.Name", "InputActionOrigin_PS5_LeftStick_DPadNorth" },
		{ "InputActionOrigin_PS5_LeftStick_DPadSouth.Name", "InputActionOrigin_PS5_LeftStick_DPadSouth" },
		{ "InputActionOrigin_PS5_LeftStick_DPadWest.Name", "InputActionOrigin_PS5_LeftStick_DPadWest" },
		{ "InputActionOrigin_PS5_LeftStick_Move.Name", "InputActionOrigin_PS5_LeftStick_Move" },
		{ "InputActionOrigin_PS5_LeftTrigger_Click.Name", "InputActionOrigin_PS5_LeftTrigger_Click" },
		{ "InputActionOrigin_PS5_LeftTrigger_Pull.Name", "InputActionOrigin_PS5_LeftTrigger_Pull" },
		{ "InputActionOrigin_PS5_Mute.Comment", "//Back\n" },
		{ "InputActionOrigin_PS5_Mute.Name", "InputActionOrigin_PS5_Mute" },
		{ "InputActionOrigin_PS5_Mute.ToolTip", "Back" },
		{ "InputActionOrigin_PS5_Option.Name", "InputActionOrigin_PS5_Option" },
		{ "InputActionOrigin_PS5_Reserved1.Name", "InputActionOrigin_PS5_Reserved1" },
		{ "InputActionOrigin_PS5_Reserved10.Name", "InputActionOrigin_PS5_Reserved10" },
		{ "InputActionOrigin_PS5_Reserved11.Name", "InputActionOrigin_PS5_Reserved11" },
		{ "InputActionOrigin_PS5_Reserved12.Name", "InputActionOrigin_PS5_Reserved12" },
		{ "InputActionOrigin_PS5_Reserved13.Name", "InputActionOrigin_PS5_Reserved13" },
		{ "InputActionOrigin_PS5_Reserved14.Name", "InputActionOrigin_PS5_Reserved14" },
		{ "InputActionOrigin_PS5_Reserved15.Name", "InputActionOrigin_PS5_Reserved15" },
		{ "InputActionOrigin_PS5_Reserved16.Name", "InputActionOrigin_PS5_Reserved16" },
		{ "InputActionOrigin_PS5_Reserved17.Name", "InputActionOrigin_PS5_Reserved17" },
		{ "InputActionOrigin_PS5_Reserved18.Name", "InputActionOrigin_PS5_Reserved18" },
		{ "InputActionOrigin_PS5_Reserved19.Name", "InputActionOrigin_PS5_Reserved19" },
		{ "InputActionOrigin_PS5_Reserved2.Name", "InputActionOrigin_PS5_Reserved2" },
		{ "InputActionOrigin_PS5_Reserved20.Name", "InputActionOrigin_PS5_Reserved20" },
		{ "InputActionOrigin_PS5_Reserved3.Name", "InputActionOrigin_PS5_Reserved3" },
		{ "InputActionOrigin_PS5_Reserved4.Name", "InputActionOrigin_PS5_Reserved4" },
		{ "InputActionOrigin_PS5_Reserved5.Name", "InputActionOrigin_PS5_Reserved5" },
		{ "InputActionOrigin_PS5_Reserved6.Name", "InputActionOrigin_PS5_Reserved6" },
		{ "InputActionOrigin_PS5_Reserved7.Name", "InputActionOrigin_PS5_Reserved7" },
		{ "InputActionOrigin_PS5_Reserved8.Name", "InputActionOrigin_PS5_Reserved8" },
		{ "InputActionOrigin_PS5_Reserved9.Name", "InputActionOrigin_PS5_Reserved9" },
		{ "InputActionOrigin_PS5_RightBumper.Name", "InputActionOrigin_PS5_RightBumper" },
		{ "InputActionOrigin_PS5_RightPad_Click.Name", "InputActionOrigin_PS5_RightPad_Click" },
		{ "InputActionOrigin_PS5_RightPad_DPadEast.Name", "InputActionOrigin_PS5_RightPad_DPadEast" },
		{ "InputActionOrigin_PS5_RightPad_DPadNorth.Name", "InputActionOrigin_PS5_RightPad_DPadNorth" },
		{ "InputActionOrigin_PS5_RightPad_DPadSouth.Name", "InputActionOrigin_PS5_RightPad_DPadSouth" },
		{ "InputActionOrigin_PS5_RightPad_DPadWest.Name", "InputActionOrigin_PS5_RightPad_DPadWest" },
		{ "InputActionOrigin_PS5_RightPad_Swipe.Name", "InputActionOrigin_PS5_RightPad_Swipe" },
		{ "InputActionOrigin_PS5_RightPad_Touch.Name", "InputActionOrigin_PS5_RightPad_Touch" },
		{ "InputActionOrigin_PS5_RightStick_Click.Name", "InputActionOrigin_PS5_RightStick_Click" },
		{ "InputActionOrigin_PS5_RightStick_DPadEast.Name", "InputActionOrigin_PS5_RightStick_DPadEast" },
		{ "InputActionOrigin_PS5_RightStick_DPadNorth.Name", "InputActionOrigin_PS5_RightStick_DPadNorth" },
		{ "InputActionOrigin_PS5_RightStick_DPadSouth.Name", "InputActionOrigin_PS5_RightStick_DPadSouth" },
		{ "InputActionOrigin_PS5_RightStick_DPadWest.Name", "InputActionOrigin_PS5_RightStick_DPadWest" },
		{ "InputActionOrigin_PS5_RightStick_Move.Name", "InputActionOrigin_PS5_RightStick_Move" },
		{ "InputActionOrigin_PS5_RightTrigger_Click.Name", "InputActionOrigin_PS5_RightTrigger_Click" },
		{ "InputActionOrigin_PS5_RightTrigger_Pull.Name", "InputActionOrigin_PS5_RightTrigger_Pull" },
		{ "InputActionOrigin_PS5_Square.Name", "InputActionOrigin_PS5_Square" },
		{ "InputActionOrigin_PS5_Triangle.Name", "InputActionOrigin_PS5_Triangle" },
		{ "InputActionOrigin_PS5_X.Comment", "// Added in SDK 1.51\n" },
		{ "InputActionOrigin_PS5_X.Name", "InputActionOrigin_PS5_X" },
		{ "InputActionOrigin_PS5_X.ToolTip", "Added in SDK 1.51" },
		{ "InputActionOrigin_SteamController_A.Name", "InputActionOrigin_SteamController_A" },
		{ "InputActionOrigin_SteamController_B.Name", "InputActionOrigin_SteamController_B" },
		{ "InputActionOrigin_SteamController_Back.Name", "InputActionOrigin_SteamController_Back" },
		{ "InputActionOrigin_SteamController_Gyro_Move.Name", "InputActionOrigin_SteamController_Gyro_Move" },
		{ "InputActionOrigin_SteamController_Gyro_Pitch.Name", "InputActionOrigin_SteamController_Gyro_Pitch" },
		{ "InputActionOrigin_SteamController_Gyro_Roll.Name", "InputActionOrigin_SteamController_Gyro_Roll" },
		{ "InputActionOrigin_SteamController_Gyro_Yaw.Name", "InputActionOrigin_SteamController_Gyro_Yaw" },
		{ "InputActionOrigin_SteamController_LeftBumper.Name", "InputActionOrigin_SteamController_LeftBumper" },
		{ "InputActionOrigin_SteamController_LeftGrip.Name", "InputActionOrigin_SteamController_LeftGrip" },
		{ "InputActionOrigin_SteamController_LeftPad_Click.Name", "InputActionOrigin_SteamController_LeftPad_Click" },
		{ "InputActionOrigin_SteamController_LeftPad_DPadEast.Name", "InputActionOrigin_SteamController_LeftPad_DPadEast" },
		{ "InputActionOrigin_SteamController_LeftPad_DPadNorth.Name", "InputActionOrigin_SteamController_LeftPad_DPadNorth" },
		{ "InputActionOrigin_SteamController_LeftPad_DPadSouth.Name", "InputActionOrigin_SteamController_LeftPad_DPadSouth" },
		{ "InputActionOrigin_SteamController_LeftPad_DPadWest.Name", "InputActionOrigin_SteamController_LeftPad_DPadWest" },
		{ "InputActionOrigin_SteamController_LeftPad_Swipe.Name", "InputActionOrigin_SteamController_LeftPad_Swipe" },
		{ "InputActionOrigin_SteamController_LeftPad_Touch.Name", "InputActionOrigin_SteamController_LeftPad_Touch" },
		{ "InputActionOrigin_SteamController_LeftStick_Click.Name", "InputActionOrigin_SteamController_LeftStick_Click" },
		{ "InputActionOrigin_SteamController_LeftStick_DPadEast.Name", "InputActionOrigin_SteamController_LeftStick_DPadEast" },
		{ "InputActionOrigin_SteamController_LeftStick_DPadNorth.Name", "InputActionOrigin_SteamController_LeftStick_DPadNorth" },
		{ "InputActionOrigin_SteamController_LeftStick_DPadSouth.Name", "InputActionOrigin_SteamController_LeftStick_DPadSouth" },
		{ "InputActionOrigin_SteamController_LeftStick_DPadWest.Name", "InputActionOrigin_SteamController_LeftStick_DPadWest" },
		{ "InputActionOrigin_SteamController_LeftStick_Move.Name", "InputActionOrigin_SteamController_LeftStick_Move" },
		{ "InputActionOrigin_SteamController_LeftTrigger_Click.Name", "InputActionOrigin_SteamController_LeftTrigger_Click" },
		{ "InputActionOrigin_SteamController_LeftTrigger_Pull.Name", "InputActionOrigin_SteamController_LeftTrigger_Pull" },
		{ "InputActionOrigin_SteamController_Reserved0.Name", "InputActionOrigin_SteamController_Reserved0" },
		{ "InputActionOrigin_SteamController_Reserved1.Name", "InputActionOrigin_SteamController_Reserved1" },
		{ "InputActionOrigin_SteamController_Reserved10.Name", "InputActionOrigin_SteamController_Reserved10" },
		{ "InputActionOrigin_SteamController_Reserved2.Name", "InputActionOrigin_SteamController_Reserved2" },
		{ "InputActionOrigin_SteamController_Reserved3.Name", "InputActionOrigin_SteamController_Reserved3" },
		{ "InputActionOrigin_SteamController_Reserved4.Name", "InputActionOrigin_SteamController_Reserved4" },
		{ "InputActionOrigin_SteamController_Reserved5.Name", "InputActionOrigin_SteamController_Reserved5" },
		{ "InputActionOrigin_SteamController_Reserved6.Name", "InputActionOrigin_SteamController_Reserved6" },
		{ "InputActionOrigin_SteamController_Reserved7.Name", "InputActionOrigin_SteamController_Reserved7" },
		{ "InputActionOrigin_SteamController_Reserved8.Name", "InputActionOrigin_SteamController_Reserved8" },
		{ "InputActionOrigin_SteamController_Reserved9.Name", "InputActionOrigin_SteamController_Reserved9" },
		{ "InputActionOrigin_SteamController_RightBumper.Name", "InputActionOrigin_SteamController_RightBumper" },
		{ "InputActionOrigin_SteamController_RightGrip.Name", "InputActionOrigin_SteamController_RightGrip" },
		{ "InputActionOrigin_SteamController_RightPad_Click.Name", "InputActionOrigin_SteamController_RightPad_Click" },
		{ "InputActionOrigin_SteamController_RightPad_DPadEast.Name", "InputActionOrigin_SteamController_RightPad_DPadEast" },
		{ "InputActionOrigin_SteamController_RightPad_DPadNorth.Name", "InputActionOrigin_SteamController_RightPad_DPadNorth" },
		{ "InputActionOrigin_SteamController_RightPad_DPadSouth.Name", "InputActionOrigin_SteamController_RightPad_DPadSouth" },
		{ "InputActionOrigin_SteamController_RightPad_DPadWest.Name", "InputActionOrigin_SteamController_RightPad_DPadWest" },
		{ "InputActionOrigin_SteamController_RightPad_Swipe.Name", "InputActionOrigin_SteamController_RightPad_Swipe" },
		{ "InputActionOrigin_SteamController_RightPad_Touch.Name", "InputActionOrigin_SteamController_RightPad_Touch" },
		{ "InputActionOrigin_SteamController_RightTrigger_Click.Name", "InputActionOrigin_SteamController_RightTrigger_Click" },
		{ "InputActionOrigin_SteamController_RightTrigger_Pull.Name", "InputActionOrigin_SteamController_RightTrigger_Pull" },
		{ "InputActionOrigin_SteamController_Start.Name", "InputActionOrigin_SteamController_Start" },
		{ "InputActionOrigin_SteamController_X.Name", "InputActionOrigin_SteamController_X" },
		{ "InputActionOrigin_SteamController_Y.Name", "InputActionOrigin_SteamController_Y" },
		{ "InputActionOrigin_SteamDeck_A.Comment", "// Added in SDK 1.53\n" },
		{ "InputActionOrigin_SteamDeck_A.Name", "InputActionOrigin_SteamDeck_A" },
		{ "InputActionOrigin_SteamDeck_A.ToolTip", "Added in SDK 1.53" },
		{ "InputActionOrigin_SteamDeck_B.Name", "InputActionOrigin_SteamDeck_B" },
		{ "InputActionOrigin_SteamDeck_DPad_East.Name", "InputActionOrigin_SteamDeck_DPad_East" },
		{ "InputActionOrigin_SteamDeck_DPad_Move.Name", "InputActionOrigin_SteamDeck_DPad_Move" },
		{ "InputActionOrigin_SteamDeck_DPad_North.Name", "InputActionOrigin_SteamDeck_DPad_North" },
		{ "InputActionOrigin_SteamDeck_DPad_South.Name", "InputActionOrigin_SteamDeck_DPad_South" },
		{ "InputActionOrigin_SteamDeck_DPad_West.Name", "InputActionOrigin_SteamDeck_DPad_West" },
		{ "InputActionOrigin_SteamDeck_Gyro_Move.Name", "InputActionOrigin_SteamDeck_Gyro_Move" },
		{ "InputActionOrigin_SteamDeck_Gyro_Pitch.Name", "InputActionOrigin_SteamDeck_Gyro_Pitch" },
		{ "InputActionOrigin_SteamDeck_Gyro_Roll.Name", "InputActionOrigin_SteamDeck_Gyro_Roll" },
		{ "InputActionOrigin_SteamDeck_Gyro_Yaw.Name", "InputActionOrigin_SteamDeck_Gyro_Yaw" },
		{ "InputActionOrigin_SteamDeck_L1.Name", "InputActionOrigin_SteamDeck_L1" },
		{ "InputActionOrigin_SteamDeck_L2.Name", "InputActionOrigin_SteamDeck_L2" },
		{ "InputActionOrigin_SteamDeck_L2_SoftPull.Name", "InputActionOrigin_SteamDeck_L2_SoftPull" },
		{ "InputActionOrigin_SteamDeck_L3.Name", "InputActionOrigin_SteamDeck_L3" },
		{ "InputActionOrigin_SteamDeck_L4.Name", "InputActionOrigin_SteamDeck_L4" },
		{ "InputActionOrigin_SteamDeck_L5.Name", "InputActionOrigin_SteamDeck_L5" },
		{ "InputActionOrigin_SteamDeck_LeftPad_Click.Name", "InputActionOrigin_SteamDeck_LeftPad_Click" },
		{ "InputActionOrigin_SteamDeck_LeftPad_DPadEast.Name", "InputActionOrigin_SteamDeck_LeftPad_DPadEast" },
		{ "InputActionOrigin_SteamDeck_LeftPad_DPadNorth.Name", "InputActionOrigin_SteamDeck_LeftPad_DPadNorth" },
		{ "InputActionOrigin_SteamDeck_LeftPad_DPadSouth.Name", "InputActionOrigin_SteamDeck_LeftPad_DPadSouth" },
		{ "InputActionOrigin_SteamDeck_LeftPad_DPadWest.Name", "InputActionOrigin_SteamDeck_LeftPad_DPadWest" },
		{ "InputActionOrigin_SteamDeck_LeftPad_Swipe.Name", "InputActionOrigin_SteamDeck_LeftPad_Swipe" },
		{ "InputActionOrigin_SteamDeck_LeftPad_Touch.Name", "InputActionOrigin_SteamDeck_LeftPad_Touch" },
		{ "InputActionOrigin_SteamDeck_LeftStick_DPadEast.Name", "InputActionOrigin_SteamDeck_LeftStick_DPadEast" },
		{ "InputActionOrigin_SteamDeck_LeftStick_DPadNorth.Name", "InputActionOrigin_SteamDeck_LeftStick_DPadNorth" },
		{ "InputActionOrigin_SteamDeck_LeftStick_DPadSouth.Name", "InputActionOrigin_SteamDeck_LeftStick_DPadSouth" },
		{ "InputActionOrigin_SteamDeck_LeftStick_DPadWest.Name", "InputActionOrigin_SteamDeck_LeftStick_DPadWest" },
		{ "InputActionOrigin_SteamDeck_LeftStick_Move.Name", "InputActionOrigin_SteamDeck_LeftStick_Move" },
		{ "InputActionOrigin_SteamDeck_LeftStick_Touch.Name", "InputActionOrigin_SteamDeck_LeftStick_Touch" },
		{ "InputActionOrigin_SteamDeck_Menu.Name", "InputActionOrigin_SteamDeck_Menu" },
		{ "InputActionOrigin_SteamDeck_R1.Name", "InputActionOrigin_SteamDeck_R1" },
		{ "InputActionOrigin_SteamDeck_R2.Name", "InputActionOrigin_SteamDeck_R2" },
		{ "InputActionOrigin_SteamDeck_R2_SoftPull.Name", "InputActionOrigin_SteamDeck_R2_SoftPull" },
		{ "InputActionOrigin_SteamDeck_R3.Name", "InputActionOrigin_SteamDeck_R3" },
		{ "InputActionOrigin_SteamDeck_R4.Name", "InputActionOrigin_SteamDeck_R4" },
		{ "InputActionOrigin_SteamDeck_R5.Name", "InputActionOrigin_SteamDeck_R5" },
		{ "InputActionOrigin_SteamDeck_Reserved1.Name", "InputActionOrigin_SteamDeck_Reserved1" },
		{ "InputActionOrigin_SteamDeck_Reserved10.Name", "InputActionOrigin_SteamDeck_Reserved10" },
		{ "InputActionOrigin_SteamDeck_Reserved11.Name", "InputActionOrigin_SteamDeck_Reserved11" },
		{ "InputActionOrigin_SteamDeck_Reserved12.Name", "InputActionOrigin_SteamDeck_Reserved12" },
		{ "InputActionOrigin_SteamDeck_Reserved13.Name", "InputActionOrigin_SteamDeck_Reserved13" },
		{ "InputActionOrigin_SteamDeck_Reserved14.Name", "InputActionOrigin_SteamDeck_Reserved14" },
		{ "InputActionOrigin_SteamDeck_Reserved15.Name", "InputActionOrigin_SteamDeck_Reserved15" },
		{ "InputActionOrigin_SteamDeck_Reserved16.Name", "InputActionOrigin_SteamDeck_Reserved16" },
		{ "InputActionOrigin_SteamDeck_Reserved17.Name", "InputActionOrigin_SteamDeck_Reserved17" },
		{ "InputActionOrigin_SteamDeck_Reserved18.Name", "InputActionOrigin_SteamDeck_Reserved18" },
		{ "InputActionOrigin_SteamDeck_Reserved19.Name", "InputActionOrigin_SteamDeck_Reserved19" },
		{ "InputActionOrigin_SteamDeck_Reserved2.Name", "InputActionOrigin_SteamDeck_Reserved2" },
		{ "InputActionOrigin_SteamDeck_Reserved20.Name", "InputActionOrigin_SteamDeck_Reserved20" },
		{ "InputActionOrigin_SteamDeck_Reserved3.Name", "InputActionOrigin_SteamDeck_Reserved3" },
		{ "InputActionOrigin_SteamDeck_Reserved4.Name", "InputActionOrigin_SteamDeck_Reserved4" },
		{ "InputActionOrigin_SteamDeck_Reserved5.Name", "InputActionOrigin_SteamDeck_Reserved5" },
		{ "InputActionOrigin_SteamDeck_Reserved6.Name", "InputActionOrigin_SteamDeck_Reserved6" },
		{ "InputActionOrigin_SteamDeck_Reserved7.Name", "InputActionOrigin_SteamDeck_Reserved7" },
		{ "InputActionOrigin_SteamDeck_Reserved8.Name", "InputActionOrigin_SteamDeck_Reserved8" },
		{ "InputActionOrigin_SteamDeck_Reserved9.Name", "InputActionOrigin_SteamDeck_Reserved9" },
		{ "InputActionOrigin_SteamDeck_RightPad_Click.Name", "InputActionOrigin_SteamDeck_RightPad_Click" },
		{ "InputActionOrigin_SteamDeck_RightPad_DPadEast.Name", "InputActionOrigin_SteamDeck_RightPad_DPadEast" },
		{ "InputActionOrigin_SteamDeck_RightPad_DPadNorth.Name", "InputActionOrigin_SteamDeck_RightPad_DPadNorth" },
		{ "InputActionOrigin_SteamDeck_RightPad_DPadSouth.Name", "InputActionOrigin_SteamDeck_RightPad_DPadSouth" },
		{ "InputActionOrigin_SteamDeck_RightPad_DPadWest.Name", "InputActionOrigin_SteamDeck_RightPad_DPadWest" },
		{ "InputActionOrigin_SteamDeck_RightPad_Swipe.Name", "InputActionOrigin_SteamDeck_RightPad_Swipe" },
		{ "InputActionOrigin_SteamDeck_RightPad_Touch.Name", "InputActionOrigin_SteamDeck_RightPad_Touch" },
		{ "InputActionOrigin_SteamDeck_RightStick_DPadEast.Name", "InputActionOrigin_SteamDeck_RightStick_DPadEast" },
		{ "InputActionOrigin_SteamDeck_RightStick_DPadNorth.Name", "InputActionOrigin_SteamDeck_RightStick_DPadNorth" },
		{ "InputActionOrigin_SteamDeck_RightStick_DPadSouth.Name", "InputActionOrigin_SteamDeck_RightStick_DPadSouth" },
		{ "InputActionOrigin_SteamDeck_RightStick_DPadWest.Name", "InputActionOrigin_SteamDeck_RightStick_DPadWest" },
		{ "InputActionOrigin_SteamDeck_RightStick_Move.Name", "InputActionOrigin_SteamDeck_RightStick_Move" },
		{ "InputActionOrigin_SteamDeck_RightStick_Touch.Name", "InputActionOrigin_SteamDeck_RightStick_Touch" },
		{ "InputActionOrigin_SteamDeck_View.Name", "InputActionOrigin_SteamDeck_View" },
		{ "InputActionOrigin_SteamDeck_X.Name", "InputActionOrigin_SteamDeck_X" },
		{ "InputActionOrigin_SteamDeck_Y.Name", "InputActionOrigin_SteamDeck_Y" },
		{ "InputActionOrigin_Switch_A.Comment", "// Switch - Pro or Joycons used as a single input device.\n// This does not apply to a single joycon\n" },
		{ "InputActionOrigin_Switch_A.Name", "InputActionOrigin_Switch_A" },
		{ "InputActionOrigin_Switch_A.ToolTip", "Switch - Pro or Joycons used as a single input device.\nThis does not apply to a single joycon" },
		{ "InputActionOrigin_Switch_B.Name", "InputActionOrigin_Switch_B" },
		{ "InputActionOrigin_Switch_Capture.Comment", "//Back\n" },
		{ "InputActionOrigin_Switch_Capture.Name", "InputActionOrigin_Switch_Capture" },
		{ "InputActionOrigin_Switch_Capture.ToolTip", "Back" },
		{ "InputActionOrigin_Switch_DPad_East.Name", "InputActionOrigin_Switch_DPad_East" },
		{ "InputActionOrigin_Switch_DPad_Move.Comment", "// Primary Gyro in Pro Controller, or Right JoyCon\n" },
		{ "InputActionOrigin_Switch_DPad_Move.Name", "InputActionOrigin_Switch_DPad_Move" },
		{ "InputActionOrigin_Switch_DPad_Move.ToolTip", "Primary Gyro in Pro Controller, or Right JoyCon" },
		{ "InputActionOrigin_Switch_DPad_North.Name", "InputActionOrigin_Switch_DPad_North" },
		{ "InputActionOrigin_Switch_DPad_South.Name", "InputActionOrigin_Switch_DPad_South" },
		{ "InputActionOrigin_Switch_DPad_West.Name", "InputActionOrigin_Switch_DPad_West" },
		{ "InputActionOrigin_Switch_LeftBumper.Name", "InputActionOrigin_Switch_LeftBumper" },
		{ "InputActionOrigin_Switch_LeftGrip_Lower.Name", "InputActionOrigin_Switch_LeftGrip_Lower" },
		{ "InputActionOrigin_Switch_LeftGrip_Upper.Comment", "// Left JoyCon SR Button\n" },
		{ "InputActionOrigin_Switch_LeftGrip_Upper.Name", "InputActionOrigin_Switch_LeftGrip_Upper" },
		{ "InputActionOrigin_Switch_LeftGrip_Upper.ToolTip", "Left JoyCon SR Button" },
		{ "InputActionOrigin_Switch_LeftGyro_Move.Comment", "// Right JoyCon Gyro generally should correspond to Pro's single gyro\n" },
		{ "InputActionOrigin_Switch_LeftGyro_Move.Name", "InputActionOrigin_Switch_LeftGyro_Move" },
		{ "InputActionOrigin_Switch_LeftGyro_Move.ToolTip", "Right JoyCon Gyro generally should correspond to Pro's single gyro" },
		{ "InputActionOrigin_Switch_LeftGyro_Pitch.Name", "InputActionOrigin_Switch_LeftGyro_Pitch" },
		{ "InputActionOrigin_Switch_LeftGyro_Roll.Name", "InputActionOrigin_Switch_LeftGyro_Roll" },
		{ "InputActionOrigin_Switch_LeftGyro_Yaw.Name", "InputActionOrigin_Switch_LeftGyro_Yaw" },
		{ "InputActionOrigin_Switch_LeftStick_Click.Name", "InputActionOrigin_Switch_LeftStick_Click" },
		{ "InputActionOrigin_Switch_LeftStick_DPadEast.Name", "InputActionOrigin_Switch_LeftStick_DPadEast" },
		{ "InputActionOrigin_Switch_LeftStick_DPadNorth.Name", "InputActionOrigin_Switch_LeftStick_DPadNorth" },
		{ "InputActionOrigin_Switch_LeftStick_DPadSouth.Name", "InputActionOrigin_Switch_LeftStick_DPadSouth" },
		{ "InputActionOrigin_Switch_LeftStick_DPadWest.Name", "InputActionOrigin_Switch_LeftStick_DPadWest" },
		{ "InputActionOrigin_Switch_LeftStick_Move.Name", "InputActionOrigin_Switch_LeftStick_Move" },
		{ "InputActionOrigin_Switch_LeftTrigger_Click.Name", "InputActionOrigin_Switch_LeftTrigger_Click" },
		{ "InputActionOrigin_Switch_LeftTrigger_Pull.Name", "InputActionOrigin_Switch_LeftTrigger_Pull" },
		{ "InputActionOrigin_Switch_Minus.Comment", "//Start\n" },
		{ "InputActionOrigin_Switch_Minus.Name", "InputActionOrigin_Switch_Minus" },
		{ "InputActionOrigin_Switch_Minus.ToolTip", "Start" },
		{ "InputActionOrigin_Switch_Plus.Name", "InputActionOrigin_Switch_Plus" },
		{ "InputActionOrigin_Switch_ProGyro_Move.Name", "InputActionOrigin_Switch_ProGyro_Move" },
		{ "InputActionOrigin_Switch_ProGyro_Pitch.Comment", "// Primary Gyro in Pro Controller, or Right JoyCon\n" },
		{ "InputActionOrigin_Switch_ProGyro_Pitch.Name", "InputActionOrigin_Switch_ProGyro_Pitch" },
		{ "InputActionOrigin_Switch_ProGyro_Pitch.ToolTip", "Primary Gyro in Pro Controller, or Right JoyCon" },
		{ "InputActionOrigin_Switch_ProGyro_Roll.Comment", "// Primary Gyro in Pro Controller, or Right JoyCon\n" },
		{ "InputActionOrigin_Switch_ProGyro_Roll.Name", "InputActionOrigin_Switch_ProGyro_Roll" },
		{ "InputActionOrigin_Switch_ProGyro_Roll.ToolTip", "Primary Gyro in Pro Controller, or Right JoyCon" },
		{ "InputActionOrigin_Switch_ProGyro_Yaw.Comment", "// Primary Gyro in Pro Controller, or Right JoyCon\n" },
		{ "InputActionOrigin_Switch_ProGyro_Yaw.Name", "InputActionOrigin_Switch_ProGyro_Yaw" },
		{ "InputActionOrigin_Switch_ProGyro_Yaw.ToolTip", "Primary Gyro in Pro Controller, or Right JoyCon" },
		{ "InputActionOrigin_Switch_Reserved1.Name", "InputActionOrigin_Switch_Reserved1" },
		{ "InputActionOrigin_Switch_Reserved10.Name", "InputActionOrigin_Switch_Reserved10" },
		{ "InputActionOrigin_Switch_Reserved11.Comment", "// Right JoyCon SR Button\n" },
		{ "InputActionOrigin_Switch_Reserved11.Name", "InputActionOrigin_Switch_Reserved11" },
		{ "InputActionOrigin_Switch_Reserved11.ToolTip", "Right JoyCon SR Button" },
		{ "InputActionOrigin_Switch_Reserved12.Name", "InputActionOrigin_Switch_Reserved12" },
		{ "InputActionOrigin_Switch_Reserved13.Name", "InputActionOrigin_Switch_Reserved13" },
		{ "InputActionOrigin_Switch_Reserved14.Name", "InputActionOrigin_Switch_Reserved14" },
		{ "InputActionOrigin_Switch_Reserved15.Name", "InputActionOrigin_Switch_Reserved15" },
		{ "InputActionOrigin_Switch_Reserved16.Name", "InputActionOrigin_Switch_Reserved16" },
		{ "InputActionOrigin_Switch_Reserved17.Name", "InputActionOrigin_Switch_Reserved17" },
		{ "InputActionOrigin_Switch_Reserved18.Name", "InputActionOrigin_Switch_Reserved18" },
		{ "InputActionOrigin_Switch_Reserved19.Name", "InputActionOrigin_Switch_Reserved19" },
		{ "InputActionOrigin_Switch_Reserved2.Name", "InputActionOrigin_Switch_Reserved2" },
		{ "InputActionOrigin_Switch_Reserved20.Name", "InputActionOrigin_Switch_Reserved20" },
		{ "InputActionOrigin_Switch_Reserved3.Name", "InputActionOrigin_Switch_Reserved3" },
		{ "InputActionOrigin_Switch_Reserved4.Name", "InputActionOrigin_Switch_Reserved4" },
		{ "InputActionOrigin_Switch_Reserved5.Name", "InputActionOrigin_Switch_Reserved5" },
		{ "InputActionOrigin_Switch_Reserved6.Name", "InputActionOrigin_Switch_Reserved6" },
		{ "InputActionOrigin_Switch_Reserved7.Name", "InputActionOrigin_Switch_Reserved7" },
		{ "InputActionOrigin_Switch_Reserved8.Name", "InputActionOrigin_Switch_Reserved8" },
		{ "InputActionOrigin_Switch_Reserved9.Name", "InputActionOrigin_Switch_Reserved9" },
		{ "InputActionOrigin_Switch_RightBumper.Name", "InputActionOrigin_Switch_RightBumper" },
		{ "InputActionOrigin_Switch_RightGrip_Lower.Comment", "// Left JoyCon SL Button\n" },
		{ "InputActionOrigin_Switch_RightGrip_Lower.Name", "InputActionOrigin_Switch_RightGrip_Lower" },
		{ "InputActionOrigin_Switch_RightGrip_Lower.ToolTip", "Left JoyCon SL Button" },
		{ "InputActionOrigin_Switch_RightGrip_Upper.Comment", "// Right JoyCon SL Button\n" },
		{ "InputActionOrigin_Switch_RightGrip_Upper.Name", "InputActionOrigin_Switch_RightGrip_Upper" },
		{ "InputActionOrigin_Switch_RightGrip_Upper.ToolTip", "Right JoyCon SL Button" },
		{ "InputActionOrigin_Switch_RightGyro_Move.Comment", "// Switch JoyCon Specific\n" },
		{ "InputActionOrigin_Switch_RightGyro_Move.Name", "InputActionOrigin_Switch_RightGyro_Move" },
		{ "InputActionOrigin_Switch_RightGyro_Move.ToolTip", "Switch JoyCon Specific" },
		{ "InputActionOrigin_Switch_RightGyro_Pitch.Comment", "// Right JoyCon Gyro generally should correspond to Pro's single gyro\n" },
		{ "InputActionOrigin_Switch_RightGyro_Pitch.Name", "InputActionOrigin_Switch_RightGyro_Pitch" },
		{ "InputActionOrigin_Switch_RightGyro_Pitch.ToolTip", "Right JoyCon Gyro generally should correspond to Pro's single gyro" },
		{ "InputActionOrigin_Switch_RightGyro_Roll.Comment", "// Right JoyCon Gyro generally should correspond to Pro's single gyro\n" },
		{ "InputActionOrigin_Switch_RightGyro_Roll.Name", "InputActionOrigin_Switch_RightGyro_Roll" },
		{ "InputActionOrigin_Switch_RightGyro_Roll.ToolTip", "Right JoyCon Gyro generally should correspond to Pro's single gyro" },
		{ "InputActionOrigin_Switch_RightGyro_Yaw.Comment", "// Right JoyCon Gyro generally should correspond to Pro's single gyro\n" },
		{ "InputActionOrigin_Switch_RightGyro_Yaw.Name", "InputActionOrigin_Switch_RightGyro_Yaw" },
		{ "InputActionOrigin_Switch_RightGyro_Yaw.ToolTip", "Right JoyCon Gyro generally should correspond to Pro's single gyro" },
		{ "InputActionOrigin_Switch_RightStick_Click.Name", "InputActionOrigin_Switch_RightStick_Click" },
		{ "InputActionOrigin_Switch_RightStick_DPadEast.Name", "InputActionOrigin_Switch_RightStick_DPadEast" },
		{ "InputActionOrigin_Switch_RightStick_DPadNorth.Name", "InputActionOrigin_Switch_RightStick_DPadNorth" },
		{ "InputActionOrigin_Switch_RightStick_DPadSouth.Name", "InputActionOrigin_Switch_RightStick_DPadSouth" },
		{ "InputActionOrigin_Switch_RightStick_DPadWest.Name", "InputActionOrigin_Switch_RightStick_DPadWest" },
		{ "InputActionOrigin_Switch_RightStick_Move.Name", "InputActionOrigin_Switch_RightStick_Move" },
		{ "InputActionOrigin_Switch_RightTrigger_Click.Name", "InputActionOrigin_Switch_RightTrigger_Click" },
		{ "InputActionOrigin_Switch_RightTrigger_Pull.Name", "InputActionOrigin_Switch_RightTrigger_Pull" },
		{ "InputActionOrigin_Switch_X.Name", "InputActionOrigin_Switch_X" },
		{ "InputActionOrigin_Switch_Y.Name", "InputActionOrigin_Switch_Y" },
		{ "InputActionOrigin_XBox360_A.Comment", "// XBox 360\n" },
		{ "InputActionOrigin_XBox360_A.Name", "InputActionOrigin_XBox360_A" },
		{ "InputActionOrigin_XBox360_A.ToolTip", "XBox 360" },
		{ "InputActionOrigin_XBox360_B.Name", "InputActionOrigin_XBox360_B" },
		{ "InputActionOrigin_XBox360_Back.Comment", "//Start\n" },
		{ "InputActionOrigin_XBox360_Back.Name", "InputActionOrigin_XBox360_Back" },
		{ "InputActionOrigin_XBox360_Back.ToolTip", "Start" },
		{ "InputActionOrigin_XBox360_DPad_East.Name", "InputActionOrigin_XBox360_DPad_East" },
		{ "InputActionOrigin_XBox360_DPad_Move.Name", "InputActionOrigin_XBox360_DPad_Move" },
		{ "InputActionOrigin_XBox360_DPad_North.Name", "InputActionOrigin_XBox360_DPad_North" },
		{ "InputActionOrigin_XBox360_DPad_South.Name", "InputActionOrigin_XBox360_DPad_South" },
		{ "InputActionOrigin_XBox360_DPad_West.Name", "InputActionOrigin_XBox360_DPad_West" },
		{ "InputActionOrigin_XBox360_LeftBumper.Name", "InputActionOrigin_XBox360_LeftBumper" },
		{ "InputActionOrigin_XBox360_LeftStick_Click.Name", "InputActionOrigin_XBox360_LeftStick_Click" },
		{ "InputActionOrigin_XBox360_LeftStick_DPadEast.Name", "InputActionOrigin_XBox360_LeftStick_DPadEast" },
		{ "InputActionOrigin_XBox360_LeftStick_DPadNorth.Name", "InputActionOrigin_XBox360_LeftStick_DPadNorth" },
		{ "InputActionOrigin_XBox360_LeftStick_DPadSouth.Name", "InputActionOrigin_XBox360_LeftStick_DPadSouth" },
		{ "InputActionOrigin_XBox360_LeftStick_DPadWest.Name", "InputActionOrigin_XBox360_LeftStick_DPadWest" },
		{ "InputActionOrigin_XBox360_LeftStick_Move.Name", "InputActionOrigin_XBox360_LeftStick_Move" },
		{ "InputActionOrigin_XBox360_LeftTrigger_Click.Name", "InputActionOrigin_XBox360_LeftTrigger_Click" },
		{ "InputActionOrigin_XBox360_LeftTrigger_Pull.Comment", "//Back\n" },
		{ "InputActionOrigin_XBox360_LeftTrigger_Pull.Name", "InputActionOrigin_XBox360_LeftTrigger_Pull" },
		{ "InputActionOrigin_XBox360_LeftTrigger_Pull.ToolTip", "Back" },
		{ "InputActionOrigin_XBox360_Reserved1.Name", "InputActionOrigin_XBox360_Reserved1" },
		{ "InputActionOrigin_XBox360_Reserved10.Name", "InputActionOrigin_XBox360_Reserved10" },
		{ "InputActionOrigin_XBox360_Reserved2.Name", "InputActionOrigin_XBox360_Reserved2" },
		{ "InputActionOrigin_XBox360_Reserved3.Name", "InputActionOrigin_XBox360_Reserved3" },
		{ "InputActionOrigin_XBox360_Reserved4.Name", "InputActionOrigin_XBox360_Reserved4" },
		{ "InputActionOrigin_XBox360_Reserved5.Name", "InputActionOrigin_XBox360_Reserved5" },
		{ "InputActionOrigin_XBox360_Reserved6.Name", "InputActionOrigin_XBox360_Reserved6" },
		{ "InputActionOrigin_XBox360_Reserved7.Name", "InputActionOrigin_XBox360_Reserved7" },
		{ "InputActionOrigin_XBox360_Reserved8.Name", "InputActionOrigin_XBox360_Reserved8" },
		{ "InputActionOrigin_XBox360_Reserved9.Name", "InputActionOrigin_XBox360_Reserved9" },
		{ "InputActionOrigin_XBox360_RightBumper.Name", "InputActionOrigin_XBox360_RightBumper" },
		{ "InputActionOrigin_XBox360_RightStick_Click.Name", "InputActionOrigin_XBox360_RightStick_Click" },
		{ "InputActionOrigin_XBox360_RightStick_DPadEast.Name", "InputActionOrigin_XBox360_RightStick_DPadEast" },
		{ "InputActionOrigin_XBox360_RightStick_DPadNorth.Name", "InputActionOrigin_XBox360_RightStick_DPadNorth" },
		{ "InputActionOrigin_XBox360_RightStick_DPadSouth.Name", "InputActionOrigin_XBox360_RightStick_DPadSouth" },
		{ "InputActionOrigin_XBox360_RightStick_DPadWest.Name", "InputActionOrigin_XBox360_RightStick_DPadWest" },
		{ "InputActionOrigin_XBox360_RightStick_Move.Name", "InputActionOrigin_XBox360_RightStick_Move" },
		{ "InputActionOrigin_XBox360_RightTrigger_Click.Name", "InputActionOrigin_XBox360_RightTrigger_Click" },
		{ "InputActionOrigin_XBox360_RightTrigger_Pull.Name", "InputActionOrigin_XBox360_RightTrigger_Pull" },
		{ "InputActionOrigin_XBox360_Start.Name", "InputActionOrigin_XBox360_Start" },
		{ "InputActionOrigin_XBox360_X.Name", "InputActionOrigin_XBox360_X" },
		{ "InputActionOrigin_XBox360_Y.Name", "InputActionOrigin_XBox360_Y" },
		{ "InputActionOrigin_XBoxOne_A.Comment", "// XBox One\n" },
		{ "InputActionOrigin_XBoxOne_A.Name", "InputActionOrigin_XBoxOne_A" },
		{ "InputActionOrigin_XBoxOne_A.ToolTip", "XBox One" },
		{ "InputActionOrigin_XBoxOne_B.Name", "InputActionOrigin_XBoxOne_B" },
		{ "InputActionOrigin_XBoxOne_DPad_East.Name", "InputActionOrigin_XBoxOne_DPad_East" },
		{ "InputActionOrigin_XBoxOne_DPad_Move.Name", "InputActionOrigin_XBoxOne_DPad_Move" },
		{ "InputActionOrigin_XBoxOne_DPad_North.Name", "InputActionOrigin_XBoxOne_DPad_North" },
		{ "InputActionOrigin_XBoxOne_DPad_South.Name", "InputActionOrigin_XBoxOne_DPad_South" },
		{ "InputActionOrigin_XBoxOne_DPad_West.Name", "InputActionOrigin_XBoxOne_DPad_West" },
		{ "InputActionOrigin_XBoxOne_LeftBumper.Name", "InputActionOrigin_XBoxOne_LeftBumper" },
		{ "InputActionOrigin_XBoxOne_LeftGrip_Lower.Name", "InputActionOrigin_XBoxOne_LeftGrip_Lower" },
		{ "InputActionOrigin_XBoxOne_LeftGrip_Upper.Name", "InputActionOrigin_XBoxOne_LeftGrip_Upper" },
		{ "InputActionOrigin_XBoxOne_LeftStick_Click.Name", "InputActionOrigin_XBoxOne_LeftStick_Click" },
		{ "InputActionOrigin_XBoxOne_LeftStick_DPadEast.Name", "InputActionOrigin_XBoxOne_LeftStick_DPadEast" },
		{ "InputActionOrigin_XBoxOne_LeftStick_DPadNorth.Name", "InputActionOrigin_XBoxOne_LeftStick_DPadNorth" },
		{ "InputActionOrigin_XBoxOne_LeftStick_DPadSouth.Name", "InputActionOrigin_XBoxOne_LeftStick_DPadSouth" },
		{ "InputActionOrigin_XBoxOne_LeftStick_DPadWest.Name", "InputActionOrigin_XBoxOne_LeftStick_DPadWest" },
		{ "InputActionOrigin_XBoxOne_LeftStick_Move.Name", "InputActionOrigin_XBoxOne_LeftStick_Move" },
		{ "InputActionOrigin_XBoxOne_LeftTrigger_Click.Name", "InputActionOrigin_XBoxOne_LeftTrigger_Click" },
		{ "InputActionOrigin_XBoxOne_LeftTrigger_Pull.Comment", "//Back\n" },
		{ "InputActionOrigin_XBoxOne_LeftTrigger_Pull.Name", "InputActionOrigin_XBoxOne_LeftTrigger_Pull" },
		{ "InputActionOrigin_XBoxOne_LeftTrigger_Pull.ToolTip", "Back" },
		{ "InputActionOrigin_XBoxOne_Menu.Name", "InputActionOrigin_XBoxOne_Menu" },
		{ "InputActionOrigin_XBoxOne_Reserved10.Name", "InputActionOrigin_XBoxOne_Reserved10" },
		{ "InputActionOrigin_XBoxOne_Reserved6.Comment", "// Xbox Series X controllers only\n" },
		{ "InputActionOrigin_XBoxOne_Reserved6.Name", "InputActionOrigin_XBoxOne_Reserved6" },
		{ "InputActionOrigin_XBoxOne_Reserved6.ToolTip", "Xbox Series X controllers only" },
		{ "InputActionOrigin_XBoxOne_Reserved7.Name", "InputActionOrigin_XBoxOne_Reserved7" },
		{ "InputActionOrigin_XBoxOne_Reserved8.Name", "InputActionOrigin_XBoxOne_Reserved8" },
		{ "InputActionOrigin_XBoxOne_Reserved9.Name", "InputActionOrigin_XBoxOne_Reserved9" },
		{ "InputActionOrigin_XBoxOne_RightBumper.Name", "InputActionOrigin_XBoxOne_RightBumper" },
		{ "InputActionOrigin_XBoxOne_RightGrip_Lower.Name", "InputActionOrigin_XBoxOne_RightGrip_Lower" },
		{ "InputActionOrigin_XBoxOne_RightGrip_Upper.Name", "InputActionOrigin_XBoxOne_RightGrip_Upper" },
		{ "InputActionOrigin_XBoxOne_RightStick_Click.Name", "InputActionOrigin_XBoxOne_RightStick_Click" },
		{ "InputActionOrigin_XBoxOne_RightStick_DPadEast.Name", "InputActionOrigin_XBoxOne_RightStick_DPadEast" },
		{ "InputActionOrigin_XBoxOne_RightStick_DPadNorth.Name", "InputActionOrigin_XBoxOne_RightStick_DPadNorth" },
		{ "InputActionOrigin_XBoxOne_RightStick_DPadSouth.Name", "InputActionOrigin_XBoxOne_RightStick_DPadSouth" },
		{ "InputActionOrigin_XBoxOne_RightStick_DPadWest.Name", "InputActionOrigin_XBoxOne_RightStick_DPadWest" },
		{ "InputActionOrigin_XBoxOne_RightStick_Move.Name", "InputActionOrigin_XBoxOne_RightStick_Move" },
		{ "InputActionOrigin_XBoxOne_RightTrigger_Click.Name", "InputActionOrigin_XBoxOne_RightTrigger_Click" },
		{ "InputActionOrigin_XBoxOne_RightTrigger_Pull.Name", "InputActionOrigin_XBoxOne_RightTrigger_Pull" },
		{ "InputActionOrigin_XBoxOne_Share.Name", "InputActionOrigin_XBoxOne_Share" },
		{ "InputActionOrigin_XBoxOne_View.Comment", "//Start\n" },
		{ "InputActionOrigin_XBoxOne_View.Name", "InputActionOrigin_XBoxOne_View" },
		{ "InputActionOrigin_XBoxOne_View.ToolTip", "Start" },
		{ "InputActionOrigin_XBoxOne_X.Name", "InputActionOrigin_XBoxOne_X" },
		{ "InputActionOrigin_XBoxOne_Y.Name", "InputActionOrigin_XBoxOne_Y" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamCoreInputActionOrigin",
		"ESteamCoreInputActionOrigin",
		Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreInputActionOrigin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreInputActionOrigin.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamCoreInputActionOrigin.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreXboxOrigin;
	static UEnum* ESteamCoreXboxOrigin_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreXboxOrigin.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamCoreXboxOrigin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreXboxOrigin"));
		}
		return Z_Registration_Info_UEnum_ESteamCoreXboxOrigin.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreXboxOrigin>()
	{
		return ESteamCoreXboxOrigin_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Statics::Enumerators[] = {
		{ "ESteamCoreXboxOrigin::A", (int64)ESteamCoreXboxOrigin::A },
		{ "ESteamCoreXboxOrigin::B", (int64)ESteamCoreXboxOrigin::B },
		{ "ESteamCoreXboxOrigin::X", (int64)ESteamCoreXboxOrigin::X },
		{ "ESteamCoreXboxOrigin::Y", (int64)ESteamCoreXboxOrigin::Y },
		{ "ESteamCoreXboxOrigin::LeftBumper", (int64)ESteamCoreXboxOrigin::LeftBumper },
		{ "ESteamCoreXboxOrigin::RightBumper", (int64)ESteamCoreXboxOrigin::RightBumper },
		{ "ESteamCoreXboxOrigin::Menu", (int64)ESteamCoreXboxOrigin::Menu },
		{ "ESteamCoreXboxOrigin::View", (int64)ESteamCoreXboxOrigin::View },
		{ "ESteamCoreXboxOrigin::LeftTrigger_Pull", (int64)ESteamCoreXboxOrigin::LeftTrigger_Pull },
		{ "ESteamCoreXboxOrigin::LeftTrigger_Click", (int64)ESteamCoreXboxOrigin::LeftTrigger_Click },
		{ "ESteamCoreXboxOrigin::RightTrigger_Pull", (int64)ESteamCoreXboxOrigin::RightTrigger_Pull },
		{ "ESteamCoreXboxOrigin::RightTrigger_Click", (int64)ESteamCoreXboxOrigin::RightTrigger_Click },
		{ "ESteamCoreXboxOrigin::LeftStick_Move", (int64)ESteamCoreXboxOrigin::LeftStick_Move },
		{ "ESteamCoreXboxOrigin::LeftStick_Click", (int64)ESteamCoreXboxOrigin::LeftStick_Click },
		{ "ESteamCoreXboxOrigin::LeftStick_DPadNorth", (int64)ESteamCoreXboxOrigin::LeftStick_DPadNorth },
		{ "ESteamCoreXboxOrigin::LeftStick_DPadSouth", (int64)ESteamCoreXboxOrigin::LeftStick_DPadSouth },
		{ "ESteamCoreXboxOrigin::LeftStick_DPadWest", (int64)ESteamCoreXboxOrigin::LeftStick_DPadWest },
		{ "ESteamCoreXboxOrigin::LeftStick_DPadEast", (int64)ESteamCoreXboxOrigin::LeftStick_DPadEast },
		{ "ESteamCoreXboxOrigin::RightStick_Move", (int64)ESteamCoreXboxOrigin::RightStick_Move },
		{ "ESteamCoreXboxOrigin::RightStick_Click", (int64)ESteamCoreXboxOrigin::RightStick_Click },
		{ "ESteamCoreXboxOrigin::RightStick_DPadNorth", (int64)ESteamCoreXboxOrigin::RightStick_DPadNorth },
		{ "ESteamCoreXboxOrigin::RightStick_DPadSouth", (int64)ESteamCoreXboxOrigin::RightStick_DPadSouth },
		{ "ESteamCoreXboxOrigin::RightStick_DPadWest", (int64)ESteamCoreXboxOrigin::RightStick_DPadWest },
		{ "ESteamCoreXboxOrigin::RightStick_DPadEast", (int64)ESteamCoreXboxOrigin::RightStick_DPadEast },
		{ "ESteamCoreXboxOrigin::DPad_North", (int64)ESteamCoreXboxOrigin::DPad_North },
		{ "ESteamCoreXboxOrigin::DPad_South", (int64)ESteamCoreXboxOrigin::DPad_South },
		{ "ESteamCoreXboxOrigin::DPad_West", (int64)ESteamCoreXboxOrigin::DPad_West },
		{ "ESteamCoreXboxOrigin::DPad_East", (int64)ESteamCoreXboxOrigin::DPad_East },
		{ "ESteamCoreXboxOrigin::Count", (int64)ESteamCoreXboxOrigin::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Statics::Enum_MetaDataParams[] = {
		{ "A.Name", "ESteamCoreXboxOrigin::A" },
		{ "B.Name", "ESteamCoreXboxOrigin::B" },
		{ "BlueprintType", "true" },
		{ "Count.Name", "ESteamCoreXboxOrigin::Count" },
		{ "DPad_East.Name", "ESteamCoreXboxOrigin::DPad_East" },
		{ "DPad_North.Name", "ESteamCoreXboxOrigin::DPad_North" },
		{ "DPad_South.Name", "ESteamCoreXboxOrigin::DPad_South" },
		{ "DPad_West.Name", "ESteamCoreXboxOrigin::DPad_West" },
		{ "LeftBumper.Name", "ESteamCoreXboxOrigin::LeftBumper" },
		{ "LeftStick_Click.Name", "ESteamCoreXboxOrigin::LeftStick_Click" },
		{ "LeftStick_DPadEast.Name", "ESteamCoreXboxOrigin::LeftStick_DPadEast" },
		{ "LeftStick_DPadNorth.Name", "ESteamCoreXboxOrigin::LeftStick_DPadNorth" },
		{ "LeftStick_DPadSouth.Name", "ESteamCoreXboxOrigin::LeftStick_DPadSouth" },
		{ "LeftStick_DPadWest.Name", "ESteamCoreXboxOrigin::LeftStick_DPadWest" },
		{ "LeftStick_Move.Name", "ESteamCoreXboxOrigin::LeftStick_Move" },
		{ "LeftTrigger_Click.Name", "ESteamCoreXboxOrigin::LeftTrigger_Click" },
		{ "LeftTrigger_Pull.Name", "ESteamCoreXboxOrigin::LeftTrigger_Pull" },
		{ "Menu.Name", "ESteamCoreXboxOrigin::Menu" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "RightBumper.Name", "ESteamCoreXboxOrigin::RightBumper" },
		{ "RightStick_Click.Name", "ESteamCoreXboxOrigin::RightStick_Click" },
		{ "RightStick_DPadEast.Name", "ESteamCoreXboxOrigin::RightStick_DPadEast" },
		{ "RightStick_DPadNorth.Name", "ESteamCoreXboxOrigin::RightStick_DPadNorth" },
		{ "RightStick_DPadSouth.Name", "ESteamCoreXboxOrigin::RightStick_DPadSouth" },
		{ "RightStick_DPadWest.Name", "ESteamCoreXboxOrigin::RightStick_DPadWest" },
		{ "RightStick_Move.Name", "ESteamCoreXboxOrigin::RightStick_Move" },
		{ "RightTrigger_Click.Name", "ESteamCoreXboxOrigin::RightTrigger_Click" },
		{ "RightTrigger_Pull.Name", "ESteamCoreXboxOrigin::RightTrigger_Pull" },
		{ "View.Name", "ESteamCoreXboxOrigin::View" },
		{ "X.Name", "ESteamCoreXboxOrigin::X" },
		{ "Y.Name", "ESteamCoreXboxOrigin::Y" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamCoreXboxOrigin",
		"ESteamCoreXboxOrigin",
		Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreXboxOrigin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreXboxOrigin.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamCoreXboxOrigin.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreControllerPad;
	static UEnum* ESteamCoreControllerPad_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreControllerPad.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamCoreControllerPad.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreControllerPad"));
		}
		return Z_Registration_Info_UEnum_ESteamCoreControllerPad.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreControllerPad>()
	{
		return ESteamCoreControllerPad_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Statics::Enumerators[] = {
		{ "ESteamCoreControllerPad::Left", (int64)ESteamCoreControllerPad::Left },
		{ "ESteamCoreControllerPad::Right", (int64)ESteamCoreControllerPad::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.Name", "ESteamCoreControllerPad::Left" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "Right.Name", "ESteamCoreControllerPad::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamCoreControllerPad",
		"ESteamCoreControllerPad",
		Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreControllerPad.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreControllerPad.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamCoreControllerPad.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreInputType;
	static UEnum* ESteamCoreInputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreInputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamCoreInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputType, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputType"));
		}
		return Z_Registration_Info_UEnum_ESteamCoreInputType.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputType>()
	{
		return ESteamCoreInputType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Statics::Enumerators[] = {
		{ "ESteamCoreInputType::k_ESteamInputType_Unknown", (int64)ESteamCoreInputType::k_ESteamInputType_Unknown },
		{ "ESteamCoreInputType::k_ESteamInputType_SteamController", (int64)ESteamCoreInputType::k_ESteamInputType_SteamController },
		{ "ESteamCoreInputType::k_ESteamInputType_XBox360Controller", (int64)ESteamCoreInputType::k_ESteamInputType_XBox360Controller },
		{ "ESteamCoreInputType::k_ESteamInputType_XBoxOneController", (int64)ESteamCoreInputType::k_ESteamInputType_XBoxOneController },
		{ "ESteamCoreInputType::k_ESteamInputType_GenericGamepad", (int64)ESteamCoreInputType::k_ESteamInputType_GenericGamepad },
		{ "ESteamCoreInputType::k_ESteamInputType_PS4Controller", (int64)ESteamCoreInputType::k_ESteamInputType_PS4Controller },
		{ "ESteamCoreInputType::k_ESteamInputType_AppleMFiController", (int64)ESteamCoreInputType::k_ESteamInputType_AppleMFiController },
		{ "ESteamCoreInputType::k_ESteamInputType_AndroidController", (int64)ESteamCoreInputType::k_ESteamInputType_AndroidController },
		{ "ESteamCoreInputType::k_ESteamInputType_SwitchJoyConPair", (int64)ESteamCoreInputType::k_ESteamInputType_SwitchJoyConPair },
		{ "ESteamCoreInputType::k_ESteamInputType_SwitchJoyConSingle", (int64)ESteamCoreInputType::k_ESteamInputType_SwitchJoyConSingle },
		{ "ESteamCoreInputType::k_ESteamInputType_SwitchProController", (int64)ESteamCoreInputType::k_ESteamInputType_SwitchProController },
		{ "ESteamCoreInputType::k_ESteamInputType_MobileTouch", (int64)ESteamCoreInputType::k_ESteamInputType_MobileTouch },
		{ "ESteamCoreInputType::k_ESteamInputType_PS3Controller", (int64)ESteamCoreInputType::k_ESteamInputType_PS3Controller },
		{ "ESteamCoreInputType::k_ESteamInputType_PS5Controller", (int64)ESteamCoreInputType::k_ESteamInputType_PS5Controller },
		{ "ESteamCoreInputType::k_ESteamInputType_SteamDeckController", (int64)ESteamCoreInputType::k_ESteamInputType_SteamDeckController },
		{ "ESteamCoreInputType::k_ESteamInputType_Count", (int64)ESteamCoreInputType::k_ESteamInputType_Count },
		{ "ESteamCoreInputType::k_ESteamInputType_MaximumPossibleValue", (int64)ESteamCoreInputType::k_ESteamInputType_MaximumPossibleValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "k_ESteamInputType_AndroidController.Comment", "// Unused\n" },
		{ "k_ESteamInputType_AndroidController.Name", "ESteamCoreInputType::k_ESteamInputType_AndroidController" },
		{ "k_ESteamInputType_AndroidController.ToolTip", "Unused" },
		{ "k_ESteamInputType_AppleMFiController.Name", "ESteamCoreInputType::k_ESteamInputType_AppleMFiController" },
		{ "k_ESteamInputType_Count.Comment", "// Added in SDK 153\n" },
		{ "k_ESteamInputType_Count.Name", "ESteamCoreInputType::k_ESteamInputType_Count" },
		{ "k_ESteamInputType_Count.ToolTip", "Added in SDK 153" },
		{ "k_ESteamInputType_GenericGamepad.Name", "ESteamCoreInputType::k_ESteamInputType_GenericGamepad" },
		{ "k_ESteamInputType_MaximumPossibleValue.Name", "ESteamCoreInputType::k_ESteamInputType_MaximumPossibleValue" },
		{ "k_ESteamInputType_MobileTouch.Name", "ESteamCoreInputType::k_ESteamInputType_MobileTouch" },
		{ "k_ESteamInputType_PS3Controller.Comment", "// Steam Link App On-screen Virtual Controller\n" },
		{ "k_ESteamInputType_PS3Controller.Name", "ESteamCoreInputType::k_ESteamInputType_PS3Controller" },
		{ "k_ESteamInputType_PS3Controller.ToolTip", "Steam Link App On-screen Virtual Controller" },
		{ "k_ESteamInputType_PS4Controller.Comment", "// DirectInput controllers\n" },
		{ "k_ESteamInputType_PS4Controller.Name", "ESteamCoreInputType::k_ESteamInputType_PS4Controller" },
		{ "k_ESteamInputType_PS4Controller.ToolTip", "DirectInput controllers" },
		{ "k_ESteamInputType_PS5Controller.Comment", "// Currently uses PS4 Origins\n" },
		{ "k_ESteamInputType_PS5Controller.Name", "ESteamCoreInputType::k_ESteamInputType_PS5Controller" },
		{ "k_ESteamInputType_PS5Controller.ToolTip", "Currently uses PS4 Origins" },
		{ "k_ESteamInputType_SteamController.Name", "ESteamCoreInputType::k_ESteamInputType_SteamController" },
		{ "k_ESteamInputType_SteamDeckController.Comment", "// Added in SDK 151\n" },
		{ "k_ESteamInputType_SteamDeckController.Name", "ESteamCoreInputType::k_ESteamInputType_SteamDeckController" },
		{ "k_ESteamInputType_SteamDeckController.ToolTip", "Added in SDK 151" },
		{ "k_ESteamInputType_SwitchJoyConPair.Comment", "// Unused\n" },
		{ "k_ESteamInputType_SwitchJoyConPair.Name", "ESteamCoreInputType::k_ESteamInputType_SwitchJoyConPair" },
		{ "k_ESteamInputType_SwitchJoyConPair.ToolTip", "Unused" },
		{ "k_ESteamInputType_SwitchJoyConSingle.Comment", "// Unused\n" },
		{ "k_ESteamInputType_SwitchJoyConSingle.Name", "ESteamCoreInputType::k_ESteamInputType_SwitchJoyConSingle" },
		{ "k_ESteamInputType_SwitchJoyConSingle.ToolTip", "Unused" },
		{ "k_ESteamInputType_SwitchProController.Comment", "// Unused\n" },
		{ "k_ESteamInputType_SwitchProController.Name", "ESteamCoreInputType::k_ESteamInputType_SwitchProController" },
		{ "k_ESteamInputType_SwitchProController.ToolTip", "Unused" },
		{ "k_ESteamInputType_Unknown.Name", "ESteamCoreInputType::k_ESteamInputType_Unknown" },
		{ "k_ESteamInputType_XBox360Controller.Name", "ESteamCoreInputType::k_ESteamInputType_XBox360Controller" },
		{ "k_ESteamInputType_XBoxOneController.Name", "ESteamCoreInputType::k_ESteamInputType_XBoxOneController" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamCoreInputType",
		"ESteamCoreInputType",
		Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputType()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreInputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreInputType.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamCoreInputType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreInputLEDFlag;
	static UEnum* ESteamCoreInputLEDFlag_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreInputLEDFlag.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamCoreInputLEDFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputLEDFlag"));
		}
		return Z_Registration_Info_UEnum_ESteamCoreInputLEDFlag.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputLEDFlag>()
	{
		return ESteamCoreInputLEDFlag_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Statics::Enumerators[] = {
		{ "ESteamCoreInputLEDFlag::SetColor", (int64)ESteamCoreInputLEDFlag::SetColor },
		{ "ESteamCoreInputLEDFlag::RestoreUserDefault", (int64)ESteamCoreInputLEDFlag::RestoreUserDefault },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "RestoreUserDefault.Name", "ESteamCoreInputLEDFlag::RestoreUserDefault" },
		{ "SetColor.Name", "ESteamCoreInputLEDFlag::SetColor" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamCoreInputLEDFlag",
		"ESteamCoreInputLEDFlag",
		Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreInputLEDFlag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreInputLEDFlag.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamCoreInputLEDFlag.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputAnalogActionData;
class UScriptStruct* FInputAnalogActionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputAnalogActionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputAnalogActionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAnalogActionData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("InputAnalogActionData"));
	}
	return Z_Registration_Info_UScriptStruct_InputAnalogActionData.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputAnalogActionData>()
{
	return FInputAnalogActionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputAnalogActionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAnalogActionData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputAnalogActionData, Mode), Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_MetaData)) }; // 2107210140
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputAnalogActionData, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputAnalogActionData, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((FInputAnalogActionData*)Obj)->bActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputAnalogActionData), &Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputAnalogActionData",
		sizeof(FInputAnalogActionData),
		alignof(FInputAnalogActionData),
		Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionData()
	{
		if (!Z_Registration_Info_UScriptStruct_InputAnalogActionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputAnalogActionData.InnerSingleton, Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputAnalogActionData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputDigitalActionData;
class UScriptStruct* FInputDigitalActionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputDigitalActionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputDigitalActionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDigitalActionData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("InputDigitalActionData"));
	}
	return Z_Registration_Info_UScriptStruct_InputDigitalActionData.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputDigitalActionData>()
{
	return FInputDigitalActionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputDigitalActionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bState_MetaData[];
#endif
		static void NewProp_bState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDigitalActionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_SetBit(void* Obj)
	{
		((FInputDigitalActionData*)Obj)->bState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState = { "bState", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputDigitalActionData), &Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((FInputDigitalActionData*)Obj)->bActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputDigitalActionData), &Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputDigitalActionData",
		sizeof(FInputDigitalActionData),
		alignof(FInputDigitalActionData),
		Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionData()
	{
		if (!Z_Registration_Info_UScriptStruct_InputDigitalActionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputDigitalActionData.InnerSingleton, Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputDigitalActionData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputMotionData;
class UScriptStruct* FInputMotionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputMotionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputMotionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMotionData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("InputMotionData"));
	}
	return Z_Registration_Info_UScriptStruct_InputMotionData.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputMotionData>()
{
	return FInputMotionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputMotionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotQuatX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotQuatX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotQuatY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotQuatY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotQuatZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotQuatZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotQuatW_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotQuatW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosAccelX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PosAccelX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosAccelY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PosAccelY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosAccelZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PosAccelZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotVelX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotVelX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotVelY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotVelY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotVelZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotVelZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputMotionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMotionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX = { "RotQuatX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputMotionData, RotQuatX), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY = { "RotQuatY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputMotionData, RotQuatY), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ = { "RotQuatZ", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputMotionData, RotQuatZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW = { "RotQuatW", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputMotionData, RotQuatW), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX = { "PosAccelX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputMotionData, PosAccelX), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY = { "PosAccelY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputMotionData, PosAccelY), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ = { "PosAccelZ", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputMotionData, PosAccelZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX = { "RotVelX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputMotionData, RotVelX), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY = { "RotVelY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputMotionData, RotVelY), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ = { "RotVelZ", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputMotionData, RotVelZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMotionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputMotionData",
		sizeof(FInputMotionData),
		alignof(FInputMotionData),
		Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputMotionData()
	{
		if (!Z_Registration_Info_UScriptStruct_InputMotionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputMotionData.InnerSingleton, Z_Construct_UScriptStruct_FInputMotionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputMotionData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputHandle;
class UScriptStruct* FInputHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputHandle, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("InputHandle"));
	}
	return Z_Registration_Info_UScriptStruct_InputHandle.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputHandle>()
{
	return FInputHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputHandle",
		sizeof(FInputHandle),
		alignof(FInputHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_InputHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputActionSetHandle;
class UScriptStruct* FInputActionSetHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionSetHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputActionSetHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionSetHandle, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("InputActionSetHandle"));
	}
	return Z_Registration_Info_UScriptStruct_InputActionSetHandle.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputActionSetHandle>()
{
	return FInputActionSetHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputActionSetHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionSetHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputActionSetHandle",
		sizeof(FInputActionSetHandle),
		alignof(FInputActionSetHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputActionSetHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_InputActionSetHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputActionSetHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputActionSetHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputDigitalActionHandle;
class UScriptStruct* FInputDigitalActionHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputDigitalActionHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputDigitalActionHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDigitalActionHandle, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("InputDigitalActionHandle"));
	}
	return Z_Registration_Info_UScriptStruct_InputDigitalActionHandle.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputDigitalActionHandle>()
{
	return FInputDigitalActionHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDigitalActionHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputDigitalActionHandle",
		sizeof(FInputDigitalActionHandle),
		alignof(FInputDigitalActionHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_InputDigitalActionHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputDigitalActionHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputDigitalActionHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputAnalogActionHandle;
class UScriptStruct* FInputAnalogActionHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputAnalogActionHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputAnalogActionHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAnalogActionHandle, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("InputAnalogActionHandle"));
	}
	return Z_Registration_Info_UScriptStruct_InputAnalogActionHandle.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputAnalogActionHandle>()
{
	return FInputAnalogActionHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAnalogActionHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputAnalogActionHandle",
		sizeof(FInputAnalogActionHandle),
		alignof(FInputAnalogActionHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_InputAnalogActionHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputAnalogActionHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputAnalogActionHandle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_Statics::EnumInfo[] = {
		{ ESteamCoreInputSource_StaticEnum, TEXT("ESteamCoreInputSource"), &Z_Registration_Info_UEnum_ESteamCoreInputSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2994188002U) },
		{ ESteamCoreInputSourceMode_StaticEnum, TEXT("ESteamCoreInputSourceMode"), &Z_Registration_Info_UEnum_ESteamCoreInputSourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2107210140U) },
		{ ESteamCoreInputActionOrigin_StaticEnum, TEXT("ESteamCoreInputActionOrigin"), &Z_Registration_Info_UEnum_ESteamCoreInputActionOrigin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4220459220U) },
		{ ESteamCoreXboxOrigin_StaticEnum, TEXT("ESteamCoreXboxOrigin"), &Z_Registration_Info_UEnum_ESteamCoreXboxOrigin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1415061896U) },
		{ ESteamCoreControllerPad_StaticEnum, TEXT("ESteamCoreControllerPad"), &Z_Registration_Info_UEnum_ESteamCoreControllerPad, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2527531016U) },
		{ ESteamCoreInputType_StaticEnum, TEXT("ESteamCoreInputType"), &Z_Registration_Info_UEnum_ESteamCoreInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4036563856U) },
		{ ESteamCoreInputLEDFlag_StaticEnum, TEXT("ESteamCoreInputLEDFlag"), &Z_Registration_Info_UEnum_ESteamCoreInputLEDFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4087012459U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_Statics::ScriptStructInfo[] = {
		{ FInputAnalogActionData::StaticStruct, Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewStructOps, TEXT("InputAnalogActionData"), &Z_Registration_Info_UScriptStruct_InputAnalogActionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAnalogActionData), 2912632425U) },
		{ FInputDigitalActionData::StaticStruct, Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewStructOps, TEXT("InputDigitalActionData"), &Z_Registration_Info_UScriptStruct_InputDigitalActionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputDigitalActionData), 75918456U) },
		{ FInputMotionData::StaticStruct, Z_Construct_UScriptStruct_FInputMotionData_Statics::NewStructOps, TEXT("InputMotionData"), &Z_Registration_Info_UScriptStruct_InputMotionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputMotionData), 2132966100U) },
		{ FInputHandle::StaticStruct, Z_Construct_UScriptStruct_FInputHandle_Statics::NewStructOps, TEXT("InputHandle"), &Z_Registration_Info_UScriptStruct_InputHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputHandle), 4189198337U) },
		{ FInputActionSetHandle::StaticStruct, Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::NewStructOps, TEXT("InputActionSetHandle"), &Z_Registration_Info_UScriptStruct_InputActionSetHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionSetHandle), 139621278U) },
		{ FInputDigitalActionHandle::StaticStruct, Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::NewStructOps, TEXT("InputDigitalActionHandle"), &Z_Registration_Info_UScriptStruct_InputDigitalActionHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputDigitalActionHandle), 1800435335U) },
		{ FInputAnalogActionHandle::StaticStruct, Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::NewStructOps, TEXT("InputAnalogActionHandle"), &Z_Registration_Info_UScriptStruct_InputAnalogActionHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAnalogActionHandle), 1984869241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_2033515157(TEXT("/Script/SteamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
