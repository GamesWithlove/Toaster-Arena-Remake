// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamScreenshots/SteamScreenshots.h"
#include "Engine/GameInstance.h"
#include "SteamScreenshots/SteamScreenshotsTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamScreenshots() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UClass* Z_Construct_UClass_UScreenshots();
STEAMCORE_API UClass* Z_Construct_UClass_UScreenshots_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotHandle();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UScreenshots Function AddScreenshotToLibrary *****************************
struct Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics
{
	struct Screenshots_eventAddScreenshotToLibrary_Parms
	{
		FString FileName;
		FString ThumbnailFilename;
		int32 Width;
		int32 Height;
		FScreenshotHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Adds a screenshot to the user's Steam screenshot library from disk.\n\x09*\n\x09* @param\x09""FileName\x09\x09\x09\x09The absolute file path to the JPG, PNG, or TGA screenshot.\n\x09* @param\x09ThumbnailFilename\x09\x09The absolute file path to an optional thumbnail image. This must be 200px wide, as described by k_ScreenshotThumbWidth and the same aspect ratio. Pass NULL if there is no thumbnail, one will be created automatically.\n\x09* @param\x09Width\x09\x09\x09\x09\x09The width of the screenshot.\n\x09* @param\x09Height\x09\x09\x09\x09\x09The height of the screenshot.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a screenshot to the user's Steam screenshot library from disk.\n\n@param        FileName                                The absolute file path to the JPG, PNG, or TGA screenshot.\n@param        ThumbnailFilename               The absolute file path to an optional thumbnail image. This must be 200px wide, as described by k_ScreenshotThumbWidth and the same aspect ratio. Pass NULL if there is no thumbnail, one will be created automatically.\n@param        Width                                   The width of the screenshot.\n@param        Height                                  The height of the screenshot." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddScreenshotToLibrary constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ThumbnailFilename;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddScreenshotToLibrary constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddScreenshotToLibrary Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventAddScreenshotToLibrary_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_ThumbnailFilename = { "ThumbnailFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventAddScreenshotToLibrary_Parms, ThumbnailFilename), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventAddScreenshotToLibrary_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventAddScreenshotToLibrary_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventAddScreenshotToLibrary_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 2218202444
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_ThumbnailFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::PropPointers) < 2048);
// ********** End Function AddScreenshotToLibrary Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "AddScreenshotToLibrary", 	Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::Screenshots_eventAddScreenshotToLibrary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::Screenshots_eventAddScreenshotToLibrary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenshots::execAddScreenshotToLibrary)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ThumbnailFilename);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScreenshotHandle*)Z_Param__Result=UScreenshots::AddScreenshotToLibrary(Z_Param_FileName,Z_Param_ThumbnailFilename,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// ********** End Class UScreenshots Function AddScreenshotToLibrary *******************************

// ********** Begin Class UScreenshots Function AddVRScreenshotToLibrary ***************************
struct Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics
{
	struct Screenshots_eventAddVRScreenshotToLibrary_Parms
	{
		ESteamVRScreenshotType EType;
		FString FileName;
		FString VRFileName;
		FScreenshotHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Adds a VR screenshot to the user's Steam screenshot library from disk in the supported type.\n\x09*\n\x09* @param\x09""EType\x09\x09\x09The type of VR screenshot that this is.\n\x09* @param\x09""FileName\x09\x09The absolute file path to a 2D JPG, PNG, or TGA version of the screenshot for the library view.\n\x09* @param\x09VRFileName\x09\x09The absolute file path to the VR screenshot, this should be the same type of screenshot specified in eType.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a VR screenshot to the user's Steam screenshot library from disk in the supported type.\n\n@param        EType                   The type of VR screenshot that this is.\n@param        FileName                The absolute file path to a 2D JPG, PNG, or TGA version of the screenshot for the library view.\n@param        VRFileName              The absolute file path to the VR screenshot, this should be the same type of screenshot specified in eType." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddVRScreenshotToLibrary constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_EType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VRFileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddVRScreenshotToLibrary constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddVRScreenshotToLibrary Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_EType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_EType = { "EType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventAddVRScreenshotToLibrary_Parms, EType), Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType, METADATA_PARAMS(0, nullptr) }; // 2663465095
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventAddVRScreenshotToLibrary_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_VRFileName = { "VRFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventAddVRScreenshotToLibrary_Parms, VRFileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventAddVRScreenshotToLibrary_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 2218202444
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_EType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_EType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_VRFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::PropPointers) < 2048);
// ********** End Function AddVRScreenshotToLibrary Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "AddVRScreenshotToLibrary", 	Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::Screenshots_eventAddVRScreenshotToLibrary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::Screenshots_eventAddVRScreenshotToLibrary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenshots::execAddVRScreenshotToLibrary)
{
	P_GET_ENUM(ESteamVRScreenshotType,Z_Param_EType);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY(FStrProperty,Z_Param_VRFileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScreenshotHandle*)Z_Param__Result=UScreenshots::AddVRScreenshotToLibrary(ESteamVRScreenshotType(Z_Param_EType),Z_Param_FileName,Z_Param_VRFileName);
	P_NATIVE_END;
}
// ********** End Class UScreenshots Function AddVRScreenshotToLibrary *****************************

