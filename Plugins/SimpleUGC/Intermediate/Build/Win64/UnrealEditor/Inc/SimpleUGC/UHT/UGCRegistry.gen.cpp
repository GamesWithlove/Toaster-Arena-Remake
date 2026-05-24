// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UGCRegistry.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUGCRegistry() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCRegistry();
SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCRegistry_NoRegister();
SIMPLEUGC_API UScriptStruct* Z_Construct_UScriptStruct_FUGCPackage();
UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FUGCPackage *******************************************************
struct Z_Construct_UScriptStruct_FUGCPackage_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FUGCPackage); }
	static inline consteval int16 GetStructAlignment() { return alignof(FUGCPackage); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[] = {
		{ "Category", "SimpleUGC" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineVersion_MetaData[] = {
		{ "Category", "SimpleUGC" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[] = {
		{ "Category", "SimpleUGC" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "SimpleUGC" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FUGCPackage constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EngineVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Author;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FUGCPackage constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUGCPackage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FUGCPackage_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUGCPackage;
class UScriptStruct* FUGCPackage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUGCPackage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUGCPackage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUGCPackage, (UObject*)Z_Construct_UPackage__Script_SimpleUGC(), TEXT("UGCPackage"));
	}
	return Z_Registration_Info_UScriptStruct_FUGCPackage.OuterSingleton;
	}

// ********** Begin ScriptStruct FUGCPackage Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUGCPackage, PackagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackagePath_MetaData), NewProp_PackagePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_EngineVersion = { "EngineVersion", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUGCPackage, EngineVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineVersion_MetaData), NewProp_EngineVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUGCPackage, Author), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Author_MetaData), NewProp_Author_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUGCPackage, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUGCPackage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_PackagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_EngineVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Author,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCPackage_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FUGCPackage Property Definitions ************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUGCPackage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
	nullptr,
	&NewStructOps,
	"UGCPackage",
	Z_Construct_UScriptStruct_FUGCPackage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCPackage_Statics::PropPointers),
	sizeof(FUGCPackage),
	alignof(FUGCPackage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCPackage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUGCPackage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUGCPackage()
{
	if (!Z_Registration_Info_UScriptStruct_FUGCPackage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUGCPackage.InnerSingleton, Z_Construct_UScriptStruct_FUGCPackage_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FUGCPackage.InnerSingleton);
}
// ********** End ScriptStruct FUGCPackage *********************************************************

// ********** Begin Class UUGCRegistry Function ApplyAllOverridesInPackage *************************
struct Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics
{
	struct UGCRegistry_eventApplyAllOverridesInPackage_Parms
	{
		FUGCPackage Package;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Applies entire package of Actor Replacements. This is common for applying an entire class-based \"Mod.\"\n" },
#endif
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies entire package of Actor Replacements. This is common for applying an entire class-based \"Mod.\"" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyAllOverridesInPackage constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Package;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyAllOverridesInPackage constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyAllOverridesInPackage Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGCRegistry_eventApplyAllOverridesInPackage_Parms, Package), Z_Construct_UScriptStruct_FUGCPackage, METADATA_PARAMS(0, nullptr) }; // 2443254313
void Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGCRegistry_eventApplyAllOverridesInPackage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGCRegistry_eventApplyAllOverridesInPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_Package,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::PropPointers) < 2048);
// ********** End Function ApplyAllOverridesInPackage Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "ApplyAllOverridesInPackage", 	Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::UGCRegistry_eventApplyAllOverridesInPackage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::UGCRegistry_eventApplyAllOverridesInPackage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGCRegistry::execApplyAllOverridesInPackage)
{
	P_GET_STRUCT(FUGCPackage,Z_Param_Package);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyAllOverridesInPackage(Z_Param_Package);
	P_NATIVE_END;
}
// ********** End Class UUGCRegistry Function ApplyAllOverridesInPackage ***************************

// ********** Begin Class UUGCRegistry Function ApplyOverridesForActorClass ************************
struct Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics
{
	struct UGCRegistry_eventApplyOverridesForActorClass_Parms
	{
		TSubclassOf<AActor> ActorClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Applies an override for a specific Class. Find valid classes to use here by calling GetActorClassesWithReplacementActorComponentsInPackage\n" },
#endif
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies an override for a specific Class. Find valid classes to use here by calling GetActorClassesWithReplacementActorComponentsInPackage" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyOverridesForActorClass constinit property declarations ***********
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyOverridesForActorClass constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyOverridesForActorClass Property Definitions **********************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGCRegistry_eventApplyOverridesForActorClass_Parms, ActorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGCRegistry_eventApplyOverridesForActorClass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGCRegistry_eventApplyOverridesForActorClass_Parms), &Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::PropPointers) < 2048);
// ********** End Function ApplyOverridesForActorClass Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "ApplyOverridesForActorClass", 	Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::UGCRegistry_eventApplyOverridesForActorClass_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::UGCRegistry_eventApplyOverridesForActorClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGCRegistry::execApplyOverridesForActorClass)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyOverridesForActorClass(Z_Param_ActorClass);
	P_NATIVE_END;
}
// ********** End Class UUGCRegistry Function ApplyOverridesForActorClass **************************

