// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUtils/SteamUtils.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamUtils() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
STEAMCORE_API UClass* Z_Construct_UClass_UUtils();
STEAMCORE_API UClass* Z_Construct_UClass_UUtils_NoRegister();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamNotificationPosition();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUniverse();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUtils Function BOverlayNeedsPresent *************************************
struct Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics
{
	struct Utils_eventBOverlayNeedsPresent_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if the Overlay needs a present. Only required if using event driven render updates.\n\x09*\n\x09* Typically this call is unneeded if your game has a constantly running frame loop that calls the D3D Present API, \n\x09* or OGL SwapBuffers API every frame as is the case in most games. \n\x09* However, if you have a game that only refreshes the screen on an event driven basis then that can break the overlay, as it uses your \n\x09* Present/SwapBuffers calls to drive it's internal frame loop and it may also need to Present() to the screen any time a \n\x09* notification happens or when the overlay is brought up over the game by a user. You can use this API to ask the overlay if it \n\x09* currently need a present in that case, and then you can check for this periodically (roughly 33hz is desirable) and make \n\x09* sure you refresh the screen with Present or SwapBuffers to allow the overlay to do it's work.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the Overlay needs a present. Only required if using event driven render updates.\n\nTypically this call is unneeded if your game has a constantly running frame loop that calls the D3D Present API,\nor OGL SwapBuffers API every frame as is the case in most games.\nHowever, if you have a game that only refreshes the screen on an event driven basis then that can break the overlay, as it uses your\nPresent/SwapBuffers calls to drive it's internal frame loop and it may also need to Present() to the screen any time a\nnotification happens or when the overlay is brought up over the game by a user. You can use this API to ask the overlay if it\ncurrently need a present in that case, and then you can check for this periodically (roughly 33hz is desirable) and make\nsure you refresh the screen with Present or SwapBuffers to allow the overlay to do it's work." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BOverlayNeedsPresent constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BOverlayNeedsPresent constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BOverlayNeedsPresent Property Definitions *****************************
void Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Utils_eventBOverlayNeedsPresent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Utils_eventBOverlayNeedsPresent_Parms), &Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::PropPointers) < 2048);
// ********** End Function BOverlayNeedsPresent Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "BOverlayNeedsPresent", 	Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::Utils_eventBOverlayNeedsPresent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::Utils_eventBOverlayNeedsPresent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_BOverlayNeedsPresent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execBOverlayNeedsPresent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUtils::BOverlayNeedsPresent();
	P_NATIVE_END;
}
// ********** End Class UUtils Function BOverlayNeedsPresent ***************************************

// ********** Begin Class UUtils Function GetAppID *************************************************
struct Z_Construct_UFunction_UUtils_GetAppID_Statics
{
	struct Utils_eventGetAppID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the App ID of the current process.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the App ID of the current process." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAppID constinit property declarations ******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAppID constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAppID Property Definitions *****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetAppID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventGetAppID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetAppID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetAppID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Statics::PropPointers) < 2048);
// ********** End Function GetAppID Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetAppID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetAppID", 	Z_Construct_UFunction_UUtils_GetAppID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_GetAppID_Statics::Utils_eventGetAppID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_GetAppID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_GetAppID_Statics::Utils_eventGetAppID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_GetAppID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetAppID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execGetAppID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UUtils::GetAppID();
	P_NATIVE_END;
}
// ********** End Class UUtils Function GetAppID ***************************************************

// ********** Begin Class UUtils Function GetAppID_Pure ********************************************
struct Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics
{
	struct Utils_eventGetAppID_Pure_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils|Pure" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the App ID of the current process.\n\x09*/" },
#endif
		{ "DisplayName", "Get App ID (Pure)" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the App ID of the current process." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAppID_Pure constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAppID_Pure constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAppID_Pure Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventGetAppID_Pure_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::PropPointers) < 2048);
// ********** End Function GetAppID_Pure Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetAppID_Pure", 	Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::Utils_eventGetAppID_Pure_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::Utils_eventGetAppID_Pure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_GetAppID_Pure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execGetAppID_Pure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UUtils::GetAppID_Pure();
	P_NATIVE_END;
}
// ********** End Class UUtils Function GetAppID_Pure **********************************************

// ********** Begin Class UUtils Function GetConnectedUniverse *************************************
struct Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics
{
	struct Utils_eventGetConnectedUniverse_Parms
	{
		ESteamUniverse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the universe that the current client is connecting to. (Valve use only.)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the universe that the current client is connecting to. (Valve use only.)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetConnectedUniverse constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetConnectedUniverse constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetConnectedUniverse Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventGetConnectedUniverse_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamUniverse, METADATA_PARAMS(0, nullptr) }; // 194428985
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::PropPointers) < 2048);
// ********** End Function GetConnectedUniverse Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetConnectedUniverse", 	Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::Utils_eventGetConnectedUniverse_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::Utils_eventGetConnectedUniverse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_GetConnectedUniverse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execGetConnectedUniverse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamUniverse*)Z_Param__Result=UUtils::GetConnectedUniverse();
	P_NATIVE_END;
}
// ********** End Class UUtils Function GetConnectedUniverse ***************************************

// ********** Begin Class UUtils Function GetCurrentBatteryPower ***********************************
struct Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics
{
	struct Utils_eventGetCurrentBatteryPower_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the current amount of battery power on the computer.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current amount of battery power on the computer." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentBatteryPower constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentBatteryPower constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentBatteryPower Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventGetCurrentBatteryPower_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentBatteryPower Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetCurrentBatteryPower", 	Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::Utils_eventGetCurrentBatteryPower_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::Utils_eventGetCurrentBatteryPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_GetCurrentBatteryPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execGetCurrentBatteryPower)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UUtils::GetCurrentBatteryPower();
	P_NATIVE_END;
}
// ********** End Class UUtils Function GetCurrentBatteryPower *************************************

