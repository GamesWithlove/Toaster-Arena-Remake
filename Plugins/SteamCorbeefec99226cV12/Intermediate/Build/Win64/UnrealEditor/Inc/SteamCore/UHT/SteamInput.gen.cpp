// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamInput/SteamInput.h"
#include "Engine/GameInstance.h"
#include "SteamInput/SteamInputTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamInput() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UClass* Z_Construct_UClass_UInput();
STEAMCORE_API UClass* Z_Construct_UClass_UInput_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad();
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
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInput Function ActivateActionSet ****************************************
struct Z_Construct_UFunction_UInput_ActivateActionSet_Statics
{
	struct Input_eventActivateActionSet_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ActionSetHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Reconfigure the controller to use the specified action set (ie \"Menu\", \"Walk\", or \"Drive\").\n\x09*\n\x09* This is cheap, and can be safely called repeatedly. It's often easier to repeatedly call it in your state loops, instead of trying to place it in all of your state transitions.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The Handle of the controller you want to activate an action set for.\n\x09* @param\x09""ActionSetHandle\x09\x09The Handle of the action set you want to activate.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reconfigure the controller to use the specified action set (ie \"Menu\", \"Walk\", or \"Drive\").\n\nThis is cheap, and can be safely called repeatedly. It's often easier to repeatedly call it in your state loops, instead of trying to place it in all of your state transitions.\n\n@param        Handle                          The Handle of the controller you want to activate an action set for.\n@param        ActionSetHandle         The Handle of the action set you want to activate." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ActivateActionSet constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActivateActionSet constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActivateActionSet Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ActivateActionSet_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventActivateActionSet_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ActivateActionSet_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventActivateActionSet_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 128671329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_ActivateActionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ActivateActionSet_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ActivateActionSet_Statics::NewProp_ActionSetHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSet_Statics::PropPointers) < 2048);
// ********** End Function ActivateActionSet Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_ActivateActionSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "ActivateActionSet", 	Z_Construct_UFunction_UInput_ActivateActionSet_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSet_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_ActivateActionSet_Statics::Input_eventActivateActionSet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_ActivateActionSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_ActivateActionSet_Statics::Input_eventActivateActionSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_ActivateActionSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_ActivateActionSet_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UInput Function ActivateActionSet ******************************************

// ********** Begin Class UInput Function ActivateActionSetLayer ***********************************
struct Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics
{
	struct Input_eventActivateActionSetLayer_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ActionSetLayerHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Reconfigure the controller to use the specified action set layer.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to activate an action set layer for.\n\x09* @param\x09""ActionSetLayerHandle\x09The Handle of the action set layer you want to activate.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reconfigure the controller to use the specified action set layer.\n\n@param        Handle                                  The Handle of the controller you want to activate an action set layer for.\n@param        ActionSetLayerHandle    The Handle of the action set layer you want to activate." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ActivateActionSetLayer constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetLayerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActivateActionSetLayer constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActivateActionSetLayer Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventActivateActionSetLayer_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle = { "ActionSetLayerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventActivateActionSetLayer_Parms, ActionSetLayerHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 128671329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::PropPointers) < 2048);
// ********** End Function ActivateActionSetLayer Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "ActivateActionSetLayer", 	Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::Input_eventActivateActionSetLayer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::Input_eventActivateActionSetLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_ActivateActionSetLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UInput Function ActivateActionSetLayer *************************************

// ********** Begin Class UInput Function DeactivateActionSetLayer *********************************
struct Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics
{
	struct Input_eventDeactivateActionSetLayer_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ActionSetLayerHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Reconfigure the controller to stop using the specified action set layer.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to deactivate an action set layer for.\n\x09* @param\x09""ActionSetLayerHandle\x09The Handle of the action set layer you want to deactivate.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reconfigure the controller to stop using the specified action set layer.\n\n@param        Handle                                  The Handle of the controller you want to deactivate an action set layer for.\n@param        ActionSetLayerHandle    The Handle of the action set layer you want to deactivate." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DeactivateActionSetLayer constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetLayerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeactivateActionSetLayer constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeactivateActionSetLayer Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventDeactivateActionSetLayer_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle = { "ActionSetLayerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventDeactivateActionSetLayer_Parms, ActionSetLayerHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 128671329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::PropPointers) < 2048);
// ********** End Function DeactivateActionSetLayer Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "DeactivateActionSetLayer", 	Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::Input_eventDeactivateActionSetLayer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::Input_eventDeactivateActionSetLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_DeactivateActionSetLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UInput Function DeactivateActionSetLayer ***********************************

// ********** Begin Class UInput Function DeactivateAllActionSetLayers *****************************
struct Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics
{
	struct Input_eventDeactivateAllActionSetLayers_Parms
	{
		FInputHandle Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Reconfigure the controller to stop using all action set layers.\n\x09*\n\x09* @param\x09Handle\x09The Handle of the controller you want to deactivate all action set layers for.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reconfigure the controller to stop using all action set layers.\n\n@param        Handle  The Handle of the controller you want to deactivate all action set layers for." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DeactivateAllActionSetLayers constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeactivateAllActionSetLayers constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeactivateAllActionSetLayers Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventDeactivateAllActionSetLayers_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::PropPointers) < 2048);
// ********** End Function DeactivateAllActionSetLayers Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "DeactivateAllActionSetLayers", 	Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::Input_eventDeactivateAllActionSetLayers_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::Input_eventDeactivateAllActionSetLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execDeactivateAllActionSetLayers)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivateAllActionSetLayers(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UInput Function DeactivateAllActionSetLayers *******************************

// ********** Begin Class UInput Function GetActionOriginFromXboxOrigin ****************************
struct Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics
{
	struct Input_eventGetActionOriginFromXboxOrigin_Parms
	{
		FInputHandle Handle;
		ESteamCoreXboxOrigin Origin;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get an action Origin that you can use in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller to affect. You can use GetControllerForGamepadIndex to get this Handle\n\x09* @param\x09Origin\x09\x09This is the button you want to get the image for ex: k_EXboxOrigin_A\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get an action Origin that you can use in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin\n\n@param        Handle          The Handle of the controller to affect. You can use GetControllerForGamepadIndex to get this Handle\n@param        Origin          This is the button you want to get the image for ex: k_EXboxOrigin_A" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetActionOriginFromXboxOrigin constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActionOriginFromXboxOrigin constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActionOriginFromXboxOrigin Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetActionOriginFromXboxOrigin_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetActionOriginFromXboxOrigin_Parms, Origin), Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin, METADATA_PARAMS(0, nullptr) }; // 3558287588
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetActionOriginFromXboxOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::PropPointers) < 2048);
// ********** End Function GetActionOriginFromXboxOrigin Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetActionOriginFromXboxOrigin", 	Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::Input_eventGetActionOriginFromXboxOrigin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::Input_eventGetActionOriginFromXboxOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetActionOriginFromXboxOrigin)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_ENUM(ESteamCoreXboxOrigin,Z_Param_Origin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetActionOriginFromXboxOrigin(Z_Param_Handle,ESteamCoreXboxOrigin(Z_Param_Origin));
	P_NATIVE_END;
}
// ********** End Class UInput Function GetActionOriginFromXboxOrigin ******************************

// ********** Begin Class UInput Function GetActionSetHandle ***************************************
struct Z_Construct_UFunction_UInput_GetActionSetHandle_Statics
{
	struct Input_eventGetActionSetHandle_Parms
	{
		FString ActionSetName;
		FInputActionSetHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Lookup the Handle for an Action Set. Best to do this once on startup, and store the Handles for all future API calls.\n\x09*\n\x09* @param\x09""ActionSetName\x09The string identifier of an action set defined in the game's VDF file.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lookup the Handle for an Action Set. Best to do this once on startup, and store the Handles for all future API calls.\n\n@param        ActionSetName   The string identifier of an action set defined in the game's VDF file." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetActionSetHandle constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActionSetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActionSetHandle constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActionSetHandle Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_ActionSetName = { "ActionSetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetActionSetHandle_Parms, ActionSetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetActionSetHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 128671329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_ActionSetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::PropPointers) < 2048);
// ********** End Function GetActionSetHandle Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetActionSetHandle", 	Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::Input_eventGetActionSetHandle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::Input_eventGetActionSetHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetActionSetHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetActionSetHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ActionSetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputActionSetHandle*)Z_Param__Result=P_THIS->GetActionSetHandle(Z_Param_ActionSetName);
	P_NATIVE_END;
}
// ********** End Class UInput Function GetActionSetHandle *****************************************

