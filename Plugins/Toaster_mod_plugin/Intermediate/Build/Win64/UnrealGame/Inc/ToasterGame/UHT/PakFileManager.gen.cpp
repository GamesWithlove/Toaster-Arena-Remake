// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToasterGame/Public/PakFileManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePakFileManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TOASTERGAME_API UClass* Z_Construct_UClass_UPakFileManager();
	TOASTERGAME_API UClass* Z_Construct_UClass_UPakFileManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ToasterGame();
// End Cross Module References
	DEFINE_FUNCTION(UPakFileManager::execUnmount)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Unmount(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakFileManager::execMount)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Mount(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPakFileManager::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPakFileManager**)Z_Param__Result=UPakFileManager::Get();
		P_NATIVE_END;
	}
	void UPakFileManager::StaticRegisterNativesUPakFileManager()
	{
		UClass* Class = UPakFileManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &UPakFileManager::execGet },
			{ "Mount", &UPakFileManager::execMount },
			{ "Unmount", &UPakFileManager::execUnmount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPakFileManager_Get_Statics
	{
		struct PakFileManager_eventGet_Parms
		{
			UPakFileManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakFileManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakFileManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_UPakFileManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakFileManager_Get_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakFileManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakFileManager_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pak" },
		{ "ModuleRelativePath", "Public/PakFileManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakFileManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakFileManager, nullptr, "Get", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakFileManager_Get_Statics::PakFileManager_eventGet_Parms), Z_Construct_UFunction_UPakFileManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakFileManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakFileManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakFileManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakFileManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakFileManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakFileManager_Mount_Statics
	{
		struct PakFileManager_eventMount_Parms
		{
			FString Path;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakFileManager_Mount_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakFileManager_Mount_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakFileManager_eventMount_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UPakFileManager_Mount_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakFileManager_Mount_Statics::NewProp_Path_MetaData)) };
	void Z_Construct_UFunction_UPakFileManager_Mount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PakFileManager_eventMount_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakFileManager_Mount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PakFileManager_eventMount_Parms), &Z_Construct_UFunction_UPakFileManager_Mount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakFileManager_Mount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakFileManager_Mount_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakFileManager_Mount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakFileManager_Mount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pak" },
		{ "ModuleRelativePath", "Public/PakFileManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakFileManager_Mount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakFileManager, nullptr, "Mount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakFileManager_Mount_Statics::PakFileManager_eventMount_Parms), Z_Construct_UFunction_UPakFileManager_Mount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakFileManager_Mount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakFileManager_Mount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakFileManager_Mount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakFileManager_Mount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakFileManager_Mount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPakFileManager_Unmount_Statics
	{
		struct PakFileManager_eventUnmount_Parms
		{
			FString Path;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakFileManager_Unmount_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakFileManager_Unmount_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PakFileManager_eventUnmount_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UPakFileManager_Unmount_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakFileManager_Unmount_Statics::NewProp_Path_MetaData)) };
	void Z_Construct_UFunction_UPakFileManager_Unmount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PakFileManager_eventUnmount_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakFileManager_Unmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PakFileManager_eventUnmount_Parms), &Z_Construct_UFunction_UPakFileManager_Unmount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakFileManager_Unmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakFileManager_Unmount_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakFileManager_Unmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPakFileManager_Unmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pak" },
		{ "ModuleRelativePath", "Public/PakFileManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakFileManager_Unmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPakFileManager, nullptr, "Unmount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPakFileManager_Unmount_Statics::PakFileManager_eventUnmount_Parms), Z_Construct_UFunction_UPakFileManager_Unmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakFileManager_Unmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPakFileManager_Unmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPakFileManager_Unmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPakFileManager_Unmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakFileManager_Unmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPakFileManager);
	UClass* Z_Construct_UClass_UPakFileManager_NoRegister()
	{
		return UPakFileManager::StaticClass();
	}
	struct Z_Construct_UClass_UPakFileManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPakFileManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ToasterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPakFileManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPakFileManager_Get, "Get" }, // 1561579640
		{ &Z_Construct_UFunction_UPakFileManager_Mount, "Mount" }, // 1073482623
		{ &Z_Construct_UFunction_UPakFileManager_Unmount, "Unmount" }, // 3831880056
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPakFileManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PakFileManager.h" },
		{ "ModuleRelativePath", "Public/PakFileManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPakFileManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPakFileManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPakFileManager_Statics::ClassParams = {
		&UPakFileManager::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPakFileManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPakFileManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPakFileManager()
	{
		if (!Z_Registration_Info_UClass_UPakFileManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPakFileManager.OuterSingleton, Z_Construct_UClass_UPakFileManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPakFileManager.OuterSingleton;
	}
	template<> TOASTERGAME_API UClass* StaticClass<UPakFileManager>()
	{
		return UPakFileManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPakFileManager);
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPakFileManager, UPakFileManager::StaticClass, TEXT("UPakFileManager"), &Z_Registration_Info_UClass_UPakFileManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPakFileManager), 215834102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h_1321224784(TEXT("/Script/ToasterGame"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
