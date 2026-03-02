// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PakLoader/Public/PakLoaderSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePakLoaderSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	PAKLOADER_API UClass* Z_Construct_UClass_UPakLoaderSubsystem();
	PAKLOADER_API UClass* Z_Construct_UClass_UPakLoaderSubsystem_NoRegister();
	PAKLOADER_API UFunction* Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature();
	PAKLOADER_API UFunction* Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PakLoader();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics
	{
		struct _Script_PakLoader_eventPakLoaderOnContentPathMounted_Parms
		{
			FString AssetPath;
			FString ContentPath;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PakLoader_eventPakLoaderOnContentPathMounted_Parms, AssetPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::NewProp_ContentPath = { "ContentPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PakLoader_eventPakLoaderOnContentPathMounted_Parms, ContentPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::NewProp_ContentPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PakLoaderSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PakLoader, nullptr, "PakLoaderOnContentPathMounted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::_Script_PakLoader_eventPakLoaderOnContentPathMounted_Parms), Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPakLoaderOnContentPathMounted_DelegateWrapper(const FMulticastScriptDelegate& PakLoaderOnContentPathMounted, const FString& AssetPath, const FString& ContentPath)
{
	struct _Script_PakLoader_eventPakLoaderOnContentPathMounted_Parms
	{
		FString AssetPath;
		FString ContentPath;
	};
	_Script_PakLoader_eventPakLoaderOnContentPathMounted_Parms Parms;
	Parms.AssetPath=AssetPath;
	Parms.ContentPath=ContentPath;
	PakLoaderOnContentPathMounted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics
	{
		struct _Script_PakLoader_eventOnPakFileMounted2_Parms
		{
			FString PakFilename;
			FString MountPoint;
			int32 NumFiles;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PakFilename;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MountPoint;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::NewProp_PakFilename = { "PakFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PakLoader_eventOnPakFileMounted2_Parms, PakFilename), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::NewProp_MountPoint = { "MountPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PakLoader_eventOnPakFileMounted2_Parms, MountPoint), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::NewProp_NumFiles = { "NumFiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PakLoader_eventOnPakFileMounted2_Parms, NumFiles), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::NewProp_PakFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::NewProp_MountPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::NewProp_NumFiles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PakLoaderSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PakLoader, nullptr, "OnPakFileMounted2__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::_Script_PakLoader_eventOnPakFileMounted2_Parms), Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPakFileMounted2_DelegateWrapper(const FMulticastScriptDelegate& OnPakFileMounted2, const FString& PakFilename, const FString& MountPoint, int32 NumFiles)
{
	struct _Script_PakLoader_eventOnPakFileMounted2_Parms
	{
		FString PakFilename;
		FString MountPoint;
		int32 NumFiles;
	};
	_Script_PakLoader_eventOnPakFileMounted2_Parms Parms;
	Parms.PakFilename=PakFilename;
	Parms.MountPoint=MountPoint;
	Parms.NumFiles=NumFiles;
	OnPakFileMounted2.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UPakLoaderSubsystem::StaticRegisterNativesUPakLoaderSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPakLoaderSubsystem);
	UClass* Z_Construct_UClass_UPakLoaderSubsystem_NoRegister()
	{
		return UPakLoaderSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPakLoaderSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnContentPathMounted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnContentPathMounted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnContentPathDismounted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnContentPathDismounted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPakFileMounted2_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPakFileMounted2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPakLoaderSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_PakLoader,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPakLoaderSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PakLoaderSubsystem.h" },
		{ "ModuleRelativePath", "Public/PakLoaderSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnContentPathMounted_MetaData[] = {
		{ "Comment", "// Called by the engine when a new content path is mounted. Native delegate: FPackageName::OnContentPathMounted()\n" },
		{ "ModuleRelativePath", "Public/PakLoaderSubsystem.h" },
		{ "ToolTip", "Called by the engine when a new content path is mounted. Native delegate: FPackageName::OnContentPathMounted()" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnContentPathMounted = { "OnContentPathMounted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPakLoaderSubsystem, OnContentPathMounted), Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnContentPathMounted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnContentPathMounted_MetaData)) }; // 2809190926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnContentPathDismounted_MetaData[] = {
		{ "Comment", "// Called by the engine when a content path is dismounted. Native delegate: FPackageName::OnContentPathDismounted()\n" },
		{ "ModuleRelativePath", "Public/PakLoaderSubsystem.h" },
		{ "ToolTip", "Called by the engine when a content path is dismounted. Native delegate: FPackageName::OnContentPathDismounted()" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnContentPathDismounted = { "OnContentPathDismounted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPakLoaderSubsystem, OnContentPathDismounted), Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnContentPathDismounted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnContentPathDismounted_MetaData)) }; // 2809190926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnPakFileMounted2_MetaData[] = {
		{ "Comment", "/* \n\x09\x09""Called by the engine when a pak file is mounted.\n\x09\x09The original delegate is called with IPakFile as parameter which is not exposed to Blueprints.\n\x09\x09Native delegate: FCoreDelegates::GetOnPakFileMounted2()\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderSubsystem.h" },
		{ "ToolTip", "Called by the engine when a pak file is mounted.\nThe original delegate is called with IPakFile as parameter which is not exposed to Blueprints.\nNative delegate: FCoreDelegates::GetOnPakFileMounted2()" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnPakFileMounted2 = { "OnPakFileMounted2", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPakLoaderSubsystem, OnPakFileMounted2), Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnPakFileMounted2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnPakFileMounted2_MetaData)) }; // 69317276
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPakLoaderSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnContentPathMounted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnContentPathDismounted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnPakFileMounted2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPakLoaderSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPakLoaderSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPakLoaderSubsystem_Statics::ClassParams = {
		&UPakLoaderSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPakLoaderSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPakLoaderSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPakLoaderSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPakLoaderSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPakLoaderSubsystem()
	{
		if (!Z_Registration_Info_UClass_UPakLoaderSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPakLoaderSubsystem.OuterSingleton, Z_Construct_UClass_UPakLoaderSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPakLoaderSubsystem.OuterSingleton;
	}
	template<> PAKLOADER_API UClass* StaticClass<UPakLoaderSubsystem>()
	{
		return UPakLoaderSubsystem::StaticClass();
	}
	UPakLoaderSubsystem::UPakLoaderSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPakLoaderSubsystem);
	UPakLoaderSubsystem::~UPakLoaderSubsystem() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakLoaderSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakLoaderSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPakLoaderSubsystem, UPakLoaderSubsystem::StaticClass, TEXT("UPakLoaderSubsystem"), &Z_Registration_Info_UClass_UPakLoaderSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPakLoaderSubsystem), 4253121098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakLoaderSubsystem_h_2343846673(TEXT("/Script/PakLoader"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakLoaderSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakLoaderSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
