// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Metadata/Accessors/IPCGAttributeAccessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPCGAttributeAccessor() {}
// Cross Module References
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGAttributeAccessorFlags();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGAttributeAccessorFlags;
	static UEnum* EPCGAttributeAccessorFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttributeAccessorFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGAttributeAccessorFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGAttributeAccessorFlags, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGAttributeAccessorFlags"));
		}
		return Z_Registration_Info_UEnum_EPCGAttributeAccessorFlags.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGAttributeAccessorFlags>()
	{
		return EPCGAttributeAccessorFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGAttributeAccessorFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGAttributeAccessorFlags_Statics::Enumerators[] = {
		{ "EPCGAttributeAccessorFlags::StrictType", (int64)EPCGAttributeAccessorFlags::StrictType },
		{ "EPCGAttributeAccessorFlags::AllowBroadcast", (int64)EPCGAttributeAccessorFlags::AllowBroadcast },
		{ "EPCGAttributeAccessorFlags::AllowConstructible", (int64)EPCGAttributeAccessorFlags::AllowConstructible },
		{ "EPCGAttributeAccessorFlags::AllowSetDefaultValue", (int64)EPCGAttributeAccessorFlags::AllowSetDefaultValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGAttributeAccessorFlags_Statics::Enum_MetaDataParams[] = {
		{ "AllowBroadcast.Comment", "// Allow to broadcast the expected type to the underlying type (or vice versa, depending on the operation)\n" },
		{ "AllowBroadcast.Name", "EPCGAttributeAccessorFlags::AllowBroadcast" },
		{ "AllowBroadcast.ToolTip", "Allow to broadcast the expected type to the underlying type (or vice versa, depending on the operation)" },
		{ "AllowConstructible.Comment", "// Allow to construct the expected type from the underlying type (or vice versa, depending on the operation)\n" },
		{ "AllowConstructible.Name", "EPCGAttributeAccessorFlags::AllowConstructible" },
		{ "AllowConstructible.ToolTip", "Allow to construct the expected type from the underlying type (or vice versa, depending on the operation)" },
		{ "AllowSetDefaultValue.Comment", "// By default, if the key is a PCGInvalidEntryKey, it will add a new entry. With this set, it will override the default value.\n// USE WITH CAUTION\n" },
		{ "AllowSetDefaultValue.Name", "EPCGAttributeAccessorFlags::AllowSetDefaultValue" },
		{ "AllowSetDefaultValue.ToolTip", "By default, if the key is a PCGInvalidEntryKey, it will add a new entry. With this set, it will override the default value.\nUSE WITH CAUTION" },
		{ "Bitflags", "" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/Metadata/Accessors/IPCGAttributeAccessor.h" },
		{ "StrictType.Comment", "//////////////////////////////////////////////////////////////////////////////\n// Always require that the underlying type of the accessor match the expected type, 1 for 1.\n" },
		{ "StrictType.Name", "EPCGAttributeAccessorFlags::StrictType" },
		{ "StrictType.ToolTip", "Always require that the underlying type of the accessor match the expected type, 1 for 1." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGAttributeAccessorFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGAttributeAccessorFlags",
		"EPCGAttributeAccessorFlags",
		Z_Construct_UEnum_PCG_EPCGAttributeAccessorFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttributeAccessorFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGAttributeAccessorFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttributeAccessorFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGAttributeAccessorFlags()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttributeAccessorFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGAttributeAccessorFlags.InnerSingleton, Z_Construct_UEnum_PCG_EPCGAttributeAccessorFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGAttributeAccessorFlags.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_Accessors_IPCGAttributeAccessor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_Accessors_IPCGAttributeAccessor_h_Statics::EnumInfo[] = {
		{ EPCGAttributeAccessorFlags_StaticEnum, TEXT("EPCGAttributeAccessorFlags"), &Z_Registration_Info_UEnum_EPCGAttributeAccessorFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2506587409U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_Accessors_IPCGAttributeAccessor_h_1442954571(TEXT("/Script/PCG"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_Accessors_IPCGAttributeAccessor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_Accessors_IPCGAttributeAccessor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