// ********** Begin Class UInput Function GetActiveActionSetLayers *********************************
struct Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics
{
	struct Input_eventGetActiveActionSetLayers_Parms
	{
		FInputHandle Handle;
		TArray<FInputActionSetHandle> Data;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Fill an array with all of the currently active action set layers for a specified controller Handle.\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller you want to deactivate all action set layers for.\n\x09* @param\x09""Data\x09\x09This must point to a STEAM_INPUT_MAX_COUNT sized array of InputHandle_t.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fill an array with all of the currently active action set layers for a specified controller Handle.\n\n@param        Handle          The Handle of the controller you want to deactivate all action set layers for.\n@param        Data            This must point to a STEAM_INPUT_MAX_COUNT sized array of InputHandle_t." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveActionSetLayers constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveActionSetLayers constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveActionSetLayers Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetActiveActionSetLayers_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 128671329
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetActiveActionSetLayers_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 128671329
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetActiveActionSetLayers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::PropPointers) < 2048);
// ********** End Function GetActiveActionSetLayers Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetActiveActionSetLayers", 	Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::Input_eventGetActiveActionSetLayers_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::Input_eventGetActiveActionSetLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetActiveActionSetLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UInput Function GetActiveActionSetLayers ***********************************

// ********** Begin Class UInput Function GetAnalogActionData **************************************
struct Z_Construct_UFunction_UInput_GetAnalogActionData_Statics
{
	struct Input_eventGetAnalogActionData_Parms
	{
		FInputHandle Handle;
		FInputAnalogActionHandle AnalogActionHandle;
		FInputAnalogActionData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the current state of the supplied analog game action.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to query.\n\x09* @param\x09""AnalogActionHandle\x09\x09The Handle of the analog action you want to query.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current state of the supplied analog game action.\n\n@param        Handle                                  The Handle of the controller you want to query.\n@param        AnalogActionHandle              The Handle of the analog action you want to query." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAnalogActionData constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnalogActionHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAnalogActionData constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAnalogActionData Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetAnalogActionData_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_AnalogActionHandle = { "AnalogActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetAnalogActionData_Parms, AnalogActionHandle), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 3315214180
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetAnalogActionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputAnalogActionData, METADATA_PARAMS(0, nullptr) }; // 816354917
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_AnalogActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::PropPointers) < 2048);
// ********** End Function GetAnalogActionData Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetAnalogActionData", 	Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::Input_eventGetAnalogActionData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::Input_eventGetAnalogActionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetAnalogActionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UInput Function GetAnalogActionData ****************************************

// ********** Begin Class UInput Function GetAnalogActionHandle ************************************
struct Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics
{
	struct Input_eventGetAnalogActionHandle_Parms
	{
		FString PszActionName;
		FInputAnalogActionHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get the Handle of the specified Analog action.\n\x09*\n\x09* @param\x09PszActionName\x09\x09The string identifier of the analog action defined in the game's VDF file.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Handle of the specified Analog action.\n\n@param        PszActionName           The string identifier of the analog action defined in the game's VDF file." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAnalogActionHandle constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PszActionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAnalogActionHandle constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAnalogActionHandle Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_PszActionName = { "PszActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetAnalogActionHandle_Parms, PszActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetAnalogActionHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 3315214180
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_PszActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::PropPointers) < 2048);
// ********** End Function GetAnalogActionHandle Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetAnalogActionHandle", 	Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::Input_eventGetAnalogActionHandle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::Input_eventGetAnalogActionHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetAnalogActionHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetAnalogActionHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PszActionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputAnalogActionHandle*)Z_Param__Result=P_THIS->GetAnalogActionHandle(Z_Param_PszActionName);
	P_NATIVE_END;
}
// ********** End Class UInput Function GetAnalogActionHandle **************************************

// ********** Begin Class UInput Function GetAnalogActionOrigins ***********************************
struct Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics
{
	struct Input_eventGetAnalogActionOrigins_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ActionSetHandle;
		FInputAnalogActionHandle AnalogActionHandle;
		TArray<int32> OriginsOut;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get the Origin(s) for an analog action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to query.\n\x09* @param\x09""ActionSetHandle\x09\x09\x09The Handle of the action set you want to query.\n\x09* @param\x09""AnalogActionHandle\x09\x09The Handle of the analog action you want to query.\n\x09* @param\x09OriginsOut\x09\x09\x09\x09""A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Origin(s) for an analog action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.\n\n@param        Handle                                  The Handle of the controller you want to query.\n@param        ActionSetHandle                 The Handle of the action set you want to query.\n@param        AnalogActionHandle              The Handle of the analog action you want to query.\n@param        OriginsOut                              A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAnalogActionOrigins constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnalogActionHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OriginsOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginsOut;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAnalogActionOrigins constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAnalogActionOrigins Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 128671329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_AnalogActionHandle = { "AnalogActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, AnalogActionHandle), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 3315214180
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut_Inner = { "OriginsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut = { "OriginsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, OriginsOut), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_ActionSetHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_AnalogActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_OriginsOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::PropPointers) < 2048);
// ********** End Function GetAnalogActionOrigins Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetAnalogActionOrigins", 	Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::Input_eventGetAnalogActionOrigins_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::Input_eventGetAnalogActionOrigins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetAnalogActionOrigins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetAnalogActionOrigins)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
	P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_AnalogActionHandle);
	P_GET_TARRAY_REF(int32,Z_Param_Out_OriginsOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAnalogActionOrigins(Z_Param_Handle,Z_Param_ActionSetHandle,Z_Param_AnalogActionHandle,Z_Param_Out_OriginsOut);
	P_NATIVE_END;
}
// ********** End Class UInput Function GetAnalogActionOrigins *************************************

