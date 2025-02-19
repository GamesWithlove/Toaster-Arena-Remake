// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamNetworkingUtils/SteamNetworkingUtilsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamNetworkingUtilsTypes() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamNetworkPingLocation();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation;
class UScriptStruct* FSteamNetworkPingLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamNetworkPingLocation, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamNetworkPingLocation"));
	}
	return Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamNetworkPingLocation>()
{
	return FSteamNetworkPingLocation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtilsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamNetworkPingLocation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "NetworkingUtils" },
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtilsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamNetworkPingLocation, Location), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Location,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamNetworkPingLocation",
		sizeof(FSteamNetworkPingLocation),
		alignof(FSteamNetworkPingLocation),
		Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamNetworkPingLocation()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.InnerSingleton, Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtilsTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtilsTypes_h_Statics::ScriptStructInfo[] = {
		{ FSteamNetworkPingLocation::StaticStruct, Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewStructOps, TEXT("SteamNetworkPingLocation"), &Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamNetworkPingLocation), 416590158U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtilsTypes_h_3992290305(TEXT("/Script/SteamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtilsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtilsTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
