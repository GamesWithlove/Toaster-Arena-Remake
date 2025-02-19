// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWeb/SteamWebUtilities.h"
#include "SteamCoreWeb/Public/SteamCoreWeb/SteamWebTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamWebUtilities() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamWebUtilities();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamWebUtilities_NoRegister();
	STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult();
	STEAMCOREWEB_API UScriptStruct* Z_Construct_UScriptStruct_FSteamCoreJson();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(USteamWebUtilities::execGetDevSteamID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamWebUtilities::GetDevSteamID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execGetProjectAppID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USteamWebUtilities::GetProjectAppID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execGetProjectKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamWebUtilities::GetProjectKey();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(USteamWebUtilities::execParseJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JSONString);
		P_GET_TARRAY_REF(FSteamCoreJson,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamWebUtilities::ParseJson(Z_Param_JSONString,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	void USteamWebUtilities::StaticRegisterNativesUSteamWebUtilities()
	{
		UClass* Class = USteamWebUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindJsonBool", &USteamWebUtilities::execFindJsonBool },
			{ "FindJsonBools", &USteamWebUtilities::execFindJsonBools },
			{ "FindJsonNumber", &USteamWebUtilities::execFindJsonNumber },
			{ "FindJsonNumbers", &USteamWebUtilities::execFindJsonNumbers },
			{ "FindJsonString", &USteamWebUtilities::execFindJsonString },
			{ "FindJsonStrings", &USteamWebUtilities::execFindJsonStrings },
			{ "GetDevSteamID", &USteamWebUtilities::execGetDevSteamID },
			{ "GetProjectAppID", &USteamWebUtilities::execGetProjectAppID },
			{ "GetProjectKey", &USteamWebUtilities::execGetProjectKey },
			{ "ParseJson", &USteamWebUtilities::execParseJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSONString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JSONString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_JSONString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBool_Parms, JSONString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_JSONString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_JSONString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBool_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SteamWebUtilities_eventFindJsonBool_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamWebUtilities_eventFindJsonBool_Parms), &Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBool_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) }; // 2136824612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_JSONString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_bValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding a bool value from a JsonResult\n\x09*\n\x09* @param\x09JSONString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding a bool value from a JsonResult\n\n@param        JSONString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::SteamWebUtilities_eventFindJsonBool_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSONString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JSONString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bValues;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_JSONString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBools_Parms, JSONString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_JSONString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_JSONString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBools_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_bValues_Inner = { "bValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_bValues = { "bValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBools_Parms, bValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBools_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) }; // 2136824612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_JSONString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_bValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_bValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding an array of bool values from a JsonResult\n\x09*\n\x09* @param\x09JSONString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding an array of bool values from a JsonResult\n\n@param        JSONString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonBools", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::SteamWebUtilities_eventFindJsonBools_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonBools()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSONString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JSONString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_JSONString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumber_Parms, JSONString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_JSONString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_JSONString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumber_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumber_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumber_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) }; // 2136824612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_JSONString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding a number value from a JsonResult\n\x09*\n\x09* @param\x09JSONString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding a number value from a JsonResult\n\n@param        JSONString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::SteamWebUtilities_eventFindJsonNumber_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSONString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JSONString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_JSONString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumbers_Parms, JSONString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_JSONString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_JSONString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumbers_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumbers_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumbers_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) }; // 2136824612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_JSONString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding an array of number values from a JsonResult\n\x09*\n\x09* @param\x09JSONString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding an array of number values from a JsonResult\n\n@param        JSONString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonNumbers", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::SteamWebUtilities_eventFindJsonNumbers_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSONString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JSONString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_JSONString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonString_Parms, JSONString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_JSONString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_JSONString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonString_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonString_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) }; // 2136824612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_JSONString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding a string value from a JsonResult\n\x09*\n\x09* @param\x09JSONString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding a string value from a JsonResult\n\n@param        JSONString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::SteamWebUtilities_eventFindJsonString_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSONString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JSONString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_JSONString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonStrings_Parms, JSONString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_JSONString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_JSONString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonStrings_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonStrings_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonStrings_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) }; // 2136824612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_JSONString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Try finding an array of string values from a JsonResult\n\x09*\n\x09* @param\x09JSONString\x09\x09JsonString from Steam WEB Api\n\x09* @param\x09key\x09\x09\x09\x09The key that contains the value (NOT case sensitive)\n\x09*/" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Try finding an array of string values from a JsonResult\n\n@param        JSONString              JsonString from Steam WEB Api\n@param        key                             The key that contains the value (NOT case sensitive)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonStrings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::SteamWebUtilities_eventFindJsonStrings_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics
	{
		struct SteamWebUtilities_eventGetDevSteamID_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventGetDevSteamID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "GetDevSteamID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::SteamWebUtilities_eventGetDevSteamID_Parms), Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics
	{
		struct SteamWebUtilities_eventGetProjectAppID_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventGetProjectAppID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "GetProjectAppID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::SteamWebUtilities_eventGetProjectAppID_Parms), Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics
	{
		struct SteamWebUtilities_eventGetProjectKey_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventGetProjectKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "GetProjectKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::SteamWebUtilities_eventGetProjectKey_Parms), Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_GetProjectKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics
	{
		struct SteamWebUtilities_eventParseJson_Parms
		{
			FString JSONString;
			TArray<FSteamCoreJson> Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSONString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JSONString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_JSONString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventParseJson_Parms, JSONString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_JSONString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_JSONString_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamCoreJson, METADATA_PARAMS(nullptr, 0) }; // 531208169
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamWebUtilities_eventParseJson_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 531208169
	void Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamWebUtilities_eventParseJson_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamWebUtilities_eventParseJson_Parms), &Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_JSONString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Utilities" },
		{ "Comment", "/**\n\x09* Parse JSON Result\n\x09*\n\x09* @param\x09JSONString\x09JsonString from Steam WEB Api\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "Parse JSON Result\n\n@param        JSONString      JsonString from Steam WEB Api" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "ParseJson", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::SteamWebUtilities_eventParseJson_Parms), Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_ParseJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamWebUtilities);
	UClass* Z_Construct_UClass_USteamWebUtilities_NoRegister()
	{
		return USteamWebUtilities::StaticClass();
	}
	struct Z_Construct_UClass_USteamWebUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamWebUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamWebUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonBool, "FindJsonBool" }, // 1042446822
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonBools, "FindJsonBools" }, // 3875494904
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber, "FindJsonNumber" }, // 3791093906
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers, "FindJsonNumbers" }, // 1085996469
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonString, "FindJsonString" }, // 2154087574
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings, "FindJsonStrings" }, // 3299223606
		{ &Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID, "GetDevSteamID" }, // 814917784
		{ &Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID, "GetProjectAppID" }, // 432351547
		{ &Z_Construct_UFunction_USteamWebUtilities_GetProjectKey, "GetProjectKey" }, // 1597332643
		{ &Z_Construct_UFunction_USteamWebUtilities_ParseJson, "ParseJson" }, // 3750779247
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamWebUtilities_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Steam Utilities Class\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamCoreWeb/SteamWebUtilities.h" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebUtilities.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Steam Utilities Class\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamWebUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamWebUtilities>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamWebUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamWebUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamWebUtilities()
	{
		if (!Z_Registration_Info_UClass_USteamWebUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamWebUtilities.OuterSingleton, Z_Construct_UClass_USteamWebUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamWebUtilities.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamWebUtilities>()
	{
		return USteamWebUtilities::StaticClass();
	}
	USteamWebUtilities::USteamWebUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamWebUtilities);
	USteamWebUtilities::~USteamWebUtilities() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamWebUtilities, USteamWebUtilities::StaticClass, TEXT("USteamWebUtilities"), &Z_Registration_Info_UClass_USteamWebUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamWebUtilities), 2815367393U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_299822852(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
