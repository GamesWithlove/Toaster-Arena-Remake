// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/SteamWebUtilities.h"
#include "SteamCoreWeb/SteamWebTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamWebUtilities() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamWebUtilities();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamWebUtilities_NoRegister();
STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult();
STEAMCOREWEB_API UScriptStruct* Z_Construct_UScriptStruct_FSteamCoreJson();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamWebUtilities Function FindJsonBool *********************************
struct Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics
{
	struct SteamWebUtilities_eventFindJsonBool_Parms
	{
		FString JSONString;
		FString Key;
		bool bValue;
		ESteamJsonResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding a bool value from a JsonResult\n\x09*\n\x09* @param\x09JSONString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding a bool value from a JsonResult\n\n@param        JSONString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JSONString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindJsonBool constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSONString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindJsonBool constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindJsonBool Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBool_Parms, JSONString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JSONString_MetaData), NewProp_JSONString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBool_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((SteamWebUtilities_eventFindJsonBool_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamWebUtilities_eventFindJsonBool_Parms), &Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBool_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(0, nullptr) }; // 2105524707
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_JSONString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_bValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::PropPointers) < 2048);
// ********** End Function FindJsonBool Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonBool", 	Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::SteamWebUtilities_eventFindJsonBool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::SteamWebUtilities_eventFindJsonBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamWebUtilities::execFindJsonBool)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JSONString);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_UBOOL_REF(Z_Param_Out_bValue);
	P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamWebUtilities::FindJsonBool(Z_Param_JSONString,Z_Param_Key,Z_Param_Out_bValue,(ESteamJsonResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class USteamWebUtilities Function FindJsonBool ***********************************

// ********** Begin Class USteamWebUtilities Function FindJsonBools ********************************
struct Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics
{
	struct SteamWebUtilities_eventFindJsonBools_Parms
	{
		FString JSONString;
		FString Key;
		TArray<bool> bValues;
		ESteamJsonResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding an array of bool values from a JsonResult\n\x09*\n\x09* @param\x09JSONString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding an array of bool values from a JsonResult\n\n@param        JSONString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JSONString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindJsonBools constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSONString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_bValues;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindJsonBools constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindJsonBools Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBools_Parms, JSONString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JSONString_MetaData), NewProp_JSONString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBools_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_bValues_Inner = { "bValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_bValues = { "bValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBools_Parms, bValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBools_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(0, nullptr) }; // 2105524707
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_JSONString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_bValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_bValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::PropPointers) < 2048);
// ********** End Function FindJsonBools Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonBools", 	Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::SteamWebUtilities_eventFindJsonBools_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::SteamWebUtilities_eventFindJsonBools_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonBools()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamWebUtilities::execFindJsonBools)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JSONString);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(bool,Z_Param_Out_bValues);
	P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamWebUtilities::FindJsonBools(Z_Param_JSONString,Z_Param_Key,Z_Param_Out_bValues,(ESteamJsonResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class USteamWebUtilities Function FindJsonBools **********************************

// ********** Begin Class USteamWebUtilities Function FindJsonNumber *******************************
struct Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics
{
	struct SteamWebUtilities_eventFindJsonNumber_Parms
	{
		FString JSONString;
		FString Key;
		int32 Value;
		ESteamJsonResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding a number value from a JsonResult\n\x09*\n\x09* @param\x09JSONString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding a number value from a JsonResult\n\n@param        JSONString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JSONString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindJsonNumber constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSONString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindJsonNumber constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindJsonNumber Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumber_Parms, JSONString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JSONString_MetaData), NewProp_JSONString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumber_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumber_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumber_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(0, nullptr) }; // 2105524707
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_JSONString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::PropPointers) < 2048);
// ********** End Function FindJsonNumber Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonNumber", 	Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::SteamWebUtilities_eventFindJsonNumber_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::SteamWebUtilities_eventFindJsonNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamWebUtilities::execFindJsonNumber)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JSONString);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
	P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamWebUtilities::FindJsonNumber(Z_Param_JSONString,Z_Param_Key,Z_Param_Out_Value,(ESteamJsonResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class USteamWebUtilities Function FindJsonNumber *********************************

// ********** Begin Class USteamWebUtilities Function FindJsonNumbers ******************************
struct Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics
{
	struct SteamWebUtilities_eventFindJsonNumbers_Parms
	{
		FString JSONString;
		FString Key;
		TArray<int32> Values;
		ESteamJsonResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding an array of number values from a JsonResult\n\x09*\n\x09* @param\x09JSONString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding an array of number values from a JsonResult\n\n@param        JSONString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JSONString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindJsonNumbers constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSONString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindJsonNumbers constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindJsonNumbers Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumbers_Parms, JSONString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JSONString_MetaData), NewProp_JSONString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumbers_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumbers_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumbers_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(0, nullptr) }; // 2105524707
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_JSONString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::PropPointers) < 2048);
// ********** End Function FindJsonNumbers Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonNumbers", 	Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::SteamWebUtilities_eventFindJsonNumbers_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::SteamWebUtilities_eventFindJsonNumbers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamWebUtilities::execFindJsonNumbers)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JSONString);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Values);
	P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamWebUtilities::FindJsonNumbers(Z_Param_JSONString,Z_Param_Key,Z_Param_Out_Values,(ESteamJsonResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class USteamWebUtilities Function FindJsonNumbers ********************************

// ********** Begin Class USteamWebUtilities Function FindJsonString *******************************
struct Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics
{
	struct SteamWebUtilities_eventFindJsonString_Parms
	{
		FString JSONString;
		FString Key;
		FString Value;
		ESteamJsonResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding a string value from a JsonResult\n\x09*\n\x09* @param\x09JSONString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding a string value from a JsonResult\n\n@param        JSONString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JSONString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindJsonString constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSONString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindJsonString constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindJsonString Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonString_Parms, JSONString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JSONString_MetaData), NewProp_JSONString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonString_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonString_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonString_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(0, nullptr) }; // 2105524707
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_JSONString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::PropPointers) < 2048);
// ********** End Function FindJsonString Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonString", 	Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::SteamWebUtilities_eventFindJsonString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::SteamWebUtilities_eventFindJsonString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamWebUtilities::execFindJsonString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JSONString);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamWebUtilities::FindJsonString(Z_Param_JSONString,Z_Param_Key,Z_Param_Out_Value,(ESteamJsonResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class USteamWebUtilities Function FindJsonString *********************************

// ********** Begin Class USteamWebUtilities Function FindJsonStrings ******************************
struct Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics
{
	struct SteamWebUtilities_eventFindJsonStrings_Parms
	{
		FString JSONString;
		FString Key;
		TArray<FString> Values;
		ESteamJsonResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding an array of string values from a JsonResult\n\x09*\n\x09* @param\x09JSONString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding an array of string values from a JsonResult\n\n@param        JSONString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JSONString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindJsonStrings constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSONString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindJsonStrings constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindJsonStrings Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonStrings_Parms, JSONString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JSONString_MetaData), NewProp_JSONString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonStrings_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonStrings_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonStrings_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(0, nullptr) }; // 2105524707
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_JSONString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::PropPointers) < 2048);
// ********** End Function FindJsonStrings Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonStrings", 	Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::SteamWebUtilities_eventFindJsonStrings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::SteamWebUtilities_eventFindJsonStrings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamWebUtilities::execFindJsonStrings)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JSONString);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Values);
	P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamWebUtilities::FindJsonStrings(Z_Param_JSONString,Z_Param_Key,Z_Param_Out_Values,(ESteamJsonResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class USteamWebUtilities Function FindJsonStrings ********************************

// ********** Begin Class USteamWebUtilities Function GetDevSteamID ********************************
struct Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics
{
	struct SteamWebUtilities_eventGetDevSteamID_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDevSteamID constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDevSteamID constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDevSteamID Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventGetDevSteamID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::PropPointers) < 2048);
// ********** End Function GetDevSteamID Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "GetDevSteamID", 	Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::SteamWebUtilities_eventGetDevSteamID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::SteamWebUtilities_eventGetDevSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamWebUtilities::execGetDevSteamID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamWebUtilities::GetDevSteamID();
	P_NATIVE_END;
}
// ********** End Class USteamWebUtilities Function GetDevSteamID **********************************

