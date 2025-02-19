// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGUnionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGUnionData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialDataWithPointCache();
	PCG_API UClass* Z_Construct_UClass_UPCGUnionData();
	PCG_API UClass* Z_Construct_UClass_UPCGUnionData_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGUnionDensityFunction();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGUnionType();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGUnionType;
	static UEnum* EPCGUnionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGUnionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGUnionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGUnionType, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGUnionType"));
		}
		return Z_Registration_Info_UEnum_EPCGUnionType.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGUnionType>()
	{
		return EPCGUnionType_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGUnionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGUnionType_Statics::Enumerators[] = {
		{ "EPCGUnionType::LeftToRightPriority", (int64)EPCGUnionType::LeftToRightPriority },
		{ "EPCGUnionType::RightToLeftPriority", (int64)EPCGUnionType::RightToLeftPriority },
		{ "EPCGUnionType::KeepAll", (int64)EPCGUnionType::KeepAll },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGUnionType_Statics::Enum_MetaDataParams[] = {
		{ "KeepAll.Name", "EPCGUnionType::KeepAll" },
		{ "LeftToRightPriority.Name", "EPCGUnionType::LeftToRightPriority" },
		{ "ModuleRelativePath", "Public/Data/PCGUnionData.h" },
		{ "RightToLeftPriority.Name", "EPCGUnionType::RightToLeftPriority" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGUnionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGUnionType",
		"EPCGUnionType",
		Z_Construct_UEnum_PCG_EPCGUnionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGUnionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGUnionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGUnionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGUnionType()
	{
		if (!Z_Registration_Info_UEnum_EPCGUnionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGUnionType.InnerSingleton, Z_Construct_UEnum_PCG_EPCGUnionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGUnionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGUnionDensityFunction;
	static UEnum* EPCGUnionDensityFunction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGUnionDensityFunction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGUnionDensityFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGUnionDensityFunction, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGUnionDensityFunction"));
		}
		return Z_Registration_Info_UEnum_EPCGUnionDensityFunction.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGUnionDensityFunction>()
	{
		return EPCGUnionDensityFunction_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGUnionDensityFunction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGUnionDensityFunction_Statics::Enumerators[] = {
		{ "EPCGUnionDensityFunction::Maximum", (int64)EPCGUnionDensityFunction::Maximum },
		{ "EPCGUnionDensityFunction::ClampedAddition", (int64)EPCGUnionDensityFunction::ClampedAddition },
		{ "EPCGUnionDensityFunction::Binary", (int64)EPCGUnionDensityFunction::Binary },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGUnionDensityFunction_Statics::Enum_MetaDataParams[] = {
		{ "Binary.Name", "EPCGUnionDensityFunction::Binary" },
		{ "ClampedAddition.Name", "EPCGUnionDensityFunction::ClampedAddition" },
		{ "Maximum.Name", "EPCGUnionDensityFunction::Maximum" },
		{ "ModuleRelativePath", "Public/Data/PCGUnionData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGUnionDensityFunction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGUnionDensityFunction",
		"EPCGUnionDensityFunction",
		Z_Construct_UEnum_PCG_EPCGUnionDensityFunction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGUnionDensityFunction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGUnionDensityFunction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGUnionDensityFunction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGUnionDensityFunction()
	{
		if (!Z_Registration_Info_UEnum_EPCGUnionDensityFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGUnionDensityFunction.InnerSingleton, Z_Construct_UEnum_PCG_EPCGUnionDensityFunction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGUnionDensityFunction.InnerSingleton;
	}
	DEFINE_FUNCTION(UPCGUnionData::execAddData)
	{
		P_GET_OBJECT(UPCGSpatialData,Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddData(Z_Param_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGUnionData::execInitialize)
	{
		P_GET_OBJECT(UPCGSpatialData,Z_Param_InA);
		P_GET_OBJECT(UPCGSpatialData,Z_Param_InB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_InA,Z_Param_InB);
		P_NATIVE_END;
	}
	void UPCGUnionData::StaticRegisterNativesUPCGUnionData()
	{
		UClass* Class = UPCGUnionData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddData", &UPCGUnionData::execAddData },
			{ "Initialize", &UPCGUnionData::execInitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGUnionData_AddData_Statics
	{
		struct PCGUnionData_eventAddData_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGUnionData_AddData_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGUnionData_AddData_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGUnionData_eventAddData_Parms, InData), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGUnionData_AddData_Statics::NewProp_InData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGUnionData_AddData_Statics::NewProp_InData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGUnionData_AddData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGUnionData_AddData_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGUnionData_AddData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGUnionData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGUnionData_AddData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGUnionData, nullptr, "AddData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGUnionData_AddData_Statics::PCGUnionData_eventAddData_Parms), Z_Construct_UFunction_UPCGUnionData_AddData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGUnionData_AddData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGUnionData_AddData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGUnionData_AddData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGUnionData_AddData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGUnionData_AddData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGUnionData_Initialize_Statics
	{
		struct PCGUnionData_eventInitialize_Parms
		{
			const UPCGSpatialData* InA;
			const UPCGSpatialData* InB;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::NewProp_InA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::NewProp_InA = { "InA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGUnionData_eventInitialize_Parms, InA), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::NewProp_InA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::NewProp_InA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::NewProp_InB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::NewProp_InB = { "InB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGUnionData_eventInitialize_Parms, InB), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::NewProp_InB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::NewProp_InB_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::NewProp_InA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::NewProp_InB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGUnionData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGUnionData, nullptr, "Initialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::PCGUnionData_eventInitialize_Parms), Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGUnionData_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGUnionData_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGUnionData);
	UClass* Z_Construct_UClass_UPCGUnionData_NoRegister()
	{
		return UPCGUnionData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGUnionData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstNonTrivialTransformData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FirstNonTrivialTransformData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UnionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UnionType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DensityFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DensityFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedStrictBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedStrictBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedDimension_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CachedDimension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGUnionData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSpatialDataWithPointCache,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGUnionData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGUnionData_AddData, "AddData" }, // 2700736265
		{ &Z_Construct_UFunction_UPCGUnionData_Initialize, "Initialize" }, // 3206476323
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUnionData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/PCGUnionData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGUnionData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGUnionData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUnionData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGUnionData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGUnionData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGUnionData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGUnionData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUnionData_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUnionData_Statics::NewProp_FirstNonTrivialTransformData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGUnionData.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGUnionData_Statics::NewProp_FirstNonTrivialTransformData = { "FirstNonTrivialTransformData", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGUnionData, FirstNonTrivialTransformData), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGUnionData_Statics::NewProp_FirstNonTrivialTransformData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUnionData_Statics::NewProp_FirstNonTrivialTransformData_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGUnionData_Statics::NewProp_UnionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUnionData_Statics::NewProp_UnionType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/PCGUnionData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGUnionData_Statics::NewProp_UnionType = { "UnionType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGUnionData, UnionType), Z_Construct_UEnum_PCG_EPCGUnionType, METADATA_PARAMS(Z_Construct_UClass_UPCGUnionData_Statics::NewProp_UnionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUnionData_Statics::NewProp_UnionType_MetaData)) }; // 422985877
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGUnionData_Statics::NewProp_DensityFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUnionData_Statics::NewProp_DensityFunction_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/PCGUnionData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGUnionData_Statics::NewProp_DensityFunction = { "DensityFunction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGUnionData, DensityFunction), Z_Construct_UEnum_PCG_EPCGUnionDensityFunction, METADATA_PARAMS(Z_Construct_UClass_UPCGUnionData_Statics::NewProp_DensityFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUnionData_Statics::NewProp_DensityFunction_MetaData)) }; // 2650195071
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUnionData_Statics::NewProp_CachedBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGUnionData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGUnionData_Statics::NewProp_CachedBounds = { "CachedBounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGUnionData, CachedBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UPCGUnionData_Statics::NewProp_CachedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUnionData_Statics::NewProp_CachedBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUnionData_Statics::NewProp_CachedStrictBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGUnionData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGUnionData_Statics::NewProp_CachedStrictBounds = { "CachedStrictBounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGUnionData, CachedStrictBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UPCGUnionData_Statics::NewProp_CachedStrictBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUnionData_Statics::NewProp_CachedStrictBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUnionData_Statics::NewProp_CachedDimension_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGUnionData.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPCGUnionData_Statics::NewProp_CachedDimension = { "CachedDimension", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGUnionData, CachedDimension), METADATA_PARAMS(Z_Construct_UClass_UPCGUnionData_Statics::NewProp_CachedDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUnionData_Statics::NewProp_CachedDimension_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGUnionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUnionData_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUnionData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUnionData_Statics::NewProp_FirstNonTrivialTransformData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUnionData_Statics::NewProp_UnionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUnionData_Statics::NewProp_UnionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUnionData_Statics::NewProp_DensityFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUnionData_Statics::NewProp_DensityFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUnionData_Statics::NewProp_CachedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUnionData_Statics::NewProp_CachedStrictBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUnionData_Statics::NewProp_CachedDimension,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGUnionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGUnionData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGUnionData_Statics::ClassParams = {
		&UPCGUnionData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGUnionData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUnionData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGUnionData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUnionData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGUnionData()
	{
		if (!Z_Registration_Info_UClass_UPCGUnionData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGUnionData.OuterSingleton, Z_Construct_UClass_UPCGUnionData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGUnionData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGUnionData>()
	{
		return UPCGUnionData::StaticClass();
	}
	UPCGUnionData::UPCGUnionData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGUnionData);
	UPCGUnionData::~UPCGUnionData() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_Statics::EnumInfo[] = {
		{ EPCGUnionType_StaticEnum, TEXT("EPCGUnionType"), &Z_Registration_Info_UEnum_EPCGUnionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 422985877U) },
		{ EPCGUnionDensityFunction_StaticEnum, TEXT("EPCGUnionDensityFunction"), &Z_Registration_Info_UEnum_EPCGUnionDensityFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2650195071U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGUnionData, UPCGUnionData::StaticClass, TEXT("UPCGUnionData"), &Z_Registration_Info_UClass_UPCGUnionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGUnionData), 3056044819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_1507738722(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
