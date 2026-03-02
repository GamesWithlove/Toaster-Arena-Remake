// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGTransformPoints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGTransformPoints() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGTransformPointsSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGTransformPointsSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGTransformPointsSettings::StaticRegisterNativesUPCGTransformPointsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGTransformPointsSettings);
	UClass* Z_Construct_UClass_UPCGTransformPointsSettings_NoRegister()
	{
		return UPCGTransformPointsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGTransformPointsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyToAttribute_MetaData[];
#endif
		static void NewProp_bApplyToAttribute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyToAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteOffset_MetaData[];
#endif
		static void NewProp_bAbsoluteOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteRotation_MetaData[];
#endif
		static void NewProp_bAbsoluteRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteScale_MetaData[];
#endif
		static void NewProp_bAbsoluteScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUniformScale_MetaData[];
#endif
		static void NewProp_bUniformScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUniformScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputeSeed_MetaData[];
#endif
		static void NewProp_bRecomputeSeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputeSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGTransformPointsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTransformPointsSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGTransformPoints.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGTransformPoints.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bApplyToAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGTransformPoints.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bApplyToAttribute_SetBit(void* Obj)
	{
		((UPCGTransformPointsSettings*)Obj)->bApplyToAttribute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bApplyToAttribute = { "bApplyToAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGTransformPointsSettings), &Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bApplyToAttribute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bApplyToAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bApplyToAttribute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bApplyToAttribute" },
		{ "ModuleRelativePath", "Public/Elements/PCGTransformPoints.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTransformPointsSettings, AttributeName), METADATA_PARAMS(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_OffsetMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGTransformPoints.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_OffsetMin = { "OffsetMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTransformPointsSettings, OffsetMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_OffsetMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_OffsetMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_OffsetMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGTransformPoints.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_OffsetMax = { "OffsetMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTransformPointsSettings, OffsetMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_OffsetMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_OffsetMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Set offset in world space */" },
		{ "ModuleRelativePath", "Public/Elements/PCGTransformPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Set offset in world space" },
	};
#endif
	void Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteOffset_SetBit(void* Obj)
	{
		((UPCGTransformPointsSettings*)Obj)->bAbsoluteOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteOffset = { "bAbsoluteOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGTransformPointsSettings), &Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_RotationMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGTransformPoints.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_RotationMin = { "RotationMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTransformPointsSettings, RotationMin), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_RotationMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_RotationMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_RotationMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGTransformPoints.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_RotationMax = { "RotationMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTransformPointsSettings, RotationMax), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_RotationMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_RotationMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Set rotation directly instead of additively */" },
		{ "ModuleRelativePath", "Public/Elements/PCGTransformPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Set rotation directly instead of additively" },
	};
#endif
	void Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteRotation_SetBit(void* Obj)
	{
		((UPCGTransformPointsSettings*)Obj)->bAbsoluteRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteRotation = { "bAbsoluteRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGTransformPointsSettings), &Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_ScaleMin_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGTransformPoints.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_ScaleMin = { "ScaleMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTransformPointsSettings, ScaleMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_ScaleMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_ScaleMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_ScaleMax_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGTransformPoints.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_ScaleMax = { "ScaleMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGTransformPointsSettings, ScaleMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_ScaleMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_ScaleMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Set scale directly instead of multiplicatively */" },
		{ "ModuleRelativePath", "Public/Elements/PCGTransformPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Set scale directly instead of multiplicatively" },
	};
#endif
	void Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteScale_SetBit(void* Obj)
	{
		((UPCGTransformPointsSettings*)Obj)->bAbsoluteScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteScale = { "bAbsoluteScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGTransformPointsSettings), &Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bUniformScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Scale uniformly on each axis. Uses the X component of ScaleMin and ScaleMax. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGTransformPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale uniformly on each axis. Uses the X component of ScaleMin and ScaleMax." },
	};
#endif
	void Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bUniformScale_SetBit(void* Obj)
	{
		((UPCGTransformPointsSettings*)Obj)->bUniformScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bUniformScale = { "bUniformScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGTransformPointsSettings), &Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bUniformScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bUniformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bUniformScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bRecomputeSeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Recompute the seed for each new point using its new location */" },
		{ "EditCondition", "!bApplyToAttribute" },
		{ "ModuleRelativePath", "Public/Elements/PCGTransformPoints.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Recompute the seed for each new point using its new location" },
	};
#endif
	void Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bRecomputeSeed_SetBit(void* Obj)
	{
		((UPCGTransformPointsSettings*)Obj)->bRecomputeSeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bRecomputeSeed = { "bRecomputeSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGTransformPointsSettings), &Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bRecomputeSeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bRecomputeSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bRecomputeSeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGTransformPointsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bApplyToAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_OffsetMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_OffsetMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_RotationMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_RotationMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_ScaleMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_ScaleMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bAbsoluteScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bUniformScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGTransformPointsSettings_Statics::NewProp_bRecomputeSeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGTransformPointsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGTransformPointsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGTransformPointsSettings_Statics::ClassParams = {
		&UPCGTransformPointsSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGTransformPointsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTransformPointsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGTransformPointsSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGTransformPointsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGTransformPointsSettings.OuterSingleton, Z_Construct_UClass_UPCGTransformPointsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGTransformPointsSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGTransformPointsSettings>()
	{
		return UPCGTransformPointsSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGTransformPointsSettings);
	UPCGTransformPointsSettings::~UPCGTransformPointsSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGTransformPoints_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGTransformPoints_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGTransformPointsSettings, UPCGTransformPointsSettings::StaticClass, TEXT("UPCGTransformPointsSettings"), &Z_Registration_Info_UClass_UPCGTransformPointsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGTransformPointsSettings), 3165281982U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGTransformPoints_h_2089880430(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGTransformPoints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGTransformPoints_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
