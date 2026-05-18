// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplayDataObject.h"
#include "ReplayStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeReplayDataObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UReplayDataObject();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UReplayDataObject_NoRegister();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayBoolData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayByteData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayFloatData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayInt64Data();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayIntData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayNameData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayRotatorData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayStringData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayTextData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayTransformData();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayVectorData();
UPackage* Z_Construct_UPackage__Script_ReplaySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UReplayDataObject Function AddBooleanData ********************************
struct Z_Construct_UFunction_UReplayDataObject_AddBooleanData_Statics
{
	struct ReplayDataObject_eventAddBooleanData_Parms
	{
		FString Name;
		bool Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds or updates data of the specified type (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds or updates data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddBooleanData constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_Data_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddBooleanData constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddBooleanData Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_AddBooleanData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddBooleanData_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReplayDataObject_AddBooleanData_Statics::NewProp_Data_SetBit(void* Obj)
{
	((ReplayDataObject_eventAddBooleanData_Parms*)Obj)->Data = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReplayDataObject_AddBooleanData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReplayDataObject_eventAddBooleanData_Parms), &Z_Construct_UFunction_UReplayDataObject_AddBooleanData_Statics::NewProp_Data_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_AddBooleanData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddBooleanData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddBooleanData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddBooleanData_Statics::PropPointers) < 2048);
// ********** End Function AddBooleanData Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_AddBooleanData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "AddBooleanData", 	Z_Construct_UFunction_UReplayDataObject_AddBooleanData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddBooleanData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_AddBooleanData_Statics::ReplayDataObject_eventAddBooleanData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddBooleanData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_AddBooleanData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_AddBooleanData_Statics::ReplayDataObject_eventAddBooleanData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_AddBooleanData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_AddBooleanData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execAddBooleanData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_UBOOL(Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBooleanData(Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function AddBooleanData **********************************

// ********** Begin Class UReplayDataObject Function AddByteData ***********************************
struct Z_Construct_UFunction_UReplayDataObject_AddByteData_Statics
{
	struct ReplayDataObject_eventAddByteData_Parms
	{
		FString Name;
		TArray<uint8> Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds or updates data of the specified type (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds or updates data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddByteData constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddByteData constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddByteData Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_AddByteData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddByteData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UReplayDataObject_AddByteData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UReplayDataObject_AddByteData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddByteData_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_AddByteData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddByteData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddByteData_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddByteData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddByteData_Statics::PropPointers) < 2048);
// ********** End Function AddByteData Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_AddByteData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "AddByteData", 	Z_Construct_UFunction_UReplayDataObject_AddByteData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddByteData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_AddByteData_Statics::ReplayDataObject_eventAddByteData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddByteData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_AddByteData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_AddByteData_Statics::ReplayDataObject_eventAddByteData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_AddByteData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_AddByteData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execAddByteData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_TARRAY(uint8,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddByteData(Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function AddByteData *************************************

// ********** Begin Class UReplayDataObject Function AddFloatData **********************************
struct Z_Construct_UFunction_UReplayDataObject_AddFloatData_Statics
{
	struct ReplayDataObject_eventAddFloatData_Parms
	{
		FString Name;
		float Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds or updates data of the specified type (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds or updates data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddFloatData constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFloatData constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFloatData Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_AddFloatData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddFloatData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReplayDataObject_AddFloatData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddFloatData_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_AddFloatData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddFloatData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddFloatData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddFloatData_Statics::PropPointers) < 2048);
// ********** End Function AddFloatData Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_AddFloatData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "AddFloatData", 	Z_Construct_UFunction_UReplayDataObject_AddFloatData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddFloatData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_AddFloatData_Statics::ReplayDataObject_eventAddFloatData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddFloatData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_AddFloatData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_AddFloatData_Statics::ReplayDataObject_eventAddFloatData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_AddFloatData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_AddFloatData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execAddFloatData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFloatData(Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function AddFloatData ************************************

// ********** Begin Class UReplayDataObject Function AddInteger64Data ******************************
struct Z_Construct_UFunction_UReplayDataObject_AddInteger64Data_Statics
{
	struct ReplayDataObject_eventAddInteger64Data_Parms
	{
		FString Name;
		int64 Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds or updates data of the specified type (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds or updates data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddInteger64Data constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddInteger64Data constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddInteger64Data Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_AddInteger64Data_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddInteger64Data_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UReplayDataObject_AddInteger64Data_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddInteger64Data_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_AddInteger64Data_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddInteger64Data_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddInteger64Data_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddInteger64Data_Statics::PropPointers) < 2048);
// ********** End Function AddInteger64Data Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_AddInteger64Data_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "AddInteger64Data", 	Z_Construct_UFunction_UReplayDataObject_AddInteger64Data_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddInteger64Data_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_AddInteger64Data_Statics::ReplayDataObject_eventAddInteger64Data_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddInteger64Data_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_AddInteger64Data_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_AddInteger64Data_Statics::ReplayDataObject_eventAddInteger64Data_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_AddInteger64Data()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_AddInteger64Data_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execAddInteger64Data)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FInt64Property,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddInteger64Data(Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function AddInteger64Data ********************************

// ********** Begin Class UReplayDataObject Function AddIntegerData ********************************
struct Z_Construct_UFunction_UReplayDataObject_AddIntegerData_Statics
{
	struct ReplayDataObject_eventAddIntegerData_Parms
	{
		FString Name;
		int32 Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds or updates data of the specified type (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds or updates data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddIntegerData constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddIntegerData constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddIntegerData Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_AddIntegerData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddIntegerData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplayDataObject_AddIntegerData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddIntegerData_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_AddIntegerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddIntegerData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddIntegerData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddIntegerData_Statics::PropPointers) < 2048);
// ********** End Function AddIntegerData Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_AddIntegerData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "AddIntegerData", 	Z_Construct_UFunction_UReplayDataObject_AddIntegerData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddIntegerData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_AddIntegerData_Statics::ReplayDataObject_eventAddIntegerData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddIntegerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_AddIntegerData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_AddIntegerData_Statics::ReplayDataObject_eventAddIntegerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_AddIntegerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_AddIntegerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execAddIntegerData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FIntProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddIntegerData(Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function AddIntegerData **********************************

// ********** Begin Class UReplayDataObject Function AddNameData ***********************************
struct Z_Construct_UFunction_UReplayDataObject_AddNameData_Statics
{
	struct ReplayDataObject_eventAddNameData_Parms
	{
		FString Name;
		FName Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds or updates data of the specified type (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds or updates data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddNameData constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddNameData constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddNameData Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_AddNameData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddNameData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UReplayDataObject_AddNameData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddNameData_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_AddNameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddNameData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddNameData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddNameData_Statics::PropPointers) < 2048);
// ********** End Function AddNameData Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_AddNameData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "AddNameData", 	Z_Construct_UFunction_UReplayDataObject_AddNameData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddNameData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_AddNameData_Statics::ReplayDataObject_eventAddNameData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddNameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_AddNameData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_AddNameData_Statics::ReplayDataObject_eventAddNameData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_AddNameData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_AddNameData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execAddNameData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FNameProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddNameData(Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function AddNameData *************************************

// ********** Begin Class UReplayDataObject Function AddRotatorData ********************************
struct Z_Construct_UFunction_UReplayDataObject_AddRotatorData_Statics
{
	struct ReplayDataObject_eventAddRotatorData_Parms
	{
		FString Name;
		FRotator Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds or updates data of the specified type (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds or updates data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddRotatorData constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRotatorData constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRotatorData Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_AddRotatorData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddRotatorData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReplayDataObject_AddRotatorData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddRotatorData_Parms, Data), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_AddRotatorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddRotatorData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddRotatorData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddRotatorData_Statics::PropPointers) < 2048);
// ********** End Function AddRotatorData Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_AddRotatorData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "AddRotatorData", 	Z_Construct_UFunction_UReplayDataObject_AddRotatorData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddRotatorData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_AddRotatorData_Statics::ReplayDataObject_eventAddRotatorData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddRotatorData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_AddRotatorData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_AddRotatorData_Statics::ReplayDataObject_eventAddRotatorData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_AddRotatorData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_AddRotatorData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execAddRotatorData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_STRUCT(FRotator,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddRotatorData(Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function AddRotatorData **********************************

// ********** Begin Class UReplayDataObject Function AddStringData *********************************
struct Z_Construct_UFunction_UReplayDataObject_AddStringData_Statics
{
	struct ReplayDataObject_eventAddStringData_Parms
	{
		FString Name;
		FString Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds or updates data of the specified type (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds or updates data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddStringData constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddStringData constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddStringData Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_AddStringData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddStringData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_AddStringData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddStringData_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_AddStringData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddStringData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddStringData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddStringData_Statics::PropPointers) < 2048);
// ********** End Function AddStringData Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_AddStringData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "AddStringData", 	Z_Construct_UFunction_UReplayDataObject_AddStringData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddStringData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_AddStringData_Statics::ReplayDataObject_eventAddStringData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddStringData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_AddStringData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_AddStringData_Statics::ReplayDataObject_eventAddStringData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_AddStringData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_AddStringData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execAddStringData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FStrProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStringData(Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function AddStringData ***********************************

// ********** Begin Class UReplayDataObject Function AddTextData ***********************************
struct Z_Construct_UFunction_UReplayDataObject_AddTextData_Statics
{
	struct ReplayDataObject_eventAddTextData_Parms
	{
		FString Name;
		FText Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds or updates data of the specified type (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds or updates data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddTextData constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddTextData constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddTextData Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_AddTextData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddTextData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UReplayDataObject_AddTextData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddTextData_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_AddTextData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddTextData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddTextData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddTextData_Statics::PropPointers) < 2048);
// ********** End Function AddTextData Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_AddTextData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "AddTextData", 	Z_Construct_UFunction_UReplayDataObject_AddTextData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddTextData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_AddTextData_Statics::ReplayDataObject_eventAddTextData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddTextData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_AddTextData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_AddTextData_Statics::ReplayDataObject_eventAddTextData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_AddTextData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_AddTextData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execAddTextData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FTextProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTextData(Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function AddTextData *************************************

// ********** Begin Class UReplayDataObject Function AddTransformData ******************************
struct Z_Construct_UFunction_UReplayDataObject_AddTransformData_Statics
{
	struct ReplayDataObject_eventAddTransformData_Parms
	{
		FString Name;
		FTransform Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds or updates data of the specified type (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds or updates data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddTransformData constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddTransformData constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddTransformData Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_AddTransformData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddTransformData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReplayDataObject_AddTransformData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddTransformData_Parms, Data), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_AddTransformData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddTransformData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddTransformData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddTransformData_Statics::PropPointers) < 2048);
// ********** End Function AddTransformData Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_AddTransformData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "AddTransformData", 	Z_Construct_UFunction_UReplayDataObject_AddTransformData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddTransformData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_AddTransformData_Statics::ReplayDataObject_eventAddTransformData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddTransformData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_AddTransformData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_AddTransformData_Statics::ReplayDataObject_eventAddTransformData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_AddTransformData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_AddTransformData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execAddTransformData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_STRUCT(FTransform,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTransformData(Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function AddTransformData ********************************

// ********** Begin Class UReplayDataObject Function AddVectorData *********************************
struct Z_Construct_UFunction_UReplayDataObject_AddVectorData_Statics
{
	struct ReplayDataObject_eventAddVectorData_Parms
	{
		FString Name;
		FVector Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds or updates data of the specified type (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds or updates data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddVectorData constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddVectorData constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddVectorData Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_AddVectorData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddVectorData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReplayDataObject_AddVectorData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventAddVectorData_Parms, Data), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_AddVectorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddVectorData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_AddVectorData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddVectorData_Statics::PropPointers) < 2048);
// ********** End Function AddVectorData Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_AddVectorData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "AddVectorData", 	Z_Construct_UFunction_UReplayDataObject_AddVectorData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddVectorData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_AddVectorData_Statics::ReplayDataObject_eventAddVectorData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_AddVectorData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_AddVectorData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_AddVectorData_Statics::ReplayDataObject_eventAddVectorData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_AddVectorData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_AddVectorData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execAddVectorData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_STRUCT(FVector,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddVectorData(Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function AddVectorData ***********************************

// ********** Begin Class UReplayDataObject Function DoesBooleanDataExist **************************
struct Z_Construct_UFunction_UReplayDataObject_DoesBooleanDataExist_Statics
{
	struct ReplayDataObject_eventDoesBooleanDataExist_Parms
	{
		FString Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesBooleanDataExist constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesBooleanDataExist constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesBooleanDataExist Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesBooleanDataExist_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesBooleanDataExist_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesBooleanDataExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesBooleanDataExist_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_DoesBooleanDataExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesBooleanDataExist_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesBooleanDataExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesBooleanDataExist_Statics::PropPointers) < 2048);
// ********** End Function DoesBooleanDataExist Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_DoesBooleanDataExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "DoesBooleanDataExist", 	Z_Construct_UFunction_UReplayDataObject_DoesBooleanDataExist_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesBooleanDataExist_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_DoesBooleanDataExist_Statics::ReplayDataObject_eventDoesBooleanDataExist_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesBooleanDataExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_DoesBooleanDataExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_DoesBooleanDataExist_Statics::ReplayDataObject_eventDoesBooleanDataExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_DoesBooleanDataExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_DoesBooleanDataExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execDoesBooleanDataExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->DoesBooleanDataExist(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function DoesBooleanDataExist ****************************

// ********** Begin Class UReplayDataObject Function DoesByteDataExist *****************************
struct Z_Construct_UFunction_UReplayDataObject_DoesByteDataExist_Statics
{
	struct ReplayDataObject_eventDoesByteDataExist_Parms
	{
		FString Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesByteDataExist constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesByteDataExist constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesByteDataExist Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesByteDataExist_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesByteDataExist_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesByteDataExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesByteDataExist_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_DoesByteDataExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesByteDataExist_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesByteDataExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesByteDataExist_Statics::PropPointers) < 2048);
// ********** End Function DoesByteDataExist Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_DoesByteDataExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "DoesByteDataExist", 	Z_Construct_UFunction_UReplayDataObject_DoesByteDataExist_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesByteDataExist_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_DoesByteDataExist_Statics::ReplayDataObject_eventDoesByteDataExist_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesByteDataExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_DoesByteDataExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_DoesByteDataExist_Statics::ReplayDataObject_eventDoesByteDataExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_DoesByteDataExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_DoesByteDataExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execDoesByteDataExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->DoesByteDataExist(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function DoesByteDataExist *******************************

// ********** Begin Class UReplayDataObject Function DoesFloatDataExist ****************************
struct Z_Construct_UFunction_UReplayDataObject_DoesFloatDataExist_Statics
{
	struct ReplayDataObject_eventDoesFloatDataExist_Parms
	{
		FString Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesFloatDataExist constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesFloatDataExist constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesFloatDataExist Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesFloatDataExist_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesFloatDataExist_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesFloatDataExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesFloatDataExist_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_DoesFloatDataExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesFloatDataExist_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesFloatDataExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesFloatDataExist_Statics::PropPointers) < 2048);
// ********** End Function DoesFloatDataExist Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_DoesFloatDataExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "DoesFloatDataExist", 	Z_Construct_UFunction_UReplayDataObject_DoesFloatDataExist_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesFloatDataExist_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_DoesFloatDataExist_Statics::ReplayDataObject_eventDoesFloatDataExist_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesFloatDataExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_DoesFloatDataExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_DoesFloatDataExist_Statics::ReplayDataObject_eventDoesFloatDataExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_DoesFloatDataExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_DoesFloatDataExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execDoesFloatDataExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->DoesFloatDataExist(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function DoesFloatDataExist ******************************

// ********** Begin Class UReplayDataObject Function DoesInteger64DataExist ************************
struct Z_Construct_UFunction_UReplayDataObject_DoesInteger64DataExist_Statics
{
	struct ReplayDataObject_eventDoesInteger64DataExist_Parms
	{
		FString Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesInteger64DataExist constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesInteger64DataExist constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesInteger64DataExist Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesInteger64DataExist_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesInteger64DataExist_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesInteger64DataExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesInteger64DataExist_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_DoesInteger64DataExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesInteger64DataExist_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesInteger64DataExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesInteger64DataExist_Statics::PropPointers) < 2048);
// ********** End Function DoesInteger64DataExist Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_DoesInteger64DataExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "DoesInteger64DataExist", 	Z_Construct_UFunction_UReplayDataObject_DoesInteger64DataExist_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesInteger64DataExist_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_DoesInteger64DataExist_Statics::ReplayDataObject_eventDoesInteger64DataExist_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesInteger64DataExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_DoesInteger64DataExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_DoesInteger64DataExist_Statics::ReplayDataObject_eventDoesInteger64DataExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_DoesInteger64DataExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_DoesInteger64DataExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execDoesInteger64DataExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->DoesInteger64DataExist(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function DoesInteger64DataExist **************************

// ********** Begin Class UReplayDataObject Function DoesIntegerDataExist **************************
struct Z_Construct_UFunction_UReplayDataObject_DoesIntegerDataExist_Statics
{
	struct ReplayDataObject_eventDoesIntegerDataExist_Parms
	{
		FString Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesIntegerDataExist constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesIntegerDataExist constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesIntegerDataExist Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesIntegerDataExist_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesIntegerDataExist_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesIntegerDataExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesIntegerDataExist_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_DoesIntegerDataExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesIntegerDataExist_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesIntegerDataExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesIntegerDataExist_Statics::PropPointers) < 2048);
// ********** End Function DoesIntegerDataExist Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_DoesIntegerDataExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "DoesIntegerDataExist", 	Z_Construct_UFunction_UReplayDataObject_DoesIntegerDataExist_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesIntegerDataExist_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_DoesIntegerDataExist_Statics::ReplayDataObject_eventDoesIntegerDataExist_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesIntegerDataExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_DoesIntegerDataExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_DoesIntegerDataExist_Statics::ReplayDataObject_eventDoesIntegerDataExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_DoesIntegerDataExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_DoesIntegerDataExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execDoesIntegerDataExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->DoesIntegerDataExist(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function DoesIntegerDataExist ****************************

// ********** Begin Class UReplayDataObject Function DoesNameDataExist *****************************
struct Z_Construct_UFunction_UReplayDataObject_DoesNameDataExist_Statics
{
	struct ReplayDataObject_eventDoesNameDataExist_Parms
	{
		FString Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesNameDataExist constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesNameDataExist constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesNameDataExist Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesNameDataExist_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesNameDataExist_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesNameDataExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesNameDataExist_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_DoesNameDataExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesNameDataExist_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesNameDataExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesNameDataExist_Statics::PropPointers) < 2048);
// ********** End Function DoesNameDataExist Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_DoesNameDataExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "DoesNameDataExist", 	Z_Construct_UFunction_UReplayDataObject_DoesNameDataExist_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesNameDataExist_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_DoesNameDataExist_Statics::ReplayDataObject_eventDoesNameDataExist_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesNameDataExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_DoesNameDataExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_DoesNameDataExist_Statics::ReplayDataObject_eventDoesNameDataExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_DoesNameDataExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_DoesNameDataExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execDoesNameDataExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->DoesNameDataExist(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function DoesNameDataExist *******************************

// ********** Begin Class UReplayDataObject Function DoesRotatorDataExist **************************
struct Z_Construct_UFunction_UReplayDataObject_DoesRotatorDataExist_Statics
{
	struct ReplayDataObject_eventDoesRotatorDataExist_Parms
	{
		FString Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesRotatorDataExist constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesRotatorDataExist constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesRotatorDataExist Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesRotatorDataExist_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesRotatorDataExist_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesRotatorDataExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesRotatorDataExist_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_DoesRotatorDataExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesRotatorDataExist_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesRotatorDataExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesRotatorDataExist_Statics::PropPointers) < 2048);
// ********** End Function DoesRotatorDataExist Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_DoesRotatorDataExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "DoesRotatorDataExist", 	Z_Construct_UFunction_UReplayDataObject_DoesRotatorDataExist_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesRotatorDataExist_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_DoesRotatorDataExist_Statics::ReplayDataObject_eventDoesRotatorDataExist_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesRotatorDataExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_DoesRotatorDataExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_DoesRotatorDataExist_Statics::ReplayDataObject_eventDoesRotatorDataExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_DoesRotatorDataExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_DoesRotatorDataExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execDoesRotatorDataExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->DoesRotatorDataExist(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function DoesRotatorDataExist ****************************

// ********** Begin Class UReplayDataObject Function DoesStringDataExist ***************************
struct Z_Construct_UFunction_UReplayDataObject_DoesStringDataExist_Statics
{
	struct ReplayDataObject_eventDoesStringDataExist_Parms
	{
		FString Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesStringDataExist constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesStringDataExist constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesStringDataExist Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesStringDataExist_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesStringDataExist_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesStringDataExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesStringDataExist_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_DoesStringDataExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesStringDataExist_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesStringDataExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesStringDataExist_Statics::PropPointers) < 2048);
// ********** End Function DoesStringDataExist Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_DoesStringDataExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "DoesStringDataExist", 	Z_Construct_UFunction_UReplayDataObject_DoesStringDataExist_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesStringDataExist_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_DoesStringDataExist_Statics::ReplayDataObject_eventDoesStringDataExist_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesStringDataExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_DoesStringDataExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_DoesStringDataExist_Statics::ReplayDataObject_eventDoesStringDataExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_DoesStringDataExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_DoesStringDataExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execDoesStringDataExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->DoesStringDataExist(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function DoesStringDataExist *****************************

// ********** Begin Class UReplayDataObject Function DoesTextDataExist *****************************
struct Z_Construct_UFunction_UReplayDataObject_DoesTextDataExist_Statics
{
	struct ReplayDataObject_eventDoesTextDataExist_Parms
	{
		FString Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesTextDataExist constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesTextDataExist constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesTextDataExist Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesTextDataExist_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesTextDataExist_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesTextDataExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesTextDataExist_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_DoesTextDataExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesTextDataExist_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesTextDataExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesTextDataExist_Statics::PropPointers) < 2048);
// ********** End Function DoesTextDataExist Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_DoesTextDataExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "DoesTextDataExist", 	Z_Construct_UFunction_UReplayDataObject_DoesTextDataExist_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesTextDataExist_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_DoesTextDataExist_Statics::ReplayDataObject_eventDoesTextDataExist_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesTextDataExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_DoesTextDataExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_DoesTextDataExist_Statics::ReplayDataObject_eventDoesTextDataExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_DoesTextDataExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_DoesTextDataExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execDoesTextDataExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->DoesTextDataExist(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function DoesTextDataExist *******************************

// ********** Begin Class UReplayDataObject Function DoesTransformDataExist ************************
struct Z_Construct_UFunction_UReplayDataObject_DoesTransformDataExist_Statics
{
	struct ReplayDataObject_eventDoesTransformDataExist_Parms
	{
		FString Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesTransformDataExist constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesTransformDataExist constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesTransformDataExist Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesTransformDataExist_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesTransformDataExist_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesTransformDataExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesTransformDataExist_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_DoesTransformDataExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesTransformDataExist_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesTransformDataExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesTransformDataExist_Statics::PropPointers) < 2048);
// ********** End Function DoesTransformDataExist Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_DoesTransformDataExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "DoesTransformDataExist", 	Z_Construct_UFunction_UReplayDataObject_DoesTransformDataExist_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesTransformDataExist_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_DoesTransformDataExist_Statics::ReplayDataObject_eventDoesTransformDataExist_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesTransformDataExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_DoesTransformDataExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_DoesTransformDataExist_Statics::ReplayDataObject_eventDoesTransformDataExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_DoesTransformDataExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_DoesTransformDataExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execDoesTransformDataExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->DoesTransformDataExist(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function DoesTransformDataExist **************************

// ********** Begin Class UReplayDataObject Function DoesVectorDataExist ***************************
struct Z_Construct_UFunction_UReplayDataObject_DoesVectorDataExist_Statics
{
	struct ReplayDataObject_eventDoesVectorDataExist_Parms
	{
		FString Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesVectorDataExist constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesVectorDataExist constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesVectorDataExist Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesVectorDataExist_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesVectorDataExist_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplayDataObject_DoesVectorDataExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventDoesVectorDataExist_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_DoesVectorDataExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesVectorDataExist_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_DoesVectorDataExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesVectorDataExist_Statics::PropPointers) < 2048);
// ********** End Function DoesVectorDataExist Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_DoesVectorDataExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "DoesVectorDataExist", 	Z_Construct_UFunction_UReplayDataObject_DoesVectorDataExist_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesVectorDataExist_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_DoesVectorDataExist_Statics::ReplayDataObject_eventDoesVectorDataExist_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_DoesVectorDataExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_DoesVectorDataExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_DoesVectorDataExist_Statics::ReplayDataObject_eventDoesVectorDataExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_DoesVectorDataExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_DoesVectorDataExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execDoesVectorDataExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->DoesVectorDataExist(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function DoesVectorDataExist *****************************

// ********** Begin Class UReplayDataObject Function GetBooleanData ********************************
struct Z_Construct_UFunction_UReplayDataObject_GetBooleanData_Statics
{
	struct ReplayDataObject_eventGetBooleanData_Parms
	{
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the stored value if it exists (Case Sensitive)\x09\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the stored value if it exists (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetBooleanData constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBooleanData constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBooleanData Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_GetBooleanData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetBooleanData_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReplayDataObject_GetBooleanData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReplayDataObject_eventGetBooleanData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReplayDataObject_GetBooleanData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReplayDataObject_eventGetBooleanData_Parms), &Z_Construct_UFunction_UReplayDataObject_GetBooleanData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_GetBooleanData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetBooleanData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetBooleanData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetBooleanData_Statics::PropPointers) < 2048);
// ********** End Function GetBooleanData Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_GetBooleanData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "GetBooleanData", 	Z_Construct_UFunction_UReplayDataObject_GetBooleanData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetBooleanData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_GetBooleanData_Statics::ReplayDataObject_eventGetBooleanData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetBooleanData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_GetBooleanData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_GetBooleanData_Statics::ReplayDataObject_eventGetBooleanData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_GetBooleanData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_GetBooleanData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execGetBooleanData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBooleanData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function GetBooleanData **********************************

// ********** Begin Class UReplayDataObject Function GetByteData ***********************************
struct Z_Construct_UFunction_UReplayDataObject_GetByteData_Statics
{
	struct ReplayDataObject_eventGetByteData_Parms
	{
		FString Name;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the stored value if it exists (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the stored value if it exists (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetByteData constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetByteData constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetByteData Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_GetByteData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetByteData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UReplayDataObject_GetByteData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UReplayDataObject_GetByteData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetByteData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_GetByteData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetByteData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetByteData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetByteData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetByteData_Statics::PropPointers) < 2048);
// ********** End Function GetByteData Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_GetByteData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "GetByteData", 	Z_Construct_UFunction_UReplayDataObject_GetByteData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetByteData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_GetByteData_Statics::ReplayDataObject_eventGetByteData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetByteData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_GetByteData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_GetByteData_Statics::ReplayDataObject_eventGetByteData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_GetByteData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_GetByteData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execGetByteData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=P_THIS->GetByteData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function GetByteData *************************************

// ********** Begin Class UReplayDataObject Function GetFloatData **********************************
struct Z_Construct_UFunction_UReplayDataObject_GetFloatData_Statics
{
	struct ReplayDataObject_eventGetFloatData_Parms
	{
		FString Name;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the stored value if it exists (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the stored value if it exists (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetFloatData constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFloatData constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFloatData Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_GetFloatData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetFloatData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReplayDataObject_GetFloatData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetFloatData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_GetFloatData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetFloatData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetFloatData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetFloatData_Statics::PropPointers) < 2048);
// ********** End Function GetFloatData Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_GetFloatData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "GetFloatData", 	Z_Construct_UFunction_UReplayDataObject_GetFloatData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetFloatData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_GetFloatData_Statics::ReplayDataObject_eventGetFloatData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetFloatData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_GetFloatData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_GetFloatData_Statics::ReplayDataObject_eventGetFloatData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_GetFloatData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_GetFloatData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execGetFloatData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloatData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function GetFloatData ************************************

// ********** Begin Class UReplayDataObject Function GetInteger64Data ******************************
struct Z_Construct_UFunction_UReplayDataObject_GetInteger64Data_Statics
{
	struct ReplayDataObject_eventGetInteger64Data_Parms
	{
		FString Name;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the stored value if it exists (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the stored value if it exists (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetInteger64Data constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInteger64Data constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInteger64Data Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_GetInteger64Data_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetInteger64Data_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UReplayDataObject_GetInteger64Data_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetInteger64Data_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_GetInteger64Data_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetInteger64Data_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetInteger64Data_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetInteger64Data_Statics::PropPointers) < 2048);
// ********** End Function GetInteger64Data Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_GetInteger64Data_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "GetInteger64Data", 	Z_Construct_UFunction_UReplayDataObject_GetInteger64Data_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetInteger64Data_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_GetInteger64Data_Statics::ReplayDataObject_eventGetInteger64Data_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetInteger64Data_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_GetInteger64Data_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_GetInteger64Data_Statics::ReplayDataObject_eventGetInteger64Data_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_GetInteger64Data()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_GetInteger64Data_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execGetInteger64Data)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetInteger64Data(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function GetInteger64Data ********************************

// ********** Begin Class UReplayDataObject Function GetIntegerData ********************************
struct Z_Construct_UFunction_UReplayDataObject_GetIntegerData_Statics
{
	struct ReplayDataObject_eventGetIntegerData_Parms
	{
		FString Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the stored value if it exists (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the stored value if it exists (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetIntegerData constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetIntegerData constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetIntegerData Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_GetIntegerData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetIntegerData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplayDataObject_GetIntegerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetIntegerData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_GetIntegerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetIntegerData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetIntegerData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetIntegerData_Statics::PropPointers) < 2048);
// ********** End Function GetIntegerData Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_GetIntegerData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "GetIntegerData", 	Z_Construct_UFunction_UReplayDataObject_GetIntegerData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetIntegerData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_GetIntegerData_Statics::ReplayDataObject_eventGetIntegerData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetIntegerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_GetIntegerData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_GetIntegerData_Statics::ReplayDataObject_eventGetIntegerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_GetIntegerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_GetIntegerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execGetIntegerData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIntegerData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function GetIntegerData **********************************

// ********** Begin Class UReplayDataObject Function GetNameData ***********************************
struct Z_Construct_UFunction_UReplayDataObject_GetNameData_Statics
{
	struct ReplayDataObject_eventGetNameData_Parms
	{
		FString Name;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the stored value if it exists (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the stored value if it exists (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetNameData constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNameData constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNameData Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_GetNameData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetNameData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UReplayDataObject_GetNameData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetNameData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_GetNameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetNameData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetNameData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetNameData_Statics::PropPointers) < 2048);
// ********** End Function GetNameData Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_GetNameData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "GetNameData", 	Z_Construct_UFunction_UReplayDataObject_GetNameData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetNameData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_GetNameData_Statics::ReplayDataObject_eventGetNameData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetNameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_GetNameData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_GetNameData_Statics::ReplayDataObject_eventGetNameData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_GetNameData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_GetNameData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execGetNameData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetNameData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function GetNameData *************************************

// ********** Begin Class UReplayDataObject Function GetRotatorData ********************************
struct Z_Construct_UFunction_UReplayDataObject_GetRotatorData_Statics
{
	struct ReplayDataObject_eventGetRotatorData_Parms
	{
		FString Name;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the stored value if it exists (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the stored value if it exists (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRotatorData constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRotatorData constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRotatorData Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_GetRotatorData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetRotatorData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReplayDataObject_GetRotatorData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetRotatorData_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_GetRotatorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetRotatorData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetRotatorData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetRotatorData_Statics::PropPointers) < 2048);
// ********** End Function GetRotatorData Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_GetRotatorData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "GetRotatorData", 	Z_Construct_UFunction_UReplayDataObject_GetRotatorData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetRotatorData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_GetRotatorData_Statics::ReplayDataObject_eventGetRotatorData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetRotatorData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_GetRotatorData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_GetRotatorData_Statics::ReplayDataObject_eventGetRotatorData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_GetRotatorData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_GetRotatorData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execGetRotatorData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetRotatorData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function GetRotatorData **********************************

// ********** Begin Class UReplayDataObject Function GetStringData *********************************
struct Z_Construct_UFunction_UReplayDataObject_GetStringData_Statics
{
	struct ReplayDataObject_eventGetStringData_Parms
	{
		FString Name;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the stored value if it exists (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the stored value if it exists (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetStringData constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStringData constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStringData Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_GetStringData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetStringData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_GetStringData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetStringData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_GetStringData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetStringData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetStringData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetStringData_Statics::PropPointers) < 2048);
// ********** End Function GetStringData Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_GetStringData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "GetStringData", 	Z_Construct_UFunction_UReplayDataObject_GetStringData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetStringData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_GetStringData_Statics::ReplayDataObject_eventGetStringData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetStringData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_GetStringData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_GetStringData_Statics::ReplayDataObject_eventGetStringData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_GetStringData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_GetStringData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execGetStringData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStringData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function GetStringData ***********************************

// ********** Begin Class UReplayDataObject Function GetTextData ***********************************
struct Z_Construct_UFunction_UReplayDataObject_GetTextData_Statics
{
	struct ReplayDataObject_eventGetTextData_Parms
	{
		FString Name;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the stored value if it exists (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the stored value if it exists (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetTextData constinit property declarations ***************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTextData constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTextData Property Definitions **************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_GetTextData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetTextData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UReplayDataObject_GetTextData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetTextData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_GetTextData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetTextData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetTextData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetTextData_Statics::PropPointers) < 2048);
// ********** End Function GetTextData Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_GetTextData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "GetTextData", 	Z_Construct_UFunction_UReplayDataObject_GetTextData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetTextData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_GetTextData_Statics::ReplayDataObject_eventGetTextData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetTextData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_GetTextData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_GetTextData_Statics::ReplayDataObject_eventGetTextData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_GetTextData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_GetTextData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execGetTextData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetTextData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function GetTextData *************************************

// ********** Begin Class UReplayDataObject Function GetTransformData ******************************
struct Z_Construct_UFunction_UReplayDataObject_GetTransformData_Statics
{
	struct ReplayDataObject_eventGetTransformData_Parms
	{
		FString Name;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the stored value if it exists (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the stored value if it exists (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetTransformData constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTransformData constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTransformData Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_GetTransformData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetTransformData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReplayDataObject_GetTransformData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetTransformData_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_GetTransformData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetTransformData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetTransformData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetTransformData_Statics::PropPointers) < 2048);
// ********** End Function GetTransformData Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_GetTransformData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "GetTransformData", 	Z_Construct_UFunction_UReplayDataObject_GetTransformData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetTransformData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_GetTransformData_Statics::ReplayDataObject_eventGetTransformData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetTransformData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_GetTransformData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_GetTransformData_Statics::ReplayDataObject_eventGetTransformData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_GetTransformData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_GetTransformData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execGetTransformData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetTransformData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function GetTransformData ********************************

// ********** Begin Class UReplayDataObject Function GetVectorData *********************************
struct Z_Construct_UFunction_UReplayDataObject_GetVectorData_Statics
{
	struct ReplayDataObject_eventGetVectorData_Parms
	{
		FString Name;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the stored value if it exists (Case Sensitive)\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the stored value if it exists (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetVectorData constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVectorData constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVectorData Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_GetVectorData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetVectorData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReplayDataObject_GetVectorData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventGetVectorData_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_GetVectorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetVectorData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_GetVectorData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetVectorData_Statics::PropPointers) < 2048);
// ********** End Function GetVectorData Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_GetVectorData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "GetVectorData", 	Z_Construct_UFunction_UReplayDataObject_GetVectorData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetVectorData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_GetVectorData_Statics::ReplayDataObject_eventGetVectorData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_GetVectorData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_GetVectorData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_GetVectorData_Statics::ReplayDataObject_eventGetVectorData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_GetVectorData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_GetVectorData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execGetVectorData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVectorData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function GetVectorData ***********************************

// ********** Begin Class UReplayDataObject Function LoadReplayMetaDataFromString ******************
struct Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString_Statics
{
	struct ReplayDataObject_eventLoadReplayMetaDataFromString_Parms
	{
		FString StringDataToParse;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Used Internaly to Load a meta data for a replay*/" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used Internaly to Load a meta data for a replay" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function LoadReplayMetaDataFromString constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringDataToParse;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadReplayMetaDataFromString constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadReplayMetaDataFromString Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString_Statics::NewProp_StringDataToParse = { "StringDataToParse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventLoadReplayMetaDataFromString_Parms, StringDataToParse), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReplayDataObject_eventLoadReplayMetaDataFromString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReplayDataObject_eventLoadReplayMetaDataFromString_Parms), &Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString_Statics::NewProp_StringDataToParse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString_Statics::PropPointers) < 2048);
// ********** End Function LoadReplayMetaDataFromString Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "LoadReplayMetaDataFromString", 	Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString_Statics::ReplayDataObject_eventLoadReplayMetaDataFromString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString_Statics::ReplayDataObject_eventLoadReplayMetaDataFromString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execLoadReplayMetaDataFromString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StringDataToParse);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadReplayMetaDataFromString(Z_Param_StringDataToParse);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function LoadReplayMetaDataFromString ********************

// ********** Begin Class UReplayDataObject Function RemoveBooleanData *****************************
struct Z_Construct_UFunction_UReplayDataObject_RemoveBooleanData_Statics
{
	struct ReplayDataObject_eventRemoveBooleanData_Parms
	{
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes data of the specified type (Case Sensitive)\x09\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveBooleanData constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveBooleanData constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveBooleanData Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_RemoveBooleanData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventRemoveBooleanData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_RemoveBooleanData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_RemoveBooleanData_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveBooleanData_Statics::PropPointers) < 2048);
// ********** End Function RemoveBooleanData Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_RemoveBooleanData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "RemoveBooleanData", 	Z_Construct_UFunction_UReplayDataObject_RemoveBooleanData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveBooleanData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveBooleanData_Statics::ReplayDataObject_eventRemoveBooleanData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveBooleanData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_RemoveBooleanData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveBooleanData_Statics::ReplayDataObject_eventRemoveBooleanData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_RemoveBooleanData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_RemoveBooleanData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execRemoveBooleanData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveBooleanData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function RemoveBooleanData *******************************

// ********** Begin Class UReplayDataObject Function RemoveByteData ********************************
struct Z_Construct_UFunction_UReplayDataObject_RemoveByteData_Statics
{
	struct ReplayDataObject_eventRemoveByteData_Parms
	{
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes data of the specified type (Case Sensitive)\x09\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveByteData constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveByteData constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveByteData Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_RemoveByteData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventRemoveByteData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_RemoveByteData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_RemoveByteData_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveByteData_Statics::PropPointers) < 2048);
// ********** End Function RemoveByteData Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_RemoveByteData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "RemoveByteData", 	Z_Construct_UFunction_UReplayDataObject_RemoveByteData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveByteData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveByteData_Statics::ReplayDataObject_eventRemoveByteData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveByteData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_RemoveByteData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveByteData_Statics::ReplayDataObject_eventRemoveByteData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_RemoveByteData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_RemoveByteData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execRemoveByteData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveByteData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function RemoveByteData **********************************

// ********** Begin Class UReplayDataObject Function RemoveFloatData *******************************
struct Z_Construct_UFunction_UReplayDataObject_RemoveFloatData_Statics
{
	struct ReplayDataObject_eventRemoveFloatData_Parms
	{
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes data of the specified type (Case Sensitive)\x09\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveFloatData constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveFloatData constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveFloatData Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_RemoveFloatData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventRemoveFloatData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_RemoveFloatData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_RemoveFloatData_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveFloatData_Statics::PropPointers) < 2048);
// ********** End Function RemoveFloatData Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_RemoveFloatData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "RemoveFloatData", 	Z_Construct_UFunction_UReplayDataObject_RemoveFloatData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveFloatData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveFloatData_Statics::ReplayDataObject_eventRemoveFloatData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveFloatData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_RemoveFloatData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveFloatData_Statics::ReplayDataObject_eventRemoveFloatData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_RemoveFloatData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_RemoveFloatData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execRemoveFloatData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveFloatData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function RemoveFloatData *********************************

// ********** Begin Class UReplayDataObject Function RemoveInteger64Data ***************************
struct Z_Construct_UFunction_UReplayDataObject_RemoveInteger64Data_Statics
{
	struct ReplayDataObject_eventRemoveInteger64Data_Parms
	{
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes data of the specified type (Case Sensitive)\x09\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveInteger64Data constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveInteger64Data constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveInteger64Data Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_RemoveInteger64Data_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventRemoveInteger64Data_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_RemoveInteger64Data_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_RemoveInteger64Data_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveInteger64Data_Statics::PropPointers) < 2048);
// ********** End Function RemoveInteger64Data Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_RemoveInteger64Data_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "RemoveInteger64Data", 	Z_Construct_UFunction_UReplayDataObject_RemoveInteger64Data_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveInteger64Data_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveInteger64Data_Statics::ReplayDataObject_eventRemoveInteger64Data_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveInteger64Data_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_RemoveInteger64Data_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveInteger64Data_Statics::ReplayDataObject_eventRemoveInteger64Data_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_RemoveInteger64Data()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_RemoveInteger64Data_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execRemoveInteger64Data)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveInteger64Data(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function RemoveInteger64Data *****************************

// ********** Begin Class UReplayDataObject Function RemoveIntegerData *****************************
struct Z_Construct_UFunction_UReplayDataObject_RemoveIntegerData_Statics
{
	struct ReplayDataObject_eventRemoveIntegerData_Parms
	{
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes data of the specified type (Case Sensitive)\x09\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveIntegerData constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveIntegerData constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveIntegerData Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_RemoveIntegerData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventRemoveIntegerData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_RemoveIntegerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_RemoveIntegerData_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveIntegerData_Statics::PropPointers) < 2048);
// ********** End Function RemoveIntegerData Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_RemoveIntegerData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "RemoveIntegerData", 	Z_Construct_UFunction_UReplayDataObject_RemoveIntegerData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveIntegerData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveIntegerData_Statics::ReplayDataObject_eventRemoveIntegerData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveIntegerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_RemoveIntegerData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveIntegerData_Statics::ReplayDataObject_eventRemoveIntegerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_RemoveIntegerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_RemoveIntegerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execRemoveIntegerData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveIntegerData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function RemoveIntegerData *******************************

// ********** Begin Class UReplayDataObject Function RemoveNameData ********************************
struct Z_Construct_UFunction_UReplayDataObject_RemoveNameData_Statics
{
	struct ReplayDataObject_eventRemoveNameData_Parms
	{
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes data of the specified type (Case Sensitive)\x09\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveNameData constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveNameData constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveNameData Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_RemoveNameData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventRemoveNameData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_RemoveNameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_RemoveNameData_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveNameData_Statics::PropPointers) < 2048);
// ********** End Function RemoveNameData Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_RemoveNameData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "RemoveNameData", 	Z_Construct_UFunction_UReplayDataObject_RemoveNameData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveNameData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveNameData_Statics::ReplayDataObject_eventRemoveNameData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveNameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_RemoveNameData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveNameData_Statics::ReplayDataObject_eventRemoveNameData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_RemoveNameData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_RemoveNameData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execRemoveNameData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveNameData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function RemoveNameData **********************************

// ********** Begin Class UReplayDataObject Function RemoveRotatorData *****************************
struct Z_Construct_UFunction_UReplayDataObject_RemoveRotatorData_Statics
{
	struct ReplayDataObject_eventRemoveRotatorData_Parms
	{
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes data of the specified type (Case Sensitive)\x09\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveRotatorData constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveRotatorData constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveRotatorData Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_RemoveRotatorData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventRemoveRotatorData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_RemoveRotatorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_RemoveRotatorData_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveRotatorData_Statics::PropPointers) < 2048);
// ********** End Function RemoveRotatorData Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_RemoveRotatorData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "RemoveRotatorData", 	Z_Construct_UFunction_UReplayDataObject_RemoveRotatorData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveRotatorData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveRotatorData_Statics::ReplayDataObject_eventRemoveRotatorData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveRotatorData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_RemoveRotatorData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveRotatorData_Statics::ReplayDataObject_eventRemoveRotatorData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_RemoveRotatorData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_RemoveRotatorData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execRemoveRotatorData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveRotatorData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function RemoveRotatorData *******************************

// ********** Begin Class UReplayDataObject Function RemoveStringData ******************************
struct Z_Construct_UFunction_UReplayDataObject_RemoveStringData_Statics
{
	struct ReplayDataObject_eventRemoveStringData_Parms
	{
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes data of the specified type (Case Sensitive)\x09\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveStringData constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveStringData constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveStringData Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_RemoveStringData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventRemoveStringData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_RemoveStringData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_RemoveStringData_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveStringData_Statics::PropPointers) < 2048);
// ********** End Function RemoveStringData Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_RemoveStringData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "RemoveStringData", 	Z_Construct_UFunction_UReplayDataObject_RemoveStringData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveStringData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveStringData_Statics::ReplayDataObject_eventRemoveStringData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveStringData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_RemoveStringData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveStringData_Statics::ReplayDataObject_eventRemoveStringData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_RemoveStringData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_RemoveStringData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execRemoveStringData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveStringData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function RemoveStringData ********************************

// ********** Begin Class UReplayDataObject Function RemoveTextData ********************************
struct Z_Construct_UFunction_UReplayDataObject_RemoveTextData_Statics
{
	struct ReplayDataObject_eventRemoveTextData_Parms
	{
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes data of the specified type (Case Sensitive)\x09\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveTextData constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveTextData constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveTextData Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_RemoveTextData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventRemoveTextData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_RemoveTextData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_RemoveTextData_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveTextData_Statics::PropPointers) < 2048);
// ********** End Function RemoveTextData Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_RemoveTextData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "RemoveTextData", 	Z_Construct_UFunction_UReplayDataObject_RemoveTextData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveTextData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveTextData_Statics::ReplayDataObject_eventRemoveTextData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveTextData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_RemoveTextData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveTextData_Statics::ReplayDataObject_eventRemoveTextData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_RemoveTextData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_RemoveTextData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execRemoveTextData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTextData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function RemoveTextData **********************************

// ********** Begin Class UReplayDataObject Function RemoveTransformData ***************************
struct Z_Construct_UFunction_UReplayDataObject_RemoveTransformData_Statics
{
	struct ReplayDataObject_eventRemoveTransformData_Parms
	{
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes data of the specified type (Case Sensitive)\x09\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveTransformData constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveTransformData constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveTransformData Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_RemoveTransformData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventRemoveTransformData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_RemoveTransformData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_RemoveTransformData_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveTransformData_Statics::PropPointers) < 2048);
// ********** End Function RemoveTransformData Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_RemoveTransformData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "RemoveTransformData", 	Z_Construct_UFunction_UReplayDataObject_RemoveTransformData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveTransformData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveTransformData_Statics::ReplayDataObject_eventRemoveTransformData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveTransformData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_RemoveTransformData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveTransformData_Statics::ReplayDataObject_eventRemoveTransformData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_RemoveTransformData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_RemoveTransformData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execRemoveTransformData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTransformData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function RemoveTransformData *****************************

// ********** Begin Class UReplayDataObject Function RemoveVectorData ******************************
struct Z_Construct_UFunction_UReplayDataObject_RemoveVectorData_Statics
{
	struct ReplayDataObject_eventRemoveVectorData_Parms
	{
		FString Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes data of the specified type (Case Sensitive)\x09\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes data of the specified type (Case Sensitive)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveVectorData constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveVectorData constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveVectorData Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_RemoveVectorData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventRemoveVectorData_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_RemoveVectorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_RemoveVectorData_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveVectorData_Statics::PropPointers) < 2048);
// ********** End Function RemoveVectorData Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_RemoveVectorData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "RemoveVectorData", 	Z_Construct_UFunction_UReplayDataObject_RemoveVectorData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveVectorData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveVectorData_Statics::ReplayDataObject_eventRemoveVectorData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_RemoveVectorData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_RemoveVectorData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_RemoveVectorData_Statics::ReplayDataObject_eventRemoveVectorData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_RemoveVectorData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_RemoveVectorData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execRemoveVectorData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveVectorData(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function RemoveVectorData ********************************

// ********** Begin Class UReplayDataObject Function SaveReplayMetaDataToString ********************
struct Z_Construct_UFunction_UReplayDataObject_SaveReplayMetaDataToString_Statics
{
	struct ReplayDataObject_eventSaveReplayMetaDataToString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DataObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Used Internaly to Create/Save meta data for a replay*/" },
#endif
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used Internaly to Create/Save meta data for a replay" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SaveReplayMetaDataToString constinit property declarations ************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveReplayMetaDataToString constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveReplayMetaDataToString Property Definitions ***********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayDataObject_SaveReplayMetaDataToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayDataObject_eventSaveReplayMetaDataToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayDataObject_SaveReplayMetaDataToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayDataObject_SaveReplayMetaDataToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_SaveReplayMetaDataToString_Statics::PropPointers) < 2048);
// ********** End Function SaveReplayMetaDataToString Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayDataObject_SaveReplayMetaDataToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayDataObject, nullptr, "SaveReplayMetaDataToString", 	Z_Construct_UFunction_UReplayDataObject_SaveReplayMetaDataToString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_SaveReplayMetaDataToString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayDataObject_SaveReplayMetaDataToString_Statics::ReplayDataObject_eventSaveReplayMetaDataToString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayDataObject_SaveReplayMetaDataToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayDataObject_SaveReplayMetaDataToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayDataObject_SaveReplayMetaDataToString_Statics::ReplayDataObject_eventSaveReplayMetaDataToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayDataObject_SaveReplayMetaDataToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayDataObject_SaveReplayMetaDataToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayDataObject::execSaveReplayMetaDataToString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SaveReplayMetaDataToString();
	P_NATIVE_END;
}
// ********** End Class UReplayDataObject Function SaveReplayMetaDataToString **********************

// ********** Begin Class UReplayDataObject ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UReplayDataObject;
UClass* UReplayDataObject::GetPrivateStaticClass()
{
	using TClass = UReplayDataObject;
	if (!Z_Registration_Info_UClass_UReplayDataObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ReplayDataObject"),
			Z_Registration_Info_UClass_UReplayDataObject.InnerSingleton,
			StaticRegisterNativesUReplayDataObject,
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
	return Z_Registration_Info_UClass_UReplayDataObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UReplayDataObject_NoRegister()
{
	return UReplayDataObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UReplayDataObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "ReplayDataObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_boolData_MetaData[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_byteData_MetaData[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_intData_MetaData[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_int64Data_MetaData[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_floatData_MetaData[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_nameData_MetaData[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stringData_MetaData[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_textData_MetaData[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_vectorData_MetaData[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotatorData_MetaData[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_transformData_MetaData[] = {
		{ "Category", "DataObject" },
		{ "ModuleRelativePath", "Public/ReplayDataObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UReplayDataObject constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_boolData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_boolData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_byteData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_byteData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_intData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_intData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_int64Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_int64Data;
	static const UECodeGen_Private::FStructPropertyParams NewProp_floatData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_floatData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_nameData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_nameData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_stringData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_stringData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_textData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_textData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_vectorData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_vectorData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rotatorData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_rotatorData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_transformData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_transformData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UReplayDataObject constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddBooleanData"), .Pointer = &UReplayDataObject::execAddBooleanData },
		{ .NameUTF8 = UTF8TEXT("AddByteData"), .Pointer = &UReplayDataObject::execAddByteData },
		{ .NameUTF8 = UTF8TEXT("AddFloatData"), .Pointer = &UReplayDataObject::execAddFloatData },
		{ .NameUTF8 = UTF8TEXT("AddInteger64Data"), .Pointer = &UReplayDataObject::execAddInteger64Data },
		{ .NameUTF8 = UTF8TEXT("AddIntegerData"), .Pointer = &UReplayDataObject::execAddIntegerData },
		{ .NameUTF8 = UTF8TEXT("AddNameData"), .Pointer = &UReplayDataObject::execAddNameData },
		{ .NameUTF8 = UTF8TEXT("AddRotatorData"), .Pointer = &UReplayDataObject::execAddRotatorData },
		{ .NameUTF8 = UTF8TEXT("AddStringData"), .Pointer = &UReplayDataObject::execAddStringData },
		{ .NameUTF8 = UTF8TEXT("AddTextData"), .Pointer = &UReplayDataObject::execAddTextData },
		{ .NameUTF8 = UTF8TEXT("AddTransformData"), .Pointer = &UReplayDataObject::execAddTransformData },
		{ .NameUTF8 = UTF8TEXT("AddVectorData"), .Pointer = &UReplayDataObject::execAddVectorData },
		{ .NameUTF8 = UTF8TEXT("DoesBooleanDataExist"), .Pointer = &UReplayDataObject::execDoesBooleanDataExist },
		{ .NameUTF8 = UTF8TEXT("DoesByteDataExist"), .Pointer = &UReplayDataObject::execDoesByteDataExist },
		{ .NameUTF8 = UTF8TEXT("DoesFloatDataExist"), .Pointer = &UReplayDataObject::execDoesFloatDataExist },
		{ .NameUTF8 = UTF8TEXT("DoesInteger64DataExist"), .Pointer = &UReplayDataObject::execDoesInteger64DataExist },
		{ .NameUTF8 = UTF8TEXT("DoesIntegerDataExist"), .Pointer = &UReplayDataObject::execDoesIntegerDataExist },
		{ .NameUTF8 = UTF8TEXT("DoesNameDataExist"), .Pointer = &UReplayDataObject::execDoesNameDataExist },
		{ .NameUTF8 = UTF8TEXT("DoesRotatorDataExist"), .Pointer = &UReplayDataObject::execDoesRotatorDataExist },
		{ .NameUTF8 = UTF8TEXT("DoesStringDataExist"), .Pointer = &UReplayDataObject::execDoesStringDataExist },
		{ .NameUTF8 = UTF8TEXT("DoesTextDataExist"), .Pointer = &UReplayDataObject::execDoesTextDataExist },
		{ .NameUTF8 = UTF8TEXT("DoesTransformDataExist"), .Pointer = &UReplayDataObject::execDoesTransformDataExist },
		{ .NameUTF8 = UTF8TEXT("DoesVectorDataExist"), .Pointer = &UReplayDataObject::execDoesVectorDataExist },
		{ .NameUTF8 = UTF8TEXT("GetBooleanData"), .Pointer = &UReplayDataObject::execGetBooleanData },
		{ .NameUTF8 = UTF8TEXT("GetByteData"), .Pointer = &UReplayDataObject::execGetByteData },
		{ .NameUTF8 = UTF8TEXT("GetFloatData"), .Pointer = &UReplayDataObject::execGetFloatData },
		{ .NameUTF8 = UTF8TEXT("GetInteger64Data"), .Pointer = &UReplayDataObject::execGetInteger64Data },
		{ .NameUTF8 = UTF8TEXT("GetIntegerData"), .Pointer = &UReplayDataObject::execGetIntegerData },
		{ .NameUTF8 = UTF8TEXT("GetNameData"), .Pointer = &UReplayDataObject::execGetNameData },
		{ .NameUTF8 = UTF8TEXT("GetRotatorData"), .Pointer = &UReplayDataObject::execGetRotatorData },
		{ .NameUTF8 = UTF8TEXT("GetStringData"), .Pointer = &UReplayDataObject::execGetStringData },
		{ .NameUTF8 = UTF8TEXT("GetTextData"), .Pointer = &UReplayDataObject::execGetTextData },
		{ .NameUTF8 = UTF8TEXT("GetTransformData"), .Pointer = &UReplayDataObject::execGetTransformData },
		{ .NameUTF8 = UTF8TEXT("GetVectorData"), .Pointer = &UReplayDataObject::execGetVectorData },
		{ .NameUTF8 = UTF8TEXT("LoadReplayMetaDataFromString"), .Pointer = &UReplayDataObject::execLoadReplayMetaDataFromString },
		{ .NameUTF8 = UTF8TEXT("RemoveBooleanData"), .Pointer = &UReplayDataObject::execRemoveBooleanData },
		{ .NameUTF8 = UTF8TEXT("RemoveByteData"), .Pointer = &UReplayDataObject::execRemoveByteData },
		{ .NameUTF8 = UTF8TEXT("RemoveFloatData"), .Pointer = &UReplayDataObject::execRemoveFloatData },
		{ .NameUTF8 = UTF8TEXT("RemoveInteger64Data"), .Pointer = &UReplayDataObject::execRemoveInteger64Data },
		{ .NameUTF8 = UTF8TEXT("RemoveIntegerData"), .Pointer = &UReplayDataObject::execRemoveIntegerData },
		{ .NameUTF8 = UTF8TEXT("RemoveNameData"), .Pointer = &UReplayDataObject::execRemoveNameData },
		{ .NameUTF8 = UTF8TEXT("RemoveRotatorData"), .Pointer = &UReplayDataObject::execRemoveRotatorData },
		{ .NameUTF8 = UTF8TEXT("RemoveStringData"), .Pointer = &UReplayDataObject::execRemoveStringData },
		{ .NameUTF8 = UTF8TEXT("RemoveTextData"), .Pointer = &UReplayDataObject::execRemoveTextData },
		{ .NameUTF8 = UTF8TEXT("RemoveTransformData"), .Pointer = &UReplayDataObject::execRemoveTransformData },
		{ .NameUTF8 = UTF8TEXT("RemoveVectorData"), .Pointer = &UReplayDataObject::execRemoveVectorData },
		{ .NameUTF8 = UTF8TEXT("SaveReplayMetaDataToString"), .Pointer = &UReplayDataObject::execSaveReplayMetaDataToString },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReplayDataObject_AddBooleanData, "AddBooleanData" }, // 4106797427
		{ &Z_Construct_UFunction_UReplayDataObject_AddByteData, "AddByteData" }, // 1023406596
		{ &Z_Construct_UFunction_UReplayDataObject_AddFloatData, "AddFloatData" }, // 4034654773
		{ &Z_Construct_UFunction_UReplayDataObject_AddInteger64Data, "AddInteger64Data" }, // 3442945910
		{ &Z_Construct_UFunction_UReplayDataObject_AddIntegerData, "AddIntegerData" }, // 1645825052
		{ &Z_Construct_UFunction_UReplayDataObject_AddNameData, "AddNameData" }, // 2457684229
		{ &Z_Construct_UFunction_UReplayDataObject_AddRotatorData, "AddRotatorData" }, // 985223556
		{ &Z_Construct_UFunction_UReplayDataObject_AddStringData, "AddStringData" }, // 2702895505
		{ &Z_Construct_UFunction_UReplayDataObject_AddTextData, "AddTextData" }, // 797817153
		{ &Z_Construct_UFunction_UReplayDataObject_AddTransformData, "AddTransformData" }, // 2786588245
		{ &Z_Construct_UFunction_UReplayDataObject_AddVectorData, "AddVectorData" }, // 678702475
		{ &Z_Construct_UFunction_UReplayDataObject_DoesBooleanDataExist, "DoesBooleanDataExist" }, // 386295665
		{ &Z_Construct_UFunction_UReplayDataObject_DoesByteDataExist, "DoesByteDataExist" }, // 1531799598
		{ &Z_Construct_UFunction_UReplayDataObject_DoesFloatDataExist, "DoesFloatDataExist" }, // 3400240699
		{ &Z_Construct_UFunction_UReplayDataObject_DoesInteger64DataExist, "DoesInteger64DataExist" }, // 3018834744
		{ &Z_Construct_UFunction_UReplayDataObject_DoesIntegerDataExist, "DoesIntegerDataExist" }, // 938095282
		{ &Z_Construct_UFunction_UReplayDataObject_DoesNameDataExist, "DoesNameDataExist" }, // 4108252728
		{ &Z_Construct_UFunction_UReplayDataObject_DoesRotatorDataExist, "DoesRotatorDataExist" }, // 2355521065
		{ &Z_Construct_UFunction_UReplayDataObject_DoesStringDataExist, "DoesStringDataExist" }, // 1325517563
		{ &Z_Construct_UFunction_UReplayDataObject_DoesTextDataExist, "DoesTextDataExist" }, // 1894822377
		{ &Z_Construct_UFunction_UReplayDataObject_DoesTransformDataExist, "DoesTransformDataExist" }, // 3431897108
		{ &Z_Construct_UFunction_UReplayDataObject_DoesVectorDataExist, "DoesVectorDataExist" }, // 262430400
		{ &Z_Construct_UFunction_UReplayDataObject_GetBooleanData, "GetBooleanData" }, // 632908113
		{ &Z_Construct_UFunction_UReplayDataObject_GetByteData, "GetByteData" }, // 3231144315
		{ &Z_Construct_UFunction_UReplayDataObject_GetFloatData, "GetFloatData" }, // 2044365823
		{ &Z_Construct_UFunction_UReplayDataObject_GetInteger64Data, "GetInteger64Data" }, // 3121967402
		{ &Z_Construct_UFunction_UReplayDataObject_GetIntegerData, "GetIntegerData" }, // 685108063
		{ &Z_Construct_UFunction_UReplayDataObject_GetNameData, "GetNameData" }, // 2042124235
		{ &Z_Construct_UFunction_UReplayDataObject_GetRotatorData, "GetRotatorData" }, // 2330352169
		{ &Z_Construct_UFunction_UReplayDataObject_GetStringData, "GetStringData" }, // 3640289405
		{ &Z_Construct_UFunction_UReplayDataObject_GetTextData, "GetTextData" }, // 1067543327
		{ &Z_Construct_UFunction_UReplayDataObject_GetTransformData, "GetTransformData" }, // 4029220039
		{ &Z_Construct_UFunction_UReplayDataObject_GetVectorData, "GetVectorData" }, // 3103641940
		{ &Z_Construct_UFunction_UReplayDataObject_LoadReplayMetaDataFromString, "LoadReplayMetaDataFromString" }, // 3354240004
		{ &Z_Construct_UFunction_UReplayDataObject_RemoveBooleanData, "RemoveBooleanData" }, // 348096535
		{ &Z_Construct_UFunction_UReplayDataObject_RemoveByteData, "RemoveByteData" }, // 660365755
		{ &Z_Construct_UFunction_UReplayDataObject_RemoveFloatData, "RemoveFloatData" }, // 3301962823
		{ &Z_Construct_UFunction_UReplayDataObject_RemoveInteger64Data, "RemoveInteger64Data" }, // 2046775268
		{ &Z_Construct_UFunction_UReplayDataObject_RemoveIntegerData, "RemoveIntegerData" }, // 857452191
		{ &Z_Construct_UFunction_UReplayDataObject_RemoveNameData, "RemoveNameData" }, // 704631666
		{ &Z_Construct_UFunction_UReplayDataObject_RemoveRotatorData, "RemoveRotatorData" }, // 1117387576
		{ &Z_Construct_UFunction_UReplayDataObject_RemoveStringData, "RemoveStringData" }, // 57361905
		{ &Z_Construct_UFunction_UReplayDataObject_RemoveTextData, "RemoveTextData" }, // 2321600987
		{ &Z_Construct_UFunction_UReplayDataObject_RemoveTransformData, "RemoveTransformData" }, // 951751423
		{ &Z_Construct_UFunction_UReplayDataObject_RemoveVectorData, "RemoveVectorData" }, // 3059286448
		{ &Z_Construct_UFunction_UReplayDataObject_SaveReplayMetaDataToString, "SaveReplayMetaDataToString" }, // 370700694
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplayDataObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UReplayDataObject_Statics

// ********** Begin Class UReplayDataObject Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_boolData_Inner = { "boolData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FReplayBoolData, METADATA_PARAMS(0, nullptr) }; // 1880373492
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_boolData = { "boolData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplayDataObject, boolData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_boolData_MetaData), NewProp_boolData_MetaData) }; // 1880373492
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_byteData_Inner = { "byteData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FReplayByteData, METADATA_PARAMS(0, nullptr) }; // 2926748907
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_byteData = { "byteData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplayDataObject, byteData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_byteData_MetaData), NewProp_byteData_MetaData) }; // 2926748907
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_intData_Inner = { "intData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FReplayIntData, METADATA_PARAMS(0, nullptr) }; // 2356580046
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_intData = { "intData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplayDataObject, intData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_intData_MetaData), NewProp_intData_MetaData) }; // 2356580046
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_int64Data_Inner = { "int64Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FReplayInt64Data, METADATA_PARAMS(0, nullptr) }; // 2323279171
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_int64Data = { "int64Data", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplayDataObject, int64Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_int64Data_MetaData), NewProp_int64Data_MetaData) }; // 2323279171
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_floatData_Inner = { "floatData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FReplayFloatData, METADATA_PARAMS(0, nullptr) }; // 913037023
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_floatData = { "floatData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplayDataObject, floatData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_floatData_MetaData), NewProp_floatData_MetaData) }; // 913037023
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_nameData_Inner = { "nameData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FReplayNameData, METADATA_PARAMS(0, nullptr) }; // 3038587291
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_nameData = { "nameData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplayDataObject, nameData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_nameData_MetaData), NewProp_nameData_MetaData) }; // 3038587291
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_stringData_Inner = { "stringData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FReplayStringData, METADATA_PARAMS(0, nullptr) }; // 1389081264
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_stringData = { "stringData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplayDataObject, stringData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stringData_MetaData), NewProp_stringData_MetaData) }; // 1389081264
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_textData_Inner = { "textData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FReplayTextData, METADATA_PARAMS(0, nullptr) }; // 709442466
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_textData = { "textData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplayDataObject, textData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_textData_MetaData), NewProp_textData_MetaData) }; // 709442466
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_vectorData_Inner = { "vectorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FReplayVectorData, METADATA_PARAMS(0, nullptr) }; // 890187188
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_vectorData = { "vectorData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplayDataObject, vectorData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_vectorData_MetaData), NewProp_vectorData_MetaData) }; // 890187188
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_rotatorData_Inner = { "rotatorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FReplayRotatorData, METADATA_PARAMS(0, nullptr) }; // 485414686
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_rotatorData = { "rotatorData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplayDataObject, rotatorData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotatorData_MetaData), NewProp_rotatorData_MetaData) }; // 485414686
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_transformData_Inner = { "transformData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FReplayTransformData, METADATA_PARAMS(0, nullptr) }; // 3311700228
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplayDataObject_Statics::NewProp_transformData = { "transformData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplayDataObject, transformData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_transformData_MetaData), NewProp_transformData_MetaData) }; // 3311700228
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplayDataObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_boolData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_boolData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_byteData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_byteData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_intData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_intData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_int64Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_int64Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_floatData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_floatData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_nameData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_nameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_stringData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_stringData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_textData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_textData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_vectorData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_vectorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_rotatorData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_rotatorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_transformData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayDataObject_Statics::NewProp_transformData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplayDataObject_Statics::PropPointers) < 2048);
// ********** End Class UReplayDataObject Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UReplayDataObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplayDataObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplayDataObject_Statics::ClassParams = {
	&UReplayDataObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UReplayDataObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UReplayDataObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplayDataObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UReplayDataObject_Statics::Class_MetaDataParams)
};
void UReplayDataObject::StaticRegisterNativesUReplayDataObject()
{
	UClass* Class = UReplayDataObject::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UReplayDataObject_Statics::Funcs));
}
UClass* Z_Construct_UClass_UReplayDataObject()
{
	if (!Z_Registration_Info_UClass_UReplayDataObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplayDataObject.OuterSingleton, Z_Construct_UClass_UReplayDataObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReplayDataObject.OuterSingleton;
}
UReplayDataObject::UReplayDataObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UReplayDataObject);
UReplayDataObject::~UReplayDataObject() {}
// ********** End Class UReplayDataObject **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDataObject_h__Script_ReplaySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReplayDataObject, UReplayDataObject::StaticClass, TEXT("UReplayDataObject"), &Z_Registration_Info_UClass_UReplayDataObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplayDataObject), 860912108U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDataObject_h__Script_ReplaySystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDataObject_h__Script_ReplaySystem_908015690{
	TEXT("/Script/ReplaySystem"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDataObject_h__Script_ReplaySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDataObject_h__Script_ReplaySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
