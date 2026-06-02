// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryBitDataEntry.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLowEntryBitDataEntry() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryBitDataEntry();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryBitDataEntry_NoRegister();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryDouble_NoRegister();
LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLong_NoRegister();
UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULowEntryBitDataEntry ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULowEntryBitDataEntry;
UClass* ULowEntryBitDataEntry::GetPrivateStaticClass()
{
	using TClass = ULowEntryBitDataEntry;
	if (!Z_Registration_Info_UClass_ULowEntryBitDataEntry.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LowEntryBitDataEntry"),
			Z_Registration_Info_UClass_ULowEntryBitDataEntry.InnerSingleton,
			StaticRegisterNativesULowEntryBitDataEntry,
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
	return Z_Registration_Info_UClass_ULowEntryBitDataEntry.InnerSingleton;
}
UClass* Z_Construct_UClass_ULowEntryBitDataEntry_NoRegister()
{
	return ULowEntryBitDataEntry::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULowEntryBitDataEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryBitDataEntry.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegerValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LongValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LongBytesValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoubleValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoubleBytesValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BooleanValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringUtf8Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteArrayValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegerArrayValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LongArrayValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LongBytesArrayValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatArrayValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoubleArrayValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoubleBytesArrayValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BooleanArrayValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringUtf8ArrayValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataEntry.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULowEntryBitDataEntry constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerValue;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_LongValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LongBytesValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DoubleValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoubleBytesValue;
	static void NewProp_BooleanValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BooleanValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringUtf8Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteArrayValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteArrayValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerArrayValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IntegerArrayValue;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_LongArrayValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LongArrayValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LongBytesArrayValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LongBytesArrayValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArrayValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArrayValue;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DoubleArrayValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoubleArrayValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoubleBytesArrayValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoubleBytesArrayValue;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BooleanArrayValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BooleanArrayValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringUtf8ArrayValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StringUtf8ArrayValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULowEntryBitDataEntry constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryBitDataEntry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULowEntryBitDataEntry_Statics

// ********** Begin Class ULowEntryBitDataEntry Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, Type), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_ByteValue = { "ByteValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, ByteValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteValue_MetaData), NewProp_ByteValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_IntegerValue = { "IntegerValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, IntegerValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegerValue_MetaData), NewProp_IntegerValue_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_LongValue = { "LongValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, LongValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LongValue_MetaData), NewProp_LongValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_LongBytesValue = { "LongBytesValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, LongBytesValue), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LongBytesValue_MetaData), NewProp_LongBytesValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValue_MetaData), NewProp_FloatValue_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_DoubleValue = { "DoubleValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, DoubleValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoubleValue_MetaData), NewProp_DoubleValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_DoubleBytesValue = { "DoubleBytesValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, DoubleBytesValue), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoubleBytesValue_MetaData), NewProp_DoubleBytesValue_MetaData) };
void Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_BooleanValue_SetBit(void* Obj)
{
	((ULowEntryBitDataEntry*)Obj)->BooleanValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_BooleanValue = { "BooleanValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULowEntryBitDataEntry), &Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_BooleanValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BooleanValue_MetaData), NewProp_BooleanValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_StringUtf8Value = { "StringUtf8Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, StringUtf8Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringUtf8Value_MetaData), NewProp_StringUtf8Value_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_ByteArrayValue_Inner = { "ByteArrayValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_ByteArrayValue = { "ByteArrayValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, ByteArrayValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteArrayValue_MetaData), NewProp_ByteArrayValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_IntegerArrayValue_Inner = { "IntegerArrayValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_IntegerArrayValue = { "IntegerArrayValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, IntegerArrayValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegerArrayValue_MetaData), NewProp_IntegerArrayValue_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_LongArrayValue_Inner = { "LongArrayValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_LongArrayValue = { "LongArrayValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, LongArrayValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LongArrayValue_MetaData), NewProp_LongArrayValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_LongBytesArrayValue_Inner = { "LongBytesArrayValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_LongBytesArrayValue = { "LongBytesArrayValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, LongBytesArrayValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LongBytesArrayValue_MetaData), NewProp_LongBytesArrayValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_FloatArrayValue_Inner = { "FloatArrayValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_FloatArrayValue = { "FloatArrayValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, FloatArrayValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatArrayValue_MetaData), NewProp_FloatArrayValue_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_DoubleArrayValue_Inner = { "DoubleArrayValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_DoubleArrayValue = { "DoubleArrayValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, DoubleArrayValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoubleArrayValue_MetaData), NewProp_DoubleArrayValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_DoubleBytesArrayValue_Inner = { "DoubleBytesArrayValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_DoubleBytesArrayValue = { "DoubleBytesArrayValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, DoubleBytesArrayValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoubleBytesArrayValue_MetaData), NewProp_DoubleBytesArrayValue_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_BooleanArrayValue_Inner = { "BooleanArrayValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_BooleanArrayValue = { "BooleanArrayValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, BooleanArrayValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BooleanArrayValue_MetaData), NewProp_BooleanArrayValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_StringUtf8ArrayValue_Inner = { "StringUtf8ArrayValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_StringUtf8ArrayValue = { "StringUtf8ArrayValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULowEntryBitDataEntry, StringUtf8ArrayValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringUtf8ArrayValue_MetaData), NewProp_StringUtf8ArrayValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryBitDataEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_ByteValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_IntegerValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_LongValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_LongBytesValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_FloatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_DoubleValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_DoubleBytesValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_BooleanValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_StringUtf8Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_ByteArrayValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_ByteArrayValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_IntegerArrayValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_IntegerArrayValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_LongArrayValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_LongArrayValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_LongBytesArrayValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_LongBytesArrayValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_FloatArrayValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_FloatArrayValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_DoubleArrayValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_DoubleArrayValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_DoubleBytesArrayValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_DoubleBytesArrayValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_BooleanArrayValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_BooleanArrayValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_StringUtf8ArrayValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataEntry_Statics::NewProp_StringUtf8ArrayValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataEntry_Statics::PropPointers) < 2048);
// ********** End Class ULowEntryBitDataEntry Property Definitions *********************************
UObject* (*const Z_Construct_UClass_ULowEntryBitDataEntry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataEntry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryBitDataEntry_Statics::ClassParams = {
	&ULowEntryBitDataEntry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULowEntryBitDataEntry_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataEntry_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_ULowEntryBitDataEntry_Statics::Class_MetaDataParams)
};
void ULowEntryBitDataEntry::StaticRegisterNativesULowEntryBitDataEntry()
{
}
UClass* Z_Construct_UClass_ULowEntryBitDataEntry()
{
	if (!Z_Registration_Info_UClass_ULowEntryBitDataEntry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryBitDataEntry.OuterSingleton, Z_Construct_UClass_ULowEntryBitDataEntry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULowEntryBitDataEntry.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULowEntryBitDataEntry);
ULowEntryBitDataEntry::~ULowEntryBitDataEntry() {}
// ********** End Class ULowEntryBitDataEntry ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryBitDataEntry_h__Script_LowEntryExtendedStandardLibrary_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryBitDataEntry, ULowEntryBitDataEntry::StaticClass, TEXT("ULowEntryBitDataEntry"), &Z_Registration_Info_UClass_ULowEntryBitDataEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryBitDataEntry), 2557979169U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryBitDataEntry_h__Script_LowEntryExtendedStandardLibrary_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryBitDataEntry_h__Script_LowEntryExtendedStandardLibrary_3181111853{
	TEXT("/Script/LowEntryExtendedStandardLibrary"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryBitDataEntry_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_LEExtend7b5bed5a4575V27_Source_LowEntryExtendedStandardLibrary_Public_Classes_LowEntryBitDataEntry_h__Script_LowEntryExtendedStandardLibrary_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