// ********** Begin Class UInput Function GetConnectedControllers **********************************
struct Z_Construct_UFunction_UInput_GetConnectedControllers_Statics
{
	struct Input_eventGetConnectedControllers_Parms
	{
		TArray<FInputHandle> OutHandles;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Enumerates currently connected controllers by filling OutHandles with controller handles.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerates currently connected controllers by filling OutHandles with controller handles." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetConnectedControllers constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHandles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetConnectedControllers constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetConnectedControllers Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::NewProp_OutHandles_Inner = { "OutHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::NewProp_OutHandles = { "OutHandles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetConnectedControllers_Parms, OutHandles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetConnectedControllers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::NewProp_OutHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::NewProp_OutHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::PropPointers) < 2048);
// ********** End Function GetConnectedControllers Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetConnectedControllers", 	Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::Input_eventGetConnectedControllers_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::Input_eventGetConnectedControllers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetConnectedControllers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetConnectedControllers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetConnectedControllers)
{
	P_GET_TARRAY_REF(FInputHandle,Z_Param_Out_OutHandles);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetConnectedControllers(Z_Param_Out_OutHandles);
	P_NATIVE_END;
}
// ********** End Class UInput Function GetConnectedControllers ************************************

// ********** Begin Class UInput Function GetControllerForGamepadIndex *****************************
struct Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics
{
	struct Input_eventGetControllerForGamepadIndex_Parms
	{
		int32 Index;
		FInputHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the associated controller Handle for the specified emulated gamepad. Can be used with GetInputTypeForHandle to determine the controller type of a controller using Steam Input Gamepad Emulation.\n\x09*\n\x09* @param\x09Index\x09The index of the emulated gamepad you want to get a controller Handle for.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the associated controller Handle for the specified emulated gamepad. Can be used with GetInputTypeForHandle to determine the controller type of a controller using Steam Input Gamepad Emulation.\n\n@param        Index   The index of the emulated gamepad you want to get a controller Handle for." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetControllerForGamepadIndex constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetControllerForGamepadIndex constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetControllerForGamepadIndex Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetControllerForGamepadIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetControllerForGamepadIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::PropPointers) < 2048);
// ********** End Function GetControllerForGamepadIndex Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetControllerForGamepadIndex", 	Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::Input_eventGetControllerForGamepadIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::Input_eventGetControllerForGamepadIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetControllerForGamepadIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetControllerForGamepadIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputHandle*)Z_Param__Result=P_THIS->GetControllerForGamepadIndex(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UInput Function GetControllerForGamepadIndex *******************************

// ********** Begin Class UInput Function GetCurrentActionSet **************************************
struct Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics
{
	struct Input_eventGetCurrentActionSet_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get the currently active action set for the specified controller.\n\x09*\n\x09* @param\x09Handle\x09The Handle of the controller you want to query.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the currently active action set for the specified controller.\n\n@param        Handle  The Handle of the controller you want to query." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentActionSet constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentActionSet constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentActionSet Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetCurrentActionSet_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetCurrentActionSet_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 128671329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentActionSet Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetCurrentActionSet", 	Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::Input_eventGetCurrentActionSet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::Input_eventGetCurrentActionSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetCurrentActionSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetCurrentActionSet)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputActionSetHandle*)Z_Param__Result=P_THIS->GetCurrentActionSet(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UInput Function GetCurrentActionSet ****************************************

// ********** Begin Class UInput Function GetDeviceBindingRevision *********************************
struct Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics
{
	struct Input_eventGetDeviceBindingRevision_Parms
	{
		FInputHandle Handle;
		int32 Major;
		int32 Minor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get's the major and minor device binding revisions for Steam Input API configurations. Minor revisions are for small changes such as adding a new option action or updating localization in the configuration. When updating a Minor revision only one new configuration needs to be update with the \"Use Action Block\" flag set. Major revisions are to be used when changing the number of action sets or otherwise reworking configurations to the degree that older configurations are no longer usable. When a user's binding disagree's with the major revision of the current official configuration Steam will forcibly update the user to the new configuration. New configurations will need to be made for every controller when updating the Major revision.\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller to query.\n\x09* @param\x09Major\x09\x09Pointer to int that Major binding revision will be populated into\n\x09* @param\x09Minor\x09\x09Pointer to int that Minor binding revision will be populated into\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get's the major and minor device binding revisions for Steam Input API configurations. Minor revisions are for small changes such as adding a new option action or updating localization in the configuration. When updating a Minor revision only one new configuration needs to be update with the \"Use Action Block\" flag set. Major revisions are to be used when changing the number of action sets or otherwise reworking configurations to the degree that older configurations are no longer usable. When a user's binding disagree's with the major revision of the current official configuration Steam will forcibly update the user to the new configuration. New configurations will need to be made for every controller when updating the Major revision.\n\n@param        Handle          The Handle of the controller to query.\n@param        Major           Pointer to int that Major binding revision will be populated into\n@param        Minor           Pointer to int that Minor binding revision will be populated into" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetDeviceBindingRevision constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Major;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Minor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDeviceBindingRevision constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDeviceBindingRevision Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetDeviceBindingRevision_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Major = { "Major", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetDeviceBindingRevision_Parms, Major), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Minor = { "Minor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetDeviceBindingRevision_Parms, Minor), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Input_eventGetDeviceBindingRevision_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Input_eventGetDeviceBindingRevision_Parms), &Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Major,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_Minor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::PropPointers) < 2048);
// ********** End Function GetDeviceBindingRevision Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetDeviceBindingRevision", 	Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::Input_eventGetDeviceBindingRevision_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::Input_eventGetDeviceBindingRevision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetDeviceBindingRevision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UInput Function GetDeviceBindingRevision ***********************************

// ********** Begin Class UInput Function GetDigitalActionData *************************************
struct Z_Construct_UFunction_UInput_GetDigitalActionData_Statics
{
	struct Input_eventGetDigitalActionData_Parms
	{
		FInputHandle Handle;
		FInputDigitalActionHandle DigitalActionHandle;
		FInputDigitalActionData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the current state of the supplied digital game action.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to query.\n\x09* @param\x09""DigitalActionHandle\x09\x09The Handle of the digital action you want to query.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current state of the supplied digital game action.\n\n@param        Handle                                  The Handle of the controller you want to query.\n@param        DigitalActionHandle             The Handle of the digital action you want to query." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetDigitalActionData constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DigitalActionHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDigitalActionData constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDigitalActionData Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetDigitalActionData_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_DigitalActionHandle = { "DigitalActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetDigitalActionData_Parms, DigitalActionHandle), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(0, nullptr) }; // 3334905936
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetDigitalActionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDigitalActionData, METADATA_PARAMS(0, nullptr) }; // 1924596269
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_DigitalActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::PropPointers) < 2048);
// ********** End Function GetDigitalActionData Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetDigitalActionData", 	Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::Input_eventGetDigitalActionData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::Input_eventGetDigitalActionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetDigitalActionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UInput Function GetDigitalActionData ***************************************

// ********** Begin Class UInput Function GetDigitalActionHandle ***********************************
struct Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics
{
	struct Input_eventGetDigitalActionHandle_Parms
	{
		FString PszActionName;
		FInputDigitalActionHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get the Handle of the specified digital action.\n\x09*\n\x09* @param\x09PszActionName\x09The string identifier of the digital action defined in the game's VDF file.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Handle of the specified digital action.\n\n@param        PszActionName   The string identifier of the digital action defined in the game's VDF file." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetDigitalActionHandle constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PszActionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDigitalActionHandle constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDigitalActionHandle Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_PszActionName = { "PszActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetDigitalActionHandle_Parms, PszActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetDigitalActionHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(0, nullptr) }; // 3334905936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_PszActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::PropPointers) < 2048);
// ********** End Function GetDigitalActionHandle Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetDigitalActionHandle", 	Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::Input_eventGetDigitalActionHandle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::Input_eventGetDigitalActionHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetDigitalActionHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetDigitalActionHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PszActionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputDigitalActionHandle*)Z_Param__Result=P_THIS->GetDigitalActionHandle(Z_Param_PszActionName);
	P_NATIVE_END;
}
// ********** End Class UInput Function GetDigitalActionHandle *************************************

// ********** Begin Class UInput Function GetDigitalActionOrigins **********************************
struct Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics
{
	struct Input_eventGetDigitalActionOrigins_Parms
	{
		FInputHandle Handle;
		FInputActionSetHandle ActionSetHandle;
		FInputDigitalActionHandle DigitalActionHandle;
		TArray<int32> OriginsOut;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get the Origin(s) for a digital action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09\x09The Handle of the controller you want to query.\n\x09* @param\x09""ActionSetHandle\x09\x09\x09The Handle of the action set you want to query.\n\x09* @param\x09""DigitalActionHandle\x09\x09The Handle of the digital aciton you want to query.\n\x09* @param\x09OriginsOut\x09\x09\x09\x09""A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Origin(s) for a digital action within an action set by filling OriginsOut with EInputActionOrigin Handles. Use this to display the appropriate on-screen prompt for the action.\n\n@param        Handle                                  The Handle of the controller you want to query.\n@param        ActionSetHandle                 The Handle of the action set you want to query.\n@param        DigitalActionHandle             The Handle of the digital aciton you want to query.\n@param        OriginsOut                              A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin Handles." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetDigitalActionOrigins constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DigitalActionHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OriginsOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginsOut;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDigitalActionOrigins constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDigitalActionOrigins Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 128671329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_DigitalActionHandle = { "DigitalActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, DigitalActionHandle), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(0, nullptr) }; // 3334905936
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut_Inner = { "OriginsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut = { "OriginsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, OriginsOut), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_ActionSetHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_DigitalActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_OriginsOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::PropPointers) < 2048);
// ********** End Function GetDigitalActionOrigins Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetDigitalActionOrigins", 	Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::Input_eventGetDigitalActionOrigins_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::Input_eventGetDigitalActionOrigins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetDigitalActionOrigins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetDigitalActionOrigins)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_STRUCT(FInputActionSetHandle,Z_Param_ActionSetHandle);
	P_GET_STRUCT(FInputDigitalActionHandle,Z_Param_DigitalActionHandle);
	P_GET_TARRAY_REF(int32,Z_Param_Out_OriginsOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDigitalActionOrigins(Z_Param_Handle,Z_Param_ActionSetHandle,Z_Param_DigitalActionHandle,Z_Param_Out_OriginsOut);
	P_NATIVE_END;
}
// ********** End Class UInput Function GetDigitalActionOrigins ************************************

// ********** Begin Class UInput Function GetGamepadIndexForController *****************************
struct Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics
{
	struct Input_eventGetGamepadIndexForController_Parms
	{
		FInputHandle Handle;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the associated gamepad index for the specified controller, if emulating a gamepad.\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller you want to get a gamepad index for.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the associated gamepad index for the specified controller, if emulating a gamepad.\n\n@param        Handle          The Handle of the controller you want to get a gamepad index for." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetGamepadIndexForController constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGamepadIndexForController constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGamepadIndexForController Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetGamepadIndexForController_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetGamepadIndexForController_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::PropPointers) < 2048);
// ********** End Function GetGamepadIndexForController Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetGamepadIndexForController", 	Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::Input_eventGetGamepadIndexForController_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::Input_eventGetGamepadIndexForController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetGamepadIndexForController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetGamepadIndexForController)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetGamepadIndexForController(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UInput Function GetGamepadIndexForController *******************************

// ********** Begin Class UInput Function GetGlyphForActionOrigin **********************************
struct Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics
{
	struct Input_eventGetGlyphForActionOrigin_Parms
	{
		int32 Origin;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get a local path to art for on-screen glyph for a particular Origin.\n\x09*\n\x09* @param\x09Origin\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a local path to art for on-screen glyph for a particular Origin.\n\n@param        Origin" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetGlyphForActionOrigin constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGlyphForActionOrigin constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGlyphForActionOrigin Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetGlyphForActionOrigin_Parms, Origin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetGlyphForActionOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::PropPointers) < 2048);
// ********** End Function GetGlyphForActionOrigin Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetGlyphForActionOrigin", 	Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::Input_eventGetGlyphForActionOrigin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::Input_eventGetGlyphForActionOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetGlyphForActionOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetGlyphForActionOrigin)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Origin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetGlyphForActionOrigin(Z_Param_Origin);
	P_NATIVE_END;
}
// ********** End Class UInput Function GetGlyphForActionOrigin ************************************

// ********** Begin Class UInput Function GetGlyphForXboxOrigin ************************************
struct Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics
{
	struct Input_eventGetGlyphForXboxOrigin_Parms
	{
		ESteamCoreXboxOrigin Origin;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\x09*\n\x09* @param\x09Origin\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\n@param        Origin" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetGlyphForXboxOrigin constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGlyphForXboxOrigin constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGlyphForXboxOrigin Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetGlyphForXboxOrigin_Parms, Origin), Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin, METADATA_PARAMS(0, nullptr) }; // 3558287588
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetGlyphForXboxOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::PropPointers) < 2048);
// ********** End Function GetGlyphForXboxOrigin Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetGlyphForXboxOrigin", 	Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::Input_eventGetGlyphForXboxOrigin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::Input_eventGetGlyphForXboxOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetGlyphForXboxOrigin)
{
	P_GET_ENUM(ESteamCoreXboxOrigin,Z_Param_Origin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetGlyphForXboxOrigin(ESteamCoreXboxOrigin(Z_Param_Origin));
	P_NATIVE_END;
}
// ********** End Class UInput Function GetGlyphForXboxOrigin **************************************

// ********** Begin Class UInput Function GetInputActionOriginAsInteger ****************************
struct Z_Construct_UFunction_UInput_GetInputActionOriginAsInteger_Statics
{
	struct Input_eventGetInputActionOriginAsInteger_Parms
	{
		FString Value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInputActionOriginAsInteger constinit property declarations *********
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInputActionOriginAsInteger constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInputActionOriginAsInteger Property Definitions ********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetInputActionOriginAsInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetInputActionOriginAsInteger_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetInputActionOriginAsInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetInputActionOriginAsInteger_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetInputActionOriginAsInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputActionOriginAsInteger_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputActionOriginAsInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputActionOriginAsInteger_Statics::PropPointers) < 2048);
// ********** End Function GetInputActionOriginAsInteger Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetInputActionOriginAsInteger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetInputActionOriginAsInteger", 	Z_Construct_UFunction_UInput_GetInputActionOriginAsInteger_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputActionOriginAsInteger_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetInputActionOriginAsInteger_Statics::Input_eventGetInputActionOriginAsInteger_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputActionOriginAsInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetInputActionOriginAsInteger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetInputActionOriginAsInteger_Statics::Input_eventGetInputActionOriginAsInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetInputActionOriginAsInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetInputActionOriginAsInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetInputActionOriginAsInteger)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInputActionOriginAsInteger(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UInput Function GetInputActionOriginAsInteger ******************************

// ********** Begin Class UInput Function GetInputActionOriginAsString *****************************
struct Z_Construct_UFunction_UInput_GetInputActionOriginAsString_Statics
{
	struct Input_eventGetInputActionOriginAsString_Parms
	{
		int32 Id;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInputActionOriginAsString constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInputActionOriginAsString constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInputActionOriginAsString Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetInputActionOriginAsString_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetInputActionOriginAsString_Parms, Id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetInputActionOriginAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetInputActionOriginAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetInputActionOriginAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputActionOriginAsString_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputActionOriginAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputActionOriginAsString_Statics::PropPointers) < 2048);
// ********** End Function GetInputActionOriginAsString Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetInputActionOriginAsString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetInputActionOriginAsString", 	Z_Construct_UFunction_UInput_GetInputActionOriginAsString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputActionOriginAsString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetInputActionOriginAsString_Statics::Input_eventGetInputActionOriginAsString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputActionOriginAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetInputActionOriginAsString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetInputActionOriginAsString_Statics::Input_eventGetInputActionOriginAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetInputActionOriginAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetInputActionOriginAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetInputActionOriginAsString)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetInputActionOriginAsString(Z_Param_Id);
	P_NATIVE_END;
}
// ********** End Class UInput Function GetInputActionOriginAsString *******************************

// ********** Begin Class UInput Function GetInputActionOrigins ************************************
struct Z_Construct_UFunction_UInput_GetInputActionOrigins_Statics
{
	struct Input_eventGetInputActionOrigins_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInputActionOrigins constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInputActionOrigins constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInputActionOrigins Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetInputActionOrigins_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInput_GetInputActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetInputActionOrigins_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetInputActionOrigins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputActionOrigins_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputActionOrigins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputActionOrigins_Statics::PropPointers) < 2048);
// ********** End Function GetInputActionOrigins Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetInputActionOrigins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetInputActionOrigins", 	Z_Construct_UFunction_UInput_GetInputActionOrigins_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputActionOrigins_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetInputActionOrigins_Statics::Input_eventGetInputActionOrigins_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputActionOrigins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetInputActionOrigins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetInputActionOrigins_Statics::Input_eventGetInputActionOrigins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetInputActionOrigins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetInputActionOrigins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetInputActionOrigins)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetInputActionOrigins();
	P_NATIVE_END;
}
// ********** End Class UInput Function GetInputActionOrigins **************************************

// ********** Begin Class UInput Function GetInputTypeForHandle ************************************
struct Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics
{
	struct Input_eventGetInputTypeForHandle_Parms
	{
		FInputHandle Handle;
		ESteamCoreInputType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the input type (device model) for the specified controller. This tells you if a given controller is a Steam controller, XBox 360 controller, PS4 controller, etc. For more details, see Steam's Supported Controller Database.\n\x09*\n\x09* @param\x09Handle\x09The Handle of the controller whose input type (device model) you want to query\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the input type (device model) for the specified controller. This tells you if a given controller is a Steam controller, XBox 360 controller, PS4 controller, etc. For more details, see Steam's Supported Controller Database.\n\n@param        Handle  The Handle of the controller whose input type (device model) you want to query" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetInputTypeForHandle constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInputTypeForHandle constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInputTypeForHandle Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetInputTypeForHandle_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetInputTypeForHandle_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamCoreInputType, METADATA_PARAMS(0, nullptr) }; // 3136391136
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::PropPointers) < 2048);
// ********** End Function GetInputTypeForHandle Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetInputTypeForHandle", 	Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::Input_eventGetInputTypeForHandle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::Input_eventGetInputTypeForHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetInputTypeForHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetInputTypeForHandle)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamCoreInputType*)Z_Param__Result=P_THIS->GetInputTypeForHandle(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UInput Function GetInputTypeForHandle **************************************

// ********** Begin Class UInput Function GetMotionData ********************************************
struct Z_Construct_UFunction_UInput_GetMotionData_Statics
{
	struct Input_eventGetMotionData_Parms
	{
		FInputHandle Handle;
		FInputMotionData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns raw motion data for the specified controller.\n\x09*\n\x09* @param\x09Handle\x09The Handle of the controller you want to get motion data for.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns raw motion data for the specified controller.\n\n@param        Handle  The Handle of the controller you want to get motion data for." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetMotionData constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMotionData constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMotionData Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetMotionData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetMotionData_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetMotionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetMotionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputMotionData, METADATA_PARAMS(0, nullptr) }; // 1134790042
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetMotionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetMotionData_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetMotionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetMotionData_Statics::PropPointers) < 2048);
// ********** End Function GetMotionData Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetMotionData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetMotionData", 	Z_Construct_UFunction_UInput_GetMotionData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetMotionData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetMotionData_Statics::Input_eventGetMotionData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetMotionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetMotionData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetMotionData_Statics::Input_eventGetMotionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetMotionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetMotionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetMotionData)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputMotionData*)Z_Param__Result=P_THIS->GetMotionData(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UInput Function GetMotionData **********************************************

// ********** Begin Class UInput Function GetRemotePlaySessionID ***********************************
struct Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics
{
	struct Input_eventGetRemotePlaySessionID_Parms
	{
		FInputHandle Handle;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions\n\x09*\n\x09* @param\x09Handle The Handle of the controller to query.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions\n\n@param        Handle The Handle of the controller to query." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRemotePlaySessionID constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRemotePlaySessionID constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRemotePlaySessionID Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetRemotePlaySessionID_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetRemotePlaySessionID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::PropPointers) < 2048);
// ********** End Function GetRemotePlaySessionID Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetRemotePlaySessionID", 	Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::Input_eventGetRemotePlaySessionID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::Input_eventGetRemotePlaySessionID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetRemotePlaySessionID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetRemotePlaySessionID)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRemotePlaySessionID(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UInput Function GetRemotePlaySessionID *************************************

// ********** Begin Class UInput Function GetStringForActionOrigin *********************************
struct Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics
{
	struct Input_eventGetStringForActionOrigin_Parms
	{
		int32 Origin;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns a localized string (from Steam's language setting) for the specified Origin.\n\x09*\n\x09* @param\x09Origin\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a localized string (from Steam's language setting) for the specified Origin.\n\n@param        Origin" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetStringForActionOrigin constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStringForActionOrigin constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStringForActionOrigin Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetStringForActionOrigin_Parms, Origin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetStringForActionOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::PropPointers) < 2048);
// ********** End Function GetStringForActionOrigin Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetStringForActionOrigin", 	Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::Input_eventGetStringForActionOrigin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::Input_eventGetStringForActionOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetStringForActionOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetStringForActionOrigin)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Origin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStringForActionOrigin(Z_Param_Origin);
	P_NATIVE_END;
}
// ********** End Class UInput Function GetStringForActionOrigin ***********************************

// ********** Begin Class UInput Function GetStringForXboxOrigin ***********************************
struct Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics
{
	struct Input_eventGetStringForXboxOrigin_Parms
	{
		ESteamCoreXboxOrigin Origin;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\x09*\n\x09* @param\x09Origin\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\n@param        Origin" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetStringForXboxOrigin constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStringForXboxOrigin constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStringForXboxOrigin Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetStringForXboxOrigin_Parms, Origin), Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin, METADATA_PARAMS(0, nullptr) }; // 3558287588
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventGetStringForXboxOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_Origin_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::PropPointers) < 2048);
// ********** End Function GetStringForXboxOrigin Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetStringForXboxOrigin", 	Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::Input_eventGetStringForXboxOrigin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::Input_eventGetStringForXboxOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_GetStringForXboxOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execGetStringForXboxOrigin)
{
	P_GET_ENUM(ESteamCoreXboxOrigin,Z_Param_Origin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStringForXboxOrigin(ESteamCoreXboxOrigin(Z_Param_Origin));
	P_NATIVE_END;
}
// ********** End Class UInput Function GetStringForXboxOrigin *************************************

// ********** Begin Class UInput Function Init *****************************************************
struct Z_Construct_UFunction_UInput_Init_Statics
{
	struct Input_eventInit_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Init and Shutdown must be called when starting/ending use of this interface\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Init and Shutdown must be called when starting/ending use of this interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Init constinit property declarations **********************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Init constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Init Property Definitions *********************************************
void Z_Construct_UFunction_UInput_Init_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Input_eventInit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInput_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Input_eventInit_Parms), &Z_Construct_UFunction_UInput_Init_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_Init_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_Init_Statics::PropPointers) < 2048);
// ********** End Function Init Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "Init", 	Z_Construct_UFunction_UInput_Init_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_Init_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_Init_Statics::Input_eventInit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_Init_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_Init_Statics::Input_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Init();
	P_NATIVE_END;
}
// ********** End Class UInput Function Init *******************************************************

// ********** Begin Class UInput Function SetLEDColor **********************************************
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set the controller LED color on supported controllers.\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller to affect.\n\x09* @param\x09""ColorR\x09\x09The red component of the color to set (0-255).\n\x09* @param\x09""ColorG\x09\x09The green component of the color to set (0-255).\n\x09* @param\x09""ColorB\x09\x09The blue component of the color to set (0-255).\n\x09* @param\x09""Flags\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the controller LED color on supported controllers.\n\n@param        Handle          The Handle of the controller to affect.\n@param        ColorR          The red component of the color to set (0-255).\n@param        ColorG          The green component of the color to set (0-255).\n@param        ColorB          The blue component of the color to set (0-255).\n@param        Flags" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetLEDColor constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorR;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorG;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorB;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLEDColor constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLEDColor Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorR = { "ColorR", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, ColorR), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorG = { "ColorG", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, ColorG), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorB = { "ColorB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, ColorB), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, Flags), Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag, METADATA_PARAMS(0, nullptr) }; // 208281035
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_SetLEDColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_ColorB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Flags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_SetLEDColor_Statics::PropPointers) < 2048);
// ********** End Function SetLEDColor Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "SetLEDColor", 	Z_Construct_UFunction_UInput_SetLEDColor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_SetLEDColor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_SetLEDColor_Statics::Input_eventSetLEDColor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_SetLEDColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_SetLEDColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_SetLEDColor_Statics::Input_eventSetLEDColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_SetLEDColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_SetLEDColor_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UInput Function SetLEDColor ************************************************

