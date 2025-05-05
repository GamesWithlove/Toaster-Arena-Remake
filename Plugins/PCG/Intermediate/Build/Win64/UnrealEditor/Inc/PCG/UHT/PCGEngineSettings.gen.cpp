// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGEngineSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGEngineSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PCG_API UClass* Z_Construct_UClass_UPCGEngineSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGEngineSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGEngineSettings::StaticRegisterNativesUPCGEngineSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGEngineSettings);
	UClass* Z_Construct_UClass_UPCGEngineSettings_NoRegister()
	{
		return UPCGEngineSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGEngineSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateOnDrop_MetaData[];
#endif
		static void NewProp_bGenerateOnDrop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateOnDrop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGEngineSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEngineSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGEngineSettings.h" },
		{ "ModuleRelativePath", "Public/PCGEngineSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEngineSettings_Statics::NewProp_VolumeScale_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** Specifies the scale of the volume created on PCG graph drag/drop */" },
		{ "ModuleRelativePath", "Public/PCGEngineSettings.h" },
		{ "ToolTip", "Specifies the scale of the volume created on PCG graph drag/drop" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGEngineSettings_Statics::NewProp_VolumeScale = { "VolumeScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGEngineSettings, VolumeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCGEngineSettings_Statics::NewProp_VolumeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEngineSettings_Statics::NewProp_VolumeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGEngineSettings_Statics::NewProp_bGenerateOnDrop_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** Whether we want to generate PCG graph/BP with PCG after drag/drop or not */" },
		{ "ModuleRelativePath", "Public/PCGEngineSettings.h" },
		{ "ToolTip", "Whether we want to generate PCG graph/BP with PCG after drag/drop or not" },
	};
#endif
	void Z_Construct_UClass_UPCGEngineSettings_Statics::NewProp_bGenerateOnDrop_SetBit(void* Obj)
	{
		((UPCGEngineSettings*)Obj)->bGenerateOnDrop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGEngineSettings_Statics::NewProp_bGenerateOnDrop = { "bGenerateOnDrop", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGEngineSettings), &Z_Construct_UClass_UPCGEngineSettings_Statics::NewProp_bGenerateOnDrop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGEngineSettings_Statics::NewProp_bGenerateOnDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEngineSettings_Statics::NewProp_bGenerateOnDrop_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGEngineSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGEngineSettings_Statics::NewProp_VolumeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGEngineSettings_Statics::NewProp_bGenerateOnDrop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGEngineSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGEngineSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGEngineSettings_Statics::ClassParams = {
		&UPCGEngineSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGEngineSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEngineSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGEngineSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGEngineSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGEngineSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGEngineSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGEngineSettings.OuterSingleton, Z_Construct_UClass_UPCGEngineSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGEngineSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGEngineSettings>()
	{
		return UPCGEngineSettings::StaticClass();
	}
	UPCGEngineSettings::UPCGEngineSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGEngineSettings);
	UPCGEngineSettings::~UPCGEngineSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGEngineSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGEngineSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGEngineSettings, UPCGEngineSettings::StaticClass, TEXT("UPCGEngineSettings"), &Z_Registration_Info_UClass_UPCGEngineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGEngineSettings), 1013531077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGEngineSettings_h_2390163989(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGEngineSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGEngineSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
