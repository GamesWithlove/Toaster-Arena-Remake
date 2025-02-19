// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamScreenshots/SteamScreenshotsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamScreenshotsTypes() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotReady();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotRequested();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamVRScreenshotType;
	static UEnum* ESteamVRScreenshotType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamVRScreenshotType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamVRScreenshotType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamVRScreenshotType"));
		}
		return Z_Registration_Info_UEnum_ESteamVRScreenshotType.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamVRScreenshotType>()
	{
		return ESteamVRScreenshotType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Statics::Enumerators[] = {
		{ "ESteamVRScreenshotType::None", (int64)ESteamVRScreenshotType::None },
		{ "ESteamVRScreenshotType::Mono", (int64)ESteamVRScreenshotType::Mono },
		{ "ESteamVRScreenshotType::Stereo", (int64)ESteamVRScreenshotType::Stereo },
		{ "ESteamVRScreenshotType::MonoCubemap", (int64)ESteamVRScreenshotType::MonoCubemap },
		{ "ESteamVRScreenshotType::MonoPanorama", (int64)ESteamVRScreenshotType::MonoPanorama },
		{ "ESteamVRScreenshotType::StereoPanorama", (int64)ESteamVRScreenshotType::StereoPanorama },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
		{ "Mono.Name", "ESteamVRScreenshotType::Mono" },
		{ "MonoCubemap.Name", "ESteamVRScreenshotType::MonoCubemap" },
		{ "MonoPanorama.Name", "ESteamVRScreenshotType::MonoPanorama" },
		{ "None.Name", "ESteamVRScreenshotType::None" },
		{ "Stereo.Name", "ESteamVRScreenshotType::Stereo" },
		{ "StereoPanorama.Name", "ESteamVRScreenshotType::StereoPanorama" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamVRScreenshotType",
		"ESteamVRScreenshotType",
		Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType()
	{
		if (!Z_Registration_Info_UEnum_ESteamVRScreenshotType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamVRScreenshotType.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamVRScreenshotType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScreenshotHandle;
class UScriptStruct* FScreenshotHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenshotHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScreenshotHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenshotHandle, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ScreenshotHandle"));
	}
	return Z_Registration_Info_UScriptStruct_ScreenshotHandle.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FScreenshotHandle>()
{
	return FScreenshotHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScreenshotHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScreenshotHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenshotHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenshotHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"ScreenshotHandle",
		sizeof(FScreenshotHandle),
		alignof(FScreenshotHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScreenshotHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_ScreenshotHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScreenshotHandle.InnerSingleton, Z_Construct_UScriptStruct_FScreenshotHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScreenshotHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScreenshotReady;
class UScriptStruct* FScreenshotReady::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenshotReady.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScreenshotReady.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenshotReady, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ScreenshotReady"));
	}
	return Z_Registration_Info_UScriptStruct_ScreenshotReady.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FScreenshotReady>()
{
	return FScreenshotReady::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScreenshotReady_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotReady_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenshotReady>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Handle_MetaData[] = {
		{ "Category", "Screenshots" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScreenshotReady, Handle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Handle_MetaData)) }; // 1235984578
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Screenshots" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScreenshotReady, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Result_MetaData)) }; // 2739532951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenshotReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenshotReady_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"ScreenshotReady",
		sizeof(FScreenshotReady),
		alignof(FScreenshotReady),
		Z_Construct_UScriptStruct_FScreenshotReady_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotReady_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotReady_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotReady_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScreenshotReady()
	{
		if (!Z_Registration_Info_UScriptStruct_ScreenshotReady.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScreenshotReady.InnerSingleton, Z_Construct_UScriptStruct_FScreenshotReady_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScreenshotReady.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScreenshotRequested;
class UScriptStruct* FScreenshotRequested::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenshotRequested.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScreenshotRequested.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenshotRequested, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ScreenshotRequested"));
	}
	return Z_Registration_Info_UScriptStruct_ScreenshotRequested.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FScreenshotRequested>()
{
	return FScreenshotRequested::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScreenshotRequested_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotRequested_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScreenshotRequested_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenshotRequested>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenshotRequested_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"ScreenshotRequested",
		sizeof(FScreenshotRequested),
		alignof(FScreenshotRequested),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotRequested_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotRequested_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScreenshotRequested()
	{
		if (!Z_Registration_Info_UScriptStruct_ScreenshotRequested.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScreenshotRequested.InnerSingleton, Z_Construct_UScriptStruct_FScreenshotRequested_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScreenshotRequested.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnScreenshotReady_Parms
		{
			FScreenshotReady Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnScreenshotReady_Parms, Data), Z_Construct_UScriptStruct_FScreenshotReady, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3781002907
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnScreenshotReady__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::_Script_SteamCore_eventOnScreenshotReady_Parms), Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnScreenshotRequested_Parms
		{
			FScreenshotRequested Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnScreenshotRequested_Parms, Data), Z_Construct_UScriptStruct_FScreenshotRequested, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1589158672
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamScreenshots/SteamScreenshotsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnScreenshotRequested__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::_Script_SteamCore_eventOnScreenshotRequested_Parms), Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature_Statics::FuncParams);
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
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h_Statics::EnumInfo[] = {
		{ ESteamVRScreenshotType_StaticEnum, TEXT("ESteamVRScreenshotType"), &Z_Registration_Info_UEnum_ESteamVRScreenshotType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3164935080U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h_Statics::ScriptStructInfo[] = {
		{ FScreenshotHandle::StaticStruct, Z_Construct_UScriptStruct_FScreenshotHandle_Statics::NewStructOps, TEXT("ScreenshotHandle"), &Z_Registration_Info_UScriptStruct_ScreenshotHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenshotHandle), 1235984578U) },
		{ FScreenshotReady::StaticStruct, Z_Construct_UScriptStruct_FScreenshotReady_Statics::NewStructOps, TEXT("ScreenshotReady"), &Z_Registration_Info_UScriptStruct_ScreenshotReady, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenshotReady), 3781002907U) },
		{ FScreenshotRequested::StaticStruct, Z_Construct_UScriptStruct_FScreenshotRequested_Statics::NewStructOps, TEXT("ScreenshotRequested"), &Z_Registration_Info_UScriptStruct_ScreenshotRequested, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenshotRequested), 1589158672U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h_3641541533(TEXT("/Script/SteamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshotsTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
