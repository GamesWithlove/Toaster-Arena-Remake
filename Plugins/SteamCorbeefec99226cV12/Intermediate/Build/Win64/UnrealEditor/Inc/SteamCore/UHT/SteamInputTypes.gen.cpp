// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamInput/SteamInputTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamInputTypes() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad();
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
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESteamCoreInputSource *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreInputSource;
static UEnum* ESteamCoreInputSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreInputSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreInputSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputSource, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputSource"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreInputSource.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreInputSource>()
{
	return ESteamCoreInputSource_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ABXY.Name", "ESteamCoreInputSource::ABXY" },
		{ "BlueprintType", "true" },
		{ "CenterTrackpad.Name", "ESteamCoreInputSource::CenterTrackpad" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
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
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
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
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamCoreInputSource",
	"ESteamCoreInputSource",
	Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputSource()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreInputSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreInputSource.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreInputSource.InnerSingleton;
}
// ********** End Enum ESteamCoreInputSource *******************************************************

// ********** Begin Enum ESteamCoreInputSourceMode *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreInputSourceMode;
static UEnum* ESteamCoreInputSourceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreInputSourceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreInputSourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputSourceMode"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreInputSourceMode.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreInputSourceMode>()
{
	return ESteamCoreInputSourceMode_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
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
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamCoreInputSourceMode",
	"ESteamCoreInputSourceMode",
	Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreInputSourceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreInputSourceMode.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreInputSourceMode.InnerSingleton;
}
// ********** End Enum ESteamCoreInputSourceMode ***************************************************

// ********** Begin Enum ESteamCoreXboxOrigin ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreXboxOrigin;
static UEnum* ESteamCoreXboxOrigin_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreXboxOrigin.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreXboxOrigin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreXboxOrigin"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreXboxOrigin.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreXboxOrigin>()
{
	return ESteamCoreXboxOrigin_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
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
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamCoreXboxOrigin",
	"ESteamCoreXboxOrigin",
	Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreXboxOrigin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreXboxOrigin.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreXboxOrigin.InnerSingleton;
}
// ********** End Enum ESteamCoreXboxOrigin ********************************************************

// ********** Begin Enum ESteamCoreControllerPad ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreControllerPad;
static UEnum* ESteamCoreControllerPad_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreControllerPad.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreControllerPad.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreControllerPad"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreControllerPad.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreControllerPad>()
{
	return ESteamCoreControllerPad_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.Name", "ESteamCoreControllerPad::Left" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "Right.Name", "ESteamCoreControllerPad::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreControllerPad::Left", (int64)ESteamCoreControllerPad::Left },
		{ "ESteamCoreControllerPad::Right", (int64)ESteamCoreControllerPad::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamCoreControllerPad",
	"ESteamCoreControllerPad",
	Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreControllerPad.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreControllerPad.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreControllerPad.InnerSingleton;
}
// ********** End Enum ESteamCoreControllerPad *****************************************************

// ********** Begin Enum ESteamCoreInputType *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreInputType;
static UEnum* ESteamCoreInputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreInputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputType, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputType"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreInputType.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreInputType>()
{
	return ESteamCoreInputType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
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
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamCoreInputType",
	"ESteamCoreInputType",
	Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputType()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreInputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreInputType.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreInputType.InnerSingleton;
}
// ********** End Enum ESteamCoreInputType *********************************************************

// ********** Begin Enum ESteamCoreInputLEDFlag ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreInputLEDFlag;
static UEnum* ESteamCoreInputLEDFlag_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreInputLEDFlag.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreInputLEDFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputLEDFlag"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreInputLEDFlag.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreInputLEDFlag>()
{
	return ESteamCoreInputLEDFlag_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
		{ "RestoreUserDefault.Name", "ESteamCoreInputLEDFlag::RestoreUserDefault" },
		{ "SetColor.Name", "ESteamCoreInputLEDFlag::SetColor" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreInputLEDFlag::SetColor", (int64)ESteamCoreInputLEDFlag::SetColor },
		{ "ESteamCoreInputLEDFlag::RestoreUserDefault", (int64)ESteamCoreInputLEDFlag::RestoreUserDefault },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamCoreInputLEDFlag",
	"ESteamCoreInputLEDFlag",
	Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreInputLEDFlag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreInputLEDFlag.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreInputLEDFlag.InnerSingleton;
}
// ********** End Enum ESteamCoreInputLEDFlag ******************************************************

// ********** Begin ScriptStruct FInputAnalogActionData ********************************************
struct Z_Construct_UScriptStruct_FInputAnalogActionData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FInputAnalogActionData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FInputAnalogActionData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FInputAnalogActionData constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FInputAnalogActionData constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAnalogActionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FInputAnalogActionData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputAnalogActionData;
class UScriptStruct* FInputAnalogActionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputAnalogActionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputAnalogActionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAnalogActionData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("InputAnalogActionData"));
	}
	return Z_Registration_Info_UScriptStruct_FInputAnalogActionData.OuterSingleton;
	}

