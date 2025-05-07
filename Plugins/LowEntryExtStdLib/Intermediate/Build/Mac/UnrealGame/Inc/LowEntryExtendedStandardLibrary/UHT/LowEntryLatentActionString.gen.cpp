// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../ClassesLatentAction/LowEntryLatentActionString.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryLatentActionString() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLatentActionString();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLatentActionString_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References
	DEFINE_FUNCTION(ULowEntryLatentActionString::execGetResult)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Result_);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetResult(Z_Param_Out_Result_);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLatentActionString::execIsDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLatentActionString::execDone)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Result_);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Done(Z_Param_Result_);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryLatentActionString::execWaitTillDone)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Result_);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WaitTillDone(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Result_);
		P_NATIVE_END;
	}
	void ULowEntryLatentActionString::StaticRegisterNativesULowEntryLatentActionString()
	{
		UClass* Class = ULowEntryLatentActionString::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Done", &ULowEntryLatentActionString::execDone },
			{ "GetResult", &ULowEntryLatentActionString::execGetResult },
			{ "IsDone", &ULowEntryLatentActionString::execIsDone },
			{ "WaitTillDone", &ULowEntryLatentActionString::execWaitTillDone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics
	{
		struct LowEntryLatentActionString_eventDone_Parms
		{
			FString Result_;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result_;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLatentActionString_eventDone_Parms, Result_), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::NewProp_Result_,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|String" },
		{ "Comment", "/**\n\x09* Causes the latent action to be done.\n\x09*/" },
		{ "DisplayName", "Done" },
		{ "Keywords", "end finished complete completion" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionString.h" },
		{ "ToolTip", "Causes the latent action to be done." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionString, nullptr, "Done", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::LowEntryLatentActionString_eventDone_Parms), Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLatentActionString_Done()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionString_Done_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics
	{
		struct LowEntryLatentActionString_eventGetResult_Parms
		{
			FString Result_;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result_;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLatentActionString_eventGetResult_Parms, Result_), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::NewProp_Result_,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|String" },
		{ "Comment", "/**\n\x09* Returns the result.\n\x09*/" },
		{ "DisplayName", "Get Result" },
		{ "Keywords", "result return value" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionString.h" },
		{ "ToolTip", "Returns the result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionString, nullptr, "GetResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::LowEntryLatentActionString_eventGetResult_Parms), Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLatentActionString_GetResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionString_GetResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics
	{
		struct LowEntryLatentActionString_eventIsDone_Parms
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
	void Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryLatentActionString_eventIsDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LowEntryLatentActionString_eventIsDone_Parms), &Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|String" },
		{ "Comment", "/**\n\x09* Returns true if the latent action is done.\n\x09*/" },
		{ "DisplayName", "Is Done" },
		{ "Keywords", "end finished complete completion" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionString.h" },
		{ "ToolTip", "Returns true if the latent action is done." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionString, nullptr, "IsDone", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::LowEntryLatentActionString_eventIsDone_Parms), Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLatentActionString_IsDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionString_IsDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics
	{
		struct LowEntryLatentActionString_eventWaitTillDone_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString Result_;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result_;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLatentActionString_eventWaitTillDone_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLatentActionString_eventWaitTillDone_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::NewProp_Result_ = { "Result_", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryLatentActionString_eventWaitTillDone_Parms, Result_), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::NewProp_Result_,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Latent Action|String" },
		{ "Comment", "/**\n\x09* Waits till the latent action is done.\n\x09*/" },
		{ "DisplayName", "Wait Till Done" },
		{ "Keywords", "untill for end finished complete completion" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionString.h" },
		{ "ToolTip", "Waits till the latent action is done." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryLatentActionString, nullptr, "WaitTillDone", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::LowEntryLatentActionString_eventWaitTillDone_Parms), Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULowEntryLatentActionString);
	UClass* Z_Construct_UClass_ULowEntryLatentActionString_NoRegister()
	{
		return ULowEntryLatentActionString::StaticClass();
	}
	struct Z_Construct_UClass_ULowEntryLatentActionString_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Finished_MetaData[];
#endif
		static void NewProp_Finished_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Finished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeepAliveCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeepAliveCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULowEntryLatentActionString_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULowEntryLatentActionString_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryLatentActionString_Done, "Done" }, // 2591848325
		{ &Z_Construct_UFunction_ULowEntryLatentActionString_GetResult, "GetResult" }, // 3121764930
		{ &Z_Construct_UFunction_ULowEntryLatentActionString_IsDone, "IsDone" }, // 734615798
		{ &Z_Construct_UFunction_ULowEntryLatentActionString_WaitTillDone, "WaitTillDone" }, // 1827358158
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryLatentActionString_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClassesLatentAction/LowEntryLatentActionString.h" },
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionString.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Finished_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionString.h" },
	};
#endif
	void Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Finished_SetBit(void* Obj)
	{
		((ULowEntryLatentActionString*)Obj)->Finished = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Finished = { "Finished", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULowEntryLatentActionString), &Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Finished_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Finished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Finished_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionString.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULowEntryLatentActionString, Result), METADATA_PARAMS(Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_KeepAliveCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesLatentAction/LowEntryLatentActionString.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_KeepAliveCount = { "KeepAliveCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULowEntryLatentActionString, KeepAliveCount), METADATA_PARAMS(Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_KeepAliveCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_KeepAliveCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryLatentActionString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Finished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryLatentActionString_Statics::NewProp_KeepAliveCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowEntryLatentActionString_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryLatentActionString>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryLatentActionString_Statics::ClassParams = {
		&ULowEntryLatentActionString::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULowEntryLatentActionString_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionString_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULowEntryLatentActionString_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryLatentActionString_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowEntryLatentActionString()
	{
		if (!Z_Registration_Info_UClass_ULowEntryLatentActionString.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryLatentActionString.OuterSingleton, Z_Construct_UClass_ULowEntryLatentActionString_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULowEntryLatentActionString.OuterSingleton;
	}
	template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* StaticClass<ULowEntryLatentActionString>()
	{
		return ULowEntryLatentActionString::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryLatentActionString);
	ULowEntryLatentActionString::~ULowEntryLatentActionString() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionString_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionString_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryLatentActionString, ULowEntryLatentActionString::StaticClass, TEXT("ULowEntryLatentActionString"), &Z_Registration_Info_UClass_ULowEntryLatentActionString, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryLatentActionString), 2205068286U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionString_h_31408222(TEXT("/Script/LowEntryExtendedStandardLibrary"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionString_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_LowEntryExtStdLib_Source_LowEntryExtendedStandardLibrary_Public_ClassesLatentAction_LowEntryLatentActionString_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