// ********** Begin Class USteamWebUtilities Function GetProjectAppID ******************************
struct Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics
{
	struct SteamWebUtilities_eventGetProjectAppID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetProjectAppID constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetProjectAppID constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetProjectAppID Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventGetProjectAppID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::PropPointers) < 2048);
// ********** End Function GetProjectAppID Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "GetProjectAppID", 	Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::SteamWebUtilities_eventGetProjectAppID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::SteamWebUtilities_eventGetProjectAppID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamWebUtilities::execGetProjectAppID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamWebUtilities::GetProjectAppID();
	P_NATIVE_END;
}
// ********** End Class USteamWebUtilities Function GetProjectAppID ********************************

// ********** Begin Class USteamWebUtilities Function GetProjectKey ********************************
struct Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics
{
	struct SteamWebUtilities_eventGetProjectKey_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetProjectKey constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetProjectKey constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetProjectKey Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventGetProjectKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::PropPointers) < 2048);
// ********** End Function GetProjectKey Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "GetProjectKey", 	Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::SteamWebUtilities_eventGetProjectKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::SteamWebUtilities_eventGetProjectKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamWebUtilities_GetProjectKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamWebUtilities::execGetProjectKey)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamWebUtilities::GetProjectKey();
	P_NATIVE_END;
}
// ********** End Class USteamWebUtilities Function GetProjectKey **********************************

