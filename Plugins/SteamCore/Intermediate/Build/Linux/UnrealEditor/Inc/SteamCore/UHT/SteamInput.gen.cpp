// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamInput/SteamInput.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "SteamCore/Public/SteamInput/SteamInputTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamInput() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UInput();
	STEAMCORE_API UClass* Z_Construct_UClass_UInput_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag();
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
	DEFINE_FUNCTION(UInput::execGetRemotePlaySessionID)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRemotePlaySessionID(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetDeviceBindingRevision)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Major);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Minor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDeviceBindingRevision(Z_Param_Handle,Z_Param_Out_Major,Z_Param_Out_Minor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execTranslateActionOrigin)
	{
		P_GET_ENUM(ESteamCoreInputType,Z_Param_DestinationInputType);
		P_GET_PROPERTY(FByteProperty,Z_Param_SourceOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ESteamCoreInputActionOrigin>*)Z_Param__Result=P_THIS->TranslateActionOrigin(ESteamCoreInputType(Z_Param_DestinationInputType),ESteamCoreInputActionOrigin(Z_Param_SourceOrigin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetActionOriginFromXboxOrigin)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_ENUM(ESteamCoreXboxOrigin,Z_Param_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ESteamCoreInputActionOrigin>*)Z_Param__Result=P_THIS->GetActionOriginFromXboxOrigin(Z_Param_Handle,ESteamCoreXboxOrigin(Z_Param_Origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetGlyphForXboxOrigin)
	{
		P_GET_ENUM(ESteamCoreXboxOrigin,Z_Param_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetGlyphForXboxOrigin(ESteamCoreXboxOrigin(Z_Param_Origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetStringForXboxOrigin)
	{
		P_GET_ENUM(ESteamCoreXboxOrigin,Z_Param_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringForXboxOrigin(ESteamCoreXboxOrigin(Z_Param_Origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetGamepadIndexForController)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGamepadIndexForController(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetControllerForGamepadIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputHandle*)Z_Param__Result=P_THIS->GetControllerForGamepadIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetInputTypeForHandle)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamCoreInputType*)Z_Param__Result=P_THIS->GetInputTypeForHandle(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execShowBindingPanel)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowBindingPanel(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execTriggerRepeatedHapticPulse)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_ENUM(ESteamCoreControllerPad,Z_Param_TargetPad);
		P_GET_PROPERTY(FByteProperty,Z_Param_DurationMicroSec);
		P_GET_PROPERTY(FByteProperty,Z_Param_OffMicroSec);
		P_GET_PROPERTY(FByteProperty,Z_Param_Repeat);
		P_GET_PROPERTY(FByteProperty,Z_Param_Flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerRepeatedHapticPulse(Z_Param_Handle,ESteamCoreControllerPad(Z_Param_TargetPad),Z_Param_DurationMicroSec,Z_Param_OffMicroSec,Z_Param_Repeat,Z_Param_Flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execTriggerHapticPulse)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_ENUM(ESteamCoreControllerPad,Z_Param_TargetPad);
		P_GET_PROPERTY(FByteProperty,Z_Param_DurationMicroSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerHapticPulse(Z_Param_Handle,ESteamCoreControllerPad(Z_Param_TargetPad),Z_Param_DurationMicroSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execSetLEDColor)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_PROPERTY(FByteProperty,Z_Param_ColorR);
		P_GET_PROPERTY(FByteProperty,Z_Param_ColorG);
		P_GET_PROPERTY(FByteProperty,Z_Param_ColorB);
		P_GET_ENUM(ESteamCoreInputLEDFlag,Z_Param_Flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLEDColor(Z_Param_Handle,Z_Param_ColorR,Z_Param_ColorG,Z_Param_ColorB,ESteamCoreInputLEDFlag(Z_Param_Flags));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execTriggerVibration)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_PROPERTY(FByteProperty,Z_Param_LeftSpeed);
		P_GET_PROPERTY(FByteProperty,Z_Param_RightSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerVibration(Z_Param_Handle,Z_Param_LeftSpeed,Z_Param_RightSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetMotionData)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputMotionData*)Z_Param__Result=P_THIS->GetMotionData(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execStopAnalogActionMomentum)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_EAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAnalogActionMomentum(Z_Param_Handle,Z_Param_EAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetStringForActionOrigin)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringForActionOrigin(ESteamCoreInputActionOrigin(Z_Param_Origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetGlyphForActionOrigin)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetGlyphForActionOrigin(ESteamCoreInputActionOrigin(Z_Param_Origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetAnalogActionOrigins)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
		P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_AnalogActionHandle);
		P_GET_TARRAY_REF(TEnumAsByte<ESteamCoreInputActionOrigin>,Z_Param_Out_OriginsOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAnalogActionOrigins(Z_Param_Handle,Z_Param_ActionSetHandle,Z_Param_AnalogActionHandle,Z_Param_Out_OriginsOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetAnalogActionData)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_AnalogActionHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputAnalogActionData*)Z_Param__Result=P_THIS->GetAnalogActionData(Z_Param_Handle,Z_Param_AnalogActionHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetAnalogActionHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PszActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputAnalogActionHandle*)Z_Param__Result=P_THIS->GetAnalogActionHandle(Z_Param_PszActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetDigitalActionOrigins)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
		P_GET_STRUCT(FInputDigitalActionHandle,Z_Param_DigitalActionHandle);
		P_GET_TARRAY_REF(TEnumAsByte<ESteamCoreInputActionOrigin>,Z_Param_Out_OriginsOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDigitalActionOrigins(Z_Param_Handle,Z_Param_ActionSetHandle,Z_Param_DigitalActionHandle,Z_Param_Out_OriginsOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetDigitalActionData)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_STRUCT(FInputDigitalActionHandle,Z_Param_DigitalActionHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputDigitalActionData*)Z_Param__Result=P_THIS->GetDigitalActionData(Z_Param_Handle,Z_Param_DigitalActionHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetDigitalActionHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PszActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputDigitalActionHandle*)Z_Param__Result=P_THIS->GetDigitalActionHandle(Z_Param_PszActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetActiveActionSetLayers)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_TARRAY_REF(FInputActionSetHandle,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveActionSetLayers(Z_Param_Handle,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execDeactivateAllActionSetLayers)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateAllActionSetLayers(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execDeactivateActionSetLayer)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetLayerHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateActionSetLayer(Z_Param_Handle,Z_Param_ActionSetLayerHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execActivateActionSetLayer)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetLayerHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateActionSetLayer(Z_Param_Handle,Z_Param_ActionSetLayerHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetCurrentActionSet)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputActionSetHandle*)Z_Param__Result=P_THIS->GetCurrentActionSet(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execActivateActionSet)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_Handle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateActionSet(Z_Param_Handle,Z_Param_ActionSetHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetActionSetHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ActionSetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputActionSetHandle*)Z_Param__Result=P_THIS->GetActionSetHandle(Z_Param_ActionSetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetConnectedControllers)
	{
		P_GET_TARRAY_REF(FInputHandle,Z_Param_Out_OutHandles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetConnectedControllers(Z_Param_Out_OutHandles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Shutdown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Init();
		P_NATIVE_END;
	}
	void UInput::StaticRegisterNativesUInput()
	{
		UClass* Class = UInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateActionSet", &UInput::execActivateActionSet },
			{ "ActivateActionSetLayer", &UInput::execActivateActionSetLayer },
			{ "DeactivateActionSetLayer", &UInput::execDeactivateActionSetLayer },
			{ "DeactivateAllActionSetLayers", &UInput::execDeactivateAllActionSetLayers },
			{ "GetActionOriginFromXboxOrigin", &UInput::execGetActionOriginFromXboxOrigin },
			{ "GetActionSetHandle", &UInput::execGetActionSetHandle },
			{ "GetActiveActionSetLayers", &UInput::execGetActiveActionSetLayers },
			{ "GetAnalogActionData", &UInput::execGetAnalogActionData },
			{ "GetAnalogActionHandle", &UInput::execGetAnalogActionHandle },
			{ "GetAnalogActionOrigins", &UInput::execGetAnalogActionOrigins },
			{ "GetConnectedControllers", &UInput::execGetConnectedControllers },
			{ "GetControllerForGamepadIndex", &UInput::execGetControllerForGamepadIndex },
			{ "GetCurrentActionSet", &UInput::execGetCurrentActionSet },
			{ "GetDeviceBindingRevision", &UInput::execGetDeviceBindingRevision },
			{ "GetDigitalActionData", &UInput::execGetDigitalActionData },
			{ "GetDigitalActionHandle", &UInput::execGetDigitalActionHandle },
			{ "GetDigitalActionOrigins", &UInput::execGetDigitalActionOrigins },
			{ "GetGamepadIndexForController", &UInput::execGetGamepadIndexForController },
			{ "GetGlyphForActionOrigin", &UInput::execGetGlyphForActionOrigin },
			{ "GetGlyphForXboxOrigin", &UInput::execGetGlyphForXboxOrigin },
			{ "GetInputTypeForHandle", &UInput::execGetInputTypeForHandle },
			{ "GetMotionData", &UInput::execGetMotionData },
			{ "GetRemotePlaySessionID", &UInput::execGetRemotePlaySessionID },
			{ "GetStringForActionOrigin", &UInput::execGetStringForActionOrigin },
			{ "GetStringForXboxOrigin", &UInput::execGetStringForXboxOrigin },
			{ "Init", &UInput::execInit },
			{ "SetLEDColor", &UInput::execSetLEDColor },
			{ "ShowBindingPanel", &UInput::execShowBindingPanel },
			{ "Shutdown", &UInput::execShutdown },
			{ "StopAnalogActionMomentum", &UInput::execStopAnalogActionMomentum },
			{ "TranslateActionOrigin", &UInput::execTranslateActionOrigin },
			{ "TriggerHapticPulse", &UInput::execTriggerHapticPulse },
			{ "TriggerRepeatedHapticPulse", &UInput::execTriggerRepeatedHapticPulse },
			{ "TriggerVibration", &UInput::execTriggerVibration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInput_ActivateActionSet_Statics
	{
		struct Input_eventActivateActionSet_Parms
		{
			FInputHandle Handle;
			FInputActionSetHandle ActionSetHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ActivateActionSet_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventActivateActionSet_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ActivateActionSet_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventActivateActionSet_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) }; // 139621278
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_ActivateActionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ActivateActionSet_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ActivateActionSet_Statics::NewProp_ActionSetHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_ActivateActionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Reconfigure the controller to use the specified action set (ie \"Menu\", \"Walk\", or \"Drive\").\n\x09*\n\x09* This is cheap, and can be safely called repeatedly. It's often easier to repeatedly call it in your state loops, instead of trying to place it in all of your state transitions.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The Handle of the controller you want to activate an action set for.\n\x09* @param\x09""ActionSetHandle\x09\x09The Handle of the action set you want to activate.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Reconfigure the controller to use the specified action set (ie \"Menu\", \"Walk\", or \"Drive\").\n\nThis is cheap, and can be safely called repeatedly. It's often easier to repeatedly call it in your state loops, instead of trying to place it in all of your state transitions.\n\n@param        Handle                          The Handle of the controller you want to activate an action set for.\n@param        ActionSetHandle         The Handle of the action set you want to activate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_ActivateActionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "ActivateActionSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_ActivateActionSet_Statics::Input_eventActivateActionSet_Parms), Z_Construct_UFunction_UInput_ActivateActionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_ActivateActionSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_ActivateActionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_ActivateActionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics
	{
		struct Input_eventActivateActionSetLayer_Parms
		{
			FInputHandle Handle;
			FInputActionSetHandle ActionSetLayerHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetLayerHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventActivateActionSetLayer_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle = { "ActionSetLayerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventActivateActionSetLayer_Parms, ActionSetLayerHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) }; // 139621278
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Reconfigure the controller to use the specified action set layer.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to activate an action set layer for.\n\x09* @param\x09""ActionSetLayerHandle\x09The Handle of the action set layer you want to activate.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Reconfigure the controller to use the specified action set layer.\n\n@param        Handle                                  The Handle of the controller you want to activate an action set layer for.\n@param        ActionSetLayerHandle    The Handle of the action set layer you want to activate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "ActivateActionSetLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::Input_eventActivateActionSetLayer_Parms), Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_ActivateActionSetLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics
	{
		struct Input_eventDeactivateActionSetLayer_Parms
		{
			FInputHandle Handle;
			FInputActionSetHandle ActionSetLayerHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetLayerHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventDeactivateActionSetLayer_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle = { "ActionSetLayerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventDeactivateActionSetLayer_Parms, ActionSetLayerHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) }; // 139621278
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Reconfigure the controller to stop using the specified action set layer.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to deactivate an action set layer for.\n\x09* @param\x09""ActionSetLayerHandle\x09The Handle of the action set layer you want to deactivate.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Reconfigure the controller to stop using the specified action set layer.\n\n@param        Handle                                  The Handle of the controller you want to deactivate an action set layer for.\n@param        ActionSetLayerHandle    The Handle of the action set layer you want to deactivate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "DeactivateActionSetLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::Input_eventDeactivateActionSetLayer_Parms), Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_DeactivateActionSetLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics
	{
		struct Input_eventDeactivateAllActionSetLayers_Parms
		{
			FInputHandle Handle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventDeactivateAllActionSetLayers_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Reconfigure the controller to stop using all action set layers.\n\x09*\n\x09* @param\x09Handle\x09The Handle of the controller you want to deactivate all action set layers for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Reconfigure the controller to stop using all action set layers.\n\n@param        Handle  The Handle of the controller you want to deactivate all action set layers for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "DeactivateAllActionSetLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::Input_eventDeactivateAllActionSetLayers_Parms), Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics
	{
		struct Input_eventGetActionOriginFromXboxOrigin_Parms
		{
			FInputHandle Handle;
			ESteamCoreXboxOrigin Origin;
			TEnumAsByte<ESteamCoreInputActionOrigin> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetActionOriginFromXboxOrigin_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetActionOriginFromXboxOrigin_Parms, Origin), Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin, METADATA_PARAMS(nullptr, 0) }; // 1415061896
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetActionOriginFromXboxOrigin_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) }; // 4220459220
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get an action Origin that you can use in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller to affect. You can use GetControllerForGamepadIndex to get this Handle\n\x09* @param\x09Origin\x09\x09This is the button you want to get the image for ex: k_EXboxOrigin_A\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get an action Origin that you can use in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin\n\n@param        Handle          The Handle of the controller to affect. You can use GetControllerForGamepadIndex to get this Handle\n@param        Origin          This is the button you want to get the image for ex: k_EXboxOrigin_A" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetActionOriginFromXboxOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::Input_eventGetActionOriginFromXboxOrigin_Parms), Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetActionSetHandle_Statics
	{
		struct Input_eventGetActionSetHandle_Parms
		{
			FString ActionSetName;
			FInputActionSetHandle ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActionSetName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_ActionSetName = { "ActionSetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetActionSetHandle_Parms, ActionSetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetActionSetHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) }; // 139621278
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_ActionSetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Lookup the Handle for an Action Set. Best to do this once on startup, and store the Handles for all future API calls.\n\x09*\n\x09* @param\x09""ActionSetName\x09The string identifier of an action set defined in the game's VDF file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Lookup the Handle for an Action Set. Best to do this once on startup, and store the Handles for all future API calls.\n\n@param        ActionSetName   The string identifier of an action set defined in the game's VDF file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetActionSetHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::Input_eventGetActionSetHandle_Parms), Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetActionSetHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics
	{
		struct Input_eventGetActiveActionSetLayers_Parms
		{
			FInputHandle Handle;
			TArray<FInputActionSetHandle> Data;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetActiveActionSetLayers_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) }; // 139621278
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetActiveActionSetLayers_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 139621278
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetActiveActionSetLayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Fill an array with all of the currently active action set layers for a specified controller Handle.\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller you want to deactivate all action set layers for.\n\x09* @param\x09""Data\x09\x09This must point to a STEAM_INPUT_MAX_COUNT sized array of InputHandle_t.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Fill an array with all of the currently active action set layers for a specified controller Handle.\n\n@param        Handle          The Handle of the controller you want to deactivate all action set layers for.\n@param        Data            This must point to a STEAM_INPUT_MAX_COUNT sized array of InputHandle_t." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetActiveActionSetLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::Input_eventGetActiveActionSetLayers_Parms), Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetActiveActionSetLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetAnalogActionData_Statics
	{
		struct Input_eventGetAnalogActionData_Parms
		{
			FInputHandle Handle;
			FInputAnalogActionHandle AnalogActionHandle;
			FInputAnalogActionData ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnalogActionHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetAnalogActionData_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_AnalogActionHandle = { "AnalogActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetAnalogActionData_Parms, AnalogActionHandle), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(nullptr, 0) }; // 1984869241
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetAnalogActionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputAnalogActionData, METADATA_PARAMS(nullptr, 0) }; // 2912632425
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_AnalogActionHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the current state of the supplied analog game action.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to query.\n\x09* @param\x09""AnalogActionHandle\x09\x09The Handle of the analog action you want to query.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns the current state of the supplied analog game action.\n\n@param        Handle                                  The Handle of the controller you want to query.\n@param        AnalogActionHandle              The Handle of the analog action you want to query." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetAnalogActionData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::Input_eventGetAnalogActionData_Parms), Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetAnalogActionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics
	{
		struct Input_eventGetAnalogActionHandle_Parms
		{
			FString PszActionName;
			FInputAnalogActionHandle ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PszActionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_PszActionName = { "PszActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetAnalogActionHandle_Parms, PszActionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetAnalogActionHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(nullptr, 0) }; // 1984869241
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_PszActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the Handle of the specified Analog action.\n\x09*\n\x09* @param\x09PszActionName\x09\x09The string identifier of the analog action defined in the game's VDF file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get the Handle of the specified Analog action.\n\n@param        PszActionName           The string identifier of the analog action defined in the game's VDF file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetAnalogActionHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::Input_eventGetAnalogActionHandle_Parms), Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetAnalogActionHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics
	{
		struct Input_eventGetAnalogActionOrigins_Parms
		{
			FInputHandle Handle;
			FInputActionSetHandle ActionSetHandle;
			FInputAnalogActionHandle AnalogActionHandle;
			TArray<TEnumAsByte<ESteamCoreInputActionOrigin> > OriginsOut;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnalogActionHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OriginsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginsOut;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) }; // 139621278
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_AnalogActionHandle = { "AnalogActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, AnalogActionHandle), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(nullptr, 0) }; // 1984869241
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut_Inner = { "OriginsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) }; // 4220459220
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut = { "OriginsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, OriginsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4220459220
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_ActionSetHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_AnalogActionHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the Origin(s) for an analog action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to query.\n\x09* @param\x09""ActionSetHandle\x09\x09\x09The Handle of the action set you want to query.\n\x09* @param\x09""AnalogActionHandle\x09\x09The Handle of the analog action you want to query.\n\x09* @param\x09OriginsOut\x09\x09\x09\x09""A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get the Origin(s) for an analog action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.\n\n@param        Handle                                  The Handle of the controller you want to query.\n@param        ActionSetHandle                 The Handle of the action set you want to query.\n@param        AnalogActionHandle              The Handle of the analog action you want to query.\n@param        OriginsOut                              A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetAnalogActionOrigins", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::Input_eventGetAnalogActionOrigins_Parms), Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetAnalogActionOrigins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetConnectedControllers_Statics
	{
		struct Input_eventGetConnectedControllers_Parms
		{
			TArray<FInputHandle> OutHandles;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHandles;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::NewProp_OutHandles_Inner = { "OutHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::NewProp_OutHandles = { "OutHandles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetConnectedControllers_Parms, OutHandles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetConnectedControllers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::NewProp_OutHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::NewProp_OutHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Enumerates currently connected controllers by filling OutHandles with controller handles.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Enumerates currently connected controllers by filling OutHandles with controller handles." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetConnectedControllers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::Input_eventGetConnectedControllers_Parms), Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetConnectedControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics
	{
		struct Input_eventGetControllerForGamepadIndex_Parms
		{
			int32 Index;
			FInputHandle ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetControllerForGamepadIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetControllerForGamepadIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the associated controller Handle for the specified emulated gamepad. Can be used with GetInputTypeForHandle to determine the controller type of a controller using Steam Input Gamepad Emulation.\n\x09*\n\x09* @param\x09Index\x09The index of the emulated gamepad you want to get a controller Handle for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns the associated controller Handle for the specified emulated gamepad. Can be used with GetInputTypeForHandle to determine the controller type of a controller using Steam Input Gamepad Emulation.\n\n@param        Index   The index of the emulated gamepad you want to get a controller Handle for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetControllerForGamepadIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::Input_eventGetControllerForGamepadIndex_Parms), Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetControllerForGamepadIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics
	{
		struct Input_eventGetCurrentActionSet_Parms
		{
			FInputHandle Handle;
			FInputActionSetHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetCurrentActionSet_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetCurrentActionSet_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) }; // 139621278
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the currently active action set for the specified controller.\n\x09*\n\x09* @param\x09Handle\x09The Handle of the controller you want to query.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get the currently active action set for the specified controller.\n\n@param        Handle  The Handle of the controller you want to query." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetCurrentActionSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::Input_eventGetCurrentActionSet_Parms), Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetCurrentActionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics
	{
		struct Input_eventGetDeviceBindingRevision_Parms
		{
			FInputHandle Handle;
			int32 Major;
			int32 Minor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Major;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Minor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetDeviceBindingRevision_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Major = { "Major", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetDeviceBindingRevision_Parms, Major), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Minor = { "Minor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetDeviceBindingRevision_Parms, Minor), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Input_eventGetDeviceBindingRevision_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Input_eventGetDeviceBindingRevision_Parms), &Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Major,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Minor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get's the major and minor device binding revisions for Steam Input API configurations. Minor revisions are for small changes such as adding a new option action or updating localization in the configuration. When updating a Minor revision only one new configuration needs to be update with the \"Use Action Block\" flag set. Major revisions are to be used when changing the number of action sets or otherwise reworking configurations to the degree that older configurations are no longer usable. When a user's binding disagree's with the major revision of the current official configuration Steam will forcibly update the user to the new configuration. New configurations will need to be made for every controller when updating the Major revision.\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller to query.\n\x09* @param\x09Major\x09\x09Pointer to int that Major binding revision will be populated into\n\x09* @param\x09Minor\x09\x09Pointer to int that Minor binding revision will be populated into\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get's the major and minor device binding revisions for Steam Input API configurations. Minor revisions are for small changes such as adding a new option action or updating localization in the configuration. When updating a Minor revision only one new configuration needs to be update with the \"Use Action Block\" flag set. Major revisions are to be used when changing the number of action sets or otherwise reworking configurations to the degree that older configurations are no longer usable. When a user's binding disagree's with the major revision of the current official configuration Steam will forcibly update the user to the new configuration. New configurations will need to be made for every controller when updating the Major revision.\n\n@param        Handle          The Handle of the controller to query.\n@param        Major           Pointer to int that Major binding revision will be populated into\n@param        Minor           Pointer to int that Minor binding revision will be populated into" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetDeviceBindingRevision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::Input_eventGetDeviceBindingRevision_Parms), Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetDeviceBindingRevision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetDigitalActionData_Statics
	{
		struct Input_eventGetDigitalActionData_Parms
		{
			FInputHandle Handle;
			FInputDigitalActionHandle DigitalActionHandle;
			FInputDigitalActionData ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DigitalActionHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetDigitalActionData_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_DigitalActionHandle = { "DigitalActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetDigitalActionData_Parms, DigitalActionHandle), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(nullptr, 0) }; // 1800435335
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetDigitalActionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDigitalActionData, METADATA_PARAMS(nullptr, 0) }; // 75918456
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_DigitalActionHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the current state of the supplied digital game action.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to query.\n\x09* @param\x09""DigitalActionHandle\x09\x09The Handle of the digital action you want to query.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns the current state of the supplied digital game action.\n\n@param        Handle                                  The Handle of the controller you want to query.\n@param        DigitalActionHandle             The Handle of the digital action you want to query." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetDigitalActionData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::Input_eventGetDigitalActionData_Parms), Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetDigitalActionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics
	{
		struct Input_eventGetDigitalActionHandle_Parms
		{
			FString PszActionName;
			FInputDigitalActionHandle ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PszActionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_PszActionName = { "PszActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetDigitalActionHandle_Parms, PszActionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetDigitalActionHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(nullptr, 0) }; // 1800435335
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_PszActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the Handle of the specified digital action.\n\x09*\n\x09* @param\x09PszActionName\x09The string identifier of the digital action defined in the game's VDF file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get the Handle of the specified digital action.\n\n@param        PszActionName   The string identifier of the digital action defined in the game's VDF file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetDigitalActionHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::Input_eventGetDigitalActionHandle_Parms), Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetDigitalActionHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics
	{
		struct Input_eventGetDigitalActionOrigins_Parms
		{
			FInputHandle Handle;
			FInputActionSetHandle ActionSetHandle;
			FInputDigitalActionHandle DigitalActionHandle;
			TArray<TEnumAsByte<ESteamCoreInputActionOrigin> > OriginsOut;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DigitalActionHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OriginsOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginsOut;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) }; // 139621278
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_DigitalActionHandle = { "DigitalActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, DigitalActionHandle), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(nullptr, 0) }; // 1800435335
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut_Inner = { "OriginsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) }; // 4220459220
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut = { "OriginsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, OriginsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4220459220
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_ActionSetHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_DigitalActionHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the Origin(s) for a digital action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to query.\n\x09* @param\x09""ActionSetHandle\x09\x09\x09The Handle of the action set you want to query.\n\x09* @param\x09""DigitalActionHandle\x09\x09The Handle of the digital aciton you want to query.\n\x09* @param\x09OriginsOut\x09\x09\x09\x09""A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get the Origin(s) for a digital action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.\n\n@param        Handle                                  The Handle of the controller you want to query.\n@param        ActionSetHandle                 The Handle of the action set you want to query.\n@param        DigitalActionHandle             The Handle of the digital aciton you want to query.\n@param        OriginsOut                              A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetDigitalActionOrigins", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::Input_eventGetDigitalActionOrigins_Parms), Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetDigitalActionOrigins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics
	{
		struct Input_eventGetGamepadIndexForController_Parms
		{
			FInputHandle Handle;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetGamepadIndexForController_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetGamepadIndexForController_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the associated gamepad index for the specified controller, if emulating a gamepad.\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller you want to get a gamepad index for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns the associated gamepad index for the specified controller, if emulating a gamepad.\n\n@param        Handle          The Handle of the controller you want to get a gamepad index for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetGamepadIndexForController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::Input_eventGetGamepadIndexForController_Parms), Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetGamepadIndexForController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics
	{
		struct Input_eventGetGlyphForActionOrigin_Parms
		{
			TEnumAsByte<ESteamCoreInputActionOrigin> Origin;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetGlyphForActionOrigin_Parms, Origin), Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) }; // 4220459220
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetGlyphForActionOrigin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get a local path to art for on-screen glyph for a particular Origin.\n\x09*\n\x09* @param\x09Origin\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get a local path to art for on-screen glyph for a particular Origin.\n\n@param        Origin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetGlyphForActionOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::Input_eventGetGlyphForActionOrigin_Parms), Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetGlyphForActionOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics
	{
		struct Input_eventGetGlyphForXboxOrigin_Parms
		{
			ESteamCoreXboxOrigin Origin;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetGlyphForXboxOrigin_Parms, Origin), Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin, METADATA_PARAMS(nullptr, 0) }; // 1415061896
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetGlyphForXboxOrigin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\x09*\n\x09* @param\x09Origin\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\n@param        Origin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetGlyphForXboxOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::Input_eventGetGlyphForXboxOrigin_Parms), Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics
	{
		struct Input_eventGetInputTypeForHandle_Parms
		{
			FInputHandle Handle;
			ESteamCoreInputType ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetInputTypeForHandle_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetInputTypeForHandle_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamCoreInputType, METADATA_PARAMS(nullptr, 0) }; // 4036563856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the input type (device model) for the specified controller. This tells you if a given controller is a Steam controller, XBox 360 controller, PS4 controller, etc. For more details, see Steam's Supported Controller Database.\n\x09*\n\x09* @param\x09Handle\x09The Handle of the controller whose input type (device model) you want to query\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns the input type (device model) for the specified controller. This tells you if a given controller is a Steam controller, XBox 360 controller, PS4 controller, etc. For more details, see Steam's Supported Controller Database.\n\n@param        Handle  The Handle of the controller whose input type (device model) you want to query" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetInputTypeForHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::Input_eventGetInputTypeForHandle_Parms), Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetInputTypeForHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetMotionData_Statics
	{
		struct Input_eventGetMotionData_Parms
		{
			FInputHandle Handle;
			FInputMotionData ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetMotionData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetMotionData_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetMotionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetMotionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputMotionData, METADATA_PARAMS(nullptr, 0) }; // 2132966100
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetMotionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetMotionData_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetMotionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetMotionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns raw motion data for the specified controller.\n\x09*\n\x09* @param\x09Handle\x09The Handle of the controller you want to get motion data for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns raw motion data for the specified controller.\n\n@param        Handle  The Handle of the controller you want to get motion data for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetMotionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetMotionData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetMotionData_Statics::Input_eventGetMotionData_Parms), Z_Construct_UFunction_UInput_GetMotionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetMotionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetMotionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetMotionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetMotionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetMotionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics
	{
		struct Input_eventGetRemotePlaySessionID_Parms
		{
			FInputHandle Handle;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetRemotePlaySessionID_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetRemotePlaySessionID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions\n\x09*\n\x09* @param\x09Handle The Handle of the controller to query.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions\n\n@param        Handle The Handle of the controller to query." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetRemotePlaySessionID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::Input_eventGetRemotePlaySessionID_Parms), Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetRemotePlaySessionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics
	{
		struct Input_eventGetStringForActionOrigin_Parms
		{
			TEnumAsByte<ESteamCoreInputActionOrigin> Origin;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetStringForActionOrigin_Parms, Origin), Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) }; // 4220459220
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetStringForActionOrigin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns a localized string (from Steam's language setting) for the specified Origin.\n\x09*\n\x09* @param\x09Origin\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns a localized string (from Steam's language setting) for the specified Origin.\n\n@param        Origin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetStringForActionOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::Input_eventGetStringForActionOrigin_Parms), Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetStringForActionOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics
	{
		struct Input_eventGetStringForXboxOrigin_Parms
		{
			ESteamCoreXboxOrigin Origin;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetStringForXboxOrigin_Parms, Origin), Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin, METADATA_PARAMS(nullptr, 0) }; // 1415061896
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventGetStringForXboxOrigin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_Origin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\x09*\n\x09* @param\x09Origin\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\n@param        Origin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetStringForXboxOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::Input_eventGetStringForXboxOrigin_Parms), Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetStringForXboxOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_Init_Statics
	{
		struct Input_eventInit_Parms
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
	void Z_Construct_UFunction_UInput_Init_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Input_eventInit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInput_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Input_eventInit_Parms), &Z_Construct_UFunction_UInput_Init_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_Init_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "// Init and Shutdown must be called when starting/ending use of this interface\n" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Init and Shutdown must be called when starting/ending use of this interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "Init", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_Init_Statics::Input_eventInit_Parms), Z_Construct_UFunction_UInput_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_SetLEDColor_Statics
	{
		struct Input_eventSetLEDColor_Parms
		{
			FInputHandle Handle;
			uint8 ColorR;
			uint8 ColorG;
			uint8 ColorB;
			ESteamCoreInputLEDFlag Flags;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorR;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorG;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorB;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorR = { "ColorR", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, ColorR), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorG = { "ColorG", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, ColorG), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorB = { "ColorB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, ColorB), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, Flags), Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag, METADATA_PARAMS(nullptr, 0) }; // 4087012459
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_SetLEDColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Flags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Flags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_SetLEDColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Set the controller LED color on supported controllers.\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller to affect.\n\x09* @param\x09""ColorR\x09\x09The red component of the color to set (0-255).\n\x09* @param\x09""ColorG\x09\x09The green component of the color to set (0-255).\n\x09* @param\x09""ColorB\x09\x09The blue component of the color to set (0-255).\n\x09* @param\x09""Flags\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Set the controller LED color on supported controllers.\n\n@param        Handle          The Handle of the controller to affect.\n@param        ColorR          The red component of the color to set (0-255).\n@param        ColorG          The green component of the color to set (0-255).\n@param        ColorB          The blue component of the color to set (0-255).\n@param        Flags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "SetLEDColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_SetLEDColor_Statics::Input_eventSetLEDColor_Parms), Z_Construct_UFunction_UInput_SetLEDColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_SetLEDColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_SetLEDColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_SetLEDColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_SetLEDColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_SetLEDColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_ShowBindingPanel_Statics
	{
		struct Input_eventShowBindingPanel_Parms
		{
			FInputHandle Handle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventShowBindingPanel_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	void Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Input_eventShowBindingPanel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Input_eventShowBindingPanel_Parms), &Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Invokes the Steam overlay and brings up the binding screen.\n\x09*\n\x09* @param\x09Handle\x09The Handle of the controller you want to bring up the binding screen for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Invokes the Steam overlay and brings up the binding screen.\n\n@param        Handle  The Handle of the controller you want to bring up the binding screen for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "ShowBindingPanel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::Input_eventShowBindingPanel_Parms), Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_ShowBindingPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_Shutdown_Statics
	{
		struct Input_eventShutdown_Parms
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
	void Z_Construct_UFunction_UInput_Shutdown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Input_eventShutdown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInput_Shutdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Input_eventShutdown_Parms), &Z_Construct_UFunction_UInput_Shutdown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_Shutdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_Shutdown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "// Init and Shutdown must be called when starting/ending use of this interface\n" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Init and Shutdown must be called when starting/ending use of this interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "Shutdown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_Shutdown_Statics::Input_eventShutdown_Parms), Z_Construct_UFunction_UInput_Shutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_Shutdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_Shutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics
	{
		struct Input_eventStopAnalogActionMomentum_Parms
		{
			FInputHandle Handle;
			FInputAnalogActionHandle EAction;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventStopAnalogActionMomentum_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::NewProp_EAction = { "EAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventStopAnalogActionMomentum_Parms, EAction), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(nullptr, 0) }; // 1984869241
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::NewProp_EAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Stops the momentum of an analog action (where applicable, ie a touchpad w/ virtual trackball settings).\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller to affect.\n\x09* @param\x09""EAction\x09\x09The analog action to stop momentum for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Stops the momentum of an analog action (where applicable, ie a touchpad w/ virtual trackball settings).\n\n@param        Handle          The Handle of the controller to affect.\n@param        EAction         The analog action to stop momentum for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "StopAnalogActionMomentum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::Input_eventStopAnalogActionMomentum_Parms), Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_StopAnalogActionMomentum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics
	{
		struct Input_eventTranslateActionOrigin_Parms
		{
			ESteamCoreInputType DestinationInputType;
			TEnumAsByte<ESteamCoreInputActionOrigin> SourceOrigin;
			TEnumAsByte<ESteamCoreInputActionOrigin> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DestinationInputType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DestinationInputType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceOrigin;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType = { "DestinationInputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventTranslateActionOrigin_Parms, DestinationInputType), Z_Construct_UEnum_SteamCore_ESteamCoreInputType, METADATA_PARAMS(nullptr, 0) }; // 4036563856
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_SourceOrigin = { "SourceOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventTranslateActionOrigin_Parms, SourceOrigin), Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) }; // 4220459220
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventTranslateActionOrigin_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) }; // 4220459220
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_SourceOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Convert an Origin to another controller type - for inputs not present on the other controller type this will return k_EInputActionOrigin_None\n\x09*\n\x09* When a new input type is added you will be able to pass in k_ESteamInputType_Unknown and the closest Origin that your version of the SDK recognized will be returned\n\x09* ex: if a Playstation 5 controller was released this function would return Playstation 4 Origins.\n\x09*\n\x09* @param\x09""DestinationInputType\n\x09* @param\x09SourceOrigin\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Convert an Origin to another controller type - for inputs not present on the other controller type this will return k_EInputActionOrigin_None\n\nWhen a new input type is added you will be able to pass in k_ESteamInputType_Unknown and the closest Origin that your version of the SDK recognized will be returned\nex: if a Playstation 5 controller was released this function would return Playstation 4 Origins.\n\n@param        DestinationInputType\n@param        SourceOrigin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "TranslateActionOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::Input_eventTranslateActionOrigin_Parms), Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_TranslateActionOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics
	{
		struct Input_eventTriggerHapticPulse_Parms
		{
			FInputHandle Handle;
			ESteamCoreControllerPad TargetPad;
			uint8 DurationMicroSec;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetPad_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetPad;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DurationMicroSec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventTriggerHapticPulse_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_TargetPad_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_TargetPad = { "TargetPad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventTriggerHapticPulse_Parms, TargetPad), Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad, METADATA_PARAMS(nullptr, 0) }; // 2527531016
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_DurationMicroSec = { "DurationMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventTriggerHapticPulse_Parms, DurationMicroSec), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_TargetPad_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_TargetPad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_DurationMicroSec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Triggers a (low-level) haptic pulse on supported controllers.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The Handle of the controller to affect.\n\x09* @param\x09TargetPad\x09\x09\x09Which haptic touch pad to affect.\n\x09* @param\x09""DurationMicroSec\x09""Duration of the pulse, in microseconds (1/1,000,000th of a second)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Triggers a (low-level) haptic pulse on supported controllers.\n\n@param        Handle                          The Handle of the controller to affect.\n@param        TargetPad                       Which haptic touch pad to affect.\n@param        DurationMicroSec        Duration of the pulse, in microseconds (1/1,000,000th of a second)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "TriggerHapticPulse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::Input_eventTriggerHapticPulse_Parms), Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_TriggerHapticPulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics
	{
		struct Input_eventTriggerRepeatedHapticPulse_Parms
		{
			FInputHandle Handle;
			ESteamCoreControllerPad TargetPad;
			uint8 DurationMicroSec;
			uint8 OffMicroSec;
			uint8 Repeat;
			uint8 Flags;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetPad_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetPad;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DurationMicroSec;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OffMicroSec;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Repeat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad = { "TargetPad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, TargetPad), Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad, METADATA_PARAMS(nullptr, 0) }; // 2527531016
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_DurationMicroSec = { "DurationMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, DurationMicroSec), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_OffMicroSec = { "OffMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, OffMicroSec), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, Repeat), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, Flags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_DurationMicroSec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_OffMicroSec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Repeat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Flags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Triggers a repeated haptic pulse on supported controllers.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The Handle of the controller to affect.\n\x09* @param\x09TargetPad\x09\x09\x09Which haptic touch pad to affect.\n\x09* @param\x09""DurationMicroSec\x09""Duration of the pulse, in microseconds (1/1,000,000th of a second).\n\x09* @param\x09OffMicroSec\x09\x09\x09""Duration of the pause between pulses, in microseconds.\n\x09* @param\x09Repeat\x09\x09\x09\x09Number of times to repeat the usDurationMicroSec / usOffMicroSec duty cycle.\n\x09* @param\x09""Flags\x09\x09\x09\x09""Currently unused and reserved for future use.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Triggers a repeated haptic pulse on supported controllers.\n\n@param        Handle                          The Handle of the controller to affect.\n@param        TargetPad                       Which haptic touch pad to affect.\n@param        DurationMicroSec        Duration of the pulse, in microseconds (1/1,000,000th of a second).\n@param        OffMicroSec                     Duration of the pause between pulses, in microseconds.\n@param        Repeat                          Number of times to repeat the usDurationMicroSec / usOffMicroSec duty cycle.\n@param        Flags                           Currently unused and reserved for future use." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "TriggerRepeatedHapticPulse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::Input_eventTriggerRepeatedHapticPulse_Parms), Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_TriggerVibration_Statics
	{
		struct Input_eventTriggerVibration_Parms
		{
			FInputHandle Handle;
			uint8 LeftSpeed;
			uint8 RightSpeed;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LeftSpeed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RightSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventTriggerVibration_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) }; // 4189198337
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_LeftSpeed = { "LeftSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventTriggerVibration_Parms, LeftSpeed), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_RightSpeed = { "RightSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Input_eventTriggerVibration_Parms, RightSpeed), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_TriggerVibration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_LeftSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_RightSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_TriggerVibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Trigger a vibration event on supported controllers.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The Handle of the controller to affect.\n\x09* @param\x09LeftSpeed\x09\x09The intensity value for the left rumble motor.\n\x09* @param\x09RightSpeed\x09\x09The intensity value of the right rumble motor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
		{ "ToolTip", "Trigger a vibration event on supported controllers.\n\n@param        Handle                  The Handle of the controller to affect.\n@param        LeftSpeed               The intensity value for the left rumble motor.\n@param        RightSpeed              The intensity value of the right rumble motor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_TriggerVibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "TriggerVibration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInput_TriggerVibration_Statics::Input_eventTriggerVibration_Parms), Z_Construct_UFunction_UInput_TriggerVibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerVibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_TriggerVibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerVibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_TriggerVibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_TriggerVibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInput);
	UClass* Z_Construct_UClass_UInput_NoRegister()
	{
		return UInput::StaticClass();
	}
	struct Z_Construct_UClass_UInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInput_ActivateActionSet, "ActivateActionSet" }, // 1816807372
		{ &Z_Construct_UFunction_UInput_ActivateActionSetLayer, "ActivateActionSetLayer" }, // 4045265639
		{ &Z_Construct_UFunction_UInput_DeactivateActionSetLayer, "DeactivateActionSetLayer" }, // 2030760635
		{ &Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers, "DeactivateAllActionSetLayers" }, // 2335247931
		{ &Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin, "GetActionOriginFromXboxOrigin" }, // 1250316507
		{ &Z_Construct_UFunction_UInput_GetActionSetHandle, "GetActionSetHandle" }, // 2380072587
		{ &Z_Construct_UFunction_UInput_GetActiveActionSetLayers, "GetActiveActionSetLayers" }, // 1636047344
		{ &Z_Construct_UFunction_UInput_GetAnalogActionData, "GetAnalogActionData" }, // 3571309064
		{ &Z_Construct_UFunction_UInput_GetAnalogActionHandle, "GetAnalogActionHandle" }, // 2813255322
		{ &Z_Construct_UFunction_UInput_GetAnalogActionOrigins, "GetAnalogActionOrigins" }, // 2531017450
		{ &Z_Construct_UFunction_UInput_GetConnectedControllers, "GetConnectedControllers" }, // 2680351369
		{ &Z_Construct_UFunction_UInput_GetControllerForGamepadIndex, "GetControllerForGamepadIndex" }, // 3980703761
		{ &Z_Construct_UFunction_UInput_GetCurrentActionSet, "GetCurrentActionSet" }, // 2751520989
		{ &Z_Construct_UFunction_UInput_GetDeviceBindingRevision, "GetDeviceBindingRevision" }, // 2721606609
		{ &Z_Construct_UFunction_UInput_GetDigitalActionData, "GetDigitalActionData" }, // 4087046068
		{ &Z_Construct_UFunction_UInput_GetDigitalActionHandle, "GetDigitalActionHandle" }, // 2119810481
		{ &Z_Construct_UFunction_UInput_GetDigitalActionOrigins, "GetDigitalActionOrigins" }, // 359635207
		{ &Z_Construct_UFunction_UInput_GetGamepadIndexForController, "GetGamepadIndexForController" }, // 1224024331
		{ &Z_Construct_UFunction_UInput_GetGlyphForActionOrigin, "GetGlyphForActionOrigin" }, // 1406139923
		{ &Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin, "GetGlyphForXboxOrigin" }, // 3411187345
		{ &Z_Construct_UFunction_UInput_GetInputTypeForHandle, "GetInputTypeForHandle" }, // 4161383685
		{ &Z_Construct_UFunction_UInput_GetMotionData, "GetMotionData" }, // 889979926
		{ &Z_Construct_UFunction_UInput_GetRemotePlaySessionID, "GetRemotePlaySessionID" }, // 1108336009
		{ &Z_Construct_UFunction_UInput_GetStringForActionOrigin, "GetStringForActionOrigin" }, // 321797077
		{ &Z_Construct_UFunction_UInput_GetStringForXboxOrigin, "GetStringForXboxOrigin" }, // 4248096594
		{ &Z_Construct_UFunction_UInput_Init, "Init" }, // 261314585
		{ &Z_Construct_UFunction_UInput_SetLEDColor, "SetLEDColor" }, // 1911644979
		{ &Z_Construct_UFunction_UInput_ShowBindingPanel, "ShowBindingPanel" }, // 2587731809
		{ &Z_Construct_UFunction_UInput_Shutdown, "Shutdown" }, // 606688944
		{ &Z_Construct_UFunction_UInput_StopAnalogActionMomentum, "StopAnalogActionMomentum" }, // 2098336982
		{ &Z_Construct_UFunction_UInput_TranslateActionOrigin, "TranslateActionOrigin" }, // 999824647
		{ &Z_Construct_UFunction_UInput_TriggerHapticPulse, "TriggerHapticPulse" }, // 1572317289
		{ &Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse, "TriggerRepeatedHapticPulse" }, // 1556480161
		{ &Z_Construct_UFunction_UInput_TriggerVibration, "TriggerVibration" }, // 3345379796
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamInput/SteamInput.h" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInput_Statics::ClassParams = {
		&UInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInput()
	{
		if (!Z_Registration_Info_UClass_UInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInput.OuterSingleton, Z_Construct_UClass_UInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInput.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<UInput>()
	{
		return UInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInput);
	UInput::~UInput() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInput, UInput::StaticClass, TEXT("UInput"), &Z_Registration_Info_UClass_UInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInput), 1262913844U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInput_h_750936255(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
