// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Tests/Accessor/PCGAttributeExtractorTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGAttributeExtractorTest() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PCG_API UClass* Z_Construct_UClass_UPCGAttributeExtractorTestObject();
	PCG_API UClass* Z_Construct_UClass_UPCGAttributeExtractorTestObject_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGAttributeExtractorTestObject::StaticRegisterNativesUPCGAttributeExtractorTestObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGAttributeExtractorTestObject);
	UClass* Z_Construct_UClass_UPCGAttributeExtractorTestObject_NoRegister()
	{
		return UPCGAttributeExtractorTestObject::StaticClass();
	}
	struct Z_Construct_UClass_UPCGAttributeExtractorTestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DoubleValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGAttributeExtractorTestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeExtractorTestObject_Statics::Class_MetaDataParams[] = {
		{ "Hidden", "" },
		{ "IncludePath", "Tests/Accessor/PCGAttributeExtractorTest.h" },
		{ "ModuleRelativePath", "Public/Tests/Accessor/PCGAttributeExtractorTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeExtractorTestObject_Statics::NewProp_DoubleValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tests/Accessor/PCGAttributeExtractorTest.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGAttributeExtractorTestObject_Statics::NewProp_DoubleValue = { "DoubleValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGAttributeExtractorTestObject, DoubleValue), METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeExtractorTestObject_Statics::NewProp_DoubleValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeExtractorTestObject_Statics::NewProp_DoubleValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGAttributeExtractorTestObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeExtractorTestObject_Statics::NewProp_DoubleValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGAttributeExtractorTestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGAttributeExtractorTestObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGAttributeExtractorTestObject_Statics::ClassParams = {
		&UPCGAttributeExtractorTestObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGAttributeExtractorTestObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeExtractorTestObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeExtractorTestObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeExtractorTestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGAttributeExtractorTestObject()
	{
		if (!Z_Registration_Info_UClass_UPCGAttributeExtractorTestObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGAttributeExtractorTestObject.OuterSingleton, Z_Construct_UClass_UPCGAttributeExtractorTestObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGAttributeExtractorTestObject.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGAttributeExtractorTestObject>()
	{
		return UPCGAttributeExtractorTestObject::StaticClass();
	}
	UPCGAttributeExtractorTestObject::UPCGAttributeExtractorTestObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGAttributeExtractorTestObject);
	UPCGAttributeExtractorTestObject::~UPCGAttributeExtractorTestObject() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStructDepth2;
class UScriptStruct* FPCGAttributeExtractorTestStructDepth2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStructDepth2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStructDepth2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGAttributeExtractorTestStructDepth2"));
	}
	return Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStructDepth2.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGAttributeExtractorTestStructDepth2>()
{
	return FPCGAttributeExtractorTestStructDepth2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics::Struct_MetaDataParams[] = {
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/Tests/Accessor/PCGAttributeExtractorTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGAttributeExtractorTestStructDepth2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics::NewProp_IntValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tests/Accessor/PCGAttributeExtractorTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGAttributeExtractorTestStructDepth2, IntValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics::NewProp_IntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics::NewProp_IntValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics::NewProp_IntValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGAttributeExtractorTestStructDepth2",
		sizeof(FPCGAttributeExtractorTestStructDepth2),
		alignof(FPCGAttributeExtractorTestStructDepth2),
		Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStructDepth2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStructDepth2.InnerSingleton, Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStructDepth2.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStructDepth1;
class UScriptStruct* FPCGAttributeExtractorTestStructDepth1::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStructDepth1.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStructDepth1.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGAttributeExtractorTestStructDepth1"));
	}
	return Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStructDepth1.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGAttributeExtractorTestStructDepth1>()
{
	return FPCGAttributeExtractorTestStructDepth1::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth2Struct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Depth2Struct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::Struct_MetaDataParams[] = {
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/Tests/Accessor/PCGAttributeExtractorTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGAttributeExtractorTestStructDepth1>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::NewProp_Depth2Struct_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tests/Accessor/PCGAttributeExtractorTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::NewProp_Depth2Struct = { "Depth2Struct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGAttributeExtractorTestStructDepth1, Depth2Struct), Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::NewProp_Depth2Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::NewProp_Depth2Struct_MetaData)) }; // 970043309
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::NewProp_FloatValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tests/Accessor/PCGAttributeExtractorTest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGAttributeExtractorTestStructDepth1, FloatValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::NewProp_FloatValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::NewProp_Depth2Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::NewProp_FloatValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGAttributeExtractorTestStructDepth1",
		sizeof(FPCGAttributeExtractorTestStructDepth1),
		alignof(FPCGAttributeExtractorTestStructDepth1),
		Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStructDepth1.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStructDepth1.InnerSingleton, Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStructDepth1.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStruct;
class UScriptStruct* FPCGAttributeExtractorTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGAttributeExtractorTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStruct.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGAttributeExtractorTestStruct>()
{
	return FPCGAttributeExtractorTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DepthStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/Tests/Accessor/PCGAttributeExtractorTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGAttributeExtractorTestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::NewProp_DepthStruct_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tests/Accessor/PCGAttributeExtractorTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::NewProp_DepthStruct = { "DepthStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGAttributeExtractorTestStruct, DepthStruct), Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::NewProp_DepthStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::NewProp_DepthStruct_MetaData)) }; // 2951665273
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tests/Accessor/PCGAttributeExtractorTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGAttributeExtractorTestStruct, Object), Z_Construct_UClass_UPCGAttributeExtractorTestObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::NewProp_Object_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::NewProp_DepthStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::NewProp_Object,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGAttributeExtractorTestStruct",
		sizeof(FPCGAttributeExtractorTestStruct),
		alignof(FPCGAttributeExtractorTestStruct),
		Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Accessor_PCGAttributeExtractorTest_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Accessor_PCGAttributeExtractorTest_h_Statics::ScriptStructInfo[] = {
		{ FPCGAttributeExtractorTestStructDepth2::StaticStruct, Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth2_Statics::NewStructOps, TEXT("PCGAttributeExtractorTestStructDepth2"), &Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStructDepth2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGAttributeExtractorTestStructDepth2), 970043309U) },
		{ FPCGAttributeExtractorTestStructDepth1::StaticStruct, Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1_Statics::NewStructOps, TEXT("PCGAttributeExtractorTestStructDepth1"), &Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStructDepth1, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGAttributeExtractorTestStructDepth1), 2951665273U) },
		{ FPCGAttributeExtractorTestStruct::StaticStruct, Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStruct_Statics::NewStructOps, TEXT("PCGAttributeExtractorTestStruct"), &Z_Registration_Info_UScriptStruct_PCGAttributeExtractorTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGAttributeExtractorTestStruct), 3856639318U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Accessor_PCGAttributeExtractorTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGAttributeExtractorTestObject, UPCGAttributeExtractorTestObject::StaticClass, TEXT("UPCGAttributeExtractorTestObject"), &Z_Registration_Info_UClass_UPCGAttributeExtractorTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGAttributeExtractorTestObject), 168436368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Accessor_PCGAttributeExtractorTest_h_508661452(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Accessor_PCGAttributeExtractorTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Accessor_PCGAttributeExtractorTest_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Accessor_PCGAttributeExtractorTest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Tests_Accessor_PCGAttributeExtractorTest_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
