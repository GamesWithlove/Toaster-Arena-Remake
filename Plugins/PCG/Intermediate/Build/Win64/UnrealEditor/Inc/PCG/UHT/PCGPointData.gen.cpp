// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGPointData.h"
#include "PCG/Public/PCGPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPointData() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGPointData();
	PCG_API UClass* Z_Construct_UClass_UPCGPointData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialData();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPoint();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	DEFINE_FUNCTION(UPCGPointData::execCopyPointsFrom)
	{
		P_GET_OBJECT(UPCGPointData,Z_Param_InData);
		P_GET_TARRAY_REF(int32,Z_Param_Out_InDataIndices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyPointsFrom(Z_Param_InData,Z_Param_Out_InDataIndices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGPointData::execSetPoints)
	{
		P_GET_TARRAY_REF(FPCGPoint,Z_Param_Out_InPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPoints(Z_Param_Out_InPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGPointData::execGetPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPCGPoint*)Z_Param__Result=P_THIS->GetPoint(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGPointData::execGetPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGPoint>*)Z_Param__Result=P_THIS->GetPoints();
		P_NATIVE_END;
	}
	void UPCGPointData::StaticRegisterNativesUPCGPointData()
	{
		UClass* Class = UPCGPointData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyPointsFrom", &UPCGPointData::execCopyPointsFrom },
			{ "GetPoint", &UPCGPointData::execGetPoint },
			{ "GetPoints", &UPCGPointData::execGetPoints },
			{ "SetPoints", &UPCGPointData::execSetPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics
	{
		struct PCGPointData_eventCopyPointsFrom_Parms
		{
			const UPCGPointData* InData;
			TArray<int32> InDataIndices;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InData;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InDataIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InDataIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGPointData_eventCopyPointsFrom_Parms, InData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::NewProp_InData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::NewProp_InData_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::NewProp_InDataIndices_Inner = { "InDataIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::NewProp_InDataIndices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::NewProp_InDataIndices = { "InDataIndices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGPointData_eventCopyPointsFrom_Parms, InDataIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::NewProp_InDataIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::NewProp_InDataIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::NewProp_InData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::NewProp_InDataIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::NewProp_InDataIndices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGPointData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGPointData, nullptr, "CopyPointsFrom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::PCGPointData_eventCopyPointsFrom_Parms), Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGPointData_CopyPointsFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGPointData_CopyPointsFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGPointData_GetPoint_Statics
	{
		struct PCGPointData_eventGetPoint_Parms
		{
			int32 Index;
			FPCGPoint ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGPointData_GetPoint_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGPointData_eventGetPoint_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGPointData_GetPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGPointData_eventGetPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGPointData_GetPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGPointData_GetPoint_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGPointData_GetPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGPointData_GetPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGPointData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGPointData_GetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGPointData, nullptr, "GetPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGPointData_GetPoint_Statics::PCGPointData_eventGetPoint_Parms), Z_Construct_UFunction_UPCGPointData_GetPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPointData_GetPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGPointData_GetPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPointData_GetPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGPointData_GetPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGPointData_GetPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGPointData_GetPoints_Statics
	{
		struct PCGPointData_eventGetPoints_Parms
		{
			TArray<FPCGPoint> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGPointData_GetPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGPointData_GetPoints_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGPointData_GetPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGPointData_eventGetPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPCGPointData_GetPoints_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPointData_GetPoints_Statics::NewProp_ReturnValue_MetaData)) }; // 877907965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGPointData_GetPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGPointData_GetPoints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGPointData_GetPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGPointData_GetPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGPointData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGPointData_GetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGPointData, nullptr, "GetPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGPointData_GetPoints_Statics::PCGPointData_eventGetPoints_Parms), Z_Construct_UFunction_UPCGPointData_GetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPointData_GetPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGPointData_GetPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPointData_GetPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGPointData_GetPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGPointData_GetPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGPointData_SetPoints_Statics
	{
		struct PCGPointData_eventSetPoints_Parms
		{
			TArray<FPCGPoint> InPoints;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGPointData_SetPoints_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGPointData_SetPoints_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGPointData_SetPoints_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGPointData_eventSetPoints_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPCGPointData_SetPoints_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPointData_SetPoints_Statics::NewProp_InPoints_MetaData)) }; // 877907965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGPointData_SetPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGPointData_SetPoints_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGPointData_SetPoints_Statics::NewProp_InPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGPointData_SetPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGPointData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGPointData_SetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGPointData, nullptr, "SetPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGPointData_SetPoints_Statics::PCGPointData_eventSetPoints_Parms), Z_Construct_UFunction_UPCGPointData_SetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPointData_SetPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGPointData_SetPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPointData_SetPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGPointData_SetPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGPointData_SetPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPointData);
	UClass* Z_Construct_UClass_UPCGPointData_NoRegister()
	{
		return UPCGPointData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGPointData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGPointData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSpatialData,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGPointData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGPointData_CopyPointsFrom, "CopyPointsFrom" }, // 3702687744
		{ &Z_Construct_UFunction_UPCGPointData_GetPoint, "GetPoint" }, // 1948031669
		{ &Z_Construct_UFunction_UPCGPointData_GetPoints, "GetPoints" }, // 2287360348
		{ &Z_Construct_UFunction_UPCGPointData_SetPoints, "SetPoints" }, // 118279575
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "// TODO: Split this in \"concrete\" vs \"api\" class (needed for views)\n" },
		{ "IncludePath", "Data/PCGPointData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGPointData.h" },
		{ "ToolTip", "TODO: Split this in \"concrete\" vs \"api\" class (needed for views)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointData_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointData_Statics::NewProp_Points_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGPointData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGPointData_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointData, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGPointData_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointData_Statics::NewProp_Points_MetaData)) }; // 877907965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPointData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointData_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointData_Statics::NewProp_Points,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGPointData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPointData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPointData_Statics::ClassParams = {
		&UPCGPointData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGPointData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGPointData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGPointData()
	{
		if (!Z_Registration_Info_UClass_UPCGPointData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPointData.OuterSingleton, Z_Construct_UClass_UPCGPointData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGPointData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGPointData>()
	{
		return UPCGPointData::StaticClass();
	}
	UPCGPointData::UPCGPointData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPointData);
	UPCGPointData::~UPCGPointData() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGPointData, UPCGPointData::StaticClass, TEXT("UPCGPointData"), &Z_Registration_Info_UClass_UPCGPointData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPointData), 3030630492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_463436134(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