// ********** Begin Class UInput Function ShowBindingPanel *****************************************
struct Z_Construct_UFunction_UInput_ShowBindingPanel_Statics
{
	struct Input_eventShowBindingPanel_Parms
	{
		FInputHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Invokes the Steam overlay and brings up the binding screen.\n\x09*\n\x09* @param\x09Handle\x09The Handle of the controller you want to bring up the binding screen for.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Invokes the Steam overlay and brings up the binding screen.\n\n@param        Handle  The Handle of the controller you want to bring up the binding screen for." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ShowBindingPanel constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShowBindingPanel constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShowBindingPanel Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventShowBindingPanel_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
void Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Input_eventShowBindingPanel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Input_eventShowBindingPanel_Parms), &Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::PropPointers) < 2048);
// ********** End Function ShowBindingPanel Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "ShowBindingPanel", 	Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::Input_eventShowBindingPanel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::Input_eventShowBindingPanel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_ShowBindingPanel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execShowBindingPanel)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShowBindingPanel(Z_Param_Handle);
	P_NATIVE_END;
}
// ********** End Class UInput Function ShowBindingPanel *******************************************

// ********** Begin Class UInput Function Shutdown *************************************************
struct Z_Construct_UFunction_UInput_Shutdown_Statics
{
	struct Input_eventShutdown_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Init and Shutdown must be called when starting/ending use of this interface\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Init and Shutdown must be called when starting/ending use of this interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Shutdown constinit property declarations ******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Shutdown constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Shutdown Property Definitions *****************************************
void Z_Construct_UFunction_UInput_Shutdown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Input_eventShutdown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInput_Shutdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Input_eventShutdown_Parms), &Z_Construct_UFunction_UInput_Shutdown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_Shutdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_Shutdown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_Shutdown_Statics::PropPointers) < 2048);
// ********** End Function Shutdown Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_Shutdown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "Shutdown", 	Z_Construct_UFunction_UInput_Shutdown_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_Shutdown_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_Shutdown_Statics::Input_eventShutdown_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_Shutdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_Shutdown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_Shutdown_Statics::Input_eventShutdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_Shutdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_Shutdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execShutdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Shutdown();
	P_NATIVE_END;
}
// ********** End Class UInput Function Shutdown ***************************************************

