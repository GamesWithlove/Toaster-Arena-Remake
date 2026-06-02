// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/SteamWebTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamWebTypes() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult();
STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamValueType();
STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_ESubsystemWeb();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
STEAMCOREWEB_API UScriptStruct* Z_Construct_UScriptStruct_FSteamCoreJson();
STEAMCOREWEB_API UScriptStruct* Z_Construct_UScriptStruct_FWebAppsGetAppList();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSteamCoreWebCallback ***********************************************
struct Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature_Statics
{
	struct _Script_SteamCoreWeb_eventOnSteamCoreWebCallback_Parms
	{
		FString data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSteamCoreWebCallback constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSteamCoreWebCallback constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSteamCoreWebCallback Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCoreWeb_eventOnSteamCoreWebCallback_Parms, data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) };
void Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCoreWeb_eventOnSteamCoreWebCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCoreWeb_eventOnSteamCoreWebCallback_Parms), &Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSteamCoreWebCallback Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCoreWeb, nullptr, "OnSteamCoreWebCallback__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature_Statics::_Script_SteamCoreWeb_eventOnSteamCoreWebCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature_Statics::_Script_SteamCoreWeb_eventOnSteamCoreWebCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamCoreWebCallback_DelegateWrapper(const FScriptDelegate& OnSteamCoreWebCallback, const FString& data, bool bWasSuccessful)
{
	struct _Script_SteamCoreWeb_eventOnSteamCoreWebCallback_Parms
	{
		FString data;
		bool bWasSuccessful;
	};
	_Script_SteamCoreWeb_eventOnSteamCoreWebCallback_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnSteamCoreWebCallback.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamCoreWebCallback *************************************************

// ********** Begin Delegate FOnSteamCoreWebAsyncCallback ******************************************
struct Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature_Statics
{
	struct _Script_SteamCoreWeb_eventOnSteamCoreWebAsyncCallback_Parms
	{
		FString data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSteamCoreWebAsyncCallback constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSteamCoreWebAsyncCallback constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSteamCoreWebAsyncCallback Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCoreWeb_eventOnSteamCoreWebAsyncCallback_Parms, data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) };
void Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCoreWeb_eventOnSteamCoreWebAsyncCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCoreWeb_eventOnSteamCoreWebAsyncCallback_Parms), &Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSteamCoreWebAsyncCallback Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCoreWeb, nullptr, "OnSteamCoreWebAsyncCallback__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature_Statics::_Script_SteamCoreWeb_eventOnSteamCoreWebAsyncCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature_Statics::_Script_SteamCoreWeb_eventOnSteamCoreWebAsyncCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamCoreWebAsyncCallback_DelegateWrapper(const FMulticastScriptDelegate& OnSteamCoreWebAsyncCallback, const FString& data, bool bWasSuccessful)
{
	struct _Script_SteamCoreWeb_eventOnSteamCoreWebAsyncCallback_Parms
	{
		FString data;
		bool bWasSuccessful;
	};
	_Script_SteamCoreWeb_eventOnSteamCoreWebAsyncCallback_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnSteamCoreWebAsyncCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamCoreWebAsyncCallback ********************************************

// ********** Begin Enum ESubsystemWeb *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubsystemWeb;
static UEnum* ESubsystemWeb_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESubsystemWeb.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESubsystemWeb.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCoreWeb_ESubsystemWeb, (UObject*)Z_Construct_UPackage__Script_SteamCoreWeb(), TEXT("ESubsystemWeb"));
	}
	return Z_Registration_Info_UEnum_ESubsystemWeb.OuterSingleton;
}
template<> STEAMCOREWEB_NON_ATTRIBUTED_API UEnum* StaticEnum<ESubsystemWeb>()
{
	return ESubsystemWeb_StaticEnum();
}
struct Z_Construct_UEnum_SteamCoreWeb_ESubsystemWeb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Apps.Name", "ESubsystemWeb::Apps" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Broadcast.Name", "ESubsystemWeb::Broadcast" },
		{ "CheatReporting.Name", "ESubsystemWeb::CheatReporting" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Global enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "Community.Name", "ESubsystemWeb::Community" },
		{ "Econ.Name", "ESubsystemWeb::Econ" },
		{ "EconMarket.Name", "ESubsystemWeb::EconMarket" },
		{ "Economy.Name", "ESubsystemWeb::Economy" },
		{ "GameInventory.Name", "ESubsystemWeb::GameInventory" },
		{ "GameNotifications.Name", "ESubsystemWeb::GameNotifications" },
		{ "GameServers.Name", "ESubsystemWeb::GameServers" },
		{ "GameServerStats.Name", "ESubsystemWeb::GameServerStats" },
		{ "Inventory.Name", "ESubsystemWeb::Inventory" },
		{ "Leaderboards.Name", "ESubsystemWeb::Leaderboards" },
		{ "LobbyMatchmaking.Name", "ESubsystemWeb::LobbyMatchmaking" },
		{ "MicroTxn.Name", "ESubsystemWeb::MicroTxn" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebTypes.h" },
		{ "News.Name", "ESubsystemWeb::News" },
		{ "PlayerService.Name", "ESubsystemWeb::PlayerService" },
		{ "PublishedFile.Name", "ESubsystemWeb::PublishedFile" },
		{ "PublishedItemSearch.Name", "ESubsystemWeb::PublishedItemSearch" },
		{ "PublishedItemVoting.Name", "ESubsystemWeb::PublishedItemVoting" },
		{ "RemoteStorage.Name", "ESubsystemWeb::RemoteStorage" },
		{ "SteamCoreWeb.Hidden", "" },
		{ "SteamCoreWeb.Name", "ESubsystemWeb::SteamCoreWeb" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Global enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
		{ "User.Name", "ESubsystemWeb::User" },
		{ "UserAuth.Name", "ESubsystemWeb::UserAuth" },
		{ "UserStats.Name", "ESubsystemWeb::UserStats" },
		{ "Workshop.Name", "ESubsystemWeb::Workshop" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESubsystemWeb::SteamCoreWeb", (int64)ESubsystemWeb::SteamCoreWeb },
		{ "ESubsystemWeb::Apps", (int64)ESubsystemWeb::Apps },
		{ "ESubsystemWeb::Broadcast", (int64)ESubsystemWeb::Broadcast },
		{ "ESubsystemWeb::CheatReporting", (int64)ESubsystemWeb::CheatReporting },
		{ "ESubsystemWeb::Community", (int64)ESubsystemWeb::Community },
		{ "ESubsystemWeb::Econ", (int64)ESubsystemWeb::Econ },
		{ "ESubsystemWeb::EconMarket", (int64)ESubsystemWeb::EconMarket },
		{ "ESubsystemWeb::Economy", (int64)ESubsystemWeb::Economy },
		{ "ESubsystemWeb::GameInventory", (int64)ESubsystemWeb::GameInventory },
		{ "ESubsystemWeb::GameNotifications", (int64)ESubsystemWeb::GameNotifications },
		{ "ESubsystemWeb::GameServers", (int64)ESubsystemWeb::GameServers },
		{ "ESubsystemWeb::GameServerStats", (int64)ESubsystemWeb::GameServerStats },
		{ "ESubsystemWeb::Inventory", (int64)ESubsystemWeb::Inventory },
		{ "ESubsystemWeb::LobbyMatchmaking", (int64)ESubsystemWeb::LobbyMatchmaking },
		{ "ESubsystemWeb::Leaderboards", (int64)ESubsystemWeb::Leaderboards },
		{ "ESubsystemWeb::MicroTxn", (int64)ESubsystemWeb::MicroTxn },
		{ "ESubsystemWeb::News", (int64)ESubsystemWeb::News },
		{ "ESubsystemWeb::PlayerService", (int64)ESubsystemWeb::PlayerService },
		{ "ESubsystemWeb::PublishedFile", (int64)ESubsystemWeb::PublishedFile },
		{ "ESubsystemWeb::PublishedItemSearch", (int64)ESubsystemWeb::PublishedItemSearch },
		{ "ESubsystemWeb::PublishedItemVoting", (int64)ESubsystemWeb::PublishedItemVoting },
		{ "ESubsystemWeb::RemoteStorage", (int64)ESubsystemWeb::RemoteStorage },
		{ "ESubsystemWeb::User", (int64)ESubsystemWeb::User },
		{ "ESubsystemWeb::UserAuth", (int64)ESubsystemWeb::UserAuth },
		{ "ESubsystemWeb::UserStats", (int64)ESubsystemWeb::UserStats },
		{ "ESubsystemWeb::Workshop", (int64)ESubsystemWeb::Workshop },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCoreWeb_ESubsystemWeb_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCoreWeb_ESubsystemWeb_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	nullptr,
	"ESubsystemWeb",
	"ESubsystemWeb",
	Z_Construct_UEnum_SteamCoreWeb_ESubsystemWeb_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreWeb_ESubsystemWeb_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreWeb_ESubsystemWeb_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCoreWeb_ESubsystemWeb_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCoreWeb_ESubsystemWeb()
{
	if (!Z_Registration_Info_UEnum_ESubsystemWeb.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubsystemWeb.InnerSingleton, Z_Construct_UEnum_SteamCoreWeb_ESubsystemWeb_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESubsystemWeb.InnerSingleton;
}
// ********** End Enum ESubsystemWeb ***************************************************************

// ********** Begin Enum ESteamValueType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamValueType;
static UEnum* ESteamValueType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamValueType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCoreWeb_ESteamValueType, (UObject*)Z_Construct_UPackage__Script_SteamCoreWeb(), TEXT("ESteamValueType"));
	}
	return Z_Registration_Info_UEnum_ESteamValueType.OuterSingleton;
}
template<> STEAMCOREWEB_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamValueType>()
{
	return ESteamValueType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCoreWeb_ESteamValueType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BOOL.Name", "ESteamValueType::BOOL" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebTypes.h" },
		{ "NUMBER.Name", "ESteamValueType::NUMBER" },
		{ "STRING.Name", "ESteamValueType::STRING" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamValueType::STRING", (int64)ESteamValueType::STRING },
		{ "ESteamValueType::NUMBER", (int64)ESteamValueType::NUMBER },
		{ "ESteamValueType::BOOL", (int64)ESteamValueType::BOOL },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCoreWeb_ESteamValueType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCoreWeb_ESteamValueType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	nullptr,
	"ESteamValueType",
	"ESteamValueType",
	Z_Construct_UEnum_SteamCoreWeb_ESteamValueType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreWeb_ESteamValueType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreWeb_ESteamValueType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCoreWeb_ESteamValueType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamValueType()
{
	if (!Z_Registration_Info_UEnum_ESteamValueType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamValueType.InnerSingleton, Z_Construct_UEnum_SteamCoreWeb_ESteamValueType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamValueType.InnerSingleton;
}
// ********** End Enum ESteamValueType *************************************************************

// ********** Begin Enum ESteamJsonResult **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamJsonResult;
static UEnum* ESteamJsonResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamJsonResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamJsonResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, (UObject*)Z_Construct_UPackage__Script_SteamCoreWeb(), TEXT("ESteamJsonResult"));
	}
	return Z_Registration_Info_UEnum_ESteamJsonResult.OuterSingleton;
}
template<> STEAMCOREWEB_NON_ATTRIBUTED_API UEnum* StaticEnum<ESteamJsonResult>()
{
	return ESteamJsonResult_StaticEnum();
}
struct Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Found.Name", "ESteamJsonResult::Found" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebTypes.h" },
		{ "NotFound.Name", "ESteamJsonResult::NotFound" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamJsonResult::Found", (int64)ESteamJsonResult::Found },
		{ "ESteamJsonResult::NotFound", (int64)ESteamJsonResult::NotFound },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	nullptr,
	"ESteamJsonResult",
	"ESteamJsonResult",
	Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult()
{
	if (!Z_Registration_Info_UEnum_ESteamJsonResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamJsonResult.InnerSingleton, Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamJsonResult.InnerSingleton;
}
// ********** End Enum ESteamJsonResult ************************************************************

// ********** Begin ScriptStruct FSteamCoreJson ****************************************************
struct Z_Construct_UScriptStruct_FSteamCoreJson_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSteamCoreJson); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSteamCoreJson); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs \n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "SteamCoreWeb" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "Category", "SteamCoreWeb" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[] = {
		{ "Category", "SteamCoreWeb" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[] = {
		{ "Category", "SteamCoreWeb" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "SteamCoreWeb" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSteamCoreJson constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Number;
	static void NewProp_Bool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSteamCoreJson constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamCoreJson>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSteamCoreJson_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSteamCoreJson;
class UScriptStruct* FSteamCoreJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamCoreJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSteamCoreJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamCoreJson, (UObject*)Z_Construct_UPackage__Script_SteamCoreWeb(), TEXT("SteamCoreJson"));
	}
	return Z_Registration_Info_UScriptStruct_FSteamCoreJson.OuterSingleton;
	}

// ********** Begin ScriptStruct FSteamCoreJson Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamCoreJson, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamCoreJson, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamCoreJson, Number), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Number_MetaData), NewProp_Number_MetaData) };
void Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Bool_SetBit(void* Obj)
{
	((FSteamCoreJson*)Obj)->Bool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSteamCoreJson), &Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bool_MetaData), NewProp_Bool_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamCoreJson, Type), Z_Construct_UEnum_SteamCoreWeb_ESteamValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1538178713
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamCoreJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Number,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Bool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamCoreJson_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSteamCoreJson Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamCoreJson_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	nullptr,
	&NewStructOps,
	"SteamCoreJson",
	Z_Construct_UScriptStruct_FSteamCoreJson_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamCoreJson_Statics::PropPointers),
	sizeof(FSteamCoreJson),
	alignof(FSteamCoreJson),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamCoreJson_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamCoreJson_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamCoreJson()
{
	if (!Z_Registration_Info_UScriptStruct_FSteamCoreJson.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSteamCoreJson.InnerSingleton, Z_Construct_UScriptStruct_FSteamCoreJson_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSteamCoreJson.InnerSingleton);
}
// ********** End ScriptStruct FSteamCoreJson ******************************************************

