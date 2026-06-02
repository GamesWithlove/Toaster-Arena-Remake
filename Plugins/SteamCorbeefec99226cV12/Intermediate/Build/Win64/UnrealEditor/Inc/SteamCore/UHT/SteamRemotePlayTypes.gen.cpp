// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamRemotePlay/SteamRemotePlayTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamRemotePlayTypes() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESteamCoreDeviceFormFactor ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreDeviceFormFactor;
static UEnum* ESteamCoreDeviceFormFactor_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreDeviceFormFactor.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreDeviceFormFactor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreDeviceFormFactor"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreDeviceFormFactor.OuterSingleton;
}
template<> STEAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamCoreDeviceFormFactor>()
{
	return ESteamCoreDeviceFormFactor_StaticEnum();
}
struct Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "Computer.Name", "ESteamCoreDeviceFormFactor::Computer" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "Phone.Name", "ESteamCoreDeviceFormFactor::Phone" },
		{ "Tablet.Name", "ESteamCoreDeviceFormFactor::Tablet" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
		{ "TV.Name", "ESteamCoreDeviceFormFactor::TV" },
		{ "Unknown.Name", "ESteamCoreDeviceFormFactor::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreDeviceFormFactor::Unknown", (int64)ESteamCoreDeviceFormFactor::Unknown },
		{ "ESteamCoreDeviceFormFactor::Phone", (int64)ESteamCoreDeviceFormFactor::Phone },
		{ "ESteamCoreDeviceFormFactor::Tablet", (int64)ESteamCoreDeviceFormFactor::Tablet },
		{ "ESteamCoreDeviceFormFactor::Computer", (int64)ESteamCoreDeviceFormFactor::Computer },
		{ "ESteamCoreDeviceFormFactor::TV", (int64)ESteamCoreDeviceFormFactor::TV },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	"ESteamCoreDeviceFormFactor",
	"ESteamCoreDeviceFormFactor",
	Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreDeviceFormFactor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreDeviceFormFactor.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreDeviceFormFactor.InnerSingleton;
}
// ********** End Enum ESteamCoreDeviceFormFactor **************************************************

// ********** Begin ScriptStruct FSteamRemotePlaySessionConnected **********************************
struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamRemotePlaySessionConnected); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamRemotePlaySessionConnected); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamRemotePlaySessionConnected constinit property declarations **
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSteamRemotePlaySessionConnected constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamRemotePlaySessionConnected>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamRemotePlaySessionConnected;
class UScriptStruct* FSteamRemotePlaySessionConnected::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamRemotePlaySessionConnected.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamRemotePlaySessionConnected.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamRemotePlaySessionConnected"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamRemotePlaySessionConnected.OuterSingleton;
	}

// ********** Begin ScriptStruct FSteamRemotePlaySessionConnected Property Definitions *************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamRemotePlaySessionConnected, SessionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionID_MetaData), NewProp_SessionID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewProp_SessionID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSteamRemotePlaySessionConnected Property Definitions ***************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SteamRemotePlaySessionConnected",
	Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers),
	sizeof(FSteamRemotePlaySessionConnected),
	alignof(FSteamRemotePlaySessionConnected),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamRemotePlaySessionConnected.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamRemotePlaySessionConnected.InnerSingleton, Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamRemotePlaySessionConnected.InnerSingleton);
}
// ********** End ScriptStruct FSteamRemotePlaySessionConnected ************************************

// ********** Begin ScriptStruct FSteamRemotePlaySessionDisconnected *******************************
struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamRemotePlaySessionDisconnected); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamRemotePlaySessionDisconnected); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamRemotePlaySessionDisconnected constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSteamRemotePlaySessionDisconnected constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamRemotePlaySessionDisconnected>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamRemotePlaySessionDisconnected;
class UScriptStruct* FSteamRemotePlaySessionDisconnected::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamRemotePlaySessionDisconnected.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamRemotePlaySessionDisconnected.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamRemotePlaySessionDisconnected"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamRemotePlaySessionDisconnected.OuterSingleton;
	}