// ********** Begin Class UInput Function StopAnalogActionMomentum *********************************
struct Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics
{
	struct Input_eventStopAnalogActionMomentum_Parms
	{
		FInputHandle Handle;
		FInputAnalogActionHandle EAction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Stops the momentum of an analog action (where applicable, ie a touchpad w/ virtual trackball settings).\n\x09*\n\x09* @param\x09Handle\x09\x09The Handle of the controller to affect.\n\x09* @param\x09""EAction\x09\x09The analog action to stop momentum for.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops the momentum of an analog action (where applicable, ie a touchpad w/ virtual trackball settings).\n\n@param        Handle          The Handle of the controller to affect.\n@param        EAction         The analog action to stop momentum for." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StopAnalogActionMomentum constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopAnalogActionMomentum constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopAnalogActionMomentum Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventStopAnalogActionMomentum_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::NewProp_EAction = { "EAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventStopAnalogActionMomentum_Parms, EAction), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 3315214180
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::NewProp_EAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::PropPointers) < 2048);
// ********** End Function StopAnalogActionMomentum Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "StopAnalogActionMomentum", 	Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::Input_eventStopAnalogActionMomentum_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::Input_eventStopAnalogActionMomentum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_StopAnalogActionMomentum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UInput Function StopAnalogActionMomentum ***********************************

