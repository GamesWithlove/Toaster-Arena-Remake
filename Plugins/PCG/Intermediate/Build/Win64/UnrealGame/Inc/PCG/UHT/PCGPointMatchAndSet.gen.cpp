// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGPointMatchAndSet.h"
#include "PCG/Public/Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPointMatchAndSet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PCG_API UClass* Z_Construct_UClass_UPCGMatchAndSetBase_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGPointMatchAndSetSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGPointMatchAndSetSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypes();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertySelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	DEFINE_FUNCTION(UPCGPointMatchAndSetSettings::execSetMatchAndSetType)
	{
		P_GET_OBJECT(UClass,Z_Param_InMatchAndSetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMatchAndSetType(Z_Param_InMatchAndSetType);
		P_NATIVE_END;
	}
	void UPCGPointMatchAndSetSettings::StaticRegisterNativesUPCGPointMatchAndSetSettings()
	{
		UClass* Class = UPCGPointMatchAndSetSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMatchAndSetType", &UPCGPointMatchAndSetSettings::execSetMatchAndSetType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGPointMatchAndSetSettings_SetMatchAndSetType_Statics
	{
		struct PCGPointMatchAndSetSettings_eventSetMatchAndSetType_Parms
		{
			TSubclassOf<UPCGMatchAndSetBase>  InMatchAndSetType;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InMatchAndSetType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPCGPointMatchAndSetSettings_SetMatchAndSetType_Statics::NewProp_InMatchAndSetType = { "InMatchAndSetType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGPointMatchAndSetSettings_eventSetMatchAndSetType_Parms, InMatchAndSetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGMatchAndSetBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGPointMatchAndSetSettings_SetMatchAndSetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGPointMatchAndSetSettings_SetMatchAndSetType_Statics::NewProp_InMatchAndSetType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGPointMatchAndSetSettings_SetMatchAndSetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Recreates the match & set instance stored in this settings object if needed. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointMatchAndSet.h" },
		{ "ToolTip", "Recreates the match & set instance stored in this settings object if needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGPointMatchAndSetSettings_SetMatchAndSetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGPointMatchAndSetSettings, nullptr, "SetMatchAndSetType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGPointMatchAndSetSettings_SetMatchAndSetType_Statics::PCGPointMatchAndSetSettings_eventSetMatchAndSetType_Parms), Z_Construct_UFunction_UPCGPointMatchAndSetSettings_SetMatchAndSetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPointMatchAndSetSettings_SetMatchAndSetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGPointMatchAndSetSettings_SetMatchAndSetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGPointMatchAndSetSettings_SetMatchAndSetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGPointMatchAndSetSettings_SetMatchAndSetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGPointMatchAndSetSettings_SetMatchAndSetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPointMatchAndSetSettings);
	UClass* Z_Construct_UClass_UPCGPointMatchAndSetSettings_NoRegister()
	{
		return UPCGPointMatchAndSetSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchAndSetType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MatchAndSetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchAndSetInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MatchAndSetInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetTarget;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SetTargetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetTargetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SetTargetType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SetTargetStringMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetTargetStringMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SetTargetStringMode;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetTargetIsAttribute_MetaData[];
#endif
		static void NewProp_bSetTargetIsAttribute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetTargetIsAttribute;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGPointMatchAndSetSettings_SetMatchAndSetType, "SetMatchAndSetType" }, // 3640466902
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** This settings class is used to create a PCG node that will apply a \"Match and Set\" operation\n* on the point data it consumes as input.\n* E.g. for a given point, if it matches with something in the Match & Set object, it will set a value on the point.\n*/" },
		{ "IncludePath", "Elements/PCGPointMatchAndSet.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointMatchAndSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This settings class is used to create a PCG node that will apply a \"Match and Set\" operation\non the point data it consumes as input.\nE.g. for a given point, if it matches with something in the Match & Set object, it will set a value on the point." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_MatchAndSetType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Defines the type of Match & Set object to use. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointMatchAndSet.h" },
		{ "ToolTip", "Defines the type of Match & Set object to use." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_MatchAndSetType = { "MatchAndSetType", nullptr, (EPropertyFlags)0x0014000002000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointMatchAndSetSettings, MatchAndSetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UPCGMatchAndSetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_MatchAndSetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_MatchAndSetType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_MatchAndSetInstance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Instance of MatchAndSetType, stores the data that will be used in these settings. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointMatchAndSet.h" },
		{ "ToolTip", "Instance of MatchAndSetType, stores the data that will be used in these settings." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_MatchAndSetInstance = { "MatchAndSetInstance", nullptr, (EPropertyFlags)0x00160000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointMatchAndSetSettings, MatchAndSetInstance), Z_Construct_UClass_UPCGMatchAndSetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_MatchAndSetInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_MatchAndSetInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTarget_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** \"Set\" part of the Match & Set - defines what will be changed in the operation */" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointMatchAndSet.h" },
		{ "ToolTip", "\"Set\" part of the Match & Set - defines what will be changed in the operation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTarget = { "SetTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointMatchAndSetSettings, SetTarget), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTarget_MetaData)) }; // 3655039818
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTargetType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If the \"Set\" part is an attribute, then the type must be provided */" },
		{ "EditCondition", "bSetTargetIsAttribute" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointMatchAndSet.h" },
		{ "ToolTip", "If the \"Set\" part is an attribute, then the type must be provided" },
		{ "ValidEnumValues", "Float, Double, Integer32, Integer64, Vector2, Vector, Vector4, Quaternion, Transform, String, Boolean, Rotator, Name" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTargetType = { "SetTargetType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointMatchAndSetSettings, SetTargetType), Z_Construct_UEnum_PCG_EPCGMetadataTypes, METADATA_PARAMS(Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTargetType_MetaData)) }; // 168356382
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTargetStringMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTargetStringMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** For string types, the subtype is used to cleanup the UI. */" },
		{ "EditCondition", "bSetTargetIsAttribute && SetTargetType == EPCGMetadataTypes::String" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointMatchAndSet.h" },
		{ "ToolTip", "For string types, the subtype is used to cleanup the UI." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTargetStringMode = { "SetTargetStringMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointMatchAndSetSettings, SetTargetStringMode), Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode, METADATA_PARAMS(Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTargetStringMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTargetStringMode_MetaData)) }; // 1744614167
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_bSetTargetIsAttribute_MetaData[] = {
		{ "Comment", "// Property used to sidestep edit condition issues - reflects SetTarget.Selection == Attribute\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointMatchAndSet.h" },
		{ "ToolTip", "Property used to sidestep edit condition issues - reflects SetTarget.Selection == Attribute" },
	};
#endif
	void Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_bSetTargetIsAttribute_SetBit(void* Obj)
	{
		((UPCGPointMatchAndSetSettings*)Obj)->bSetTargetIsAttribute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_bSetTargetIsAttribute = { "bSetTargetIsAttribute", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGPointMatchAndSetSettings), &Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_bSetTargetIsAttribute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_bSetTargetIsAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_bSetTargetIsAttribute_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_MatchAndSetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_MatchAndSetInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTargetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTargetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTargetStringMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_SetTargetStringMode,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::NewProp_bSetTargetIsAttribute,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPointMatchAndSetSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::ClassParams = {
		&UPCGPointMatchAndSetSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGPointMatchAndSetSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGPointMatchAndSetSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPointMatchAndSetSettings.OuterSingleton, Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGPointMatchAndSetSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGPointMatchAndSetSettings>()
	{
		return UPCGPointMatchAndSetSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPointMatchAndSetSettings);
	UPCGPointMatchAndSetSettings::~UPCGPointMatchAndSetSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointMatchAndSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointMatchAndSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGPointMatchAndSetSettings, UPCGPointMatchAndSetSettings::StaticClass, TEXT("UPCGPointMatchAndSetSettings"), &Z_Registration_Info_UClass_UPCGPointMatchAndSetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPointMatchAndSetSettings), 2372512904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointMatchAndSet_h_1623160669(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointMatchAndSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointMatchAndSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
