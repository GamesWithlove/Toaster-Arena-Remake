// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PCGEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PCGEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_PCGEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PCGEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xDBAABFC2,
				0xF4F32126,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PCGEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PCGEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PCGEditor(Z_Construct_UPackage__Script_PCGEditor, TEXT("/Script/PCGEditor"), Z_Registration_Info_UPackage__Script_PCGEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDBAABFC2, 0xF4F32126));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
