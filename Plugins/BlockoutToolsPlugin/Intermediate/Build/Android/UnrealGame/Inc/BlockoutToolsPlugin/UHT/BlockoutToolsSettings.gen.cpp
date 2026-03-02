// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlockoutToolsPlugin/Public/BlockoutToolsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockoutToolsSettings() {}
// Cross Module References
	BLOCKOUTTOOLSPLUGIN_API UClass* Z_Construct_UClass_UBlockoutToolsSettings();
	BLOCKOUTTOOLSPLUGIN_API UClass* Z_Construct_UClass_UBlockoutToolsSettings_NoRegister();
	BLOCKOUTTOOLSPLUGIN_API UEnum* Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UPackage* Z_Construct_UPackage__Script_BlockoutToolsPlugin();
// End Cross Module References
	void UBlockoutToolsSettings::StaticRegisterNativesUBlockoutToolsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlockoutToolsSettings);
	UClass* Z_Construct_UClass_UBlockoutToolsSettings_NoRegister()
	{
		return UBlockoutToolsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UBlockoutToolsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlockoutMaterialType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockoutMaterialColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlockoutMaterialUseGrid_MetaData[];
#endif
		static void NewProp_bBlockoutMaterialUseGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockoutMaterialUseGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlockoutWorldAligned_MetaData[];
#endif
		static void NewProp_bBlockoutWorldAligned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockoutWorldAligned;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockoutMaterialGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialCheckerLuminance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockoutMaterialCheckerLuminance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialRoughness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockoutMaterialRoughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlockoutMaterialUseTopColor_MetaData[];
#endif
		static void NewProp_bBlockoutMaterialUseTopColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockoutMaterialUseTopColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockoutMaterialTopColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockoutMaterialTopColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlockoutToolsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlockoutToolsPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockoutToolsSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BlockoutToolsSettings.h" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialType_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Material Type" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialType = { "BlockoutMaterialType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlockoutToolsSettings, BlockoutMaterialType), Z_Construct_UEnum_BlockoutToolsPlugin_EBlockoutMaterialType, METADATA_PARAMS(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialType_MetaData)) }; // 1071002675
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialColor_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialColor = { "BlockoutMaterialColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlockoutToolsSettings, BlockoutMaterialColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseGrid_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Use Grid" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
	};
#endif
	void Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseGrid_SetBit(void* Obj)
	{
		((UBlockoutToolsSettings*)Obj)->bBlockoutMaterialUseGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseGrid = { "bBlockoutMaterialUseGrid", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlockoutToolsSettings), &Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutWorldAligned_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "Comment", "// Sets if triplanar material is local-aligned or world-aligned\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "World Aligned" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
		{ "ToolTip", "Sets if triplanar material is local-aligned or world-aligned" },
	};
#endif
	void Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutWorldAligned_SetBit(void* Obj)
	{
		((UBlockoutToolsSettings*)Obj)->bBlockoutWorldAligned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutWorldAligned = { "bBlockoutWorldAligned", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlockoutToolsSettings), &Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutWorldAligned_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutWorldAligned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutWorldAligned_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialGridSize_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Grid Size" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialGridSize = { "BlockoutMaterialGridSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlockoutToolsSettings, BlockoutMaterialGridSize), METADATA_PARAMS(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialGridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialCheckerLuminance_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Checker Luminance" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialCheckerLuminance = { "BlockoutMaterialCheckerLuminance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlockoutToolsSettings, BlockoutMaterialCheckerLuminance), METADATA_PARAMS(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialCheckerLuminance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialCheckerLuminance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialRoughness_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Roughness" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialRoughness = { "BlockoutMaterialRoughness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlockoutToolsSettings, BlockoutMaterialRoughness), METADATA_PARAMS(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialRoughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialRoughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseTopColor_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Use Top Color" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
	};
#endif
	void Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseTopColor_SetBit(void* Obj)
	{
		((UBlockoutToolsSettings*)Obj)->bBlockoutMaterialUseTopColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseTopColor = { "bBlockoutMaterialUseTopColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlockoutToolsSettings), &Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseTopColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseTopColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseTopColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialTopColor_MetaData[] = {
		{ "Category", "Blockout Material" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Top Color" },
		{ "ModuleRelativePath", "Public/BlockoutToolsSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialTopColor = { "BlockoutMaterialTopColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlockoutToolsSettings, BlockoutMaterialTopColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialTopColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialTopColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlockoutToolsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutWorldAligned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialCheckerLuminance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialRoughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_bBlockoutMaterialUseTopColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockoutToolsSettings_Statics::NewProp_BlockoutMaterialTopColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlockoutToolsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlockoutToolsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlockoutToolsSettings_Statics::ClassParams = {
		&UBlockoutToolsSettings::StaticClass,
		"BlockoutTools",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlockoutToolsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlockoutToolsSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UBlockoutToolsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockoutToolsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlockoutToolsSettings()
	{
		if (!Z_Registration_Info_UClass_UBlockoutToolsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlockoutToolsSettings.OuterSingleton, Z_Construct_UClass_UBlockoutToolsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlockoutToolsSettings.OuterSingleton;
	}
	template<> BLOCKOUTTOOLSPLUGIN_API UClass* StaticClass<UBlockoutToolsSettings>()
	{
		return UBlockoutToolsSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlockoutToolsSettings);
	UBlockoutToolsSettings::~UBlockoutToolsSettings() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Public_BlockoutToolsSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Public_BlockoutToolsSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlockoutToolsSettings, UBlockoutToolsSettings::StaticClass, TEXT("UBlockoutToolsSettings"), &Z_Registration_Info_UClass_UBlockoutToolsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlockoutToolsSettings), 2388862341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Public_BlockoutToolsSettings_h_549052077(TEXT("/Script/BlockoutToolsPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Public_BlockoutToolsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Public_BlockoutToolsSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