// ********** Begin Class UUtils Function GetEnteredGamepadTextInput *******************************
struct Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics
{
	struct Utils_eventGetEnteredGamepadTextInput_Parms
	{
		FString Text;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the gamepad text input from the Big Picture overlay.\n\x09*\n\x09* This must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\x09*\n\x09* @param\x09Text\x09\x09""A preallocated buffer to copy the text input string into.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the gamepad text input from the Big Picture overlay.\n\nThis must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\n@param        Text            A preallocated buffer to copy the text input string into." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetEnteredGamepadTextInput constinit property declarations ************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEnteredGamepadTextInput constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEnteredGamepadTextInput Property Definitions ***********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventGetEnteredGamepadTextInput_Parms, Text), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Utils_eventGetEnteredGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Utils_eventGetEnteredGamepadTextInput_Parms), &Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::PropPointers) < 2048);
// ********** End Function GetEnteredGamepadTextInput Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetEnteredGamepadTextInput", 	Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::Utils_eventGetEnteredGamepadTextInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::Utils_eventGetEnteredGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execGetEnteredGamepadTextInput)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUtils::GetEnteredGamepadTextInput(Z_Param_Out_Text);
	P_NATIVE_END;
}
// ********** End Class UUtils Function GetEnteredGamepadTextInput *********************************

// ********** Begin Class UUtils Function GetEnteredGamepadTextLength ******************************
struct Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics
{
	struct Utils_eventGetEnteredGamepadTextLength_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the length of the gamepad text input from the Big Picture overlay.\n\x09*\n\x09* This must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the length of the gamepad text input from the Big Picture overlay.\n\nThis must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetEnteredGamepadTextLength constinit property declarations ***********
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEnteredGamepadTextLength constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEnteredGamepadTextLength Property Definitions **********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventGetEnteredGamepadTextLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::PropPointers) < 2048);
// ********** End Function GetEnteredGamepadTextLength Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetEnteredGamepadTextLength", 	Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::Utils_eventGetEnteredGamepadTextLength_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::Utils_eventGetEnteredGamepadTextLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execGetEnteredGamepadTextLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UUtils::GetEnteredGamepadTextLength();
	P_NATIVE_END;
}
// ********** End Class UUtils Function GetEnteredGamepadTextLength ********************************

// ********** Begin Class UUtils Function GetImageRGBA *********************************************
struct Z_Construct_UFunction_UUtils_GetImageRGBA_Statics
{
	struct Utils_eventGetImageRGBA_Parms
	{
		int32 iImage;
		TArray<uint8> OutBuffer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the image bytes from an image handle.\n\x09* \n\x09* Prior to calling this you must get the size of the image by calling GetImageSize so that you can create your buffer with an appropriate size. You can then allocate your buffer with the width and height as: width * height * 4. The image is provided in RGBA format. This call can be somewhat expensive as it converts from the compressed type (JPG, PNG, TGA) and provides no internal caching of returned buffer, thus it is highly recommended to only call this once per image handle and cache the result. This function is only used for Steam Avatars and Achievement images and those are not expected to change mid game.\n\x09*\n\x09* @param\x09iImage\x09\x09The handle to the image that will be obtained.\n\x09* @param\x09OutBuffer\x09\x09The buffer that will be filled.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the image bytes from an image handle.\n\nPrior to calling this you must get the size of the image by calling GetImageSize so that you can create your buffer with an appropriate size. You can then allocate your buffer with the width and height as: width * height * 4. The image is provided in RGBA format. This call can be somewhat expensive as it converts from the compressed type (JPG, PNG, TGA) and provides no internal caching of returned buffer, thus it is highly recommended to only call this once per image handle and cache the result. This function is only used for Steam Avatars and Achievement images and those are not expected to change mid game.\n\n@param        iImage          The handle to the image that will be obtained.\n@param        OutBuffer               The buffer that will be filled." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetImageRGBA constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_iImage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutBuffer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetImageRGBA constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetImageRGBA Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_iImage = { "iImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventGetImageRGBA_Parms, iImage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_OutBuffer_Inner = { "OutBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_OutBuffer = { "OutBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventGetImageRGBA_Parms, OutBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Utils_eventGetImageRGBA_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Utils_eventGetImageRGBA_Parms), &Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_iImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_OutBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_OutBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::PropPointers) < 2048);
// ********** End Function GetImageRGBA Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetImageRGBA", 	Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::Utils_eventGetImageRGBA_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::Utils_eventGetImageRGBA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_GetImageRGBA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execGetImageRGBA)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_iImage);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBuffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUtils::GetImageRGBA(Z_Param_iImage,Z_Param_Out_OutBuffer);
	P_NATIVE_END;
}
// ********** End Class UUtils Function GetImageRGBA ***********************************************

// ********** Begin Class UUtils Function GetImageSize *********************************************
struct Z_Construct_UFunction_UUtils_GetImageSize_Statics
{
	struct Utils_eventGetImageSize_Parms
	{
		int32 iImage;
		int32 Width;
		int32 Height;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the size of a Steam image handle.\n\x09*\n\x09* This must be called before calling GetImageRGBA to create an appropriately sized buffer that will be filled with the raw image data.\n\x09*\n\x09* @param\x09iImage\x09\x09The image handle to get the size for.\n\x09* @param\x09Width\x09\x09Returns the width of the image.\n\x09* @param\x09Height\x09\x09Returns the height of the image.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the size of a Steam image handle.\n\nThis must be called before calling GetImageRGBA to create an appropriately sized buffer that will be filled with the raw image data.\n\n@param        iImage          The image handle to get the size for.\n@param        Width           Returns the width of the image.\n@param        Height          Returns the height of the image." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetImageSize constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_iImage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetImageSize constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetImageSize Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_iImage = { "iImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventGetImageSize_Parms, iImage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventGetImageSize_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventGetImageSize_Parms, Height), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Utils_eventGetImageSize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Utils_eventGetImageSize_Parms), &Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetImageSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_iImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageSize_Statics::PropPointers) < 2048);
