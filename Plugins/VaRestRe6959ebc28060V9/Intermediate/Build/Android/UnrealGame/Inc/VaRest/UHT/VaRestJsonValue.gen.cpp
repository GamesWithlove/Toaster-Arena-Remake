// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRestJsonValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeVaRestJsonValue() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_VaRest();
VAREST_API UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister();
VAREST_API UClass* Z_Construct_UClass_UVaRestJsonValue();
VAREST_API UClass* Z_Construct_UClass_UVaRestJsonValue_NoRegister();
VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaJson();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVaJson *******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVaJson;
static UEnum* EVaJson_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVaJson.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVaJson.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VaRest_EVaJson, (UObject*)Z_Construct_UPackage__Script_VaRest(), TEXT("EVaJson"));
	}
	return Z_Registration_Info_UEnum_EVaJson.OuterSingleton;
}
template<> VAREST_NON_ATTRIBUTED_API UEnum* StaticEnum<EVaJson>()
{
	return EVaJson_StaticEnum();
}
struct Z_Construct_UEnum_VaRest_EVaJson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Array.Name", "EVaJson::Array" },
		{ "BlueprintType", "true" },
		{ "Boolean.Name", "EVaJson::Boolean" },
		{ "Comment", "/**\n * Represents all the types a Json Value can be.\n */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "None.Name", "EVaJson::None" },
		{ "Null.Name", "EVaJson::Null" },
		{ "Number.Name", "EVaJson::Number" },
		{ "Object.Name", "EVaJson::Object" },
		{ "String.Name", "EVaJson::String" },
		{ "ToolTip", "Represents all the types a Json Value can be." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVaJson::None", (int64)EVaJson::None },
		{ "EVaJson::Null", (int64)EVaJson::Null },
		{ "EVaJson::String", (int64)EVaJson::String },
		{ "EVaJson::Number", (int64)EVaJson::Number },
		{ "EVaJson::Boolean", (int64)EVaJson::Boolean },
		{ "EVaJson::Array", (int64)EVaJson::Array },
		{ "EVaJson::Object", (int64)EVaJson::Object },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_VaRest_EVaJson_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VaRest_EVaJson_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VaRest,
	nullptr,
	"EVaJson",
	"EVaJson",
	Z_Construct_UEnum_VaRest_EVaJson_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VaRest_EVaJson_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VaRest_EVaJson_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VaRest_EVaJson_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VaRest_EVaJson()
{
	if (!Z_Registration_Info_UEnum_EVaJson.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVaJson.InnerSingleton, Z_Construct_UEnum_VaRest_EVaJson_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVaJson.InnerSingleton;
}
// ********** End Enum EVaJson *********************************************************************

// ********** Begin Class UVaRestJsonValue Function AsArray ****************************************
struct Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics
{
	struct VaRestJsonValue_eventAsArray_Parms
	{
		TArray<UVaRestJsonValue*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as an array, throwing an error if this is not an Json Array */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as an array, throwing an error if this is not an Json Array" },
	};
#endif // WITH_METADATA

// ********** Begin Function AsArray constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AsArray constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AsArray Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::PropPointers) < 2048);
// ********** End Function AsArray Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsArray", 	Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::VaRestJsonValue_eventAsArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::VaRestJsonValue_eventAsArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestJsonValue::execAsArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UVaRestJsonValue*>*)Z_Param__Result=P_THIS->AsArray();
	P_NATIVE_END;
}
// ********** End Class UVaRestJsonValue Function AsArray ******************************************

// ********** Begin Class UVaRestJsonValue Function AsBool *****************************************
struct Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics
{
	struct VaRestJsonValue_eventAsBool_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as a boolean, throwing an error if this is not an Json Bool */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a boolean, throwing an error if this is not an Json Bool" },
	};
#endif // WITH_METADATA

// ********** Begin Function AsBool constinit property declarations ********************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AsBool constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AsBool Property Definitions *******************************************
void Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VaRestJsonValue_eventAsBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VaRestJsonValue_eventAsBool_Parms), &Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::PropPointers) < 2048);
// ********** End Function AsBool Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsBool", 	Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::VaRestJsonValue_eventAsBool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::VaRestJsonValue_eventAsBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestJsonValue::execAsBool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AsBool();
	P_NATIVE_END;
}
// ********** End Class UVaRestJsonValue Function AsBool *******************************************