// ********** Begin Class USteamWebUtilities Function ParseJson ************************************
struct Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics
{
	struct SteamWebUtilities_eventParseJson_Parms
	{
		FString JSONString;
		TArray<FSteamCoreJson> Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Parse JSON Result\n\x09*\n\x09* @param\x09JSONString\x09JsonString from Steam WEB Api\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Parse JSON Result\n\n@param        JSONString      JsonString from Steam WEB Api" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JSONString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ParseJson constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSONString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ParseJson constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ParseJson Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventParseJson_Parms, JSONString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JSONString_MetaData), NewProp_JSONString_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamCoreJson, METADATA_PARAMS(0, nullptr) }; // 3784198142
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamWebUtilities_eventParseJson_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3784198142
void Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamWebUtilities_eventParseJson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamWebUtilities_eventParseJson_Parms), &Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_JSONString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::PropPointers) < 2048);
// ********** End Function ParseJson Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "ParseJson", 	Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::SteamWebUtilities_eventParseJson_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::SteamWebUtilities_eventParseJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamWebUtilities_ParseJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamWebUtilities::execParseJson)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JSONString);
	P_GET_TARRAY_REF(FSteamCoreJson,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamWebUtilities::ParseJson(Z_Param_JSONString,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class USteamWebUtilities Function ParseJson **************************************

// ********** Begin Class USteamWebUtilities *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamWebUtilities;
UClass* USteamWebUtilities::GetPrivateStaticClass()
{
	using TClass = USteamWebUtilities;
	if (!Z_Registration_Info_UClass_USteamWebUtilities.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamWebUtilities"),
			Z_Registration_Info_UClass_USteamWebUtilities.InnerSingleton,
			StaticRegisterNativesUSteamWebUtilities,
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
	return Z_Registration_Info_UClass_USteamWebUtilities.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamWebUtilities_NoRegister()
{
	return USteamWebUtilities::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamWebUtilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Steam Utilities Class\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamCoreWeb/SteamWebUtilities.h" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Steam Utilities Class\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamWebUtilities constinit property declarations ***********************
// ********** End Class USteamWebUtilities constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FindJsonBool"), .Pointer = &USteamWebUtilities::execFindJsonBool },
		{ .NameUTF8 = UTF8TEXT("FindJsonBools"), .Pointer = &USteamWebUtilities::execFindJsonBools },
		{ .NameUTF8 = UTF8TEXT("FindJsonNumber"), .Pointer = &USteamWebUtilities::execFindJsonNumber },
		{ .NameUTF8 = UTF8TEXT("FindJsonNumbers"), .Pointer = &USteamWebUtilities::execFindJsonNumbers },
		{ .NameUTF8 = UTF8TEXT("FindJsonString"), .Pointer = &USteamWebUtilities::execFindJsonString },
		{ .NameUTF8 = UTF8TEXT("FindJsonStrings"), .Pointer = &USteamWebUtilities::execFindJsonStrings },
		{ .NameUTF8 = UTF8TEXT("GetDevSteamID"), .Pointer = &USteamWebUtilities::execGetDevSteamID },
		{ .NameUTF8 = UTF8TEXT("GetProjectAppID"), .Pointer = &USteamWebUtilities::execGetProjectAppID },
		{ .NameUTF8 = UTF8TEXT("GetProjectKey"), .Pointer = &USteamWebUtilities::execGetProjectKey },
		{ .NameUTF8 = UTF8TEXT("ParseJson"), .Pointer = &USteamWebUtilities::execParseJson },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonBool, "FindJsonBool" }, // 260079587
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonBools, "FindJsonBools" }, // 2617919052
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber, "FindJsonNumber" }, // 2103810542
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers, "FindJsonNumbers" }, // 942310165
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonString, "FindJsonString" }, // 3041333262
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings, "FindJsonStrings" }, // 2985636939
		{ &Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID, "GetDevSteamID" }, // 2010726550
		{ &Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID, "GetProjectAppID" }, // 2636305107
		{ &Z_Construct_UFunction_USteamWebUtilities_GetProjectKey, "GetProjectKey" }, // 3134193236
		{ &Z_Construct_UFunction_USteamWebUtilities_ParseJson, "ParseJson" }, // 3613296668
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamWebUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamWebUtilities_Statics
UObject* (*const Z_Construct_UClass_USteamWebUtilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamWebUtilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamWebUtilities_Statics::ClassParams = {
	&USteamWebUtilities::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamWebUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamWebUtilities_Statics::Class_MetaDataParams)
};
void USteamWebUtilities::StaticRegisterNativesUSteamWebUtilities()
{
	UClass* Class = USteamWebUtilities::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamWebUtilities_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamWebUtilities()
{
	if (!Z_Registration_Info_UClass_USteamWebUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamWebUtilities.OuterSingleton, Z_Construct_UClass_USteamWebUtilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamWebUtilities.OuterSingleton;
}
USteamWebUtilities::USteamWebUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamWebUtilities);
USteamWebUtilities::~USteamWebUtilities() {}
// ********** End Class USteamWebUtilities *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamWebUtilities, USteamWebUtilities::StaticClass, TEXT("USteamWebUtilities"), &Z_Registration_Info_UClass_USteamWebUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamWebUtilities), 1870071529U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h__Script_SteamCoreWeb_3075584975{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