// ********** Begin ScriptStruct FInputAnalogActionData Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAnalogActionData, Mode), Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2919551960
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAnalogActionData, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAnalogActionData, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
void Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((FInputAnalogActionData*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputAnalogActionData), &Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FInputAnalogActionData Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"InputAnalogActionData",
	Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers),
	sizeof(FInputAnalogActionData),
	alignof(FInputAnalogActionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionData()
{
	if (!Z_Registration_Info_UScriptStruct_FInputAnalogActionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputAnalogActionData.InnerSingleton, Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FInputAnalogActionData.InnerSingleton);
}
// ********** End ScriptStruct FInputAnalogActionData **********************************************

// ********** Begin ScriptStruct FInputDigitalActionData *******************************************
struct Z_Construct_UScriptStruct_FInputDigitalActionData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FInputDigitalActionData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FInputDigitalActionData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bState_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FInputDigitalActionData constinit property declarations ***********
	static void NewProp_bState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bState;
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FInputDigitalActionData constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDigitalActionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FInputDigitalActionData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputDigitalActionData;
class UScriptStruct* FInputDigitalActionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputDigitalActionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputDigitalActionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDigitalActionData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("InputDigitalActionData"));
	}
	return Z_Registration_Info_UScriptStruct_FInputDigitalActionData.OuterSingleton;
	}

// ********** Begin ScriptStruct FInputDigitalActionData Property Definitions **********************
void Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_SetBit(void* Obj)
{
	((FInputDigitalActionData*)Obj)->bState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState = { "bState", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputDigitalActionData), &Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bState_MetaData), NewProp_bState_MetaData) };
void Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((FInputDigitalActionData*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputDigitalActionData), &Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FInputDigitalActionData Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"InputDigitalActionData",
	Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers),
	sizeof(FInputDigitalActionData),
	alignof(FInputDigitalActionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionData()
{
	if (!Z_Registration_Info_UScriptStruct_FInputDigitalActionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputDigitalActionData.InnerSingleton, Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FInputDigitalActionData.InnerSingleton);
}
// ********** End ScriptStruct FInputDigitalActionData *********************************************

// ********** Begin ScriptStruct FInputMotionData **************************************************
struct Z_Construct_UScriptStruct_FInputMotionData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FInputMotionData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FInputMotionData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotQuatX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotQuatY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotQuatZ_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotQuatW_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosAccelX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosAccelY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosAccelZ_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotVelX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotVelY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotVelZ_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FInputMotionData constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotQuatX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotQuatY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotQuatZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotQuatW;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosAccelX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosAccelY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosAccelZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotVelX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotVelY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotVelZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FInputMotionData constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMotionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FInputMotionData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputMotionData;
class UScriptStruct* FInputMotionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputMotionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputMotionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMotionData, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("InputMotionData"));
	}
	return Z_Registration_Info_UScriptStruct_FInputMotionData.OuterSingleton;
	}

