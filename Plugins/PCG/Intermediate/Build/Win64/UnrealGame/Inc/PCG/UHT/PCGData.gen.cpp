// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PCG_API UClass* Z_Construct_UClass_UPCGData();
	PCG_API UClass* Z_Construct_UClass_UPCGData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGDataFunctionLibrary();
	PCG_API UClass* Z_Construct_UClass_UPCGDataFunctionLibrary_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGDataCollection();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGTaggedData();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGData::StaticRegisterNativesUPCGData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGData);
	UClass* Z_Construct_UClass_UPCGData_NoRegister()
	{
		return UPCGData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_UID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Base class for any \"data\" class in the PCG framework.\n* This is an intentionally vague base class so we can have the required\n* flexibility to pass in various concrete data types, settings, and more.\n*/" },
		{ "IncludePath", "PCGData.h" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for any \"data\" class in the PCG framework.\nThis is an intentionally vague base class so we can have the required\nflexibility to pass in various concrete data types, settings, and more." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGData_Statics::NewProp_UID_MetaData[] = {
		{ "Comment", "/** Unique ID for this object instance. */" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
		{ "ToolTip", "Unique ID for this object instance." },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UPCGData_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGData, UID), METADATA_PARAMS(Z_Construct_UClass_UPCGData_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGData_Statics::NewProp_UID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGData_Statics::NewProp_UID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGData_Statics::ClassParams = {
		&UPCGData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGData()
	{
		if (!Z_Registration_Info_UClass_UPCGData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGData.OuterSingleton, Z_Construct_UClass_UPCGData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGData>()
	{
		return UPCGData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGData);
	UPCGData::~UPCGData() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGTaggedData;
class UScriptStruct* FPCGTaggedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGTaggedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGTaggedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGTaggedData, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGTaggedData"));
	}
	return Z_Registration_Info_UScriptStruct_PCGTaggedData.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGTaggedData>()
{
	return FPCGTaggedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGTaggedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pin_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Pin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPinlessData_MetaData[];
#endif
		static void NewProp_bPinlessData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPinlessData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGTaggedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGTaggedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGTaggedData, Data), Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Tags_ElementProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGTaggedData, Tags), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Pin_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Pin = { "Pin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGTaggedData, Pin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Pin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_bPinlessData_MetaData[] = {
		{ "Comment", "// Special flag for data that are forwarded to other nodes, but without a pin. Useful for internal data.\n" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
		{ "ToolTip", "Special flag for data that are forwarded to other nodes, but without a pin. Useful for internal data." },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_bPinlessData_SetBit(void* Obj)
	{
		((FPCGTaggedData*)Obj)->bPinlessData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_bPinlessData = { "bPinlessData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGTaggedData), &Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_bPinlessData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_bPinlessData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_bPinlessData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGTaggedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Tags_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_Pin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewProp_bPinlessData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGTaggedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGTaggedData",
		sizeof(FPCGTaggedData),
		alignof(FPCGTaggedData),
		Z_Construct_UScriptStruct_FPCGTaggedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGTaggedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGTaggedData()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGTaggedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGTaggedData.InnerSingleton, Z_Construct_UScriptStruct_FPCGTaggedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGTaggedData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGDataCollection;
class UScriptStruct* FPCGDataCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGDataCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGDataCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataCollection, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGDataCollection"));
	}
	return Z_Registration_Info_UScriptStruct_PCGDataCollection.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGDataCollection>()
{
	return FPCGDataCollection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGDataCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaggedData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaggedData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaggedData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCancelExecutionOnEmpty_MetaData[];
#endif
		static void NewProp_bCancelExecutionOnEmpty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelExecutionOnEmpty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDataCollection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGDataCollection>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_TaggedData_Inner = { "TaggedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(nullptr, 0) }; // 1900258106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_TaggedData_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_TaggedData = { "TaggedData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGDataCollection, TaggedData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_TaggedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_TaggedData_MetaData)) }; // 1900258106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_bCancelExecutionOnEmpty_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_bCancelExecutionOnEmpty_SetBit(void* Obj)
	{
		((FPCGDataCollection*)Obj)->bCancelExecutionOnEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_bCancelExecutionOnEmpty = { "bCancelExecutionOnEmpty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGDataCollection), &Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_bCancelExecutionOnEmpty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_bCancelExecutionOnEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_bCancelExecutionOnEmpty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGDataCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_TaggedData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_TaggedData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewProp_bCancelExecutionOnEmpty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGDataCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGDataCollection",
		sizeof(FPCGDataCollection),
		alignof(FPCGDataCollection),
		Z_Construct_UScriptStruct_FPCGDataCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGDataCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGDataCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGDataCollection()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGDataCollection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGDataCollection.InnerSingleton, Z_Construct_UScriptStruct_FPCGDataCollection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGDataCollection.InnerSingleton;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetAllSettings)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGTaggedData>*)Z_Param__Result=UPCGDataFunctionLibrary::GetAllSettings(Z_Param_Out_InCollection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetTaggedParams)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_GET_PROPERTY(FStrProperty,Z_Param_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGTaggedData>*)Z_Param__Result=UPCGDataFunctionLibrary::GetTaggedParams(Z_Param_Out_InCollection,Z_Param_InTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetParamsByPin)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InPinLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGTaggedData>*)Z_Param__Result=UPCGDataFunctionLibrary::GetParamsByPin(Z_Param_Out_InCollection,Z_Param_Out_InPinLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetParams)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGTaggedData>*)Z_Param__Result=UPCGDataFunctionLibrary::GetParams(Z_Param_Out_InCollection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetTaggedInputs)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_GET_PROPERTY(FStrProperty,Z_Param_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGTaggedData>*)Z_Param__Result=UPCGDataFunctionLibrary::GetTaggedInputs(Z_Param_Out_InCollection,Z_Param_InTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetInputsByPin)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InPinLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGTaggedData>*)Z_Param__Result=UPCGDataFunctionLibrary::GetInputsByPin(Z_Param_Out_InCollection,Z_Param_Out_InPinLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGDataFunctionLibrary::execGetInputs)
	{
		P_GET_STRUCT_REF(FPCGDataCollection,Z_Param_Out_InCollection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPCGTaggedData>*)Z_Param__Result=UPCGDataFunctionLibrary::GetInputs(Z_Param_Out_InCollection);
		P_NATIVE_END;
	}
	void UPCGDataFunctionLibrary::StaticRegisterNativesUPCGDataFunctionLibrary()
	{
		UClass* Class = UPCGDataFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllSettings", &UPCGDataFunctionLibrary::execGetAllSettings },
			{ "GetInputs", &UPCGDataFunctionLibrary::execGetInputs },
			{ "GetInputsByPin", &UPCGDataFunctionLibrary::execGetInputsByPin },
			{ "GetParams", &UPCGDataFunctionLibrary::execGetParams },
			{ "GetParamsByPin", &UPCGDataFunctionLibrary::execGetParamsByPin },
			{ "GetTaggedInputs", &UPCGDataFunctionLibrary::execGetTaggedInputs },
			{ "GetTaggedParams", &UPCGDataFunctionLibrary::execGetTaggedParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics
	{
		struct PCGDataFunctionLibrary_eventGetAllSettings_Parms
		{
			FPCGDataCollection InCollection;
			TArray<FPCGTaggedData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetAllSettings_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_InCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_InCollection_MetaData)) }; // 3581647893
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(nullptr, 0) }; // 1900258106
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetAllSettings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1900258106
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetAllSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::PCGDataFunctionLibrary_eventGetAllSettings_Parms), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics
	{
		struct PCGDataFunctionLibrary_eventGetInputs_Parms
		{
			FPCGDataCollection InCollection;
			TArray<FPCGTaggedData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetInputs_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_InCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_InCollection_MetaData)) }; // 3581647893
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(nullptr, 0) }; // 1900258106
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetInputs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1900258106
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "// Blueprint methods to support interaction with FPCGDataCollection\n" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
		{ "ToolTip", "Blueprint methods to support interaction with FPCGDataCollection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetInputs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::PCGDataFunctionLibrary_eventGetInputs_Parms), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics
	{
		struct PCGDataFunctionLibrary_eventGetInputsByPin_Parms
		{
			FPCGDataCollection InCollection;
			FName InPinLabel;
			TArray<FPCGTaggedData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPinLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InPinLabel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetInputsByPin_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::NewProp_InCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::NewProp_InCollection_MetaData)) }; // 3581647893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::NewProp_InPinLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::NewProp_InPinLabel = { "InPinLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetInputsByPin_Parms, InPinLabel), METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::NewProp_InPinLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::NewProp_InPinLabel_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(nullptr, 0) }; // 1900258106
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetInputsByPin_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1900258106
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::NewProp_InPinLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetInputsByPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::PCGDataFunctionLibrary_eventGetInputsByPin_Parms), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics
	{
		struct PCGDataFunctionLibrary_eventGetParams_Parms
		{
			FPCGDataCollection InCollection;
			TArray<FPCGTaggedData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetParams_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_InCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_InCollection_MetaData)) }; // 3581647893
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(nullptr, 0) }; // 1900258106
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetParams_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1900258106
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::PCGDataFunctionLibrary_eventGetParams_Parms), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics
	{
		struct PCGDataFunctionLibrary_eventGetParamsByPin_Parms
		{
			FPCGDataCollection InCollection;
			FName InPinLabel;
			TArray<FPCGTaggedData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPinLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InPinLabel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetParamsByPin_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::NewProp_InCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::NewProp_InCollection_MetaData)) }; // 3581647893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::NewProp_InPinLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::NewProp_InPinLabel = { "InPinLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetParamsByPin_Parms, InPinLabel), METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::NewProp_InPinLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::NewProp_InPinLabel_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(nullptr, 0) }; // 1900258106
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetParamsByPin_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1900258106
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::NewProp_InPinLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetParamsByPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::PCGDataFunctionLibrary_eventGetParamsByPin_Parms), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics
	{
		struct PCGDataFunctionLibrary_eventGetTaggedInputs_Parms
		{
			FPCGDataCollection InCollection;
			FString InTag;
			TArray<FPCGTaggedData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTaggedInputs_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::NewProp_InCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::NewProp_InCollection_MetaData)) }; // 3581647893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTaggedInputs_Parms, InTag), METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::NewProp_InTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::NewProp_InTag_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(nullptr, 0) }; // 1900258106
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTaggedInputs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1900258106
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::NewProp_InTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetTaggedInputs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::PCGDataFunctionLibrary_eventGetTaggedInputs_Parms), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics
	{
		struct PCGDataFunctionLibrary_eventGetTaggedParams_Parms
		{
			FPCGDataCollection InCollection;
			FString InTag;
			TArray<FPCGTaggedData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::NewProp_InCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::NewProp_InCollection = { "InCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTaggedParams_Parms, InCollection), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::NewProp_InCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::NewProp_InCollection_MetaData)) }; // 3581647893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTaggedParams_Parms, InTag), METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::NewProp_InTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::NewProp_InTag_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPCGTaggedData, METADATA_PARAMS(nullptr, 0) }; // 1900258106
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGDataFunctionLibrary_eventGetTaggedParams_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1900258106
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::NewProp_InCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::NewProp_InTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGDataFunctionLibrary, nullptr, "GetTaggedParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::PCGDataFunctionLibrary_eventGetTaggedParams_Parms), Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGDataFunctionLibrary);
	UClass* Z_Construct_UClass_UPCGDataFunctionLibrary_NoRegister()
	{
		return UPCGDataFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPCGDataFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetAllSettings, "GetAllSettings" }, // 174358932
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputs, "GetInputs" }, // 2159236545
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetInputsByPin, "GetInputsByPin" }, // 1906830937
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParams, "GetParams" }, // 3227675623
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetParamsByPin, "GetParamsByPin" }, // 1489986250
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedInputs, "GetTaggedInputs" }, // 2760980671
		{ &Z_Construct_UFunction_UPCGDataFunctionLibrary_GetTaggedParams, "GetTaggedParams" }, // 987464730
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGData.h" },
		{ "ModuleRelativePath", "Public/PCGData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGDataFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::ClassParams = {
		&UPCGDataFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGDataFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UPCGDataFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGDataFunctionLibrary.OuterSingleton, Z_Construct_UClass_UPCGDataFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGDataFunctionLibrary.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGDataFunctionLibrary>()
	{
		return UPCGDataFunctionLibrary::StaticClass();
	}
	UPCGDataFunctionLibrary::UPCGDataFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGDataFunctionLibrary);
	UPCGDataFunctionLibrary::~UPCGDataFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGData_h_Statics::ScriptStructInfo[] = {
		{ FPCGTaggedData::StaticStruct, Z_Construct_UScriptStruct_FPCGTaggedData_Statics::NewStructOps, TEXT("PCGTaggedData"), &Z_Registration_Info_UScriptStruct_PCGTaggedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGTaggedData), 1900258106U) },
		{ FPCGDataCollection::StaticStruct, Z_Construct_UScriptStruct_FPCGDataCollection_Statics::NewStructOps, TEXT("PCGDataCollection"), &Z_Registration_Info_UScriptStruct_PCGDataCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGDataCollection), 3581647893U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGData, UPCGData::StaticClass, TEXT("UPCGData"), &Z_Registration_Info_UClass_UPCGData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGData), 2967905358U) },
		{ Z_Construct_UClass_UPCGDataFunctionLibrary, UPCGDataFunctionLibrary::StaticClass, TEXT("UPCGDataFunctionLibrary"), &Z_Registration_Info_UClass_UPCGDataFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGDataFunctionLibrary), 3861520351U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGData_h_2587471084(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
