// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshSpatialStreamingSourceComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshSpatialStreamingSourceComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
REALTIMEMESHSPATIAL_API UClass* Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent();
REALTIMEMESHSPATIAL_API UClass* Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_NoRegister();
REALTIMEMESHSPATIAL_API UEnum* Z_Construct_UEnum_RealtimeMeshSpatial_ERealtimeMeshStreamingSourcePriority();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshSpatial();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URealtimeMeshSpatialStreamingSourceComponent Function DisableStreamingSource 
struct Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_DisableStreamingSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Disable the component */" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingSourceComponent.h" },
		{ "ToolTip", "Disable the component" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableStreamingSource constinit property declarations ****************
// ********** End Function DisableStreamingSource constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_DisableStreamingSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent, nullptr, "DisableStreamingSource", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_DisableStreamingSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_DisableStreamingSource_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_DisableStreamingSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_DisableStreamingSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSpatialStreamingSourceComponent::execDisableStreamingSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableStreamingSource();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSpatialStreamingSourceComponent Function DisableStreamingSource 

// ********** Begin Class URealtimeMeshSpatialStreamingSourceComponent Function EnableStreamingSource 
struct Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_EnableStreamingSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Enable the component */" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingSourceComponent.h" },
		{ "ToolTip", "Enable the component" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableStreamingSource constinit property declarations *****************
// ********** End Function EnableStreamingSource constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_EnableStreamingSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent, nullptr, "EnableStreamingSource", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_EnableStreamingSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_EnableStreamingSource_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_EnableStreamingSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_EnableStreamingSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSpatialStreamingSourceComponent::execEnableStreamingSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableStreamingSource();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSpatialStreamingSourceComponent Function EnableStreamingSource 

// ********** Begin Class URealtimeMeshSpatialStreamingSourceComponent Function IsStreamingCompleted 
struct Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingCompleted_Statics
{
	struct RealtimeMeshSpatialStreamingSourceComponent_eventIsStreamingCompleted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Returns true if streaming is completed for this streaming source component. */" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingSourceComponent.h" },
		{ "ToolTip", "Returns true if streaming is completed for this streaming source component." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsStreamingCompleted constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsStreamingCompleted constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsStreamingCompleted Property Definitions *****************************
void Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RealtimeMeshSpatialStreamingSourceComponent_eventIsStreamingCompleted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSpatialStreamingSourceComponent_eventIsStreamingCompleted_Parms), &Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingCompleted_Statics::PropPointers) < 2048);
// ********** End Function IsStreamingCompleted Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent, nullptr, "IsStreamingCompleted", 	Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingCompleted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingCompleted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingCompleted_Statics::RealtimeMeshSpatialStreamingSourceComponent_eventIsStreamingCompleted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingCompleted_Statics::RealtimeMeshSpatialStreamingSourceComponent_eventIsStreamingCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSpatialStreamingSourceComponent::execIsStreamingCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStreamingCompleted();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSpatialStreamingSourceComponent Function IsStreamingCompleted *

// ********** Begin Class URealtimeMeshSpatialStreamingSourceComponent Function IsStreamingSourceEnabled 
struct Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingSourceEnabled_Statics
{
	struct RealtimeMeshSpatialStreamingSourceComponent_eventIsStreamingSourceEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Returns true if the component is active. */" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingSourceComponent.h" },
		{ "ToolTip", "Returns true if the component is active." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsStreamingSourceEnabled constinit property declarations **************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsStreamingSourceEnabled constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsStreamingSourceEnabled Property Definitions *************************
void Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingSourceEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RealtimeMeshSpatialStreamingSourceComponent_eventIsStreamingSourceEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingSourceEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSpatialStreamingSourceComponent_eventIsStreamingSourceEnabled_Parms), &Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingSourceEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingSourceEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingSourceEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingSourceEnabled_Statics::PropPointers) < 2048);
// ********** End Function IsStreamingSourceEnabled Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingSourceEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent, nullptr, "IsStreamingSourceEnabled", 	Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingSourceEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingSourceEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingSourceEnabled_Statics::RealtimeMeshSpatialStreamingSourceComponent_eventIsStreamingSourceEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingSourceEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingSourceEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingSourceEnabled_Statics::RealtimeMeshSpatialStreamingSourceComponent_eventIsStreamingSourceEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingSourceEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingSourceEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSpatialStreamingSourceComponent::execIsStreamingSourceEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStreamingSourceEnabled();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSpatialStreamingSourceComponent Function IsStreamingSourceEnabled 