// ********** Begin Class UScreenshots Function HookScreenshots ************************************
struct Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics
{
	struct Screenshots_eventHookScreenshots_Parms
	{
		bool bHook;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Toggles whether the overlay handles screenshots when the user presses the screenshot hotkey, or if the game handles them.\n\x09*\n\x09* Hooking is disabled by default, and only ever enabled if you do so with this function.\n\x09* If the hooking is enabled, then the ScreenshotRequested_t callback will be sent if the user presses the hotkey or when TriggerScreenshot is called, and then the game is expected to call WriteScreenshot or AddScreenshotToLibrary in response.\n\x09* You can check if hooking is enabled with IsScreenshotsHooked.\n\x09*\n\x09* @param\x09""bHook\x09""Enable (true) or disable (false) hooking?\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggles whether the overlay handles screenshots when the user presses the screenshot hotkey, or if the game handles them.\n\nHooking is disabled by default, and only ever enabled if you do so with this function.\nIf the hooking is enabled, then the ScreenshotRequested_t callback will be sent if the user presses the hotkey or when TriggerScreenshot is called, and then the game is expected to call WriteScreenshot or AddScreenshotToLibrary in response.\nYou can check if hooking is enabled with IsScreenshotsHooked.\n\n@param        bHook   Enable (true) or disable (false) hooking?" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HookScreenshots constinit property declarations ***********************
	static void NewProp_bHook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HookScreenshots constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HookScreenshots Property Definitions **********************************
void Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::NewProp_bHook_SetBit(void* Obj)
{
	((Screenshots_eventHookScreenshots_Parms*)Obj)->bHook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::NewProp_bHook = { "bHook", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Screenshots_eventHookScreenshots_Parms), &Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::NewProp_bHook_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::NewProp_bHook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::PropPointers) < 2048);
// ********** End Function HookScreenshots Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "HookScreenshots", 	Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::Screenshots_eventHookScreenshots_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::Screenshots_eventHookScreenshots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScreenshots_HookScreenshots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenshots::execHookScreenshots)
{
	P_GET_UBOOL(Z_Param_bHook);
	P_FINISH;
	P_NATIVE_BEGIN;
	UScreenshots::HookScreenshots(Z_Param_bHook);
	P_NATIVE_END;
}
// ********** End Class UScreenshots Function HookScreenshots **************************************

// ********** Begin Class UScreenshots Function IsScreenshotsHooked ********************************
struct Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics
{
	struct Screenshots_eventIsScreenshotsHooked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Checks if the app is hooking screenshots, or if the Steam Overlay is handling them.\n\x09*\n\x09* This can be toggled with HookScreenshots.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the app is hooking screenshots, or if the Steam Overlay is handling them.\n\nThis can be toggled with HookScreenshots." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsScreenshotsHooked constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsScreenshotsHooked constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsScreenshotsHooked Property Definitions ******************************
void Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Screenshots_eventIsScreenshotsHooked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Screenshots_eventIsScreenshotsHooked_Parms), &Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::PropPointers) < 2048);
// ********** End Function IsScreenshotsHooked Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "IsScreenshotsHooked", 	Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::Screenshots_eventIsScreenshotsHooked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::Screenshots_eventIsScreenshotsHooked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenshots::execIsScreenshotsHooked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UScreenshots::IsScreenshotsHooked();
	P_NATIVE_END;
}
// ********** End Class UScreenshots Function IsScreenshotsHooked **********************************

