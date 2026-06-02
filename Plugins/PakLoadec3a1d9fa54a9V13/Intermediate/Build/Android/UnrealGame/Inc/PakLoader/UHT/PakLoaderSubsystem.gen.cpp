// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PakLoaderSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePakLoaderSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
PAKLOADER_API UClass* Z_Construct_UClass_UPakLoaderSubsystem();
PAKLOADER_API UClass* Z_Construct_UClass_UPakLoaderSubsystem_NoRegister();
PAKLOADER_API UFunction* Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature();
PAKLOADER_API UFunction* Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_PakLoader();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FPakLoaderOnContentPathMounted ****************************************
struct Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics
{
	struct _Script_PakLoader_eventPakLoaderOnContentPathMounted_Parms
	{
		FString AssetPath;
		FString ContentPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PakLoaderSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FPakLoaderOnContentPathMounted constinit property declarations ********
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FPakLoaderOnContentPathMounted constinit property declarations **********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FPakLoaderOnContentPathMounted Property Definitions *******************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PakLoader_eventPakLoaderOnContentPathMounted_Parms, AssetPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::NewProp_ContentPath = { "ContentPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PakLoader_eventPakLoaderOnContentPathMounted_Parms, ContentPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::NewProp_AssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::NewProp_ContentPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FPakLoaderOnContentPathMounted Property Definitions *********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PakLoader, nullptr, "PakLoaderOnContentPathMounted__DelegateSignature", 	Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::_Script_PakLoader_eventPakLoaderOnContentPathMounted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::_Script_PakLoader_eventPakLoaderOnContentPathMounted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FPakLoaderOnContentPathMounted ******************************************

// ********** Begin Delegate FOnPakFileMounted2 ****************************************************
struct Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics
{
	struct _Script_PakLoader_eventOnPakFileMounted2_Parms
	{
		FString PakFilename;
		FString MountPoint;
		int32 NumFiles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PakLoaderSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPakFileMounted2 constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PakFilename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MountPoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumFiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnPakFileMounted2 constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnPakFileMounted2 Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::NewProp_PakFilename = { "PakFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PakLoader_eventOnPakFileMounted2_Parms, PakFilename), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::NewProp_MountPoint = { "MountPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PakLoader_eventOnPakFileMounted2_Parms, MountPoint), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::NewProp_NumFiles = { "NumFiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PakLoader_eventOnPakFileMounted2_Parms, NumFiles), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::NewProp_PakFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::NewProp_MountPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::NewProp_NumFiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnPakFileMounted2 Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_PakLoader, nullptr, "OnPakFileMounted2__DelegateSignature", 	Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::_Script_PakLoader_eventOnPakFileMounted2_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::_Script_PakLoader_eventOnPakFileMounted2_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature_Statics::FuncParams);
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
// ********** End Delegate FOnPakFileMounted2 ******************************************************

// ********** Begin Class UPakLoaderSubsystem ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPakLoaderSubsystem;
UClass* UPakLoaderSubsystem::GetPrivateStaticClass()
{
	using TClass = UPakLoaderSubsystem;
	if (!Z_Registration_Info_UClass_UPakLoaderSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PakLoaderSubsystem"),
			Z_Registration_Info_UClass_UPakLoaderSubsystem.InnerSingleton,
			StaticRegisterNativesUPakLoaderSubsystem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPakLoaderSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UPakLoaderSubsystem_NoRegister()
{
	return UPakLoaderSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPakLoaderSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PakLoaderSubsystem.h" },
		{ "ModuleRelativePath", "Public/PakLoaderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnContentPathMounted_MetaData[] = {
		{ "Comment", "// Called by the engine when a new content path is mounted. Native delegate: FPackageName::OnContentPathMounted()\n" },
		{ "ModuleRelativePath", "Public/PakLoaderSubsystem.h" },
		{ "ToolTip", "Called by the engine when a new content path is mounted. Native delegate: FPackageName::OnContentPathMounted()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnContentPathDismounted_MetaData[] = {
		{ "Comment", "// Called by the engine when a content path is dismounted. Native delegate: FPackageName::OnContentPathDismounted()\n" },
		{ "ModuleRelativePath", "Public/PakLoaderSubsystem.h" },
		{ "ToolTip", "Called by the engine when a content path is dismounted. Native delegate: FPackageName::OnContentPathDismounted()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPakFileMounted2_MetaData[] = {
		{ "Comment", "/* \n\x09\x09""Called by the engine when a pak file is mounted.\n\x09\x09The original delegate is called with IPakFile as parameter which is not exposed to Blueprints.\n\x09\x09Native delegate: FCoreDelegates::GetOnPakFileMounted2()\n\x09*/" },
		{ "ModuleRelativePath", "Public/PakLoaderSubsystem.h" },
		{ "ToolTip", "Called by the engine when a pak file is mounted.\nThe original delegate is called with IPakFile as parameter which is not exposed to Blueprints.\nNative delegate: FCoreDelegates::GetOnPakFileMounted2()" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPakLoaderSubsystem constinit property declarations **********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnContentPathMounted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnContentPathDismounted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPakFileMounted2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPakLoaderSubsystem constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPakLoaderSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPakLoaderSubsystem_Statics

// ********** Begin Class UPakLoaderSubsystem Property Definitions *********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnContentPathMounted = { "OnContentPathMounted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPakLoaderSubsystem, OnContentPathMounted), Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnContentPathMounted_MetaData), NewProp_OnContentPathMounted_MetaData) }; // 256762738
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnContentPathDismounted = { "OnContentPathDismounted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPakLoaderSubsystem, OnContentPathDismounted), Z_Construct_UDelegateFunction_PakLoader_PakLoaderOnContentPathMounted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnContentPathDismounted_MetaData), NewProp_OnContentPathDismounted_MetaData) }; // 256762738
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnPakFileMounted2 = { "OnPakFileMounted2", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPakLoaderSubsystem, OnPakFileMounted2), Z_Construct_UDelegateFunction_PakLoader_OnPakFileMounted2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPakFileMounted2_MetaData), NewProp_OnPakFileMounted2_MetaData) }; // 1809882431
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPakLoaderSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnContentPathMounted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnContentPathDismounted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPakLoaderSubsystem_Statics::NewProp_OnPakFileMounted2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPakLoaderSubsystem_Statics::PropPointers) < 2048);
// ********** End Class UPakLoaderSubsystem Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UPakLoaderSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_PakLoader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPakLoaderSubsystem_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPakLoaderSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPakLoaderSubsystem_Statics::Class_MetaDataParams)
};
void UPakLoaderSubsystem::StaticRegisterNativesUPakLoaderSubsystem()
{
}
UClass* Z_Construct_UClass_UPakLoaderSubsystem()
{
	if (!Z_Registration_Info_UClass_UPakLoaderSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPakLoaderSubsystem.OuterSingleton, Z_Construct_UClass_UPakLoaderSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPakLoaderSubsystem.OuterSingleton;
}
UPakLoaderSubsystem::UPakLoaderSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPakLoaderSubsystem);
UPakLoaderSubsystem::~UPakLoaderSubsystem() {}
// ********** End Class UPakLoaderSubsystem ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakLoaderSubsystem_h__Script_PakLoader_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPakLoaderSubsystem, UPakLoaderSubsystem::StaticClass, TEXT("UPakLoaderSubsystem"), &Z_Registration_Info_UClass_UPakLoaderSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPakLoaderSubsystem), 4163396037U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakLoaderSubsystem_h__Script_PakLoader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakLoaderSubsystem_h__Script_PakLoader_4142620934{
	TEXT("/Script/PakLoader"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakLoaderSubsystem_h__Script_PakLoader_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakLoaderSubsystem_h__Script_PakLoader_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
