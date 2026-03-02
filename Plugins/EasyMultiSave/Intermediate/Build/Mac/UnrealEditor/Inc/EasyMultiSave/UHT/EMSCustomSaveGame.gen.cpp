// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSCustomSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSCustomSaveGame() {}
// Cross Module References
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSCustomSaveGame();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSCustomSaveGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References
	void UEMSCustomSaveGame::StaticRegisterNativesUEMSCustomSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEMSCustomSaveGame);
	UClass* Z_Construct_UClass_UEMSCustomSaveGame_NoRegister()
	{
		return UEMSCustomSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UEMSCustomSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSaveSlot_MetaData[];
#endif
		static void NewProp_bUseSaveSlot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSaveSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEMSCustomSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSCustomSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EMSCustomSaveGame.h" },
		{ "ModuleRelativePath", "Public/EMSCustomSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_SaveGameName_MetaData[] = {
		{ "Category", "Files" },
		{ "Comment", "/** The actual name of the custom save file. If empty it will use the class name. */" },
		{ "DisplayName", "File Name" },
		{ "ModuleRelativePath", "Public/EMSCustomSaveGame.h" },
		{ "ToolTip", "The actual name of the custom save file. If empty it will use the class name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSCustomSaveGame, SaveGameName), METADATA_PARAMS(Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_SaveGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_SaveGameName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_bUseSaveSlot_MetaData[] = {
		{ "Category", "Files" },
		{ "Comment", "/** If you want to use the current save slot for the custom save file. */" },
		{ "ModuleRelativePath", "Public/EMSCustomSaveGame.h" },
		{ "ToolTip", "If you want to use the current save slot for the custom save file." },
	};
#endif
	void Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_bUseSaveSlot_SetBit(void* Obj)
	{
		((UEMSCustomSaveGame*)Obj)->bUseSaveSlot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_bUseSaveSlot = { "bUseSaveSlot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEMSCustomSaveGame), &Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_bUseSaveSlot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_bUseSaveSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_bUseSaveSlot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSCustomSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_SaveGameName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSCustomSaveGame_Statics::NewProp_bUseSaveSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEMSCustomSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSCustomSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSCustomSaveGame_Statics::ClassParams = {
		&UEMSCustomSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEMSCustomSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEMSCustomSaveGame_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEMSCustomSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSCustomSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEMSCustomSaveGame()
	{
		if (!Z_Registration_Info_UClass_UEMSCustomSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSCustomSaveGame.OuterSingleton, Z_Construct_UClass_UEMSCustomSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEMSCustomSaveGame.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UClass* StaticClass<UEMSCustomSaveGame>()
	{
		return UEMSCustomSaveGame::StaticClass();
	}
	UEMSCustomSaveGame::UEMSCustomSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSCustomSaveGame);
	UEMSCustomSaveGame::~UEMSCustomSaveGame() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCustomSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCustomSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEMSCustomSaveGame, UEMSCustomSaveGame::StaticClass, TEXT("UEMSCustomSaveGame"), &Z_Registration_Info_UClass_UEMSCustomSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSCustomSaveGame), 2752966918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCustomSaveGame_h_4227975865(TEXT("/Script/EasyMultiSave"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCustomSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCustomSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
