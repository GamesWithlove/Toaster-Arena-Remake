// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGFilterByTag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGFilterByTag() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGFilterByTagSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGFilterByTagSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGFilterByTagOperation();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGFilterByTagOperation;
	static UEnum* EPCGFilterByTagOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGFilterByTagOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGFilterByTagOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGFilterByTagOperation, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGFilterByTagOperation"));
		}
		return Z_Registration_Info_UEnum_EPCGFilterByTagOperation.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGFilterByTagOperation>()
	{
		return EPCGFilterByTagOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGFilterByTagOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGFilterByTagOperation_Statics::Enumerators[] = {
		{ "EPCGFilterByTagOperation::KeepTagged", (int64)EPCGFilterByTagOperation::KeepTagged },
		{ "EPCGFilterByTagOperation::RemoveTagged", (int64)EPCGFilterByTagOperation::RemoveTagged },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGFilterByTagOperation_Statics::Enum_MetaDataParams[] = {
		{ "KeepTagged.Name", "EPCGFilterByTagOperation::KeepTagged" },
		{ "ModuleRelativePath", "Public/Elements/PCGFilterByTag.h" },
		{ "RemoveTagged.Name", "EPCGFilterByTagOperation::RemoveTagged" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGFilterByTagOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGFilterByTagOperation",
		"EPCGFilterByTagOperation",
		Z_Construct_UEnum_PCG_EPCGFilterByTagOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGFilterByTagOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGFilterByTagOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGFilterByTagOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGFilterByTagOperation()
	{
		if (!Z_Registration_Info_UEnum_EPCGFilterByTagOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGFilterByTagOperation.InnerSingleton, Z_Construct_UEnum_PCG_EPCGFilterByTagOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGFilterByTagOperation.InnerSingleton;
	}
	void UPCGFilterByTagSettings::StaticRegisterNativesUPCGFilterByTagSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGFilterByTagSettings);
	UClass* Z_Construct_UClass_UPCGFilterByTagSettings_NoRegister()
	{
		return UPCGFilterByTagSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGFilterByTagSettings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGFilterByTagSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGFilterByTagSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Filters a data collection based on some tag criterion */" },
		{ "IncludePath", "Elements/PCGFilterByTag.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGFilterByTag.h" },
		{ "ToolTip", "Filters a data collection based on some tag criterion" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPCGFilterByTagSettings_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGFilterByTagSettings_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGFilterByTag.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGFilterByTagSettings_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGFilterByTagSettings, Operation), Z_Construct_UEnum_PCG_EPCGFilterByTagOperation, METADATA_PARAMS(Z_Construct_UClass_UPCGFilterByTagSettings_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGFilterByTagSettings_Statics::NewProp_Operation_MetaData)) }; // 2322852421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGFilterByTagSettings_Statics::NewProp_SelectedTags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comma-separated list of tags */" },
		{ "ModuleRelativePath", "Public/Elements/PCGFilterByTag.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comma-separated list of tags" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGFilterByTagSettings_Statics::NewProp_SelectedTags = { "SelectedTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGFilterByTagSettings, SelectedTags), METADATA_PARAMS(Z_Construct_UClass_UPCGFilterByTagSettings_Statics::NewProp_SelectedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGFilterByTagSettings_Statics::NewProp_SelectedTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGFilterByTagSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGFilterByTagSettings_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGFilterByTagSettings_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGFilterByTagSettings_Statics::NewProp_SelectedTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGFilterByTagSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGFilterByTagSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGFilterByTagSettings_Statics::ClassParams = {
		&UPCGFilterByTagSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGFilterByTagSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGFilterByTagSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGFilterByTagSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGFilterByTagSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGFilterByTagSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGFilterByTagSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGFilterByTagSettings.OuterSingleton, Z_Construct_UClass_UPCGFilterByTagSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGFilterByTagSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGFilterByTagSettings>()
	{
		return UPCGFilterByTagSettings::StaticClass();
	}
	UPCGFilterByTagSettings::UPCGFilterByTagSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGFilterByTagSettings);
	UPCGFilterByTagSettings::~UPCGFilterByTagSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByTag_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByTag_h_Statics::EnumInfo[] = {
		{ EPCGFilterByTagOperation_StaticEnum, TEXT("EPCGFilterByTagOperation"), &Z_Registration_Info_UEnum_EPCGFilterByTagOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2322852421U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByTag_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGFilterByTagSettings, UPCGFilterByTagSettings::StaticClass, TEXT("UPCGFilterByTagSettings"), &Z_Registration_Info_UClass_UPCGFilterByTagSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGFilterByTagSettings), 376842166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByTag_h_1485657613(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByTag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByTag_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByTag_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByTag_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
