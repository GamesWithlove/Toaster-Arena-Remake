// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGUserParameterGet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGUserParameterGet() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGUserParameterGetSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGUserParameterGetSettings::StaticRegisterNativesUPCGUserParameterGetSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGUserParameterGetSettings);
	UClass* Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister()
	{
		return UPCGUserParameterGetSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGUserParameterGetSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Getter for user parameters defined in PCGGraph, by the user.\n* Will pick up the value from the graph instance.\n*/" },
		{ "IncludePath", "Elements/PCGUserParameterGet.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGUserParameterGet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Getter for user parameters defined in PCGGraph, by the user.\nWill pick up the value from the graph instance." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::NewProp_PropertyGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGUserParameterGet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::NewProp_PropertyGuid = { "PropertyGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGUserParameterGetSettings, PropertyGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::NewProp_PropertyGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::NewProp_PropertyGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGUserParameterGet.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGUserParameterGetSettings, PropertyName), METADATA_PARAMS(Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::NewProp_PropertyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::NewProp_PropertyGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::NewProp_PropertyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGUserParameterGetSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::ClassParams = {
		&UPCGUserParameterGetSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGUserParameterGetSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGUserParameterGetSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGUserParameterGetSettings.OuterSingleton, Z_Construct_UClass_UPCGUserParameterGetSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGUserParameterGetSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGUserParameterGetSettings>()
	{
		return UPCGUserParameterGetSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGUserParameterGetSettings);
	UPCGUserParameterGetSettings::~UPCGUserParameterGetSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGUserParameterGetSettings, UPCGUserParameterGetSettings::StaticClass, TEXT("UPCGUserParameterGetSettings"), &Z_Registration_Info_UClass_UPCGUserParameterGetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGUserParameterGetSettings), 1980191039U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h_2139328756(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGUserParameterGet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