// ********** Begin ScriptStruct FInputMotionData Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX = { "RotQuatX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotQuatX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotQuatX_MetaData), NewProp_RotQuatX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY = { "RotQuatY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotQuatY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotQuatY_MetaData), NewProp_RotQuatY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ = { "RotQuatZ", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotQuatZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotQuatZ_MetaData), NewProp_RotQuatZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW = { "RotQuatW", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotQuatW), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotQuatW_MetaData), NewProp_RotQuatW_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX = { "PosAccelX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, PosAccelX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosAccelX_MetaData), NewProp_PosAccelX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY = { "PosAccelY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, PosAccelY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosAccelY_MetaData), NewProp_PosAccelY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ = { "PosAccelZ", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, PosAccelZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosAccelZ_MetaData), NewProp_PosAccelZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX = { "RotVelX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotVelX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotVelX_MetaData), NewProp_RotVelX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY = { "RotVelY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotVelY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotVelY_MetaData), NewProp_RotVelY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ = { "RotVelZ", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMotionData, RotVelZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotVelZ_MetaData), NewProp_RotVelZ_MetaData) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FInputMotionData Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMotionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"InputMotionData",
	Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers),
	sizeof(FInputMotionData),
	alignof(FInputMotionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputMotionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputMotionData()
{
	if (!Z_Registration_Info_UScriptStruct_FInputMotionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputMotionData.InnerSingleton, Z_Construct_UScriptStruct_FInputMotionData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FInputMotionData.InnerSingleton);
}
// ********** End ScriptStruct FInputMotionData ****************************************************

// ********** Begin ScriptStruct FInputHandle ******************************************************
struct Z_Construct_UScriptStruct_FInputHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FInputHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FInputHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FInputHandle constinit property declarations **********************
// ********** End ScriptStruct FInputHandle constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FInputHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputHandle;
class UScriptStruct* FInputHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputHandle, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("InputHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FInputHandle.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"InputHandle",
	nullptr,
	0,
	sizeof(FInputHandle),
	alignof(FInputHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FInputHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FInputHandle.InnerSingleton);
}
// ********** End ScriptStruct FInputHandle ********************************************************

// ********** Begin ScriptStruct FInputActionSetHandle *********************************************
struct Z_Construct_UScriptStruct_FInputActionSetHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FInputActionSetHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FInputActionSetHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FInputActionSetHandle constinit property declarations *************
// ********** End ScriptStruct FInputActionSetHandle constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionSetHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FInputActionSetHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputActionSetHandle;
class UScriptStruct* FInputActionSetHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputActionSetHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputActionSetHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionSetHandle, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("InputActionSetHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FInputActionSetHandle.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"InputActionSetHandle",
	nullptr,
	0,
	sizeof(FInputActionSetHandle),
	alignof(FInputActionSetHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputActionSetHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FInputActionSetHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputActionSetHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FInputActionSetHandle.InnerSingleton);
}
// ********** End ScriptStruct FInputActionSetHandle ***********************************************

// ********** Begin ScriptStruct FInputDigitalActionHandle *****************************************
struct Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FInputDigitalActionHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FInputDigitalActionHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FInputDigitalActionHandle constinit property declarations *********
// ********** End ScriptStruct FInputDigitalActionHandle constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDigitalActionHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputDigitalActionHandle;
class UScriptStruct* FInputDigitalActionHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputDigitalActionHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputDigitalActionHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDigitalActionHandle, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("InputDigitalActionHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FInputDigitalActionHandle.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"InputDigitalActionHandle",
	nullptr,
	0,
	sizeof(FInputDigitalActionHandle),
	alignof(FInputDigitalActionHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FInputDigitalActionHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputDigitalActionHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FInputDigitalActionHandle.InnerSingleton);
}
// ********** End ScriptStruct FInputDigitalActionHandle *******************************************

// ********** Begin ScriptStruct FInputAnalogActionHandle ******************************************
struct Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FInputAnalogActionHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FInputAnalogActionHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInputTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FInputAnalogActionHandle constinit property declarations **********
// ********** End ScriptStruct FInputAnalogActionHandle constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAnalogActionHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputAnalogActionHandle;
class UScriptStruct* FInputAnalogActionHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInputAnalogActionHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInputAnalogActionHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAnalogActionHandle, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("InputAnalogActionHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FInputAnalogActionHandle.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"InputAnalogActionHandle",
	nullptr,
	0,
	sizeof(FInputAnalogActionHandle),
	alignof(FInputAnalogActionHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FInputAnalogActionHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputAnalogActionHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FInputAnalogActionHandle.InnerSingleton);
}
// ********** End ScriptStruct FInputAnalogActionHandle ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInputTypes_h__Script_SteamCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamCoreInputSource_StaticEnum, TEXT("ESteamCoreInputSource"), &Z_Registration_Info_UEnum_ESteamCoreInputSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1145842087U) },
		{ ESteamCoreInputSourceMode_StaticEnum, TEXT("ESteamCoreInputSourceMode"), &Z_Registration_Info_UEnum_ESteamCoreInputSourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2919551960U) },
		{ ESteamCoreXboxOrigin_StaticEnum, TEXT("ESteamCoreXboxOrigin"), &Z_Registration_Info_UEnum_ESteamCoreXboxOrigin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3558287588U) },
		{ ESteamCoreControllerPad_StaticEnum, TEXT("ESteamCoreControllerPad"), &Z_Registration_Info_UEnum_ESteamCoreControllerPad, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 831062105U) },
		{ ESteamCoreInputType_StaticEnum, TEXT("ESteamCoreInputType"), &Z_Registration_Info_UEnum_ESteamCoreInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3136391136U) },
		{ ESteamCoreInputLEDFlag_StaticEnum, TEXT("ESteamCoreInputLEDFlag"), &Z_Registration_Info_UEnum_ESteamCoreInputLEDFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 208281035U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputAnalogActionData::StaticStruct, Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewStructOps, TEXT("InputAnalogActionData"),&Z_Registration_Info_UScriptStruct_FInputAnalogActionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAnalogActionData), 816354917U) },
		{ FInputDigitalActionData::StaticStruct, Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewStructOps, TEXT("InputDigitalActionData"),&Z_Registration_Info_UScriptStruct_FInputDigitalActionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputDigitalActionData), 1924596269U) },
		{ FInputMotionData::StaticStruct, Z_Construct_UScriptStruct_FInputMotionData_Statics::NewStructOps, TEXT("InputMotionData"),&Z_Registration_Info_UScriptStruct_FInputMotionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputMotionData), 1134790042U) },
		{ FInputHandle::StaticStruct, Z_Construct_UScriptStruct_FInputHandle_Statics::NewStructOps, TEXT("InputHandle"),&Z_Registration_Info_UScriptStruct_FInputHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputHandle), 3587528016U) },
		{ FInputActionSetHandle::StaticStruct, Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::NewStructOps, TEXT("InputActionSetHandle"),&Z_Registration_Info_UScriptStruct_FInputActionSetHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionSetHandle), 128671329U) },
		{ FInputDigitalActionHandle::StaticStruct, Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::NewStructOps, TEXT("InputDigitalActionHandle"),&Z_Registration_Info_UScriptStruct_FInputDigitalActionHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputDigitalActionHandle), 3334905936U) },
		{ FInputAnalogActionHandle::StaticStruct, Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::NewStructOps, TEXT("InputAnalogActionHandle"),&Z_Registration_Info_UScriptStruct_FInputAnalogActionHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAnalogActionHandle), 3315214180U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInputTypes_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInputTypes_h__Script_SteamCore_2382477543{
	TEXT("/Script/SteamCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInputTypes_h__Script_SteamCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInputTypes_h__Script_SteamCore_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInputTypes_h__Script_SteamCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInputTypes_h__Script_SteamCore_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
