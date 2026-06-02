// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshComponent.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMesh_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshComponent();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshComponent();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URealtimeMeshComponent Function GetRealtimeMesh **************************
struct Z_Construct_UFunction_URealtimeMeshComponent_GetRealtimeMesh_Statics
{
	struct RealtimeMeshComponent_eventGetRealtimeMesh_Parms
	{
		URealtimeMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMeshComponent" },
		{ "Comment", "/** Clears the geometry for ALL collision only sections */" },
		{ "ModuleRelativePath", "Public/RealtimeMeshComponent.h" },
		{ "ToolTip", "Clears the geometry for ALL collision only sections" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRealtimeMesh constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRealtimeMesh constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRealtimeMesh Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshComponent_GetRealtimeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshComponent_eventGetRealtimeMesh_Parms, ReturnValue), Z_Construct_UClass_URealtimeMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshComponent_GetRealtimeMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshComponent_GetRealtimeMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshComponent_GetRealtimeMesh_Statics::PropPointers) < 2048);
// ********** End Function GetRealtimeMesh Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshComponent_GetRealtimeMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshComponent, nullptr, "GetRealtimeMesh", 	Z_Construct_UFunction_URealtimeMeshComponent_GetRealtimeMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshComponent_GetRealtimeMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshComponent_GetRealtimeMesh_Statics::RealtimeMeshComponent_eventGetRealtimeMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshComponent_GetRealtimeMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshComponent_GetRealtimeMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshComponent_GetRealtimeMesh_Statics::RealtimeMeshComponent_eventGetRealtimeMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshComponent_GetRealtimeMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshComponent_GetRealtimeMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshComponent::execGetRealtimeMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMesh**)Z_Param__Result=P_THIS->GetRealtimeMesh();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshComponent Function GetRealtimeMesh ****************************

