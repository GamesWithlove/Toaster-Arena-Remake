// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRestLibrary.h"
#include "VaRestTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeVaRestLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_VaRest();
VAREST_API UClass* Z_Construct_UClass_UVaRestLibrary();
VAREST_API UClass* Z_Construct_UClass_UVaRestLibrary_NoRegister();
VAREST_API UClass* Z_Construct_UClass_UVaRestSettings_NoRegister();
VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestHttpStatusCode();
VAREST_API UScriptStruct* Z_Construct_UScriptStruct_FVaRestURL();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVaRestLibrary Function Base64Decode *************************************
struct Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics
{
	struct VaRestLibrary_eventBase64Decode_Parms
	{
		FString Source;
		FString Dest;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Decodes a Base64 string into a FString\n\x09 *\n\x09 * @param Source\x09The stringified data to convert\n\x09 * @param Dest\x09\x09The out buffer that will be filled with the decoded data\n\x09 * @return\x09\x09\x09True if the buffer was decoded, false if it failed to decode\n\x09 */" },
#endif
		{ "DisplayName", "Base64 Decode" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decodes a Base64 string into a FString\n\n@param Source        The stringified data to convert\n@param Dest          The out buffer that will be filled with the decoded data\n@return                      True if the buffer was decoded, false if it failed to decode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Base64Decode constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Dest;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Base64Decode constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Base64Decode Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventBase64Decode_Parms, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventBase64Decode_Parms, Dest), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VaRestLibrary_eventBase64Decode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VaRestLibrary_eventBase64Decode_Parms), &Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_Dest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::PropPointers) < 2048);
// ********** End Function Base64Decode Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "Base64Decode", 	Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::VaRestLibrary_eventBase64Decode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::VaRestLibrary_eventBase64Decode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64Decode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_Base64Decode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestLibrary::execBase64Decode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Source);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Dest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVaRestLibrary::Base64Decode(Z_Param_Source,Z_Param_Out_Dest);
	P_NATIVE_END;
}
// ********** End Class UVaRestLibrary Function Base64Decode ***************************************

// ********** Begin Class UVaRestLibrary Function Base64DecodeData *********************************
struct Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics
{
	struct VaRestLibrary_eventBase64DecodeData_Parms
	{
		FString Source;
		TArray<uint8> Dest;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Decodes a Base64 string into a byte array\n\x09 *\n\x09 * @param Source\x09The stringified data to convert\n\x09 * @param Dest\x09\x09The out buffer that will be filled with the decoded data\n\x09 * @return\x09\x09\x09True if the buffer was decoded, false if it failed to decode\n\x09 */" },
#endif
		{ "DisplayName", "Base64 Decode Data" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decodes a Base64 string into a byte array\n\n@param Source        The stringified data to convert\n@param Dest          The out buffer that will be filled with the decoded data\n@return                      True if the buffer was decoded, false if it failed to decode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Base64DecodeData constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Dest_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Dest;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Base64DecodeData constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Base64DecodeData Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventBase64DecodeData_Parms, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Dest_Inner = { "Dest", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventBase64DecodeData_Parms, Dest), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VaRestLibrary_eventBase64DecodeData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VaRestLibrary_eventBase64DecodeData_Parms), &Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Dest_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_Dest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::PropPointers) < 2048);
// ********** End Function Base64DecodeData Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "Base64DecodeData", 	Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::VaRestLibrary_eventBase64DecodeData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::VaRestLibrary_eventBase64DecodeData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestLibrary::execBase64DecodeData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Source);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Dest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVaRestLibrary::Base64DecodeData(Z_Param_Source,Z_Param_Out_Dest);
	P_NATIVE_END;
}
// ********** End Class UVaRestLibrary Function Base64DecodeData ***********************************

