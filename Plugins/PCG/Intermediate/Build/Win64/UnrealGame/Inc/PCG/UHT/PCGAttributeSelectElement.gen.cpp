// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGAttributeSelectElement.h"
#include "PCG/Public/Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGAttributeSelectElement() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	PCG_API UClass* Z_Construct_UClass_UPCGAttributeSelectSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGAttributeSelectSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGAttributeSelectAxis();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGAttributeSelectOperation();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertySelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGAttributeSelectOperation;
	static UEnum* EPCGAttributeSelectOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttributeSelectOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGAttributeSelectOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGAttributeSelectOperation, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGAttributeSelectOperation"));
		}
		return Z_Registration_Info_UEnum_EPCGAttributeSelectOperation.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGAttributeSelectOperation>()
	{
		return EPCGAttributeSelectOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGAttributeSelectOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGAttributeSelectOperation_Statics::Enumerators[] = {
		{ "EPCGAttributeSelectOperation::Min", (int64)EPCGAttributeSelectOperation::Min },
		{ "EPCGAttributeSelectOperation::Max", (int64)EPCGAttributeSelectOperation::Max },
		{ "EPCGAttributeSelectOperation::Median", (int64)EPCGAttributeSelectOperation::Median },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGAttributeSelectOperation_Statics::Enum_MetaDataParams[] = {
		{ "Max.Name", "EPCGAttributeSelectOperation::Max" },
		{ "Median.Name", "EPCGAttributeSelectOperation::Median" },
		{ "Min.Name", "EPCGAttributeSelectOperation::Min" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeSelectElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGAttributeSelectOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGAttributeSelectOperation",
		"EPCGAttributeSelectOperation",
		Z_Construct_UEnum_PCG_EPCGAttributeSelectOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttributeSelectOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGAttributeSelectOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttributeSelectOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGAttributeSelectOperation()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttributeSelectOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGAttributeSelectOperation.InnerSingleton, Z_Construct_UEnum_PCG_EPCGAttributeSelectOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGAttributeSelectOperation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGAttributeSelectAxis;
	static UEnum* EPCGAttributeSelectAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttributeSelectAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGAttributeSelectAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGAttributeSelectAxis, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGAttributeSelectAxis"));
		}
		return Z_Registration_Info_UEnum_EPCGAttributeSelectAxis.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGAttributeSelectAxis>()
	{
		return EPCGAttributeSelectAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGAttributeSelectAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGAttributeSelectAxis_Statics::Enumerators[] = {
		{ "EPCGAttributeSelectAxis::X", (int64)EPCGAttributeSelectAxis::X },
		{ "EPCGAttributeSelectAxis::Y", (int64)EPCGAttributeSelectAxis::Y },
		{ "EPCGAttributeSelectAxis::Z", (int64)EPCGAttributeSelectAxis::Z },
		{ "EPCGAttributeSelectAxis::W", (int64)EPCGAttributeSelectAxis::W },
		{ "EPCGAttributeSelectAxis::CustomAxis", (int64)EPCGAttributeSelectAxis::CustomAxis },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGAttributeSelectAxis_Statics::Enum_MetaDataParams[] = {
		{ "CustomAxis.Name", "EPCGAttributeSelectAxis::CustomAxis" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeSelectElement.h" },
		{ "W.Name", "EPCGAttributeSelectAxis::W" },
		{ "X.Name", "EPCGAttributeSelectAxis::X" },
		{ "Y.Name", "EPCGAttributeSelectAxis::Y" },
		{ "Z.Name", "EPCGAttributeSelectAxis::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGAttributeSelectAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGAttributeSelectAxis",
		"EPCGAttributeSelectAxis",
		Z_Construct_UEnum_PCG_EPCGAttributeSelectAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttributeSelectAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGAttributeSelectAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttributeSelectAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGAttributeSelectAxis()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttributeSelectAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGAttributeSelectAxis.InnerSingleton, Z_Construct_UEnum_PCG_EPCGAttributeSelectAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGAttributeSelectAxis.InnerSingleton;
	}
	void UPCGAttributeSelectSettings::StaticRegisterNativesUPCGAttributeSelectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGAttributeSelectSettings);
	UClass* Z_Construct_UClass_UPCGAttributeSelectSettings_NoRegister()
	{
		return UPCGAttributeSelectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGAttributeSelectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSource_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputAttributeName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Axis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomAxis;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputAttributeName;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Take all the entries/points from the input and perform a select operation on the given attribute/property on the given axis \n* (if the attribute/property is a vector) and output the result into a ParamData.\n* It will also output the selected point if the input is a PointData.\n* \n* Only support vector attributes and scalar attributes.\n* \n* CustomAxis is overridable.\n* \n* In case of the median operation, and the number of elements is even, we arbitrarily chose a point (Index = Num / 2)\n*\n* If the OutputAttributeName is None, we will use InputSource.GetName().\n*/" },
		{ "IncludePath", "Elements/PCGAttributeSelectElement.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeSelectElement.h" },
		{ "ToolTip", "Take all the entries/points from the input and perform a select operation on the given attribute/property on the given axis\n(if the attribute/property is a vector) and output the result into a ParamData.\nIt will also output the selected point if the input is a PointData.\n\nOnly support vector attributes and scalar attributes.\n\nCustomAxis is overridable.\n\nIn case of the median operation, and the number of elements is even, we arbitrarily chose a point (Index = Num / 2)\n\nIf the OutputAttributeName is None, we will use InputSource.GetName()." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_InputSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//~End UPCGSettings interface\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeSelectElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_InputSource = { "InputSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGAttributeSelectSettings, InputSource), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_InputSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_InputSource_MetaData)) }; // 3655039818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_OutputAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeSelectElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_OutputAttributeName = { "OutputAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGAttributeSelectSettings, OutputAttributeName), METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_OutputAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_OutputAttributeName_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeSelectElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGAttributeSelectSettings, Operation), Z_Construct_UEnum_PCG_EPCGAttributeSelectOperation, METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_Operation_MetaData)) }; // 2182745099
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeSelectElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGAttributeSelectSettings, Axis), Z_Construct_UEnum_PCG_EPCGAttributeSelectAxis, METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_Axis_MetaData)) }; // 2232234684
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_CustomAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Axis == EPCGAttributeSelectAxis::CustomAxis" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeSelectElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_CustomAxis = { "CustomAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGAttributeSelectSettings, CustomAxis), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_CustomAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_CustomAxis_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_InputAttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeSelectElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_InputAttributeName = { "InputAttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGAttributeSelectSettings, InputAttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_InputAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_InputAttributeName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_InputSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_OutputAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_CustomAxis,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::NewProp_InputAttributeName,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGAttributeSelectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::ClassParams = {
		&UPCGAttributeSelectSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGAttributeSelectSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGAttributeSelectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGAttributeSelectSettings.OuterSingleton, Z_Construct_UClass_UPCGAttributeSelectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGAttributeSelectSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGAttributeSelectSettings>()
	{
		return UPCGAttributeSelectSettings::StaticClass();
	}
	UPCGAttributeSelectSettings::UPCGAttributeSelectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGAttributeSelectSettings);
	UPCGAttributeSelectSettings::~UPCGAttributeSelectSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeSelectElement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeSelectElement_h_Statics::EnumInfo[] = {
		{ EPCGAttributeSelectOperation_StaticEnum, TEXT("EPCGAttributeSelectOperation"), &Z_Registration_Info_UEnum_EPCGAttributeSelectOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2182745099U) },
		{ EPCGAttributeSelectAxis_StaticEnum, TEXT("EPCGAttributeSelectAxis"), &Z_Registration_Info_UEnum_EPCGAttributeSelectAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2232234684U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeSelectElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGAttributeSelectSettings, UPCGAttributeSelectSettings::StaticClass, TEXT("UPCGAttributeSelectSettings"), &Z_Registration_Info_UClass_UPCGAttributeSelectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGAttributeSelectSettings), 2138509935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeSelectElement_h_984721182(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeSelectElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeSelectElement_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeSelectElement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeSelectElement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