// ********** Begin Class UInput Function TranslateActionOrigin ************************************
struct Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics
{
	struct Input_eventTranslateActionOrigin_Parms
	{
		ESteamCoreInputType DestinationInputType;
		int32 SourceOrigin;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Convert an Origin to another controller type - for inputs not present on the other controller type this will return k_EInputActionOrigin_None\n\x09*\n\x09* When a new input type is added you will be able to pass in k_ESteamInputType_Unknown and the closest Origin that your version of the SDK recognized will be returned\n\x09* ex: if a Playstation 5 controller was released this function would return Playstation 4 Origins.\n\x09*\n\x09* @param\x09""DestinationInputType\n\x09* @param\x09SourceOrigin\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert an Origin to another controller type - for inputs not present on the other controller type this will return k_EInputActionOrigin_None\n\nWhen a new input type is added you will be able to pass in k_ESteamInputType_Unknown and the closest Origin that your version of the SDK recognized will be returned\nex: if a Playstation 5 controller was released this function would return Playstation 4 Origins.\n\n@param        DestinationInputType\n@param        SourceOrigin" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function TranslateActionOrigin constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestinationInputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DestinationInputType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceOrigin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TranslateActionOrigin constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TranslateActionOrigin Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType = { "DestinationInputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventTranslateActionOrigin_Parms, DestinationInputType), Z_Construct_UEnum_SteamCore_ESteamCoreInputType, METADATA_PARAMS(0, nullptr) }; // 3136391136
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_SourceOrigin = { "SourceOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventTranslateActionOrigin_Parms, SourceOrigin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventTranslateActionOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_DestinationInputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_SourceOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::PropPointers) < 2048);
// ********** End Function TranslateActionOrigin Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "TranslateActionOrigin", 	Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::Input_eventTranslateActionOrigin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::Input_eventTranslateActionOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_TranslateActionOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execTranslateActionOrigin)
{
	P_GET_ENUM(ESteamCoreInputType,Z_Param_DestinationInputType);
	P_GET_PROPERTY(FIntProperty,Z_Param_SourceOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->TranslateActionOrigin(ESteamCoreInputType(Z_Param_DestinationInputType),Z_Param_SourceOrigin);
	P_NATIVE_END;
}
// ********** End Class UInput Function TranslateActionOrigin **************************************

// ********** Begin Class UInput Function TriggerHapticPulse ***************************************
struct Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics
{
	struct Input_eventTriggerHapticPulse_Parms
	{
		FInputHandle Handle;
		ESteamCoreControllerPad TargetPad;
		float DurationMicroSec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Triggers a (low-level) haptic pulse on supported controllers.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The Handle of the controller to affect.\n\x09* @param\x09TargetPad\x09\x09\x09Which haptic touch pad to affect.\n\x09* @param\x09""DurationMicroSec\x09""Duration of the pulse, in microseconds (1/1,000,000th of a second)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggers a (low-level) haptic pulse on supported controllers.\n\n@param        Handle                          The Handle of the controller to affect.\n@param        TargetPad                       Which haptic touch pad to affect.\n@param        DurationMicroSec        Duration of the pulse, in microseconds (1/1,000,000th of a second)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function TriggerHapticPulse constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetPad_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetPad;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationMicroSec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TriggerHapticPulse constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TriggerHapticPulse Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventTriggerHapticPulse_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_TargetPad_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_TargetPad = { "TargetPad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventTriggerHapticPulse_Parms, TargetPad), Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad, METADATA_PARAMS(0, nullptr) }; // 831062105
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_DurationMicroSec = { "DurationMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventTriggerHapticPulse_Parms, DurationMicroSec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_TargetPad_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_TargetPad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_DurationMicroSec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::PropPointers) < 2048);
// ********** End Function TriggerHapticPulse Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "TriggerHapticPulse", 	Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::Input_eventTriggerHapticPulse_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::Input_eventTriggerHapticPulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_TriggerHapticPulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execTriggerHapticPulse)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_ENUM(ESteamCoreControllerPad,Z_Param_TargetPad);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DurationMicroSec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerHapticPulse(Z_Param_Handle,ESteamCoreControllerPad(Z_Param_TargetPad),Z_Param_DurationMicroSec);
	P_NATIVE_END;
}
// ********** End Class UInput Function TriggerHapticPulse *****************************************

// ********** Begin Class UInput Function TriggerRepeatedHapticPulse *******************************
struct Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics
{
	struct Input_eventTriggerRepeatedHapticPulse_Parms
	{
		FInputHandle Handle;
		ESteamCoreControllerPad TargetPad;
		float DurationMicroSec;
		float OffMicroSec;
		int32 Repeat;
		uint8 Flags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Triggers a repeated haptic pulse on supported controllers.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09\x09The Handle of the controller to affect.\n\x09* @param\x09TargetPad\x09\x09\x09Which haptic touch pad to affect.\n\x09* @param\x09""DurationMicroSec\x09""Duration of the pulse, in microseconds (1/1,000,000th of a second).\n\x09* @param\x09OffMicroSec\x09\x09\x09""Duration of the pause between pulses, in microseconds. (Only available in UE 5.1+)\n\x09* @param\x09Repeat\x09\x09\x09\x09Number of times to repeat the usDurationMicroSec / usOffMicroSec duty cycle.\n\x09* @param\x09""Flags\x09\x09\x09\x09""Currently unused and reserved for future use.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggers a repeated haptic pulse on supported controllers.\n\n@param        Handle                          The Handle of the controller to affect.\n@param        TargetPad                       Which haptic touch pad to affect.\n@param        DurationMicroSec        Duration of the pulse, in microseconds (1/1,000,000th of a second).\n@param        OffMicroSec                     Duration of the pause between pulses, in microseconds. (Only available in UE 5.1+)\n@param        Repeat                          Number of times to repeat the usDurationMicroSec / usOffMicroSec duty cycle.\n@param        Flags                           Currently unused and reserved for future use." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function TriggerRepeatedHapticPulse constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetPad_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetPad;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationMicroSec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffMicroSec;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Repeat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TriggerRepeatedHapticPulse constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TriggerRepeatedHapticPulse Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad = { "TargetPad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, TargetPad), Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad, METADATA_PARAMS(0, nullptr) }; // 831062105
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_DurationMicroSec = { "DurationMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, DurationMicroSec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_OffMicroSec = { "OffMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, OffMicroSec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, Repeat), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, Flags), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_DurationMicroSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_OffMicroSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Repeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::PropPointers) < 2048);
// ********** End Function TriggerRepeatedHapticPulse Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "TriggerRepeatedHapticPulse", 	Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::Input_eventTriggerRepeatedHapticPulse_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::Input_eventTriggerRepeatedHapticPulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execTriggerRepeatedHapticPulse)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_ENUM(ESteamCoreControllerPad,Z_Param_TargetPad);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DurationMicroSec);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OffMicroSec);
	P_GET_PROPERTY(FIntProperty,Z_Param_Repeat);
	P_GET_PROPERTY(FByteProperty,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerRepeatedHapticPulse(Z_Param_Handle,ESteamCoreControllerPad(Z_Param_TargetPad),Z_Param_DurationMicroSec,Z_Param_OffMicroSec,Z_Param_Repeat,Z_Param_Flags);
	P_NATIVE_END;
}
// ********** End Class UInput Function TriggerRepeatedHapticPulse *********************************

// ********** Begin Class UInput Function TriggerVibration *****************************************
struct Z_Construct_UFunction_UInput_TriggerVibration_Statics
{
	struct Input_eventTriggerVibration_Parms
	{
		FInputHandle Handle;
		float LeftSpeed;
		float RightSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Trigger a vibration event on supported controllers.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The Handle of the controller to affect.\n\x09* @param\x09LeftSpeed\x09\x09The intensity value for the left rumble motor.\n\x09* @param\x09RightSpeed\x09\x09The intensity value of the right rumble motor.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger a vibration event on supported controllers.\n\n@param        Handle                  The Handle of the controller to affect.\n@param        LeftSpeed               The intensity value for the left rumble motor.\n@param        RightSpeed              The intensity value of the right rumble motor." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function TriggerVibration constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TriggerVibration constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TriggerVibration Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventTriggerVibration_Parms, Handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(0, nullptr) }; // 3587528016
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_LeftSpeed = { "LeftSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventTriggerVibration_Parms, LeftSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_RightSpeed = { "RightSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Input_eventTriggerVibration_Parms, RightSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_TriggerVibration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_LeftSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_RightSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerVibration_Statics::PropPointers) < 2048);
// ********** End Function TriggerVibration Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_TriggerVibration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "TriggerVibration", 	Z_Construct_UFunction_UInput_TriggerVibration_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerVibration_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UInput_TriggerVibration_Statics::Input_eventTriggerVibration_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerVibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInput_TriggerVibration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInput_TriggerVibration_Statics::Input_eventTriggerVibration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInput_TriggerVibration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInput_TriggerVibration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInput::execTriggerVibration)
{
	P_GET_STRUCT(FInputHandle,Z_Param_Handle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LeftSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RightSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerVibration(Z_Param_Handle,Z_Param_LeftSpeed,Z_Param_RightSpeed);
	P_NATIVE_END;
}
// ********** End Class UInput Function TriggerVibration *******************************************

// ********** Begin Class UInput *******************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInput;
UClass* UInput::GetPrivateStaticClass()
{
	using TClass = UInput;
	if (!Z_Registration_Info_UClass_UInput.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Input"),
			Z_Registration_Info_UClass_UInput.InnerSingleton,
			StaticRegisterNativesUInput,
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
	return Z_Registration_Info_UClass_UInput.InnerSingleton;
}
UClass* Z_Construct_UClass_UInput_NoRegister()
{
	return UInput::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamInput/SteamInput.h" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionOrigin_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SteamInput/SteamInput.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInput constinit property declarations ***********************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputActionOrigin_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputActionOrigin_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InputActionOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInput constinit property declarations *************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ActivateActionSet"), .Pointer = &UInput::execActivateActionSet },
		{ .NameUTF8 = UTF8TEXT("ActivateActionSetLayer"), .Pointer = &UInput::execActivateActionSetLayer },
		{ .NameUTF8 = UTF8TEXT("DeactivateActionSetLayer"), .Pointer = &UInput::execDeactivateActionSetLayer },
		{ .NameUTF8 = UTF8TEXT("DeactivateAllActionSetLayers"), .Pointer = &UInput::execDeactivateAllActionSetLayers },
		{ .NameUTF8 = UTF8TEXT("GetActionOriginFromXboxOrigin"), .Pointer = &UInput::execGetActionOriginFromXboxOrigin },
		{ .NameUTF8 = UTF8TEXT("GetActionSetHandle"), .Pointer = &UInput::execGetActionSetHandle },
		{ .NameUTF8 = UTF8TEXT("GetActiveActionSetLayers"), .Pointer = &UInput::execGetActiveActionSetLayers },
		{ .NameUTF8 = UTF8TEXT("GetAnalogActionData"), .Pointer = &UInput::execGetAnalogActionData },
		{ .NameUTF8 = UTF8TEXT("GetAnalogActionHandle"), .Pointer = &UInput::execGetAnalogActionHandle },
		{ .NameUTF8 = UTF8TEXT("GetAnalogActionOrigins"), .Pointer = &UInput::execGetAnalogActionOrigins },
		{ .NameUTF8 = UTF8TEXT("GetConnectedControllers"), .Pointer = &UInput::execGetConnectedControllers },
		{ .NameUTF8 = UTF8TEXT("GetControllerForGamepadIndex"), .Pointer = &UInput::execGetControllerForGamepadIndex },
		{ .NameUTF8 = UTF8TEXT("GetCurrentActionSet"), .Pointer = &UInput::execGetCurrentActionSet },
		{ .NameUTF8 = UTF8TEXT("GetDeviceBindingRevision"), .Pointer = &UInput::execGetDeviceBindingRevision },
		{ .NameUTF8 = UTF8TEXT("GetDigitalActionData"), .Pointer = &UInput::execGetDigitalActionData },
		{ .NameUTF8 = UTF8TEXT("GetDigitalActionHandle"), .Pointer = &UInput::execGetDigitalActionHandle },
		{ .NameUTF8 = UTF8TEXT("GetDigitalActionOrigins"), .Pointer = &UInput::execGetDigitalActionOrigins },
		{ .NameUTF8 = UTF8TEXT("GetGamepadIndexForController"), .Pointer = &UInput::execGetGamepadIndexForController },
		{ .NameUTF8 = UTF8TEXT("GetGlyphForActionOrigin"), .Pointer = &UInput::execGetGlyphForActionOrigin },
		{ .NameUTF8 = UTF8TEXT("GetGlyphForXboxOrigin"), .Pointer = &UInput::execGetGlyphForXboxOrigin },
		{ .NameUTF8 = UTF8TEXT("GetInputActionOriginAsInteger"), .Pointer = &UInput::execGetInputActionOriginAsInteger },
		{ .NameUTF8 = UTF8TEXT("GetInputActionOriginAsString"), .Pointer = &UInput::execGetInputActionOriginAsString },
		{ .NameUTF8 = UTF8TEXT("GetInputActionOrigins"), .Pointer = &UInput::execGetInputActionOrigins },
		{ .NameUTF8 = UTF8TEXT("GetInputTypeForHandle"), .Pointer = &UInput::execGetInputTypeForHandle },
		{ .NameUTF8 = UTF8TEXT("GetMotionData"), .Pointer = &UInput::execGetMotionData },
		{ .NameUTF8 = UTF8TEXT("GetRemotePlaySessionID"), .Pointer = &UInput::execGetRemotePlaySessionID },
		{ .NameUTF8 = UTF8TEXT("GetStringForActionOrigin"), .Pointer = &UInput::execGetStringForActionOrigin },
		{ .NameUTF8 = UTF8TEXT("GetStringForXboxOrigin"), .Pointer = &UInput::execGetStringForXboxOrigin },
		{ .NameUTF8 = UTF8TEXT("Init"), .Pointer = &UInput::execInit },
		{ .NameUTF8 = UTF8TEXT("SetLEDColor"), .Pointer = &UInput::execSetLEDColor },
		{ .NameUTF8 = UTF8TEXT("ShowBindingPanel"), .Pointer = &UInput::execShowBindingPanel },
		{ .NameUTF8 = UTF8TEXT("Shutdown"), .Pointer = &UInput::execShutdown },
		{ .NameUTF8 = UTF8TEXT("StopAnalogActionMomentum"), .Pointer = &UInput::execStopAnalogActionMomentum },
		{ .NameUTF8 = UTF8TEXT("TranslateActionOrigin"), .Pointer = &UInput::execTranslateActionOrigin },
		{ .NameUTF8 = UTF8TEXT("TriggerHapticPulse"), .Pointer = &UInput::execTriggerHapticPulse },
		{ .NameUTF8 = UTF8TEXT("TriggerRepeatedHapticPulse"), .Pointer = &UInput::execTriggerRepeatedHapticPulse },
		{ .NameUTF8 = UTF8TEXT("TriggerVibration"), .Pointer = &UInput::execTriggerVibration },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInput_ActivateActionSet, "ActivateActionSet" }, // 3147782920
		{ &Z_Construct_UFunction_UInput_ActivateActionSetLayer, "ActivateActionSetLayer" }, // 3952278950
		{ &Z_Construct_UFunction_UInput_DeactivateActionSetLayer, "DeactivateActionSetLayer" }, // 2598241118
		{ &Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers, "DeactivateAllActionSetLayers" }, // 3925547435
		{ &Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin, "GetActionOriginFromXboxOrigin" }, // 452574283
		{ &Z_Construct_UFunction_UInput_GetActionSetHandle, "GetActionSetHandle" }, // 1148378273
		{ &Z_Construct_UFunction_UInput_GetActiveActionSetLayers, "GetActiveActionSetLayers" }, // 158221391
		{ &Z_Construct_UFunction_UInput_GetAnalogActionData, "GetAnalogActionData" }, // 2607850101
		{ &Z_Construct_UFunction_UInput_GetAnalogActionHandle, "GetAnalogActionHandle" }, // 1078708897
		{ &Z_Construct_UFunction_UInput_GetAnalogActionOrigins, "GetAnalogActionOrigins" }, // 2229720578
		{ &Z_Construct_UFunction_UInput_GetConnectedControllers, "GetConnectedControllers" }, // 235771217
		{ &Z_Construct_UFunction_UInput_GetControllerForGamepadIndex, "GetControllerForGamepadIndex" }, // 1800009001
		{ &Z_Construct_UFunction_UInput_GetCurrentActionSet, "GetCurrentActionSet" }, // 1034084447
		{ &Z_Construct_UFunction_UInput_GetDeviceBindingRevision, "GetDeviceBindingRevision" }, // 3427647411
		{ &Z_Construct_UFunction_UInput_GetDigitalActionData, "GetDigitalActionData" }, // 2209354105
		{ &Z_Construct_UFunction_UInput_GetDigitalActionHandle, "GetDigitalActionHandle" }, // 3649364263
		{ &Z_Construct_UFunction_UInput_GetDigitalActionOrigins, "GetDigitalActionOrigins" }, // 1045514303
		{ &Z_Construct_UFunction_UInput_GetGamepadIndexForController, "GetGamepadIndexForController" }, // 793792106
		{ &Z_Construct_UFunction_UInput_GetGlyphForActionOrigin, "GetGlyphForActionOrigin" }, // 1876563670
		{ &Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin, "GetGlyphForXboxOrigin" }, // 3899190503
		{ &Z_Construct_UFunction_UInput_GetInputActionOriginAsInteger, "GetInputActionOriginAsInteger" }, // 2604967623
		{ &Z_Construct_UFunction_UInput_GetInputActionOriginAsString, "GetInputActionOriginAsString" }, // 816544908
		{ &Z_Construct_UFunction_UInput_GetInputActionOrigins, "GetInputActionOrigins" }, // 1835215829
		{ &Z_Construct_UFunction_UInput_GetInputTypeForHandle, "GetInputTypeForHandle" }, // 1441438241
		{ &Z_Construct_UFunction_UInput_GetMotionData, "GetMotionData" }, // 2785905818
		{ &Z_Construct_UFunction_UInput_GetRemotePlaySessionID, "GetRemotePlaySessionID" }, // 977537838
		{ &Z_Construct_UFunction_UInput_GetStringForActionOrigin, "GetStringForActionOrigin" }, // 2642988195
		{ &Z_Construct_UFunction_UInput_GetStringForXboxOrigin, "GetStringForXboxOrigin" }, // 1514156507
		{ &Z_Construct_UFunction_UInput_Init, "Init" }, // 4203845673
		{ &Z_Construct_UFunction_UInput_SetLEDColor, "SetLEDColor" }, // 2979479491
		{ &Z_Construct_UFunction_UInput_ShowBindingPanel, "ShowBindingPanel" }, // 62560064
		{ &Z_Construct_UFunction_UInput_Shutdown, "Shutdown" }, // 812468602
		{ &Z_Construct_UFunction_UInput_StopAnalogActionMomentum, "StopAnalogActionMomentum" }, // 1782817989
		{ &Z_Construct_UFunction_UInput_TranslateActionOrigin, "TranslateActionOrigin" }, // 4240616963
		{ &Z_Construct_UFunction_UInput_TriggerHapticPulse, "TriggerHapticPulse" }, // 4085291316
		{ &Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse, "TriggerRepeatedHapticPulse" }, // 1009430116
		{ &Z_Construct_UFunction_UInput_TriggerVibration, "TriggerVibration" }, // 731960460
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInput_Statics

// ********** Begin Class UInput Property Definitions **********************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInput_Statics::NewProp_InputActionOrigin_ValueProp = { "InputActionOrigin", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInput_Statics::NewProp_InputActionOrigin_Key_KeyProp = { "InputActionOrigin_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInput_Statics::NewProp_InputActionOrigin = { "InputActionOrigin", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInput, InputActionOrigin), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionOrigin_MetaData), NewProp_InputActionOrigin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInput_Statics::NewProp_InputActionOrigin_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInput_Statics::NewProp_InputActionOrigin_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInput_Statics::NewProp_InputActionOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInput_Statics::PropPointers) < 2048);
// ********** End Class UInput Property Definitions ************************************************
UObject* (*const Z_Construct_UClass_UInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInput_Statics::ClassParams = {
	&UInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInput_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UInput_Statics::Class_MetaDataParams)
};
void UInput::StaticRegisterNativesUInput()
{
	UClass* Class = UInput::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UInput_Statics::Funcs));
}
UClass* Z_Construct_UClass_UInput()
{
	if (!Z_Registration_Info_UClass_UInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInput.OuterSingleton, Z_Construct_UClass_UInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInput.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInput);
UInput::~UInput() {}
// ********** End Class UInput *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInput_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInput, UInput::StaticClass, TEXT("UInput"), &Z_Registration_Info_UClass_UInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInput), 1437555608U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInput_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInput_h__Script_SteamCore_325249191{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInput_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamInput_SteamInput_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
