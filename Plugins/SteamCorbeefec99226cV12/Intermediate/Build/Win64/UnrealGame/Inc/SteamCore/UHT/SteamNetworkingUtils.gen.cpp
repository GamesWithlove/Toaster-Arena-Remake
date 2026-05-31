// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamNetworkingUtils/SteamNetworkingUtils.h"
#include "Engine/GameInstance.h"
#include "SteamNetworkingUtils/SteamNetworkingUtilsTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamNetworkingUtils() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UClass* Z_Construct_UClass_UNetworkingUtils();
STEAMCORE_API UClass* Z_Construct_UClass_UNetworkingUtils_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamNetworkPingLocation();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNetworkingUtils Function CheckPingDataUpToDate **************************
struct Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics
{
	struct NetworkingUtils_eventCheckPingDataUpToDate_Parms
	{
		float MaxAgeSeconds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|NetworkingUtils" },
		{ "Comment", "/**\n\x09* Check if the ping data of sufficient recency is available, and if it's too old, start refreshing it.\n\x09* \n\x09* Please only call this function when you really do need to force an immediate refresh of the data. \n\x09* (For example, in response to a specific user input to refresh this information.) \n\x09* Don't call it \"just in case\", before every connection, etc. That will cause extra traffic to be sent for no benefit. \n\x09* The library will automatically refresh the information as needed.\n\x09*\n\x09* Returns true if sufficiently recent data is already available.\n\x09* Returns false if sufficiently recent data is not available. In this case, ping measurement is initiated, if it is not already active. \n\x09* (You cannot restart a measurement already in progress.)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtils.h" },
		{ "ToolTip", "Check if the ping data of sufficient recency is available, and if it's too old, start refreshing it.\n\nPlease only call this function when you really do need to force an immediate refresh of the data.\n(For example, in response to a specific user input to refresh this information.)\nDon't call it \"just in case\", before every connection, etc. That will cause extra traffic to be sent for no benefit.\nThe library will automatically refresh the information as needed.\n\nReturns true if sufficiently recent data is already available.\nReturns false if sufficiently recent data is not available. In this case, ping measurement is initiated, if it is not already active.\n(You cannot restart a measurement already in progress.)" },
	};
#endif // WITH_METADATA

// ********** Begin Function CheckPingDataUpToDate constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAgeSeconds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CheckPingDataUpToDate constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CheckPingDataUpToDate Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_MaxAgeSeconds = { "MaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkingUtils_eventCheckPingDataUpToDate_Parms, MaxAgeSeconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NetworkingUtils_eventCheckPingDataUpToDate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NetworkingUtils_eventCheckPingDataUpToDate_Parms), &Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_MaxAgeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::PropPointers) < 2048);
// ********** End Function CheckPingDataUpToDate Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNetworkingUtils, nullptr, "CheckPingDataUpToDate", 	Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::NetworkingUtils_eventCheckPingDataUpToDate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::NetworkingUtils_eventCheckPingDataUpToDate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkingUtils::execCheckPingDataUpToDate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAgeSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckPingDataUpToDate(Z_Param_MaxAgeSeconds);
	P_NATIVE_END;
}
// ********** End Class UNetworkingUtils Function CheckPingDataUpToDate ****************************

// ********** Begin Class UNetworkingUtils Function ConvertPingLocationToString ********************
struct Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics
{
	struct NetworkingUtils_eventConvertPingLocationToString_Parms
	{
		FSteamNetworkPingLocation Location;
		FString String;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|NetworkingUtils" },
		{ "Comment", "/**\n\x09* Convert a ping location into a text format suitable for sending over the wire. \n\x09*\n\x09* The format is a compact and human readable. However, it is subject to change so please do not parse it yourself. \n\x09* Your buffer must be at least k_cchMaxSteamNetworkingPingLocationString bytes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtils.h" },
		{ "ToolTip", "Convert a ping location into a text format suitable for sending over the wire.\n\nThe format is a compact and human readable. However, it is subject to change so please do not parse it yourself.\nYour buffer must be at least k_cchMaxSteamNetworkingPingLocationString bytes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertPingLocationToString constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertPingLocationToString constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertPingLocationToString Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkingUtils_eventConvertPingLocationToString_Parms, Location), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) }; // 1997842830
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkingUtils_eventConvertPingLocationToString_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::PropPointers) < 2048);
// ********** End Function ConvertPingLocationToString Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNetworkingUtils, nullptr, "ConvertPingLocationToString", 	Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::NetworkingUtils_eventConvertPingLocationToString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::NetworkingUtils_eventConvertPingLocationToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkingUtils::execConvertPingLocationToString)
{
	P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_Location);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNetworkingUtils::ConvertPingLocationToString(Z_Param_Out_Location,Z_Param_Out_String);
	P_NATIVE_END;
}
// ********** End Class UNetworkingUtils Function ConvertPingLocationToString **********************

