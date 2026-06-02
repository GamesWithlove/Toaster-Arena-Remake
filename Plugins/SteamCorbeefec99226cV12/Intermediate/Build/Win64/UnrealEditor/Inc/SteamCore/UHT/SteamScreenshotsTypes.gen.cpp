// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamScreenshots/SteamScreenshotsTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamScreenshotsTypes() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotHandle();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotReady();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotRequested();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESteamVRScreenshotType ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamVRScreenshotType;
static UEnum* ESteamVRScreenshotType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamVRScreenshotType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamVRScreenshotType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamVRScreenshotType"));
	}
	return Z_Registration_Info_UEnum_ESteamVRScreenshotType.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamVRScreenshotType>()
{
	return ESteamVRScreenshotType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
		{ "Mono.Name", "ESteamVRScreenshotType::Mono" },
		{ "MonoCubemap.Name", "ESteamVRScreenshotType::MonoCubemap" },
		{ "MonoPanorama.Name", "ESteamVRScreenshotType::MonoPanorama" },
		{ "None.Name", "ESteamVRScreenshotType::None" },
		{ "Stereo.Name", "ESteamVRScreenshotType::Stereo" },
		{ "StereoPanorama.Name", "ESteamVRScreenshotType::StereoPanorama" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamVRScreenshotType::None", (int64)ESteamVRScreenshotType::None },
		{ "ESteamVRScreenshotType::Mono", (int64)ESteamVRScreenshotType::Mono },
		{ "ESteamVRScreenshotType::Stereo", (int64)ESteamVRScreenshotType::Stereo },
		{ "ESteamVRScreenshotType::MonoCubemap", (int64)ESteamVRScreenshotType::MonoCubemap },
		{ "ESteamVRScreenshotType::MonoPanorama", (int64)ESteamVRScreenshotType::MonoPanorama },
		{ "ESteamVRScreenshotType::StereoPanorama", (int64)ESteamVRScreenshotType::StereoPanorama },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamVRScreenshotType",
	"ESteamVRScreenshotType",
	Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType()
{
	if (!Z_Registration_Info_UEnum_ESteamVRScreenshotType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamVRScreenshotType.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamVRScreenshotType.InnerSingleton;
}
// ********** End Enum ESteamVRScreenshotType ******************************************************

// ********** Begin ScriptStruct FScreenshotHandle *************************************************
struct Z_Construct_UScriptStruct_FScreenshotHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FScreenshotHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FScreenshotHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FScreenshotHandle constinit property declarations *****************
// ********** End ScriptStruct FScreenshotHandle constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenshotHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FScreenshotHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FScreenshotHandle;
class UScriptStruct* FScreenshotHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FScreenshotHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FScreenshotHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenshotHandle, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ScreenshotHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FScreenshotHandle.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenshotHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"ScreenshotHandle",
	nullptr,
	0,
	sizeof(FScreenshotHandle),
	alignof(FScreenshotHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScreenshotHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScreenshotHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FScreenshotHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FScreenshotHandle.InnerSingleton, Z_Construct_UScriptStruct_FScreenshotHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FScreenshotHandle.InnerSingleton);
}
// ********** End ScriptStruct FScreenshotHandle ***************************************************

// ********** Begin ScriptStruct FScreenshotReady **************************************************
struct Z_Construct_UScriptStruct_FScreenshotReady_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FScreenshotReady); }
	static inline consteval int16 GetStructAlignment() { return alignof(FScreenshotReady); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "Category", "Screenshots" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Screenshots" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FScreenshotReady constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FScreenshotReady constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenshotReady>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FScreenshotReady_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FScreenshotReady;
class UScriptStruct* FScreenshotReady::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FScreenshotReady.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FScreenshotReady.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenshotReady, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ScreenshotReady"));
	}
	return Z_Registration_Info_UScriptStruct_FScreenshotReady.OuterSingleton;
	}

// ********** Begin ScriptStruct FScreenshotReady Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenshotReady, Handle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 2218202444
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScreenshotReady, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenshotReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotReady_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FScreenshotReady Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenshotReady_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"ScreenshotReady",
	Z_Construct_UScriptStruct_FScreenshotReady_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotReady_Statics::PropPointers),
	sizeof(FScreenshotReady),
	alignof(FScreenshotReady),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotReady_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScreenshotReady_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScreenshotReady()
{
	if (!Z_Registration_Info_UScriptStruct_FScreenshotReady.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FScreenshotReady.InnerSingleton, Z_Construct_UScriptStruct_FScreenshotReady_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FScreenshotReady.InnerSingleton);
}
// ********** End ScriptStruct FScreenshotReady ****************************************************

