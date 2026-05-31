// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EMSCompSaveInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEMSCompSaveInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSCompSaveInterface();
EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSCompSaveInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UEMSCompSaveInterface Function ComponentLoaded ***********************
void IEMSCompSaveInterface::ComponentLoaded()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ComponentLoaded instead.");
}
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
struct Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**Executed after the Component has been loaded.*/" },
		{ "ModuleRelativePath", "Interface/Public/EMSCompSaveInterface.h" },
		{ "ToolTip", "Executed after the Component has been loaded." },
	};
#endif // WITH_METADATA

// ********** Begin Function ComponentLoaded constinit property declarations ***********************
// ********** End Function ComponentLoaded constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSCompSaveInterface, nullptr, "ComponentLoaded", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEMSCompSaveInterface::execComponentLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComponentLoaded_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UEMSCompSaveInterface Function ComponentLoaded *************************

// ********** Begin Interface UEMSCompSaveInterface Function ComponentPreLoad **********************
void IEMSCompSaveInterface::ComponentPreLoad()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ComponentPreLoad instead.");
}
static FName NAME_UEMSCompSaveInterface_ComponentPreLoad = FName(TEXT("ComponentPreLoad"));
void IEMSCompSaveInterface::Execute_ComponentPreLoad(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEMSCompSaveInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UEMSCompSaveInterface_ComponentPreLoad);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IEMSCompSaveInterface*)(O->GetNativeInterfaceAddress(UEMSCompSaveInterface::StaticClass())))
	{
		I->ComponentPreLoad_Implementation();
	}
}
struct Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreLoad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**Executed right before the Component is loaded.*/" },
		{ "ModuleRelativePath", "Interface/Public/EMSCompSaveInterface.h" },
		{ "ToolTip", "Executed right before the Component is loaded." },
	};
#endif // WITH_METADATA

// ********** Begin Function ComponentPreLoad constinit property declarations **********************
// ********** End Function ComponentPreLoad constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreLoad_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSCompSaveInterface, nullptr, "ComponentPreLoad", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreLoad_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEMSCompSaveInterface::execComponentPreLoad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComponentPreLoad_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UEMSCompSaveInterface Function ComponentPreLoad ************************

// ********** Begin Interface UEMSCompSaveInterface Function ComponentPreSave **********************
void IEMSCompSaveInterface::ComponentPreSave()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ComponentPreSave instead.");
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
struct Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**Executed before the Component is saved.*/" },
		{ "ModuleRelativePath", "Interface/Public/EMSCompSaveInterface.h" },
		{ "ToolTip", "Executed before the Component is saved." },
	};
#endif // WITH_METADATA

// ********** Begin Function ComponentPreSave constinit property declarations **********************
// ********** End Function ComponentPreSave constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSCompSaveInterface, nullptr, "ComponentPreSave", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEMSCompSaveInterface::execComponentPreSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComponentPreSave_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UEMSCompSaveInterface Function ComponentPreSave ************************

// ********** Begin Interface UEMSCompSaveInterface Function ComponentSaved ************************
void IEMSCompSaveInterface::ComponentSaved()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ComponentSaved instead.");
}
static FName NAME_UEMSCompSaveInterface_ComponentSaved = FName(TEXT("ComponentSaved"));
void IEMSCompSaveInterface::Execute_ComponentSaved(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEMSCompSaveInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UEMSCompSaveInterface_ComponentSaved);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IEMSCompSaveInterface*)(O->GetNativeInterfaceAddress(UEMSCompSaveInterface::StaticClass())))
	{
		I->ComponentSaved_Implementation();
	}
}
struct Z_Construct_UFunction_UEMSCompSaveInterface_ComponentSaved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save" },
		{ "Comment", "/**Executed after the Component has been saved.*/" },
		{ "ModuleRelativePath", "Interface/Public/EMSCompSaveInterface.h" },
		{ "ToolTip", "Executed after the Component has been saved." },
	};
#endif // WITH_METADATA

