// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGIntersectionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGIntersectionData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	PCG_API UClass* Z_Construct_UClass_UPCGIntersectionData();
	PCG_API UClass* Z_Construct_UClass_UPCGIntersectionData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialDataWithPointCache();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGIntersectionDensityFunction;
	static UEnum* EPCGIntersectionDensityFunction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGIntersectionDensityFunction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGIntersectionDensityFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGIntersectionDensityFunction"));
		}
		return Z_Registration_Info_UEnum_EPCGIntersectionDensityFunction.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGIntersectionDensityFunction>()
	{
		return EPCGIntersectionDensityFunction_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction_Statics::Enumerators[] = {
		{ "EPCGIntersectionDensityFunction::Multiply", (int64)EPCGIntersectionDensityFunction::Multiply },
		{ "EPCGIntersectionDensityFunction::Minimum", (int64)EPCGIntersectionDensityFunction::Minimum },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction_Statics::Enum_MetaDataParams[] = {
		{ "Minimum.Name", "EPCGIntersectionDensityFunction::Minimum" },
		{ "ModuleRelativePath", "Public/Data/PCGIntersectionData.h" },
		{ "Multiply.Name", "EPCGIntersectionDensityFunction::Multiply" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGIntersectionDensityFunction",
		"EPCGIntersectionDensityFunction",
		Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction()
	{
		if (!Z_Registration_Info_UEnum_EPCGIntersectionDensityFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGIntersectionDensityFunction.InnerSingleton, Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGIntersectionDensityFunction.InnerSingleton;
	}
	DEFINE_FUNCTION(UPCGIntersectionData::execInitialize)
	{
		P_GET_OBJECT(UPCGSpatialData,Z_Param_InA);
		P_GET_OBJECT(UPCGSpatialData,Z_Param_InB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_InA,Z_Param_InB);
		P_NATIVE_END;
	}
	void UPCGIntersectionData::StaticRegisterNativesUPCGIntersectionData()
	{
		UClass* Class = UPCGIntersectionData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialize", &UPCGIntersectionData::execInitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics
	{
		struct PCGIntersectionData_eventInitialize_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::NewProp_InA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::NewProp_InA = { "InA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGIntersectionData_eventInitialize_Parms, InA), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::NewProp_InA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::NewProp_InA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::NewProp_InB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::NewProp_InB = { "InB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGIntersectionData_eventInitialize_Parms, InB), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::NewProp_InB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::NewProp_InB_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::NewProp_InA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::NewProp_InB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGIntersectionData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGIntersectionData, nullptr, "Initialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::PCGIntersectionData_eventInitialize_Parms), Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGIntersectionData_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGIntersectionData_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGIntersectionData);
	UClass* Z_Construct_UClass_UPCGIntersectionData_NoRegister()
	{
		return UPCGIntersectionData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGIntersectionData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DensityFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DensityFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedStrictBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedStrictBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGIntersectionData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSpatialDataWithPointCache,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGIntersectionData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGIntersectionData_Initialize, "Initialize" }, // 119564437
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGIntersectionData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Generic intersection class that delays operations as long as possible.\n*/" },
		{ "IncludePath", "Data/PCGIntersectionData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGIntersectionData.h" },
		{ "ToolTip", "Generic intersection class that delays operations as long as possible." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_DensityFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_DensityFunction_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/PCGIntersectionData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_DensityFunction = { "DensityFunction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGIntersectionData, DensityFunction), Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction, METADATA_PARAMS(Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_DensityFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_DensityFunction_MetaData)) }; // 2206197230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_A_MetaData[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGIntersectionData.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGIntersectionData, A), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_B_MetaData[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGIntersectionData.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGIntersectionData, B), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_CachedBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGIntersectionData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_CachedBounds = { "CachedBounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGIntersectionData, CachedBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_CachedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_CachedBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_CachedStrictBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGIntersectionData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_CachedStrictBounds = { "CachedStrictBounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGIntersectionData, CachedStrictBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_CachedStrictBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_CachedStrictBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGIntersectionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_DensityFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_DensityFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_CachedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGIntersectionData_Statics::NewProp_CachedStrictBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGIntersectionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGIntersectionData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGIntersectionData_Statics::ClassParams = {
		&UPCGIntersectionData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGIntersectionData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGIntersectionData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGIntersectionData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGIntersectionData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGIntersectionData()
	{
		if (!Z_Registration_Info_UClass_UPCGIntersectionData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGIntersectionData.OuterSingleton, Z_Construct_UClass_UPCGIntersectionData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGIntersectionData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGIntersectionData>()
	{
		return UPCGIntersectionData::StaticClass();
	}
	UPCGIntersectionData::UPCGIntersectionData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGIntersectionData);
	UPCGIntersectionData::~UPCGIntersectionData() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h_Statics::EnumInfo[] = {
		{ EPCGIntersectionDensityFunction_StaticEnum, TEXT("EPCGIntersectionDensityFunction"), &Z_Registration_Info_UEnum_EPCGIntersectionDensityFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2206197230U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGIntersectionData, UPCGIntersectionData::StaticClass, TEXT("UPCGIntersectionData"), &Z_Registration_Info_UClass_UPCGIntersectionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGIntersectionData), 2878613690U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h_3792218305(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGIntersectionData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
