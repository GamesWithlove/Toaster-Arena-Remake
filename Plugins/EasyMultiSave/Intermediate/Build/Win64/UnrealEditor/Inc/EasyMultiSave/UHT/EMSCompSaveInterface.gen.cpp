// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSCompSaveInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSCompSaveInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSCompSaveInterface();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSCompSaveInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References
	DEFINE_FUNCTION(IEMSCompSaveInterface::execComponentPreSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComponentPreSave_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEMSCompSaveInterface::execComponentLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComponentLoaded_Implementation();
		P_NATIVE_END;
	}
	void IEMSCompSaveInterface::ComponentLoaded()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ComponentLoaded instead.");
	}
	void IEMSCompSaveInterface::ComponentPreSave()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ComponentPreSave instead.");
	}
	void UEMSCompSaveInterface::StaticRegisterNativesUEMSCompSaveInterface()
	{
		UClass* Class = UEMSCompSaveInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComponentLoaded", &IEMSCompSaveInterface::execComponentLoaded },
			{ "ComponentPreSave", &IEMSCompSaveInterface::execComponentPreSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**Executed after the Component has been loaded.*/" },
		{ "ModuleRelativePath", "Public/EMSCompSaveInterface.h" },
		{ "ToolTip", "Executed after the Component has been loaded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSCompSaveInterface, nullptr, "ComponentLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**Executed before the Component is saved.*/" },
		{ "ModuleRelativePath", "Public/EMSCompSaveInterface.h" },
		{ "ToolTip", "Executed before the Component is saved." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSCompSaveInterface, nullptr, "ComponentPreSave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEMSCompSaveInterface);
	UClass* Z_Construct_UClass_UEMSCompSaveInterface_NoRegister()
	{
		return UEMSCompSaveInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEMSCompSaveInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEMSCompSaveInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEMSCompSaveInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded, "ComponentLoaded" }, // 279578872
		{ &Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave, "ComponentPreSave" }, // 1307900469
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSCompSaveInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Easy Multi Save" },
		{ "DisplayName", "EMS Component Save Interface" },
		{ "ModuleRelativePath", "Public/EMSCompSaveInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEMSCompSaveInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEMSCompSaveInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEMSCompSaveInterface_Statics::ClassParams = {
		&UEMSCompSaveInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEMSCompSaveInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSCompSaveInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEMSCompSaveInterface()
	{
		if (!Z_Registration_Info_UClass_UEMSCompSaveInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSCompSaveInterface.OuterSingleton, Z_Construct_UClass_UEMSCompSaveInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEMSCompSaveInterface.OuterSingleton;
	}
	template<> EASYMULTISAVE_API UClass* StaticClass<UEMSCompSaveInterface>()
	{
		return UEMSCompSaveInterface::StaticClass();
	}
	UEMSCompSaveInterface::UEMSCompSaveInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSCompSaveInterface);
	UEMSCompSaveInterface::~UEMSCompSaveInterface() {}
	static FName NAME_UEMSCompSaveInterface_ComponentLoaded = FName(TEXT("ComponentLoaded"));
	void IEMSCompSaveInterface::Execute_ComponentLoaded(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEMSCompSaveInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEMSCompSaveInterface_ComponentLoaded);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEMSCompSaveInterface*)(O->GetNativeInterfaceAddress(UEMSCompSaveInterface::StaticClass())))
		{
			I->ComponentLoaded_Implementation();
		}
	}
	static FName NAME_UEMSCompSaveInterface_ComponentPreSave = FName(TEXT("ComponentPreSave"));
	void IEMSCompSaveInterface::Execute_ComponentPreSave(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEMSCompSaveInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEMSCompSaveInterface_ComponentPreSave);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEMSCompSaveInterface*)(O->GetNativeInterfaceAddress(UEMSCompSaveInterface::StaticClass())))
		{
			I->ComponentPreSave_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEMSCompSaveInterface, UEMSCompSaveInterface::StaticClass, TEXT("UEMSCompSaveInterface"), &Z_Registration_Info_UClass_UEMSCompSaveInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSCompSaveInterface), 2638194619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_2264033727(TEXT("/Script/EasyMultiSave"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_EasyMultiSave_Source_EasyMultiSave_Public_EMSCompSaveInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
