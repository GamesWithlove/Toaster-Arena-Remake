// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGComponent.h"
#include "PCG/Public/PCGData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGComponent();
	PCG_API UClass* Z_Construct_UClass_UPCGComponent_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGGraph_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGGraphInstance_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGGraphInterface_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGManagedResource_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGNode_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGComponentDirtyFlag();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGComponentInput();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGComponentInstanceData();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGDataCollection();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGComponentInput;
	static UEnum* EPCGComponentInput_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGComponentInput.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGComponentInput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGComponentInput, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGComponentInput"));
		}
		return Z_Registration_Info_UEnum_EPCGComponentInput.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGComponentInput>()
	{
		return EPCGComponentInput_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGComponentInput_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGComponentInput_Statics::Enumerators[] = {
		{ "EPCGComponentInput::Actor", (int64)EPCGComponentInput::Actor },
		{ "EPCGComponentInput::Landscape", (int64)EPCGComponentInput::Landscape },
		{ "EPCGComponentInput::Other", (int64)EPCGComponentInput::Other },
		{ "EPCGComponentInput::EPCGComponentInput_MAX", (int64)EPCGComponentInput::EPCGComponentInput_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGComponentInput_Statics::Enum_MetaDataParams[] = {
		{ "Actor.Name", "EPCGComponentInput::Actor" },
		{ "BlueprintType", "true" },
		{ "EPCGComponentInput_MAX.Comment", "// More?\n" },
		{ "EPCGComponentInput_MAX.Name", "EPCGComponentInput::EPCGComponentInput_MAX" },
		{ "EPCGComponentInput_MAX.ToolTip", "More?" },
		{ "IsBlueprintBase", "true" },
		{ "Landscape.Comment", "/** Generates based on owning actor */" },
		{ "Landscape.Name", "EPCGComponentInput::Landscape" },
		{ "Landscape.ToolTip", "Generates based on owning actor" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "Other.Name", "EPCGComponentInput::Other" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGComponentInput_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGComponentInput",
		"EPCGComponentInput",
		Z_Construct_UEnum_PCG_EPCGComponentInput_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGComponentInput_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGComponentInput_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGComponentInput_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGComponentInput()
	{
		if (!Z_Registration_Info_UEnum_EPCGComponentInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGComponentInput.InnerSingleton, Z_Construct_UEnum_PCG_EPCGComponentInput_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGComponentInput.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGComponentGenerationTrigger;
	static UEnum* EPCGComponentGenerationTrigger_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGComponentGenerationTrigger.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGComponentGenerationTrigger.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGComponentGenerationTrigger"));
		}
		return Z_Registration_Info_UEnum_EPCGComponentGenerationTrigger.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGComponentGenerationTrigger>()
	{
		return EPCGComponentGenerationTrigger_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger_Statics::Enumerators[] = {
		{ "EPCGComponentGenerationTrigger::GenerateOnLoad", (int64)EPCGComponentGenerationTrigger::GenerateOnLoad },
		{ "EPCGComponentGenerationTrigger::GenerateOnDemand", (int64)EPCGComponentGenerationTrigger::GenerateOnDemand },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GenerateOnDemand.Name", "EPCGComponentGenerationTrigger::GenerateOnDemand" },
		{ "GenerateOnLoad.Name", "EPCGComponentGenerationTrigger::GenerateOnLoad" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGComponentGenerationTrigger",
		"EPCGComponentGenerationTrigger",
		Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger()
	{
		if (!Z_Registration_Info_UEnum_EPCGComponentGenerationTrigger.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGComponentGenerationTrigger.InnerSingleton, Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGComponentGenerationTrigger.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGComponentDirtyFlag;
	static UEnum* EPCGComponentDirtyFlag_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGComponentDirtyFlag.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGComponentDirtyFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGComponentDirtyFlag, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGComponentDirtyFlag"));
		}
		return Z_Registration_Info_UEnum_EPCGComponentDirtyFlag.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGComponentDirtyFlag>()
	{
		return EPCGComponentDirtyFlag_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGComponentDirtyFlag_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGComponentDirtyFlag_Statics::Enumerators[] = {
		{ "EPCGComponentDirtyFlag::None", (int64)EPCGComponentDirtyFlag::None },
		{ "EPCGComponentDirtyFlag::Actor", (int64)EPCGComponentDirtyFlag::Actor },
		{ "EPCGComponentDirtyFlag::Landscape", (int64)EPCGComponentDirtyFlag::Landscape },
		{ "EPCGComponentDirtyFlag::Input", (int64)EPCGComponentDirtyFlag::Input },
		{ "EPCGComponentDirtyFlag::Data", (int64)EPCGComponentDirtyFlag::Data },
		{ "EPCGComponentDirtyFlag::All", (int64)EPCGComponentDirtyFlag::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGComponentDirtyFlag_Statics::Enum_MetaDataParams[] = {
		{ "Actor.Name", "EPCGComponentDirtyFlag::Actor" },
		{ "All.Name", "EPCGComponentDirtyFlag::All" },
		{ "Bitflags", "" },
		{ "Data.Name", "EPCGComponentDirtyFlag::Data" },
		{ "Input.Name", "EPCGComponentDirtyFlag::Input" },
		{ "Landscape.Name", "EPCGComponentDirtyFlag::Landscape" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "None.Name", "EPCGComponentDirtyFlag::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGComponentDirtyFlag_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGComponentDirtyFlag",
		"EPCGComponentDirtyFlag",
		Z_Construct_UEnum_PCG_EPCGComponentDirtyFlag_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGComponentDirtyFlag_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGComponentDirtyFlag_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGComponentDirtyFlag_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGComponentDirtyFlag()
	{
		if (!Z_Registration_Info_UEnum_EPCGComponentDirtyFlag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGComponentDirtyFlag.InnerSingleton, Z_Construct_UEnum_PCG_EPCGComponentDirtyFlag_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGComponentDirtyFlag.InnerSingleton;
	}
	DEFINE_FUNCTION(UPCGComponent::execClearPCGLink)
	{
		P_GET_OBJECT(UClass,Z_Param_TemplateActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->ClearPCGLink(Z_Param_TemplateActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGComponent::execGetGeneratedGraphOutput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPCGDataCollection*)Z_Param__Result=P_THIS->GetGeneratedGraphOutput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGComponent::execNotifyPropertiesChangedFromBlueprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyPropertiesChangedFromBlueprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGComponent::execCleanup)
	{
		P_GET_UBOOL(Z_Param_bRemoveComponents);
		P_GET_UBOOL(Z_Param_bSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cleanup_Implementation(Z_Param_bRemoveComponents,Z_Param_bSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGComponent::execGenerate)
	{
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Generate_Implementation(Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGComponent::execCleanupLocal)
	{
		P_GET_UBOOL(Z_Param_bRemoveComponents);
		P_GET_UBOOL(Z_Param_bSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CleanupLocal(Z_Param_bRemoveComponents,Z_Param_bSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGComponent::execGenerateLocal)
	{
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateLocal(Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGComponent::execAddToManagedResources)
	{
		P_GET_OBJECT(UPCGManagedResource,Z_Param_InResource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToManagedResources(Z_Param_InResource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGComponent::execSetGraph)
	{
		P_GET_OBJECT(UPCGGraphInterface,Z_Param_InGraph);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGraph_Implementation(Z_Param_InGraph);
		P_NATIVE_END;
	}
	struct PCGComponent_eventCleanup_Parms
	{
		bool bRemoveComponents;
		bool bSave;
	};
	struct PCGComponent_eventGenerate_Parms
	{
		bool bForce;
	};
	struct PCGComponent_eventSetGraph_Parms
	{
		UPCGGraphInterface* InGraph;
	};
	static FName NAME_UPCGComponent_Cleanup = FName(TEXT("Cleanup"));
	void UPCGComponent::Cleanup(bool bRemoveComponents, bool bSave)
	{
		PCGComponent_eventCleanup_Parms Parms;
		Parms.bRemoveComponents=bRemoveComponents ? true : false;
		Parms.bSave=bSave ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPCGComponent_Cleanup),&Parms);
	}
	static FName NAME_UPCGComponent_Generate = FName(TEXT("Generate"));
	void UPCGComponent::Generate(bool bForce)
	{
		PCGComponent_eventGenerate_Parms Parms;
		Parms.bForce=bForce ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPCGComponent_Generate),&Parms);
	}
	static FName NAME_UPCGComponent_SetGraph = FName(TEXT("SetGraph"));
	void UPCGComponent::SetGraph(UPCGGraphInterface* InGraph)
	{
		PCGComponent_eventSetGraph_Parms Parms;
		Parms.InGraph=InGraph;
		ProcessEvent(FindFunctionChecked(NAME_UPCGComponent_SetGraph),&Parms);
	}
	void UPCGComponent::StaticRegisterNativesUPCGComponent()
	{
		UClass* Class = UPCGComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToManagedResources", &UPCGComponent::execAddToManagedResources },
			{ "Cleanup", &UPCGComponent::execCleanup },
			{ "CleanupLocal", &UPCGComponent::execCleanupLocal },
			{ "ClearPCGLink", &UPCGComponent::execClearPCGLink },
			{ "Generate", &UPCGComponent::execGenerate },
			{ "GenerateLocal", &UPCGComponent::execGenerateLocal },
			{ "GetGeneratedGraphOutput", &UPCGComponent::execGetGeneratedGraphOutput },
			{ "NotifyPropertiesChangedFromBlueprint", &UPCGComponent::execNotifyPropertiesChangedFromBlueprint },
			{ "SetGraph", &UPCGComponent::execSetGraph },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGComponent_AddToManagedResources_Statics
	{
		struct PCGComponent_eventAddToManagedResources_Parms
		{
			UPCGManagedResource* InResource;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InResource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGComponent_AddToManagedResources_Statics::NewProp_InResource = { "InResource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGComponent_eventAddToManagedResources_Parms, InResource), Z_Construct_UClass_UPCGManagedResource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGComponent_AddToManagedResources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGComponent_AddToManagedResources_Statics::NewProp_InResource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGComponent_AddToManagedResources_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG" },
		{ "Comment", "/** Registers some managed resource to the current component */" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "ToolTip", "Registers some managed resource to the current component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGComponent_AddToManagedResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGComponent, nullptr, "AddToManagedResources", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGComponent_AddToManagedResources_Statics::PCGComponent_eventAddToManagedResources_Parms), Z_Construct_UFunction_UPCGComponent_AddToManagedResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_AddToManagedResources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGComponent_AddToManagedResources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_AddToManagedResources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGComponent_AddToManagedResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGComponent_AddToManagedResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGComponent_Cleanup_Statics
	{
		static void NewProp_bRemoveComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveComponents;
		static void NewProp_bSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::NewProp_bRemoveComponents_SetBit(void* Obj)
	{
		((PCGComponent_eventCleanup_Parms*)Obj)->bRemoveComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::NewProp_bRemoveComponents = { "bRemoveComponents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGComponent_eventCleanup_Parms), &Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::NewProp_bRemoveComponents_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::NewProp_bSave_SetBit(void* Obj)
	{
		((PCGComponent_eventCleanup_Parms*)Obj)->bSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::NewProp_bSave = { "bSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGComponent_eventCleanup_Parms), &Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::NewProp_bSave_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::NewProp_bRemoveComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::NewProp_bSave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG" },
		{ "Comment", "/** Networked cleanup call */" },
		{ "CPP_Default_bSave", "false" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "ToolTip", "Networked cleanup call" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGComponent, nullptr, "Cleanup", nullptr, nullptr, sizeof(PCGComponent_eventCleanup_Parms), Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGComponent_Cleanup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGComponent_Cleanup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics
	{
		struct PCGComponent_eventCleanupLocal_Parms
		{
			bool bRemoveComponents;
			bool bSave;
		};
		static void NewProp_bRemoveComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveComponents;
		static void NewProp_bSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::NewProp_bRemoveComponents_SetBit(void* Obj)
	{
		((PCGComponent_eventCleanupLocal_Parms*)Obj)->bRemoveComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::NewProp_bRemoveComponents = { "bRemoveComponents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGComponent_eventCleanupLocal_Parms), &Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::NewProp_bRemoveComponents_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::NewProp_bSave_SetBit(void* Obj)
	{
		((PCGComponent_eventCleanupLocal_Parms*)Obj)->bSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::NewProp_bSave = { "bSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGComponent_eventCleanupLocal_Parms), &Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::NewProp_bSave_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::NewProp_bRemoveComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::NewProp_bSave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG" },
		{ "Comment", "/** Cleans up the generation from a local (vs. remote) standpoint. Will not be replicated. Will be delayed. */" },
		{ "CPP_Default_bSave", "false" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "ToolTip", "Cleans up the generation from a local (vs. remote) standpoint. Will not be replicated. Will be delayed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGComponent, nullptr, "CleanupLocal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::PCGComponent_eventCleanupLocal_Parms), Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGComponent_CleanupLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGComponent_CleanupLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGComponent_ClearPCGLink_Statics
	{
		struct PCGComponent_eventClearPCGLink_Parms
		{
			UClass* TemplateActor;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_TemplateActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPCGComponent_ClearPCGLink_Statics::NewProp_TemplateActor = { "TemplateActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGComponent_eventClearPCGLink_Parms, TemplateActor), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGComponent_ClearPCGLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGComponent_eventClearPCGLink_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGComponent_ClearPCGLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGComponent_ClearPCGLink_Statics::NewProp_TemplateActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGComponent_ClearPCGLink_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGComponent_ClearPCGLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG" },
		{ "Comment", "/** Move all generated resources under a new actor, following a template (AActor if not provided), clearing all link to this PCG component. Returns the new actor.*/" },
		{ "CPP_Default_TemplateActor", "None" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "ToolTip", "Move all generated resources under a new actor, following a template (AActor if not provided), clearing all link to this PCG component. Returns the new actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGComponent_ClearPCGLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGComponent, nullptr, "ClearPCGLink", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGComponent_ClearPCGLink_Statics::PCGComponent_eventClearPCGLink_Parms), Z_Construct_UFunction_UPCGComponent_ClearPCGLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_ClearPCGLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGComponent_ClearPCGLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_ClearPCGLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGComponent_ClearPCGLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGComponent_ClearPCGLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGComponent_Generate_Statics
	{
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPCGComponent_Generate_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((PCGComponent_eventGenerate_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGComponent_Generate_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGComponent_eventGenerate_Parms), &Z_Construct_UFunction_UPCGComponent_Generate_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGComponent_Generate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGComponent_Generate_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGComponent_Generate_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG" },
		{ "Comment", "/** Networked generation call that also activates the component as needed */" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "ToolTip", "Networked generation call that also activates the component as needed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGComponent_Generate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGComponent, nullptr, "Generate", nullptr, nullptr, sizeof(PCGComponent_eventGenerate_Parms), Z_Construct_UFunction_UPCGComponent_Generate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_Generate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGComponent_Generate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_Generate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGComponent_Generate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGComponent_Generate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGComponent_GenerateLocal_Statics
	{
		struct PCGComponent_eventGenerateLocal_Parms
		{
			bool bForce;
		};
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPCGComponent_GenerateLocal_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((PCGComponent_eventGenerateLocal_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGComponent_GenerateLocal_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGComponent_eventGenerateLocal_Parms), &Z_Construct_UFunction_UPCGComponent_GenerateLocal_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGComponent_GenerateLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGComponent_GenerateLocal_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGComponent_GenerateLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG" },
		{ "Comment", "/** Starts generation from a local (vs. remote) standpoint. Will not be replicated. Will be delayed. */" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "ToolTip", "Starts generation from a local (vs. remote) standpoint. Will not be replicated. Will be delayed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGComponent_GenerateLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGComponent, nullptr, "GenerateLocal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGComponent_GenerateLocal_Statics::PCGComponent_eventGenerateLocal_Parms), Z_Construct_UFunction_UPCGComponent_GenerateLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_GenerateLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGComponent_GenerateLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_GenerateLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGComponent_GenerateLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGComponent_GenerateLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput_Statics
	{
		struct PCGComponent_eventGetGeneratedGraphOutput_Parms
		{
			FPCGDataCollection ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGComponent_eventGetGeneratedGraphOutput_Parms, ReturnValue), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput_Statics::NewProp_ReturnValue_MetaData)) }; // 3581647893
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG" },
		{ "Comment", "/** Retrieves generated data */" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "ToolTip", "Retrieves generated data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGComponent, nullptr, "GetGeneratedGraphOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput_Statics::PCGComponent_eventGetGeneratedGraphOutput_Parms), Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGComponent_NotifyPropertiesChangedFromBlueprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGComponent_NotifyPropertiesChangedFromBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG" },
		{ "Comment", "/** Notify properties changed, used in runtime cases, will dirty & trigger a regeneration if needed */" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "ToolTip", "Notify properties changed, used in runtime cases, will dirty & trigger a regeneration if needed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGComponent_NotifyPropertiesChangedFromBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGComponent, nullptr, "NotifyPropertiesChangedFromBlueprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGComponent_NotifyPropertiesChangedFromBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_NotifyPropertiesChangedFromBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGComponent_NotifyPropertiesChangedFromBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGComponent_NotifyPropertiesChangedFromBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGComponent_SetGraph_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGComponent_SetGraph_Statics::NewProp_InGraph = { "InGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGComponent_eventSetGraph_Parms, InGraph), Z_Construct_UClass_UPCGGraphInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGComponent_SetGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGComponent_SetGraph_Statics::NewProp_InGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGComponent_SetGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGComponent_SetGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGComponent, nullptr, "SetGraph", nullptr, nullptr, sizeof(PCGComponent_eventSetGraph_Parms), Z_Construct_UFunction_UPCGComponent_SetGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_SetGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGComponent_SetGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGComponent_SetGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGComponent_SetGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGComponent_SetGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGComponent);
	UClass* Z_Construct_UClass_UPCGComponent_NoRegister()
	{
		return UPCGComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPCGComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bParseActorComponents_MetaData[];
#endif
		static void NewProp_bParseActorComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParseActorComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActivated_MetaData[];
#endif
		static void NewProp_bActivated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsComponentPartitioned_MetaData[];
#endif
		static void NewProp_bIsComponentPartitioned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsComponentPartitioned;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GenerationTrigger_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerationTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerationTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerated_MetaData[];
#endif
		static void NewProp_bGenerated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRuntimeGenerated_MetaData[];
#endif
		static void NewProp_bRuntimeGenerated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRuntimeGenerated;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRegenerateInEditor_MetaData[];
#endif
		static void NewProp_bRegenerateInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegenerateInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDirtyGenerated_MetaData[];
#endif
		static void NewProp_bDirtyGenerated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDirtyGenerated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceGenerateOnBPAddedToWorld_MetaData[];
#endif
		static void NewProp_bForceGenerateOnBPAddedToWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceGenerateOnBPAddedToWorld;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_PostGenerateFunctionNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostGenerateFunctionNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PostGenerateFunctionNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GraphInstance;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Graph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPartitioned_MetaData[];
#endif
		static void NewProp_bIsPartitioned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPartitioned;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPCGData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedPCGData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedInputData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedInputData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedActorData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedActorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedLandscapeData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedLandscapeData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedLandscapeHeightData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedLandscapeHeightData;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GeneratedActors_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedActors_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_GeneratedActors;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeneratedResources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedResources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedResources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastGeneratedBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastGeneratedBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedGraphOutput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedGraphOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsComponentLocal_MetaData[];
#endif
		static void NewProp_bIsComponentLocal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsComponentLocal;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TrackedLandscapes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedLandscapes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackedLandscapes;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedTrackedActors_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedTrackedActors_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CachedTrackedActors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InspectionCache_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InspectionCache_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InspectionCache_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InspectionCache;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGComponent_AddToManagedResources, "AddToManagedResources" }, // 3611467588
		{ &Z_Construct_UFunction_UPCGComponent_Cleanup, "Cleanup" }, // 3591664721
		{ &Z_Construct_UFunction_UPCGComponent_CleanupLocal, "CleanupLocal" }, // 3467191652
		{ &Z_Construct_UFunction_UPCGComponent_ClearPCGLink, "ClearPCGLink" }, // 3480612109
		{ &Z_Construct_UFunction_UPCGComponent_Generate, "Generate" }, // 606079215
		{ &Z_Construct_UFunction_UPCGComponent_GenerateLocal, "GenerateLocal" }, // 2828855729
		{ &Z_Construct_UFunction_UPCGComponent_GetGeneratedGraphOutput, "GetGeneratedGraphOutput" }, // 2722193691
		{ &Z_Construct_UFunction_UPCGComponent_NotifyPropertiesChangedFromBlueprint, "NotifyPropertiesChangedFromBlueprint" }, // 2366039741
		{ &Z_Construct_UFunction_UPCGComponent_SetGraph, "SetGraph" }, // 2508080012
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "PCGComponent.h" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PrioritizeCategories", "PCG" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_InputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_InputType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, InputType), Z_Construct_UEnum_PCG_EPCGComponentInput, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_InputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_InputType_MetaData)) }; // 3756408852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_bParseActorComponents_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPCGComponent_Statics::NewProp_bParseActorComponents_SetBit(void* Obj)
	{
		((UPCGComponent*)Obj)->bParseActorComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_bParseActorComponents = { "bParseActorComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGComponent), &Z_Construct_UClass_UPCGComponent_Statics::NewProp_bParseActorComponents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bParseActorComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bParseActorComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, Seed), METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_bActivated_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPCGComponent_Statics::NewProp_bActivated_SetBit(void* Obj)
	{
		((UPCGComponent*)Obj)->bActivated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_bActivated = { "bActivated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGComponent), &Z_Construct_UClass_UPCGComponent_Statics::NewProp_bActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bActivated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsComponentPartitioned_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/* In World Partition map, will partition the component in a grid, according to PCGWorldActor settings, dispatching the generation to multiple local components.*/" },
		{ "DisplayName", "Is Partitioned" },
		{ "EditCondition", "!bIsComponentLocal" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "ToolTip", "In World Partition map, will partition the component in a grid, according to PCGWorldActor settings, dispatching the generation to multiple local components." },
	};
#endif
	void Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsComponentPartitioned_SetBit(void* Obj)
	{
		((UPCGComponent*)Obj)->bIsComponentPartitioned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsComponentPartitioned = { "bIsComponentPartitioned", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGComponent), &Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsComponentPartitioned_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsComponentPartitioned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsComponentPartitioned_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_GenerationTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_GenerationTrigger_MetaData[] = {
		{ "Category", "Properties" },
		{ "EditCondition", "!bIsComponentLocal" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_GenerationTrigger = { "GenerationTrigger", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, GenerationTrigger), Z_Construct_UEnum_PCG_EPCGComponentGenerationTrigger, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_GenerationTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_GenerationTrigger_MetaData)) }; // 4262541722
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_bGenerated_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Flag to indicate whether this component has run in the editor. Note that for partitionable actors, this will always be false. */" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "ToolTip", "Flag to indicate whether this component has run in the editor. Note that for partitionable actors, this will always be false." },
	};
#endif
	void Z_Construct_UClass_UPCGComponent_Statics::NewProp_bGenerated_SetBit(void* Obj)
	{
		((UPCGComponent*)Obj)->bGenerated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_bGenerated = { "bGenerated", nullptr, (EPropertyFlags)0x0010040000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGComponent), &Z_Construct_UClass_UPCGComponent_Statics::NewProp_bGenerated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bGenerated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bGenerated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_bRuntimeGenerated_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPCGComponent_Statics::NewProp_bRuntimeGenerated_SetBit(void* Obj)
	{
		((UPCGComponent*)Obj)->bRuntimeGenerated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_bRuntimeGenerated = { "bRuntimeGenerated", nullptr, (EPropertyFlags)0x0010800000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGComponent), &Z_Construct_UClass_UPCGComponent_Statics::NewProp_bRuntimeGenerated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bRuntimeGenerated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bRuntimeGenerated_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_bRegenerateInEditor_MetaData[] = {
		{ "Category", "Properties" },
		{ "DisplayName", "Regenerate PCG volume in editor" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPCGComponent_Statics::NewProp_bRegenerateInEditor_SetBit(void* Obj)
	{
		((UPCGComponent*)Obj)->bRegenerateInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_bRegenerateInEditor = { "bRegenerateInEditor", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGComponent), &Z_Construct_UClass_UPCGComponent_Statics::NewProp_bRegenerateInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bRegenerateInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bRegenerateInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_bDirtyGenerated_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPCGComponent_Statics::NewProp_bDirtyGenerated_SetBit(void* Obj)
	{
		((UPCGComponent*)Obj)->bDirtyGenerated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_bDirtyGenerated = { "bDirtyGenerated", nullptr, (EPropertyFlags)0x0010040800022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGComponent), &Z_Construct_UClass_UPCGComponent_Statics::NewProp_bDirtyGenerated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bDirtyGenerated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bDirtyGenerated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_bForceGenerateOnBPAddedToWorld_MetaData[] = {
		{ "Comment", "// Property that will automatically be set on BP templates, to allow for \"Generate on add to world\" in editor.\n// Set it as a property to automatically transfer it to its child.\n// Don't use it directly, use ShouldGenerateBPPCGAddedToWorld, as there are other conditions checked.\n" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "ToolTip", "Property that will automatically be set on BP templates, to allow for \"Generate on add to world\" in editor.\nSet it as a property to automatically transfer it to its child.\nDon't use it directly, use ShouldGenerateBPPCGAddedToWorld, as there are other conditions checked." },
	};
#endif
	void Z_Construct_UClass_UPCGComponent_Statics::NewProp_bForceGenerateOnBPAddedToWorld_SetBit(void* Obj)
	{
		((UPCGComponent*)Obj)->bForceGenerateOnBPAddedToWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_bForceGenerateOnBPAddedToWorld = { "bForceGenerateOnBPAddedToWorld", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGComponent), &Z_Construct_UClass_UPCGComponent_Statics::NewProp_bForceGenerateOnBPAddedToWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bForceGenerateOnBPAddedToWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bForceGenerateOnBPAddedToWorld_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_PostGenerateFunctionNames_Inner = { "PostGenerateFunctionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_PostGenerateFunctionNames_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Can specify a list of functions from the owner of this component to be called when generation is done, in order. \n\x09*   Need to take (and only take) a PCGDataCollection as parameter and with \"CallInEditor\" flag enabled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "ToolTip", "Can specify a list of functions from the owner of this component to be called when generation is done, in order.\n Need to take (and only take) a PCGDataCollection as parameter and with \"CallInEditor\" flag enabled." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_PostGenerateFunctionNames = { "PostGenerateFunctionNames", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, PostGenerateFunctionNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_PostGenerateFunctionNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_PostGenerateFunctionNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_GraphInstance_MetaData[] = {
		{ "Category", "PCG" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x00260800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, GraphInstance), Z_Construct_UClass_UPCGGraphInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_GraphInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_GraphInstance_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_Graph_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, Graph_DEPRECATED), Z_Construct_UClass_UPCGGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_Graph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_Graph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsPartitioned_MetaData[] = {
		{ "Comment", "// Note for upgrade: can be safely replaced by bIsComponentPartitioned. Needed a new variable to change the default value. Kept to allow proper value change, cannot be deprecated. Do not use.\n" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "ToolTip", "Note for upgrade: can be safely replaced by bIsComponentPartitioned. Needed a new variable to change the default value. Kept to allow proper value change, cannot be deprecated. Do not use." },
	};
#endif
	void Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsPartitioned_SetBit(void* Obj)
	{
		((UPCGComponent*)Obj)->bIsPartitioned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsPartitioned = { "bIsPartitioned", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGComponent), &Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsPartitioned_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsPartitioned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsPartitioned_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedPCGData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedPCGData = { "CachedPCGData", nullptr, (EPropertyFlags)0x0044800000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, CachedPCGData), Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedPCGData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedPCGData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedInputData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedInputData = { "CachedInputData", nullptr, (EPropertyFlags)0x0044800000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, CachedInputData), Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedInputData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedInputData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedActorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedActorData = { "CachedActorData", nullptr, (EPropertyFlags)0x0044800000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, CachedActorData), Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedActorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedActorData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedLandscapeData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedLandscapeData = { "CachedLandscapeData", nullptr, (EPropertyFlags)0x0044800000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, CachedLandscapeData), Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedLandscapeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedLandscapeData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedLandscapeHeightData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedLandscapeHeightData = { "CachedLandscapeHeightData", nullptr, (EPropertyFlags)0x0044800000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, CachedLandscapeHeightData), Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedLandscapeHeightData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedLandscapeHeightData_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedActors_ElementProp = { "GeneratedActors", nullptr, (EPropertyFlags)0x0004000820000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedActors = { "GeneratedActors", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, GeneratedActors_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedActors_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedResources_Inner = { "GeneratedResources", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPCGManagedResource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedResources_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedResources = { "GeneratedResources", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, GeneratedResources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedResources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedResources_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_LastGeneratedBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_LastGeneratedBounds = { "LastGeneratedBounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, LastGeneratedBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_LastGeneratedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_LastGeneratedBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedGraphOutput_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedGraphOutput = { "GeneratedGraphOutput", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, GeneratedGraphOutput), Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedGraphOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedGraphOutput_MetaData)) }; // 3581647893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsComponentLocal_MetaData[] = {
		{ "Category", "Properties" },
		{ "EditCondition", "FALSE" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsComponentLocal_SetBit(void* Obj)
	{
		((UPCGComponent*)Obj)->bIsComponentLocal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsComponentLocal = { "bIsComponentLocal", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGComponent), &Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsComponentLocal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsComponentLocal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsComponentLocal_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_TrackedLandscapes_Inner = { "TrackedLandscapes", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_TrackedLandscapes_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_TrackedLandscapes = { "TrackedLandscapes", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, TrackedLandscapes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_TrackedLandscapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_TrackedLandscapes_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedTrackedActors_ElementProp = { "CachedTrackedActors", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedTrackedActors_MetaData[] = {
		{ "Comment", "// Cached tracked actors list is serialized because we can't get it at postload time\n" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "ToolTip", "Cached tracked actors list is serialized because we can't get it at postload time" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedTrackedActors = { "CachedTrackedActors", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, CachedTrackedActors), METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedTrackedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedTrackedActors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_InspectionCache_ValueProp = { "InspectionCache", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPCGDataCollection, METADATA_PARAMS(nullptr, 0) }; // 3581647893
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_InspectionCache_Key_KeyProp = { "InspectionCache_Key", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPCGNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGComponent_Statics::NewProp_InspectionCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPCGComponent_Statics::NewProp_InspectionCache = { "InspectionCache", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGComponent, InspectionCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::NewProp_InspectionCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::NewProp_InspectionCache_MetaData)) }; // 3581647893
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_InputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_InputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_bParseActorComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_bActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsComponentPartitioned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_GenerationTrigger_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_GenerationTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_bGenerated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_bRuntimeGenerated,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_bRegenerateInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_bDirtyGenerated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_bForceGenerateOnBPAddedToWorld,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_PostGenerateFunctionNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_PostGenerateFunctionNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_GraphInstance,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_Graph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsPartitioned,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedPCGData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedInputData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedActorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedLandscapeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedLandscapeHeightData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedActors_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedActors,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedResources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedResources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_LastGeneratedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_GeneratedGraphOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_bIsComponentLocal,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_TrackedLandscapes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_TrackedLandscapes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedTrackedActors_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_CachedTrackedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_InspectionCache_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_InspectionCache_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGComponent_Statics::NewProp_InspectionCache,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGComponent_Statics::ClassParams = {
		&UPCGComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGComponent()
	{
		if (!Z_Registration_Info_UClass_UPCGComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGComponent.OuterSingleton, Z_Construct_UClass_UPCGComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGComponent.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGComponent>()
	{
		return UPCGComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGComponent);
	UPCGComponent::~UPCGComponent() {}

static_assert(std::is_polymorphic<FPCGComponentInstanceData>() == std::is_polymorphic<FActorComponentInstanceData>(), "USTRUCT FPCGComponentInstanceData cannot be polymorphic unless super FActorComponentInstanceData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGComponentInstanceData;
class UScriptStruct* FPCGComponentInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGComponentInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGComponentInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGComponentInstanceData, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGComponentInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_PCGComponentInstanceData.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGComponentInstanceData>()
{
	return FPCGComponentInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeneratedResources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedResources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedResources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to store generated resources data during RerunConstructionScripts */" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "ToolTip", "Used to store generated resources data during RerunConstructionScripts" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGComponentInstanceData>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::NewProp_GeneratedResources_Inner = { "GeneratedResources", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPCGManagedResource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::NewProp_GeneratedResources_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::NewProp_GeneratedResources = { "GeneratedResources", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGComponentInstanceData, GeneratedResources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::NewProp_GeneratedResources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::NewProp_GeneratedResources_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PCGComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGComponentInstanceData, SourceComponent), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::NewProp_SourceComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::NewProp_GeneratedResources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::NewProp_GeneratedResources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::NewProp_SourceComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		Z_Construct_UScriptStruct_FActorComponentInstanceData,
		&NewStructOps,
		"PCGComponentInstanceData",
		sizeof(FPCGComponentInstanceData),
		alignof(FPCGComponentInstanceData),
		Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGComponentInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGComponentInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGComponentInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGComponentInstanceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGComponent_h_Statics::EnumInfo[] = {
		{ EPCGComponentInput_StaticEnum, TEXT("EPCGComponentInput"), &Z_Registration_Info_UEnum_EPCGComponentInput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3756408852U) },
		{ EPCGComponentGenerationTrigger_StaticEnum, TEXT("EPCGComponentGenerationTrigger"), &Z_Registration_Info_UEnum_EPCGComponentGenerationTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4262541722U) },
		{ EPCGComponentDirtyFlag_StaticEnum, TEXT("EPCGComponentDirtyFlag"), &Z_Registration_Info_UEnum_EPCGComponentDirtyFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2519249042U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGComponent_h_Statics::ScriptStructInfo[] = {
		{ FPCGComponentInstanceData::StaticStruct, Z_Construct_UScriptStruct_FPCGComponentInstanceData_Statics::NewStructOps, TEXT("PCGComponentInstanceData"), &Z_Registration_Info_UScriptStruct_PCGComponentInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGComponentInstanceData), 3728463034U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGComponent, UPCGComponent::StaticClass, TEXT("UPCGComponent"), &Z_Registration_Info_UClass_UPCGComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGComponent), 2670694258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGComponent_h_3823813568(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
