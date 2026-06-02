// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EMSObjectAdv.h"
#include "EMSData.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEMSObjectAdv() {}

// ********** Begin Cross Module References ********************************************************
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObjectAdv();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObjectAdv_NoRegister();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObjectBase();
EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FRawObjectSaveData();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEMSObjectAdv Function LoadObjectCollection ******************************
struct Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics
{
	struct EMSObjectAdv_eventLoadObjectCollection_Parms
	{
		TArray<FRawObjectSaveData> Objects;
		bool bUseSlot;
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "FileName" },
		{ "Category", "Easy Multi Save | Advanced" },
		{ "Comment", "/*\n\x09* Load a Collection of UObjects. \n\x09* Provides an efficient way to store any UObject directly. Useful for Subsystems, GameInstance etc.\n\x09*/" },
		{ "ModuleRelativePath", "System/Public/EMSObjectAdv.h" },
		{ "ToolTip", "* Load a Collection of UObjects.\n* Provides an efficient way to store any UObject directly. Useful for Subsystems, GameInstance etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadObjectCollection constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Objects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
	static void NewProp_bUseSlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSlot;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadObjectCollection constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadObjectCollection Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRawObjectSaveData, METADATA_PARAMS(0, nullptr) }; // 2275000115
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSObjectAdv_eventLoadObjectCollection_Parms, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objects_MetaData), NewProp_Objects_MetaData) }; // 2275000115
void Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::NewProp_bUseSlot_SetBit(void* Obj)
{
	((EMSObjectAdv_eventLoadObjectCollection_Parms*)Obj)->bUseSlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::NewProp_bUseSlot = { "bUseSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSObjectAdv_eventLoadObjectCollection_Parms), &Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::NewProp_bUseSlot_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSObjectAdv_eventLoadObjectCollection_Parms, FileName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EMSObjectAdv_eventLoadObjectCollection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSObjectAdv_eventLoadObjectCollection_Parms), &Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::NewProp_Objects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::NewProp_Objects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::NewProp_bUseSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::PropPointers) < 2048);
// ********** End Function LoadObjectCollection Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSObjectAdv, nullptr, "LoadObjectCollection", 	Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::EMSObjectAdv_eventLoadObjectCollection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::EMSObjectAdv_eventLoadObjectCollection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSObjectAdv::execLoadObjectCollection)
{
	P_GET_TARRAY_REF(FRawObjectSaveData,Z_Param_Out_Objects);
	P_GET_UBOOL(Z_Param_bUseSlot);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadObjectCollection(Z_Param_Out_Objects,Z_Param_bUseSlot,Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class UEMSObjectAdv Function LoadObjectCollection ********************************

// ********** Begin Class UEMSObjectAdv Function SaveObjectCollection ******************************
struct Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics
{
	struct EMSObjectAdv_eventSaveObjectCollection_Parms
	{
		TArray<FRawObjectSaveData> Objects;
		bool bUseSlot;
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "FileName" },
		{ "Category", "Easy Multi Save | Advanced" },
		{ "Comment", "/*\n\x09* Save a Collection of UObjects to a single file. \n\x09* Provides an efficient way to store any UObject directly.Useful for Subsystems, GameInstance etc.\n\x09*/" },
		{ "ModuleRelativePath", "System/Public/EMSObjectAdv.h" },
		{ "ToolTip", "* Save a Collection of UObjects to a single file.\n* Provides an efficient way to store any UObject directly.Useful for Subsystems, GameInstance etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SaveObjectCollection constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Objects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
	static void NewProp_bUseSlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSlot;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveObjectCollection constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveObjectCollection Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRawObjectSaveData, METADATA_PARAMS(0, nullptr) }; // 2275000115
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSObjectAdv_eventSaveObjectCollection_Parms, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objects_MetaData), NewProp_Objects_MetaData) }; // 2275000115
void Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::NewProp_bUseSlot_SetBit(void* Obj)
{
	((EMSObjectAdv_eventSaveObjectCollection_Parms*)Obj)->bUseSlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::NewProp_bUseSlot = { "bUseSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSObjectAdv_eventSaveObjectCollection_Parms), &Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::NewProp_bUseSlot_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EMSObjectAdv_eventSaveObjectCollection_Parms, FileName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EMSObjectAdv_eventSaveObjectCollection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EMSObjectAdv_eventSaveObjectCollection_Parms), &Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::NewProp_Objects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::NewProp_Objects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::NewProp_bUseSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::PropPointers) < 2048);
// ********** End Function SaveObjectCollection Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSObjectAdv, nullptr, "SaveObjectCollection", 	Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::EMSObjectAdv_eventSaveObjectCollection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::EMSObjectAdv_eventSaveObjectCollection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEMSObjectAdv::execSaveObjectCollection)
{
	P_GET_TARRAY_REF(FRawObjectSaveData,Z_Param_Out_Objects);
	P_GET_UBOOL(Z_Param_bUseSlot);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveObjectCollection(Z_Param_Out_Objects,Z_Param_bUseSlot,Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class UEMSObjectAdv Function SaveObjectCollection ********************************

// ********** Begin Class UEMSObjectAdv ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEMSObjectAdv;
UClass* UEMSObjectAdv::GetPrivateStaticClass()
{
	using TClass = UEMSObjectAdv;
	if (!Z_Registration_Info_UClass_UEMSObjectAdv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EMSObjectAdv"),
			Z_Registration_Info_UClass_UEMSObjectAdv.InnerSingleton,
			StaticRegisterNativesUEMSObjectAdv,
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
	return Z_Registration_Info_UClass_UEMSObjectAdv.InnerSingleton;
}
UClass* Z_Construct_UClass_UEMSObjectAdv_NoRegister()
{
	return UEMSObjectAdv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEMSObjectAdv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Easy Multi Save Adv." },
		{ "IncludePath", "System/Public/EMSObjectAdv.h" },
		{ "Keywords", "Save, EMS, EasyMultiSave, EasySave" },
		{ "ModuleRelativePath", "System/Public/EMSObjectAdv.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEMSObjectAdv constinit property declarations ****************************
// ********** End Class UEMSObjectAdv constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("LoadObjectCollection"), .Pointer = &UEMSObjectAdv::execLoadObjectCollection },
		{ .NameUTF8 = UTF8TEXT("SaveObjectCollection"), .Pointer = &UEMSObjectAdv::execSaveObjectCollection },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSObjectAdv_LoadObjectCollection, "LoadObjectCollection" }, // 1232800451
		{ &Z_Construct_UFunction_UEMSObjectAdv_SaveObjectCollection, "SaveObjectCollection" }, // 2214154045
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSObjectAdv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEMSObjectAdv_Statics
UObject* (*const Z_Construct_UClass_UEMSObjectAdv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEMSObjectBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObjectAdv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSObjectAdv_Statics::ClassParams = {
	&UEMSObjectAdv::StaticClass,
	"EmsUser",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x401000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSObjectAdv_Statics::Class_MetaDataParams), Z_Construct_UClass_UEMSObjectAdv_Statics::Class_MetaDataParams)
};
void UEMSObjectAdv::StaticRegisterNativesUEMSObjectAdv()
{
	UClass* Class = UEMSObjectAdv::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UEMSObjectAdv_Statics::Funcs));
}
UClass* Z_Construct_UClass_UEMSObjectAdv()
{
	if (!Z_Registration_Info_UClass_UEMSObjectAdv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSObjectAdv.OuterSingleton, Z_Construct_UClass_UEMSObjectAdv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEMSObjectAdv.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEMSObjectAdv);
UEMSObjectAdv::~UEMSObjectAdv() {}
// ********** End Class UEMSObjectAdv **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObjectAdv_h__Script_EasyMultiSave_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEMSObjectAdv, UEMSObjectAdv::StaticClass, TEXT("UEMSObjectAdv"), &Z_Registration_Info_UClass_UEMSObjectAdv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSObjectAdv), 571379998U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObjectAdv_h__Script_EasyMultiSave_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObjectAdv_h__Script_EasyMultiSave_375174625{
	TEXT("/Script/EasyMultiSave"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObjectAdv_h__Script_EasyMultiSave_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_System_Public_EMSObjectAdv_h__Script_EasyMultiSave_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
