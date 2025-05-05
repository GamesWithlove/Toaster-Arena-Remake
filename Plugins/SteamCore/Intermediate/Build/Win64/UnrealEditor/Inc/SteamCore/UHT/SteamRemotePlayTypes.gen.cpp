// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamRemotePlay/SteamRemotePlayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamRemotePlayTypes() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreDeviceFormFactor;
	static UEnum* ESteamCoreDeviceFormFactor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreDeviceFormFactor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamCoreDeviceFormFactor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreDeviceFormFactor"));
		}
		return Z_Registration_Info_UEnum_ESteamCoreDeviceFormFactor.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreDeviceFormFactor>()
	{
		return ESteamCoreDeviceFormFactor_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Statics::Enumerators[] = {
		{ "ESteamCoreDeviceFormFactor::Unknown", (int64)ESteamCoreDeviceFormFactor::Unknown },
		{ "ESteamCoreDeviceFormFactor::Phone", (int64)ESteamCoreDeviceFormFactor::Phone },
		{ "ESteamCoreDeviceFormFactor::Tablet", (int64)ESteamCoreDeviceFormFactor::Tablet },
		{ "ESteamCoreDeviceFormFactor::Computer", (int64)ESteamCoreDeviceFormFactor::Computer },
		{ "ESteamCoreDeviceFormFactor::TV", (int64)ESteamCoreDeviceFormFactor::TV },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "Computer.Name", "ESteamCoreDeviceFormFactor::Computer" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "Phone.Name", "ESteamCoreDeviceFormFactor::Phone" },
		{ "Tablet.Name", "ESteamCoreDeviceFormFactor::Tablet" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
		{ "TV.Name", "ESteamCoreDeviceFormFactor::TV" },
		{ "Unknown.Name", "ESteamCoreDeviceFormFactor::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamCoreDeviceFormFactor",
		"ESteamCoreDeviceFormFactor",
		Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor()
	{
		if (!Z_Registration_Info_UEnum_ESteamCoreDeviceFormFactor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreDeviceFormFactor.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamCoreDeviceFormFactor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected;
class UScriptStruct* FSteamRemotePlaySessionConnected::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamRemotePlaySessionConnected"));
	}
	return Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamRemotePlaySessionConnected>()
{
	return FSteamRemotePlaySessionConnected::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamRemotePlaySessionConnected>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewProp_SessionID_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamRemotePlaySessionConnected, SessionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewProp_SessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewProp_SessionID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewProp_SessionID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamRemotePlaySessionConnected",
		sizeof(FSteamRemotePlaySessionConnected),
		alignof(FSteamRemotePlaySessionConnected),
		Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.InnerSingleton, Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected;
class UScriptStruct* FSteamRemotePlaySessionDisconnected::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamRemotePlaySessionDisconnected"));
	}
	return Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamRemotePlaySessionDisconnected>()
{
	return FSteamRemotePlaySessionDisconnected::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SessionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamRemotePlaySessionDisconnected>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewProp_SessionID_MetaData[] = {
		{ "Category", "RemotePlay" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamRemotePlaySessionDisconnected, SessionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewProp_SessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewProp_SessionID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewProp_SessionID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamRemotePlaySessionDisconnected",
		sizeof(FSteamRemotePlaySessionDisconnected),
		alignof(FSteamRemotePlaySessionDisconnected),
		Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.InnerSingleton, Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSteamRemotePlaySessionConnected_Parms
		{
			FSteamRemotePlaySessionConnected Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamRemotePlaySessionConnected_Parms, Data), Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 945428450
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamRemotePlaySessionConnected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamRemotePlaySessionConnected_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSteamRemotePlaySessionDisconnected_Parms
		{
			FSteamRemotePlaySessionDisconnected Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamRemotePlaySessionDisconnected_Parms, Data), Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3126193304
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemotePlay/SteamRemotePlayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamRemotePlaySessionDisconnected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::_Script_SteamCore_eventOnSteamRemotePlaySessionDisconnected_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature_Statics::FuncParams);
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
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h_Statics::EnumInfo[] = {
		{ ESteamCoreDeviceFormFactor_StaticEnum, TEXT("ESteamCoreDeviceFormFactor"), &Z_Registration_Info_UEnum_ESteamCoreDeviceFormFactor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3502350453U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h_Statics::ScriptStructInfo[] = {
		{ FSteamRemotePlaySessionConnected::StaticStruct, Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics::NewStructOps, TEXT("SteamRemotePlaySessionConnected"), &Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionConnected, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamRemotePlaySessionConnected), 945428450U) },
		{ FSteamRemotePlaySessionDisconnected::StaticStruct, Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics::NewStructOps, TEXT("SteamRemotePlaySessionDisconnected"), &Z_Registration_Info_UScriptStruct_SteamRemotePlaySessionDisconnected, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamRemotePlaySessionDisconnected), 3126193304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h_978441387(TEXT("/Script/SteamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemotePlay_SteamRemotePlayTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