// ********** Begin Class URealtimeMeshComponent Function InitializeRealtimeMesh *******************
struct Z_Construct_UFunction_URealtimeMeshComponent_InitializeRealtimeMesh_Statics
{
	struct RealtimeMeshComponent_eventInitializeRealtimeMesh_Parms
	{
		TSubclassOf<URealtimeMesh> MeshClass;
		URealtimeMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMeshComponent" },
		{ "DeterminesOutputType", "MeshClass" },
		{ "ModuleRelativePath", "Public/RealtimeMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshClass_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeRealtimeMesh constinit property declarations ****************
	static const UECodeGen_Private::FClassPropertyParams NewProp_MeshClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeRealtimeMesh constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeRealtimeMesh Property Definitions ***************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URealtimeMeshComponent_InitializeRealtimeMesh_Statics::NewProp_MeshClass = { "MeshClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshComponent_eventInitializeRealtimeMesh_Parms, MeshClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_URealtimeMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshClass_MetaData), NewProp_MeshClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshComponent_InitializeRealtimeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshComponent_eventInitializeRealtimeMesh_Parms, ReturnValue), Z_Construct_UClass_URealtimeMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshComponent_InitializeRealtimeMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshComponent_InitializeRealtimeMesh_Statics::NewProp_MeshClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshComponent_InitializeRealtimeMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshComponent_InitializeRealtimeMesh_Statics::PropPointers) < 2048);
// ********** End Function InitializeRealtimeMesh Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshComponent_InitializeRealtimeMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshComponent, nullptr, "InitializeRealtimeMesh", 	Z_Construct_UFunction_URealtimeMeshComponent_InitializeRealtimeMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshComponent_InitializeRealtimeMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshComponent_InitializeRealtimeMesh_Statics::RealtimeMeshComponent_eventInitializeRealtimeMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshComponent_InitializeRealtimeMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshComponent_InitializeRealtimeMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshComponent_InitializeRealtimeMesh_Statics::RealtimeMeshComponent_eventInitializeRealtimeMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshComponent_InitializeRealtimeMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshComponent_InitializeRealtimeMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshComponent::execInitializeRealtimeMesh)
{
	P_GET_OBJECT(UClass,Z_Param_MeshClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMesh**)Z_Param__Result=P_THIS->InitializeRealtimeMesh(Z_Param_MeshClass);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshComponent Function InitializeRealtimeMesh *********************

// ********** Begin Class URealtimeMeshComponent Function OnRep_RealtimeMesh ***********************
struct Z_Construct_UFunction_URealtimeMeshComponent_OnRep_RealtimeMesh_Statics
{
	struct RealtimeMeshComponent_eventOnRep_RealtimeMesh_Parms
	{
		URealtimeMesh* OldRealtimeMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealtimeMeshComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_RealtimeMesh constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldRealtimeMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_RealtimeMesh constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_RealtimeMesh Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshComponent_OnRep_RealtimeMesh_Statics::NewProp_OldRealtimeMesh = { "OldRealtimeMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshComponent_eventOnRep_RealtimeMesh_Parms, OldRealtimeMesh), Z_Construct_UClass_URealtimeMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshComponent_OnRep_RealtimeMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshComponent_OnRep_RealtimeMesh_Statics::NewProp_OldRealtimeMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshComponent_OnRep_RealtimeMesh_Statics::PropPointers) < 2048);
// ********** End Function OnRep_RealtimeMesh Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshComponent_OnRep_RealtimeMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshComponent, nullptr, "OnRep_RealtimeMesh", 	Z_Construct_UFunction_URealtimeMeshComponent_OnRep_RealtimeMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshComponent_OnRep_RealtimeMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshComponent_OnRep_RealtimeMesh_Statics::RealtimeMeshComponent_eventOnRep_RealtimeMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshComponent_OnRep_RealtimeMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshComponent_OnRep_RealtimeMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshComponent_OnRep_RealtimeMesh_Statics::RealtimeMeshComponent_eventOnRep_RealtimeMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshComponent_OnRep_RealtimeMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshComponent_OnRep_RealtimeMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshComponent::execOnRep_RealtimeMesh)
{
	P_GET_OBJECT(URealtimeMesh,Z_Param_OldRealtimeMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RealtimeMesh(Z_Param_OldRealtimeMesh);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshComponent Function OnRep_RealtimeMesh *************************

// ********** Begin Class URealtimeMeshComponent Function SetRealtimeMesh **************************
struct Z_Construct_UFunction_URealtimeMeshComponent_SetRealtimeMesh_Statics
{
	struct RealtimeMeshComponent_eventSetRealtimeMesh_Parms
	{
		URealtimeMesh* NewMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|RealtimeMeshComponent" },
		{ "ModuleRelativePath", "Public/RealtimeMeshComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRealtimeMesh constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRealtimeMesh constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRealtimeMesh Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshComponent_SetRealtimeMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshComponent_eventSetRealtimeMesh_Parms, NewMesh), Z_Construct_UClass_URealtimeMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshComponent_SetRealtimeMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshComponent_SetRealtimeMesh_Statics::NewProp_NewMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshComponent_SetRealtimeMesh_Statics::PropPointers) < 2048);
// ********** End Function SetRealtimeMesh Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshComponent_SetRealtimeMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshComponent, nullptr, "SetRealtimeMesh", 	Z_Construct_UFunction_URealtimeMeshComponent_SetRealtimeMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshComponent_SetRealtimeMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshComponent_SetRealtimeMesh_Statics::RealtimeMeshComponent_eventSetRealtimeMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshComponent_SetRealtimeMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshComponent_SetRealtimeMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshComponent_SetRealtimeMesh_Statics::RealtimeMeshComponent_eventSetRealtimeMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshComponent_SetRealtimeMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshComponent_SetRealtimeMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshComponent::execSetRealtimeMesh)
{
	P_GET_OBJECT(URealtimeMesh,Z_Param_NewMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRealtimeMesh(Z_Param_NewMesh);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshComponent Function SetRealtimeMesh ****************************

// ********** Begin Class URealtimeMeshComponent ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshComponent;
UClass* URealtimeMeshComponent::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshComponent;
	if (!Z_Registration_Info_UClass_URealtimeMeshComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshComponent"),
			Z_Registration_Info_UClass_URealtimeMeshComponent.InnerSingleton,
			StaticRegisterNativesURealtimeMeshComponent,
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
	return Z_Registration_Info_UClass_URealtimeMeshComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshComponent_NoRegister()
{
	return URealtimeMeshComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering Common" },
		{ "Comment", "/**\n*\x09""Component that allows you to specify custom triangle mesh geometry for rendering and collision.\n*/" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "RealtimeMeshComponent.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshComponent.h" },
		{ "ToolTip", "Component that allows you to specify custom triangle mesh geometry for rendering and collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealtimeMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RealtimeMesh" },
		{ "DisplayName", "RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshComponent.h" },
		{ "ReplicatedUsing", "OnRep_RealtimeMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeepMomentumOnCollisionUpdate_MetaData[] = {
		{ "Category", "RealtimeMesh" },
		{ "ModuleRelativePath", "Public/RealtimeMeshComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshComponent constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RealtimeMesh;
	static void NewProp_KeepMomentumOnCollisionUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_KeepMomentumOnCollisionUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URealtimeMeshComponent constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetRealtimeMesh"), .Pointer = &URealtimeMeshComponent::execGetRealtimeMesh },
		{ .NameUTF8 = UTF8TEXT("InitializeRealtimeMesh"), .Pointer = &URealtimeMeshComponent::execInitializeRealtimeMesh },
		{ .NameUTF8 = UTF8TEXT("OnRep_RealtimeMesh"), .Pointer = &URealtimeMeshComponent::execOnRep_RealtimeMesh },
		{ .NameUTF8 = UTF8TEXT("SetRealtimeMesh"), .Pointer = &URealtimeMeshComponent::execSetRealtimeMesh },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshComponent_GetRealtimeMesh, "GetRealtimeMesh" }, // 636913292
		{ &Z_Construct_UFunction_URealtimeMeshComponent_InitializeRealtimeMesh, "InitializeRealtimeMesh" }, // 2866536880
		{ &Z_Construct_UFunction_URealtimeMeshComponent_OnRep_RealtimeMesh, "OnRep_RealtimeMesh" }, // 3568336726
		{ &Z_Construct_UFunction_URealtimeMeshComponent_SetRealtimeMesh, "SetRealtimeMesh" }, // 1180727369
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshComponent_Statics

// ********** Begin Class URealtimeMeshComponent Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URealtimeMeshComponent_Statics::NewProp_RealtimeMesh = { "RealtimeMesh", nullptr, (EPropertyFlags)0x0144000000000035, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URealtimeMeshComponent, RealtimeMesh), Z_Construct_UClass_URealtimeMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealtimeMesh_MetaData), NewProp_RealtimeMesh_MetaData) };
void Z_Construct_UClass_URealtimeMeshComponent_Statics::NewProp_KeepMomentumOnCollisionUpdate_SetBit(void* Obj)
{
	((URealtimeMeshComponent*)Obj)->KeepMomentumOnCollisionUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URealtimeMeshComponent_Statics::NewProp_KeepMomentumOnCollisionUpdate = { "KeepMomentumOnCollisionUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URealtimeMeshComponent), &Z_Construct_UClass_URealtimeMeshComponent_Statics::NewProp_KeepMomentumOnCollisionUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeepMomentumOnCollisionUpdate_MetaData), NewProp_KeepMomentumOnCollisionUpdate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealtimeMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshComponent_Statics::NewProp_RealtimeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshComponent_Statics::NewProp_KeepMomentumOnCollisionUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshComponent_Statics::PropPointers) < 2048);
// ********** End Class URealtimeMeshComponent Property Definitions ********************************
UObject* (*const Z_Construct_UClass_URealtimeMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshComponent_Statics::ClassParams = {
	&URealtimeMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URealtimeMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshComponent_Statics::Class_MetaDataParams)
};
void URealtimeMeshComponent::StaticRegisterNativesURealtimeMeshComponent()
{
	UClass* Class = URealtimeMeshComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshComponent()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshComponent.OuterSingleton, Z_Construct_UClass_URealtimeMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void URealtimeMeshComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_RealtimeMesh(TEXT("RealtimeMesh"));
	const bool bIsValid = true
		&& Name_RealtimeMesh == ClassReps[(int32)ENetFields_Private::RealtimeMesh].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URealtimeMeshComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshComponent);
URealtimeMeshComponent::~URealtimeMeshComponent() {}
// ********** End Class URealtimeMeshComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshComponent_h__Script_RealtimeMeshComponent_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshComponent, URealtimeMeshComponent::StaticClass, TEXT("URealtimeMeshComponent"), &Z_Registration_Info_UClass_URealtimeMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshComponent), 237659061U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshComponent_h__Script_RealtimeMeshComponent_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshComponent_h__Script_RealtimeMeshComponent_700257406{
	TEXT("/Script/RealtimeMeshComponent"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshComponent_h__Script_RealtimeMeshComponent_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshComponent_h__Script_RealtimeMeshComponent_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
