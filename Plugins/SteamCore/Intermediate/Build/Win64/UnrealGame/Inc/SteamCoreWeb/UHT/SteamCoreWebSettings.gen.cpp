// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWeb/SteamCoreWebSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSettings();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	void USteamCoreWebSettings::StaticRegisterNativesUSteamCoreWebSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebSettings);
	UClass* Z_Construct_UClass_USteamCoreWebSettings_NoRegister()
	{
		return USteamCoreWebSettings::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsyncTaskTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AsyncTaskTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledSubsystems_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DisabledSubsystems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugging_MetaData[];
#endif
		static void NewProp_bDebugging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDevMode_MetaData[];
#endif
		static void NewProp_bDevMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDevMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DevSteamID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DevSteamID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSandboxMode_MetaData[];
#endif
		static void NewProp_bSandboxMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSandboxMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "SteamCoreWeb Plugin" },
		{ "IncludePath", "SteamCoreWeb/SteamCoreWebSettings.h" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWebSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AsyncTaskTimeout_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/*\n\x09* If an async task takes longer than this (in seconds) it will be cancelled\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWebSettings.h" },
		{ "ToolTip", "* If an async task takes longer than this (in seconds) it will be cancelled" },
		{ "UIMax", "60.0" },
		{ "UIMin", "5.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AsyncTaskTimeout = { "AsyncTaskTimeout", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreWebSettings, AsyncTaskTimeout), METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AsyncTaskTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AsyncTaskTimeout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DisabledSubsystems_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/SteamCoreWeb.ESubsystemWeb" },
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09* Disabled subsystems wont be created, SteamCoreWeb subsystem cannot be disabled\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWebSettings.h" },
		{ "ToolTip", "Disabled subsystems wont be created, SteamCoreWeb subsystem cannot be disabled" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DisabledSubsystems = { "DisabledSubsystems", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreWebSettings, DisabledSubsystems), METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DisabledSubsystems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DisabledSubsystems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDebugging_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09* Enable / Disable debugging for the plugin\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWebSettings.h" },
		{ "ToolTip", "Enable / Disable debugging for the plugin" },
	};
#endif
	void Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDebugging_SetBit(void* Obj)
	{
		((USteamCoreWebSettings*)Obj)->bDebugging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDebugging = { "bDebugging", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamCoreWebSettings), &Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDebugging_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDebugging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDebugging_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDevMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09* If enabled, HTTP requests will not be sent, useful if wanting to debug request strings (enable debugging to get string output)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWebSettings.h" },
		{ "ToolTip", "If enabled, HTTP requests will not be sent, useful if wanting to debug request strings (enable debugging to get string output)" },
	};
#endif
	void Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDevMode_SetBit(void* Obj)
	{
		((USteamCoreWebSettings*)Obj)->bDevMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDevMode = { "bDevMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamCoreWebSettings), &Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDevMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDevMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDevMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/*\n\x09* Steamworks Web API publisher authentication key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWebSettings.h" },
		{ "ToolTip", "* Steamworks Web API publisher authentication key." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreWebSettings, Key), METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/*\n\x09* Your AppID\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWebSettings.h" },
		{ "ToolTip", "* Your AppID" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreWebSettings, AppID), METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DevSteamID_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/*\n\x09* Development steam ID to use for testing purposes\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWebSettings.h" },
		{ "ToolTip", "* Development steam ID to use for testing purposes" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DevSteamID = { "DevSteamID", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreWebSettings, DevSteamID), METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DevSteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DevSteamID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bSandboxMode_MetaData[] = {
		{ "Category", "MicroTxn" },
		{ "Comment", "/**\n\x09* If enabled, we will use the Sandbox interface ISteamMicroTxnSandbox\n\x09* This interface is identical to the regular ISteamMicroTxn interface, but no actual transactions will occur.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWebSettings.h" },
		{ "ToolTip", "If enabled, we will use the Sandbox interface ISteamMicroTxnSandbox\nThis interface is identical to the regular ISteamMicroTxn interface, but no actual transactions will occur." },
	};
#endif
	void Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bSandboxMode_SetBit(void* Obj)
	{
		((USteamCoreWebSettings*)Obj)->bSandboxMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bSandboxMode = { "bSandboxMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamCoreWebSettings), &Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bSandboxMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bSandboxMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bSandboxMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreWebSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AsyncTaskTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DisabledSubsystems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDebugging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bDevMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_DevSteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreWebSettings_Statics::NewProp_bSandboxMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebSettings_Statics::ClassParams = {
		&USteamCoreWebSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USteamCoreWebSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebSettings()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebSettings.OuterSingleton, Z_Construct_UClass_USteamCoreWebSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebSettings.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebSettings>()
	{
		return USteamCoreWebSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebSettings);
	USteamCoreWebSettings::~USteamCoreWebSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWebSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWebSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebSettings, USteamCoreWebSettings::StaticClass, TEXT("USteamCoreWebSettings"), &Z_Registration_Info_UClass_USteamCoreWebSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebSettings), 1180231215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWebSettings_h_2409431140(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWebSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWebSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
