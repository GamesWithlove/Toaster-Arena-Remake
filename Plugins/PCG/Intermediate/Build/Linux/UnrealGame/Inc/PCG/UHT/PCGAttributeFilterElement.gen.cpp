// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGAttributeFilterElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGAttributeFilterElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGAttributeFilterSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGAttributeFilterSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGAttributeFilterOperation();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGAttributeFilterOperation;
	static UEnum* EPCGAttributeFilterOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttributeFilterOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGAttributeFilterOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGAttributeFilterOperation, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGAttributeFilterOperation"));
		}
		return Z_Registration_Info_UEnum_EPCGAttributeFilterOperation.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGAttributeFilterOperation>()
	{
		return EPCGAttributeFilterOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGAttributeFilterOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGAttributeFilterOperation_Statics::Enumerators[] = {
		{ "EPCGAttributeFilterOperation::KeepSelectedAttributes", (int64)EPCGAttributeFilterOperation::KeepSelectedAttributes },
		{ "EPCGAttributeFilterOperation::DeleteSelectedAttributes", (int64)EPCGAttributeFilterOperation::DeleteSelectedAttributes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGAttributeFilterOperation_Statics::Enum_MetaDataParams[] = {
		{ "DeleteSelectedAttributes.Name", "EPCGAttributeFilterOperation::DeleteSelectedAttributes" },
		{ "KeepSelectedAttributes.Name", "EPCGAttributeFilterOperation::KeepSelectedAttributes" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeFilterElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGAttributeFilterOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGAttributeFilterOperation",
		"EPCGAttributeFilterOperation",
		Z_Construct_UEnum_PCG_EPCGAttributeFilterOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttributeFilterOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGAttributeFilterOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttributeFilterOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGAttributeFilterOperation()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttributeFilterOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGAttributeFilterOperation.InnerSingleton, Z_Construct_UEnum_PCG_EPCGAttributeFilterOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGAttributeFilterOperation.InnerSingleton;
	}
	void UPCGAttributeFilterSettings::StaticRegisterNativesUPCGAttributeFilterSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGAttributeFilterSettings);
	UClass* Z_Construct_UClass_UPCGAttributeFilterSettings_NoRegister()
	{
		return UPCGAttributeFilterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGAttributeFilterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedAttributes;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributesToKeep_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesToKeep_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributesToKeep;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Filter the attributes from a given input metadata.\n* Will remove all attributes that are not listed in AttributesToKeep.\n* If an attribute to keep is not in the original metadata, it won't be added.\n* \n* The output will be the original data with the updated metadata.\n*/" },
		{ "IncludePath", "Elements/PCGAttributeFilterElement.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeFilterElement.h" },
		{ "ToolTip", "Filter the attributes from a given input metadata.\nWill remove all attributes that are not listed in AttributesToKeep.\nIf an attribute to keep is not in the original metadata, it won't be added.\n\nThe output will be the original data with the updated metadata." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//~End UPCGSettings interface\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeFilterElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGAttributeFilterSettings, Operation), Z_Construct_UEnum_PCG_EPCGAttributeFilterOperation, METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_Operation_MetaData)) }; // 3768712133
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_SelectedAttributes_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeFilterElement.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_SelectedAttributes = { "SelectedAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGAttributeFilterSettings, SelectedAttributes), METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_SelectedAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_SelectedAttributes_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_AttributesToKeep_Inner = { "AttributesToKeep", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_AttributesToKeep_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeFilterElement.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_AttributesToKeep = { "AttributesToKeep", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGAttributeFilterSettings, AttributesToKeep_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_AttributesToKeep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_AttributesToKeep_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_SelectedAttributes,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_AttributesToKeep_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::NewProp_AttributesToKeep,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGAttributeFilterSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::ClassParams = {
		&UPCGAttributeFilterSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGAttributeFilterSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGAttributeFilterSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGAttributeFilterSettings.OuterSingleton, Z_Construct_UClass_UPCGAttributeFilterSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGAttributeFilterSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGAttributeFilterSettings>()
	{
		return UPCGAttributeFilterSettings::StaticClass();
	}
	UPCGAttributeFilterSettings::UPCGAttributeFilterSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGAttributeFilterSettings);
	UPCGAttributeFilterSettings::~UPCGAttributeFilterSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilterElement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilterElement_h_Statics::EnumInfo[] = {
		{ EPCGAttributeFilterOperation_StaticEnum, TEXT("EPCGAttributeFilterOperation"), &Z_Registration_Info_UEnum_EPCGAttributeFilterOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3768712133U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilterElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGAttributeFilterSettings, UPCGAttributeFilterSettings::StaticClass, TEXT("UPCGAttributeFilterSettings"), &Z_Registration_Info_UClass_UPCGAttributeFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGAttributeFilterSettings), 937221454U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilterElement_h_4102061952(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilterElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilterElement_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilterElement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilterElement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