// ********** End Function GetImageSize Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetImageSize", 	Z_Construct_UFunction_UUtils_GetImageSize_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageSize_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_GetImageSize_Statics::Utils_eventGetImageSize_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_GetImageSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_GetImageSize_Statics::Utils_eventGetImageSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_GetImageSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetImageSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execGetImageSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_iImage);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUtils::GetImageSize(Z_Param_iImage,Z_Param_Out_Width,Z_Param_Out_Height);
	P_NATIVE_END;
}
// ********** End Class UUtils Function GetImageSize ***********************************************

// ********** Begin Class UUtils Function GetIPCCallCount ******************************************
struct Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics
{
	struct Utils_eventGetIPCCallCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the number of IPC calls made since the last time this function was called.\n\x09*\n\x09* Used for perf debugging so you can determine how many IPC (Inter-Process Communication) calls your game makes per frame\n\x09* Every IPC call is at minimum a thread context switch if not a process one so you want to rate control how often you do them.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of IPC calls made since the last time this function was called.\n\nUsed for perf debugging so you can determine how many IPC (Inter-Process Communication) calls your game makes per frame\nEvery IPC call is at minimum a thread context switch if not a process one so you want to rate control how often you do them." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetIPCCallCount constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetIPCCallCount constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetIPCCallCount Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventGetIPCCallCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::PropPointers) < 2048);
// ********** End Function GetIPCCallCount Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetIPCCallCount", 	Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::Utils_eventGetIPCCallCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::Utils_eventGetIPCCallCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_GetIPCCallCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execGetIPCCallCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UUtils::GetIPCCallCount();
	P_NATIVE_END;
}
// ********** End Class UUtils Function GetIPCCallCount ********************************************

// ********** Begin Class UUtils Function GetIPCountry *********************************************
struct Z_Construct_UFunction_UUtils_GetIPCountry_Statics
{
	struct Utils_eventGetIPCountry_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the 2 digit ISO 3166-1-alpha-2 format country code which client is running in. e.g \"US\" or \"UK\".\n\x09*\n\x09* This is looked up via an IP-to-location database.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the 2 digit ISO 3166-1-alpha-2 format country code which client is running in. e.g \"US\" or \"UK\".\n\nThis is looked up via an IP-to-location database." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetIPCountry constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetIPCountry constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetIPCountry Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_GetIPCountry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventGetIPCountry_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetIPCountry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetIPCountry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCountry_Statics::PropPointers) < 2048);
// ********** End Function GetIPCountry Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetIPCountry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetIPCountry", 	Z_Construct_UFunction_UUtils_GetIPCountry_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCountry_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_GetIPCountry_Statics::Utils_eventGetIPCountry_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCountry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_GetIPCountry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_GetIPCountry_Statics::Utils_eventGetIPCountry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_GetIPCountry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetIPCountry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execGetIPCountry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UUtils::GetIPCountry();
	P_NATIVE_END;
}
// ********** End Class UUtils Function GetIPCountry ***********************************************

// ********** Begin Class UUtils Function GetSecondsSinceAppActive *********************************
struct Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics
{
	struct Utils_eventGetSecondsSinceAppActive_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the number of seconds since the application was active.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of seconds since the application was active." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSecondsSinceAppActive constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSecondsSinceAppActive constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSecondsSinceAppActive Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventGetSecondsSinceAppActive_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::PropPointers) < 2048);
// ********** End Function GetSecondsSinceAppActive Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetSecondsSinceAppActive", 	Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::Utils_eventGetSecondsSinceAppActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::Utils_eventGetSecondsSinceAppActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execGetSecondsSinceAppActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UUtils::GetSecondsSinceAppActive();
	P_NATIVE_END;
}
// ********** End Class UUtils Function GetSecondsSinceAppActive ***********************************

// ********** Begin Class UUtils Function GetSecondsSinceComputerActive ****************************
struct Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics
{
	struct Utils_eventGetSecondsSinceComputerActive_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the number of seconds since the user last moved the mouse.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of seconds since the user last moved the mouse." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSecondsSinceComputerActive constinit property declarations *********
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSecondsSinceComputerActive constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSecondsSinceComputerActive Property Definitions ********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventGetSecondsSinceComputerActive_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::PropPointers) < 2048);
// ********** End Function GetSecondsSinceComputerActive Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetSecondsSinceComputerActive", 	Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::Utils_eventGetSecondsSinceComputerActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::Utils_eventGetSecondsSinceComputerActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execGetSecondsSinceComputerActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UUtils::GetSecondsSinceComputerActive();
	P_NATIVE_END;
}
// ********** End Class UUtils Function GetSecondsSinceComputerActive ******************************

// ********** Begin Class UUtils Function GetServerRealTime ****************************************
struct Z_Construct_UFunction_UUtils_GetServerRealTime_Statics
{
	struct Utils_eventGetServerRealTime_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the Steam server time in Unix epoch format. (Number of seconds since Jan 1, 1970 UTC)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Steam server time in Unix epoch format. (Number of seconds since Jan 1, 1970 UTC)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetServerRealTime constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetServerRealTime constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetServerRealTime Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventGetServerRealTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::PropPointers) < 2048);
