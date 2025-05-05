// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGDifferenceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGDifferenceData() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGDifferenceData();
	PCG_API UClass* Z_Construct_UClass_UPCGDifferenceData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialDataWithPointCache();
	PCG_API UClass* Z_Construct_UClass_UPCGUnionData_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGDifferenceMode();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGDifferenceDensityFunction;
	static UEnum* EPCGDifferenceDensityFunction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGDifferenceDensityFunction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGDifferenceDensityFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGDifferenceDensityFunction"));
		}
		return Z_Registration_Info_UEnum_EPCGDifferenceDensityFunction.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGDifferenceDensityFunction>()
	{
		return EPCGDifferenceDensityFunction_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction_Statics::Enumerators[] = {
		{ "EPCGDifferenceDensityFunction::Minimum", (int64)EPCGDifferenceDensityFunction::Minimum },
		{ "EPCGDifferenceDensityFunction::ClampedSubstraction", (int64)EPCGDifferenceDensityFunction::ClampedSubstraction },
		{ "EPCGDifferenceDensityFunction::Binary", (int64)EPCGDifferenceDensityFunction::Binary },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction_Statics::Enum_MetaDataParams[] = {
		{ "Binary.Name", "EPCGDifferenceDensityFunction::Binary" },
		{ "ClampedSubstraction.Name", "EPCGDifferenceDensityFunction::ClampedSubstraction" },
		{ "Minimum.Name", "EPCGDifferenceDensityFunction::Minimum" },
		{ "ModuleRelativePath", "Public/Data/PCGDifferenceData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGDifferenceDensityFunction",
		"EPCGDifferenceDensityFunction",
		Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction()
	{
		if (!Z_Registration_Info_UEnum_EPCGDifferenceDensityFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGDifferenceDensityFunction.InnerSingleton, Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGDifferenceDensityFunction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGDifferenceMode;
	static UEnum* EPCGDifferenceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGDifferenceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGDifferenceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDifferenceMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGDifferenceMode"));
		}
		return Z_Registration_Info_UEnum_EPCGDifferenceMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGDifferenceMode>()
	{
		return EPCGDifferenceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGDifferenceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGDifferenceMode_Statics::Enumerators[] = {
		{ "EPCGDifferenceMode::Inferred", (int64)EPCGDifferenceMode::Inferred },
		{ "EPCGDifferenceMode::Continuous", (int64)EPCGDifferenceMode::Continuous },
		{ "EPCGDifferenceMode::Discrete", (int64)EPCGDifferenceMode::Discrete },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGDifferenceMode_Statics::Enum_MetaDataParams[] = {
		{ "Continuous.Name", "EPCGDifferenceMode::Continuous" },
		{ "Discrete.Name", "EPCGDifferenceMode::Discrete" },
		{ "Inferred.Name", "EPCGDifferenceMode::Inferred" },
		{ "ModuleRelativePath", "Public/Data/PCGDifferenceData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGDifferenceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGDifferenceMode",
		"EPCGDifferenceMode",
		Z_Construct_UEnum_PCG_EPCGDifferenceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGDifferenceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGDifferenceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGDifferenceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGDifferenceMode()
	{
		if (!Z_Registration_Info_UEnum_EPCGDifferenceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGDifferenceMode.InnerSingleton, Z_Construct_UEnum_PCG_EPCGDifferenceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGDifferenceMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UPCGDifferenceData::execSetDensityFunction)
	{
		P_GET_ENUM(EPCGDifferenceDensityFunction,Z_Param_InDensityFunction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDensityFunction(EPCGDifferenceDensityFunction(Z_Param_InDensityFunction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDifferenceData::execAddDifference)
	{
		P_GET_OBJECT(UPCGSpatialData,Z_Param_InDifference);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDifference(Z_Param_InDifference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDifferenceData::execInitialize)
	{
		P_GET_OBJECT(UPCGSpatialData,Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_InData);
		P_NATIVE_END;
	}
	void UPCGDifferenceData::StaticRegisterNativesUPCGDifferenceData()
	{
		UClass* Class = UPCGDifferenceData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDifference", &UPCGDifferenceData::execAddDifference },
			{ "Initialize", &UPCGDifferenceData::execInitialize },
			{ "SetDensityFunction", &UPCGDifferenceData::execSetDensityFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGDifferenceData_AddDifference_Statics
	{
		struct PCGDifferenceData_eventAddDifference_Parms
		{
			const UPCGSpatialData* InDifference;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDifference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDifference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDifferenceData_AddDifference_Statics::NewProp_InDifference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGDifferenceData_AddDifference_Statics::NewProp_InDifference = { "InDifference", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDifferenceData_eventAddDifference_Parms, InDifference), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGDifferenceData_AddDifference_Statics::NewProp_InDifference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDifferenceData_AddDifference_Statics::NewProp_InDifference_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDifferenceData_AddDifference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDifferenceData_AddDifference_Statics::NewProp_InDifference,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDifferenceData_AddDifference_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGDifferenceData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDifferenceData_AddDifference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDifferenceData, nullptr, "AddDifference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGDifferenceData_AddDifference_Statics::PCGDifferenceData_eventAddDifference_Parms), Z_Construct_UFunction_UPCGDifferenceData_AddDifference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDifferenceData_AddDifference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGDifferenceData_AddDifference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDifferenceData_AddDifference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGDifferenceData_AddDifference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDifferenceData_AddDifference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDifferenceData_Initialize_Statics
	{
		struct PCGDifferenceData_eventInitialize_Parms
		{
			const UPCGSpatialData* InData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDifferenceData_Initialize_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGDifferenceData_Initialize_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDifferenceData_eventInitialize_Parms, InData), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGDifferenceData_Initialize_Statics::NewProp_InData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDifferenceData_Initialize_Statics::NewProp_InData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDifferenceData_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDifferenceData_Initialize_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDifferenceData_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGDifferenceData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDifferenceData_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDifferenceData, nullptr, "Initialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGDifferenceData_Initialize_Statics::PCGDifferenceData_eventInitialize_Parms), Z_Construct_UFunction_UPCGDifferenceData_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDifferenceData_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGDifferenceData_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDifferenceData_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGDifferenceData_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDifferenceData_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction_Statics
	{
		struct PCGDifferenceData_eventSetDensityFunction_Parms
		{
			EPCGDifferenceDensityFunction InDensityFunction;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InDensityFunction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InDensityFunction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction_Statics::NewProp_InDensityFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction_Statics::NewProp_InDensityFunction = { "InDensityFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDifferenceData_eventSetDensityFunction_Parms, InDensityFunction), Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction, METADATA_PARAMS(nullptr, 0) }; // 4219407711
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction_Statics::NewProp_InDensityFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction_Statics::NewProp_InDensityFunction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/PCGDifferenceData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDifferenceData, nullptr, "SetDensityFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction_Statics::PCGDifferenceData_eventSetDensityFunction_Parms), Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGDifferenceData);
	UClass* Z_Construct_UClass_UPCGDifferenceData_NoRegister()
	{
		return UPCGDifferenceData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGDifferenceData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDiffMetadata_MetaData[];
#endif
		static void NewProp_bDiffMetadata_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDiffMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Difference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Difference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DifferencesUnion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DifferencesUnion;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DensityFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DensityFunction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGDifferenceData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSpatialDataWithPointCache,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGDifferenceData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGDifferenceData_AddDifference, "AddDifference" }, // 2652463558
		{ &Z_Construct_UFunction_UPCGDifferenceData_Initialize, "Initialize" }, // 4157116241
		{ &Z_Construct_UFunction_UPCGDifferenceData_SetDensityFunction, "SetDensityFunction" }, // 1171194812
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDifferenceData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/PCGDifferenceData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGDifferenceData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_bDiffMetadata_MetaData[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGDifferenceData.h" },
	};
#endif
	void Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_bDiffMetadata_SetBit(void* Obj)
	{
		((UPCGDifferenceData*)Obj)->bDiffMetadata = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_bDiffMetadata = { "bDiffMetadata", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGDifferenceData), &Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_bDiffMetadata_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_bDiffMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_bDiffMetadata_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGDifferenceData.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDifferenceData, Source), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_Difference_MetaData[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGDifferenceData.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_Difference = { "Difference", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDifferenceData, Difference), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_Difference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_Difference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_DifferencesUnion_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGDifferenceData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_DifferencesUnion = { "DifferencesUnion", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDifferenceData, DifferencesUnion), Z_Construct_UClass_UPCGUnionData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_DifferencesUnion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_DifferencesUnion_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_DensityFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_DensityFunction_MetaData[] = {
		{ "BlueprintSetter", "SetDensityFunction" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/PCGDifferenceData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_DensityFunction = { "DensityFunction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDifferenceData, DensityFunction), Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction, METADATA_PARAMS(Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_DensityFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_DensityFunction_MetaData)) }; // 4219407711
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGDifferenceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_bDiffMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_Difference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_DifferencesUnion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_DensityFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDifferenceData_Statics::NewProp_DensityFunction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGDifferenceData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGDifferenceData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGDifferenceData_Statics::ClassParams = {
		&UPCGDifferenceData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGDifferenceData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDifferenceData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGDifferenceData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDifferenceData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGDifferenceData()
	{
		if (!Z_Registration_Info_UClass_UPCGDifferenceData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGDifferenceData.OuterSingleton, Z_Construct_UClass_UPCGDifferenceData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGDifferenceData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGDifferenceData>()
	{
		return UPCGDifferenceData::StaticClass();
	}
	UPCGDifferenceData::UPCGDifferenceData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGDifferenceData);
	UPCGDifferenceData::~UPCGDifferenceData() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h_Statics::EnumInfo[] = {
		{ EPCGDifferenceDensityFunction_StaticEnum, TEXT("EPCGDifferenceDensityFunction"), &Z_Registration_Info_UEnum_EPCGDifferenceDensityFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4219407711U) },
		{ EPCGDifferenceMode_StaticEnum, TEXT("EPCGDifferenceMode"), &Z_Registration_Info_UEnum_EPCGDifferenceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2042654028U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGDifferenceData, UPCGDifferenceData::StaticClass, TEXT("UPCGDifferenceData"), &Z_Registration_Info_UClass_UPCGDifferenceData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGDifferenceData), 3542966807U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h_933740913(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGDifferenceData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