// ********** Begin ScriptStruct FSteamRemotePlaySessionDisconnected Property Definitions **********
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamRemotePlaySessionDisconnected, SessionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionID_MetaData), NewProp_SessionID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewProp_SessionID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSteamRemotePlaySessionDisconnected Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"SteamRemotePlaySessionDisconnected",
	Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers),
	sizeof(FSteamRemotePlaySessionDisconnected),
	alignof(FSteamRemotePlaySessionDisconnected),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamRemotePlaySessionDisconnected.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamRemotePlaySessionDisconnected.InnerSingleton, Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamRemotePlaySessionDisconnected.InnerSingleton);
}
// ********** End ScriptStruct FSteamRemotePlaySessionDisconnected *********************************

// ********** Begin Delegate FOnSteamRemotePlaySessionConnected ************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnSteamRemotePlaySessionConnected_Parms
	{
		FSteamRemotePlaySessionConnected Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSteamRemotePlaySessionConnected constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSteamRemotePlaySessionConnected constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSteamRemotePlaySessionConnected Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamRemotePlaySessionConnected_Parms, Data), Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 213609238
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSteamRemotePlaySessionConnected Property Definitions *****************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamRemotePlaySessionConnected__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamRemotePlaySessionConnected_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamRemotePlaySessionConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamRemotePlaySessionConnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionConnected, FSteamRemotePlaySessionConnected const& Data)
{
	struct _Script_SteamCore_eventOnSteamRemotePlaySessionConnected_Parms
	{
		FSteamRemotePlaySessionConnected Data;
	};
	_Script_SteamCore_eventOnSteamRemotePlaySessionConnected_Parms Parms;
	Parms.Data=Data;
	OnSteamRemotePlaySessionConnected.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamRemotePlaySessionConnected **************************************

// ********** Begin Delegate FOnSteamRemotePlaySessionDisconnected *********************************
struct Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnSteamRemotePlaySessionDisconnected_Parms
	{
		FSteamRemotePlaySessionDisconnected Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSteamRemotePlaySessionDisconnected constinit property declarations *
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSteamRemotePlaySessionDisconnected constinit property declarations ***
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSteamRemotePlaySessionDisconnected Property Definitions ************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamRemotePlaySessionDisconnected_Parms, Data), Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1927193022
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSteamRemotePlaySessionDisconnected Property Definitions **************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamRemotePlaySessionDisconnected__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamRemotePlaySessionDisconnected_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamRemotePlaySessionDisconnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamRemotePlaySessionDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionDisconnected, FSteamRemotePlaySessionDisconnected const& Data)
{
	struct _Script_SteamCore_eventOnSteamRemotePlaySessionDisconnected_Parms
	{
		FSteamRemotePlaySessionDisconnected Data;
	};
	_Script_SteamCore_eventOnSteamRemotePlaySessionDisconnected_Parms Parms;
	Parms.Data=Data;
	OnSteamRemotePlaySessionDisconnected.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamRemotePlaySessionDisconnected ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h__Script_SteamCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamCoreDeviceFormFactor_StaticEnum, TEXT("ESteamCoreDeviceFormFactor"), &Z_Registration_Info_UEnum_ESteamCoreDeviceFormFactor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2281913305U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamRemotePlaySessionConnected::StaticStruct, Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewStructOps, TEXT("SteamRemotePlaySessionConnected"),&Z_Registration_Info_UScriptStruct_FSteamRemotePlaySessionConnected, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamRemotePlaySessionConnected), 213609238U) },
		{ FSteamRemotePlaySessionDisconnected::StaticStruct, Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewStructOps, TEXT("SteamRemotePlaySessionDisconnected"),&Z_Registration_Info_UScriptStruct_FSteamRemotePlaySessionDisconnected, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamRemotePlaySessionDisconnected), 1927193022U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h__Script_SteamCore_4267765495{
	TEXT("/Script/SteamCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h__Script_SteamCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h__Script_SteamCore_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h__Script_SteamCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h__Script_SteamCore_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