// ********** End Function GetServerRealTime Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetServerRealTime", 	Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::Utils_eventGetServerRealTime_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::Utils_eventGetServerRealTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_GetServerRealTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execGetServerRealTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UUtils::GetServerRealTime();
	P_NATIVE_END;
}
// ********** End Class UUtils Function GetServerRealTime ******************************************

// ********** Begin Class UUtils Function GetSteamUILanguage ***************************************
struct Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics
{
	struct Utils_eventGetSteamUILanguage_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the language the steam client is running in.\n\x09*\n\x09* You probably want ISteamApps::GetCurrentGameLanguage instead, this should only be used in very special cases.\n\x09* For a full list of languages see Supported Languages.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the language the steam client is running in.\n\nYou probably want ISteamApps::GetCurrentGameLanguage instead, this should only be used in very special cases.\nFor a full list of languages see Supported Languages." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSteamUILanguage constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSteamUILanguage constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSteamUILanguage Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventGetSteamUILanguage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::PropPointers) < 2048);
// ********** End Function GetSteamUILanguage Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetSteamUILanguage", 	Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::Utils_eventGetSteamUILanguage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::Utils_eventGetSteamUILanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_GetSteamUILanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execGetSteamUILanguage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UUtils::GetSteamUILanguage();
	P_NATIVE_END;
}
// ********** End Class UUtils Function GetSteamUILanguage *****************************************

// ********** Begin Class UUtils Function InitFilterText *******************************************
struct Z_Construct_UFunction_UUtils_InitFilterText_Statics
{
	struct Utils_eventInitFilterText_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Initializes text filtering.\n\x09* \n\x09* Returns false if filtering is unavailable for the language the user is currently running in.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initializes text filtering.\n\nReturns false if filtering is unavailable for the language the user is currently running in." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function InitFilterText constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitFilterText constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitFilterText Property Definitions ***********************************
void Z_Construct_UFunction_UUtils_InitFilterText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Utils_eventInitFilterText_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_InitFilterText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Utils_eventInitFilterText_Parms), &Z_Construct_UFunction_UUtils_InitFilterText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_InitFilterText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_InitFilterText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_InitFilterText_Statics::PropPointers) < 2048);
// ********** End Function InitFilterText Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_InitFilterText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "InitFilterText", 	Z_Construct_UFunction_UUtils_InitFilterText_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_InitFilterText_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_InitFilterText_Statics::Utils_eventInitFilterText_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_InitFilterText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_InitFilterText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_InitFilterText_Statics::Utils_eventInitFilterText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_InitFilterText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_InitFilterText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execInitFilterText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUtils::InitFilterText();
	P_NATIVE_END;
}
// ********** End Class UUtils Function InitFilterText *********************************************

// ********** Begin Class UUtils Function IsOverlayEnabled *****************************************
struct Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics
{
	struct Utils_eventIsOverlayEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if the Steam Overlay is running & the user can access it.\n\x09*\n\x09* The overlay process could take a few seconds to start & hook the game process, so this function will initially return false while the overlay is loading.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the Steam Overlay is running & the user can access it.\n\nThe overlay process could take a few seconds to start & hook the game process, so this function will initially return false while the overlay is loading." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsOverlayEnabled constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOverlayEnabled constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOverlayEnabled Property Definitions *********************************
void Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Utils_eventIsOverlayEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Utils_eventIsOverlayEnabled_Parms), &Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::PropPointers) < 2048);
// ********** End Function IsOverlayEnabled Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsOverlayEnabled", 	Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::Utils_eventIsOverlayEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::Utils_eventIsOverlayEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_IsOverlayEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execIsOverlayEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUtils::IsOverlayEnabled();
	P_NATIVE_END;
}
// ********** End Class UUtils Function IsOverlayEnabled *******************************************

// ********** Begin Class UUtils Function IsSteamChinaLauncher *************************************
struct Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics
{
	struct Utils_eventIsSteamChinaLauncher_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns whether the current launcher is a Steam China launcher. You can cause the client to behave as the Steam China launcher by adding -dev -steamchina to the command line when running Steam.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the current launcher is a Steam China launcher. You can cause the client to behave as the Steam China launcher by adding -dev -steamchina to the command line when running Steam." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsSteamChinaLauncher constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSteamChinaLauncher constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSteamChinaLauncher Property Definitions *****************************
void Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Utils_eventIsSteamChinaLauncher_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Utils_eventIsSteamChinaLauncher_Parms), &Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::PropPointers) < 2048);
// ********** End Function IsSteamChinaLauncher Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsSteamChinaLauncher", 	Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::Utils_eventIsSteamChinaLauncher_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::Utils_eventIsSteamChinaLauncher_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_IsSteamChinaLauncher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execIsSteamChinaLauncher)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUtils::IsSteamChinaLauncher();
	P_NATIVE_END;
}
// ********** End Class UUtils Function IsSteamChinaLauncher ***************************************

// ********** Begin Class UUtils Function IsSteamInBigPictureMode **********************************
struct Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics
{
	struct Utils_eventIsSteamInBigPictureMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if Steam & the Steam Overlay are running in Big Picture mode.\n\x09*\n\x09* Games must be launched through the Steam client to enable the Big Picture overlay.\n\x09* During development, a game can be added as a non-steam game to the developers library to test this feature.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if Steam & the Steam Overlay are running in Big Picture mode.\n\nGames must be launched through the Steam client to enable the Big Picture overlay.\nDuring development, a game can be added as a non-steam game to the developers library to test this feature." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsSteamInBigPictureMode constinit property declarations ***************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSteamInBigPictureMode constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSteamInBigPictureMode Property Definitions **************************
void Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Utils_eventIsSteamInBigPictureMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Utils_eventIsSteamInBigPictureMode_Parms), &Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::PropPointers) < 2048);
// ********** End Function IsSteamInBigPictureMode Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsSteamInBigPictureMode", 	Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::Utils_eventIsSteamInBigPictureMode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::Utils_eventIsSteamInBigPictureMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execIsSteamInBigPictureMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUtils::IsSteamInBigPictureMode();
	P_NATIVE_END;
}
// ********** End Class UUtils Function IsSteamInBigPictureMode ************************************