// ********** Begin Function ComponentSaved constinit property declarations ************************
// ********** End Function ComponentSaved constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSCompSaveInterface_ComponentSaved_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEMSCompSaveInterface, nullptr, "ComponentSaved", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSCompSaveInterface_ComponentSaved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEMSCompSaveInterface_ComponentSaved_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEMSCompSaveInterface_ComponentSaved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEMSCompSaveInterface_ComponentSaved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IEMSCompSaveInterface::execComponentSaved)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComponentSaved_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UEMSCompSaveInterface Function ComponentSaved **************************

// ********** Begin Interface UEMSCompSaveInterface ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEMSCompSaveInterface;
UClass* UEMSCompSaveInterface::GetPrivateStaticClass()
{
	using TClass = UEMSCompSaveInterface;
	if (!Z_Registration_Info_UClass_UEMSCompSaveInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EMSCompSaveInterface"),
			Z_Registration_Info_UClass_UEMSCompSaveInterface.InnerSingleton,
			StaticRegisterNativesUEMSCompSaveInterface,
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
	return Z_Registration_Info_UClass_UEMSCompSaveInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UEMSCompSaveInterface_NoRegister()
{
	return UEMSCompSaveInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEMSCompSaveInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Easy Multi Save" },
		{ "DisplayName", "EMS Component Save Interface" },
		{ "ModuleRelativePath", "Interface/Public/EMSCompSaveInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UEMSCompSaveInterface constinit property declarations ****************
// ********** End Interface UEMSCompSaveInterface constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ComponentLoaded"), .Pointer = &IEMSCompSaveInterface::execComponentLoaded },
		{ .NameUTF8 = UTF8TEXT("ComponentPreLoad"), .Pointer = &IEMSCompSaveInterface::execComponentPreLoad },
		{ .NameUTF8 = UTF8TEXT("ComponentPreSave"), .Pointer = &IEMSCompSaveInterface::execComponentPreSave },
		{ .NameUTF8 = UTF8TEXT("ComponentSaved"), .Pointer = &IEMSCompSaveInterface::execComponentSaved },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSCompSaveInterface_ComponentLoaded, "ComponentLoaded" }, // 4023166709
		{ &Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreLoad, "ComponentPreLoad" }, // 1315771516
		{ &Z_Construct_UFunction_UEMSCompSaveInterface_ComponentPreSave, "ComponentPreSave" }, // 1230118726
		{ &Z_Construct_UFunction_UEMSCompSaveInterface_ComponentSaved, "ComponentSaved" }, // 1349177982
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEMSCompSaveInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEMSCompSaveInterface_Statics
UObject* (*const Z_Construct_UClass_UEMSCompSaveInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSCompSaveInterface_Statics::DependentSingletons) < 16);
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEMSCompSaveInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEMSCompSaveInterface_Statics::Class_MetaDataParams)
};
void UEMSCompSaveInterface::StaticRegisterNativesUEMSCompSaveInterface()
{
	UClass* Class = UEMSCompSaveInterface::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UEMSCompSaveInterface_Statics::Funcs));
}
UClass* Z_Construct_UClass_UEMSCompSaveInterface()
{
	if (!Z_Registration_Info_UClass_UEMSCompSaveInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEMSCompSaveInterface.OuterSingleton, Z_Construct_UClass_UEMSCompSaveInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEMSCompSaveInterface.OuterSingleton;
}
UEMSCompSaveInterface::UEMSCompSaveInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEMSCompSaveInterface);
// ********** End Interface UEMSCompSaveInterface **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h__Script_EasyMultiSave_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEMSCompSaveInterface, UEMSCompSaveInterface::StaticClass, TEXT("UEMSCompSaveInterface"), &Z_Registration_Info_UClass_UEMSCompSaveInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEMSCompSaveInterface), 1803723870U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h__Script_EasyMultiSave_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h__Script_EasyMultiSave_1259565136{
	TEXT("/Script/EasyMultiSave"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h__Script_EasyMultiSave_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyMultiSave_Source_EasyMultiSave_Interface_Public_EMSCompSaveInterface_h__Script_EasyMultiSave_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