// ********** Begin Class UScreenshots Function SetLocation ****************************************
struct Z_Construct_UFunction_UScreenshots_SetLocation_Statics
{
	struct Screenshots_eventSetLocation_Parms
	{
		FScreenshotHandle Handle;
		FString Location;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets optional metadata about a screenshot's location. For example, the name of the map it was taken on.\n\x09*\n\x09* You can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\x09*\n\x09* @param\x09Handle\x09\x09The handle to the screenshot to tag.\n\x09* @param\x09Location\x09The location in the game where this screenshot was taken. This can not be longer than k_cubUFSTagValueMax.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets optional metadata about a screenshot's location. For example, the name of the map it was taken on.\n\nYou can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\n@param        Handle          The handle to the screenshot to tag.\n@param        Location        The location in the game where this screenshot was taken. This can not be longer than k_cubUFSTagValueMax." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetLocation constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Location;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLocation constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLocation Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventSetLocation_Parms, Handle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 2218202444
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventSetLocation_Parms, Location), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Screenshots_eventSetLocation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Screenshots_eventSetLocation_Parms), &Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_SetLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_SetLocation_Statics::PropPointers) < 2048);
// ********** End Function SetLocation Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_SetLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "SetLocation", 	Z_Construct_UFunction_UScreenshots_SetLocation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_SetLocation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UScreenshots_SetLocation_Statics::Screenshots_eventSetLocation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_SetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenshots_SetLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UScreenshots_SetLocation_Statics::Screenshots_eventSetLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScreenshots_SetLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenshots_SetLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenshots::execSetLocation)
{
	P_GET_STRUCT(FScreenshotHandle,Z_Param_Handle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UScreenshots::SetLocation(Z_Param_Handle,Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class UScreenshots Function SetLocation ******************************************

// ********** Begin Class UScreenshots Function TagPublishedFile ***********************************
struct Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics
{
	struct Screenshots_eventTagPublishedFile_Parms
	{
		FScreenshotHandle Handle;
		FPublishedFileID PublishedFileID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Tags a published file as being visible in the screenshot.\n\x09*\n\x09* You can tag up to the value declared by k_nScreenshotMaxTaggedPublishedFiles in a single screenshot. Tagging more items than that will just be discarded.\n\x09* This function has a built in delay before saving the tag which allows you to call it repeatedly for each item.\n\x09* You can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The handle to the screenshot to tag.\n\x09* @param\x09PublishedFileID\x09\x09The workshop item ID that is in the screenshot.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags a published file as being visible in the screenshot.\n\nYou can tag up to the value declared by k_nScreenshotMaxTaggedPublishedFiles in a single screenshot. Tagging more items than that will just be discarded.\nThis function has a built in delay before saving the tag which allows you to call it repeatedly for each item.\nYou can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\n@param        Handle                          The handle to the screenshot to tag.\n@param        PublishedFileID         The workshop item ID that is in the screenshot." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function TagPublishedFile constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TagPublishedFile constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TagPublishedFile Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventTagPublishedFile_Parms, Handle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 2218202444
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventTagPublishedFile_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 2947869779
void Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Screenshots_eventTagPublishedFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Screenshots_eventTagPublishedFile_Parms), &Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::PropPointers) < 2048);
// ********** End Function TagPublishedFile Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "TagPublishedFile", 	Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::Screenshots_eventTagPublishedFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::Screenshots_eventTagPublishedFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScreenshots_TagPublishedFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenshots::execTagPublishedFile)
{
	P_GET_STRUCT(FScreenshotHandle,Z_Param_Handle);
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UScreenshots::TagPublishedFile(Z_Param_Handle,Z_Param_PublishedFileID);
	P_NATIVE_END;
}
// ********** End Class UScreenshots Function TagPublishedFile *************************************

// ********** Begin Class UScreenshots Function TagUser ********************************************
struct Z_Construct_UFunction_UScreenshots_TagUser_Statics
{
	struct Screenshots_eventTagUser_Parms
	{
		FScreenshotHandle Handle;
		FSteamID SteamID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Tags a Steam user as being visible in the screenshot.\n\x09*\n\x09* You can tag up to the value declared by k_nScreenshotMaxTaggedUsers in a single screenshot. Tagging more users than that will just be discarded.\n\x09* This function has a built in delay before saving the tag which allows you to call it repeatedly for each item.\n\x09* You can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\x09*\n\x09* @param\x09Handle\x09\x09The handle to the screenshot to tag.\n\x09* @param\x09SteamID\x09\x09The Steam ID of a user that is in the screenshot.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags a Steam user as being visible in the screenshot.\n\nYou can tag up to the value declared by k_nScreenshotMaxTaggedUsers in a single screenshot. Tagging more users than that will just be discarded.\nThis function has a built in delay before saving the tag which allows you to call it repeatedly for each item.\nYou can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\n@param        Handle          The handle to the screenshot to tag.\n@param        SteamID         The Steam ID of a user that is in the screenshot." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function TagUser constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TagUser constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TagUser Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventTagUser_Parms, Handle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 2218202444
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventTagUser_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
void Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Screenshots_eventTagUser_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Screenshots_eventTagUser_Parms), &Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_TagUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_TagUser_Statics::PropPointers) < 2048);
// ********** End Function TagUser Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_TagUser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "TagUser", 	Z_Construct_UFunction_UScreenshots_TagUser_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_TagUser_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UScreenshots_TagUser_Statics::Screenshots_eventTagUser_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_TagUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenshots_TagUser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UScreenshots_TagUser_Statics::Screenshots_eventTagUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScreenshots_TagUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenshots_TagUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenshots::execTagUser)
{
	P_GET_STRUCT(FScreenshotHandle,Z_Param_Handle);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UScreenshots::TagUser(Z_Param_Handle,Z_Param_SteamID);
	P_NATIVE_END;
}
// ********** End Class UScreenshots Function TagUser **********************************************

// ********** Begin Class UScreenshots Function TriggerScreenshot **********************************
struct Z_Construct_UFunction_UScreenshots_TriggerScreenshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Either causes the Steam Overlay to take a screenshot, or tells your screenshot manager that a screenshot needs to be taken. Depending on the value of IsScreenshotsHooked.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Either causes the Steam Overlay to take a screenshot, or tells your screenshot manager that a screenshot needs to be taken. Depending on the value of IsScreenshotsHooked." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function TriggerScreenshot constinit property declarations *********************
// ********** End Function TriggerScreenshot constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_TriggerScreenshot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "TriggerScreenshot", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_TriggerScreenshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenshots_TriggerScreenshot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UScreenshots_TriggerScreenshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenshots_TriggerScreenshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenshots::execTriggerScreenshot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UScreenshots::TriggerScreenshot();
	P_NATIVE_END;
}
// ********** End Class UScreenshots Function TriggerScreenshot ************************************

