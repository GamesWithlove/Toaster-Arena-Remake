// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Private/Tests/Elements/PCGPropertyToParamDataElementTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPropertyToParamDataElementTest() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PCG_API UClass* Z_Construct_UClass_APCGUnitTestDummyActor();
	PCG_API UClass* Z_Construct_UClass_APCGUnitTestDummyActor_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGUnitTestDummyComponent();
	PCG_API UClass* Z_Construct_UClass_UPCGUnitTestDummyComponent_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGUnitTestDummyEnum();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGUnitTestDummyEnum;
	static UEnum* EPCGUnitTestDummyEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGUnitTestDummyEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGUnitTestDummyEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGUnitTestDummyEnum, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGUnitTestDummyEnum"));
		}
		return Z_Registration_Info_UEnum_EPCGUnitTestDummyEnum.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGUnitTestDummyEnum>()
	{
		return EPCGUnitTestDummyEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGUnitTestDummyEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGUnitTestDummyEnum_Statics::Enumerators[] = {
		{ "EPCGUnitTestDummyEnum::One", (int64)EPCGUnitTestDummyEnum::One },
		{ "EPCGUnitTestDummyEnum::Two", (int64)EPCGUnitTestDummyEnum::Two },
		{ "EPCGUnitTestDummyEnum::Three", (int64)EPCGUnitTestDummyEnum::Three },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGUnitTestDummyEnum_Statics::Enum_MetaDataParams[] = {
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
		{ "One.Name", "EPCGUnitTestDummyEnum::One" },
		{ "Three.Name", "EPCGUnitTestDummyEnum::Three" },
		{ "Two.Name", "EPCGUnitTestDummyEnum::Two" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGUnitTestDummyEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGUnitTestDummyEnum",
		"EPCGUnitTestDummyEnum",
		Z_Construct_UEnum_PCG_EPCGUnitTestDummyEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGUnitTestDummyEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGUnitTestDummyEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGUnitTestDummyEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGUnitTestDummyEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGUnitTestDummyEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGUnitTestDummyEnum.InnerSingleton, Z_Construct_UEnum_PCG_EPCGUnitTestDummyEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGUnitTestDummyEnum.InnerSingleton;
	}
	void APCGUnitTestDummyActor::StaticRegisterNativesAPCGUnitTestDummyActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCGUnitTestDummyActor);
	UClass* Z_Construct_UClass_APCGUnitTestDummyActor_NoRegister()
	{
		return APCGUnitTestDummyActor::StaticClass();
	}
	struct Z_Construct_UClass_APCGUnitTestDummyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntProperty_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_IntProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatProperty_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int64Property_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleProperty_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DoubleProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolProperty_MetaData[];
#endif
		static void NewProp_BoolProperty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameProperty_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringProperty;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_EnumProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EnumProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector4Property_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector4Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotatorProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotatorProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuatProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuatProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftObjectPathProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoftObjectPathProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftClassPathProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoftClassPathProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassProperty_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectProperty_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector2Property_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APCGUnitTestDummyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::Class_MetaDataParams[] = {
		{ "Hidden", "" },
		{ "IncludePath", "Tests/Elements/PCGPropertyToParamDataElementTest.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_IntProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_IntProperty = { "IntProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, IntProperty), METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_IntProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_IntProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_FloatProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_FloatProperty = { "FloatProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, FloatProperty), METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_FloatProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_FloatProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_Int64Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_Int64Property = { "Int64Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, Int64Property), METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_Int64Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_Int64Property_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_DoubleProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_DoubleProperty = { "DoubleProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, DoubleProperty), METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_DoubleProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_DoubleProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_BoolProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	void Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_BoolProperty_SetBit(void* Obj)
	{
		((APCGUnitTestDummyActor*)Obj)->BoolProperty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_BoolProperty = { "BoolProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APCGUnitTestDummyActor), &Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_BoolProperty_SetBit, METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_BoolProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_BoolProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_NameProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_NameProperty = { "NameProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, NameProperty), METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_NameProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_NameProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_StringProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_StringProperty = { "StringProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, StringProperty), METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_StringProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_StringProperty_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_EnumProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_EnumProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_EnumProperty = { "EnumProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, EnumProperty), Z_Construct_UEnum_PCG_EPCGUnitTestDummyEnum, METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_EnumProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_EnumProperty_MetaData)) }; // 1866370074
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_VectorProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_VectorProperty = { "VectorProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, VectorProperty), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_VectorProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_VectorProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_Vector4Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_Vector4Property = { "Vector4Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, Vector4Property), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_Vector4Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_Vector4Property_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_TransformProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_TransformProperty = { "TransformProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, TransformProperty), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_TransformProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_TransformProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_RotatorProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_RotatorProperty = { "RotatorProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, RotatorProperty), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_RotatorProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_RotatorProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_QuatProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_QuatProperty = { "QuatProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, QuatProperty), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_QuatProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_QuatProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_SoftObjectPathProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_SoftObjectPathProperty = { "SoftObjectPathProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, SoftObjectPathProperty), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_SoftObjectPathProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_SoftObjectPathProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_SoftClassPathProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_SoftClassPathProperty = { "SoftClassPathProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, SoftClassPathProperty), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_SoftClassPathProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_SoftClassPathProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_ClassProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_ClassProperty = { "ClassProperty", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, ClassProperty), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_ClassProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_ClassProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_ObjectProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_ObjectProperty = { "ObjectProperty", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, ObjectProperty), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_ObjectProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_ObjectProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_Vector2Property_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_Vector2Property = { "Vector2Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, Vector2Property), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_Vector2Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_Vector2Property_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_ColorProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_ColorProperty = { "ColorProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APCGUnitTestDummyActor, ColorProperty), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_ColorProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_ColorProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APCGUnitTestDummyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_IntProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_FloatProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_Int64Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_DoubleProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_BoolProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_NameProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_StringProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_EnumProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_EnumProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_VectorProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_Vector4Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_TransformProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_RotatorProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_QuatProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_SoftObjectPathProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_SoftClassPathProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_ClassProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_ObjectProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_Vector2Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGUnitTestDummyActor_Statics::NewProp_ColorProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APCGUnitTestDummyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCGUnitTestDummyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APCGUnitTestDummyActor_Statics::ClassParams = {
		&APCGUnitTestDummyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APCGUnitTestDummyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::PropPointers),
		0,
		0x048802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APCGUnitTestDummyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APCGUnitTestDummyActor()
	{
		if (!Z_Registration_Info_UClass_APCGUnitTestDummyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCGUnitTestDummyActor.OuterSingleton, Z_Construct_UClass_APCGUnitTestDummyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APCGUnitTestDummyActor.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<APCGUnitTestDummyActor>()
	{
		return APCGUnitTestDummyActor::StaticClass();
	}
	APCGUnitTestDummyActor::APCGUnitTestDummyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APCGUnitTestDummyActor);
	APCGUnitTestDummyActor::~APCGUnitTestDummyActor() {}
	void UPCGUnitTestDummyComponent::StaticRegisterNativesUPCGUnitTestDummyComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGUnitTestDummyComponent);
	UClass* Z_Construct_UClass_UPCGUnitTestDummyComponent_NoRegister()
	{
		return UPCGUnitTestDummyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntProperty_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_IntProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics::Class_MetaDataParams[] = {
		{ "Hidden", "" },
		{ "IncludePath", "Tests/Elements/PCGPropertyToParamDataElementTest.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics::NewProp_IntProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/Elements/PCGPropertyToParamDataElementTest.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics::NewProp_IntProperty = { "IntProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGUnitTestDummyComponent, IntProperty), METADATA_PARAMS(Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics::NewProp_IntProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics::NewProp_IntProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics::NewProp_IntProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGUnitTestDummyComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics::ClassParams = {
		&UPCGUnitTestDummyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics::PropPointers),
		0,
		0x04A802ACu,
		METADATA_PARAMS(Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGUnitTestDummyComponent()
	{
		if (!Z_Registration_Info_UClass_UPCGUnitTestDummyComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGUnitTestDummyComponent.OuterSingleton, Z_Construct_UClass_UPCGUnitTestDummyComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGUnitTestDummyComponent.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGUnitTestDummyComponent>()
	{
		return UPCGUnitTestDummyComponent::StaticClass();
	}
	UPCGUnitTestDummyComponent::UPCGUnitTestDummyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGUnitTestDummyComponent);
	UPCGUnitTestDummyComponent::~UPCGUnitTestDummyComponent() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGPropertyToParamDataElementTest_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGPropertyToParamDataElementTest_h_Statics::EnumInfo[] = {
		{ EPCGUnitTestDummyEnum_StaticEnum, TEXT("EPCGUnitTestDummyEnum"), &Z_Registration_Info_UEnum_EPCGUnitTestDummyEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1866370074U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGPropertyToParamDataElementTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APCGUnitTestDummyActor, APCGUnitTestDummyActor::StaticClass, TEXT("APCGUnitTestDummyActor"), &Z_Registration_Info_UClass_APCGUnitTestDummyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCGUnitTestDummyActor), 3261954179U) },
		{ Z_Construct_UClass_UPCGUnitTestDummyComponent, UPCGUnitTestDummyComponent::StaticClass, TEXT("UPCGUnitTestDummyComponent"), &Z_Registration_Info_UClass_UPCGUnitTestDummyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGUnitTestDummyComponent), 2940445444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGPropertyToParamDataElementTest_h_3375728088(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGPropertyToParamDataElementTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGPropertyToParamDataElementTest_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGPropertyToParamDataElementTest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Tests_Elements_PCGPropertyToParamDataElementTest_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