// ********** Begin ScriptStruct FWebAppsGetAppList ************************************************
struct Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWebAppsGetAppList); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWebAppsGetAppList); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWebAppsGetAppList constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWebAppsGetAppList constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebAppsGetAppList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWebAppsGetAppList;
class UScriptStruct* FWebAppsGetAppList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWebAppsGetAppList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWebAppsGetAppList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebAppsGetAppList, (UObject*)Z_Construct_UPackage__Script_SteamCoreWeb(), TEXT("WebAppsGetAppList"));
	}
	return Z_Registration_Info_UScriptStruct_FWebAppsGetAppList.OuterSingleton;
	}

// ********** Begin ScriptStruct FWebAppsGetAppList Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWebAppsGetAppList, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWebAppsGetAppList, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWebAppsGetAppList Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	nullptr,
	&NewStructOps,
	"WebAppsGetAppList",
	Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::PropPointers),
	sizeof(FWebAppsGetAppList),
	alignof(FWebAppsGetAppList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWebAppsGetAppList()
{
	if (!Z_Registration_Info_UScriptStruct_FWebAppsGetAppList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWebAppsGetAppList.InnerSingleton, Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWebAppsGetAppList.InnerSingleton);
}
// ********** End ScriptStruct FWebAppsGetAppList **************************************************

// ********** Begin Delegate FOnSteamCoreWebAppListCallback ****************************************
struct Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics
{
	struct _Script_SteamCoreWeb_eventOnSteamCoreWebAppListCallback_Parms
	{
		TArray<FWebAppsGetAppList> Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSteamCoreWebAppListCallback constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSteamCoreWebAppListCallback constinit property declarations **********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSteamCoreWebAppListCallback Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWebAppsGetAppList, METADATA_PARAMS(0, nullptr) }; // 532025641
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCoreWeb_eventOnSteamCoreWebAppListCallback_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 532025641
void Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCoreWeb_eventOnSteamCoreWebAppListCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCoreWeb_eventOnSteamCoreWebAppListCallback_Parms), &Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSteamCoreWebAppListCallback Property Definitions *********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCoreWeb, nullptr, "OnSteamCoreWebAppListCallback__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::_Script_SteamCoreWeb_eventOnSteamCoreWebAppListCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::_Script_SteamCoreWeb_eventOnSteamCoreWebAppListCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamCoreWebAppListCallback_DelegateWrapper(const FScriptDelegate& OnSteamCoreWebAppListCallback, TArray<FWebAppsGetAppList> const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCoreWeb_eventOnSteamCoreWebAppListCallback_Parms
	{
		TArray<FWebAppsGetAppList> Data;
		bool bWasSuccessful;
	};
	_Script_SteamCoreWeb_eventOnSteamCoreWebAppListCallback_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnSteamCoreWebAppListCallback.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamCoreWebAppListCallback ******************************************

// ********** Begin Delegate FOnSteamCoreWebAppListAsyncCallback ***********************************
struct Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics
{
	struct _Script_SteamCoreWeb_eventOnSteamCoreWebAppListAsyncCallback_Parms
	{
		TArray<FWebAppsGetAppList> data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamWebTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSteamCoreWebAppListAsyncCallback constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSteamCoreWebAppListAsyncCallback constinit property declarations *****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSteamCoreWebAppListAsyncCallback Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWebAppsGetAppList, METADATA_PARAMS(0, nullptr) }; // 532025641
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCoreWeb_eventOnSteamCoreWebAppListAsyncCallback_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 532025641
void Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCoreWeb_eventOnSteamCoreWebAppListAsyncCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCoreWeb_eventOnSteamCoreWebAppListAsyncCallback_Parms), &Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::NewProp_data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSteamCoreWebAppListAsyncCallback Property Definitions ****************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCoreWeb, nullptr, "OnSteamCoreWebAppListAsyncCallback__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::_Script_SteamCoreWeb_eventOnSteamCoreWebAppListAsyncCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::_Script_SteamCoreWeb_eventOnSteamCoreWebAppListAsyncCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamCoreWebAppListAsyncCallback_DelegateWrapper(const FMulticastScriptDelegate& OnSteamCoreWebAppListAsyncCallback, TArray<FWebAppsGetAppList> const& data, bool bWasSuccessful)
{
	struct _Script_SteamCoreWeb_eventOnSteamCoreWebAppListAsyncCallback_Parms
	{
		TArray<FWebAppsGetAppList> data;
		bool bWasSuccessful;
	};
	_Script_SteamCoreWeb_eventOnSteamCoreWebAppListAsyncCallback_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnSteamCoreWebAppListAsyncCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSteamCoreWebAppListAsyncCallback *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h__Script_SteamCoreWeb_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESubsystemWeb_StaticEnum, TEXT("ESubsystemWeb"), &Z_Registration_Info_UEnum_ESubsystemWeb, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2550319479U) },
		{ ESteamValueType_StaticEnum, TEXT("ESteamValueType"), &Z_Registration_Info_UEnum_ESteamValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1538178713U) },
		{ ESteamJsonResult_StaticEnum, TEXT("ESteamJsonResult"), &Z_Registration_Info_UEnum_ESteamJsonResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2105524707U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamCoreJson::StaticStruct, Z_Construct_UScriptStruct_FSteamCoreJson_Statics::NewStructOps, TEXT("SteamCoreJson"),&Z_Registration_Info_UScriptStruct_FSteamCoreJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamCoreJson), 3784198142U) },
		{ FWebAppsGetAppList::StaticStruct, Z_Construct_UScriptStruct_FWebAppsGetAppList_Statics::NewStructOps, TEXT("WebAppsGetAppList"),&Z_Registration_Info_UScriptStruct_FWebAppsGetAppList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebAppsGetAppList), 532025641U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h__Script_SteamCoreWeb_983465307{
	TEXT("/Script/SteamCoreWeb"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h__Script_SteamCoreWeb_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h__Script_SteamCoreWeb_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h__Script_SteamCoreWeb_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamWebTypes_h__Script_SteamCoreWeb_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