// ********** Begin Class UScreenshots Function WriteScreenshot ************************************
struct Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics
{
	struct Screenshots_eventWriteScreenshot_Parms
	{
		TArray<uint8> PubRGB;
		int32 Width;
		int32 Height;
		FScreenshotHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Writes a screenshot to the user's Steam screenshot library given the raw image data, which must be in RGB format.\n\x09*\n\x09* @param\x09PubRGB\x09\x09The buffer containing the raw RGB data from the screenshot.\n\x09* @param\x09Width\x09\x09The width of the screenshot in pixels.\n\x09* @param\x09Height\x09\x09The height of the screenshot in pixels.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Writes a screenshot to the user's Steam screenshot library given the raw image data, which must be in RGB format.\n\n@param        PubRGB          The buffer containing the raw RGB data from the screenshot.\n@param        Width           The width of the screenshot in pixels.\n@param        Height          The height of the screenshot in pixels." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function WriteScreenshot constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_PubRGB_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PubRGB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WriteScreenshot constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WriteScreenshot Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_PubRGB_Inner = { "PubRGB", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_PubRGB = { "PubRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventWriteScreenshot_Parms, PubRGB), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventWriteScreenshot_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventWriteScreenshot_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Screenshots_eventWriteScreenshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(0, nullptr) }; // 2218202444
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_PubRGB_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_PubRGB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::PropPointers) < 2048);
// ********** End Function WriteScreenshot Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "WriteScreenshot", 	Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::Screenshots_eventWriteScreenshot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::Screenshots_eventWriteScreenshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScreenshots_WriteScreenshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenshots::execWriteScreenshot)
{
	P_GET_TARRAY(uint8,Z_Param_PubRGB);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScreenshotHandle*)Z_Param__Result=UScreenshots::WriteScreenshot(Z_Param_PubRGB,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// ********** End Class UScreenshots Function WriteScreenshot **************************************

// ********** Begin Class UScreenshots *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UScreenshots;
UClass* UScreenshots::GetPrivateStaticClass()
{
	using TClass = UScreenshots;
	if (!Z_Registration_Info_UClass_UScreenshots.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Screenshots"),
			Z_Registration_Info_UClass_UScreenshots.InnerSingleton,
			StaticRegisterNativesUScreenshots,
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
	return Z_Registration_Info_UClass_UScreenshots.InnerSingleton;
}
UClass* Z_Construct_UClass_UScreenshots_NoRegister()
{
	return UScreenshots::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UScreenshots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamScreenshots/SteamScreenshots.h" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotReady_MetaData[] = {
		{ "Category", "SteamCore|Screenshots|Delegates" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotRequested_MetaData[] = {
		{ "Category", "SteamCore|Screenshots|Delegates" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshots.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UScreenshots constinit property declarations *****************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ScreenshotReady;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ScreenshotRequested;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UScreenshots constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddScreenshotToLibrary"), .Pointer = &UScreenshots::execAddScreenshotToLibrary },
		{ .NameUTF8 = UTF8TEXT("AddVRScreenshotToLibrary"), .Pointer = &UScreenshots::execAddVRScreenshotToLibrary },
		{ .NameUTF8 = UTF8TEXT("HookScreenshots"), .Pointer = &UScreenshots::execHookScreenshots },
		{ .NameUTF8 = UTF8TEXT("IsScreenshotsHooked"), .Pointer = &UScreenshots::execIsScreenshotsHooked },
		{ .NameUTF8 = UTF8TEXT("SetLocation"), .Pointer = &UScreenshots::execSetLocation },
		{ .NameUTF8 = UTF8TEXT("TagPublishedFile"), .Pointer = &UScreenshots::execTagPublishedFile },
		{ .NameUTF8 = UTF8TEXT("TagUser"), .Pointer = &UScreenshots::execTagUser },
		{ .NameUTF8 = UTF8TEXT("TriggerScreenshot"), .Pointer = &UScreenshots::execTriggerScreenshot },
		{ .NameUTF8 = UTF8TEXT("WriteScreenshot"), .Pointer = &UScreenshots::execWriteScreenshot },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary, "AddScreenshotToLibrary" }, // 3897234177
		{ &Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary, "AddVRScreenshotToLibrary" }, // 1822064773
		{ &Z_Construct_UFunction_UScreenshots_HookScreenshots, "HookScreenshots" }, // 3171461016
		{ &Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked, "IsScreenshotsHooked" }, // 3453739011
		{ &Z_Construct_UFunction_UScreenshots_SetLocation, "SetLocation" }, // 3091328530
		{ &Z_Construct_UFunction_UScreenshots_TagPublishedFile, "TagPublishedFile" }, // 3601521088
		{ &Z_Construct_UFunction_UScreenshots_TagUser, "TagUser" }, // 4087920056
		{ &Z_Construct_UFunction_UScreenshots_TriggerScreenshot, "TriggerScreenshot" }, // 1859733367
		{ &Z_Construct_UFunction_UScreenshots_WriteScreenshot, "WriteScreenshot" }, // 2160482048
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenshots>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UScreenshots_Statics

// ********** Begin Class UScreenshots Property Definitions ****************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotReady = { "ScreenshotReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenshots, ScreenshotReady), Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenshotReady_MetaData), NewProp_ScreenshotReady_MetaData) }; // 4149803488
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotRequested = { "ScreenshotRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenshots, ScreenshotRequested), Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenshotRequested_MetaData), NewProp_ScreenshotRequested_MetaData) }; // 2347289575
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenshots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotRequested,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshots_Statics::PropPointers) < 2048);
// ********** End Class UScreenshots Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UScreenshots_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshots_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScreenshots_Statics::ClassParams = {
	&UScreenshots::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UScreenshots_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshots_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshots_Statics::Class_MetaDataParams), Z_Construct_UClass_UScreenshots_Statics::Class_MetaDataParams)
};
void UScreenshots::StaticRegisterNativesUScreenshots()
{
	UClass* Class = UScreenshots::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UScreenshots_Statics::Funcs));
}
UClass* Z_Construct_UClass_UScreenshots()
{
	if (!Z_Registration_Info_UClass_UScreenshots.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScreenshots.OuterSingleton, Z_Construct_UClass_UScreenshots_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScreenshots.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UScreenshots);
UScreenshots::~UScreenshots() {}
// ********** End Class UScreenshots ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScreenshots, UScreenshots::StaticClass, TEXT("UScreenshots"), &Z_Registration_Info_UClass_UScreenshots, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScreenshots), 946741575U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h__Script_SteamCore_632771336{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
