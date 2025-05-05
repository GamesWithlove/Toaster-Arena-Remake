// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGUserParametersData.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGUserParametersData() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGData();
	PCG_API UClass* Z_Construct_UClass_UPCGGraphInterface_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGUserParametersData();
	PCG_API UClass* Z_Construct_UClass_UPCGUserParametersData_NoRegister();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGUserParametersData::StaticRegisterNativesUPCGUserParametersData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGUserParametersData);
	UClass* Z_Construct_UClass_UPCGUserParametersData_NoRegister()
	{
		return UPCGUserParametersData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGUserParametersData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OriginalGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGUserParametersData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGData,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUserParametersData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* PCG Data meant only to be used internally.\n* It contains a copy of UserParameters for a given graph instance, with overrides in it.\n* The idea is to have a structure to hold our overrides, provided by the override pins on the Subgraph\n* and use this as input to PCGUserParametersGetElement. By doing so, we are able to provide the right\n* parameters to the getter node.\n*/" },
		{ "IncludePath", "Data/PCGUserParametersData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGUserParametersData.h" },
		{ "ToolTip", "PCG Data meant only to be used internally.\nIt contains a copy of UserParameters for a given graph instance, with overrides in it.\nThe idea is to have a structure to hold our overrides, provided by the override pins on the Subgraph\nand use this as input to PCGUserParametersGetElement. By doing so, we are able to provide the right\nparameters to the getter node." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUserParametersData_Statics::NewProp_OriginalGraph_MetaData[] = {
		{ "Comment", "// ~End UPCGData interface\n" },
		{ "ModuleRelativePath", "Public/Data/PCGUserParametersData.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "~End UPCGData interface" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGUserParametersData_Statics::NewProp_OriginalGraph = { "OriginalGraph", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGUserParametersData, OriginalGraph), Z_Construct_UClass_UPCGGraphInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGUserParametersData_Statics::NewProp_OriginalGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUserParametersData_Statics::NewProp_OriginalGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUserParametersData_Statics::NewProp_UserParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGUserParametersData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGUserParametersData_Statics::NewProp_UserParameters = { "UserParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGUserParametersData, UserParameters), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UClass_UPCGUserParametersData_Statics::NewProp_UserParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUserParametersData_Statics::NewProp_UserParameters_MetaData)) }; // 3026308664
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGUserParametersData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUserParametersData_Statics::NewProp_OriginalGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUserParametersData_Statics::NewProp_UserParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGUserParametersData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGUserParametersData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGUserParametersData_Statics::ClassParams = {
		&UPCGUserParametersData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGUserParametersData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUserParametersData_Statics::PropPointers),
		0,
		0x040000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGUserParametersData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUserParametersData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGUserParametersData()
	{
		if (!Z_Registration_Info_UClass_UPCGUserParametersData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGUserParametersData.OuterSingleton, Z_Construct_UClass_UPCGUserParametersData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGUserParametersData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGUserParametersData>()
	{
		return UPCGUserParametersData::StaticClass();
	}
	UPCGUserParametersData::UPCGUserParametersData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGUserParametersData);
	UPCGUserParametersData::~UPCGUserParametersData() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUserParametersData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUserParametersData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGUserParametersData, UPCGUserParametersData::StaticClass, TEXT("UPCGUserParametersData"), &Z_Registration_Info_UClass_UPCGUserParametersData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGUserParametersData), 3492184470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUserParametersData_h_3981169254(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUserParametersData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUserParametersData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