// ********** Begin Class UUGCRegistry Function ClearOverrideForClass ******************************
struct Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics
{
	struct UGCRegistry_eventClearOverrideForClass_Parms
	{
		TSubclassOf<AActor> ActorClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to clear the override from the registry. To clear all, loop through RegisterredOverrides, break the struct and run the Origin into this function.\n" },
#endif
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to clear the override from the registry. To clear all, loop through RegisterredOverrides, break the struct and run the Origin into this function." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ClearOverrideForClass constinit property declarations *****************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearOverrideForClass constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearOverrideForClass Property Definitions ****************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGCRegistry_eventClearOverrideForClass_Parms, ActorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::NewProp_ActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::PropPointers) < 2048);
// ********** End Function ClearOverrideForClass Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "ClearOverrideForClass", 	Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::UGCRegistry_eventClearOverrideForClass_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::UGCRegistry_eventClearOverrideForClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGCRegistry::execClearOverrideForClass)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearOverrideForClass(Z_Param_ActorClass);
	P_NATIVE_END;
}
// ********** End Class UUGCRegistry Function ClearOverrideForClass ********************************

// ********** Begin Class UUGCRegistry Function FindUGCPackages ************************************
struct Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics
{
	struct UGCRegistry_eventFindUGCPackages_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This populates UGCPackages based on what is found in UGC plugin files. If you're mounting new /Plugin paks at runtime. Expose this to Blueprints.\n" },
#endif
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This populates UGCPackages based on what is found in UGC plugin files. If you're mounting new /Plugin paks at runtime. Expose this to Blueprints." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FindUGCPackages constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindUGCPackages constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindUGCPackages Property Definitions **********************************
void Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGCRegistry_eventFindUGCPackages_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGCRegistry_eventFindUGCPackages_Parms), &Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::PropPointers) < 2048);
// ********** End Function FindUGCPackages Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "FindUGCPackages", 	Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::UGCRegistry_eventFindUGCPackages_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::UGCRegistry_eventFindUGCPackages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGCRegistry_FindUGCPackages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGCRegistry::execFindUGCPackages)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindUGCPackages();
	P_NATIVE_END;
}
// ********** End Class UUGCRegistry Function FindUGCPackages **************************************