// ********** Begin Class UUtils Function IsSteamRunningInVR ***************************************
struct Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics
{
	struct Utils_eventIsSteamRunningInVR_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if Steam is running in VR mode.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if Steam is running in VR mode." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsSteamRunningInVR constinit property declarations ********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSteamRunningInVR constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSteamRunningInVR Property Definitions *******************************
void Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Utils_eventIsSteamRunningInVR_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Utils_eventIsSteamRunningInVR_Parms), &Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::PropPointers) < 2048);
// ********** End Function IsSteamRunningInVR Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsSteamRunningInVR", 	Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::Utils_eventIsSteamRunningInVR_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::Utils_eventIsSteamRunningInVR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_IsSteamRunningInVR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execIsSteamRunningInVR)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUtils::IsSteamRunningInVR();
	P_NATIVE_END;
}
// ********** End Class UUtils Function IsSteamRunningInVR *****************************************

// ********** Begin Class UUtils Function IsSteamRunningOnSteamDeck ********************************
struct Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics
{
	struct Utils_eventIsSteamRunningOnSteamDeck_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Returns true if currently running on the Steam Deck device\n\x09 * This function is only available in UE 5.1+\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Returns true if currently running on the Steam Deck device\n* This function is only available in UE 5.1+" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsSteamRunningOnSteamDeck constinit property declarations *************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSteamRunningOnSteamDeck constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSteamRunningOnSteamDeck Property Definitions ************************
void Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Utils_eventIsSteamRunningOnSteamDeck_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Utils_eventIsSteamRunningOnSteamDeck_Parms), &Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::PropPointers) < 2048);
// ********** End Function IsSteamRunningOnSteamDeck Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsSteamRunningOnSteamDeck", 	Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::Utils_eventIsSteamRunningOnSteamDeck_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::Utils_eventIsSteamRunningOnSteamDeck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execIsSteamRunningOnSteamDeck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSteamRunningOnSteamDeck();
	P_NATIVE_END;
}
// ********** End Class UUtils Function IsSteamRunningOnSteamDeck **********************************

// ********** Begin Class UUtils Function IsVRHeadsetStreamingEnabled ******************************
struct Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics
{
	struct Utils_eventIsVRHeadsetStreamingEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if the HMD view will be streamed via Steam Remote Play.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the HMD view will be streamed via Steam Remote Play." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsVRHeadsetStreamingEnabled constinit property declarations ***********
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsVRHeadsetStreamingEnabled constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsVRHeadsetStreamingEnabled Property Definitions **********************
void Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Utils_eventIsVRHeadsetStreamingEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Utils_eventIsVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers) < 2048);
// ********** End Function IsVRHeadsetStreamingEnabled Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsVRHeadsetStreamingEnabled", 	Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::Utils_eventIsVRHeadsetStreamingEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::Utils_eventIsVRHeadsetStreamingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execIsVRHeadsetStreamingEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUtils::IsVRHeadsetStreamingEnabled();
	P_NATIVE_END;
}
// ********** End Class UUtils Function IsVRHeadsetStreamingEnabled ********************************

