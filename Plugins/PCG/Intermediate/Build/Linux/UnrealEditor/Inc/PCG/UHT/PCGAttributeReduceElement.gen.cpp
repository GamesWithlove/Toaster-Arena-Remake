// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGAttributeReduceElement.h"
#include "PCG/Public/Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGAttributeReduceElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGAttributeReduceSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGAttributeReduceSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGAttributeReduceOperation();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertySelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGAttributeReduceOperation;
	static UEnum* EPCGAttributeReduceOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttributeReduceOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGAttributeReduceOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGAttributeReduceOperation, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGAttributeReduceOperation"));
		}
		return Z_Registration_Info_UEnum_EPCGAttributeReduceOperation.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGAttributeReduceOperation>()
	{
		return EPCGAttributeReduceOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGAttributeReduceOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGAttributeReduceOperation_Statics::Enumerators[] = {
		{ "EPCGAttributeReduceOperation::Average", (int64)EPCGAttributeReduceOperation::Average },
		{ "EPCGAttributeReduceOperation::Max", (int64)EPCGAttributeReduceOperation::Max },
		{ "EPCGAttributeReduceOperation::Min", (int64)EPCGAttributeReduceOperation::Min },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGAttributeReduceOperation_Statics::Enum_MetaDataParams[] = {
		{ "Average.Name", "EPCGAttributeReduceOperation::Average" },
		{ "Max.Name", "EPCGAttributeReduceOperation::Max" },
		{ "Min.Name", "EPCGAttributeReduceOperation::Min" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeReduceElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGAttributeReduceOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGAttributeReduceOperation",
		"EPCGAttributeReduceOperation",
		Z_Construct_UEnum_PCG_EPCGAttributeReduceOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttributeReduceOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGAttributeReduceOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttributeReduceOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGAttributeReduceOperation()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttributeReduceOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGAttributeReduceOperation.InnerSingleton, Z_Construct_UEnum_PCG_EPCGAttributeReduceOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGAttributeReduceOperation.InnerSingleton;
	}
	void UPCGAttributeReduceSettings::StaticRegisterNativesUPCGAttributeReduceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGAttributeReduceSettings);
	UClass* Z_Construct_UClass_UPCGAttributeReduceSettings_NoRegister()
	{
		return UPCGAttributeReduceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGAttributeReduceSettings_Statics
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
	UObject* (*const Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Take all the entries/points from the input and perform a reduce operation on the given attribute/property\n* and output the result into a ParamData.\n* \n* If the OutputAttributeName is None, we will use the InputSource name\n*/" },
		{ "IncludePath", "Elements/PCGAttributeReduceElement.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeReduceElement.h" },
		{ "ToolTip", "Take all the entries/points from the input and perform a reduce operation on the given attribute/property\nand output the result into a ParamData.\n\nIf the OutputAttributeName is None, we will use the InputSource name" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_InputSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//~End UPCGSettings interface\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeReduceElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_InputSource = { "InputSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGAttributeReduceSettings, InputSource), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_InputSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_InputSource_MetaData)) }; // 3655039818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_OutputAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeReduceElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_OutputAttributeName = { "OutputAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGAttributeReduceSettings, OutputAttributeName), METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_OutputAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_OutputAttributeName_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeReduceElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGAttributeReduceSettings, Operation), Z_Construct_UEnum_PCG_EPCGAttributeReduceOperation, METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_Operation_MetaData)) }; // 931438634
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_InputAttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeReduceElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_InputAttributeName = { "InputAttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGAttributeReduceSettings, InputAttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_InputAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_InputAttributeName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_InputSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_OutputAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_Operation,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::NewProp_InputAttributeName,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGAttributeReduceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::ClassParams = {
		&UPCGAttributeReduceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGAttributeReduceSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGAttributeReduceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGAttributeReduceSettings.OuterSingleton, Z_Construct_UClass_UPCGAttributeReduceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGAttributeReduceSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGAttributeReduceSettings>()
	{
		return UPCGAttributeReduceSettings::StaticClass();
	}
	UPCGAttributeReduceSettings::UPCGAttributeReduceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGAttributeReduceSettings);
	UPCGAttributeReduceSettings::~UPCGAttributeReduceSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeReduceElement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeReduceElement_h_Statics::EnumInfo[] = {
		{ EPCGAttributeReduceOperation_StaticEnum, TEXT("EPCGAttributeReduceOperation"), &Z_Registration_Info_UEnum_EPCGAttributeReduceOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 931438634U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeReduceElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGAttributeReduceSettings, UPCGAttributeReduceSettings::StaticClass, TEXT("UPCGAttributeReduceSettings"), &Z_Registration_Info_UClass_UPCGAttributeReduceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGAttributeReduceSettings), 1890482884U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeReduceElement_h_1743857986(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeReduceElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeReduceElement_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeReduceElement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeReduceElement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