// ********** Begin Class UVaRestJsonValue Function AsInt32 ****************************************
struct Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics
{
	struct VaRestJsonValue_eventAsInt32_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as a int32, throwing an error if this is not an Json Number */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a int32, throwing an error if this is not an Json Number" },
	};
#endif // WITH_METADATA

// ********** Begin Function AsInt32 constinit property declarations *******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AsInt32 constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AsInt32 Property Definitions ******************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsInt32_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::PropPointers) < 2048);
// ********** End Function AsInt32 Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsInt32", 	Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::VaRestJsonValue_eventAsInt32_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::VaRestJsonValue_eventAsInt32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsInt32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestJsonValue::execAsInt32)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AsInt32();
	P_NATIVE_END;
}
// ********** End Class UVaRestJsonValue Function AsInt32 ******************************************

// ********** Begin Class UVaRestJsonValue Function AsInt64 ****************************************
struct Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics
{
	struct VaRestJsonValue_eventAsInt64_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as a int64, throwing an error if this is not an Json Number */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a int64, throwing an error if this is not an Json Number" },
	};
#endif // WITH_METADATA

// ********** Begin Function AsInt64 constinit property declarations *******************************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AsInt64 constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AsInt64 Property Definitions ******************************************
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsInt64_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::PropPointers) < 2048);
// ********** End Function AsInt64 Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsInt64", 	Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::VaRestJsonValue_eventAsInt64_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::VaRestJsonValue_eventAsInt64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsInt64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestJsonValue::execAsInt64)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->AsInt64();
	P_NATIVE_END;
}
// ********** End Class UVaRestJsonValue Function AsInt64 ******************************************

// ********** Begin Class UVaRestJsonValue Function AsNumber ***************************************
struct Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics
{
	struct VaRestJsonValue_eventAsNumber_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as a double, throwing an error if this is not an Json Number\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a double, throwing an error if this is not an Json Number\nAttn.!! float used instead of double to make the function blueprintable!" },
	};
#endif // WITH_METADATA

// ********** Begin Function AsNumber constinit property declarations ******************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AsNumber constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AsNumber Property Definitions *****************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::PropPointers) < 2048);
// ********** End Function AsNumber Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsNumber", 	Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::VaRestJsonValue_eventAsNumber_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::VaRestJsonValue_eventAsNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestJsonValue::execAsNumber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->AsNumber();
	P_NATIVE_END;
}
// ********** End Class UVaRestJsonValue Function AsNumber *****************************************

// ********** Begin Class UVaRestJsonValue Function AsObject ***************************************
struct Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics
{
	struct VaRestJsonValue_eventAsObject_Parms
	{
		UVaRestJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as an object, throwing an error if this is not an Json Object */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as an object, throwing an error if this is not an Json Object" },
	};
#endif // WITH_METADATA

// ********** Begin Function AsObject constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AsObject constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AsObject Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::PropPointers) < 2048);
// ********** End Function AsObject Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsObject", 	Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::VaRestJsonValue_eventAsObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::VaRestJsonValue_eventAsObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestJsonValue::execAsObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVaRestJsonObject**)Z_Param__Result=P_THIS->AsObject();
	P_NATIVE_END;
}
// ********** End Class UVaRestJsonValue Function AsObject *****************************************

// ********** Begin Class UVaRestJsonValue Function AsString ***************************************
struct Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics
{
	struct VaRestJsonValue_eventAsString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as a string, throwing an error if this is not an Json String */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a string, throwing an error if this is not an Json String" },
	};
#endif // WITH_METADATA

