// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/MatchAndSet/PCGMatchAndSetBase.h"
#include "PCG/Public/PCGContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMatchAndSetBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PCG_API UClass* Z_Construct_UClass_UPCGMatchAndSetBase();
	PCG_API UClass* Z_Construct_UClass_UPCGMatchAndSetBase_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGPointData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGPointMatchAndSetSettings_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypes();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGContext();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	DEFINE_FUNCTION(UPCGMatchAndSetBase::execMatchAndSet)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_Context);
		P_GET_OBJECT(UPCGPointMatchAndSetSettings,Z_Param_InSettings);
		P_GET_OBJECT(UPCGPointData,Z_Param_InPointData);
		P_GET_OBJECT(UPCGPointData,Z_Param_OutPointData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MatchAndSet_Implementation(Z_Param_Out_Context,Z_Param_InSettings,Z_Param_InPointData,Z_Param_OutPointData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMatchAndSetBase::execValidatePreconditions)
	{
		P_GET_OBJECT(UPCGPointData,Z_Param_InPointData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidatePreconditions_Implementation(Z_Param_InPointData);
		P_NATIVE_END;
	}
	struct PCGMatchAndSetBase_eventMatchAndSet_Parms
	{
		FPCGContext Context;
		const UPCGPointMatchAndSetSettings* InSettings;
		const UPCGPointData* InPointData;
		UPCGPointData* OutPointData;
	};
	struct PCGMatchAndSetBase_eventValidatePreconditions_Parms
	{
		const UPCGPointData* InPointData;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		PCGMatchAndSetBase_eventValidatePreconditions_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UPCGMatchAndSetBase_MatchAndSet = FName(TEXT("MatchAndSet"));
	void UPCGMatchAndSetBase::MatchAndSet(FPCGContext& Context, const UPCGPointMatchAndSetSettings* InSettings, const UPCGPointData* InPointData, UPCGPointData* OutPointData) const
	{
		PCGMatchAndSetBase_eventMatchAndSet_Parms Parms;
		Parms.Context=Context;
		Parms.InSettings=InSettings;
		Parms.InPointData=InPointData;
		Parms.OutPointData=OutPointData;
		const_cast<UPCGMatchAndSetBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGMatchAndSetBase_MatchAndSet),&Parms);
		Context=Parms.Context;
	}
	static FName NAME_UPCGMatchAndSetBase_ValidatePreconditions = FName(TEXT("ValidatePreconditions"));
	bool UPCGMatchAndSetBase::ValidatePreconditions(const UPCGPointData* InPointData) const
	{
		PCGMatchAndSetBase_eventValidatePreconditions_Parms Parms;
		Parms.InPointData=InPointData;
		const_cast<UPCGMatchAndSetBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPCGMatchAndSetBase_ValidatePreconditions),&Parms);
		return !!Parms.ReturnValue;
	}
	void UPCGMatchAndSetBase::StaticRegisterNativesUPCGMatchAndSetBase()
	{
		UClass* Class = UPCGMatchAndSetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MatchAndSet", &UPCGMatchAndSetBase::execMatchAndSet },
			{ "ValidatePreconditions", &UPCGMatchAndSetBase::execValidatePreconditions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPointData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPointData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutPointData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMatchAndSetBase_eventMatchAndSet_Parms, Context), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(nullptr, 0) }; // 742208121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMatchAndSetBase_eventMatchAndSet_Parms, InSettings), Z_Construct_UClass_UPCGPointMatchAndSetSettings_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::NewProp_InSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::NewProp_InPointData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::NewProp_InPointData = { "InPointData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMatchAndSetBase_eventMatchAndSet_Parms, InPointData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::NewProp_InPointData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::NewProp_InPointData_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::NewProp_OutPointData = { "OutPointData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMatchAndSetBase_eventMatchAndSet_Parms, OutPointData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::NewProp_InSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::NewProp_InPointData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::NewProp_OutPointData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Main function to process points, and pass them through the Match & Set logic. */" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetBase.h" },
		{ "ToolTip", "Main function to process points, and pass them through the Match & Set logic." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMatchAndSetBase, nullptr, "MatchAndSet", nullptr, nullptr, sizeof(PCGMatchAndSetBase_eventMatchAndSet_Parms), Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPointData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPointData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics::NewProp_InPointData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics::NewProp_InPointData = { "InPointData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMatchAndSetBase_eventValidatePreconditions_Parms, InPointData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics::NewProp_InPointData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics::NewProp_InPointData_MetaData)) };
	void Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGMatchAndSetBase_eventValidatePreconditions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMatchAndSetBase_eventValidatePreconditions_Parms), &Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics::NewProp_InPointData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Early check to prevent issues when the data does not contain the required information to perform the operation */" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetBase.h" },
		{ "ToolTip", "Early check to prevent issues when the data does not contain the required information to perform the operation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMatchAndSetBase, nullptr, "ValidatePreconditions", nullptr, nullptr, sizeof(PCGMatchAndSetBase_eventValidatePreconditions_Parms), Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMatchAndSetBase);
	UClass* Z_Construct_UClass_UPCGMatchAndSetBase_NoRegister()
	{
		return UPCGMatchAndSetBase::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMatchAndSetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_StringMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StringMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMatchAndSetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGMatchAndSetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGMatchAndSetBase_MatchAndSet, "MatchAndSet" }, // 3064276471
		{ &Z_Construct_UFunction_UPCGMatchAndSetBase_ValidatePreconditions, "ValidatePreconditions" }, // 2526210567
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMatchAndSetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Base class for Match & Set objects. Note that while it currently deals with points, it might be extended in the future.\n* This class is extensible and can be implemented in different ways, but its role should be simple:\n* For a given point, if it matches some criteria (\"Match\"), apply it some value (\"Set\").\n* It can be a lookup, a random process or something more involved. \n*/" },
		{ "IncludePath", "MatchAndSet/PCGMatchAndSetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetBase.h" },
		{ "ToolTip", "Base class for Match & Set objects. Note that while it currently deals with points, it might be extended in the future.\nThis class is extensible and can be implemented in different ways, but its role should be simple:\nFor a given point, if it matches some criteria (\"Match\"), apply it some value (\"Set\").\nIt can be a lookup, a random process or something more involved." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGMatchAndSetBase_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMatchAndSetBase_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** For the sake of managing internal state a bit better, we keep a copy of the Set type & string subtype. */" },
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetBase.h" },
		{ "ToolTip", "For the sake of managing internal state a bit better, we keep a copy of the Set type & string subtype." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMatchAndSetBase_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMatchAndSetBase, Type), Z_Construct_UEnum_PCG_EPCGMetadataTypes, METADATA_PARAMS(Z_Construct_UClass_UPCGMatchAndSetBase_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetBase_Statics::NewProp_Type_MetaData)) }; // 168356382
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPCGMatchAndSetBase_Statics::NewProp_StringMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMatchAndSetBase_Statics::NewProp_StringMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchAndSet/PCGMatchAndSetBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMatchAndSetBase_Statics::NewProp_StringMode = { "StringMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMatchAndSetBase, StringMode), Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode, METADATA_PARAMS(Z_Construct_UClass_UPCGMatchAndSetBase_Statics::NewProp_StringMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetBase_Statics::NewProp_StringMode_MetaData)) }; // 1744614167
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMatchAndSetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetBase_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetBase_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetBase_Statics::NewProp_StringMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMatchAndSetBase_Statics::NewProp_StringMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMatchAndSetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMatchAndSetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMatchAndSetBase_Statics::ClassParams = {
		&UPCGMatchAndSetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGMatchAndSetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMatchAndSetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMatchAndSetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMatchAndSetBase()
	{
		if (!Z_Registration_Info_UClass_UPCGMatchAndSetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMatchAndSetBase.OuterSingleton, Z_Construct_UClass_UPCGMatchAndSetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMatchAndSetBase.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMatchAndSetBase>()
	{
		return UPCGMatchAndSetBase::StaticClass();
	}
	UPCGMatchAndSetBase::UPCGMatchAndSetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMatchAndSetBase);
	UPCGMatchAndSetBase::~UPCGMatchAndSetBase() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMatchAndSetBase, UPCGMatchAndSetBase::StaticClass, TEXT("UPCGMatchAndSetBase"), &Z_Registration_Info_UClass_UPCGMatchAndSetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMatchAndSetBase), 2326012944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_944734315(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
