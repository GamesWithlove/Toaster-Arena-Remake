// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PakFileManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePakFileManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TOASTERGAME_API UClass* Z_Construct_UClass_UPakFileManager();
TOASTERGAME_API UClass* Z_Construct_UClass_UPakFileManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToasterGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPakFileManager Function Get *********************************************
struct Z_Construct_UFunction_UPakFileManager_Get_Statics
{
	struct PakFileManager_eventGet_Parms
	{
		UPakFileManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pak" },
		{ "ModuleRelativePath", "Public/PakFileManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Get constinit property declarations ***********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Get constinit property declarations *************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Get Property Definitions **********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPakFileManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakFileManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_UPakFileManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakFileManager_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakFileManager_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakFileManager_Get_Statics::PropPointers) < 2048);
// ********** End Function Get Property Definitions ************************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakFileManager_Get_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakFileManager, nullptr, "Get", 	Z_Construct_UFunction_UPakFileManager_Get_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakFileManager_Get_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakFileManager_Get_Statics::PakFileManager_eventGet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakFileManager_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakFileManager_Get_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakFileManager_Get_Statics::PakFileManager_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakFileManager_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakFileManager_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakFileManager::execGet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPakFileManager**)Z_Param__Result=UPakFileManager::Get();
	P_NATIVE_END;
}
// ********** End Class UPakFileManager Function Get ***********************************************

// ********** Begin Class UPakFileManager Function Mount *******************************************
struct Z_Construct_UFunction_UPakFileManager_Mount_Statics
{
	struct PakFileManager_eventMount_Parms
	{
		FString Path;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pak" },
		{ "ModuleRelativePath", "Public/PakFileManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Mount constinit property declarations *********************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Mount constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Mount Property Definitions ********************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakFileManager_Mount_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakFileManager_eventMount_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
void Z_Construct_UFunction_UPakFileManager_Mount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PakFileManager_eventMount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakFileManager_Mount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PakFileManager_eventMount_Parms), &Z_Construct_UFunction_UPakFileManager_Mount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakFileManager_Mount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakFileManager_Mount_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakFileManager_Mount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakFileManager_Mount_Statics::PropPointers) < 2048);
// ********** End Function Mount Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakFileManager_Mount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakFileManager, nullptr, "Mount", 	Z_Construct_UFunction_UPakFileManager_Mount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakFileManager_Mount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakFileManager_Mount_Statics::PakFileManager_eventMount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakFileManager_Mount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakFileManager_Mount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakFileManager_Mount_Statics::PakFileManager_eventMount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakFileManager_Mount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakFileManager_Mount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakFileManager::execMount)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Mount(Z_Param_Path);
	P_NATIVE_END;
}
// ********** End Class UPakFileManager Function Mount *********************************************

// ********** Begin Class UPakFileManager Function Unmount *****************************************
struct Z_Construct_UFunction_UPakFileManager_Unmount_Statics
{
	struct PakFileManager_eventUnmount_Parms
	{
		FString Path;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pak" },
		{ "ModuleRelativePath", "Public/PakFileManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Unmount constinit property declarations *******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Unmount constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Unmount Property Definitions ******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPakFileManager_Unmount_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PakFileManager_eventUnmount_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
void Z_Construct_UFunction_UPakFileManager_Unmount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PakFileManager_eventUnmount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPakFileManager_Unmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PakFileManager_eventUnmount_Parms), &Z_Construct_UFunction_UPakFileManager_Unmount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPakFileManager_Unmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakFileManager_Unmount_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPakFileManager_Unmount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakFileManager_Unmount_Statics::PropPointers) < 2048);
// ********** End Function Unmount Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPakFileManager_Unmount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPakFileManager, nullptr, "Unmount", 	Z_Construct_UFunction_UPakFileManager_Unmount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPakFileManager_Unmount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPakFileManager_Unmount_Statics::PakFileManager_eventUnmount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPakFileManager_Unmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPakFileManager_Unmount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPakFileManager_Unmount_Statics::PakFileManager_eventUnmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPakFileManager_Unmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPakFileManager_Unmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPakFileManager::execUnmount)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Unmount(Z_Param_Path);
	P_NATIVE_END;
}
// ********** End Class UPakFileManager Function Unmount *******************************************

// ********** Begin Class UPakFileManager **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPakFileManager;
UClass* UPakFileManager::GetPrivateStaticClass()
{
	using TClass = UPakFileManager;
	if (!Z_Registration_Info_UClass_UPakFileManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PakFileManager"),
			Z_Registration_Info_UClass_UPakFileManager.InnerSingleton,
			StaticRegisterNativesUPakFileManager,
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
	return Z_Registration_Info_UClass_UPakFileManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UPakFileManager_NoRegister()
{
	return UPakFileManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPakFileManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PakFileManager.h" },
		{ "ModuleRelativePath", "Public/PakFileManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPakFileManager constinit property declarations **************************
// ********** End Class UPakFileManager constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Get"), .Pointer = &UPakFileManager::execGet },
		{ .NameUTF8 = UTF8TEXT("Mount"), .Pointer = &UPakFileManager::execMount },
		{ .NameUTF8 = UTF8TEXT("Unmount"), .Pointer = &UPakFileManager::execUnmount },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPakFileManager_Get, "Get" }, // 3266418322
		{ &Z_Construct_UFunction_UPakFileManager_Mount, "Mount" }, // 1993730830
		{ &Z_Construct_UFunction_UPakFileManager_Unmount, "Unmount" }, // 2114926498
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPakFileManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPakFileManager_Statics
UObject* (*const Z_Construct_UClass_UPakFileManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ToasterGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPakFileManager_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPakFileManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UPakFileManager_Statics::Class_MetaDataParams)
};
void UPakFileManager::StaticRegisterNativesUPakFileManager()
{
	UClass* Class = UPakFileManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPakFileManager_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPakFileManager()
{
	if (!Z_Registration_Info_UClass_UPakFileManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPakFileManager.OuterSingleton, Z_Construct_UClass_UPakFileManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPakFileManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPakFileManager);
// ********** End Class UPakFileManager ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h__Script_ToasterGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPakFileManager, UPakFileManager::StaticClass, TEXT("UPakFileManager"), &Z_Registration_Info_UClass_UPakFileManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPakFileManager), 762968892U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h__Script_ToasterGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h__Script_ToasterGame_88694755{
	TEXT("/Script/ToasterGame"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h__Script_ToasterGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_PakFileManager_h__Script_ToasterGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