// ********** Begin Class UNetworkingUtils Function EstimatePingTimeBetweenTwoLocations ************
struct Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics
{
	struct NetworkingUtils_eventEstimatePingTimeBetweenTwoLocations_Parms
	{
		FSteamNetworkPingLocation Location1;
		FSteamNetworkPingLocation Location2;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|NetworkingUtils" },
		{ "Comment", "/**\n\x09* Estimate the round-trip latency between two arbitrary locations, in milliseconds. \n\x09*\n\x09* This is a conservative estimate, based on routing through the relay network. \n\x09* For most basic relayed connections, this ping time will be pretty accurate, since it will be based on the route likely to be actually used.\n\x09*\n\x09* If a direct IP route is used (perhaps via NAT traversal), then the route will be different, and the ping time might be better.\n\x09* Or it might actually be a bit worse! Standard IP routing is frequently suboptimal!\n\x09*\n\x09* But even in this case, the estimate obtained using this method is a reasonable upper bound on the ping time.\n\x09* (Also it has the advantage of returning immediately and not sending any packets.)\n\x09*\n\x09* In a few cases we might not able to estimate the route.\n\x09* In this case a negative value is returned. k_nSteamNetworkingPing_Failed means the reason was because of some networking difficulty. \n\x09* (Failure to ping, etc) k_nSteamNetworkingPing_Unknown is returned if we cannot currently answer the question for some other reason.\n\x09*\n\x09* Do you need to be able to do this from a backend/matchmaking server? You are looking for the \"game coordinator\" library. See steamdatagramrelay for more info on how to obtain the game coordinator SDK.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtils.h" },
		{ "ToolTip", "Estimate the round-trip latency between two arbitrary locations, in milliseconds.\n\nThis is a conservative estimate, based on routing through the relay network.\nFor most basic relayed connections, this ping time will be pretty accurate, since it will be based on the route likely to be actually used.\n\nIf a direct IP route is used (perhaps via NAT traversal), then the route will be different, and the ping time might be better.\nOr it might actually be a bit worse! Standard IP routing is frequently suboptimal!\n\nBut even in this case, the estimate obtained using this method is a reasonable upper bound on the ping time.\n(Also it has the advantage of returning immediately and not sending any packets.)\n\nIn a few cases we might not able to estimate the route.\nIn this case a negative value is returned. k_nSteamNetworkingPing_Failed means the reason was because of some networking difficulty.\n(Failure to ping, etc) k_nSteamNetworkingPing_Unknown is returned if we cannot currently answer the question for some other reason.\n\nDo you need to be able to do this from a backend/matchmaking server? You are looking for the \"game coordinator\" library. See steamdatagramrelay for more info on how to obtain the game coordinator SDK." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location1_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EstimatePingTimeBetweenTwoLocations constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EstimatePingTimeBetweenTwoLocations constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EstimatePingTimeBetweenTwoLocations Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location1 = { "Location1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkingUtils_eventEstimatePingTimeBetweenTwoLocations_Parms, Location1), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location1_MetaData), NewProp_Location1_MetaData) }; // 1997842830
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location2 = { "Location2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkingUtils_eventEstimatePingTimeBetweenTwoLocations_Parms, Location2), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location2_MetaData), NewProp_Location2_MetaData) }; // 1997842830
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkingUtils_eventEstimatePingTimeBetweenTwoLocations_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::PropPointers) < 2048);
// ********** End Function EstimatePingTimeBetweenTwoLocations Property Definitions ****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNetworkingUtils, nullptr, "EstimatePingTimeBetweenTwoLocations", 	Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NetworkingUtils_eventEstimatePingTimeBetweenTwoLocations_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NetworkingUtils_eventEstimatePingTimeBetweenTwoLocations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkingUtils::execEstimatePingTimeBetweenTwoLocations)
{
	P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_Location1);
	P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_Location2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EstimatePingTimeBetweenTwoLocations(Z_Param_Out_Location1,Z_Param_Out_Location2);
	P_NATIVE_END;
}
// ********** End Class UNetworkingUtils Function EstimatePingTimeBetweenTwoLocations **************

// ********** Begin Class UNetworkingUtils Function EstimatePingTimeFromLocalHost ******************
struct Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics
{
	struct NetworkingUtils_eventEstimatePingTimeFromLocalHost_Parms
	{
		FSteamNetworkPingLocation RemoteLocation;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|NetworkingUtils" },
		{ "Comment", "/**\n\x09* Same as EstimatePingTime, but assumes that one location is the local host. This is a bit faster, especially if you need to calculate a bunch of these in a loop to find the fastest one.\n\x09*\n\x09* In rare cases this might return a slightly different estimate than combining GetLocalPingLocation with EstimatePingTimeBetweenTwoLocations.\n\x09* That's because this function uses a slightly more complete set of information about what route would be taken.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtils.h" },
		{ "ToolTip", "Same as EstimatePingTime, but assumes that one location is the local host. This is a bit faster, especially if you need to calculate a bunch of these in a loop to find the fastest one.\n\nIn rare cases this might return a slightly different estimate than combining GetLocalPingLocation with EstimatePingTimeBetweenTwoLocations.\nThat's because this function uses a slightly more complete set of information about what route would be taken." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EstimatePingTimeFromLocalHost constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EstimatePingTimeFromLocalHost constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EstimatePingTimeFromLocalHost Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::NewProp_RemoteLocation = { "RemoteLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkingUtils_eventEstimatePingTimeFromLocalHost_Parms, RemoteLocation), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteLocation_MetaData), NewProp_RemoteLocation_MetaData) }; // 1997842830
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkingUtils_eventEstimatePingTimeFromLocalHost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::NewProp_RemoteLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::PropPointers) < 2048);
// ********** End Function EstimatePingTimeFromLocalHost Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNetworkingUtils, nullptr, "EstimatePingTimeFromLocalHost", 	Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::NetworkingUtils_eventEstimatePingTimeFromLocalHost_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::NetworkingUtils_eventEstimatePingTimeFromLocalHost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkingUtils::execEstimatePingTimeFromLocalHost)
{
	P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_RemoteLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EstimatePingTimeFromLocalHost(Z_Param_Out_RemoteLocation);
	P_NATIVE_END;
}
// ********** End Class UNetworkingUtils Function EstimatePingTimeFromLocalHost ********************

// ********** Begin Class UNetworkingUtils Function GetLocalPingLocation ***************************
struct Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics
{
	struct NetworkingUtils_eventGetLocalPingLocation_Parms
	{
		FSteamNetworkPingLocation Result;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|NetworkingUtils" },
		{ "Comment", "/**\n\x09* Return location info for the current host. Returns the approximate age of the data, in seconds, or -1 if no data is available.\n\x09*\n\x09* It takes a few seconds to initialize access to the relay network. If you call this very soon after calling InitializeRelayNetworkAccess, the data may not be available yet.\n\x09* This always return the most up-to-date information we have available right now, even if we are in the middle of re-calculating ping times.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtils.h" },
		{ "ToolTip", "Return location info for the current host. Returns the approximate age of the data, in seconds, or -1 if no data is available.\n\nIt takes a few seconds to initialize access to the relay network. If you call this very soon after calling InitializeRelayNetworkAccess, the data may not be available yet.\nThis always return the most up-to-date information we have available right now, even if we are in the middle of re-calculating ping times." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLocalPingLocation constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLocalPingLocation constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLocalPingLocation Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkingUtils_eventGetLocalPingLocation_Parms, Result), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(0, nullptr) }; // 1997842830
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkingUtils_eventGetLocalPingLocation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::PropPointers) < 2048);
// ********** End Function GetLocalPingLocation Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNetworkingUtils, nullptr, "GetLocalPingLocation", 	Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::NetworkingUtils_eventGetLocalPingLocation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::NetworkingUtils_eventGetLocalPingLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkingUtils::execGetLocalPingLocation)
{
	P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLocalPingLocation(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UNetworkingUtils Function GetLocalPingLocation *****************************

// ********** Begin Class UNetworkingUtils Function InitRelayNetworkAccess *************************
struct Z_Construct_UFunction_UNetworkingUtils_InitRelayNetworkAccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|NetworkingUtils" },
		{ "Comment", "/**\n\x09* If you know that you are going to be using the relay network (for example, because you anticipate making P2P connections), call this to initialize the relay network. If you do not call this, the initialization will be delayed until the first time you use a feature that requires access to the relay network, which will delay that first access.\n\x09*\n\x09* You can also call this to force a retry if the previous attempt has failed. \n\x09* Performing any action that requires access to the relay network will also trigger a retry, and so calling this function is never strictly necessary,\n\x09* but it can be useful to call it a program launch time, if access to the relay network is anticipated. \n\x09* Use GetRelayNetworkStatus or listen for SteamRelayNetworkStatus_t callbacks to know when initialization has completed. \n\x09* Typically initialization completes in a few seconds.\n\x09*\n\x09* Note: dedicated servers hosted in known data centers do *not* need to call this, since they do not make routing decisions. \n\x09* However, if the dedicated server will be using P2P functionality, it will act as a \"client\" and this should be called.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtils.h" },
		{ "ToolTip", "If you know that you are going to be using the relay network (for example, because you anticipate making P2P connections), call this to initialize the relay network. If you do not call this, the initialization will be delayed until the first time you use a feature that requires access to the relay network, which will delay that first access.\n\nYou can also call this to force a retry if the previous attempt has failed.\nPerforming any action that requires access to the relay network will also trigger a retry, and so calling this function is never strictly necessary,\nbut it can be useful to call it a program launch time, if access to the relay network is anticipated.\nUse GetRelayNetworkStatus or listen for SteamRelayNetworkStatus_t callbacks to know when initialization has completed.\nTypically initialization completes in a few seconds.\n\nNote: dedicated servers hosted in known data centers do *not* need to call this, since they do not make routing decisions.\nHowever, if the dedicated server will be using P2P functionality, it will act as a \"client\" and this should be called." },
	};
#endif // WITH_METADATA

// ********** Begin Function InitRelayNetworkAccess constinit property declarations ****************
// ********** End Function InitRelayNetworkAccess constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkingUtils_InitRelayNetworkAccess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNetworkingUtils, nullptr, "InitRelayNetworkAccess", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_InitRelayNetworkAccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkingUtils_InitRelayNetworkAccess_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UNetworkingUtils_InitRelayNetworkAccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkingUtils_InitRelayNetworkAccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkingUtils::execInitRelayNetworkAccess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitRelayNetworkAccess();
	P_NATIVE_END;
}
// ********** End Class UNetworkingUtils Function InitRelayNetworkAccess ***************************

// ********** Begin Class UNetworkingUtils Function ParsePingLocationString ************************
struct Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics
{
	struct NetworkingUtils_eventParsePingLocationString_Parms
	{
		FString String;
		FSteamNetworkPingLocation Result;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|NetworkingUtils" },
		{ "Comment", "/**\n\x09* Convert a ping location into a text format suitable for sending over the wire.\n\x09*\n\x09* The format is a compact and human readable. However, it is subject to change so please do not parse it yourself.\n\x09* Your buffer must be at least k_cchMaxSteamNetworkingPingLocationString bytes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtils.h" },
		{ "ToolTip", "Convert a ping location into a text format suitable for sending over the wire.\n\nThe format is a compact and human readable. However, it is subject to change so please do not parse it yourself.\nYour buffer must be at least k_cchMaxSteamNetworkingPingLocationString bytes." },
	};
#endif // WITH_METADATA

// ********** Begin Function ParsePingLocationString constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ParsePingLocationString constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ParsePingLocationString Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkingUtils_eventParsePingLocationString_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetworkingUtils_eventParsePingLocationString_Parms, Result), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(0, nullptr) }; // 1997842830
void Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NetworkingUtils_eventParsePingLocationString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NetworkingUtils_eventParsePingLocationString_Parms), &Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::PropPointers) < 2048);
// ********** End Function ParsePingLocationString Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNetworkingUtils, nullptr, "ParsePingLocationString", 	Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NetworkingUtils_eventParsePingLocationString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NetworkingUtils_eventParsePingLocationString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkingUtils::execParsePingLocationString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNetworkingUtils::ParsePingLocationString(Z_Param_String,Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UNetworkingUtils Function ParsePingLocationString **************************

// ********** Begin Class UNetworkingUtils *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UNetworkingUtils;
UClass* UNetworkingUtils::GetPrivateStaticClass()
{
	using TClass = UNetworkingUtils;
	if (!Z_Registration_Info_UClass_UNetworkingUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("NetworkingUtils"),
			Z_Registration_Info_UClass_UNetworkingUtils.InnerSingleton,
			StaticRegisterNativesUNetworkingUtils,
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
	return Z_Registration_Info_UClass_UNetworkingUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UNetworkingUtils_NoRegister()
{
	return UNetworkingUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNetworkingUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamNetworkingUtils/SteamNetworkingUtils.h" },
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UNetworkingUtils constinit property declarations *************************
// ********** End Class UNetworkingUtils constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CheckPingDataUpToDate"), .Pointer = &UNetworkingUtils::execCheckPingDataUpToDate },
		{ .NameUTF8 = UTF8TEXT("ConvertPingLocationToString"), .Pointer = &UNetworkingUtils::execConvertPingLocationToString },
		{ .NameUTF8 = UTF8TEXT("EstimatePingTimeBetweenTwoLocations"), .Pointer = &UNetworkingUtils::execEstimatePingTimeBetweenTwoLocations },
		{ .NameUTF8 = UTF8TEXT("EstimatePingTimeFromLocalHost"), .Pointer = &UNetworkingUtils::execEstimatePingTimeFromLocalHost },
		{ .NameUTF8 = UTF8TEXT("GetLocalPingLocation"), .Pointer = &UNetworkingUtils::execGetLocalPingLocation },
		{ .NameUTF8 = UTF8TEXT("InitRelayNetworkAccess"), .Pointer = &UNetworkingUtils::execInitRelayNetworkAccess },
		{ .NameUTF8 = UTF8TEXT("ParsePingLocationString"), .Pointer = &UNetworkingUtils::execParsePingLocationString },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate, "CheckPingDataUpToDate" }, // 1350349377
		{ &Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString, "ConvertPingLocationToString" }, // 3325806605
		{ &Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations, "EstimatePingTimeBetweenTwoLocations" }, // 1088841102
		{ &Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost, "EstimatePingTimeFromLocalHost" }, // 774564079
		{ &Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation, "GetLocalPingLocation" }, // 1075018498
		{ &Z_Construct_UFunction_UNetworkingUtils_InitRelayNetworkAccess, "InitRelayNetworkAccess" }, // 1573143646
		{ &Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString, "ParsePingLocationString" }, // 4030662757
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkingUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UNetworkingUtils_Statics
UObject* (*const Z_Construct_UClass_UNetworkingUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkingUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkingUtils_Statics::ClassParams = {
	&UNetworkingUtils::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkingUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkingUtils_Statics::Class_MetaDataParams)
};
void UNetworkingUtils::StaticRegisterNativesUNetworkingUtils()
{
	UClass* Class = UNetworkingUtils::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UNetworkingUtils_Statics::Funcs));
}
UClass* Z_Construct_UClass_UNetworkingUtils()
{
	if (!Z_Registration_Info_UClass_UNetworkingUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkingUtils.OuterSingleton, Z_Construct_UClass_UNetworkingUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetworkingUtils.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNetworkingUtils);
UNetworkingUtils::~UNetworkingUtils() {}
// ********** End Class UNetworkingUtils ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkingUtils, UNetworkingUtils::StaticClass, TEXT("UNetworkingUtils"), &Z_Registration_Info_UClass_UNetworkingUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkingUtils), 1160506997U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h__Script_SteamCore_1385787086{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamNetworkingUtils_SteamNetworkingUtils_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
