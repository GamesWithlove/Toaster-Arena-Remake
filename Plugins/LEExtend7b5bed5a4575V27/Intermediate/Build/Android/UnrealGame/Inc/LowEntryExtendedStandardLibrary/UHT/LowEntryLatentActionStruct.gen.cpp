// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryLatentActionStruct.h"
#include "Engine/LatentActionManager.h"
#include "StructUtils/InstancedStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLowEntryLatentActionStruct() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLatentActionStruct();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLatentActionStruct_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULowEntryLatentActionStruct Function Done ********************************
struct Z_Construct_UFunction_ULowEntryLatentActionStruct_Done_Statics
{
	struct LowEntryLatentActionStruct_eventDone_Parms
	{
		FInstancedStruct Result_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Struct" },
		{ "Comment", "/**\n\x09* Causes the latent action to be done.\n\x09*/" },
		{ "DisplayName", "Done" },
		{ "Keywords", "end finished complete completion" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionStruct.h" },
		{ "ToolTip", "Causes the latent action to be done." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result__MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Done constinit property declarations **********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Done constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Done Property Definitions *********************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryLatentActionStruct_Done_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionStruct_eventDone_Parms, Result_), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result__MetaData), NewProp_Result__MetaData) }; // 3949785911
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionStruct_Done_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionStruct_Done_Statics::NewProp_Result_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionStruct_Done_Statics::PropPointers) < 2048);
// ********** End Function Done Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionStruct_Done_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionStruct, nullptr, "Done", 	Z_Construct_UFunction_ULowEntryLatentActionStruct_Done_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionStruct_Done_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLatentActionStruct_Done_Statics::LowEntryLatentActionStruct_eventDone_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionStruct_Done_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionStruct_Done_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionStruct_Done_Statics::LowEntryLatentActionStruct_eventDone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionStruct_Done()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionStruct_Done_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionStruct::execDone)
{
	P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_Result_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Done(Z_Param_Out_Result_);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLatentActionStruct Function Done **********************************

// ********** Begin Class ULowEntryLatentActionStruct Function GetResult ***************************
struct Z_Construct_UFunction_ULowEntryLatentActionStruct_GetResult_Statics
{
	struct LowEntryLatentActionStruct_eventGetResult_Parms
	{
		FInstancedStruct Result_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Struct" },
		{ "Comment", "/**\n\x09* Returns the result.\n\x09*/" },
		{ "DisplayName", "Get Result" },
		{ "Keywords", "result return value" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionStruct.h" },
		{ "ToolTip", "Returns the result." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResult constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResult constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResult Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryLatentActionStruct_GetResult_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionStruct_eventGetResult_Parms, Result_), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 3949785911
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionStruct_GetResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionStruct_GetResult_Statics::NewProp_Result_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionStruct_GetResult_Statics::PropPointers) < 2048);
// ********** End Function GetResult Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionStruct_GetResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionStruct, nullptr, "GetResult", 	Z_Construct_UFunction_ULowEntryLatentActionStruct_GetResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionStruct_GetResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLatentActionStruct_GetResult_Statics::LowEntryLatentActionStruct_eventGetResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionStruct_GetResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionStruct_GetResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionStruct_GetResult_Statics::LowEntryLatentActionStruct_eventGetResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionStruct_GetResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionStruct_GetResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionStruct::execGetResult)
{
	P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_Result_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetResult(Z_Param_Out_Result_);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLatentActionStruct Function GetResult *****************************

// ********** Begin Class ULowEntryLatentActionStruct Function IsDone ******************************
struct Z_Construct_UFunction_ULowEntryLatentActionStruct_IsDone_Statics
{
	struct LowEntryLatentActionStruct_eventIsDone_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Struct" },
		{ "Comment", "/**\n\x09* Returns true if the latent action is done.\n\x09*/" },
		{ "DisplayName", "Is Done" },
		{ "Keywords", "end finished complete completion" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionStruct.h" },
		{ "ToolTip", "Returns true if the latent action is done." },
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
void Z_Construct_UFunction_ULowEntryLatentActionStruct_IsDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LowEntryLatentActionStruct_eventIsDone_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLatentActionStruct_IsDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LowEntryLatentActionStruct_eventIsDone_Parms), &Z_Construct_UFunction_ULowEntryLatentActionStruct_IsDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionStruct_IsDone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionStruct_IsDone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionStruct_IsDone_Statics::PropPointers) < 2048);
// ********** End Function IsDone Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionStruct_IsDone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionStruct, nullptr, "IsDone", 	Z_Construct_UFunction_ULowEntryLatentActionStruct_IsDone_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionStruct_IsDone_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLatentActionStruct_IsDone_Statics::LowEntryLatentActionStruct_eventIsDone_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionStruct_IsDone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionStruct_IsDone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionStruct_IsDone_Statics::LowEntryLatentActionStruct_eventIsDone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionStruct_IsDone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionStruct_IsDone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionStruct::execIsDone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDone();
	P_NATIVE_END;
}
// ********** End Class ULowEntryLatentActionStruct Function IsDone ********************************

// ********** Begin Class ULowEntryLatentActionStruct Function WaitTillDone ************************
struct Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone_Statics
{
	struct LowEntryLatentActionStruct_eventWaitTillDone_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		FInstancedStruct Result_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|Struct" },
		{ "Comment", "/**\n\x09* Waits till the latent action is done.\n\x09*/" },
		{ "DisplayName", "Wait Till Done" },
		{ "Keywords", "untill for end finished complete completion" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionStruct.h" },
		{ "ToolTip", "Waits till the latent action is done." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function WaitTillDone constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WaitTillDone constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WaitTillDone Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionStruct_eventWaitTillDone_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionStruct_eventWaitTillDone_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LowEntryLatentActionStruct_eventWaitTillDone_Parms, Result_), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 3949785911
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone_Statics::NewProp_Result_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone_Statics::PropPointers) < 2048);
// ********** End Function WaitTillDone Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionStruct, nullptr, "WaitTillDone", 	Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone_Statics::LowEntryLatentActionStruct_eventWaitTillDone_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone_Statics::LowEntryLatentActionStruct_eventWaitTillDone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULowEntryLatentActionStruct::execWaitTillDone)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_Result_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WaitTillDone(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Result_);
	P_NATIVE_END;
}
// ********** End Class ULowEntryLatentActionStruct Function WaitTillDone **************************