// ********** Begin ScriptStruct FScreenshotRequested **********************************************
struct Z_Construct_UScriptStruct_FScreenshotRequested_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FScreenshotRequested); }
	static inline consteval int16 GetStructAlignment() { return alignof(FScreenshotRequested); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FScreenshotRequested constinit property declarations **************
// ********** End ScriptStruct FScreenshotRequested constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenshotRequested>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FScreenshotRequested_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FScreenshotRequested;
class UScriptStruct* FScreenshotRequested::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FScreenshotRequested.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FScreenshotRequested.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenshotRequested, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ScreenshotRequested"));
	}
	return Z_Registration_Info_UScriptStruct_FScreenshotRequested.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenshotRequested_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"ScreenshotRequested",
	nullptr,
	0,
	sizeof(FScreenshotRequested),
	alignof(FScreenshotRequested),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotRequested_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScreenshotRequested_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScreenshotRequested()
{
	if (!Z_Registration_Info_UScriptStruct_FScreenshotRequested.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FScreenshotRequested.InnerSingleton, Z_Construct_UScriptStruct_FScreenshotRequested_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FScreenshotRequested.InnerSingleton);
}
// ********** End ScriptStruct FScreenshotRequested ************************************************

// ********** Begin Delegate FOnScreenshotReady ****************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnScreenshotReady_Parms
	{
		FScreenshotReady Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnScreenshotReady constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnScreenshotReady constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnScreenshotReady Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnScreenshotReady_Parms, Data), Z_Construct_UScriptStruct_FScreenshotReady, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3936271858
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnScreenshotReady Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnScreenshotReady__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::_Script_SteamCore_eventOnScreenshotReady_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::_Script_SteamCore_eventOnScreenshotReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnScreenshotReady_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotReady, FScreenshotReady const& Data)
{
	struct _Script_SteamCore_eventOnScreenshotReady_Parms
	{
		FScreenshotReady Data;
	};
	_Script_SteamCore_eventOnScreenshotReady_Parms Parms;
	Parms.Data=Data;
	OnScreenshotReady.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnScreenshotReady ******************************************************

// ********** Begin Delegate FOnScreenshotRequested ************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnScreenshotRequested_Parms
	{
		FScreenshotRequested Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnScreenshotRequested constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnScreenshotRequested constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnScreenshotRequested Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnScreenshotRequested_Parms, Data), Z_Construct_UScriptStruct_FScreenshotRequested, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 918720419
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnScreenshotRequested Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnScreenshotRequested__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::_Script_SteamCore_eventOnScreenshotRequested_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::_Script_SteamCore_eventOnScreenshotRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnScreenshotRequested_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotRequested, FScreenshotRequested const& Data)
{
	struct _Script_SteamCore_eventOnScreenshotRequested_Parms
	{
		FScreenshotRequested Data;
	};
	_Script_SteamCore_eventOnScreenshotRequested_Parms Parms;
	Parms.Data=Data;
	OnScreenshotRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnScreenshotRequested **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h__Script_SteamCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamVRScreenshotType_StaticEnum, TEXT("ESteamVRScreenshotType"), &Z_Registration_Info_UEnum_ESteamVRScreenshotType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2663465095U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FScreenshotHandle::StaticStruct, Z_Construct_UScriptStruct_FScreenshotHandle_Statics::NewStructOps, TEXT("ScreenshotHandle"),&Z_Registration_Info_UScriptStruct_FScreenshotHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenshotHandle), 2218202444U) },
		{ FScreenshotReady::StaticStruct, Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewStructOps, TEXT("ScreenshotReady"),&Z_Registration_Info_UScriptStruct_FScreenshotReady, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenshotReady), 3936271858U) },
		{ FScreenshotRequested::StaticStruct, Z_Construct_UScriptStruct_FScreenshotRequested_Statics::NewStructOps, TEXT("ScreenshotRequested"),&Z_Registration_Info_UScriptStruct_FScreenshotRequested, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenshotRequested), 918720419U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h__Script_SteamCore_269221096{
	TEXT("/Script/SteamCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h__Script_SteamCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h__Script_SteamCore_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h__Script_SteamCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h__Script_SteamCore_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
