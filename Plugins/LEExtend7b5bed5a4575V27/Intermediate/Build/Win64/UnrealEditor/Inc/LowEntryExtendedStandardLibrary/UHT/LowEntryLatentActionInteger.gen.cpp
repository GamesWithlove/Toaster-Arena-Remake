// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryLatentActionInteger.h"
#include "Engine/LatentActionManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLowEntryLatentActionInteger() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLatentActionInteger();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLatentActionInteger_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULowEntryLatentActionInteger Function Done *******************************
struct Z_Construct_UFunction_ULowEntryLatentActionInteger_Done_Statics
{
	struct LowEntryLatentActionInteger_eventDone_Parms
	{
		int32 Result_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Integer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Causes the latent action to be done.\n\x09*/" },
#endif
		{ "DisplayName", "Done" },
		{ "Keywords", "end finished complete completion" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionInteger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Causes the latent action to be done." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Done constinit property declarations **********************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Result_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Done constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Done Property Definitions *********************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryLatentActionInteger_Done_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionInteger_eventDone_Parms, Result_), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionInteger_Done_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionInteger_Done_Statics::NewProp_Result_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionInteger_Done_Statics::PropPointers) < 2048);
// ********** End Function Done Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionInteger_Done_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionInteger, nullptr, "Done", 	Z_Construct_UFunction_ULowEntryLatentActionInteger_Done_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionInteger_Done_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLatentActionInteger_Done_Statics::LowEntryLatentActionInteger_eventDone_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionInteger_Done_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionInteger_Done_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionInteger_Done_Statics::LowEntryLatentActionInteger_eventDone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionInteger_Done()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionInteger_Done_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionInteger::execDone)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Result_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Done(Z_Param_Result_);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLatentActionInteger Function Done *********************************

// ********** Begin Class ULowEntryLatentActionInteger Function GetResult **************************
struct Z_Construct_UFunction_ULowEntryLatentActionInteger_GetResult_Statics
{
	struct LowEntryLatentActionInteger_eventGetResult_Parms
	{
		int32 Result_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Integer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the result.\n\x09*/" },
#endif
		{ "DisplayName", "Get Result" },
		{ "Keywords", "result return value" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionInteger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the result." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetResult constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Result_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResult constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResult Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryLatentActionInteger_GetResult_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionInteger_eventGetResult_Parms, Result_), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionInteger_GetResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionInteger_GetResult_Statics::NewProp_Result_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionInteger_GetResult_Statics::PropPointers) < 2048);
// ********** End Function GetResult Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionInteger_GetResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionInteger, nullptr, "GetResult", 	Z_Construct_UFunction_ULowEntryLatentActionInteger_GetResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionInteger_GetResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLatentActionInteger_GetResult_Statics::LowEntryLatentActionInteger_eventGetResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionInteger_GetResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionInteger_GetResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionInteger_GetResult_Statics::LowEntryLatentActionInteger_eventGetResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionInteger_GetResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionInteger_GetResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionInteger::execGetResult)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Result_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResult(Z_Param_Out_Result_);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLatentActionInteger Function GetResult ****************************

// ********** Begin Class ULowEntryLatentActionInteger Function IsDone *****************************
struct Z_Construct_UFunction_ULowEntryLatentActionInteger_IsDone_Statics
{
	struct LowEntryLatentActionInteger_eventIsDone_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Integer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns true if the latent action is done.\n\x09*/" },
#endif
		{ "DisplayName", "Is Done" },
		{ "Keywords", "end finished complete completion" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionInteger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the latent action is done." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsDone constinit property declarations ********************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsDone constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsDone Property Definitions *******************************************
void Z_Construct_UFunction_ULowEntryLatentActionInteger_IsDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryLatentActionInteger_eventIsDone_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLatentActionInteger_IsDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLatentActionInteger_eventIsDone_Parms), &Z_Construct_UFunction_ULowEntryLatentActionInteger_IsDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionInteger_IsDone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionInteger_IsDone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionInteger_IsDone_Statics::PropPointers) < 2048);
// ********** End Function IsDone Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionInteger_IsDone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionInteger, nullptr, "IsDone", 	Z_Construct_UFunction_ULowEntryLatentActionInteger_IsDone_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionInteger_IsDone_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLatentActionInteger_IsDone_Statics::LowEntryLatentActionInteger_eventIsDone_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionInteger_IsDone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionInteger_IsDone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionInteger_IsDone_Statics::LowEntryLatentActionInteger_eventIsDone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionInteger_IsDone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionInteger_IsDone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionInteger::execIsDone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDone();
	P_NATIVE_END;
}
// ********** End Class ULowEntryLatentActionInteger Function IsDone *******************************

// ********** Begin Class ULowEntryLatentActionInteger Function WaitTillDone ***********************
struct Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone_Statics
{
	struct LowEntryLatentActionInteger_eventWaitTillDone_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		int32 Result_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Integer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Waits till the latent action is done.\n\x09*/" },
#endif
		{ "DisplayName", "Wait Till Done" },
		{ "Keywords", "untill for end finished complete completion" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionInteger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Waits till the latent action is done." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function WaitTillDone constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Result_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WaitTillDone constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WaitTillDone Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionInteger_eventWaitTillDone_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionInteger_eventWaitTillDone_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionInteger_eventWaitTillDone_Parms, Result_), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone_Statics::NewProp_Result_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone_Statics::PropPointers) < 2048);
// ********** End Function WaitTillDone Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionInteger, nullptr, "WaitTillDone", 	Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone_Statics::LowEntryLatentActionInteger_eventWaitTillDone_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone_Statics::LowEntryLatentActionInteger_eventWaitTillDone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionInteger::execWaitTillDone)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Result_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WaitTillDone(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Result_);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLatentActionInteger Function WaitTillDone *************************

// ********** Begin Class ULowEntryLatentActionInteger *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULowEntryLatentActionInteger;
UClass* ULowEntryLatentActionInteger::GetPrivateStaticClass()
{
	using TClass = ULowEntryLatentActionInteger;
	if (!Z_Registration_Info_UClass_ULowEntryLatentActionInteger.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LowEntryLatentActionInteger"),
			Z_Registration_Info_UClass_ULowEntryLatentActionInteger.InnerSingleton,
			StaticRegisterNativesULowEntryLatentActionInteger,
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
	return Z_Registration_Info_UClass_ULowEntryLatentActionInteger.InnerSingleton;
}
UClass* Z_Construct_UClass_ULowEntryLatentActionInteger_NoRegister()
{
	return ULowEntryLatentActionInteger::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULowEntryLatentActionInteger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClassesLatentAction/LowEntryLatentActionInteger.h" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionInteger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Finished_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionInteger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionInteger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeepAliveCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionInteger.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULowEntryLatentActionInteger constinit property declarations *************
	static void NewProp_Finished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Finished;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KeepAliveCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULowEntryLatentActionInteger constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Done"), .Pointer = &ULowEntryLatentActionInteger::execDone },
		{ .NameUTF8 = UTF8TEXT("GetResult"), .Pointer = &ULowEntryLatentActionInteger::execGetResult },
		{ .NameUTF8 = UTF8TEXT("IsDone"), .Pointer = &ULowEntryLatentActionInteger::execIsDone },
		{ .NameUTF8 = UTF8TEXT("WaitTillDone"), .Pointer = &ULowEntryLatentActionInteger::execWaitTillDone },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryLatentActionInteger_Done, "Done" }, // 1164319429
		{ &Z_Construct_UFunction_ULowEntryLatentActionInteger_GetResult, "GetResult" }, // 3018964542
		{ &Z_Construct_UFunction_ULowEntryLatentActionInteger_IsDone, "IsDone" }, // 3291402074
		{ &Z_Construct_UFunction_ULowEntryLatentActionInteger_WaitTillDone, "WaitTillDone" }, // 431173469
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryLatentActionInteger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULowEntryLatentActionInteger_Statics

// ********** Begin Class ULowEntryLatentActionInteger Property Definitions ************************
void Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::NewProp_Finished_SetBit(void* Obj)
{
	((ULowEntryLatentActionInteger*)Obj)->Finished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::NewProp_Finished = { "Finished", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULowEntryLatentActionInteger), &Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::NewProp_Finished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Finished_MetaData), NewProp_Finished_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryLatentActionInteger, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::NewProp_KeepAliveCount = { "KeepAliveCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryLatentActionInteger, KeepAliveCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeepAliveCount_MetaData), NewProp_KeepAliveCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::NewProp_Finished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::NewProp_KeepAliveCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::PropPointers) < 2048);
// ********** End Class ULowEntryLatentActionInteger Property Definitions **************************
UObject* (*const Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::ClassParams = {
	&ULowEntryLatentActionInteger::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::Class_MetaDataParams), Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::Class_MetaDataParams)
};
void ULowEntryLatentActionInteger::StaticRegisterNativesULowEntryLatentActionInteger()
{
	UClass* Class = ULowEntryLatentActionInteger::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::Funcs));
}
UClass* Z_Construct_UClass_ULowEntryLatentActionInteger()
{
	if (!Z_Registration_Info_UClass_ULowEntryLatentActionInteger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryLatentActionInteger.OuterSingleton, Z_Construct_UClass_ULowEntryLatentActionInteger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULowEntryLatentActionInteger.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULowEntryLatentActionInteger);
ULowEntryLatentActionInteger::~ULowEntryLatentActionInteger() {}
// ********** End Class ULowEntryLatentActionInteger ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionInteger_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryLatentActionInteger, ULowEntryLatentActionInteger::StaticClass, TEXT("ULowEntryLatentActionInteger"), &Z_Registration_Info_UClass_ULowEntryLatentActionInteger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryLatentActionInteger), 1530320961U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionInteger_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionInteger_h__Script_LowEntryExtendedStandardLibrary_1103318411{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionInteger_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionInteger_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