// ********** Begin Class ULowEntryLatentActionStruct **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULowEntryLatentActionStruct;
UClass* ULowEntryLatentActionStruct::GetPrivateStaticClass()
{
	using TClass = ULowEntryLatentActionStruct;
	if (!Z_Registration_Info_UClass_ULowEntryLatentActionStruct.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LowEntryLatentActionStruct"),
			Z_Registration_Info_UClass_ULowEntryLatentActionStruct.InnerSingleton,
			StaticRegisterNativesULowEntryLatentActionStruct,
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
	return Z_Registration_Info_UClass_ULowEntryLatentActionStruct.InnerSingleton;
}
UClass* Z_Construct_UClass_ULowEntryLatentActionStruct_NoRegister()
{
	return ULowEntryLatentActionStruct::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULowEntryLatentActionStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClassesLatentAction/LowEntryLatentActionStruct.h" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Finished_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeepAliveCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionStruct.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULowEntryLatentActionStruct constinit property declarations **************
	static void NewProp_Finished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Finished;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_KeepAliveCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULowEntryLatentActionStruct constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Done"), .Pointer = &ULowEntryLatentActionStruct::execDone },
		{ .NameUTF8 = UTF8TEXT("GetResult"), .Pointer = &ULowEntryLatentActionStruct::execGetResult },
		{ .NameUTF8 = UTF8TEXT("IsDone"), .Pointer = &ULowEntryLatentActionStruct::execIsDone },
		{ .NameUTF8 = UTF8TEXT("WaitTillDone"), .Pointer = &ULowEntryLatentActionStruct::execWaitTillDone },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryLatentActionStruct_Done, "Done" }, // 1244686927
		{ &Z_Construct_UFunction_ULowEntryLatentActionStruct_GetResult, "GetResult" }, // 2904393774
		{ &Z_Construct_UFunction_ULowEntryLatentActionStruct_IsDone, "IsDone" }, // 1435275177
		{ &Z_Construct_UFunction_ULowEntryLatentActionStruct_WaitTillDone, "WaitTillDone" }, // 3935520889
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryLatentActionStruct>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULowEntryLatentActionStruct_Statics

// ********** Begin Class ULowEntryLatentActionStruct Property Definitions *************************
void Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::NewProp_Finished_SetBit(void* Obj)
{
	((ULowEntryLatentActionStruct*)Obj)->Finished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::NewProp_Finished = { "Finished", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULowEntryLatentActionStruct), &Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::NewProp_Finished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Finished_MetaData), NewProp_Finished_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryLatentActionStruct, Result), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3949785911
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::NewProp_KeepAliveCount = { "KeepAliveCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryLatentActionStruct, KeepAliveCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeepAliveCount_MetaData), NewProp_KeepAliveCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::NewProp_Finished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::NewProp_KeepAliveCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::PropPointers) < 2048);
// ********** End Class ULowEntryLatentActionStruct Property Definitions ***************************
UObject* (*const Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::ClassParams = {
	&ULowEntryLatentActionStruct::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::Class_MetaDataParams), Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::Class_MetaDataParams)
};
void ULowEntryLatentActionStruct::StaticRegisterNativesULowEntryLatentActionStruct()
{
	UClass* Class = ULowEntryLatentActionStruct::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::Funcs));
}
UClass* Z_Construct_UClass_ULowEntryLatentActionStruct()
{
	if (!Z_Registration_Info_UClass_ULowEntryLatentActionStruct.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryLatentActionStruct.OuterSingleton, Z_Construct_UClass_ULowEntryLatentActionStruct_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULowEntryLatentActionStruct.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULowEntryLatentActionStruct);
ULowEntryLatentActionStruct::~ULowEntryLatentActionStruct() {}
// ********** End Class ULowEntryLatentActionStruct ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionStruct_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryLatentActionStruct, ULowEntryLatentActionStruct::StaticClass, TEXT("ULowEntryLatentActionStruct"), &Z_Registration_Info_UClass_ULowEntryLatentActionStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryLatentActionStruct), 649080165U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionStruct_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionStruct_h__Script_LowEntryExtendedStandardLibrary_2488960230{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionStruct_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionStruct_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
