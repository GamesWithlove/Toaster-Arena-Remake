// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshCollisionLibrary.h"
#include "Engine/HitResult.h"
#include "RealtimeMeshNoExportTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshCollisionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshCollisionTools();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshCollisionTools_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary_NoRegister();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionConvex();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionMesh();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshComponent();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URealtimeMeshCollisionTools Function CookComplexMesh *********************
struct Z_Construct_UFunction_URealtimeMeshCollisionTools_CookComplexMesh_Statics
{
	struct FRealtimeMeshCollisionMesh
	{
		FName Name;
	};

	struct RealtimeMeshCollisionTools_eventCookComplexMesh_Parms
	{
		FRealtimeMeshCollisionMesh CollisionMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CookComplexMesh constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CookComplexMesh constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CookComplexMesh Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCollisionTools_CookComplexMesh_Statics::NewProp_CollisionMesh = { "CollisionMesh", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCollisionTools_eventCookComplexMesh_Parms, CollisionMesh), Z_Construct_UScriptStruct_FRealtimeMeshCollisionMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshCollisionTools_CookComplexMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCollisionTools_CookComplexMesh_Statics::NewProp_CollisionMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCollisionTools_CookComplexMesh_Statics::PropPointers) < 2048);
// ********** End Function CookComplexMesh Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshCollisionTools_CookComplexMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshCollisionTools, nullptr, "CookComplexMesh", 	Z_Construct_UFunction_URealtimeMeshCollisionTools_CookComplexMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCollisionTools_CookComplexMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshCollisionTools_CookComplexMesh_Statics::RealtimeMeshCollisionTools_eventCookComplexMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCollisionTools_CookComplexMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshCollisionTools_CookComplexMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshCollisionTools_CookComplexMesh_Statics::RealtimeMeshCollisionTools_eventCookComplexMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshCollisionTools_CookComplexMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshCollisionTools_CookComplexMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshCollisionTools::execCookComplexMesh)
{
	P_GET_STRUCT_REF(FRealtimeMeshCollisionMesh,Z_Param_Out_CollisionMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	URealtimeMeshCollisionTools::CookComplexMesh(Z_Param_Out_CollisionMesh);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshCollisionTools Function CookComplexMesh ***********************

// ********** Begin Class URealtimeMeshCollisionTools Function CookConvexHull **********************
struct Z_Construct_UFunction_URealtimeMeshCollisionTools_CookConvexHull_Statics
{
	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionConvex : public FRealtimeMeshCollisionShape
	{
	};

	struct RealtimeMeshCollisionTools_eventCookConvexHull_Parms
	{
		FRealtimeMeshCollisionConvex ConvexHull;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CookConvexHull constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConvexHull;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CookConvexHull constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CookConvexHull Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCollisionTools_CookConvexHull_Statics::NewProp_ConvexHull = { "ConvexHull", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCollisionTools_eventCookConvexHull_Parms, ConvexHull), Z_Construct_UScriptStruct_FRealtimeMeshCollisionConvex, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshCollisionTools_CookConvexHull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCollisionTools_CookConvexHull_Statics::NewProp_ConvexHull,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCollisionTools_CookConvexHull_Statics::PropPointers) < 2048);
// ********** End Function CookConvexHull Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshCollisionTools_CookConvexHull_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshCollisionTools, nullptr, "CookConvexHull", 	Z_Construct_UFunction_URealtimeMeshCollisionTools_CookConvexHull_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCollisionTools_CookConvexHull_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshCollisionTools_CookConvexHull_Statics::RealtimeMeshCollisionTools_eventCookConvexHull_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCollisionTools_CookConvexHull_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshCollisionTools_CookConvexHull_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshCollisionTools_CookConvexHull_Statics::RealtimeMeshCollisionTools_eventCookConvexHull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshCollisionTools_CookConvexHull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshCollisionTools_CookConvexHull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshCollisionTools::execCookConvexHull)
{
	P_GET_STRUCT_REF(FRealtimeMeshCollisionConvex,Z_Param_Out_ConvexHull);
	P_FINISH;
	P_NATIVE_BEGIN;
	URealtimeMeshCollisionTools::CookConvexHull(Z_Param_Out_ConvexHull);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshCollisionTools Function CookConvexHull ************************

// ********** Begin Class URealtimeMeshCollisionTools Function FindCollisionUVRealtimeMesh *********
struct Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics
{
	struct RealtimeMeshCollisionTools_eventFindCollisionUVRealtimeMesh_Parms
	{
		FHitResult Hit;
		int32 UVChannel;
		FVector2D UV;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindCollisionUVRealtimeMesh constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindCollisionUVRealtimeMesh constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindCollisionUVRealtimeMesh Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCollisionTools_eventFindCollisionUVRealtimeMesh_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 222120718
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCollisionTools_eventFindCollisionUVRealtimeMesh_Parms, UVChannel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCollisionTools_eventFindCollisionUVRealtimeMesh_Parms, UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RealtimeMeshCollisionTools_eventFindCollisionUVRealtimeMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshCollisionTools_eventFindCollisionUVRealtimeMesh_Parms), &Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::NewProp_UVChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::NewProp_UV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::PropPointers) < 2048);
// ********** End Function FindCollisionUVRealtimeMesh Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshCollisionTools, nullptr, "FindCollisionUVRealtimeMesh", 	Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::RealtimeMeshCollisionTools_eventFindCollisionUVRealtimeMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::RealtimeMeshCollisionTools_eventFindCollisionUVRealtimeMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshCollisionTools::execFindCollisionUVRealtimeMesh)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_GET_PROPERTY(FIntProperty,Z_Param_UVChannel);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UV);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URealtimeMeshCollisionTools::FindCollisionUVRealtimeMesh(Z_Param_Out_Hit,Z_Param_UVChannel,Z_Param_Out_UV);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshCollisionTools Function FindCollisionUVRealtimeMesh ***********

// ********** Begin Class URealtimeMeshCollisionTools **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshCollisionTools;
UClass* URealtimeMeshCollisionTools::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshCollisionTools;
	if (!Z_Registration_Info_UClass_URealtimeMeshCollisionTools.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshCollisionTools"),
			Z_Registration_Info_UClass_URealtimeMeshCollisionTools.InnerSingleton,
			StaticRegisterNativesURealtimeMeshCollisionTools,
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
	return Z_Registration_Info_UClass_URealtimeMeshCollisionTools.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshCollisionTools_NoRegister()
{
	return URealtimeMeshCollisionTools::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshCollisionTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RealtimeMeshCollisionLibrary.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshCollisionTools constinit property declarations **************
// ********** End Class URealtimeMeshCollisionTools constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CookComplexMesh"), .Pointer = &URealtimeMeshCollisionTools::execCookComplexMesh },
		{ .NameUTF8 = UTF8TEXT("CookConvexHull"), .Pointer = &URealtimeMeshCollisionTools::execCookConvexHull },
		{ .NameUTF8 = UTF8TEXT("FindCollisionUVRealtimeMesh"), .Pointer = &URealtimeMeshCollisionTools::execFindCollisionUVRealtimeMesh },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshCollisionTools_CookComplexMesh, "CookComplexMesh" }, // 1355863138
		{ &Z_Construct_UFunction_URealtimeMeshCollisionTools_CookConvexHull, "CookConvexHull" }, // 2450748886
		{ &Z_Construct_UFunction_URealtimeMeshCollisionTools_FindCollisionUVRealtimeMesh, "FindCollisionUVRealtimeMesh" }, // 2924134198
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshCollisionTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshCollisionTools_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshCollisionTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshCollisionTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshCollisionTools_Statics::ClassParams = {
	&URealtimeMeshCollisionTools::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshCollisionTools_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshCollisionTools_Statics::Class_MetaDataParams)
};
void URealtimeMeshCollisionTools::StaticRegisterNativesURealtimeMeshCollisionTools()
{
	UClass* Class = URealtimeMeshCollisionTools::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshCollisionTools_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshCollisionTools()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshCollisionTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshCollisionTools.OuterSingleton, Z_Construct_UClass_URealtimeMeshCollisionTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshCollisionTools.OuterSingleton;
}
URealtimeMeshCollisionTools::URealtimeMeshCollisionTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshCollisionTools);
URealtimeMeshCollisionTools::~URealtimeMeshCollisionTools() {}
// ********** End Class URealtimeMeshCollisionTools ************************************************

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function AddBox ***************
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionBox : public FRealtimeMeshCollisionShape
	{
		FVector Extents;
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventAddBox_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		FRealtimeMeshCollisionBox InBox;
		int32 OutIndex;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Boxes" },
		{ "Comment", "// Box Functions\n" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
		{ "ToolTip", "Box Functions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddBox constinit property declarations ********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBox;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddBox constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddBox Property Definitions *******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddBox_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::NewProp_InBox = { "InBox", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddBox_Parms, InBox), Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBox_MetaData), NewProp_InBox_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddBox_Parms, OutIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::NewProp_InBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::NewProp_OutIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::PropPointers) < 2048);
// ********** End Function AddBox Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "AddBox", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventAddBox_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventAddBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execAddBox)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionBox,Z_Param_Out_InBox);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::AddBox(Z_Param_Out_SimpleGeometry,Z_Param_Out_InBox,Z_Param_Out_OutIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function AddBox *****************

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function AddCapsule ***********
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionCapsule : public FRealtimeMeshCollisionShape
	{
		float Radius;
		float Length;
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventAddCapsule_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		FRealtimeMeshCollisionCapsule InCapsule;
		int32 OutIndex;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Capsules" },
		{ "Comment", "// Capsule Functions\n" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
		{ "ToolTip", "Capsule Functions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCapsule_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddCapsule constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCapsule;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddCapsule constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddCapsule Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddCapsule_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::NewProp_InCapsule = { "InCapsule", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddCapsule_Parms, InCapsule), Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCapsule_MetaData), NewProp_InCapsule_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddCapsule_Parms, OutIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddCapsule_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::NewProp_InCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::NewProp_OutIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::PropPointers) < 2048);
// ********** End Function AddCapsule Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "AddCapsule", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventAddCapsule_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventAddCapsule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execAddCapsule)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionCapsule,Z_Param_Out_InCapsule);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::AddCapsule(Z_Param_Out_SimpleGeometry,Z_Param_Out_InCapsule,Z_Param_Out_OutIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function AddCapsule *************

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function AddConvex ************
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionConvex : public FRealtimeMeshCollisionShape
	{
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventAddConvex_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		FRealtimeMeshCollisionConvex InConvexHull;
		int32 OutIndex;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Convex Hulls" },
		{ "Comment", "// Convex Hull Functions\n" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
		{ "ToolTip", "Convex Hull Functions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InConvexHull_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddConvex constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InConvexHull;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddConvex constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddConvex Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddConvex_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::NewProp_InConvexHull = { "InConvexHull", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddConvex_Parms, InConvexHull), Z_Construct_UScriptStruct_FRealtimeMeshCollisionConvex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConvexHull_MetaData), NewProp_InConvexHull_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddConvex_Parms, OutIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddConvex_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::NewProp_InConvexHull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::NewProp_OutIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::PropPointers) < 2048);
// ********** End Function AddConvex Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "AddConvex", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventAddConvex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventAddConvex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execAddConvex)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionConvex,Z_Param_Out_InConvexHull);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::AddConvex(Z_Param_Out_SimpleGeometry,Z_Param_Out_InConvexHull,Z_Param_Out_OutIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function AddConvex **************

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function AddSphere ************
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionSphere : public FRealtimeMeshCollisionShape
	{
		float Radius;
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventAddSphere_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		FRealtimeMeshCollisionSphere InSphere;
		int32 OutIndex;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Spheres" },
		{ "Comment", "// Sphere Functions\n" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
		{ "ToolTip", "Sphere Functions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSphere_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddSphere constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSphere;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddSphere constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddSphere Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddSphere_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::NewProp_InSphere = { "InSphere", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddSphere_Parms, InSphere), Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSphere_MetaData), NewProp_InSphere_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddSphere_Parms, OutIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddSphere_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::NewProp_InSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::NewProp_OutIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::PropPointers) < 2048);
// ********** End Function AddSphere Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "AddSphere", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventAddSphere_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventAddSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execAddSphere)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionSphere,Z_Param_Out_InSphere);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::AddSphere(Z_Param_Out_SimpleGeometry,Z_Param_Out_InSphere,Z_Param_Out_OutIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function AddSphere **************

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function AddTaperedCapsule ****
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionTaperedCapsule : public FRealtimeMeshCollisionShape
	{
		float RadiusA;
		float RadiusB;
		float Length;
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventAddTaperedCapsule_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		FRealtimeMeshCollisionTaperedCapsule InTaperedCapsule;
		int32 OutIndex;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Tapered Capsules" },
		{ "Comment", "// Tapered Capsule Functions\n" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
		{ "ToolTip", "Tapered Capsule Functions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTaperedCapsule_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddTaperedCapsule constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTaperedCapsule;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddTaperedCapsule constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddTaperedCapsule Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddTaperedCapsule_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::NewProp_InTaperedCapsule = { "InTaperedCapsule", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddTaperedCapsule_Parms, InTaperedCapsule), Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTaperedCapsule_MetaData), NewProp_InTaperedCapsule_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddTaperedCapsule_Parms, OutIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventAddTaperedCapsule_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::NewProp_InTaperedCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::NewProp_OutIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::PropPointers) < 2048);
// ********** End Function AddTaperedCapsule Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "AddTaperedCapsule", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventAddTaperedCapsule_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventAddTaperedCapsule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execAddTaperedCapsule)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionTaperedCapsule,Z_Param_Out_InTaperedCapsule);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::AddTaperedCapsule(Z_Param_Out_SimpleGeometry,Z_Param_Out_InTaperedCapsule,Z_Param_Out_OutIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function AddTaperedCapsule ******

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function GetBoxByName *********
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionBox : public FRealtimeMeshCollisionShape
	{
		FVector Extents;
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventGetBoxByName_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		FName BoxName;
		bool Success;
		FRealtimeMeshCollisionBox OutBox;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Boxes" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoxByName constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoxName;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutBox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoxByName constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoxByName Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetBoxByName_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::NewProp_BoxName = { "BoxName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetBoxByName_Parms, BoxName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventGetBoxByName_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetBoxByName_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::NewProp_OutBox = { "OutBox", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetBoxByName_Parms, OutBox), Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetBoxByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::NewProp_BoxName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::NewProp_OutBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::PropPointers) < 2048);
// ********** End Function GetBoxByName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "GetBoxByName", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventGetBoxByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventGetBoxByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execGetBoxByName)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoxName);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionBox,Z_Param_Out_OutBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::GetBoxByName(Z_Param_Out_SimpleGeometry,Z_Param_BoxName,Z_Param_Out_Success,Z_Param_Out_OutBox);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function GetBoxByName ***********

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function GetCapsuleByName *****
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionCapsule : public FRealtimeMeshCollisionShape
	{
		float Radius;
		float Length;
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventGetCapsuleByName_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		FName CapsuleName;
		bool Success;
		FRealtimeMeshCollisionCapsule OutCapsule;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Capsules" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCapsuleByName constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CapsuleName;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCapsule;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCapsuleByName constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCapsuleByName Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetCapsuleByName_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::NewProp_CapsuleName = { "CapsuleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetCapsuleByName_Parms, CapsuleName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventGetCapsuleByName_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetCapsuleByName_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::NewProp_OutCapsule = { "OutCapsule", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetCapsuleByName_Parms, OutCapsule), Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetCapsuleByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::NewProp_CapsuleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::NewProp_OutCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::PropPointers) < 2048);
// ********** End Function GetCapsuleByName Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "GetCapsuleByName", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventGetCapsuleByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventGetCapsuleByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execGetCapsuleByName)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FNameProperty,Z_Param_CapsuleName);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionCapsule,Z_Param_Out_OutCapsule);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::GetCapsuleByName(Z_Param_Out_SimpleGeometry,Z_Param_CapsuleName,Z_Param_Out_Success,Z_Param_Out_OutCapsule);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function GetCapsuleByName *******

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function GetConvexByName ******
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionConvex : public FRealtimeMeshCollisionShape
	{
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventGetConvexByName_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		FName ConvexHullName;
		bool Success;
		FRealtimeMeshCollisionConvex OutConvexHull;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Convex Hulls" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetConvexByName constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConvexHullName;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutConvexHull;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetConvexByName constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetConvexByName Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetConvexByName_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::NewProp_ConvexHullName = { "ConvexHullName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetConvexByName_Parms, ConvexHullName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventGetConvexByName_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetConvexByName_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::NewProp_OutConvexHull = { "OutConvexHull", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetConvexByName_Parms, OutConvexHull), Z_Construct_UScriptStruct_FRealtimeMeshCollisionConvex, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetConvexByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::NewProp_ConvexHullName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::NewProp_OutConvexHull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::PropPointers) < 2048);
// ********** End Function GetConvexByName Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "GetConvexByName", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventGetConvexByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventGetConvexByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execGetConvexByName)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FNameProperty,Z_Param_ConvexHullName);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionConvex,Z_Param_Out_OutConvexHull);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::GetConvexByName(Z_Param_Out_SimpleGeometry,Z_Param_ConvexHullName,Z_Param_Out_Success,Z_Param_Out_OutConvexHull);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function GetConvexByName ********

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function GetSphereByName ******
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionSphere : public FRealtimeMeshCollisionShape
	{
		float Radius;
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventGetSphereByName_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		FName SphereName;
		bool Success;
		FRealtimeMeshCollisionSphere OutSphere;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Spheres" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSphereByName constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SphereName;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSphere;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSphereByName constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSphereByName Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetSphereByName_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::NewProp_SphereName = { "SphereName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetSphereByName_Parms, SphereName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventGetSphereByName_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetSphereByName_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::NewProp_OutSphere = { "OutSphere", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetSphereByName_Parms, OutSphere), Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetSphereByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::NewProp_SphereName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::NewProp_OutSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::PropPointers) < 2048);
// ********** End Function GetSphereByName Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "GetSphereByName", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventGetSphereByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventGetSphereByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execGetSphereByName)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FNameProperty,Z_Param_SphereName);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionSphere,Z_Param_Out_OutSphere);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::GetSphereByName(Z_Param_Out_SimpleGeometry,Z_Param_SphereName,Z_Param_Out_Success,Z_Param_Out_OutSphere);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function GetSphereByName ********

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function GetTaperedCapsuleByName 
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionTaperedCapsule : public FRealtimeMeshCollisionShape
	{
		float RadiusA;
		float RadiusB;
		float Length;
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventGetTaperedCapsuleByName_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		FName TaperedCapsuleName;
		bool Success;
		FRealtimeMeshCollisionTaperedCapsule OutTaperedCapsule;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Tapered Capsules" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTaperedCapsuleByName constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaperedCapsuleName;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTaperedCapsule;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTaperedCapsuleByName constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTaperedCapsuleByName Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetTaperedCapsuleByName_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::NewProp_TaperedCapsuleName = { "TaperedCapsuleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetTaperedCapsuleByName_Parms, TaperedCapsuleName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventGetTaperedCapsuleByName_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetTaperedCapsuleByName_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::NewProp_OutTaperedCapsule = { "OutTaperedCapsule", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetTaperedCapsuleByName_Parms, OutTaperedCapsule), Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventGetTaperedCapsuleByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::NewProp_TaperedCapsuleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::NewProp_OutTaperedCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::PropPointers) < 2048);
// ********** End Function GetTaperedCapsuleByName Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "GetTaperedCapsuleByName", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventGetTaperedCapsuleByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventGetTaperedCapsuleByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execGetTaperedCapsuleByName)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaperedCapsuleName);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionTaperedCapsule,Z_Param_Out_OutTaperedCapsule);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::GetTaperedCapsuleByName(Z_Param_Out_SimpleGeometry,Z_Param_TaperedCapsuleName,Z_Param_Out_Success,Z_Param_Out_OutTaperedCapsule);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function GetTaperedCapsuleByName 

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function InsertBox ************
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionBox : public FRealtimeMeshCollisionShape
	{
		FVector Extents;
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertBox_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		int32 Index;
		FRealtimeMeshCollisionBox InBox;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Boxes" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InsertBox constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBox;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InsertBox constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InsertBox Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertBox_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertBox_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::NewProp_InBox = { "InBox", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertBox_Parms, InBox), Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBox_MetaData), NewProp_InBox_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertBox_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertBox_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::NewProp_InBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::PropPointers) < 2048);
// ********** End Function InsertBox Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "InsertBox", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertBox_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execInsertBox)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionBox,Z_Param_Out_InBox);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::InsertBox(Z_Param_Out_SimpleGeometry,Z_Param_Index,Z_Param_Out_InBox,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function InsertBox **************

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function InsertCapsule ********
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionCapsule : public FRealtimeMeshCollisionShape
	{
		float Radius;
		float Length;
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertCapsule_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		int32 Index;
		FRealtimeMeshCollisionCapsule InCapsule;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Capsules" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCapsule_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InsertCapsule constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCapsule;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InsertCapsule constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InsertCapsule Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertCapsule_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertCapsule_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::NewProp_InCapsule = { "InCapsule", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertCapsule_Parms, InCapsule), Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCapsule_MetaData), NewProp_InCapsule_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertCapsule_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertCapsule_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertCapsule_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::NewProp_InCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::PropPointers) < 2048);
// ********** End Function InsertCapsule Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "InsertCapsule", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertCapsule_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertCapsule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execInsertCapsule)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionCapsule,Z_Param_Out_InCapsule);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::InsertCapsule(Z_Param_Out_SimpleGeometry,Z_Param_Index,Z_Param_Out_InCapsule,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function InsertCapsule **********

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function InsertConvex *********
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionConvex : public FRealtimeMeshCollisionShape
	{
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertConvex_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		int32 Index;
		FRealtimeMeshCollisionConvex InConvexHull;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Convex Hulls" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InConvexHull_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InsertConvex constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InConvexHull;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InsertConvex constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InsertConvex Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertConvex_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertConvex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::NewProp_InConvexHull = { "InConvexHull", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertConvex_Parms, InConvexHull), Z_Construct_UScriptStruct_FRealtimeMeshCollisionConvex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConvexHull_MetaData), NewProp_InConvexHull_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertConvex_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertConvex_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertConvex_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::NewProp_InConvexHull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::PropPointers) < 2048);
// ********** End Function InsertConvex Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "InsertConvex", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertConvex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertConvex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execInsertConvex)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionConvex,Z_Param_Out_InConvexHull);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::InsertConvex(Z_Param_Out_SimpleGeometry,Z_Param_Index,Z_Param_Out_InConvexHull,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function InsertConvex ***********

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function InsertSphere *********
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionSphere : public FRealtimeMeshCollisionShape
	{
		float Radius;
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertSphere_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		int32 Index;
		FRealtimeMeshCollisionSphere InSphere;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Spheres" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSphere_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InsertSphere constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSphere;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InsertSphere constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InsertSphere Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertSphere_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertSphere_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::NewProp_InSphere = { "InSphere", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertSphere_Parms, InSphere), Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSphere_MetaData), NewProp_InSphere_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertSphere_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertSphere_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertSphere_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::NewProp_InSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::PropPointers) < 2048);
// ********** End Function InsertSphere Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "InsertSphere", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertSphere_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execInsertSphere)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionSphere,Z_Param_Out_InSphere);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::InsertSphere(Z_Param_Out_SimpleGeometry,Z_Param_Index,Z_Param_Out_InSphere,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function InsertSphere ***********

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function InsertTaperedCapsule *
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionTaperedCapsule : public FRealtimeMeshCollisionShape
	{
		float RadiusA;
		float RadiusB;
		float Length;
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertTaperedCapsule_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		int32 Index;
		FRealtimeMeshCollisionTaperedCapsule InTaperedCapsule;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Tapered Capsules" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTaperedCapsule_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InsertTaperedCapsule constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTaperedCapsule;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InsertTaperedCapsule constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InsertTaperedCapsule Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertTaperedCapsule_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertTaperedCapsule_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::NewProp_InTaperedCapsule = { "InTaperedCapsule", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertTaperedCapsule_Parms, InTaperedCapsule), Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTaperedCapsule_MetaData), NewProp_InTaperedCapsule_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertTaperedCapsule_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertTaperedCapsule_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertTaperedCapsule_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::NewProp_InTaperedCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::PropPointers) < 2048);
// ********** End Function InsertTaperedCapsule Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "InsertTaperedCapsule", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertTaperedCapsule_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventInsertTaperedCapsule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execInsertTaperedCapsule)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionTaperedCapsule,Z_Param_Out_InTaperedCapsule);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::InsertTaperedCapsule(Z_Param_Out_SimpleGeometry,Z_Param_Index,Z_Param_Out_InTaperedCapsule,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function InsertTaperedCapsule ***

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveBox ************
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveBox_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		int32 Index;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Boxes" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveBox constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveBox constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveBox Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveBox_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveBox_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveBox_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveBox_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::PropPointers) < 2048);
// ********** End Function RemoveBox Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "RemoveBox", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveBox_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveBox)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::RemoveBox(Z_Param_Out_SimpleGeometry,Z_Param_Index,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveBox **************

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveBoxByName ******
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveBoxByName_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		FName BoxName;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Boxes" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveBoxByName constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoxName;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveBoxByName constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveBoxByName Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveBoxByName_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::NewProp_BoxName = { "BoxName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveBoxByName_Parms, BoxName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveBoxByName_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveBoxByName_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveBoxByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::NewProp_BoxName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::PropPointers) < 2048);
// ********** End Function RemoveBoxByName Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "RemoveBoxByName", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveBoxByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveBoxByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveBoxByName)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoxName);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::RemoveBoxByName(Z_Param_Out_SimpleGeometry,Z_Param_BoxName,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveBoxByName ********

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveCapsule ********
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveCapsule_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		int32 Index;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Capsules" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveCapsule constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveCapsule constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveCapsule Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveCapsule_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveCapsule_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveCapsule_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveCapsule_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveCapsule_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::PropPointers) < 2048);
// ********** End Function RemoveCapsule Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "RemoveCapsule", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveCapsule_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveCapsule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveCapsule)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::RemoveCapsule(Z_Param_Out_SimpleGeometry,Z_Param_Index,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveCapsule **********

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveCapsuleByName **
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveCapsuleByName_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		FName CapsuleName;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Capsules" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveCapsuleByName constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CapsuleName;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveCapsuleByName constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveCapsuleByName Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveCapsuleByName_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::NewProp_CapsuleName = { "CapsuleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveCapsuleByName_Parms, CapsuleName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveCapsuleByName_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveCapsuleByName_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveCapsuleByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::NewProp_CapsuleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::PropPointers) < 2048);
// ********** End Function RemoveCapsuleByName Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "RemoveCapsuleByName", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveCapsuleByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveCapsuleByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveCapsuleByName)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FNameProperty,Z_Param_CapsuleName);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::RemoveCapsuleByName(Z_Param_Out_SimpleGeometry,Z_Param_CapsuleName,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveCapsuleByName ****

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveConvex *********
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveConvex_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		int32 Index;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Convex Hulls" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveConvex constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveConvex constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveConvex Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveConvex_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveConvex_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveConvex_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveConvex_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveConvex_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::PropPointers) < 2048);
// ********** End Function RemoveConvex Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "RemoveConvex", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveConvex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveConvex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveConvex)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::RemoveConvex(Z_Param_Out_SimpleGeometry,Z_Param_Index,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveConvex ***********

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveConvexByName ***
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveConvexByName_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		FName ConvexHullName;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Convex Hulls" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveConvexByName constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConvexHullName;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveConvexByName constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveConvexByName Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveConvexByName_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::NewProp_ConvexHullName = { "ConvexHullName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveConvexByName_Parms, ConvexHullName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveConvexByName_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveConvexByName_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveConvexByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::NewProp_ConvexHullName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::PropPointers) < 2048);
// ********** End Function RemoveConvexByName Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "RemoveConvexByName", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveConvexByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveConvexByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveConvexByName)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FNameProperty,Z_Param_ConvexHullName);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::RemoveConvexByName(Z_Param_Out_SimpleGeometry,Z_Param_ConvexHullName,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveConvexByName *****

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveSphere *********
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveSphere_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		int32 Index;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Spheres" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveSphere constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveSphere constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveSphere Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveSphere_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveSphere_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveSphere_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveSphere_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveSphere_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::PropPointers) < 2048);
// ********** End Function RemoveSphere Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "RemoveSphere", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveSphere_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveSphere)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::RemoveSphere(Z_Param_Out_SimpleGeometry,Z_Param_Index,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveSphere ***********

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveSphereByName ***
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveSphereByName_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		FName SphereName;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Spheres" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveSphereByName constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SphereName;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveSphereByName constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveSphereByName Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveSphereByName_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::NewProp_SphereName = { "SphereName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveSphereByName_Parms, SphereName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveSphereByName_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveSphereByName_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveSphereByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::NewProp_SphereName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::PropPointers) < 2048);
// ********** End Function RemoveSphereByName Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "RemoveSphereByName", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveSphereByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveSphereByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveSphereByName)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FNameProperty,Z_Param_SphereName);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::RemoveSphereByName(Z_Param_Out_SimpleGeometry,Z_Param_SphereName,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveSphereByName *****

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveTaperedCapsule *
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveTaperedCapsule_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		int32 Index;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Tapered Capsules" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveTaperedCapsule constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveTaperedCapsule constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveTaperedCapsule Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveTaperedCapsule_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveTaperedCapsule_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveTaperedCapsule_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveTaperedCapsule_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveTaperedCapsule_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::PropPointers) < 2048);
// ********** End Function RemoveTaperedCapsule Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "RemoveTaperedCapsule", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveTaperedCapsule_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveTaperedCapsule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveTaperedCapsule)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::RemoveTaperedCapsule(Z_Param_Out_SimpleGeometry,Z_Param_Index,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveTaperedCapsule ***

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveTaperedCapsuleByName 
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveTaperedCapsuleByName_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		FName TaperedCapsuleName;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Tapered Capsules" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveTaperedCapsuleByName constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaperedCapsuleName;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveTaperedCapsuleByName constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveTaperedCapsuleByName Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveTaperedCapsuleByName_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::NewProp_TaperedCapsuleName = { "TaperedCapsuleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveTaperedCapsuleByName_Parms, TaperedCapsuleName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveTaperedCapsuleByName_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveTaperedCapsuleByName_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveTaperedCapsuleByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::NewProp_TaperedCapsuleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::PropPointers) < 2048);
// ********** End Function RemoveTaperedCapsuleByName Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "RemoveTaperedCapsuleByName", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveTaperedCapsuleByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventRemoveTaperedCapsuleByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveTaperedCapsuleByName)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaperedCapsuleName);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::RemoveTaperedCapsuleByName(Z_Param_Out_SimpleGeometry,Z_Param_TaperedCapsuleName,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function RemoveTaperedCapsuleByName 

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function UpdateBox ************
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionBox : public FRealtimeMeshCollisionShape
	{
		FVector Extents;
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateBox_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		int32 Index;
		FRealtimeMeshCollisionBox InBox;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Boxes" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateBox constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBox;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateBox constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateBox Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateBox_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateBox_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::NewProp_InBox = { "InBox", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateBox_Parms, InBox), Z_Construct_UScriptStruct_FRealtimeMeshCollisionBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBox_MetaData), NewProp_InBox_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateBox_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateBox_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::NewProp_InBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::PropPointers) < 2048);
// ********** End Function UpdateBox Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "UpdateBox", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateBox_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execUpdateBox)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionBox,Z_Param_Out_InBox);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::UpdateBox(Z_Param_Out_SimpleGeometry,Z_Param_Index,Z_Param_Out_InBox,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function UpdateBox **************

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function UpdateCapsule ********
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionCapsule : public FRealtimeMeshCollisionShape
	{
		float Radius;
		float Length;
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateCapsule_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		int32 Index;
		FRealtimeMeshCollisionCapsule InCapsule;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Capsules" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCapsule_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateCapsule constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCapsule;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateCapsule constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateCapsule Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateCapsule_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateCapsule_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::NewProp_InCapsule = { "InCapsule", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateCapsule_Parms, InCapsule), Z_Construct_UScriptStruct_FRealtimeMeshCollisionCapsule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCapsule_MetaData), NewProp_InCapsule_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateCapsule_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateCapsule_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateCapsule_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::NewProp_InCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::PropPointers) < 2048);
// ********** End Function UpdateCapsule Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "UpdateCapsule", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateCapsule_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateCapsule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execUpdateCapsule)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionCapsule,Z_Param_Out_InCapsule);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::UpdateCapsule(Z_Param_Out_SimpleGeometry,Z_Param_Index,Z_Param_Out_InCapsule,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function UpdateCapsule **********

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function UpdateConvex *********
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionConvex : public FRealtimeMeshCollisionShape
	{
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateConvex_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		int32 Index;
		FRealtimeMeshCollisionConvex InConvexHull;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Convex Hulls" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InConvexHull_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateConvex constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InConvexHull;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateConvex constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateConvex Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateConvex_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateConvex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::NewProp_InConvexHull = { "InConvexHull", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateConvex_Parms, InConvexHull), Z_Construct_UScriptStruct_FRealtimeMeshCollisionConvex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConvexHull_MetaData), NewProp_InConvexHull_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateConvex_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateConvex_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateConvex_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::NewProp_InConvexHull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::PropPointers) < 2048);
// ********** End Function UpdateConvex Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "UpdateConvex", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateConvex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateConvex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execUpdateConvex)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionConvex,Z_Param_Out_InConvexHull);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::UpdateConvex(Z_Param_Out_SimpleGeometry,Z_Param_Index,Z_Param_Out_InConvexHull,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function UpdateConvex ***********

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function UpdateSphere *********
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionSphere : public FRealtimeMeshCollisionShape
	{
		float Radius;
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateSphere_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		int32 Index;
		FRealtimeMeshCollisionSphere InSphere;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Spheres" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSphere_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateSphere constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSphere;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateSphere constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateSphere Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateSphere_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateSphere_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::NewProp_InSphere = { "InSphere", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateSphere_Parms, InSphere), Z_Construct_UScriptStruct_FRealtimeMeshCollisionSphere, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSphere_MetaData), NewProp_InSphere_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateSphere_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateSphere_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateSphere_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::NewProp_InSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::PropPointers) < 2048);
// ********** End Function UpdateSphere Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "UpdateSphere", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateSphere_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execUpdateSphere)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionSphere,Z_Param_Out_InSphere);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::UpdateSphere(Z_Param_Out_SimpleGeometry,Z_Param_Index,Z_Param_Out_InSphere,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function UpdateSphere ***********

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary Function UpdateTaperedCapsule *
struct Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics
{
	struct FRealtimeMeshSimpleGeometry
	{
	};

	struct FRealtimeMeshCollisionShape
	{
		FName Name;
		FVector Center;
		FRotator Rotation;
		bool bContributesToMass;
	};

	struct FRealtimeMeshCollisionTaperedCapsule : public FRealtimeMeshCollisionShape
	{
		float RadiusA;
		float RadiusB;
		float Length;
	};

	struct RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateTaperedCapsule_Parms
	{
		FRealtimeMeshSimpleGeometry SimpleGeometry;
		int32 Index;
		FRealtimeMeshCollisionTaperedCapsule InTaperedCapsule;
		bool Success;
		FRealtimeMeshSimpleGeometry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh|Tapered Capsules" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTaperedCapsule_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateTaperedCapsule constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleGeometry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTaperedCapsule;
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateTaperedCapsule constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateTaperedCapsule Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::NewProp_SimpleGeometry = { "SimpleGeometry", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateTaperedCapsule_Parms, SimpleGeometry), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateTaperedCapsule_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::NewProp_InTaperedCapsule = { "InTaperedCapsule", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateTaperedCapsule_Parms, InTaperedCapsule), Z_Construct_UScriptStruct_FRealtimeMeshCollisionTaperedCapsule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTaperedCapsule_MetaData), NewProp_InTaperedCapsule_MetaData) };
void Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::NewProp_Success_SetBit(void* Obj)
{
	((RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateTaperedCapsule_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateTaperedCapsule_Parms), &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateTaperedCapsule_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshSimpleGeometry, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::NewProp_SimpleGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::NewProp_InTaperedCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::PropPointers) < 2048);
// ********** End Function UpdateTaperedCapsule Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, nullptr, "UpdateTaperedCapsule", 	Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateTaperedCapsule_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::RealtimeMeshSimpleGeometryFunctionLibrary_eventUpdateTaperedCapsule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshSimpleGeometryFunctionLibrary::execUpdateTaperedCapsule)
{
	P_GET_STRUCT_REF(FRealtimeMeshSimpleGeometry,Z_Param_Out_SimpleGeometry);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FRealtimeMeshCollisionTaperedCapsule,Z_Param_Out_InTaperedCapsule);
	P_GET_UBOOL_REF(Z_Param_Out_Success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshSimpleGeometry*)Z_Param__Result=URealtimeMeshSimpleGeometryFunctionLibrary::UpdateTaperedCapsule(Z_Param_Out_SimpleGeometry,Z_Param_Index,Z_Param_Out_InTaperedCapsule,Z_Param_Out_Success);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary Function UpdateTaperedCapsule ***

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary *******************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshSimpleGeometryFunctionLibrary;
UClass* URealtimeMeshSimpleGeometryFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshSimpleGeometryFunctionLibrary;
	if (!Z_Registration_Info_UClass_URealtimeMeshSimpleGeometryFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshSimpleGeometryFunctionLibrary"),
			Z_Registration_Info_UClass_URealtimeMeshSimpleGeometryFunctionLibrary.InnerSingleton,
			StaticRegisterNativesURealtimeMeshSimpleGeometryFunctionLibrary,
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
	return Z_Registration_Info_UClass_URealtimeMeshSimpleGeometryFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary_NoRegister()
{
	return URealtimeMeshSimpleGeometryFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ReSharper disable CppUEBlueprintCallableFunctionUnused\n" },
		{ "IncludePath", "RealtimeMeshCollisionLibrary.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCollisionLibrary.h" },
		{ "ToolTip", "ReSharper disable CppUEBlueprintCallableFunctionUnused" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshSimpleGeometryFunctionLibrary constinit property declarations 
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary constinit property declarations *
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddBox"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execAddBox },
		{ .NameUTF8 = UTF8TEXT("AddCapsule"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execAddCapsule },
		{ .NameUTF8 = UTF8TEXT("AddConvex"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execAddConvex },
		{ .NameUTF8 = UTF8TEXT("AddSphere"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execAddSphere },
		{ .NameUTF8 = UTF8TEXT("AddTaperedCapsule"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execAddTaperedCapsule },
		{ .NameUTF8 = UTF8TEXT("GetBoxByName"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execGetBoxByName },
		{ .NameUTF8 = UTF8TEXT("GetCapsuleByName"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execGetCapsuleByName },
		{ .NameUTF8 = UTF8TEXT("GetConvexByName"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execGetConvexByName },
		{ .NameUTF8 = UTF8TEXT("GetSphereByName"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execGetSphereByName },
		{ .NameUTF8 = UTF8TEXT("GetTaperedCapsuleByName"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execGetTaperedCapsuleByName },
		{ .NameUTF8 = UTF8TEXT("InsertBox"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execInsertBox },
		{ .NameUTF8 = UTF8TEXT("InsertCapsule"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execInsertCapsule },
		{ .NameUTF8 = UTF8TEXT("InsertConvex"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execInsertConvex },
		{ .NameUTF8 = UTF8TEXT("InsertSphere"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execInsertSphere },
		{ .NameUTF8 = UTF8TEXT("InsertTaperedCapsule"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execInsertTaperedCapsule },
		{ .NameUTF8 = UTF8TEXT("RemoveBox"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveBox },
		{ .NameUTF8 = UTF8TEXT("RemoveBoxByName"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveBoxByName },
		{ .NameUTF8 = UTF8TEXT("RemoveCapsule"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveCapsule },
		{ .NameUTF8 = UTF8TEXT("RemoveCapsuleByName"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveCapsuleByName },
		{ .NameUTF8 = UTF8TEXT("RemoveConvex"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveConvex },
		{ .NameUTF8 = UTF8TEXT("RemoveConvexByName"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveConvexByName },
		{ .NameUTF8 = UTF8TEXT("RemoveSphere"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveSphere },
		{ .NameUTF8 = UTF8TEXT("RemoveSphereByName"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveSphereByName },
		{ .NameUTF8 = UTF8TEXT("RemoveTaperedCapsule"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveTaperedCapsule },
		{ .NameUTF8 = UTF8TEXT("RemoveTaperedCapsuleByName"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execRemoveTaperedCapsuleByName },
		{ .NameUTF8 = UTF8TEXT("UpdateBox"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execUpdateBox },
		{ .NameUTF8 = UTF8TEXT("UpdateCapsule"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execUpdateCapsule },
		{ .NameUTF8 = UTF8TEXT("UpdateConvex"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execUpdateConvex },
		{ .NameUTF8 = UTF8TEXT("UpdateSphere"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execUpdateSphere },
		{ .NameUTF8 = UTF8TEXT("UpdateTaperedCapsule"), .Pointer = &URealtimeMeshSimpleGeometryFunctionLibrary::execUpdateTaperedCapsule },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddBox, "AddBox" }, // 2421130656
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddCapsule, "AddCapsule" }, // 660695144
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddConvex, "AddConvex" }, // 3345149905
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddSphere, "AddSphere" }, // 615432523
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_AddTaperedCapsule, "AddTaperedCapsule" }, // 2811299256
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetBoxByName, "GetBoxByName" }, // 2104852620
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetCapsuleByName, "GetCapsuleByName" }, // 2062357180
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetConvexByName, "GetConvexByName" }, // 1540709210
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetSphereByName, "GetSphereByName" }, // 4056312466
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_GetTaperedCapsuleByName, "GetTaperedCapsuleByName" }, // 155412979
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertBox, "InsertBox" }, // 3328392025
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertCapsule, "InsertCapsule" }, // 1019464432
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertConvex, "InsertConvex" }, // 4057124005
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertSphere, "InsertSphere" }, // 1926257456
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_InsertTaperedCapsule, "InsertTaperedCapsule" }, // 198136911
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBox, "RemoveBox" }, // 1691869977
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveBoxByName, "RemoveBoxByName" }, // 1450245449
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsule, "RemoveCapsule" }, // 3415923491
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveCapsuleByName, "RemoveCapsuleByName" }, // 4217741477
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvex, "RemoveConvex" }, // 3042854468
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveConvexByName, "RemoveConvexByName" }, // 3929396721
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphere, "RemoveSphere" }, // 1067376618
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveSphereByName, "RemoveSphereByName" }, // 4270977146
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsule, "RemoveTaperedCapsule" }, // 479186838
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_RemoveTaperedCapsuleByName, "RemoveTaperedCapsuleByName" }, // 264477398
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateBox, "UpdateBox" }, // 3289816876
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateCapsule, "UpdateCapsule" }, // 2255289839
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateConvex, "UpdateConvex" }, // 1820096569
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateSphere, "UpdateSphere" }, // 3552799230
		{ &Z_Construct_UFunction_URealtimeMeshSimpleGeometryFunctionLibrary_UpdateTaperedCapsule, "UpdateTaperedCapsule" }, // 329948559
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshSimpleGeometryFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary_Statics::ClassParams = {
	&URealtimeMeshSimpleGeometryFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary_Statics::Class_MetaDataParams)
};
void URealtimeMeshSimpleGeometryFunctionLibrary::StaticRegisterNativesURealtimeMeshSimpleGeometryFunctionLibrary()
{
	UClass* Class = URealtimeMeshSimpleGeometryFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshSimpleGeometryFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshSimpleGeometryFunctionLibrary.OuterSingleton, Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshSimpleGeometryFunctionLibrary.OuterSingleton;
}
URealtimeMeshSimpleGeometryFunctionLibrary::URealtimeMeshSimpleGeometryFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshSimpleGeometryFunctionLibrary);
URealtimeMeshSimpleGeometryFunctionLibrary::~URealtimeMeshSimpleGeometryFunctionLibrary() {}
// ********** End Class URealtimeMeshSimpleGeometryFunctionLibrary *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h__Script_RealtimeMeshComponent_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshCollisionTools, URealtimeMeshCollisionTools::StaticClass, TEXT("URealtimeMeshCollisionTools"), &Z_Registration_Info_UClass_URealtimeMeshCollisionTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshCollisionTools), 3332190656U) },
		{ Z_Construct_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, URealtimeMeshSimpleGeometryFunctionLibrary::StaticClass, TEXT("URealtimeMeshSimpleGeometryFunctionLibrary"), &Z_Registration_Info_UClass_URealtimeMeshSimpleGeometryFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshSimpleGeometryFunctionLibrary), 2417496369U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h__Script_RealtimeMeshComponent_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h__Script_RealtimeMeshComponent_980549929{
	TEXT("/Script/RealtimeMeshComponent"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h__Script_RealtimeMeshComponent_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshCollisionLibrary_h__Script_RealtimeMeshComponent_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
