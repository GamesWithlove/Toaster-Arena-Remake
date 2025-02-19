// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamAppList/SteamAppListTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAppListTypes() {}
// Cross Module References
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamAppInstalled();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamAppUninstalled();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamAppInstalled;
class UScriptStruct* FSteamAppInstalled::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamAppInstalled.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamAppInstalled.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamAppInstalled, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamAppInstalled"));
	}
	return Z_Registration_Info_UScriptStruct_SteamAppInstalled.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamAppInstalled>()
{
	return FSteamAppInstalled::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamAppInstalled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamAppInstalled_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamAppList/SteamAppListTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamAppInstalled_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamAppInstalled>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamAppInstalled_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "AppList" },
		{ "ModuleRelativePath", "Public/SteamAppList/SteamAppListTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamAppInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamAppInstalled, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamAppInstalled_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamAppInstalled_Statics::NewProp_AppID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamAppInstalled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamAppInstalled_Statics::NewProp_AppID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamAppInstalled_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamAppInstalled",
		sizeof(FSteamAppInstalled),
		alignof(FSteamAppInstalled),
		Z_Construct_UScriptStruct_FSteamAppInstalled_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamAppInstalled_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamAppInstalled_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamAppInstalled_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamAppInstalled()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamAppInstalled.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamAppInstalled.InnerSingleton, Z_Construct_UScriptStruct_FSteamAppInstalled_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamAppInstalled.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamAppUninstalled;
class UScriptStruct* FSteamAppUninstalled::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamAppUninstalled.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamAppUninstalled.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamAppUninstalled, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamAppUninstalled"));
	}
	return Z_Registration_Info_UScriptStruct_SteamAppUninstalled.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamAppUninstalled>()
{
	return FSteamAppUninstalled::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamAppList/SteamAppListTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamAppUninstalled>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "AppList" },
		{ "ModuleRelativePath", "Public/SteamAppList/SteamAppListTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamAppUninstalled, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics::NewProp_AppID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics::NewProp_AppID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamAppUninstalled",
		sizeof(FSteamAppUninstalled),
		alignof(FSteamAppUninstalled),
		Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamAppUninstalled()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamAppUninstalled.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamAppUninstalled.InnerSingleton, Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamAppUninstalled.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSteamAppInstalled_Parms
		{
			FSteamAppInstalled Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamAppInstalled_Parms, Data), Z_Construct_UScriptStruct_FSteamAppInstalled, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1070095179
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamAppList/SteamAppListTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamAppInstalled__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamAppInstalled_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamAppInstalled_DelegateWrapper(const FMulticastScriptDelegate& OnSteamAppInstalled, FSteamAppInstalled const& Data)
{
	struct _Script_SteamCore_eventOnSteamAppInstalled_Parms
	{
		FSteamAppInstalled Data;
	};
	_Script_SteamCore_eventOnSteamAppInstalled_Parms Parms;
	Parms.Data=Data;
	OnSteamAppInstalled.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSteamAppUninstalled_Parms
		{
			FSteamAppUninstalled Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamAppUninstalled_Parms, Data), Z_Construct_UScriptStruct_FSteamAppUninstalled, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1447066486
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamAppList/SteamAppListTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamAppUninstalled__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamAppUninstalled_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSteamAppUninstalled_DelegateWrapper(const FMulticastScriptDelegate& OnSteamAppUninstalled, FSteamAppUninstalled const& Data)
{
	struct _Script_SteamCore_eventOnSteamAppUninstalled_Parms
	{
		FSteamAppUninstalled Data;
	};
	_Script_SteamCore_eventOnSteamAppUninstalled_Parms Parms;
	Parms.Data=Data;
	OnSteamAppUninstalled.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppListTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppListTypes_h_Statics::ScriptStructInfo[] = {
		{ FSteamAppInstalled::StaticStruct, Z_Construct_UScriptStruct_FSteamAppInstalled_Statics::NewStructOps, TEXT("SteamAppInstalled"), &Z_Registration_Info_UScriptStruct_SteamAppInstalled, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamAppInstalled), 1070095179U) },
		{ FSteamAppUninstalled::StaticStruct, Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics::NewStructOps, TEXT("SteamAppUninstalled"), &Z_Registration_Info_UScriptStruct_SteamAppUninstalled, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamAppUninstalled), 1447066486U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppListTypes_h_2602870075(TEXT("/Script/SteamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppListTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppListTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