// ********** Begin Class URealtimeMeshSpatialStreamingSourceComponent *****************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingSourceComponent;
UClass* URealtimeMeshSpatialStreamingSourceComponent::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshSpatialStreamingSourceComponent;
	if (!Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingSourceComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshSpatialStreamingSourceComponent"),
			Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingSourceComponent.InnerSingleton,
			StaticRegisterNativesURealtimeMeshSpatialStreamingSourceComponent,
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
	return Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingSourceComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_NoRegister()
{
	return URealtimeMeshSpatialStreamingSourceComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Tags Sockets ComponentTick ComponentReplication Activation Cooking Events AssetUserData Collision" },
		{ "IncludePath", "RealtimeMeshSpatialStreamingSourceComponent.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingSourceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Color used for debugging. */" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingSourceComponent.h" },
		{ "ToolTip", "Color used for debugging." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/* Radius for the streaming source */" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingSourceComponent.h" },
		{ "ToolTip", "Radius for the streaming source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Streaming" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingSourceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStreamingSourceEnabled_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Whether this component is enabled or not */" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingSourceComponent.h" },
		{ "ToolTip", "Whether this component is enabled or not" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshSpatialStreamingSourceComponent constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
	static void NewProp_bStreamingSourceEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreamingSourceEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URealtimeMeshSpatialStreamingSourceComponent constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DisableStreamingSource"), .Pointer = &URealtimeMeshSpatialStreamingSourceComponent::execDisableStreamingSource },
		{ .NameUTF8 = UTF8TEXT("EnableStreamingSource"), .Pointer = &URealtimeMeshSpatialStreamingSourceComponent::execEnableStreamingSource },
		{ .NameUTF8 = UTF8TEXT("IsStreamingCompleted"), .Pointer = &URealtimeMeshSpatialStreamingSourceComponent::execIsStreamingCompleted },
		{ .NameUTF8 = UTF8TEXT("IsStreamingSourceEnabled"), .Pointer = &URealtimeMeshSpatialStreamingSourceComponent::execIsStreamingSourceEnabled },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_DisableStreamingSource, "DisableStreamingSource" }, // 4069700416
		{ &Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_EnableStreamingSource, "EnableStreamingSource" }, // 711154734
		{ &Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingCompleted, "IsStreamingCompleted" }, // 1817608090
		{ &Z_Construct_UFunction_URealtimeMeshSpatialStreamingSourceComponent_IsStreamingSourceEnabled, "IsStreamingSourceEnabled" }, // 3861650996
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshSpatialStreamingSourceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics

// ********** Begin Class URealtimeMeshSpatialStreamingSourceComponent Property Definitions ********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URealtimeMeshSpatialStreamingSourceComponent, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URealtimeMeshSpatialStreamingSourceComponent, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URealtimeMeshSpatialStreamingSourceComponent, Priority), Z_Construct_UEnum_RealtimeMeshSpatial_ERealtimeMeshStreamingSourcePriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) }; // 1287833486
void Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::NewProp_bStreamingSourceEnabled_SetBit(void* Obj)
{
	((URealtimeMeshSpatialStreamingSourceComponent*)Obj)->bStreamingSourceEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::NewProp_bStreamingSourceEnabled = { "bStreamingSourceEnabled", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URealtimeMeshSpatialStreamingSourceComponent), &Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::NewProp_bStreamingSourceEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStreamingSourceEnabled_MetaData), NewProp_bStreamingSourceEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::NewProp_DebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::NewProp_Priority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::NewProp_bStreamingSourceEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::PropPointers) < 2048);
// ********** End Class URealtimeMeshSpatialStreamingSourceComponent Property Definitions **********
UObject* (*const Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshSpatial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::ClassParams = {
	&URealtimeMeshSpatialStreamingSourceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::Class_MetaDataParams)
};
void URealtimeMeshSpatialStreamingSourceComponent::StaticRegisterNativesURealtimeMeshSpatialStreamingSourceComponent()
{
	UClass* Class = URealtimeMeshSpatialStreamingSourceComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingSourceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingSourceComponent.OuterSingleton, Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingSourceComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshSpatialStreamingSourceComponent);
URealtimeMeshSpatialStreamingSourceComponent::~URealtimeMeshSpatialStreamingSourceComponent() {}
// ********** End Class URealtimeMeshSpatialStreamingSourceComponent *******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingSourceComponent_h__Script_RealtimeMeshSpatial_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshSpatialStreamingSourceComponent, URealtimeMeshSpatialStreamingSourceComponent::StaticClass, TEXT("URealtimeMeshSpatialStreamingSourceComponent"), &Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingSourceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshSpatialStreamingSourceComponent), 1351977900U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingSourceComponent_h__Script_RealtimeMeshSpatial_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingSourceComponent_h__Script_RealtimeMeshSpatial_4121407470{
	TEXT("/Script/RealtimeMeshSpatial"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingSourceComponent_h__Script_RealtimeMeshSpatial_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingSourceComponent_h__Script_RealtimeMeshSpatial_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
