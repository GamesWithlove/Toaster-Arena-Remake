// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/UGCBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGCBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCBlueprintLibrary();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCBlueprintLibrary_NoRegister();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCRegistry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// End Cross Module References
	DEFINE_FUNCTION(UUGCBlueprintLibrary::execGetUGCRegistry)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUGCRegistry**)Z_Param__Result=UUGCBlueprintLibrary::GetUGCRegistry(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UUGCBlueprintLibrary::StaticRegisterNativesUUGCBlueprintLibrary()
	{
		UClass* Class = UUGCBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUGCRegistry", &UUGCBlueprintLibrary::execGetUGCRegistry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics
	{
		struct UGCBlueprintLibrary_eventGetUGCRegistry_Parms
		{
			UObject* WorldContextObject;
			UUGCRegistry* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGCBlueprintLibrary_eventGetUGCRegistry_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGCBlueprintLibrary_eventGetUGCRegistry_Parms, ReturnValue), Z_Construct_UClass_UUGCRegistry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC" },
		{ "Comment", "// Gets the UGC Registry found in the GameInstance\n" },
		{ "ModuleRelativePath", "Public/UGCBlueprintLibrary.h" },
		{ "ToolTip", "Gets the UGC Registry found in the GameInstance" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCBlueprintLibrary, nullptr, "GetUGCRegistry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::UGCBlueprintLibrary_eventGetUGCRegistry_Parms), Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUGCBlueprintLibrary);
	UClass* Z_Construct_UClass_UUGCBlueprintLibrary_NoRegister()
	{
		return UUGCBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUGCBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUGCBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUGCBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUGCBlueprintLibrary_GetUGCRegistry, "GetUGCRegistry" }, // 3776203721
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UGCBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/UGCBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUGCBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGCBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUGCBlueprintLibrary_Statics::ClassParams = {
		&UUGCBlueprintLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUGCBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUGCBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UUGCBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGCBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UUGCBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUGCBlueprintLibrary.OuterSingleton;
	}
	template<> SIMPLEUGC_API UClass* StaticClass<UUGCBlueprintLibrary>()
	{
		return UUGCBlueprintLibrary::StaticClass();
	}
	UUGCBlueprintLibrary::UUGCBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUGCBlueprintLibrary);
	UUGCBlueprintLibrary::~UUGCBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUGCBlueprintLibrary, UUGCBlueprintLibrary::StaticClass, TEXT("UUGCBlueprintLibrary"), &Z_Registration_Info_UClass_UUGCBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGCBlueprintLibrary), 3762872569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h_3442024406(TEXT("/Script/SimpleUGC"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
