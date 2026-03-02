// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSAsyncCheck.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSAsyncCheck() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncCheck();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSAsyncCheck_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSObject_NoRegister();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType();
	EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_CheckCompletedPin__DelegateSignature();
	EASYMULTISAVE_API UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_CheckFailedPin__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EasyMultiSave_CheckCompletedPin__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyMultiSave_CheckCompletedPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncCheck.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyMultiSave_CheckCompletedPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave, nullptr, "CheckCompletedPin__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyMultiSave_CheckCompletedPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_CheckCompletedPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_CheckCompletedPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyMultiSave_CheckCompletedPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCheckCompletedPin_DelegateWrapper(const FMulticastScriptDelegate& CheckCompletedPin)
{
	CheckCompletedPin.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_EasyMultiSave_CheckFailedPin__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyMultiSave_CheckFailedPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncCheck.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyMultiSave_CheckFailedPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyMultiSave, nullptr, "CheckFailedPin__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyMultiSave_CheckFailedPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyMultiSave_CheckFailedPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyMultiSave_CheckFailedPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyMultiSave_CheckFailedPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCheckFailedPin_DelegateWrapper(const FMulticastScriptDelegate& CheckFailedPin)
{
	CheckFailedPin.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UEMSAsyncCheck::execCheckSaveFiles)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESaveFileCheckType,Z_Param_CheckType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEMSAsyncCheck**)Z_Param__Result=UEMSAsyncCheck::CheckSaveFiles(Z_Param_WorldContextObject,ESaveFileCheckType(Z_Param_CheckType));
		P_NATIVE_END;
	}
	void UEMSAsyncCheck::StaticRegisterNativesUEMSAsyncCheck()
	{
		UClass* Class = UEMSAsyncCheck::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckSaveFiles", &UEMSAsyncCheck::execCheckSaveFiles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics
	{
		struct EMSAsyncCheck_eventCheckSaveFiles_Parms
		{
			UObject* WorldContextObject;
			ESaveFileCheckType CheckType;
			UEMSAsyncCheck* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CheckType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CheckType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSAsyncCheck_eventCheckSaveFiles_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics::NewProp_CheckType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics::NewProp_CheckType = { "CheckType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSAsyncCheck_eventCheckSaveFiles_Parms, CheckType), Z_Construct_UEnum_EasyMultiSave_ESaveFileCheckType, METADATA_PARAMS(nullptr, 0) }; // 1928543965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EMSAsyncCheck_eventCheckSaveFiles_Parms, ReturnValue), Z_Construct_UClass_UEMSAsyncCheck_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics::NewProp_CheckType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics::NewProp_CheckType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Easy Multi Save | Files" },
		{ "Comment", "/**\n\x09* Check the integrity of available files for the current Save Slot. See log for further output information.\n\x09* Verifies Player, Level and Slot files. Currently disabled for Custom Save Objects. \n\x09* \n\x09* @param CheckType - The type of versioning check to perform.\n\x09*/" },
		{ "DisplayName", "Check Save File Version" },
		{ "ModuleRelativePath", "Public/EMSAsyncCheck.h" },
		{ "ToolTip", "Check the integrity of available files for the current Save Slot. See log for further output information.\nVerifies Player, Level and Slot files. Currently disabled for Custom Save Objects.\n\n@param CheckType - The type of versioning check to perform." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSAsyncCheck, nullptr, "CheckSaveFiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics::EMSAsyncCheck_eventCheckSaveFiles_Parms), Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEMSAsyncCheck);
	UClass* Z_Construct_UClass_UEMSAsyncCheck_NoRegister()
	{
		return UEMSAsyncCheck::StaticClass();
	}
	struct Z_Construct_UClass_UEMSAsyncCheck_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EMS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EMS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEMSAsyncCheck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEMSAsyncCheck_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSAsyncCheck_CheckSaveFiles, "CheckSaveFiles" }, // 3236594033
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncCheck_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EMSAsyncCheck.h" },
		{ "ModuleRelativePath", "Public/EMSAsyncCheck.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncCheck_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncCheck.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEMSAsyncCheck_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSAsyncCheck, OnCompleted), Z_Construct_UDelegateFunction_EasyMultiSave_CheckCompletedPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncCheck_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncCheck_Statics::NewProp_OnCompleted_MetaData)) }; // 44402569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncCheck_Statics::NewProp_OnFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncCheck.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEMSAsyncCheck_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSAsyncCheck, OnFailed), Z_Construct_UDelegateFunction_EasyMultiSave_CheckFailedPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncCheck_Statics::NewProp_OnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncCheck_Statics::NewProp_OnFailed_MetaData)) }; // 2313017530
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSAsyncCheck_Statics::NewProp_EMS_MetaData[] = {
		{ "ModuleRelativePath", "Public/EMSAsyncCheck.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEMSAsyncCheck_Statics::NewProp_EMS = { "EMS", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEMSAsyncCheck, EMS), Z_Construct_UClass_UEMSObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncCheck_Statics::NewProp_EMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncCheck_Statics::NewProp_EMS_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSAsyncCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncCheck_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncCheck_Statics::NewProp_OnFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSAsyncCheck_Statics::NewProp_EMS,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEMSAsyncCheck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSAsyncCheck>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSAsyncCheck_Statics::ClassParams = {
		&UEMSAsyncCheck::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEMSAsyncCheck_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncCheck_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEMSAsyncCheck_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSAsyncCheck_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEMSAsyncCheck()
	{
		if (!Z_Registration_Info_UClass_UEMSAsyncCheck.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSAsyncCheck.OuterSingleton, Z_Construct_UClass_UEMSAsyncCheck_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEMSAsyncCheck.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UClass* StaticClass<UEMSAsyncCheck>()
	{
		return UEMSAsyncCheck::StaticClass();
	}
	UEMSAsyncCheck::UEMSAsyncCheck(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSAsyncCheck);
	UEMSAsyncCheck::~UEMSAsyncCheck() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncCheck_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncCheck_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEMSAsyncCheck, UEMSAsyncCheck::StaticClass, TEXT("UEMSAsyncCheck"), &Z_Registration_Info_UClass_UEMSAsyncCheck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSAsyncCheck), 2686158011U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncCheck_h_210413350(TEXT("/Script/EasyMultiSave"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncCheck_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSAsyncCheck_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
