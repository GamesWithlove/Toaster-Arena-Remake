// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowsCodePlugin/Public/VersionGrabber_TA.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVersionGrabber_TA() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SHADOWSCODEPLUGIN_API UClass* Z_Construct_UClass_UVersionGrabber_TA();
	SHADOWSCODEPLUGIN_API UClass* Z_Construct_UClass_UVersionGrabber_TA_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShadowsCodePlugin();
// End Cross Module References
	DEFINE_FUNCTION(UVersionGrabber_TA::execGetProjectVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVersionGrabber_TA::GetProjectVersion();
		P_NATIVE_END;
	}
	void UVersionGrabber_TA::StaticRegisterNativesUVersionGrabber_TA()
	{
		UClass* Class = UVersionGrabber_TA::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetProjectVersion", &UVersionGrabber_TA::execGetProjectVersion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics
	{
		struct VersionGrabber_TA_eventGetProjectVersion_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VersionGrabber_TA_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "System Information" },
		{ "CompactnodeTittle", "GameVersion" },
		{ "DisplayName", "Game Version" },
		{ "ModuleRelativePath", "Public/VersionGrabber_TA.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVersionGrabber_TA, nullptr, "GetProjectVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::VersionGrabber_TA_eventGetProjectVersion_Parms), Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVersionGrabber_TA);
	UClass* Z_Construct_UClass_UVersionGrabber_TA_NoRegister()
	{
		return UVersionGrabber_TA::StaticClass();
	}
	struct Z_Construct_UClass_UVersionGrabber_TA_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVersionGrabber_TA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowsCodePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVersionGrabber_TA_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVersionGrabber_TA_GetProjectVersion, "GetProjectVersion" }, // 3327067968
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVersionGrabber_TA_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VersionGrabber_TA.h" },
		{ "ModuleRelativePath", "Public/VersionGrabber_TA.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVersionGrabber_TA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVersionGrabber_TA>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVersionGrabber_TA_Statics::ClassParams = {
		&UVersionGrabber_TA::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVersionGrabber_TA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVersionGrabber_TA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVersionGrabber_TA()
	{
		if (!Z_Registration_Info_UClass_UVersionGrabber_TA.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVersionGrabber_TA.OuterSingleton, Z_Construct_UClass_UVersionGrabber_TA_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVersionGrabber_TA.OuterSingleton;
	}
	template<> SHADOWSCODEPLUGIN_API UClass* StaticClass<UVersionGrabber_TA>()
	{
		return UVersionGrabber_TA::StaticClass();
	}
	UVersionGrabber_TA::UVersionGrabber_TA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVersionGrabber_TA);
	UVersionGrabber_TA::~UVersionGrabber_TA() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVersionGrabber_TA, UVersionGrabber_TA::StaticClass, TEXT("UVersionGrabber_TA"), &Z_Registration_Info_UClass_UVersionGrabber_TA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVersionGrabber_TA), 4072472881U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h_2441047300(TEXT("/Script/ShadowsCodePlugin"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_VersionGrabber_TA_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