// ********** Begin Class UUGCRegistry Function GetActorClassesWithReplacementActorComponentsInPackage 
struct Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics
{
	struct UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms
	{
		FUGCPackage Package;
		TArray<TSubclassOf<AActor>> ActorClasses;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns All Actor Classes In Package that have the ability to replace a a base class. Use this when you want to register only specific class overrides from a UGC package.\n" },
#endif
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns All Actor Classes In Package that have the ability to replace a a base class. Use this when you want to register only specific class overrides from a UGC package." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetActorClassesWithReplacementActorComponentsInPackage constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Package;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorClasses;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActorClassesWithReplacementActorComponentsInPackage constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActorClassesWithReplacementActorComponentsInPackage Property Definitions 
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms, Package), Z_Construct_UScriptStruct_FUGCPackage, METADATA_PARAMS(0, nullptr) }; // 2443254313
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ActorClasses_Inner = { "ActorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ActorClasses = { "ActorClasses", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms, ActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_Package,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ActorClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ActorClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::PropPointers) < 2048);
// ********** End Function GetActorClassesWithReplacementActorComponentsInPackage Property Definitions 
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetActorClassesWithReplacementActorComponentsInPackage", 	Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGCRegistry::execGetActorClassesWithReplacementActorComponentsInPackage)
{
	P_GET_STRUCT(FUGCPackage,Z_Param_Package);
	P_GET_TARRAY_REF(TSubclassOf<AActor>,Z_Param_Out_ActorClasses);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetActorClassesWithReplacementActorComponentsInPackage(Z_Param_Package,Z_Param_Out_ActorClasses);
	P_NATIVE_END;
}
// ********** End Class UUGCRegistry Function GetActorClassesWithReplacementActorComponentsInPackage 

// ********** Begin Class UUGCRegistry Function GetAllClassesInPackage *****************************
struct Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics
{
	struct UGCRegistry_eventGetAllClassesInPackage_Parms
	{
		FUGCPackage Package;
		TArray<UClass*> Classes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns All Classes in a UGC package.\n" },
#endif
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns All Classes in a UGC package." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllClassesInPackage constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Package;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Classes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Classes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllClassesInPackage constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllClassesInPackage Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGCRegistry_eventGetAllClassesInPackage_Parms, Package), Z_Construct_UScriptStruct_FUGCPackage, METADATA_PARAMS(0, nullptr) }; // 2443254313
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Classes_Inner = { "Classes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Classes = { "Classes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGCRegistry_eventGetAllClassesInPackage_Parms, Classes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGCRegistry_eventGetAllClassesInPackage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGCRegistry_eventGetAllClassesInPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Package,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Classes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Classes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::PropPointers) < 2048);
// ********** End Function GetAllClassesInPackage Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetAllClassesInPackage", 	Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::UGCRegistry_eventGetAllClassesInPackage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::UGCRegistry_eventGetAllClassesInPackage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGCRegistry Function GetAllClassesInPackage *******************************

// ********** Begin Class UUGCRegistry Function GetMapsInPackage ***********************************
struct Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics
{
	struct UGCRegistry_eventGetMapsInPackage_Parms
	{
		FUGCPackage Package;
		TArray<FName> Maps;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns All Maps in a UGC package.\n" },
#endif
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns All Maps in a UGC package." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetMapsInPackage constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Package;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Maps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Maps;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMapsInPackage constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMapsInPackage Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGCRegistry_eventGetMapsInPackage_Parms, Package), Z_Construct_UScriptStruct_FUGCPackage, METADATA_PARAMS(0, nullptr) }; // 2443254313
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Maps_Inner = { "Maps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Maps = { "Maps", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGCRegistry_eventGetMapsInPackage_Parms, Maps), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UGCRegistry_eventGetMapsInPackage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGCRegistry_eventGetMapsInPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Package,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Maps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Maps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::PropPointers) < 2048);
// ********** End Function GetMapsInPackage Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetMapsInPackage", 	Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::UGCRegistry_eventGetMapsInPackage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::UGCRegistry_eventGetMapsInPackage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGCRegistry Function GetMapsInPackage *************************************

// ********** Begin Class UUGCRegistry Function GetOverrideForActorClass ***************************
struct Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics
{
	struct UGCRegistry_eventGetOverrideForActorClass_Parms
	{
		TSubclassOf<AActor> ActorClass;
		TSubclassOf<AActor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used in gameplay to look up what class is actually supposed to be spawned\n" },
#endif
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used in gameplay to look up what class is actually supposed to be spawned" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetOverrideForActorClass constinit property declarations **************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOverrideForActorClass constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOverrideForActorClass Property Definitions *************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGCRegistry_eventGetOverrideForActorClass_Parms, ActorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGCRegistry_eventGetOverrideForActorClass_Parms, ReturnValue), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::PropPointers) < 2048);
// ********** End Function GetOverrideForActorClass Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetOverrideForActorClass", 	Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::UGCRegistry_eventGetOverrideForActorClass_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::UGCRegistry_eventGetOverrideForActorClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUGCRegistry::execGetOverrideForActorClass)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<AActor>*)Z_Param__Result=P_THIS->GetOverrideForActorClass(Z_Param_ActorClass);
	P_NATIVE_END;
}
// ********** End Class UUGCRegistry Function GetOverrideForActorClass *****************************

// ********** Begin Class UUGCRegistry Function RegisterOverrideForClass ***************************
struct Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics
{
	struct UGCRegistry_eventRegisterOverrideForClass_Parms
	{
		TSubclassOf<AActor> ClassToOverride;
		TSubclassOf<AActor> OverrideClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A manual override assignment. Not reccommended for mod packages, but useful for big UGC drops (100 UGuns pack, etc)\n" },
#endif
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A manual override assignment. Not reccommended for mod packages, but useful for big UGC drops (100 UGuns pack, etc)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterOverrideForClass constinit property declarations **************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassToOverride;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverrideClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterOverrideForClass constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterOverrideForClass Property Definitions *************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::NewProp_ClassToOverride = { "ClassToOverride", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGCRegistry_eventRegisterOverrideForClass_Parms, ClassToOverride), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::NewProp_OverrideClass = { "OverrideClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGCRegistry_eventRegisterOverrideForClass_Parms, OverrideClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::NewProp_ClassToOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::NewProp_OverrideClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::PropPointers) < 2048);
// ********** End Function RegisterOverrideForClass Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "RegisterOverrideForClass", 	Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::UGCRegistry_eventRegisterOverrideForClass_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::UGCRegistry_eventRegisterOverrideForClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UUGCRegistry Function RegisterOverrideForClass *****************************

// ********** Begin Class UUGCRegistry *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUGCRegistry;
UClass* UUGCRegistry::GetPrivateStaticClass()
{
	using TClass = UUGCRegistry;
	if (!Z_Registration_Info_UClass_UUGCRegistry.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UGCRegistry"),
			Z_Registration_Info_UClass_UUGCRegistry.InnerSingleton,
			StaticRegisterNativesUUGCRegistry,
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
	return Z_Registration_Info_UClass_UUGCRegistry.InnerSingleton;
}
UClass* Z_Construct_UClass_UUGCRegistry_NoRegister()
{
	return UUGCRegistry::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUGCRegistry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UGCRegistry.h" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UGCPackages_MetaData[] = {
		{ "Category", "SimpleUGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is our list of UGC packages. Populated by FindUGCPackages()\n" },
#endif
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is our list of UGC packages. Populated by FindUGCPackages()" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredOverrides_MetaData[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Override*/" },
#endif
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UUGCRegistry constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_UGCPackages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UGCPackages;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RegisteredOverrides_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RegisteredOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUGCRegistry constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyAllOverridesInPackage"), .Pointer = &UUGCRegistry::execApplyAllOverridesInPackage },
		{ .NameUTF8 = UTF8TEXT("ApplyOverridesForActorClass"), .Pointer = &UUGCRegistry::execApplyOverridesForActorClass },
		{ .NameUTF8 = UTF8TEXT("ClearOverrideForClass"), .Pointer = &UUGCRegistry::execClearOverrideForClass },
		{ .NameUTF8 = UTF8TEXT("FindUGCPackages"), .Pointer = &UUGCRegistry::execFindUGCPackages },
		{ .NameUTF8 = UTF8TEXT("GetActorClassesWithReplacementActorComponentsInPackage"), .Pointer = &UUGCRegistry::execGetActorClassesWithReplacementActorComponentsInPackage },
		{ .NameUTF8 = UTF8TEXT("GetAllClassesInPackage"), .Pointer = &UUGCRegistry::execGetAllClassesInPackage },
		{ .NameUTF8 = UTF8TEXT("GetMapsInPackage"), .Pointer = &UUGCRegistry::execGetMapsInPackage },
		{ .NameUTF8 = UTF8TEXT("GetOverrideForActorClass"), .Pointer = &UUGCRegistry::execGetOverrideForActorClass },
		{ .NameUTF8 = UTF8TEXT("RegisterOverrideForClass"), .Pointer = &UUGCRegistry::execRegisterOverrideForClass },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage, "ApplyAllOverridesInPackage" }, // 255837498
		{ &Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass, "ApplyOverridesForActorClass" }, // 2778742704
		{ &Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass, "ClearOverrideForClass" }, // 2058843934
		{ &Z_Construct_UFunction_UUGCRegistry_FindUGCPackages, "FindUGCPackages" }, // 1974767291
		{ &Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage, "GetActorClassesWithReplacementActorComponentsInPackage" }, // 2191451945
		{ &Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage, "GetAllClassesInPackage" }, // 3411877450
		{ &Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage, "GetMapsInPackage" }, // 1122554348
		{ &Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass, "GetOverrideForActorClass" }, // 3936122047
		{ &Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass, "RegisterOverrideForClass" }, // 1787000779
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGCRegistry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUGCRegistry_Statics

// ********** Begin Class UUGCRegistry Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages_Inner = { "UGCPackages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUGCPackage, METADATA_PARAMS(0, nullptr) }; // 2443254313
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages = { "UGCPackages", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGCRegistry, UGCPackages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UGCPackages_MetaData), NewProp_UGCPackages_MetaData) }; // 2443254313
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_ValueProp = { "RegisteredOverrides", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_Key_KeyProp = { "RegisteredOverrides_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides = { "RegisteredOverrides", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGCRegistry, RegisteredOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredOverrides_MetaData), NewProp_RegisteredOverrides_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGCRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::PropPointers) < 2048);
// ********** End Class UUGCRegistry Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UUGCRegistry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::Class_MetaDataParams), Z_Construct_UClass_UUGCRegistry_Statics::Class_MetaDataParams)
};
void UUGCRegistry::StaticRegisterNativesUUGCRegistry()
{
	UClass* Class = UUGCRegistry::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UUGCRegistry_Statics::Funcs));
}
UClass* Z_Construct_UClass_UUGCRegistry()
{
	if (!Z_Registration_Info_UClass_UUGCRegistry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGCRegistry.OuterSingleton, Z_Construct_UClass_UUGCRegistry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUGCRegistry.OuterSingleton;
}
UUGCRegistry::UUGCRegistry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUGCRegistry);
UUGCRegistry::~UUGCRegistry() {}
// ********** End Class UUGCRegistry ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h__Script_SimpleUGC_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUGCPackage::StaticStruct, Z_Construct_UScriptStruct_FUGCPackage_Statics::NewStructOps, TEXT("UGCPackage"),&Z_Registration_Info_UScriptStruct_FUGCPackage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUGCPackage), 2443254313U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUGCRegistry, UUGCRegistry::StaticClass, TEXT("UUGCRegistry"), &Z_Registration_Info_UClass_UUGCRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGCRegistry), 2687235624U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h__Script_SimpleUGC_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h__Script_SimpleUGC_1718907360{
	TEXT("/Script/SimpleUGC"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h__Script_SimpleUGC_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h__Script_SimpleUGC_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h__Script_SimpleUGC_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h__Script_SimpleUGC_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