// ********** Begin Function AsString constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AsString constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AsString Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::PropPointers) < 2048);
// ********** End Function AsString Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsString", 	Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::VaRestJsonValue_eventAsString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::VaRestJsonValue_eventAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestJsonValue::execAsString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->AsString();
	P_NATIVE_END;
}
// ********** End Class UVaRestJsonValue Function AsString *****************************************

// ********** Begin Class UVaRestJsonValue Function GetType ****************************************
struct Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics
{
	struct VaRestJsonValue_eventGetType_Parms
	{
		EVaJson ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get type of Json value (Enum) */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Get type of Json value (Enum)" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetType constinit property declarations *******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetType constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetType Property Definitions ******************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestJsonValue_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_VaRest_EVaJson, METADATA_PARAMS(0, nullptr) }; // 993368801
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::PropPointers) < 2048);
// ********** End Function GetType Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "GetType", 	Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::VaRestJsonValue_eventGetType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::VaRestJsonValue_eventGetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestJsonValue_GetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestJsonValue::execGetType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EVaJson*)Z_Param__Result=P_THIS->GetType();
	P_NATIVE_END;
}
// ********** End Class UVaRestJsonValue Function GetType ******************************************

// ********** Begin Class UVaRestJsonValue Function GetTypeString **********************************
struct Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics
{
	struct VaRestJsonValue_eventGetTypeString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get type of Json value (String) */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Get type of Json value (String)" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTypeString constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTypeString constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTypeString Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestJsonValue_eventGetTypeString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::PropPointers) < 2048);
// ********** End Function GetTypeString Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "GetTypeString", 	Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::VaRestJsonValue_eventGetTypeString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::VaRestJsonValue_eventGetTypeString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestJsonValue_GetTypeString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestJsonValue::execGetTypeString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetTypeString();
	P_NATIVE_END;
}
// ********** End Class UVaRestJsonValue Function GetTypeString ************************************

// ********** Begin Class UVaRestJsonValue Function IsNull *****************************************
struct Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics
{
	struct VaRestJsonValue_eventIsNull_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns true if this value is a 'null' */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns true if this value is a 'null'" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsNull constinit property declarations ********************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsNull constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsNull Property Definitions *******************************************
void Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VaRestJsonValue_eventIsNull_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VaRestJsonValue_eventIsNull_Parms), &Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::PropPointers) < 2048);
// ********** End Function IsNull Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "IsNull", 	Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::VaRestJsonValue_eventIsNull_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::VaRestJsonValue_eventIsNull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestJsonValue_IsNull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestJsonValue::execIsNull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsNull();
	P_NATIVE_END;
}
// ********** End Class UVaRestJsonValue Function IsNull *******************************************

// ********** Begin Class UVaRestJsonValue Function Reset ******************************************
struct Z_Construct_UFunction_UVaRestJsonValue_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Reset all internal data */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Reset all internal data" },
	};
#endif // WITH_METADATA

// ********** Begin Function Reset constinit property declarations *********************************
// ********** End Function Reset constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_Reset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "Reset", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_Reset_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVaRestJsonValue_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestJsonValue::execReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reset();
	P_NATIVE_END;
}
// ********** End Class UVaRestJsonValue Function Reset ********************************************

