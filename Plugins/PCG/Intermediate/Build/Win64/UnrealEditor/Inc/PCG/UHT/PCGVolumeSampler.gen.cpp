// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGVolumeSampler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGVolumeSampler() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGVolumeSamplerSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGVolumeSamplerSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGVolumeSamplerSettings::StaticRegisterNativesUPCGVolumeSamplerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGVolumeSamplerSettings);
	UClass* Z_Construct_UClass_UPCGVolumeSamplerSettings_NoRegister()
	{
		return UPCGVolumeSamplerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUnbounded_MetaData[];
#endif
		static void NewProp_bUnbounded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnbounded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGVolumeSampler.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGVolumeSampler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Elements/PCGVolumeSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGVolumeSamplerSettings, VoxelSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_VoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_VoxelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_bUnbounded_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If no Bounding Shape input is provided the actor bounds are used to limit the sample generation area.\n\x09* This option allows ignoring the actor bounds and generating over the entire volume provided. Use with caution as this\n\x09* may generate a lot of points.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Elements/PCGVolumeSampler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If no Bounding Shape input is provided the actor bounds are used to limit the sample generation area.\nThis option allows ignoring the actor bounds and generating over the entire volume provided. Use with caution as this\nmay generate a lot of points." },
	};
#endif
	void Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_bUnbounded_SetBit(void* Obj)
	{
		((UPCGVolumeSamplerSettings*)Obj)->bUnbounded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_bUnbounded = { "bUnbounded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGVolumeSamplerSettings), &Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_bUnbounded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_bUnbounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_bUnbounded_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_VoxelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::NewProp_bUnbounded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGVolumeSamplerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::ClassParams = {
		&UPCGVolumeSamplerSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGVolumeSamplerSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.OuterSingleton, Z_Construct_UClass_UPCGVolumeSamplerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGVolumeSamplerSettings>()
	{
		return UPCGVolumeSamplerSettings::StaticClass();
	}
	UPCGVolumeSamplerSettings::UPCGVolumeSamplerSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGVolumeSamplerSettings);
	UPCGVolumeSamplerSettings::~UPCGVolumeSamplerSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGVolumeSamplerSettings, UPCGVolumeSamplerSettings::StaticClass, TEXT("UPCGVolumeSamplerSettings"), &Z_Registration_Info_UClass_UPCGVolumeSamplerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGVolumeSamplerSettings), 2828100899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h_2003668879(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGVolumeSampler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
