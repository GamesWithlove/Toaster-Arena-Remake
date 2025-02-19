// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGDataTableRowToParamData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGDataTableRowToParamData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGDataTableRowToParamDataSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGDataTableRowToParamDataSettings::StaticRegisterNativesUPCGDataTableRowToParamDataSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGDataTableRowToParamDataSettings);
	UClass* Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_NoRegister()
	{
		return UPCGDataTableRowToParamDataSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DataTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGDataTableRowToParamData.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGDataTableRowToParamData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::NewProp_RowName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The name of the row to copy from\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGDataTableRowToParamData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The name of the row to copy from" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDataTableRowToParamDataSettings, RowName), METADATA_PARAMS(Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::NewProp_RowName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::NewProp_PathOverride_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Path override, hidden to be only presented as param pin\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGDataTableRowToParamData.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Path override, hidden to be only presented as param pin" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::NewProp_PathOverride = { "PathOverride", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDataTableRowToParamDataSettings, PathOverride), METADATA_PARAMS(Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::NewProp_PathOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::NewProp_PathOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// the data table to copy from\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGDataTableRowToParamData.h" },
		{ "ToolTip", "the data table to copy from" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDataTableRowToParamDataSettings, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::NewProp_DataTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::NewProp_RowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::NewProp_PathOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::NewProp_DataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGDataTableRowToParamDataSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::ClassParams = {
		&UPCGDataTableRowToParamDataSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGDataTableRowToParamDataSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGDataTableRowToParamDataSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGDataTableRowToParamDataSettings.OuterSingleton, Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGDataTableRowToParamDataSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGDataTableRowToParamDataSettings>()
	{
		return UPCGDataTableRowToParamDataSettings::StaticClass();
	}
	UPCGDataTableRowToParamDataSettings::UPCGDataTableRowToParamDataSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGDataTableRowToParamDataSettings);
	UPCGDataTableRowToParamDataSettings::~UPCGDataTableRowToParamDataSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDataTableRowToParamData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDataTableRowToParamData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGDataTableRowToParamDataSettings, UPCGDataTableRowToParamDataSettings::StaticClass, TEXT("UPCGDataTableRowToParamDataSettings"), &Z_Registration_Info_UClass_UPCGDataTableRowToParamDataSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGDataTableRowToParamDataSettings), 789430523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDataTableRowToParamData_h_778496771(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDataTableRowToParamData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDataTableRowToParamData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