// ********** Begin Class UVaRestJsonValue *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UVaRestJsonValue;
UClass* UVaRestJsonValue::GetPrivateStaticClass()
{
	using TClass = UVaRestJsonValue;
	if (!Z_Registration_Info_UClass_UVaRestJsonValue.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("VaRestJsonValue"),
			Z_Registration_Info_UClass_UVaRestJsonValue.InnerSingleton,
			StaticRegisterNativesUVaRestJsonValue,
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
	return Z_Registration_Info_UClass_UVaRestJsonValue.InnerSingleton;
}
UClass* Z_Construct_UClass_UVaRestJsonValue_NoRegister()
{
	return UVaRestJsonValue::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVaRestJsonValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprintable FJsonValue wrapper\n */" },
		{ "IncludePath", "VaRestJsonValue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Blueprintable FJsonValue wrapper" },
	};
#endif // WITH_METADATA

// ********** Begin Class UVaRestJsonValue constinit property declarations *************************
// ********** End Class UVaRestJsonValue constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AsArray"), .Pointer = &UVaRestJsonValue::execAsArray },
		{ .NameUTF8 = UTF8TEXT("AsBool"), .Pointer = &UVaRestJsonValue::execAsBool },
		{ .NameUTF8 = UTF8TEXT("AsInt32"), .Pointer = &UVaRestJsonValue::execAsInt32 },
		{ .NameUTF8 = UTF8TEXT("AsInt64"), .Pointer = &UVaRestJsonValue::execAsInt64 },
		{ .NameUTF8 = UTF8TEXT("AsNumber"), .Pointer = &UVaRestJsonValue::execAsNumber },
		{ .NameUTF8 = UTF8TEXT("AsObject"), .Pointer = &UVaRestJsonValue::execAsObject },
		{ .NameUTF8 = UTF8TEXT("AsString"), .Pointer = &UVaRestJsonValue::execAsString },
		{ .NameUTF8 = UTF8TEXT("GetType"), .Pointer = &UVaRestJsonValue::execGetType },
		{ .NameUTF8 = UTF8TEXT("GetTypeString"), .Pointer = &UVaRestJsonValue::execGetTypeString },
		{ .NameUTF8 = UTF8TEXT("IsNull"), .Pointer = &UVaRestJsonValue::execIsNull },
		{ .NameUTF8 = UTF8TEXT("Reset"), .Pointer = &UVaRestJsonValue::execReset },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsArray, "AsArray" }, // 4256747538
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsBool, "AsBool" }, // 743912626
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsInt32, "AsInt32" }, // 128030776
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsInt64, "AsInt64" }, // 433256642
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsNumber, "AsNumber" }, // 465103298
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsObject, "AsObject" }, // 15802583
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsString, "AsString" }, // 2964031960
		{ &Z_Construct_UFunction_UVaRestJsonValue_GetType, "GetType" }, // 1989570099
		{ &Z_Construct_UFunction_UVaRestJsonValue_GetTypeString, "GetTypeString" }, // 3393594373
		{ &Z_Construct_UFunction_UVaRestJsonValue_IsNull, "IsNull" }, // 1029426741
		{ &Z_Construct_UFunction_UVaRestJsonValue_Reset, "Reset" }, // 329507164
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestJsonValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UVaRestJsonValue_Statics
UObject* (*const Z_Construct_UClass_UVaRestJsonValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestJsonValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVaRestJsonValue_Statics::ClassParams = {
	&UVaRestJsonValue::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestJsonValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UVaRestJsonValue_Statics::Class_MetaDataParams)
};
void UVaRestJsonValue::StaticRegisterNativesUVaRestJsonValue()
{
	UClass* Class = UVaRestJsonValue::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UVaRestJsonValue_Statics::Funcs));
}
UClass* Z_Construct_UClass_UVaRestJsonValue()
{
	if (!Z_Registration_Info_UClass_UVaRestJsonValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVaRestJsonValue.OuterSingleton, Z_Construct_UClass_UVaRestJsonValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVaRestJsonValue.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UVaRestJsonValue);
UVaRestJsonValue::~UVaRestJsonValue() {}
// ********** End Class UVaRestJsonValue ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h__Script_VaRest_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVaJson_StaticEnum, TEXT("EVaJson"), &Z_Registration_Info_UEnum_EVaJson, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 993368801U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVaRestJsonValue, UVaRestJsonValue::StaticClass, TEXT("UVaRestJsonValue"), &Z_Registration_Info_UClass_UVaRestJsonValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVaRestJsonValue), 1512316174U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h__Script_VaRest_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h__Script_VaRest_2953459486{
	TEXT("/Script/VaRest"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h__Script_VaRest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h__Script_VaRest_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h__Script_VaRest_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h__Script_VaRest_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
