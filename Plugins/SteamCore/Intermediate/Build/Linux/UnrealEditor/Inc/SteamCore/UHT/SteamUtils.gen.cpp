// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamUtils/SteamUtils.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUtils() {}
// Cross Module References
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
// End Cross Module References
	DEFINE_FUNCTION(UUtils::execStartVRDashboard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtils::StartVRDashboard();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UUtils::execSetVRHeadsetStreamingEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtils::SetVRHeadsetStreamingEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execSetOverlayNotificationPosition)
	{
		P_GET_ENUM(ESteamNotificationPosition,Z_Param_NotificationPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtils::SetOverlayNotificationPosition(ESteamNotificationPosition(Z_Param_NotificationPosition));
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UUtils::execIsVRHeadsetStreamingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::IsVRHeadsetStreamingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execIsSteamRunningInVR)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::IsSteamRunningInVR();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execIsSteamInBigPictureMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::IsSteamInBigPictureMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execIsSteamRunningOnSteamDeck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSteamRunningOnSteamDeck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execInitFilterText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::InitFilterText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execIsSteamChinaLauncher)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::IsSteamChinaLauncher();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execIsOverlayEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::IsOverlayEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetSteamUILanguage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUtils::GetSteamUILanguage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetServerRealTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetServerRealTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetSecondsSinceComputerActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetSecondsSinceComputerActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetSecondsSinceAppActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetSecondsSinceAppActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetIPCountry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUtils::GetIPCountry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetIPCCallCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetIPCCallCount();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UUtils::execGetImageRGBA)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_iImage);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::GetImageRGBA(Z_Param_iImage,Z_Param_Out_OutBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetEnteredGamepadTextLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetEnteredGamepadTextLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetEnteredGamepadTextInput)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::GetEnteredGamepadTextInput(Z_Param_Out_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetCurrentBatteryPower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetCurrentBatteryPower();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetConnectedUniverse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamUniverse*)Z_Param__Result=UUtils::GetConnectedUniverse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetAppID_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetAppID_Pure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetAppID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetAppID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execBOverlayNeedsPresent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::BOverlayNeedsPresent();
		P_NATIVE_END;
	}
	void UUtils::StaticRegisterNativesUUtils()
	{
		UClass* Class = UUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BOverlayNeedsPresent", &UUtils::execBOverlayNeedsPresent },
			{ "GetAppID", &UUtils::execGetAppID },
			{ "GetAppID_Pure", &UUtils::execGetAppID_Pure },
			{ "GetConnectedUniverse", &UUtils::execGetConnectedUniverse },
			{ "GetCurrentBatteryPower", &UUtils::execGetCurrentBatteryPower },
			{ "GetEnteredGamepadTextInput", &UUtils::execGetEnteredGamepadTextInput },
			{ "GetEnteredGamepadTextLength", &UUtils::execGetEnteredGamepadTextLength },
			{ "GetImageRGBA", &UUtils::execGetImageRGBA },
			{ "GetImageSize", &UUtils::execGetImageSize },
			{ "GetIPCCallCount", &UUtils::execGetIPCCallCount },
			{ "GetIPCountry", &UUtils::execGetIPCountry },
			{ "GetSecondsSinceAppActive", &UUtils::execGetSecondsSinceAppActive },
			{ "GetSecondsSinceComputerActive", &UUtils::execGetSecondsSinceComputerActive },
			{ "GetServerRealTime", &UUtils::execGetServerRealTime },
			{ "GetSteamUILanguage", &UUtils::execGetSteamUILanguage },
			{ "InitFilterText", &UUtils::execInitFilterText },
			{ "IsOverlayEnabled", &UUtils::execIsOverlayEnabled },
			{ "IsSteamChinaLauncher", &UUtils::execIsSteamChinaLauncher },
			{ "IsSteamInBigPictureMode", &UUtils::execIsSteamInBigPictureMode },
			{ "IsSteamRunningInVR", &UUtils::execIsSteamRunningInVR },
			{ "IsSteamRunningOnSteamDeck", &UUtils::execIsSteamRunningOnSteamDeck },
			{ "IsVRHeadsetStreamingEnabled", &UUtils::execIsVRHeadsetStreamingEnabled },
			{ "SetOverlayNotificationInset", &UUtils::execSetOverlayNotificationInset },
			{ "SetOverlayNotificationPosition", &UUtils::execSetOverlayNotificationPosition },
			{ "SetVRHeadsetStreamingEnabled", &UUtils::execSetVRHeadsetStreamingEnabled },
			{ "ShowGamepadTextInput", &UUtils::execShowGamepadTextInput },
			{ "StartVRDashboard", &UUtils::execStartVRDashboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics
	{
		struct Utils_eventBOverlayNeedsPresent_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventBOverlayNeedsPresent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Utils_eventBOverlayNeedsPresent_Parms), &Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Checks if the Overlay needs a present. Only required if using event driven render updates.\n\x09*\n\x09* Typically this call is unneeded if your game has a constantly running frame loop that calls the D3D Present API, \n\x09* or OGL SwapBuffers API every frame as is the case in most games. \n\x09* However, if you have a game that only refreshes the screen on an event driven basis then that can break the overlay, as it uses your \n\x09* Present/SwapBuffers calls to drive it's internal frame loop and it may also need to Present() to the screen any time a \n\x09* notification happens or when the overlay is brought up over the game by a user. You can use this API to ask the overlay if it \n\x09* currently need a present in that case, and then you can check for this periodically (roughly 33hz is desirable) and make \n\x09* sure you refresh the screen with Present or SwapBuffers to allow the overlay to do it's work.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Checks if the Overlay needs a present. Only required if using event driven render updates.\n\nTypically this call is unneeded if your game has a constantly running frame loop that calls the D3D Present API,\nor OGL SwapBuffers API every frame as is the case in most games.\nHowever, if you have a game that only refreshes the screen on an event driven basis then that can break the overlay, as it uses your\nPresent/SwapBuffers calls to drive it's internal frame loop and it may also need to Present() to the screen any time a\nnotification happens or when the overlay is brought up over the game by a user. You can use this API to ask the overlay if it\ncurrently need a present in that case, and then you can check for this periodically (roughly 33hz is desirable) and make\nsure you refresh the screen with Present or SwapBuffers to allow the overlay to do it's work." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "BOverlayNeedsPresent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::Utils_eventBOverlayNeedsPresent_Parms), Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_BOverlayNeedsPresent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetAppID_Statics
	{
		struct Utils_eventGetAppID_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetAppID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventGetAppID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetAppID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetAppID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetAppID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the App ID of the current process.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Gets the App ID of the current process." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetAppID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetAppID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_GetAppID_Statics::Utils_eventGetAppID_Parms), Z_Construct_UFunction_UUtils_GetAppID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetAppID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetAppID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetAppID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics
	{
		struct Utils_eventGetAppID_Pure_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventGetAppID_Pure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils|Pure" },
		{ "Comment", "/**\n\x09* Gets the App ID of the current process.\n\x09*/" },
		{ "DisplayName", "Get App ID (Pure)" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Gets the App ID of the current process." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetAppID_Pure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::Utils_eventGetAppID_Pure_Parms), Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetAppID_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics
	{
		struct Utils_eventGetConnectedUniverse_Parms
		{
			ESteamUniverse ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventGetConnectedUniverse_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamUniverse, METADATA_PARAMS(nullptr, 0) }; // 1170435881
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the universe that the current client is connecting to. (Valve use only.)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Gets the universe that the current client is connecting to. (Valve use only.)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetConnectedUniverse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::Utils_eventGetConnectedUniverse_Parms), Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetConnectedUniverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics
	{
		struct Utils_eventGetCurrentBatteryPower_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventGetCurrentBatteryPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the current amount of battery power on the computer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Gets the current amount of battery power on the computer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetCurrentBatteryPower", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::Utils_eventGetCurrentBatteryPower_Parms), Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetCurrentBatteryPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics
	{
		struct Utils_eventGetEnteredGamepadTextInput_Parms
		{
			FString Text;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventGetEnteredGamepadTextInput_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventGetEnteredGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Utils_eventGetEnteredGamepadTextInput_Parms), &Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the gamepad text input from the Big Picture overlay.\n\x09*\n\x09* This must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\x09*\n\x09* @param\x09Text\x09\x09""A preallocated buffer to copy the text input string into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Gets the gamepad text input from the Big Picture overlay.\n\nThis must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\n@param        Text            A preallocated buffer to copy the text input string into." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetEnteredGamepadTextInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::Utils_eventGetEnteredGamepadTextInput_Parms), Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics
	{
		struct Utils_eventGetEnteredGamepadTextLength_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventGetEnteredGamepadTextLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the length of the gamepad text input from the Big Picture overlay.\n\x09*\n\x09* This must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Gets the length of the gamepad text input from the Big Picture overlay.\n\nThis must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetEnteredGamepadTextLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::Utils_eventGetEnteredGamepadTextLength_Parms), Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetImageRGBA_Statics
	{
		struct Utils_eventGetImageRGBA_Parms
		{
			int32 iImage;
			TArray<uint8> OutBuffer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_iImage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutBuffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutBuffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_iImage = { "iImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventGetImageRGBA_Parms, iImage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_OutBuffer_Inner = { "OutBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_OutBuffer = { "OutBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventGetImageRGBA_Parms, OutBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventGetImageRGBA_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Utils_eventGetImageRGBA_Parms), &Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_iImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_OutBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_OutBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the image bytes from an image handle.\n\x09* \n\x09* Prior to calling this you must get the size of the image by calling GetImageSize so that you can create your buffer with an appropriate size. You can then allocate your buffer with the width and height as: width * height * 4. The image is provided in RGBA format. This call can be somewhat expensive as it converts from the compressed type (JPG, PNG, TGA) and provides no internal caching of returned buffer, thus it is highly recommended to only call this once per image handle and cache the result. This function is only used for Steam Avatars and Achievement images and those are not expected to change mid game.\n\x09*\n\x09* @param\x09iImage\x09\x09The handle to the image that will be obtained.\n\x09* @param\x09OutBuffer\x09\x09The buffer that will be filled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Gets the image bytes from an image handle.\n\nPrior to calling this you must get the size of the image by calling GetImageSize so that you can create your buffer with an appropriate size. You can then allocate your buffer with the width and height as: width * height * 4. The image is provided in RGBA format. This call can be somewhat expensive as it converts from the compressed type (JPG, PNG, TGA) and provides no internal caching of returned buffer, thus it is highly recommended to only call this once per image handle and cache the result. This function is only used for Steam Avatars and Achievement images and those are not expected to change mid game.\n\n@param        iImage          The handle to the image that will be obtained.\n@param        OutBuffer               The buffer that will be filled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetImageRGBA", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::Utils_eventGetImageRGBA_Parms), Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetImageRGBA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetImageSize_Statics
	{
		struct Utils_eventGetImageSize_Parms
		{
			int32 iImage;
			int32 Width;
			int32 Height;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_iImage;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_iImage = { "iImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventGetImageSize_Parms, iImage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventGetImageSize_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventGetImageSize_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventGetImageSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Utils_eventGetImageSize_Parms), &Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetImageSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_iImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetImageSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the size of a Steam image handle.\n\x09*\n\x09* This must be called before calling GetImageRGBA to create an appropriately sized buffer that will be filled with the raw image data.\n\x09*\n\x09* @param\x09iImage\x09\x09The image handle to get the size for.\n\x09* @param\x09Width\x09\x09Returns the width of the image.\n\x09* @param\x09Height\x09\x09Returns the height of the image.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Gets the size of a Steam image handle.\n\nThis must be called before calling GetImageRGBA to create an appropriately sized buffer that will be filled with the raw image data.\n\n@param        iImage          The image handle to get the size for.\n@param        Width           Returns the width of the image.\n@param        Height          Returns the height of the image." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetImageSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_GetImageSize_Statics::Utils_eventGetImageSize_Parms), Z_Construct_UFunction_UUtils_GetImageSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetImageSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetImageSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetImageSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics
	{
		struct Utils_eventGetIPCCallCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventGetIPCCallCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the number of IPC calls made since the last time this function was called.\n\x09*\n\x09* Used for perf debugging so you can determine how many IPC (Inter-Process Communication) calls your game makes per frame\n\x09* Every IPC call is at minimum a thread context switch if not a process one so you want to rate control how often you do them.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Returns the number of IPC calls made since the last time this function was called.\n\nUsed for perf debugging so you can determine how many IPC (Inter-Process Communication) calls your game makes per frame\nEvery IPC call is at minimum a thread context switch if not a process one so you want to rate control how often you do them." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetIPCCallCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::Utils_eventGetIPCCallCount_Parms), Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetIPCCallCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetIPCountry_Statics
	{
		struct Utils_eventGetIPCountry_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_GetIPCountry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventGetIPCountry_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetIPCountry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetIPCountry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetIPCountry_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the 2 digit ISO 3166-1-alpha-2 format country code which client is running in. e.g \"US\" or \"UK\".\n\x09*\n\x09* This is looked up via an IP-to-location database.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Returns the 2 digit ISO 3166-1-alpha-2 format country code which client is running in. e.g \"US\" or \"UK\".\n\nThis is looked up via an IP-to-location database." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetIPCountry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetIPCountry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_GetIPCountry_Statics::Utils_eventGetIPCountry_Parms), Z_Construct_UFunction_UUtils_GetIPCountry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCountry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetIPCountry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCountry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetIPCountry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetIPCountry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics
	{
		struct Utils_eventGetSecondsSinceAppActive_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventGetSecondsSinceAppActive_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the number of seconds since the application was active.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Returns the number of seconds since the application was active." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetSecondsSinceAppActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::Utils_eventGetSecondsSinceAppActive_Parms), Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics
	{
		struct Utils_eventGetSecondsSinceComputerActive_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventGetSecondsSinceComputerActive_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the number of seconds since the user last moved the mouse.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Returns the number of seconds since the user last moved the mouse." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetSecondsSinceComputerActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::Utils_eventGetSecondsSinceComputerActive_Parms), Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetServerRealTime_Statics
	{
		struct Utils_eventGetServerRealTime_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventGetServerRealTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the Steam server time in Unix epoch format. (Number of seconds since Jan 1, 1970 UTC)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Returns the Steam server time in Unix epoch format. (Number of seconds since Jan 1, 1970 UTC)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetServerRealTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::Utils_eventGetServerRealTime_Parms), Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetServerRealTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics
	{
		struct Utils_eventGetSteamUILanguage_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventGetSteamUILanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the language the steam client is running in.\n\x09*\n\x09* You probably want ISteamApps::GetCurrentGameLanguage instead, this should only be used in very special cases.\n\x09* For a full list of languages see Supported Languages.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Returns the language the steam client is running in.\n\nYou probably want ISteamApps::GetCurrentGameLanguage instead, this should only be used in very special cases.\nFor a full list of languages see Supported Languages." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetSteamUILanguage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::Utils_eventGetSteamUILanguage_Parms), Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetSteamUILanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_InitFilterText_Statics
	{
		struct Utils_eventInitFilterText_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_InitFilterText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventInitFilterText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_InitFilterText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Utils_eventInitFilterText_Parms), &Z_Construct_UFunction_UUtils_InitFilterText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_InitFilterText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_InitFilterText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_InitFilterText_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Initializes text filtering.\n\x09* \n\x09* Returns false if filtering is unavailable for the language the user is currently running in.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Initializes text filtering.\n\nReturns false if filtering is unavailable for the language the user is currently running in." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_InitFilterText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "InitFilterText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_InitFilterText_Statics::Utils_eventInitFilterText_Parms), Z_Construct_UFunction_UUtils_InitFilterText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_InitFilterText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_InitFilterText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_InitFilterText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_InitFilterText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_InitFilterText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics
	{
		struct Utils_eventIsOverlayEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventIsOverlayEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Utils_eventIsOverlayEnabled_Parms), &Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Checks if the Steam Overlay is running & the user can access it.\n\x09*\n\x09* The overlay process could take a few seconds to start & hook the game process, so this function will initially return false while the overlay is loading.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Checks if the Steam Overlay is running & the user can access it.\n\nThe overlay process could take a few seconds to start & hook the game process, so this function will initially return false while the overlay is loading." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsOverlayEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::Utils_eventIsOverlayEnabled_Parms), Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_IsOverlayEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics
	{
		struct Utils_eventIsSteamChinaLauncher_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventIsSteamChinaLauncher_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Utils_eventIsSteamChinaLauncher_Parms), &Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns whether the current launcher is a Steam China launcher. You can cause the client to behave as the Steam China launcher by adding -dev -steamchina to the command line when running Steam.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Returns whether the current launcher is a Steam China launcher. You can cause the client to behave as the Steam China launcher by adding -dev -steamchina to the command line when running Steam." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsSteamChinaLauncher", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::Utils_eventIsSteamChinaLauncher_Parms), Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_IsSteamChinaLauncher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics
	{
		struct Utils_eventIsSteamInBigPictureMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventIsSteamInBigPictureMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Utils_eventIsSteamInBigPictureMode_Parms), &Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Checks if Steam & the Steam Overlay are running in Big Picture mode.\n\x09*\n\x09* Games must be launched through the Steam client to enable the Big Picture overlay.\n\x09* During development, a game can be added as a non-steam game to the developers library to test this feature.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Checks if Steam & the Steam Overlay are running in Big Picture mode.\n\nGames must be launched through the Steam client to enable the Big Picture overlay.\nDuring development, a game can be added as a non-steam game to the developers library to test this feature." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsSteamInBigPictureMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::Utils_eventIsSteamInBigPictureMode_Parms), Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics
	{
		struct Utils_eventIsSteamRunningInVR_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventIsSteamRunningInVR_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Utils_eventIsSteamRunningInVR_Parms), &Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Checks if Steam is running in VR mode.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Checks if Steam is running in VR mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsSteamRunningInVR", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::Utils_eventIsSteamRunningInVR_Parms), Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_IsSteamRunningInVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics
	{
		struct Utils_eventIsSteamRunningOnSteamDeck_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventIsSteamRunningOnSteamDeck_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Utils_eventIsSteamRunningOnSteamDeck_Parms), &Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/*\n\x09 * Returns true if currently running on the Steam Deck device\n\x09 * This function is only available in UE 5.1+\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "* Returns true if currently running on the Steam Deck device\n* This function is only available in UE 5.1+" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsSteamRunningOnSteamDeck", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::Utils_eventIsSteamRunningOnSteamDeck_Parms), Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics
	{
		struct Utils_eventIsVRHeadsetStreamingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventIsVRHeadsetStreamingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Utils_eventIsVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Checks if the HMD view will be streamed via Steam Remote Play.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Checks if the HMD view will be streamed via Steam Remote Play." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsVRHeadsetStreamingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::Utils_eventIsVRHeadsetStreamingEnabled_Parms), Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics
	{
		struct Utils_eventSetOverlayNotificationInset_Parms
		{
			int32 HorizontalInset;
			int32 VerticalInset;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_HorizontalInset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VerticalInset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::NewProp_HorizontalInset = { "HorizontalInset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventSetOverlayNotificationInset_Parms, HorizontalInset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::NewProp_VerticalInset = { "VerticalInset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventSetOverlayNotificationInset_Parms, VerticalInset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::NewProp_HorizontalInset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::NewProp_VerticalInset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Sets the inset of the overlay notification from the corner specified by SetOverlayNotificationPosition.\n\x09*\n\x09* A value of (0, 0) resets the position into the corner.\n\x09* This position is per-game and is reset each launch.\n\x09*\n\x09* @param\x09HorizontalInset\x09\x09The horizontal (left-right) distance in pixels from the corner.\n\x09* @param\x09VerticalInset\x09\x09The vertical (up-down) distance in pixels from the corner.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Sets the inset of the overlay notification from the corner specified by SetOverlayNotificationPosition.\n\nA value of (0, 0) resets the position into the corner.\nThis position is per-game and is reset each launch.\n\n@param        HorizontalInset         The horizontal (left-right) distance in pixels from the corner.\n@param        VerticalInset           The vertical (up-down) distance in pixels from the corner." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "SetOverlayNotificationInset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::Utils_eventSetOverlayNotificationInset_Parms), Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_SetOverlayNotificationInset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics
	{
		struct Utils_eventSetOverlayNotificationPosition_Parms
		{
			ESteamNotificationPosition NotificationPosition;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NotificationPosition_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NotificationPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition = { "NotificationPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventSetOverlayNotificationPosition_Parms, NotificationPosition), Z_Construct_UEnum_SteamCore_ESteamNotificationPosition, METADATA_PARAMS(nullptr, 0) }; // 196665349
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Sets which corner the Steam overlay notification popup should display itself in.\n\x09*\n\x09* You can also set the distance from the specified corner by using SetOverlayNotificationInset.\n\x09* This position is per-game and is reset each launch.\n\x09*\n\x09* @param\x09NotificationPosition\x09position\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Sets which corner the Steam overlay notification popup should display itself in.\n\nYou can also set the distance from the specified corner by using SetOverlayNotificationInset.\nThis position is per-game and is reset each launch.\n\n@param        NotificationPosition    position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "SetOverlayNotificationPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::Utils_eventSetOverlayNotificationPosition_Parms), Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics
	{
		struct Utils_eventSetVRHeadsetStreamingEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((Utils_eventSetVRHeadsetStreamingEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Utils_eventSetVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Set whether the HMD content will be streamed via Steam Remote Play.\n\x09*\n\x09* If this is enabled, then the scene in the HMD headset will be streamed, and remote input will not be allowed. Otherwise if this is disabled, then the application window will be streamed instead, and remote input will be allowed. VR games default to enabled unless \"VRHeadsetStreaming\" \"0\" is in the extended appinfo for a game.\n\x09* This is useful for games that have asymmetric multiplayer gameplay.\n\x09*\n\x09* @param\x09""bEnabled\x09Turns VR HMD Streaming on (true) or off (false).\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Set whether the HMD content will be streamed via Steam Remote Play.\n\nIf this is enabled, then the scene in the HMD headset will be streamed, and remote input will not be allowed. Otherwise if this is disabled, then the application window will be streamed instead, and remote input will be allowed. VR games default to enabled unless \"VRHeadsetStreaming\" \"0\" is in the extended appinfo for a game.\nThis is useful for games that have asymmetric multiplayer gameplay.\n\n@param        bEnabled        Turns VR HMD Streaming on (true) or off (false)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "SetVRHeadsetStreamingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::Utils_eventSetVRHeadsetStreamingEnabled_Parms), Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, InputMode), Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode, METADATA_PARAMS(nullptr, 0) }; // 168324082
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_LineInputMode = { "LineInputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, LineInputMode), Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode, METADATA_PARAMS(nullptr, 0) }; // 3679750875
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, Description), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_CharMax = { "CharMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, CharMax), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ExistingText = { "ExistingText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, ExistingText), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventShowGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Utils_eventShowGamepadTextInput_Parms), &Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Activates the Big Picture text input dialog which only supports gamepad input.\n\x09*\n\x09* @param\x09InputMode\x09\x09\x09Selects the input mode to use, either Normal or Password (hidden text)\n\x09* @param\x09LineInputMode\x09\x09""Controls whether to use single or multi line input.\n\x09* @param\x09""Description\x09\x09\x09Sets the description that should inform the user what the input dialog is for.\n\x09* @param\x09""CharMax\x09\x09\x09\x09The maximum number of characters that the user can input.\n\x09* @param\x09""ExistingText\x09\x09Sets the preexisting text which the user can edit.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Activates the Big Picture text input dialog which only supports gamepad input.\n\n@param        InputMode                       Selects the input mode to use, either Normal or Password (hidden text)\n@param        LineInputMode           Controls whether to use single or multi line input.\n@param        Description                     Sets the description that should inform the user what the input dialog is for.\n@param        CharMax                         The maximum number of characters that the user can input.\n@param        ExistingText            Sets the preexisting text which the user can edit." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "ShowGamepadTextInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::Utils_eventShowGamepadTextInput_Parms), Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_ShowGamepadTextInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_StartVRDashboard_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Asks Steam to create and render the OpenVR dashboard.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
		{ "ToolTip", "Asks Steam to create and render the OpenVR dashboard." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "StartVRDashboard", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_StartVRDashboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUtils);
	UClass* Z_Construct_UClass_UUtils_NoRegister()
	{
		return UUtils::StaticClass();
	}
	struct Z_Construct_UClass_UUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckFileSignature_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CheckFileSignature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamepadTextInputDismissed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GamepadTextInputDismissed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPCountry_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_IPCountry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowBatteryPower_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LowBatteryPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamShutdown_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamShutdown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUtils_BOverlayNeedsPresent, "BOverlayNeedsPresent" }, // 1938156947
		{ &Z_Construct_UFunction_UUtils_GetAppID, "GetAppID" }, // 4055557611
		{ &Z_Construct_UFunction_UUtils_GetAppID_Pure, "GetAppID_Pure" }, // 1457157043
		{ &Z_Construct_UFunction_UUtils_GetConnectedUniverse, "GetConnectedUniverse" }, // 648208515
		{ &Z_Construct_UFunction_UUtils_GetCurrentBatteryPower, "GetCurrentBatteryPower" }, // 1567548015
		{ &Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput, "GetEnteredGamepadTextInput" }, // 1129852791
		{ &Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength, "GetEnteredGamepadTextLength" }, // 134104836
		{ &Z_Construct_UFunction_UUtils_GetImageRGBA, "GetImageRGBA" }, // 4177782383
		{ &Z_Construct_UFunction_UUtils_GetImageSize, "GetImageSize" }, // 3051148781
		{ &Z_Construct_UFunction_UUtils_GetIPCCallCount, "GetIPCCallCount" }, // 1560286566
		{ &Z_Construct_UFunction_UUtils_GetIPCountry, "GetIPCountry" }, // 1763340392
		{ &Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive, "GetSecondsSinceAppActive" }, // 4177339575
		{ &Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive, "GetSecondsSinceComputerActive" }, // 2877300802
		{ &Z_Construct_UFunction_UUtils_GetServerRealTime, "GetServerRealTime" }, // 3184766743
		{ &Z_Construct_UFunction_UUtils_GetSteamUILanguage, "GetSteamUILanguage" }, // 3196789017
		{ &Z_Construct_UFunction_UUtils_InitFilterText, "InitFilterText" }, // 2376199138
		{ &Z_Construct_UFunction_UUtils_IsOverlayEnabled, "IsOverlayEnabled" }, // 3033278846
		{ &Z_Construct_UFunction_UUtils_IsSteamChinaLauncher, "IsSteamChinaLauncher" }, // 1520687168
		{ &Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode, "IsSteamInBigPictureMode" }, // 505419770
		{ &Z_Construct_UFunction_UUtils_IsSteamRunningInVR, "IsSteamRunningInVR" }, // 2700274598
		{ &Z_Construct_UFunction_UUtils_IsSteamRunningOnSteamDeck, "IsSteamRunningOnSteamDeck" }, // 122576375
		{ &Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled, "IsVRHeadsetStreamingEnabled" }, // 1908315539
		{ &Z_Construct_UFunction_UUtils_SetOverlayNotificationInset, "SetOverlayNotificationInset" }, // 1444829499
		{ &Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition, "SetOverlayNotificationPosition" }, // 4138121925
		{ &Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled, "SetVRHeadsetStreamingEnabled" }, // 2863162926
		{ &Z_Construct_UFunction_UUtils_ShowGamepadTextInput, "ShowGamepadTextInput" }, // 1763000919
		{ &Z_Construct_UFunction_UUtils_StartVRDashboard, "StartVRDashboard" }, // 1423518394
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUtils/SteamUtils.h" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::NewProp_CheckFileSignature_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_CheckFileSignature = { "CheckFileSignature", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUtils, CheckFileSignature), Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::NewProp_CheckFileSignature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::NewProp_CheckFileSignature_MetaData)) }; // 2731373031
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::NewProp_GamepadTextInputDismissed_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_GamepadTextInputDismissed = { "GamepadTextInputDismissed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUtils, GamepadTextInputDismissed), Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::NewProp_GamepadTextInputDismissed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::NewProp_GamepadTextInputDismissed_MetaData)) }; // 1460274848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::NewProp_IPCountry_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_IPCountry = { "IPCountry", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUtils, IPCountry), Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::NewProp_IPCountry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::NewProp_IPCountry_MetaData)) }; // 529717008
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::NewProp_LowBatteryPower_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_LowBatteryPower = { "LowBatteryPower", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUtils, LowBatteryPower), Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::NewProp_LowBatteryPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::NewProp_LowBatteryPower_MetaData)) }; // 1217626751
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::NewProp_SteamShutdown_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUtils/SteamUtils.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_SteamShutdown = { "SteamShutdown", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUtils, SteamShutdown), Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::NewProp_SteamShutdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::NewProp_SteamShutdown_MetaData)) }; // 4219675316
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUtils_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_CheckFileSignature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_GamepadTextInputDismissed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_IPCountry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_LowBatteryPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_SteamShutdown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUtils>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUtils()
	{
		if (!Z_Registration_Info_UClass_UUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUtils.OuterSingleton, Z_Construct_UClass_UUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUtils.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<UUtils>()
	{
		return UUtils::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUtils);
	UUtils::~UUtils() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUtils, UUtils::StaticClass, TEXT("UUtils"), &Z_Registration_Info_UClass_UUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUtils), 4082390987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_3011182336(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamUtils_SteamUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
