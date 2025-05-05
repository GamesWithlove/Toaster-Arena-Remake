// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCore/SteamCoreAsync.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreAsync() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction_NoRegister();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFailure__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnFailure__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFailure__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreAsync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFailure__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFailure__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFailure__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFailure__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFailure__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFailure_DelegateWrapper(const FMulticastScriptDelegate& OnFailure)
{
	OnFailure.ProcessMulticastDelegate<UObject>(NULL);
}
	void USteamCoreAsyncAction::StaticRegisterNativesUSteamCoreAsyncAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreAsyncAction);
	UClass* Z_Construct_UClass_USteamCoreAsyncAction_NoRegister()
	{
		return USteamCoreAsyncAction::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreAsyncAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_m_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreAsyncAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreAsyncAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCore/SteamCoreAsync.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreAsync.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreAsyncAction_Statics::NewProp_m_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreAsync.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USteamCoreAsyncAction_Statics::NewProp_m_WorldContextObject = { "m_WorldContextObject", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamCoreAsyncAction, m_WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USteamCoreAsyncAction_Statics::NewProp_m_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAsyncAction_Statics::NewProp_m_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreAsyncAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreAsyncAction_Statics::NewProp_m_WorldContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreAsyncAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAsyncAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAsyncAction_Statics::ClassParams = {
		&USteamCoreAsyncAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USteamCoreAsyncAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAsyncAction_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreAsyncAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAsyncAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreAsyncAction()
	{
		if (!Z_Registration_Info_UClass_USteamCoreAsyncAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreAsyncAction.OuterSingleton, Z_Construct_UClass_USteamCoreAsyncAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreAsyncAction.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreAsyncAction>()
	{
		return USteamCoreAsyncAction::StaticClass();
	}
	USteamCoreAsyncAction::USteamCoreAsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreAsyncAction);
	USteamCoreAsyncAction::~USteamCoreAsyncAction() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreAsyncAction, USteamCoreAsyncAction::StaticClass, TEXT("USteamCoreAsyncAction"), &Z_Registration_Info_UClass_USteamCoreAsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreAsyncAction), 3995014114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_3774936412(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
