// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/InstancePackers/PCGInstancePackerBase.h"
#include "PCG/Public/MeshSelectors/PCGMeshSelectorBase.h"
#include "PCG/Public/PCGContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGInstancePackerBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PCG_API UClass* Z_Construct_UClass_UPCGInstancePackerBase();
	PCG_API UClass* Z_Construct_UClass_UPCGInstancePackerBase_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadata_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialData_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGContext();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGMeshInstanceList();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPackedCustomData();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGPackedCustomData;
class UScriptStruct* FPCGPackedCustomData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGPackedCustomData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGPackedCustomData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGPackedCustomData, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGPackedCustomData"));
	}
	return Z_Registration_Info_UScriptStruct_PCGPackedCustomData.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGPackedCustomData>()
{
	return FPCGPackedCustomData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCustomDataFloats_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumCustomDataFloats;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InstancePackers/PCGInstancePackerBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGPackedCustomData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_NumCustomDataFloats_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InstancePackers/PCGInstancePackerBase.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_NumCustomDataFloats = { "NumCustomDataFloats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGPackedCustomData, NumCustomDataFloats), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_NumCustomDataFloats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_NumCustomDataFloats_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_CustomData_Inner = { "CustomData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_CustomData_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InstancePackers/PCGInstancePackerBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGPackedCustomData, CustomData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_CustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_CustomData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_NumCustomDataFloats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_CustomData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewProp_CustomData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGPackedCustomData",
		sizeof(FPCGPackedCustomData),
		alignof(FPCGPackedCustomData),
		Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGPackedCustomData()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGPackedCustomData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGPackedCustomData.InnerSingleton, Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGPackedCustomData.InnerSingleton;
	}
	DEFINE_FUNCTION(UPCGInstancePackerBase::execPackCustomDataFromAttributes)
	{
		P_GET_STRUCT_REF(FPCGMeshInstanceList,Z_Param_Out_InstanceList);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_TARRAY_REF(FName,Z_Param_Out_AttributeNames);
		P_GET_STRUCT_REF(FPCGPackedCustomData,Z_Param_Out_OutPackedCustomData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PackCustomDataFromAttributes(Z_Param_Out_InstanceList,Z_Param_Metadata,Z_Param_Out_AttributeNames,Z_Param_Out_OutPackedCustomData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGInstancePackerBase::execAddTypeToPacking)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TypeId);
		P_GET_STRUCT_REF(FPCGPackedCustomData,Z_Param_Out_OutPackedCustomData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddTypeToPacking(Z_Param_TypeId,Z_Param_Out_OutPackedCustomData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGInstancePackerBase::execPackInstances)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_Context);
		P_GET_OBJECT(UPCGSpatialData,Z_Param_InSpatialData);
		P_GET_STRUCT_REF(FPCGMeshInstanceList,Z_Param_Out_InstanceList);
		P_GET_STRUCT_REF(FPCGPackedCustomData,Z_Param_Out_OutPackedCustomData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PackInstances_Implementation(Z_Param_Out_Context,Z_Param_InSpatialData,Z_Param_Out_InstanceList,Z_Param_Out_OutPackedCustomData);
		P_NATIVE_END;
	}
	struct PCGInstancePackerBase_eventPackInstances_Parms
	{
		FPCGContext Context;
		const UPCGSpatialData* InSpatialData;
		FPCGMeshInstanceList InstanceList;
		FPCGPackedCustomData OutPackedCustomData;
	};
	static FName NAME_UPCGInstancePackerBase_PackInstances = FName(TEXT("PackInstances"));
	void UPCGInstancePackerBase::PackInstances(FPCGContext& Context, const UPCGSpatialData* InSpatialData, FPCGMeshInstanceList const& InstanceList, FPCGPackedCustomData& OutPackedCustomData) const
	{
		PCGInstancePackerBase_eventPackInstances_Parms Parms;
		Parms.Context=Context;
		Parms.InSpatialData=InSpatialData;
		Parms.InstanceList=InstanceList;
		Parms.OutPackedCustomData=OutPackedCustomData;
		const_cast<UPCGInstancePackerBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGInstancePackerBase_PackInstances),&Parms);
		Context=Parms.Context;
		OutPackedCustomData=Parms.OutPackedCustomData;
	}
	void UPCGInstancePackerBase::StaticRegisterNativesUPCGInstancePackerBase()
	{
		UClass* Class = UPCGInstancePackerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTypeToPacking", &UPCGInstancePackerBase::execAddTypeToPacking },
			{ "PackCustomDataFromAttributes", &UPCGInstancePackerBase::execPackCustomDataFromAttributes },
			{ "PackInstances", &UPCGInstancePackerBase::execPackInstances },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics
	{
		struct PCGInstancePackerBase_eventAddTypeToPacking_Parms
		{
			int32 TypeId;
			FPCGPackedCustomData OutPackedCustomData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TypeId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPackedCustomData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics::NewProp_TypeId = { "TypeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGInstancePackerBase_eventAddTypeToPacking_Parms, TypeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics::NewProp_OutPackedCustomData = { "OutPackedCustomData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGInstancePackerBase_eventAddTypeToPacking_Parms, OutPackedCustomData), Z_Construct_UScriptStruct_FPCGPackedCustomData, METADATA_PARAMS(nullptr, 0) }; // 1744179789
	void Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGInstancePackerBase_eventAddTypeToPacking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGInstancePackerBase_eventAddTypeToPacking_Parms), &Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics::NewProp_TypeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics::NewProp_OutPackedCustomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics::Function_MetaDataParams[] = {
		{ "Category", "InstancePacking" },
		{ "Comment", "/** Interprets Metadata TypeId and increments OutPackedCustomData.NumCustomDataFloats appropriately. Returns false if the type could not be interpreted. */" },
		{ "ModuleRelativePath", "Public/InstancePackers/PCGInstancePackerBase.h" },
		{ "ToolTip", "Interprets Metadata TypeId and increments OutPackedCustomData.NumCustomDataFloats appropriately. Returns false if the type could not be interpreted." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGInstancePackerBase, nullptr, "AddTypeToPacking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics::PCGInstancePackerBase_eventAddTypeToPacking_Parms), Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics
	{
		struct PCGInstancePackerBase_eventPackCustomDataFromAttributes_Parms
		{
			FPCGMeshInstanceList InstanceList;
			const UPCGMetadata* Metadata;
			TArray<FName> AttributeNames;
			FPCGPackedCustomData OutPackedCustomData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPackedCustomData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_InstanceList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_InstanceList = { "InstanceList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGInstancePackerBase_eventPackCustomDataFromAttributes_Parms, InstanceList), Z_Construct_UScriptStruct_FPCGMeshInstanceList, METADATA_PARAMS(Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_InstanceList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_InstanceList_MetaData)) }; // 3800292760
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGInstancePackerBase_eventPackCustomDataFromAttributes_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_AttributeNames_Inner = { "AttributeNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_AttributeNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_AttributeNames = { "AttributeNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGInstancePackerBase_eventPackCustomDataFromAttributes_Parms, AttributeNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_AttributeNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_AttributeNames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_OutPackedCustomData = { "OutPackedCustomData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGInstancePackerBase_eventPackCustomDataFromAttributes_Parms, OutPackedCustomData), Z_Construct_UScriptStruct_FPCGPackedCustomData, METADATA_PARAMS(nullptr, 0) }; // 1744179789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_InstanceList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_AttributeNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_AttributeNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::NewProp_OutPackedCustomData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "InstancePacking" },
		{ "Comment", "/** Build a PackedCustomData by processing each attribute in order for each point in the InstanceList */" },
		{ "ModuleRelativePath", "Public/InstancePackers/PCGInstancePackerBase.h" },
		{ "ToolTip", "Build a PackedCustomData by processing each attribute in order for each point in the InstanceList" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGInstancePackerBase, nullptr, "PackCustomDataFromAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::PCGInstancePackerBase_eventPackCustomDataFromAttributes_Parms), Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSpatialData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSpatialData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPackedCustomData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGInstancePackerBase_eventPackInstances_Parms, Context), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(nullptr, 0) }; // 742208121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::NewProp_InSpatialData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::NewProp_InSpatialData = { "InSpatialData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGInstancePackerBase_eventPackInstances_Parms, InSpatialData), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::NewProp_InSpatialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::NewProp_InSpatialData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::NewProp_InstanceList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::NewProp_InstanceList = { "InstanceList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGInstancePackerBase_eventPackInstances_Parms, InstanceList), Z_Construct_UScriptStruct_FPCGMeshInstanceList, METADATA_PARAMS(Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::NewProp_InstanceList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::NewProp_InstanceList_MetaData)) }; // 3800292760
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::NewProp_OutPackedCustomData = { "OutPackedCustomData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGInstancePackerBase_eventPackInstances_Parms, OutPackedCustomData), Z_Construct_UScriptStruct_FPCGPackedCustomData, METADATA_PARAMS(nullptr, 0) }; // 1744179789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::NewProp_InSpatialData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::NewProp_InstanceList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::NewProp_OutPackedCustomData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "InstancePacking" },
		{ "Comment", "/** Defines the strategy for (H)ISM custom float data packing */" },
		{ "ModuleRelativePath", "Public/InstancePackers/PCGInstancePackerBase.h" },
		{ "ToolTip", "Defines the strategy for (H)ISM custom float data packing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGInstancePackerBase, nullptr, "PackInstances", nullptr, nullptr, sizeof(PCGInstancePackerBase_eventPackInstances_Parms), Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGInstancePackerBase);
	UClass* Z_Construct_UClass_UPCGInstancePackerBase_NoRegister()
	{
		return UPCGInstancePackerBase::StaticClass();
	}
	struct Z_Construct_UClass_UPCGInstancePackerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGInstancePackerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGInstancePackerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGInstancePackerBase_AddTypeToPacking, "AddTypeToPacking" }, // 669973332
		{ &Z_Construct_UFunction_UPCGInstancePackerBase_PackCustomDataFromAttributes, "PackCustomDataFromAttributes" }, // 1895327364
		{ &Z_Construct_UFunction_UPCGInstancePackerBase_PackInstances, "PackInstances" }, // 1104447188
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGInstancePackerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "InstancePackers/PCGInstancePackerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InstancePackers/PCGInstancePackerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGInstancePackerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGInstancePackerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGInstancePackerBase_Statics::ClassParams = {
		&UPCGInstancePackerBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGInstancePackerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGInstancePackerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGInstancePackerBase()
	{
		if (!Z_Registration_Info_UClass_UPCGInstancePackerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGInstancePackerBase.OuterSingleton, Z_Construct_UClass_UPCGInstancePackerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGInstancePackerBase.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGInstancePackerBase>()
	{
		return UPCGInstancePackerBase::StaticClass();
	}
	UPCGInstancePackerBase::UPCGInstancePackerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGInstancePackerBase);
	UPCGInstancePackerBase::~UPCGInstancePackerBase() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_Statics::ScriptStructInfo[] = {
		{ FPCGPackedCustomData::StaticStruct, Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics::NewStructOps, TEXT("PCGPackedCustomData"), &Z_Registration_Info_UScriptStruct_PCGPackedCustomData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGPackedCustomData), 1744179789U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGInstancePackerBase, UPCGInstancePackerBase::StaticClass, TEXT("UPCGInstancePackerBase"), &Z_Registration_Info_UClass_UPCGInstancePackerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGInstancePackerBase), 3349998550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_2377224524(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