// ********** Begin Class UVaRestLibrary Function Base64Encode *************************************
struct Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics
{
	struct VaRestLibrary_eventBase64Encode_Parms
	{
		FString Source;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Encodes a FString into a Base64 string\n\x09 *\n\x09 * @param Source\x09The string data to convert\n\x09 * @return\x09\x09\x09""A string that encodes the binary data in a way that can be safely transmitted via various Internet protocols\n\x09 */" },
#endif
		{ "DisplayName", "Base64 Encode" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Encodes a FString into a Base64 string\n\n@param Source        The string data to convert\n@return                      A string that encodes the binary data in a way that can be safely transmitted via various Internet protocols" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Base64Encode constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Base64Encode constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Base64Encode Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventBase64Encode_Parms, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventBase64Encode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::PropPointers) < 2048);
// ********** End Function Base64Encode Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "Base64Encode", 	Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::VaRestLibrary_eventBase64Encode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::VaRestLibrary_eventBase64Encode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64Encode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_Base64Encode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestLibrary::execBase64Encode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UVaRestLibrary::Base64Encode(Z_Param_Source);
	P_NATIVE_END;
}
// ********** End Class UVaRestLibrary Function Base64Encode ***************************************

// ********** Begin Class UVaRestLibrary Function Base64EncodeData *********************************
struct Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics
{
	struct VaRestLibrary_eventBase64EncodeData_Parms
	{
		TArray<uint8> Data;
		FString Dest;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Encodes a byte array into a Base64 string\n\x09 *\n\x09 * @param Dara\x09\x09The data to convert\n\x09 * @return\x09\x09\x09""A string that encodes the binary data in a way that can be safely transmitted via various Internet protocols\n\x09 */" },
#endif
		{ "DisplayName", "Base64 Encode Data" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Encodes a byte array into a Base64 string\n\n@param Dara          The data to convert\n@return                      A string that encodes the binary data in a way that can be safely transmitted via various Internet protocols" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Base64EncodeData constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Dest;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Base64EncodeData constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Base64EncodeData Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventBase64EncodeData_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventBase64EncodeData_Parms, Dest), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VaRestLibrary_eventBase64EncodeData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VaRestLibrary_eventBase64EncodeData_Parms), &Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_Dest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::PropPointers) < 2048);
// ********** End Function Base64EncodeData Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "Base64EncodeData", 	Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::VaRestLibrary_eventBase64EncodeData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::VaRestLibrary_eventBase64EncodeData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestLibrary::execBase64EncodeData)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Dest);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVaRestLibrary::Base64EncodeData(Z_Param_Out_Data,Z_Param_Out_Dest);
	P_NATIVE_END;
}
// ********** End Class UVaRestLibrary Function Base64EncodeData ***********************************

// ********** Begin Class UVaRestLibrary Function GetVaRestSettings ********************************
struct Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics
{
	struct VaRestLibrary_eventGetVaRestSettings_Parms
	{
		UVaRestSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Common" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Direct access to the plugin settings */" },
#endif
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direct access to the plugin settings" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetVaRestSettings constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVaRestSettings constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVaRestSettings Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventGetVaRestSettings_Parms, ReturnValue), Z_Construct_UClass_UVaRestSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::PropPointers) < 2048);
// ********** End Function GetVaRestSettings Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "GetVaRestSettings", 	Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::VaRestLibrary_eventGetVaRestSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::VaRestLibrary_eventGetVaRestSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestLibrary::execGetVaRestSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVaRestSettings**)Z_Param__Result=UVaRestLibrary::GetVaRestSettings();
	P_NATIVE_END;
}
// ********** End Class UVaRestLibrary Function GetVaRestSettings **********************************

// ********** Begin Class UVaRestLibrary Function GetVaRestVersion *********************************
struct Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics
{
	struct VaRestLibrary_eventGetVaRestVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the plugin's version\n\x09 */" },
#endif
		{ "DisplayName", "Get VaRest Version" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the plugin's version" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetVaRestVersion constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVaRestVersion constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVaRestVersion Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventGetVaRestVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::PropPointers) < 2048);
// ********** End Function GetVaRestVersion Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "GetVaRestVersion", 	Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::VaRestLibrary_eventGetVaRestVersion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::VaRestLibrary_eventGetVaRestVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestLibrary::execGetVaRestVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UVaRestLibrary::GetVaRestVersion();
	P_NATIVE_END;
}
// ********** End Class UVaRestLibrary Function GetVaRestVersion ***********************************

// ********** Begin Class UVaRestLibrary Function GetWorldURL **************************************
struct Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics
{
	struct VaRestLibrary_eventGetWorldURL_Parms
	{
		UObject* WorldContextObject;
		FVaRestURL ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the URL that was used when loading this World\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the URL that was used when loading this World" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWorldURL constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWorldURL constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWorldURL Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventGetWorldURL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventGetWorldURL_Parms, ReturnValue), Z_Construct_UScriptStruct_FVaRestURL, METADATA_PARAMS(0, nullptr) }; // 3318765552
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::PropPointers) < 2048);
// ********** End Function GetWorldURL Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "GetWorldURL", 	Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::VaRestLibrary_eventGetWorldURL_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::VaRestLibrary_eventGetWorldURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestLibrary_GetWorldURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_GetWorldURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestLibrary::execGetWorldURL)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVaRestURL*)Z_Param__Result=UVaRestLibrary::GetWorldURL(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UVaRestLibrary Function GetWorldURL ****************************************

// ********** Begin Class UVaRestLibrary Function HTTPStatusIntToEnum ******************************
struct Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics
{
	struct VaRestLibrary_eventHTTPStatusIntToEnum_Parms
	{
		int32 StatusCode;
		TEnumAsByte<EVaRestHttpStatusCode::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Helper method to convert a status code from HTTP to an enum for easier readability\n\x09 */" },
#endif
		{ "DisplayName", "HTTP Status Int To Enum" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper method to convert a status code from HTTP to an enum for easier readability" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HTTPStatusIntToEnum constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_StatusCode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HTTPStatusIntToEnum constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HTTPStatusIntToEnum Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventHTTPStatusIntToEnum_Parms, StatusCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventHTTPStatusIntToEnum_Parms, ReturnValue), Z_Construct_UEnum_VaRest_EVaRestHttpStatusCode, METADATA_PARAMS(0, nullptr) }; // 361029757
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::NewProp_StatusCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::PropPointers) < 2048);
// ********** End Function HTTPStatusIntToEnum Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "HTTPStatusIntToEnum", 	Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::VaRestLibrary_eventHTTPStatusIntToEnum_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::VaRestLibrary_eventHTTPStatusIntToEnum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestLibrary::execHTTPStatusIntToEnum)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StatusCode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EVaRestHttpStatusCode::Type>*)Z_Param__Result=UVaRestLibrary::HTTPStatusIntToEnum(Z_Param_StatusCode);
	P_NATIVE_END;
}
// ********** End Class UVaRestLibrary Function HTTPStatusIntToEnum ********************************

// ********** Begin Class UVaRestLibrary Function PercentEncode ************************************
struct Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics
{
	struct VaRestLibrary_eventPercentEncode_Parms
	{
		FString Source;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applies percent-encoding to text */" },
#endif
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies percent-encoding to text" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PercentEncode constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PercentEncode constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PercentEncode Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventPercentEncode_Parms, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventPercentEncode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::PropPointers) < 2048);
// ********** End Function PercentEncode Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "PercentEncode", 	Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::VaRestLibrary_eventPercentEncode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::VaRestLibrary_eventPercentEncode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestLibrary_PercentEncode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_PercentEncode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestLibrary::execPercentEncode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UVaRestLibrary::PercentEncode(Z_Param_Source);
	P_NATIVE_END;
}
// ********** End Class UVaRestLibrary Function PercentEncode **************************************

// ********** Begin Class UVaRestLibrary Function StringToMd5 **************************************
struct Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics
{
	struct VaRestLibrary_eventStringToMd5_Parms
	{
		FString StringToHash;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Helper to perform the very common case of hashing an ASCII string into a hex representation.\n\x09 *\n\x09 * @param String\x09Hex representation of the hash (32 lower-case hex digits)\n\x09 */" },
#endif
		{ "DisplayName", "String to MD5" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper to perform the very common case of hashing an ASCII string into a hex representation.\n\n@param String        Hex representation of the hash (32 lower-case hex digits)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringToHash_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StringToMd5 constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringToHash;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StringToMd5 constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StringToMd5 Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::NewProp_StringToHash = { "StringToHash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventStringToMd5_Parms, StringToHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringToHash_MetaData), NewProp_StringToHash_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventStringToMd5_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::NewProp_StringToHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::PropPointers) < 2048);
// ********** End Function StringToMd5 Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "StringToMd5", 	Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::VaRestLibrary_eventStringToMd5_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::VaRestLibrary_eventStringToMd5_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestLibrary_StringToMd5()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_StringToMd5_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestLibrary::execStringToMd5)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StringToHash);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UVaRestLibrary::StringToMd5(Z_Param_StringToHash);
	P_NATIVE_END;
}
// ********** End Class UVaRestLibrary Function StringToMd5 ****************************************

// ********** Begin Class UVaRestLibrary Function StringToSha1 *************************************
struct Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics
{
	struct VaRestLibrary_eventStringToSha1_Parms
	{
		FString StringToHash;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Helper to perform the SHA1 hash operation on string.\n\x09 */" },
#endif
		{ "DisplayName", "String to SHA1" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper to perform the SHA1 hash operation on string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringToHash_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StringToSha1 constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringToHash;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StringToSha1 constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StringToSha1 Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::NewProp_StringToHash = { "StringToHash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventStringToSha1_Parms, StringToHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringToHash_MetaData), NewProp_StringToHash_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestLibrary_eventStringToSha1_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::NewProp_StringToHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::PropPointers) < 2048);
// ********** End Function StringToSha1 Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, nullptr, "StringToSha1", 	Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::VaRestLibrary_eventStringToSha1_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::VaRestLibrary_eventStringToSha1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestLibrary_StringToSha1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestLibrary_StringToSha1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestLibrary::execStringToSha1)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StringToHash);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UVaRestLibrary::StringToSha1(Z_Param_StringToHash);
	P_NATIVE_END;
}
// ********** End Class UVaRestLibrary Function StringToSha1 ***************************************

// ********** Begin Class UVaRestLibrary ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UVaRestLibrary;
UClass* UVaRestLibrary::GetPrivateStaticClass()
{
	using TClass = UVaRestLibrary;
	if (!Z_Registration_Info_UClass_UVaRestLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("VaRestLibrary"),
			Z_Registration_Info_UClass_UVaRestLibrary.InnerSingleton,
			StaticRegisterNativesUVaRestLibrary,
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
	return Z_Registration_Info_UClass_UVaRestLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UVaRestLibrary_NoRegister()
{
	return UVaRestLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVaRestLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Useful tools for REST communications\n */" },
#endif
		{ "IncludePath", "VaRestLibrary.h" },
		{ "ModuleRelativePath", "Public/VaRestLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Useful tools for REST communications" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UVaRestLibrary constinit property declarations ***************************
// ********** End Class UVaRestLibrary constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Base64Decode"), .Pointer = &UVaRestLibrary::execBase64Decode },
		{ .NameUTF8 = UTF8TEXT("Base64DecodeData"), .Pointer = &UVaRestLibrary::execBase64DecodeData },
		{ .NameUTF8 = UTF8TEXT("Base64Encode"), .Pointer = &UVaRestLibrary::execBase64Encode },
		{ .NameUTF8 = UTF8TEXT("Base64EncodeData"), .Pointer = &UVaRestLibrary::execBase64EncodeData },
		{ .NameUTF8 = UTF8TEXT("GetVaRestSettings"), .Pointer = &UVaRestLibrary::execGetVaRestSettings },
		{ .NameUTF8 = UTF8TEXT("GetVaRestVersion"), .Pointer = &UVaRestLibrary::execGetVaRestVersion },
		{ .NameUTF8 = UTF8TEXT("GetWorldURL"), .Pointer = &UVaRestLibrary::execGetWorldURL },
		{ .NameUTF8 = UTF8TEXT("HTTPStatusIntToEnum"), .Pointer = &UVaRestLibrary::execHTTPStatusIntToEnum },
		{ .NameUTF8 = UTF8TEXT("PercentEncode"), .Pointer = &UVaRestLibrary::execPercentEncode },
		{ .NameUTF8 = UTF8TEXT("StringToMd5"), .Pointer = &UVaRestLibrary::execStringToMd5 },
		{ .NameUTF8 = UTF8TEXT("StringToSha1"), .Pointer = &UVaRestLibrary::execStringToSha1 },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaRestLibrary_Base64Decode, "Base64Decode" }, // 4111955952
		{ &Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData, "Base64DecodeData" }, // 2797683113
		{ &Z_Construct_UFunction_UVaRestLibrary_Base64Encode, "Base64Encode" }, // 2537657584
		{ &Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData, "Base64EncodeData" }, // 1700653207
		{ &Z_Construct_UFunction_UVaRestLibrary_GetVaRestSettings, "GetVaRestSettings" }, // 2017719580
		{ &Z_Construct_UFunction_UVaRestLibrary_GetVaRestVersion, "GetVaRestVersion" }, // 3394947038
		{ &Z_Construct_UFunction_UVaRestLibrary_GetWorldURL, "GetWorldURL" }, // 920848488
		{ &Z_Construct_UFunction_UVaRestLibrary_HTTPStatusIntToEnum, "HTTPStatusIntToEnum" }, // 2037952768
		{ &Z_Construct_UFunction_UVaRestLibrary_PercentEncode, "PercentEncode" }, // 2564577229
		{ &Z_Construct_UFunction_UVaRestLibrary_StringToMd5, "StringToMd5" }, // 1427026591
		{ &Z_Construct_UFunction_UVaRestLibrary_StringToSha1, "StringToSha1" }, // 600945611
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UVaRestLibrary_Statics
UObject* (*const Z_Construct_UClass_UVaRestLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVaRestLibrary_Statics::ClassParams = {
	&UVaRestLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVaRestLibrary_Statics::Class_MetaDataParams)
};
void UVaRestLibrary::StaticRegisterNativesUVaRestLibrary()
{
	UClass* Class = UVaRestLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UVaRestLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UVaRestLibrary()
{
	if (!Z_Registration_Info_UClass_UVaRestLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVaRestLibrary.OuterSingleton, Z_Construct_UClass_UVaRestLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVaRestLibrary.OuterSingleton;
}
UVaRestLibrary::UVaRestLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UVaRestLibrary);
UVaRestLibrary::~UVaRestLibrary() {}
// ********** End Class UVaRestLibrary *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestLibrary_h__Script_VaRest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVaRestLibrary, UVaRestLibrary::StaticClass, TEXT("UVaRestLibrary"), &Z_Registration_Info_UClass_UVaRestLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVaRestLibrary), 2541128762U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestLibrary_h__Script_VaRest_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestLibrary_h__Script_VaRest_1088904215{
	TEXT("/Script/VaRest"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestLibrary_h__Script_VaRest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestLibrary_h__Script_VaRest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