// ********** Begin Class UUtils Function SetOverlayNotificationInset ******************************
struct Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics
{
	struct Utils_eventSetOverlayNotificationInset_Parms
	{
		int32 HorizontalInset;
		int32 VerticalInset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the inset of the overlay notification from the corner specified by SetOverlayNotificationPosition.\n\x09*\n\x09* A value of (0, 0) resets the position into the corner.\n\x09* This position is per-game and is reset each launch.\n\x09*\n\x09* @param\x09HorizontalInset\x09\x09The horizontal (left-right) distance in pixels from the corner.\n\x09* @param\x09VerticalInset\x09\x09The vertical (up-down) distance in pixels from the corner.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the inset of the overlay notification from the corner specified by SetOverlayNotificationPosition.\n\nA value of (0, 0) resets the position into the corner.\nThis position is per-game and is reset each launch.\n\n@param        HorizontalInset         The horizontal (left-right) distance in pixels from the corner.\n@param        VerticalInset           The vertical (up-down) distance in pixels from the corner." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetOverlayNotificationInset constinit property declarations ***********
	static const UECodeGen_Private::FIntPropertyParams NewProp_HorizontalInset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VerticalInset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOverlayNotificationInset constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOverlayNotificationInset Property Definitions **********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::NewProp_HorizontalInset = { "HorizontalInset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventSetOverlayNotificationInset_Parms, HorizontalInset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::NewProp_VerticalInset = { "VerticalInset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventSetOverlayNotificationInset_Parms, VerticalInset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::NewProp_HorizontalInset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::NewProp_VerticalInset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::PropPointers) < 2048);
// ********** End Function SetOverlayNotificationInset Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "SetOverlayNotificationInset", 	Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::Utils_eventSetOverlayNotificationInset_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::Utils_eventSetOverlayNotificationInset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_SetOverlayNotificationInset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execSetOverlayNotificationInset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_HorizontalInset);
	P_GET_PROPERTY(FIntProperty,Z_Param_VerticalInset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUtils::SetOverlayNotificationInset(Z_Param_HorizontalInset,Z_Param_VerticalInset);
	P_NATIVE_END;
}
// ********** End Class UUtils Function SetOverlayNotificationInset ********************************

// ********** Begin Class UUtils Function SetOverlayNotificationPosition ***************************
struct Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics
{
	struct Utils_eventSetOverlayNotificationPosition_Parms
	{
		ESteamNotificationPosition NotificationPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets which corner the Steam overlay notification popup should display itself in.\n\x09*\n\x09* You can also set the distance from the specified corner by using SetOverlayNotificationInset.\n\x09* This position is per-game and is reset each launch.\n\x09*\n\x09* @param\x09NotificationPosition\x09position\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets which corner the Steam overlay notification popup should display itself in.\n\nYou can also set the distance from the specified corner by using SetOverlayNotificationInset.\nThis position is per-game and is reset each launch.\n\n@param        NotificationPosition    position" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetOverlayNotificationPosition constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_NotificationPosition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NotificationPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOverlayNotificationPosition constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOverlayNotificationPosition Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition = { "NotificationPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventSetOverlayNotificationPosition_Parms, NotificationPosition), Z_Construct_UEnum_SteamCore_ESteamNotificationPosition, METADATA_PARAMS(0, nullptr) }; // 4044384441
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::PropPointers) < 2048);
// ********** End Function SetOverlayNotificationPosition Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "SetOverlayNotificationPosition", 	Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::Utils_eventSetOverlayNotificationPosition_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::Utils_eventSetOverlayNotificationPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execSetOverlayNotificationPosition)
{
	P_GET_ENUM(ESteamNotificationPosition,Z_Param_NotificationPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUtils::SetOverlayNotificationPosition(ESteamNotificationPosition(Z_Param_NotificationPosition));
	P_NATIVE_END;
}
// ********** End Class UUtils Function SetOverlayNotificationPosition *****************************

// ********** Begin Class UUtils Function SetVRHeadsetStreamingEnabled *****************************
struct Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics
{
	struct Utils_eventSetVRHeadsetStreamingEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set whether the HMD content will be streamed via Steam Remote Play.\n\x09*\n\x09* If this is enabled, then the scene in the HMD headset will be streamed, and remote input will not be allowed. Otherwise if this is disabled, then the application window will be streamed instead, and remote input will be allowed. VR games default to enabled unless \"VRHeadsetStreaming\" \"0\" is in the extended appinfo for a game.\n\x09* This is useful for games that have asymmetric multiplayer gameplay.\n\x09*\n\x09* @param\x09""bEnabled\x09Turns VR HMD Streaming on (true) or off (false).\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether the HMD content will be streamed via Steam Remote Play.\n\nIf this is enabled, then the scene in the HMD headset will be streamed, and remote input will not be allowed. Otherwise if this is disabled, then the application window will be streamed instead, and remote input will be allowed. VR games default to enabled unless \"VRHeadsetStreaming\" \"0\" is in the extended appinfo for a game.\nThis is useful for games that have asymmetric multiplayer gameplay.\n\n@param        bEnabled        Turns VR HMD Streaming on (true) or off (false)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetVRHeadsetStreamingEnabled constinit property declarations **********
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVRHeadsetStreamingEnabled constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVRHeadsetStreamingEnabled Property Definitions *********************
void Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((Utils_eventSetVRHeadsetStreamingEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Utils_eventSetVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers) < 2048);
// ********** End Function SetVRHeadsetStreamingEnabled Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "SetVRHeadsetStreamingEnabled", 	Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::Utils_eventSetVRHeadsetStreamingEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::Utils_eventSetVRHeadsetStreamingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execSetVRHeadsetStreamingEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUtils::SetVRHeadsetStreamingEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UUtils Function SetVRHeadsetStreamingEnabled *******************************

// ********** Begin Class UUtils Function ShowGamepadTextInput *************************************
struct Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics
{
	struct Utils_eventShowGamepadTextInput_Parms
	{
		ESteamGamepadTextInputMode InputMode;
		ESteamGamepadTextInputLineMode LineInputMode;
		FString Description;
		int32 CharMax;
		FString ExistingText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Activates the Big Picture text input dialog which only supports gamepad input.\n\x09*\n\x09* @param\x09InputMode\x09\x09\x09Selects the input mode to use, either Normal or Password (hidden text)\n\x09* @param\x09LineInputMode\x09\x09""Controls whether to use single or multi line input.\n\x09* @param\x09""Description\x09\x09\x09Sets the description that should inform the user what the input dialog is for.\n\x09* @param\x09""CharMax\x09\x09\x09\x09The maximum number of characters that the user can input.\n\x09* @param\x09""ExistingText\x09\x09Sets the preexisting text which the user can edit.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activates the Big Picture text input dialog which only supports gamepad input.\n\n@param        InputMode                       Selects the input mode to use, either Normal or Password (hidden text)\n@param        LineInputMode           Controls whether to use single or multi line input.\n@param        Description                     Sets the description that should inform the user what the input dialog is for.\n@param        CharMax                         The maximum number of characters that the user can input.\n@param        ExistingText            Sets the preexisting text which the user can edit." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ShowGamepadTextInput constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineInputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LineInputMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharMax;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExistingText;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShowGamepadTextInput constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShowGamepadTextInput Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, InputMode), Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode, METADATA_PARAMS(0, nullptr) }; // 1802994897
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode = { "LineInputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, LineInputMode), Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode, METADATA_PARAMS(0, nullptr) }; // 746156710
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_CharMax = { "CharMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, CharMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ExistingText = { "ExistingText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, ExistingText), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Utils_eventShowGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Utils_eventShowGamepadTextInput_Parms), &Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_InputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_InputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_CharMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ExistingText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::PropPointers) < 2048);
// ********** End Function ShowGamepadTextInput Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "ShowGamepadTextInput", 	Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::Utils_eventShowGamepadTextInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::Utils_eventShowGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtils_ShowGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execShowGamepadTextInput)
{
	P_GET_ENUM(ESteamGamepadTextInputMode,Z_Param_InputMode);
	P_GET_ENUM(ESteamGamepadTextInputLineMode,Z_Param_LineInputMode);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_GET_PROPERTY(FIntProperty,Z_Param_CharMax);
	P_GET_PROPERTY(FStrProperty,Z_Param_ExistingText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUtils::ShowGamepadTextInput(ESteamGamepadTextInputMode(Z_Param_InputMode),ESteamGamepadTextInputLineMode(Z_Param_LineInputMode),Z_Param_Description,Z_Param_CharMax,Z_Param_ExistingText);
	P_NATIVE_END;
}
// ********** End Class UUtils Function ShowGamepadTextInput ***************************************

// ********** Begin Class UUtils Function StartVRDashboard *****************************************
struct Z_Construct_UFunction_UUtils_StartVRDashboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Asks Steam to create and render the OpenVR dashboard.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asks Steam to create and render the OpenVR dashboard." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StartVRDashboard constinit property declarations **********************
// ********** End Function StartVRDashboard constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "StartVRDashboard", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUtils_StartVRDashboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtils::execStartVRDashboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UUtils::StartVRDashboard();
	P_NATIVE_END;
}
// ********** End Class UUtils Function StartVRDashboard *******************************************

// ********** Begin Class UUtils *******************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUtils;
UClass* UUtils::GetPrivateStaticClass()
{
	using TClass = UUtils;
	if (!Z_Registration_Info_UClass_UUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Utils"),
			Z_Registration_Info_UClass_UUtils.InnerSingleton,
			StaticRegisterNativesUUtils,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UUtils_NoRegister()
{
	return UUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUtils/SteamUtils.h" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckFileSignature_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamepadTextInputDismissed_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPCountry_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowBatteryPower_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamShutdown_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUtils constinit property declarations ***********************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CheckFileSignature;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GamepadTextInputDismissed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_IPCountry;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LowBatteryPower;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamShutdown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUtils constinit property declarations *************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BOverlayNeedsPresent"), .Pointer = &UUtils::execBOverlayNeedsPresent },
		{ .NameUTF8 = UTF8TEXT("GetAppID"), .Pointer = &UUtils::execGetAppID },
		{ .NameUTF8 = UTF8TEXT("GetAppID_Pure"), .Pointer = &UUtils::execGetAppID_Pure },
		{ .NameUTF8 = UTF8TEXT("GetConnectedUniverse"), .Pointer = &UUtils::execGetConnectedUniverse },
		{ .NameUTF8 = UTF8TEXT("GetCurrentBatteryPower"), .Pointer = &UUtils::execGetCurrentBatteryPower },
		{ .NameUTF8 = UTF8TEXT("GetEnteredGamepadTextInput"), .Pointer = &UUtils::execGetEnteredGamepadTextInput },
		{ .NameUTF8 = UTF8TEXT("GetEnteredGamepadTextLength"), .Pointer = &UUtils::execGetEnteredGamepadTextLength },
		{ .NameUTF8 = UTF8TEXT("GetImageRGBA"), .Pointer = &UUtils::execGetImageRGBA },
		{ .NameUTF8 = UTF8TEXT("GetImageSize"), .Pointer = &UUtils::execGetImageSize },
		{ .NameUTF8 = UTF8TEXT("GetIPCCallCount"), .Pointer = &UUtils::execGetIPCCallCount },
		{ .NameUTF8 = UTF8TEXT("GetIPCountry"), .Pointer = &UUtils::execGetIPCountry },
		{ .NameUTF8 = UTF8TEXT("GetSecondsSinceAppActive"), .Pointer = &UUtils::execGetSecondsSinceAppActive },
		{ .NameUTF8 = UTF8TEXT("GetSecondsSinceComputerActive"), .Pointer = &UUtils::execGetSecondsSinceComputerActive },
		{ .NameUTF8 = UTF8TEXT("GetServerRealTime"), .Pointer = &UUtils::execGetServerRealTime },
		{ .NameUTF8 = UTF8TEXT("GetSteamUILanguage"), .Pointer = &UUtils::execGetSteamUILanguage },
		{ .NameUTF8 = UTF8TEXT("InitFilterText"), .Pointer = &UUtils::execInitFilterText },
		{ .NameUTF8 = UTF8TEXT("IsOverlayEnabled"), .Pointer = &UUtils::execIsOverlayEnabled },
		{ .NameUTF8 = UTF8TEXT("IsSteamChinaLauncher"), .Pointer = &UUtils::execIsSteamChinaLauncher },
		{ .NameUTF8 = UTF8TEXT("IsSteamInBigPictureMode"), .Pointer = &UUtils::execIsSteamInBigPictureMode },
		{ .NameUTF8 = UTF8TEXT("IsSteamRunningInVR"), .Pointer = &UUtils::execIsSteamRunningInVR },
		{ .NameUTF8 = UTF8TEXT("IsSteamRunningOnSteamDeck"), .Pointer = &UUtils::execIsSteamRunningOnSteamDeck },
		{ .NameUTF8 = UTF8TEXT("IsVRHeadsetStreamingEnabled"), .Pointer = &UUtils::execIsVRHeadsetStreamingEnabled },
		{ .NameUTF8 = UTF8TEXT("SetOverlayNotificationInset"), .Pointer = &UUtils::execSetOverlayNotificationInset },
		{ .NameUTF8 = UTF8TEXT("SetOverlayNotificationPosition"), .Pointer = &UUtils::execSetOverlayNotificationPosition },
		{ .NameUTF8 = UTF8TEXT("SetVRHeadsetStreamingEnabled"), .Pointer = &UUtils::execSetVRHeadsetStreamingEnabled },
		{ .NameUTF8 = UTF8TEXT("ShowGamepadTextInput"), .Pointer = &UUtils::execShowGamepadTextInput },
		{ .NameUTF8 = UTF8TEXT("StartVRDashboard"), .Pointer = &UUtils::execStartVRDashboard },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUtils_BOverlayNeedsPresent, "BOverlayNeedsPresent" }, // 2012394901
		{ &Z_Construct_UFunction_UUtils_GetAppID, "GetAppID" }, // 1219847530
		{ &Z_Construct_UFunction_UUtils_GetAppID_Pure, "GetAppID_Pure" }, // 1709298628
		{ &Z_Construct_UFunction_UUtils_GetConnectedUniverse, "GetConnectedUniverse" }, // 294215584
		{ &Z_Construct_UFunction_UUtils_GetCurrentBatteryPower, "GetCurrentBatteryPower" }, // 1826774168
		{ &Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput, "GetEnteredGamepadTextInput" }, // 401315670
		{ &Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength, "GetEnteredGamepadTextLength" }, // 2583710896
		{ &Z_Construct_UFunction_UUtils_GetImageRGBA, "GetImageRGBA" }, // 1359049936
		{ &Z_Construct_UFunction_UUtils_GetImageSize, "GetImageSize" }, // 393997750
		{ &Z_Construct_UFunction_UUtils_GetIPCCallCount, "GetIPCCallCount" }, // 3944741180
		{ &Z_Construct_UFunction_UUtils_GetIPCountry, "GetIPCountry" }, // 2576287921
		{ &Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive, "GetSecondsSinceAppActive" }, // 3032781081
		{ &Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive, "GetSecondsSinceComputerActive" }, // 3749704398
		{ &Z_Construct_UFunction_UUtils_GetServerRealTime, "GetServerRealTime" }, // 193750852
		{ &Z_Construct_UFunction_UUtils_GetSteamUILanguage, "GetSteamUILanguage" }, // 2823588518
		{ &Z_Construct_UFunction_UUtils_InitFilterText, "InitFilterText" }, // 3421124345
		{ &Z_Construct_UFunction_UUtils_IsOverlayEnabled, "IsOverlayEnabled" }, // 2813983806
		{ &Z_Construct_UFunction_UUtils_IsSteamChinaLauncher, "IsSteamChinaLauncher" }, // 1484157907
		{ &Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode, "IsSteamInBigPictureMode" }, // 4186509780
		{ &Z_Construct_UFunction_UUtils_IsSteamRunningInVR, "IsSteamRunningInVR" }, // 3888274826
		{ &Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck, "IsSteamRunningOnSteamDeck" }, // 498531615
		{ &Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled, "IsVRHeadsetStreamingEnabled" }, // 4255868875
		{ &Z_Construct_UFunction_UUtils_SetOverlayNotificationInset, "SetOverlayNotificationInset" }, // 2046085818
		{ &Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition, "SetOverlayNotificationPosition" }, // 2259493481
		{ &Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled, "SetVRHeadsetStreamingEnabled" }, // 466784339
		{ &Z_Construct_UFunction_UUtils_ShowGamepadTextInput, "ShowGamepadTextInput" }, // 1905610253
		{ &Z_Construct_UFunction_UUtils_StartVRDashboard, "StartVRDashboard" }, // 1595081660
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUtils_Statics

// ********** Begin Class UUtils Property Definitions **********************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_CheckFileSignature = { "CheckFileSignature", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUtils, CheckFileSignature), Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckFileSignature_MetaData), NewProp_CheckFileSignature_MetaData) }; // 793598031
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_GamepadTextInputDismissed = { "GamepadTextInputDismissed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUtils, GamepadTextInputDismissed), Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamepadTextInputDismissed_MetaData), NewProp_GamepadTextInputDismissed_MetaData) }; // 1120937930
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_IPCountry = { "IPCountry", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUtils, IPCountry), Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPCountry_MetaData), NewProp_IPCountry_MetaData) }; // 737096397
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_LowBatteryPower = { "LowBatteryPower", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUtils, LowBatteryPower), Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowBatteryPower_MetaData), NewProp_LowBatteryPower_MetaData) }; // 3266988941
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_SteamShutdown = { "SteamShutdown", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUtils, SteamShutdown), Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamShutdown_MetaData), NewProp_SteamShutdown_MetaData) }; // 3613128371
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUtils_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_CheckFileSignature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_GamepadTextInputDismissed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_IPCountry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_LowBatteryPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_SteamShutdown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::PropPointers) < 2048);
// ********** End Class UUtils Property Definitions ************************************************
UObject* (*const Z_Construct_UClass_UUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUtils_Statics::ClassParams = {
	&UUtils::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUtils_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UUtils_Statics::Class_MetaDataParams)
};
void UUtils::StaticRegisterNativesUUtils()
{
	UClass* Class = UUtils::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UUtils_Statics::Funcs));
}
UClass* Z_Construct_UClass_UUtils()
{
	if (!Z_Registration_Info_UClass_UUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUtils.OuterSingleton, Z_Construct_UClass_UUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUtils.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUtils);
UUtils::~UUtils() {}
// ********** End Class UUtils *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtils_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUtils, UUtils::StaticClass, TEXT("UUtils"), &Z_Registration_Info_UClass_UUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUtils), 3601315588U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtils_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtils_h__Script_SteamCore_4122140462{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtils_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamUtils_SteamUtils_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
