// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/UGCRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGCRegistry() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCRegistry();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCRegistry_NoRegister();
	SIMPLEUGC_API UScriptStruct* Z_Construct_UScriptStruct_FUGCPackage();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UGCPackage;
class UScriptStruct* FUGCPackage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UGCPackage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UGCPackage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUGCPackage, (UObject*)Z_Construct_UPackage__Script_SimpleUGC(), TEXT("UGCPackage"));
	}
	return Z_Registration_Info_UScriptStruct_UGCPackage.OuterSingleton;
}
template<> SIMPLEUGC_API UScriptStruct* StaticStruct<FUGCPackage>()
{
	return FUGCPackage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUGCPackage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EngineVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Author;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUGCPackage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUGCPackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUGCPackage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_PackagePath_MetaData[] = {
		{ "Category", "SimpleUGC" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUGCPackage, PackagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_PackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_PackagePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_EngineVersion_MetaData[] = {
		{ "Category", "SimpleUGC" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_EngineVersion = { "EngineVersion", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUGCPackage, EngineVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_EngineVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_EngineVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Author_MetaData[] = {
		{ "Category", "SimpleUGC" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUGCPackage, Author), METADATA_PARAMS(Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Author_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Author_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "SimpleUGC" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUGCPackage, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUGCPackage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_PackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_EngineVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Author,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Description,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUGCPackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
		nullptr,
		&NewStructOps,
		"UGCPackage",
		sizeof(FUGCPackage),
		alignof(FUGCPackage),
		Z_Construct_UScriptStruct_FUGCPackage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCPackage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUGCPackage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCPackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUGCPackage()
	{
		if (!Z_Registration_Info_UScriptStruct_UGCPackage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UGCPackage.InnerSingleton, Z_Construct_UScriptStruct_FUGCPackage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UGCPackage.InnerSingleton;
	}
	DEFINE_FUNCTION(UUGCRegistry::execGetOverrideForActorClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<AActor> *)Z_Param__Result=P_THIS->GetOverrideForActorClass(Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execClearOverrideForClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearOverrideForClass(Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execRegisterOverrideForClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ClassToOverride);
		P_GET_OBJECT(UClass,Z_Param_OverrideClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterOverrideForClass(Z_Param_ClassToOverride,Z_Param_OverrideClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execApplyOverridesForActorClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ApplyOverridesForActorClass(Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execApplyAllOverridesInPackage)
	{
		P_GET_STRUCT(FUGCPackage,Z_Param_Package);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ApplyAllOverridesInPackage(Z_Param_Package);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execGetActorClassesWithReplacementActorComponentsInPackage)
	{
		P_GET_STRUCT(FUGCPackage,Z_Param_Package);
		P_GET_TARRAY_REF(TSubclassOf<AActor> ,Z_Param_Out_ActorClasses);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetActorClassesWithReplacementActorComponentsInPackage(Z_Param_Package,Z_Param_Out_ActorClasses);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execGetMapsInPackage)
	{
		P_GET_STRUCT(FUGCPackage,Z_Param_Package);
		P_GET_TARRAY_REF(FName,Z_Param_Out_Maps);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMapsInPackage(Z_Param_Package,Z_Param_Out_Maps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execGetAllClassesInPackage)
	{
		P_GET_STRUCT(FUGCPackage,Z_Param_Package);
		P_GET_TARRAY_REF(UClass*,Z_Param_Out_Classes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllClassesInPackage(Z_Param_Package,Z_Param_Out_Classes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execFindUGCPackages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindUGCPackages();
		P_NATIVE_END;
	}
	void UUGCRegistry::StaticRegisterNativesUUGCRegistry()
	{
		UClass* Class = UUGCRegistry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAllOverridesInPackage", &UUGCRegistry::execApplyAllOverridesInPackage },
			{ "ApplyOverridesForActorClass", &UUGCRegistry::execApplyOverridesForActorClass },
			{ "ClearOverrideForClass", &UUGCRegistry::execClearOverrideForClass },
			{ "FindUGCPackages", &UUGCRegistry::execFindUGCPackages },
			{ "GetActorClassesWithReplacementActorComponentsInPackage", &UUGCRegistry::execGetActorClassesWithReplacementActorComponentsInPackage },
			{ "GetAllClassesInPackage", &UUGCRegistry::execGetAllClassesInPackage },
			{ "GetMapsInPackage", &UUGCRegistry::execGetMapsInPackage },
			{ "GetOverrideForActorClass", &UUGCRegistry::execGetOverrideForActorClass },
			{ "RegisterOverrideForClass", &UUGCRegistry::execRegisterOverrideForClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics
	{
		struct UGCRegistry_eventApplyAllOverridesInPackage_Parms
		{
			FUGCPackage Package;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Package;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGCRegistry_eventApplyAllOverridesInPackage_Parms, Package), Z_Construct_UScriptStruct_FUGCPackage, METADATA_PARAMS(nullptr, 0) }; // 3557184407
	void Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventApplyAllOverridesInPackage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGCRegistry_eventApplyAllOverridesInPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_Package,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
		{ "Comment", "// Applies entire package of Actor Replacements. This is common for applying an entire class-based \"Mod.\"\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "Applies entire package of Actor Replacements. This is common for applying an entire class-based \"Mod.\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "ApplyAllOverridesInPackage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::UGCRegistry_eventApplyAllOverridesInPackage_Parms), Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics
	{
		struct UGCRegistry_eventApplyOverridesForActorClass_Parms
		{
			TSubclassOf<AActor>  ActorClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGCRegistry_eventApplyOverridesForActorClass_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventApplyOverridesForActorClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGCRegistry_eventApplyOverridesForActorClass_Parms), &Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
		{ "Comment", "// Applies an override for a specific Class. Find valid classes to use here by calling GetActorClassesWithReplacementActorComponentsInPackage\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "Applies an override for a specific Class. Find valid classes to use here by calling GetActorClassesWithReplacementActorComponentsInPackage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "ApplyOverridesForActorClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::UGCRegistry_eventApplyOverridesForActorClass_Parms), Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics
	{
		struct UGCRegistry_eventClearOverrideForClass_Parms
		{
			TSubclassOf<AActor>  ActorClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGCRegistry_eventClearOverrideForClass_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::NewProp_ActorClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
		{ "Comment", "// Used to clear the override from the registry. To clear all, loop through RegisterredOverrides, break the struct and run the Origin into this function.\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "Used to clear the override from the registry. To clear all, loop through RegisterredOverrides, break the struct and run the Origin into this function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "ClearOverrideForClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::UGCRegistry_eventClearOverrideForClass_Parms), Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics
	{
		struct UGCRegistry_eventFindUGCPackages_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventFindUGCPackages_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGCRegistry_eventFindUGCPackages_Parms), &Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// This populates UGCPackages based on what is found in UGC plugin files. If you're mounting new /Plugin paks at runtime. Expose this to Blueprints.\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "This populates UGCPackages based on what is found in UGC plugin files. If you're mounting new /Plugin paks at runtime. Expose this to Blueprints." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "FindUGCPackages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::UGCRegistry_eventFindUGCPackages_Parms), Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_FindUGCPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics
	{
		struct UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms
		{
			FUGCPackage Package;
			TArray<TSubclassOf<AActor> > ActorClasses;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Package;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClasses_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorClasses;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms, Package), Z_Construct_UScriptStruct_FUGCPackage, METADATA_PARAMS(nullptr, 0) }; // 3557184407
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ActorClasses_Inner = { "ActorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ActorClasses = { "ActorClasses", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms, ActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_Package,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ActorClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ActorClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
		{ "Comment", "// Returns All Actor Classes In Package that have the ability to replace a a base class. Use this when you want to register only specific class overrides from a UGC package.\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "Returns All Actor Classes In Package that have the ability to replace a a base class. Use this when you want to register only specific class overrides from a UGC package." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetActorClassesWithReplacementActorComponentsInPackage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms), Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics
	{
		struct UGCRegistry_eventGetAllClassesInPackage_Parms
		{
			FUGCPackage Package;
			TArray<UClass*> Classes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Package;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Classes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Classes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGCRegistry_eventGetAllClassesInPackage_Parms, Package), Z_Construct_UScriptStruct_FUGCPackage, METADATA_PARAMS(nullptr, 0) }; // 3557184407
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Classes_Inner = { "Classes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Classes = { "Classes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGCRegistry_eventGetAllClassesInPackage_Parms, Classes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventGetAllClassesInPackage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGCRegistry_eventGetAllClassesInPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Package,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Classes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Classes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC" },
		{ "Comment", "// Returns All Classes in a UGC package.\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "Returns All Classes in a UGC package." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetAllClassesInPackage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::UGCRegistry_eventGetAllClassesInPackage_Parms), Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics
	{
		struct UGCRegistry_eventGetMapsInPackage_Parms
		{
			FUGCPackage Package;
			TArray<FName> Maps;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Package;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Maps_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Maps;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGCRegistry_eventGetMapsInPackage_Parms, Package), Z_Construct_UScriptStruct_FUGCPackage, METADATA_PARAMS(nullptr, 0) }; // 3557184407
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Maps_Inner = { "Maps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Maps = { "Maps", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGCRegistry_eventGetMapsInPackage_Parms, Maps), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventGetMapsInPackage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGCRegistry_eventGetMapsInPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Package,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Maps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Maps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC" },
		{ "Comment", "// Returns All Maps in a UGC package.\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "Returns All Maps in a UGC package." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetMapsInPackage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::UGCRegistry_eventGetMapsInPackage_Parms), Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics
	{
		struct UGCRegistry_eventGetOverrideForActorClass_Parms
		{
			TSubclassOf<AActor>  ActorClass;
			TSubclassOf<AActor>  ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGCRegistry_eventGetOverrideForActorClass_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGCRegistry_eventGetOverrideForActorClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
		{ "Comment", "// Used in gameplay to look up what class is actually supposed to be spawned\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "Used in gameplay to look up what class is actually supposed to be spawned" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetOverrideForActorClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::UGCRegistry_eventGetOverrideForActorClass_Parms), Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics
	{
		struct UGCRegistry_eventRegisterOverrideForClass_Parms
		{
			TSubclassOf<AActor>  ClassToOverride;
			TSubclassOf<AActor>  OverrideClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassToOverride;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverrideClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::NewProp_ClassToOverride = { "ClassToOverride", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGCRegistry_eventRegisterOverrideForClass_Parms, ClassToOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::NewProp_OverrideClass = { "OverrideClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGCRegistry_eventRegisterOverrideForClass_Parms, OverrideClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::NewProp_ClassToOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::NewProp_OverrideClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
		{ "Comment", "// A manual override assignment. Not reccommended for mod packages, but useful for big UGC drops (100 UGuns pack, etc)\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "A manual override assignment. Not reccommended for mod packages, but useful for big UGC drops (100 UGuns pack, etc)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "RegisterOverrideForClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::UGCRegistry_eventRegisterOverrideForClass_Parms), Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUGCRegistry);
	UClass* Z_Construct_UClass_UUGCRegistry_NoRegister()
	{
		return UUGCRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UUGCRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UGCPackages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UGCPackages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UGCPackages;
		static const UECodeGen_Private::FClassPropertyParams NewProp_RegisteredOverrides_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_RegisteredOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUGCRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUGCRegistry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage, "ApplyAllOverridesInPackage" }, // 1333289074
		{ &Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass, "ApplyOverridesForActorClass" }, // 4263276361
		{ &Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass, "ClearOverrideForClass" }, // 3420571335
		{ &Z_Construct_UFunction_UUGCRegistry_FindUGCPackages, "FindUGCPackages" }, // 1211745714
		{ &Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage, "GetActorClassesWithReplacementActorComponentsInPackage" }, // 139546515
		{ &Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage, "GetAllClassesInPackage" }, // 3046262020
		{ &Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage, "GetMapsInPackage" }, // 1099171157
		{ &Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass, "GetOverrideForActorClass" }, // 3311133190
		{ &Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass, "RegisterOverrideForClass" }, // 3292546912
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCRegistry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UGCRegistry.h" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages_Inner = { "UGCPackages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUGCPackage, METADATA_PARAMS(nullptr, 0) }; // 3557184407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages_MetaData[] = {
		{ "Category", "SimpleUGC" },
		{ "Comment", "// This is our list of UGC packages. Populated by FindUGCPackages()\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "This is our list of UGC packages. Populated by FindUGCPackages()" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages = { "UGCPackages", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUGCRegistry, UGCPackages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages_MetaData)) }; // 3557184407
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_ValueProp = { "RegisteredOverrides", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_Key_KeyProp = { "RegisteredOverrides_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_MetaData[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
		{ "Comment", "/*Override*/" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "Override" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides = { "RegisteredOverrides", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUGCRegistry, RegisteredOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGCRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUGCRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGCRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUGCRegistry_Statics::ClassParams = {
		&UUGCRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUGCRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUGCRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUGCRegistry()
	{
		if (!Z_Registration_Info_UClass_UUGCRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGCRegistry.OuterSingleton, Z_Construct_UClass_UUGCRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUGCRegistry.OuterSingleton;
	}
	template<> SIMPLEUGC_API UClass* StaticClass<UUGCRegistry>()
	{
		return UUGCRegistry::StaticClass();
	}
	UUGCRegistry::UUGCRegistry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUGCRegistry);
	UUGCRegistry::~UUGCRegistry() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_Statics::ScriptStructInfo[] = {
		{ FUGCPackage::StaticStruct, Z_Construct_UScriptStruct_FUGCPackage_Statics::NewStructOps, TEXT("UGCPackage"), &Z_Registration_Info_UScriptStruct_UGCPackage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUGCPackage), 3557184407U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUGCRegistry, UUGCRegistry::StaticClass, TEXT("UUGCRegistry"), &Z_Registration_Info_UClass_UUGCRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGCRegistry), 2801722871U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_3648331123(TEXT("/Script/SimpleUGC"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
