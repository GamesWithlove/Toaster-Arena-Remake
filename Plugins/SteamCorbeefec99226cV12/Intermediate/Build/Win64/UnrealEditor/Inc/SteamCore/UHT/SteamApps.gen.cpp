// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamApps/SteamApps.h"
#include "Engine/GameInstance.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamApps() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UClass* Z_Construct_UClass_UApps();
STEAMCORE_API UClass* Z_Construct_UClass_UApps_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnNewUrlLaunchParametersDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnTimedTrialStatusDelegate__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UApps Function BGetDLCDataByIndex ****************************************
struct Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics
{
	struct Apps_eventBGetDLCDataByIndex_Parms
	{
		int32 DLC;
		int32 AppID;
		bool bAvailable;
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns metadata for a DLC by index.\n\x09*\n\x09* @param\x09""DLC\x09\x09\x09\x09\x09index of the DLC to get between 0 and GetDLCCount.\n\x09* @param\x09""AppID\x09\x09\x09\x09Returns the App ID of the DLC.\n\x09* @param\x09""bAvailable\x09\x09\x09Returns whether the DLC is currently available.\n\x09* @param\x09Name\x09\x09\x09\x09Returns the name of the DLC by copying it into this buffer.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns metadata for a DLC by index.\n\n@param        DLC                                     index of the DLC to get between 0 and GetDLCCount.\n@param        AppID                           Returns the App ID of the DLC.\n@param        bAvailable                      Returns whether the DLC is currently available.\n@param        Name                            Returns the name of the DLC by copying it into this buffer." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BGetDLCDataByIndex constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_DLC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_bAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvailable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BGetDLCDataByIndex constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BGetDLCDataByIndex Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_DLC = { "DLC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventBGetDLCDataByIndex_Parms, DLC), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventBGetDLCDataByIndex_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable_SetBit(void* Obj)
{
	((Apps_eventBGetDLCDataByIndex_Parms*)Obj)->bAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable = { "bAvailable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Apps_eventBGetDLCDataByIndex_Parms), &Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventBGetDLCDataByIndex_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Apps_eventBGetDLCDataByIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Apps_eventBGetDLCDataByIndex_Parms), &Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_DLC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::PropPointers) < 2048);
// ********** End Function BGetDLCDataByIndex Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BGetDLCDataByIndex", 	Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::Apps_eventBGetDLCDataByIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::Apps_eventBGetDLCDataByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_BGetDLCDataByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execBGetDLCDataByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DLC);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppID);
	P_GET_UBOOL_REF(Z_Param_Out_bAvailable);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UApps::BGetDLCDataByIndex(Z_Param_DLC,Z_Param_Out_AppID,Z_Param_Out_bAvailable,Z_Param_Out_Name);
	P_NATIVE_END;
}
// ********** End Class UApps Function BGetDLCDataByIndex ******************************************

// ********** Begin Class UApps Function BIsAppInstalled *******************************************
struct Z_Construct_UFunction_UApps_BIsAppInstalled_Statics
{
	struct Apps_eventBIsAppInstalled_Parms
	{
		int32 AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if a specific app is installed.\n\x09*\n\x09* The app may not actually be owned by the current user, they may have it left over from a free weekend, etc.\n\x09* This only works for base applications, not Downloadable Content (DLC). Use BIsDlcInstalled for DLC instead.\n\x09*\n\x09* @param\x09""AppID\x09The App ID of the application to check.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if a specific app is installed.\n\nThe app may not actually be owned by the current user, they may have it left over from a free weekend, etc.\nThis only works for base applications, not Downloadable Content (DLC). Use BIsDlcInstalled for DLC instead.\n\n@param        AppID   The App ID of the application to check." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BIsAppInstalled constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsAppInstalled constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsAppInstalled Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventBIsAppInstalled_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Apps_eventBIsAppInstalled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Apps_eventBIsAppInstalled_Parms), &Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::PropPointers) < 2048);
// ********** End Function BIsAppInstalled Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsAppInstalled", 	Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::Apps_eventBIsAppInstalled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::Apps_eventBIsAppInstalled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_BIsAppInstalled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execBIsAppInstalled)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UApps::BIsAppInstalled(Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UApps Function BIsAppInstalled *********************************************

// ********** Begin Class UApps Function BIsCybercafe **********************************************
struct Z_Construct_UFunction_UApps_BIsCybercafe_Statics
{
	struct Apps_eventBIsCybercafe_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks whether the current App ID is for Cyber Cafes.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether the current App ID is for Cyber Cafes." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BIsCybercafe constinit property declarations **************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsCybercafe constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsCybercafe Property Definitions *************************************
void Z_Construct_UFunction_UApps_BIsCybercafe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Apps_eventBIsCybercafe_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsCybercafe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Apps_eventBIsCybercafe_Parms), &Z_Construct_UFunction_UApps_BIsCybercafe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsCybercafe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsCybercafe_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsCybercafe_Statics::PropPointers) < 2048);
// ********** End Function BIsCybercafe Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsCybercafe_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsCybercafe", 	Z_Construct_UFunction_UApps_BIsCybercafe_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsCybercafe_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_BIsCybercafe_Statics::Apps_eventBIsCybercafe_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsCybercafe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_BIsCybercafe_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_BIsCybercafe_Statics::Apps_eventBIsCybercafe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_BIsCybercafe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsCybercafe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execBIsCybercafe)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UApps::BIsCybercafe();
	P_NATIVE_END;
}
// ********** End Class UApps Function BIsCybercafe ************************************************

// ********** Begin Class UApps Function BIsDlcInstalled *******************************************
struct Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics
{
	struct Apps_eventBIsDlcInstalled_Parms
	{
		int32 AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if the user owns a specific DLC and if the DLC is installed\n\x09*\n\x09* @param\x09""AppID\x09The App ID of the DLC to check.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the user owns a specific DLC and if the DLC is installed\n\n@param        AppID   The App ID of the DLC to check." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BIsDlcInstalled constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsDlcInstalled constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsDlcInstalled Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventBIsDlcInstalled_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Apps_eventBIsDlcInstalled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Apps_eventBIsDlcInstalled_Parms), &Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::PropPointers) < 2048);
// ********** End Function BIsDlcInstalled Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsDlcInstalled", 	Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::Apps_eventBIsDlcInstalled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::Apps_eventBIsDlcInstalled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_BIsDlcInstalled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execBIsDlcInstalled)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UApps::BIsDlcInstalled(Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UApps Function BIsDlcInstalled *********************************************

// ********** Begin Class UApps Function BIsLowViolence ********************************************
struct Z_Construct_UFunction_UApps_BIsLowViolence_Statics
{
	struct Apps_eventBIsLowViolence_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if the license owned by the user provides low violence depots.\n\x09*\n\x09* Low violence depots are useful for copies sold in countries that have content restrictions.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the license owned by the user provides low violence depots.\n\nLow violence depots are useful for copies sold in countries that have content restrictions." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BIsLowViolence constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsLowViolence constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsLowViolence Property Definitions ***********************************
void Z_Construct_UFunction_UApps_BIsLowViolence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Apps_eventBIsLowViolence_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsLowViolence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Apps_eventBIsLowViolence_Parms), &Z_Construct_UFunction_UApps_BIsLowViolence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsLowViolence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsLowViolence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsLowViolence_Statics::PropPointers) < 2048);
// ********** End Function BIsLowViolence Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsLowViolence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsLowViolence", 	Z_Construct_UFunction_UApps_BIsLowViolence_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsLowViolence_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_BIsLowViolence_Statics::Apps_eventBIsLowViolence_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsLowViolence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_BIsLowViolence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_BIsLowViolence_Statics::Apps_eventBIsLowViolence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_BIsLowViolence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsLowViolence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execBIsLowViolence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UApps::BIsLowViolence();
	P_NATIVE_END;
}
// ********** End Class UApps Function BIsLowViolence **********************************************

// ********** Begin Class UApps Function BIsSubscribed *********************************************
struct Z_Construct_UFunction_UApps_BIsSubscribed_Statics
{
	struct Apps_eventBIsSubscribed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if the active user is subscribed to the current App ID.\n\x09*\n\x09* This will always return true if you're using Steam DRM or calling SteamAPI_RestartAppIfNecessary.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the active user is subscribed to the current App ID.\n\nThis will always return true if you're using Steam DRM or calling SteamAPI_RestartAppIfNecessary." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BIsSubscribed constinit property declarations *************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsSubscribed constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsSubscribed Property Definitions ************************************
void Z_Construct_UFunction_UApps_BIsSubscribed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Apps_eventBIsSubscribed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsSubscribed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Apps_eventBIsSubscribed_Parms), &Z_Construct_UFunction_UApps_BIsSubscribed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsSubscribed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribed_Statics::PropPointers) < 2048);
// ********** End Function BIsSubscribed Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsSubscribed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsSubscribed", 	Z_Construct_UFunction_UApps_BIsSubscribed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_BIsSubscribed_Statics::Apps_eventBIsSubscribed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_BIsSubscribed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_BIsSubscribed_Statics::Apps_eventBIsSubscribed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_BIsSubscribed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsSubscribed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execBIsSubscribed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UApps::BIsSubscribed();
	P_NATIVE_END;
}
// ********** End Class UApps Function BIsSubscribed ***********************************************

// ********** Begin Class UApps Function BIsSubscribedApp ******************************************
struct Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics
{
	struct Apps_eventBIsSubscribedApp_Parms
	{
		int32 AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if the active user is subscribed to a specified AppId.\n\x09*\n\x09* Only use this if you need to check ownership of another game related to yours, a demo for example.\n\x09*\n\x09* @param\x09""AppID\x09The App ID to check.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the active user is subscribed to a specified AppId.\n\nOnly use this if you need to check ownership of another game related to yours, a demo for example.\n\n@param        AppID   The App ID to check." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BIsSubscribedApp constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsSubscribedApp constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsSubscribedApp Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventBIsSubscribedApp_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Apps_eventBIsSubscribedApp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Apps_eventBIsSubscribedApp_Parms), &Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::PropPointers) < 2048);
// ********** End Function BIsSubscribedApp Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsSubscribedApp", 	Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::Apps_eventBIsSubscribedApp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::Apps_eventBIsSubscribedApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_BIsSubscribedApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execBIsSubscribedApp)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UApps::BIsSubscribedApp(Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UApps Function BIsSubscribedApp ********************************************

// ********** Begin Class UApps Function BIsSubscribedFromFamilySharing ****************************
struct Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics
{
	struct Apps_eventBIsSubscribedFromFamilySharing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if the active user is accessing the current appID via a temporary Family Shared license owned by another user.\n\x09*\n\x09* If you need to determine the steamID of the permanent owner of the license, use GetAppOwner.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the active user is accessing the current appID via a temporary Family Shared license owned by another user.\n\nIf you need to determine the steamID of the permanent owner of the license, use GetAppOwner." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BIsSubscribedFromFamilySharing constinit property declarations ********
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsSubscribedFromFamilySharing constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsSubscribedFromFamilySharing Property Definitions *******************
void Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Apps_eventBIsSubscribedFromFamilySharing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Apps_eventBIsSubscribedFromFamilySharing_Parms), &Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::PropPointers) < 2048);
// ********** End Function BIsSubscribedFromFamilySharing Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsSubscribedFromFamilySharing", 	Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::Apps_eventBIsSubscribedFromFamilySharing_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::Apps_eventBIsSubscribedFromFamilySharing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execBIsSubscribedFromFamilySharing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UApps::BIsSubscribedFromFamilySharing();
	P_NATIVE_END;
}
// ********** End Class UApps Function BIsSubscribedFromFamilySharing ******************************

// ********** Begin Class UApps Function BIsSubscribedFromFreeWeekend ******************************
struct Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics
{
	struct Apps_eventBIsSubscribedFromFreeWeekend_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if the user is subscribed to the current App ID through a free weekend.\n\x09*\n\x09* Before using this please contact a Valve technical account manager via the Steamworks Discussion Board to properly package and secure your free weekend.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the user is subscribed to the current App ID through a free weekend.\n\nBefore using this please contact a Valve technical account manager via the Steamworks Discussion Board to properly package and secure your free weekend." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BIsSubscribedFromFreeWeekend constinit property declarations **********
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsSubscribedFromFreeWeekend constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsSubscribedFromFreeWeekend Property Definitions *********************
void Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Apps_eventBIsSubscribedFromFreeWeekend_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Apps_eventBIsSubscribedFromFreeWeekend_Parms), &Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers) < 2048);
// ********** End Function BIsSubscribedFromFreeWeekend Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsSubscribedFromFreeWeekend", 	Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::Apps_eventBIsSubscribedFromFreeWeekend_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::Apps_eventBIsSubscribedFromFreeWeekend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execBIsSubscribedFromFreeWeekend)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UApps::BIsSubscribedFromFreeWeekend();
	P_NATIVE_END;
}
// ********** End Class UApps Function BIsSubscribedFromFreeWeekend ********************************

// ********** Begin Class UApps Function BIsTimedTrial *********************************************
struct Z_Construct_UFunction_UApps_BIsTimedTrial_Statics
{
	struct Apps_eventBIsTimedTrial_Parms
	{
		int32 SecondsAllowed;
		int32 SecondsPlayed;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Check if game is a timed trial with limited playtime\n\x09*\n\x09* Notes: Only available in UE4.27+\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if game is a timed trial with limited playtime\n\nNotes: Only available in UE4.27+" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BIsTimedTrial constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsAllowed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsPlayed;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsTimedTrial constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsTimedTrial Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_SecondsAllowed = { "SecondsAllowed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventBIsTimedTrial_Parms, SecondsAllowed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_SecondsPlayed = { "SecondsPlayed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventBIsTimedTrial_Parms, SecondsPlayed), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Apps_eventBIsTimedTrial_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Apps_eventBIsTimedTrial_Parms), &Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_SecondsAllowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_SecondsPlayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::PropPointers) < 2048);
// ********** End Function BIsTimedTrial Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsTimedTrial", 	Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::Apps_eventBIsTimedTrial_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::Apps_eventBIsTimedTrial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_BIsTimedTrial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execBIsTimedTrial)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SecondsAllowed);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SecondsPlayed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UApps::BIsTimedTrial(Z_Param_Out_SecondsAllowed,Z_Param_Out_SecondsPlayed);
	P_NATIVE_END;
}
// ********** End Class UApps Function BIsTimedTrial ***********************************************

// ********** Begin Class UApps Function BIsVACBanned **********************************************
struct Z_Construct_UFunction_UApps_BIsVACBanned_Statics
{
	struct Apps_eventBIsVACBanned_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if the user has a VAC ban on their account\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the user has a VAC ban on their account" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BIsVACBanned constinit property declarations **************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsVACBanned constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsVACBanned Property Definitions *************************************
void Z_Construct_UFunction_UApps_BIsVACBanned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Apps_eventBIsVACBanned_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsVACBanned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Apps_eventBIsVACBanned_Parms), &Z_Construct_UFunction_UApps_BIsVACBanned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsVACBanned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsVACBanned_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsVACBanned_Statics::PropPointers) < 2048);
// ********** End Function BIsVACBanned Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsVACBanned_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsVACBanned", 	Z_Construct_UFunction_UApps_BIsVACBanned_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsVACBanned_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_BIsVACBanned_Statics::Apps_eventBIsVACBanned_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsVACBanned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_BIsVACBanned_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_BIsVACBanned_Statics::Apps_eventBIsVACBanned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_BIsVACBanned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsVACBanned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execBIsVACBanned)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UApps::BIsVACBanned();
	P_NATIVE_END;
}
// ********** End Class UApps Function BIsVACBanned ************************************************

// ********** Begin Class UApps Function GetAppBuildId *********************************************
struct Z_Construct_UFunction_UApps_GetAppBuildId_Statics
{
	struct Apps_eventGetAppBuildId_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the buildid of this app, may change at any time based on backend updates to the game.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the buildid of this app, may change at any time based on backend updates to the game." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAppBuildId constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAppBuildId constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAppBuildId Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetAppBuildId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetAppBuildId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetAppBuildId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppBuildId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppBuildId_Statics::PropPointers) < 2048);
// ********** End Function GetAppBuildId Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetAppBuildId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetAppBuildId", 	Z_Construct_UFunction_UApps_GetAppBuildId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppBuildId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_GetAppBuildId_Statics::Apps_eventGetAppBuildId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppBuildId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_GetAppBuildId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_GetAppBuildId_Statics::Apps_eventGetAppBuildId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_GetAppBuildId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetAppBuildId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execGetAppBuildId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UApps::GetAppBuildId();
	P_NATIVE_END;
}
// ********** End Class UApps Function GetAppBuildId ***********************************************

// ********** Begin Class UApps Function GetAppInstallDir ******************************************
struct Z_Construct_UFunction_UApps_GetAppInstallDir_Statics
{
	struct Apps_eventGetAppInstallDir_Parms
	{
		int32 AppID;
		FString Folder;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the install folder for a specific AppID.\n\x09*\n\x09* This works even if the application is not installed, based on where the game would be installed with the default Steam library location.\n\x09*\n\x09* @param\x09""AppID\x09\x09\x09The App ID to get the install dir for.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the install folder for a specific AppID.\n\nThis works even if the application is not installed, based on where the game would be installed with the default Steam library location.\n\n@param        AppID                   The App ID to get the install dir for." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAppInstallDir constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Folder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAppInstallDir constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAppInstallDir Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetAppInstallDir_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetAppInstallDir_Parms, Folder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetAppInstallDir_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_Folder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::PropPointers) < 2048);
// ********** End Function GetAppInstallDir Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetAppInstallDir", 	Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::Apps_eventGetAppInstallDir_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::Apps_eventGetAppInstallDir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_GetAppInstallDir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execGetAppInstallDir)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Folder);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UApps::GetAppInstallDir(Z_Param_AppID,Z_Param_Out_Folder);
	P_NATIVE_END;
}
// ********** End Class UApps Function GetAppInstallDir ********************************************

// ********** Begin Class UApps Function GetAppOwner ***********************************************
struct Z_Construct_UFunction_UApps_GetAppOwner_Statics
{
	struct Apps_eventGetAppOwner_Parms
	{
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the Steam ID of the original owner of the current app. If it's different from the current user then it is borrowed.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Steam ID of the original owner of the current app. If it's different from the current user then it is borrowed." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAppOwner constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAppOwner constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAppOwner Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UApps_GetAppOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetAppOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 1641547426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetAppOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppOwner_Statics::PropPointers) < 2048);
// ********** End Function GetAppOwner Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetAppOwner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetAppOwner", 	Z_Construct_UFunction_UApps_GetAppOwner_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppOwner_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_GetAppOwner_Statics::Apps_eventGetAppOwner_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_GetAppOwner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_GetAppOwner_Statics::Apps_eventGetAppOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_GetAppOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetAppOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execGetAppOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=UApps::GetAppOwner();
	P_NATIVE_END;
}
// ********** End Class UApps Function GetAppOwner *************************************************

// ********** Begin Class UApps Function GetAvailableGameLanguages *********************************
struct Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics
{
	struct Apps_eventGetAvailableGameLanguages_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets a comma separated list of the languages the current app supports.\n\x09*\n\x09* For the full list of languages that may be returned see Localization and Languages.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a comma separated list of the languages the current app supports.\n\nFor the full list of languages that may be returned see Localization and Languages." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAvailableGameLanguages constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAvailableGameLanguages constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAvailableGameLanguages Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetAvailableGameLanguages_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::PropPointers) < 2048);
// ********** End Function GetAvailableGameLanguages Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetAvailableGameLanguages", 	Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::Apps_eventGetAvailableGameLanguages_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::Apps_eventGetAvailableGameLanguages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_GetAvailableGameLanguages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execGetAvailableGameLanguages)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UApps::GetAvailableGameLanguages();
	P_NATIVE_END;
}
// ********** End Class UApps Function GetAvailableGameLanguages ***********************************

// ********** Begin Class UApps Function GetCurrentBetaName ****************************************
struct Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics
{
	struct Apps_eventGetCurrentBetaName_Parms
	{
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if the user is running from a beta branch, and gets the name of the branch if they are.\n\x09*\n\x09* @param\x09Name\x09The buffer where the beta name will be copied in to.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the user is running from a beta branch, and gets the name of the branch if they are.\n\n@param        Name    The buffer where the beta name will be copied in to." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentBetaName constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentBetaName constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentBetaName Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetCurrentBetaName_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Apps_eventGetCurrentBetaName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Apps_eventGetCurrentBetaName_Parms), &Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentBetaName Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetCurrentBetaName", 	Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::Apps_eventGetCurrentBetaName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::Apps_eventGetCurrentBetaName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_GetCurrentBetaName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execGetCurrentBetaName)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UApps::GetCurrentBetaName(Z_Param_Out_Name);
	P_NATIVE_END;
}
// ********** End Class UApps Function GetCurrentBetaName ******************************************

// ********** Begin Class UApps Function GetCurrentGameLanguage ************************************
struct Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics
{
	struct Apps_eventGetCurrentGameLanguage_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the current language that the user has set.\n\x09*\n\x09* This falls back to the Steam UI language if the user hasn't explicitly picked a language for the title.\n\x09* For the full list of languages see Supported Languages.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current language that the user has set.\n\nThis falls back to the Steam UI language if the user hasn't explicitly picked a language for the title.\nFor the full list of languages see Supported Languages." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentGameLanguage constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentGameLanguage constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentGameLanguage Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetCurrentGameLanguage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentGameLanguage Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetCurrentGameLanguage", 	Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::Apps_eventGetCurrentGameLanguage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::Apps_eventGetCurrentGameLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_GetCurrentGameLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execGetCurrentGameLanguage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UApps::GetCurrentGameLanguage();
	P_NATIVE_END;
}
// ********** End Class UApps Function GetCurrentGameLanguage **************************************

// ********** Begin Class UApps Function GetDLCCount ***********************************************
struct Z_Construct_UFunction_UApps_GetDLCCount_Statics
{
	struct Apps_eventGetDLCCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the number of DLC pieces for the current app.\n\x09*\n\x09* This is typically used to loop through each piece of DLC and get the info about each one with BGetDLCDataByIndex.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the number of DLC pieces for the current app.\n\nThis is typically used to loop through each piece of DLC and get the info about each one with BGetDLCDataByIndex." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetDLCCount constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDLCCount constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDLCCount Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetDLCCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetDLCCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetDLCCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDLCCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDLCCount_Statics::PropPointers) < 2048);
// ********** End Function GetDLCCount Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetDLCCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetDLCCount", 	Z_Construct_UFunction_UApps_GetDLCCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDLCCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_GetDLCCount_Statics::Apps_eventGetDLCCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDLCCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_GetDLCCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_GetDLCCount_Statics::Apps_eventGetDLCCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_GetDLCCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetDLCCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execGetDLCCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UApps::GetDLCCount();
	P_NATIVE_END;
}
// ********** End Class UApps Function GetDLCCount *************************************************

// ********** Begin Class UApps Function GetDlcDownloadProgress ************************************
struct Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics
{
	struct Apps_eventGetDlcDownloadProgress_Parms
	{
		int32 AppID;
		int32 BytesDownloaded;
		int32 BytesTotal;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the download progress for optional DLC.\n\x09*\n\x09* @param\x09""AppID\x09\x09\x09\x09The App ID of the DLC to monitor\n\x09* @param\x09""BytesDownloaded\x09\x09Returns the number of bytes downloaded.\n\x09* @param\x09""BytesTotal\x09\x09\x09Returns the total size of the download in bytes.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the download progress for optional DLC.\n\n@param        AppID                           The App ID of the DLC to monitor\n@param        BytesDownloaded         Returns the number of bytes downloaded.\n@param        BytesTotal                      Returns the total size of the download in bytes." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetDlcDownloadProgress constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesDownloaded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesTotal;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDlcDownloadProgress constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDlcDownloadProgress Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetDlcDownloadProgress_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetDlcDownloadProgress_Parms, BytesDownloaded), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetDlcDownloadProgress_Parms, BytesTotal), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Apps_eventGetDlcDownloadProgress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Apps_eventGetDlcDownloadProgress_Parms), &Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_BytesDownloaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_BytesTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::PropPointers) < 2048);
// ********** End Function GetDlcDownloadProgress Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetDlcDownloadProgress", 	Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::Apps_eventGetDlcDownloadProgress_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::Apps_eventGetDlcDownloadProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_GetDlcDownloadProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execGetDlcDownloadProgress)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesDownloaded);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesTotal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UApps::GetDlcDownloadProgress(Z_Param_AppID,Z_Param_Out_BytesDownloaded,Z_Param_Out_BytesTotal);
	P_NATIVE_END;
}
// ********** End Class UApps Function GetDlcDownloadProgress **************************************

// ********** Begin Class UApps Function GetEarliestPurchaseUnixTime *******************************
struct Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics
{
	struct Apps_eventGetEarliestPurchaseUnixTime_Parms
	{
		int32 AppID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the time of purchase of the specified app in Unix epoch format (time since Jan 1st, 1970).\n\x09*\n\x09* This is useful for rewarding users based on their initial purchase date.\n\x09*\n\x09* @param\x09""AppID\x09The App ID to get the purchase time for.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the time of purchase of the specified app in Unix epoch format (time since Jan 1st, 1970).\n\nThis is useful for rewarding users based on their initial purchase date.\n\n@param        AppID   The App ID to get the purchase time for." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetEarliestPurchaseUnixTime constinit property declarations ***********
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEarliestPurchaseUnixTime constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEarliestPurchaseUnixTime Property Definitions **********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetEarliestPurchaseUnixTime_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetEarliestPurchaseUnixTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::PropPointers) < 2048);
// ********** End Function GetEarliestPurchaseUnixTime Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetEarliestPurchaseUnixTime", 	Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::Apps_eventGetEarliestPurchaseUnixTime_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::Apps_eventGetEarliestPurchaseUnixTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execGetEarliestPurchaseUnixTime)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UApps::GetEarliestPurchaseUnixTime(Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UApps Function GetEarliestPurchaseUnixTime *********************************

// ********** Begin Class UApps Function GetFileDetails ********************************************
struct Z_Construct_UFunction_UApps_GetFileDetails_Statics
{
	struct Apps_eventGetFileDetails_Parms
	{
		FScriptDelegate Callback;
		FString FileName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Asynchronously retrieves metadata details about a specific file in the depot manifest.\n\x09*\n\x09* Currently provides:\n\x09* The file size in bytes.\n\x09* The file's SHA1 hash.\n\x09* The file's flags.\n\x09*\n\x09* @param\x09""FileName\x09The absolute path and name to the file.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asynchronously retrieves metadata details about a specific file in the depot manifest.\n\nCurrently provides:\nThe file size in bytes.\nThe file's SHA1 hash.\nThe file's flags.\n\n@param        FileName        The absolute path and name to the file." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFileDetails constinit property declarations ************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFileDetails constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFileDetails Property Definitions ***********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetFileDetails_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3116284304
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetFileDetails_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetFileDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_FileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetFileDetails_Statics::PropPointers) < 2048);
// ********** End Function GetFileDetails Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetFileDetails_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetFileDetails", 	Z_Construct_UFunction_UApps_GetFileDetails_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetFileDetails_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_GetFileDetails_Statics::Apps_eventGetFileDetails_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetFileDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_GetFileDetails_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_GetFileDetails_Statics::Apps_eventGetFileDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_GetFileDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetFileDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execGetFileDetails)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFileDetails(FOnFileDetailsResult(Z_Param_Out_Callback),Z_Param_FileName);
	P_NATIVE_END;
}
// ********** End Class UApps Function GetFileDetails **********************************************

// ********** Begin Class UApps Function GetInstalledDepots ****************************************
struct Z_Construct_UFunction_UApps_GetInstalledDepots_Statics
{
	struct Apps_eventGetInstalledDepots_Parms
	{
		int32 AppID;
		int32 MaxDepots;
		TArray<int32> Depots;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets a list of all installed depots for a given App ID in mount order.\n\x09*\n\x09* @param\x09""AppID\x09\x09\x09The App to list the depots for.\n\x09* @param\x09MaxDepots\x09\x09The maximum number of depots to obtain, typically the size of pvecDepots.\n\x09* @param\x09""Depots\x09\x09\x09""A preallocated array that will be filled with the list of depots.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a list of all installed depots for a given App ID in mount order.\n\n@param        AppID                   The App to list the depots for.\n@param        MaxDepots               The maximum number of depots to obtain, typically the size of pvecDepots.\n@param        Depots                  A preallocated array that will be filled with the list of depots." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetInstalledDepots constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDepots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Depots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Depots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInstalledDepots constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInstalledDepots Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetInstalledDepots_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_MaxDepots = { "MaxDepots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetInstalledDepots_Parms, MaxDepots), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_Depots_Inner = { "Depots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_Depots = { "Depots", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetInstalledDepots_Parms, Depots), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetInstalledDepots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_MaxDepots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_Depots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_Depots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::PropPointers) < 2048);
// ********** End Function GetInstalledDepots Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetInstalledDepots", 	Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::Apps_eventGetInstalledDepots_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::Apps_eventGetInstalledDepots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_GetInstalledDepots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execGetInstalledDepots)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxDepots);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Depots);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UApps::GetInstalledDepots(Z_Param_AppID,Z_Param_MaxDepots,Z_Param_Out_Depots);
	P_NATIVE_END;
}
// ********** End Class UApps Function GetInstalledDepots ******************************************

// ********** Begin Class UApps Function GetLaunchCommandLine **************************************
struct Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics
{
	struct Apps_eventGetLaunchCommandLine_Parms
	{
		FString CommandLine;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the command line if the game was launched via Steam URL, e.g. steam://run/<appid>//<command line>/. \n\x09*\n\x09* This method is preferable to launching with a command line via the operating system, which can be a security risk.\n\x09* In order for rich presence joins to go through this and not be placed on the OS command line, you must enable \"Use launch command line\" from the Installation > General page on your app.\n\x09*\n\x09* @param\x09""CommandLine\x09\x09\x09The string buffer that the command line will be copied into.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the command line if the game was launched via Steam URL, e.g. steam://run/<appid>//<command line>/.\n\nThis method is preferable to launching with a command line via the operating system, which can be a security risk.\nIn order for rich presence joins to go through this and not be placed on the OS command line, you must enable \"Use launch command line\" from the Installation > General page on your app.\n\n@param        CommandLine                     The string buffer that the command line will be copied into." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetLaunchCommandLine constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_CommandLine;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLaunchCommandLine constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLaunchCommandLine Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::NewProp_CommandLine = { "CommandLine", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetLaunchCommandLine_Parms, CommandLine), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetLaunchCommandLine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::NewProp_CommandLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::PropPointers) < 2048);
// ********** End Function GetLaunchCommandLine Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetLaunchCommandLine", 	Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::Apps_eventGetLaunchCommandLine_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::Apps_eventGetLaunchCommandLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_GetLaunchCommandLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execGetLaunchCommandLine)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_CommandLine);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UApps::GetLaunchCommandLine(Z_Param_Out_CommandLine);
	P_NATIVE_END;
}
// ********** End Class UApps Function GetLaunchCommandLine ****************************************

// ********** Begin Class UApps Function GetLaunchQueryParam ***************************************
struct Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics
{
	struct Apps_eventGetLaunchQueryParam_Parms
	{
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the associated launch parameter if the game is run via steam://run/<appid>/?param1=value1;param2=value2;param3=value3 etc.\n\x09*\n\x09* Parameter names starting with the character '@' are reserved for internal use and will always return an empty string.\n\x09* Parameter names starting with an underscore '_' are reserved for steam features -- they can be queried by the game, but it is advised that you not param names beginning with an underscore for your own features.\n\x09*\n\x09* @param\x09Key\x09\x09The launch key to test for. Ex: param1\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the associated launch parameter if the game is run via steam://run/<appid>/?param1=value1;param2=value2;param3=value3 etc.\n\nParameter names starting with the character '@' are reserved for internal use and will always return an empty string.\nParameter names starting with an underscore '_' are reserved for steam features -- they can be queried by the game, but it is advised that you not param names beginning with an underscore for your own features.\n\n@param        Key             The launch key to test for. Ex: param1" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetLaunchQueryParam constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLaunchQueryParam constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLaunchQueryParam Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetLaunchQueryParam_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventGetLaunchQueryParam_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::PropPointers) < 2048);
// ********** End Function GetLaunchQueryParam Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetLaunchQueryParam", 	Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::Apps_eventGetLaunchQueryParam_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::Apps_eventGetLaunchQueryParam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_GetLaunchQueryParam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execGetLaunchQueryParam)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UApps::GetLaunchQueryParam(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UApps Function GetLaunchQueryParam *****************************************

// ********** Begin Class UApps Function InstallDLC ************************************************
struct Z_Construct_UFunction_UApps_InstallDLC_Statics
{
	struct Apps_eventInstallDLC_Parms
	{
		int32 AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Allows you to install an optional DLC.\n\x09*\n\x09* @param\x09""AppID\x09The DLC you want to install.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows you to install an optional DLC.\n\n@param        AppID   The DLC you want to install." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function InstallDLC constinit property declarations ****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InstallDLC constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InstallDLC Property Definitions ***************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_InstallDLC_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventInstallDLC_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_InstallDLC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_InstallDLC_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_InstallDLC_Statics::PropPointers) < 2048);
// ********** End Function InstallDLC Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_InstallDLC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "InstallDLC", 	Z_Construct_UFunction_UApps_InstallDLC_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_InstallDLC_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_InstallDLC_Statics::Apps_eventInstallDLC_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_InstallDLC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_InstallDLC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_InstallDLC_Statics::Apps_eventInstallDLC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_InstallDLC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_InstallDLC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execInstallDLC)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	UApps::InstallDLC(Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UApps Function InstallDLC **************************************************

// ********** Begin Class UApps Function MarkContentCorrupt ****************************************
struct Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics
{
	struct Apps_eventMarkContentCorrupt_Parms
	{
		bool bMissingFilesOnly;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Allows you to force verify game content on next launch.\n\x09*\n\x09* If you detect the game is out-of-date (for example, by having the client detect a version mismatch with a server),\n\x09* you can call use MarkContentCorrupt to force a verify, show a message to the user, and then quit.\n\x09*\n\x09* @param\x09""bMissingFilesOnly\x09Only scan for missing files, don't verify the checksum of each file.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows you to force verify game content on next launch.\n\nIf you detect the game is out-of-date (for example, by having the client detect a version mismatch with a server),\nyou can call use MarkContentCorrupt to force a verify, show a message to the user, and then quit.\n\n@param        bMissingFilesOnly       Only scan for missing files, don't verify the checksum of each file." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function MarkContentCorrupt constinit property declarations ********************
	static void NewProp_bMissingFilesOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMissingFilesOnly;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MarkContentCorrupt constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MarkContentCorrupt Property Definitions *******************************
void Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly_SetBit(void* Obj)
{
	((Apps_eventMarkContentCorrupt_Parms*)Obj)->bMissingFilesOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly = { "bMissingFilesOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Apps_eventMarkContentCorrupt_Parms), &Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Apps_eventMarkContentCorrupt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Apps_eventMarkContentCorrupt_Parms), &Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::PropPointers) < 2048);
// ********** End Function MarkContentCorrupt Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "MarkContentCorrupt", 	Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::Apps_eventMarkContentCorrupt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::Apps_eventMarkContentCorrupt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_MarkContentCorrupt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execMarkContentCorrupt)
{
	P_GET_UBOOL(Z_Param_bMissingFilesOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UApps::MarkContentCorrupt(Z_Param_bMissingFilesOnly);
	P_NATIVE_END;
}
// ********** End Class UApps Function MarkContentCorrupt ******************************************

// ********** Begin Class UApps Function UninstallDLC **********************************************
struct Z_Construct_UFunction_UApps_UninstallDLC_Statics
{
	struct Apps_eventUninstallDLC_Parms
	{
		int32 AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Allows you to uninstall an optional DLC.\n\x09*\n\x09* @param\x09""AppID\x09The DLC you want to uninstall.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows you to uninstall an optional DLC.\n\n@param        AppID   The DLC you want to uninstall." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UninstallDLC constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UninstallDLC constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UninstallDLC Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_UninstallDLC_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Apps_eventUninstallDLC_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_UninstallDLC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_UninstallDLC_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_UninstallDLC_Statics::PropPointers) < 2048);
// ********** End Function UninstallDLC Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_UninstallDLC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "UninstallDLC", 	Z_Construct_UFunction_UApps_UninstallDLC_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_UninstallDLC_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UApps_UninstallDLC_Statics::Apps_eventUninstallDLC_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_UninstallDLC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UApps_UninstallDLC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UApps_UninstallDLC_Statics::Apps_eventUninstallDLC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UApps_UninstallDLC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_UninstallDLC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UApps::execUninstallDLC)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	UApps::UninstallDLC(Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UApps Function UninstallDLC ************************************************

// ********** Begin Class UApps ********************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UApps;
UClass* UApps::GetPrivateStaticClass()
{
	using TClass = UApps;
	if (!Z_Registration_Info_UClass_UApps.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Apps"),
			Z_Registration_Info_UClass_UApps.InnerSingleton,
			StaticRegisterNativesUApps,
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
	return Z_Registration_Info_UClass_UApps.InnerSingleton;
}
UClass* Z_Construct_UClass_UApps_NoRegister()
{
	return UApps::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UApps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamApps/SteamApps.h" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DLCInstalled_MetaData[] = {
		{ "Category", "SteamCore|Apps|Delegates" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileDetailsResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|Apps|Delegates" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewUrlLaunchParametersDelegate_MetaData[] = {
		{ "Category", "SteamCore|Apps|Delegates" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimedTrialStatusDelegate_MetaData[] = {
		{ "Category", "SteamCore|Apps|Delegates" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UApps constinit property declarations ************************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DLCInstalled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FileDetailsResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NewUrlLaunchParametersDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_TimedTrialStatusDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UApps constinit property declarations **************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BGetDLCDataByIndex"), .Pointer = &UApps::execBGetDLCDataByIndex },
		{ .NameUTF8 = UTF8TEXT("BIsAppInstalled"), .Pointer = &UApps::execBIsAppInstalled },
		{ .NameUTF8 = UTF8TEXT("BIsCybercafe"), .Pointer = &UApps::execBIsCybercafe },
		{ .NameUTF8 = UTF8TEXT("BIsDlcInstalled"), .Pointer = &UApps::execBIsDlcInstalled },
		{ .NameUTF8 = UTF8TEXT("BIsLowViolence"), .Pointer = &UApps::execBIsLowViolence },
		{ .NameUTF8 = UTF8TEXT("BIsSubscribed"), .Pointer = &UApps::execBIsSubscribed },
		{ .NameUTF8 = UTF8TEXT("BIsSubscribedApp"), .Pointer = &UApps::execBIsSubscribedApp },
		{ .NameUTF8 = UTF8TEXT("BIsSubscribedFromFamilySharing"), .Pointer = &UApps::execBIsSubscribedFromFamilySharing },
		{ .NameUTF8 = UTF8TEXT("BIsSubscribedFromFreeWeekend"), .Pointer = &UApps::execBIsSubscribedFromFreeWeekend },
		{ .NameUTF8 = UTF8TEXT("BIsTimedTrial"), .Pointer = &UApps::execBIsTimedTrial },
		{ .NameUTF8 = UTF8TEXT("BIsVACBanned"), .Pointer = &UApps::execBIsVACBanned },
		{ .NameUTF8 = UTF8TEXT("GetAppBuildId"), .Pointer = &UApps::execGetAppBuildId },
		{ .NameUTF8 = UTF8TEXT("GetAppInstallDir"), .Pointer = &UApps::execGetAppInstallDir },
		{ .NameUTF8 = UTF8TEXT("GetAppOwner"), .Pointer = &UApps::execGetAppOwner },
		{ .NameUTF8 = UTF8TEXT("GetAvailableGameLanguages"), .Pointer = &UApps::execGetAvailableGameLanguages },
		{ .NameUTF8 = UTF8TEXT("GetCurrentBetaName"), .Pointer = &UApps::execGetCurrentBetaName },
		{ .NameUTF8 = UTF8TEXT("GetCurrentGameLanguage"), .Pointer = &UApps::execGetCurrentGameLanguage },
		{ .NameUTF8 = UTF8TEXT("GetDLCCount"), .Pointer = &UApps::execGetDLCCount },
		{ .NameUTF8 = UTF8TEXT("GetDlcDownloadProgress"), .Pointer = &UApps::execGetDlcDownloadProgress },
		{ .NameUTF8 = UTF8TEXT("GetEarliestPurchaseUnixTime"), .Pointer = &UApps::execGetEarliestPurchaseUnixTime },
		{ .NameUTF8 = UTF8TEXT("GetFileDetails"), .Pointer = &UApps::execGetFileDetails },
		{ .NameUTF8 = UTF8TEXT("GetInstalledDepots"), .Pointer = &UApps::execGetInstalledDepots },
		{ .NameUTF8 = UTF8TEXT("GetLaunchCommandLine"), .Pointer = &UApps::execGetLaunchCommandLine },
		{ .NameUTF8 = UTF8TEXT("GetLaunchQueryParam"), .Pointer = &UApps::execGetLaunchQueryParam },
		{ .NameUTF8 = UTF8TEXT("InstallDLC"), .Pointer = &UApps::execInstallDLC },
		{ .NameUTF8 = UTF8TEXT("MarkContentCorrupt"), .Pointer = &UApps::execMarkContentCorrupt },
		{ .NameUTF8 = UTF8TEXT("UninstallDLC"), .Pointer = &UApps::execUninstallDLC },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UApps_BGetDLCDataByIndex, "BGetDLCDataByIndex" }, // 2798756275
		{ &Z_Construct_UFunction_UApps_BIsAppInstalled, "BIsAppInstalled" }, // 3408213362
		{ &Z_Construct_UFunction_UApps_BIsCybercafe, "BIsCybercafe" }, // 1941719723
		{ &Z_Construct_UFunction_UApps_BIsDlcInstalled, "BIsDlcInstalled" }, // 2223985483
		{ &Z_Construct_UFunction_UApps_BIsLowViolence, "BIsLowViolence" }, // 3621461696
		{ &Z_Construct_UFunction_UApps_BIsSubscribed, "BIsSubscribed" }, // 69919875
		{ &Z_Construct_UFunction_UApps_BIsSubscribedApp, "BIsSubscribedApp" }, // 322452913
		{ &Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing, "BIsSubscribedFromFamilySharing" }, // 1724244346
		{ &Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend, "BIsSubscribedFromFreeWeekend" }, // 1590601226
		{ &Z_Construct_UFunction_UApps_BIsTimedTrial, "BIsTimedTrial" }, // 1108641418
		{ &Z_Construct_UFunction_UApps_BIsVACBanned, "BIsVACBanned" }, // 1260466210
		{ &Z_Construct_UFunction_UApps_GetAppBuildId, "GetAppBuildId" }, // 3079508486
		{ &Z_Construct_UFunction_UApps_GetAppInstallDir, "GetAppInstallDir" }, // 3147867822
		{ &Z_Construct_UFunction_UApps_GetAppOwner, "GetAppOwner" }, // 1502016049
		{ &Z_Construct_UFunction_UApps_GetAvailableGameLanguages, "GetAvailableGameLanguages" }, // 820276418
		{ &Z_Construct_UFunction_UApps_GetCurrentBetaName, "GetCurrentBetaName" }, // 1303503044
		{ &Z_Construct_UFunction_UApps_GetCurrentGameLanguage, "GetCurrentGameLanguage" }, // 2663901808
		{ &Z_Construct_UFunction_UApps_GetDLCCount, "GetDLCCount" }, // 1825173763
		{ &Z_Construct_UFunction_UApps_GetDlcDownloadProgress, "GetDlcDownloadProgress" }, // 526296551
		{ &Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime, "GetEarliestPurchaseUnixTime" }, // 3295897488
		{ &Z_Construct_UFunction_UApps_GetFileDetails, "GetFileDetails" }, // 2686065616
		{ &Z_Construct_UFunction_UApps_GetInstalledDepots, "GetInstalledDepots" }, // 1450306925
		{ &Z_Construct_UFunction_UApps_GetLaunchCommandLine, "GetLaunchCommandLine" }, // 3818777979
		{ &Z_Construct_UFunction_UApps_GetLaunchQueryParam, "GetLaunchQueryParam" }, // 4132909737
		{ &Z_Construct_UFunction_UApps_InstallDLC, "InstallDLC" }, // 3735066553
		{ &Z_Construct_UFunction_UApps_MarkContentCorrupt, "MarkContentCorrupt" }, // 883022328
		{ &Z_Construct_UFunction_UApps_UninstallDLC, "UninstallDLC" }, // 4310426
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UApps_Statics

// ********** Begin Class UApps Property Definitions ***********************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApps_Statics::NewProp_DLCInstalled = { "DLCInstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApps, DLCInstalled), Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DLCInstalled_MetaData), NewProp_DLCInstalled_MetaData) }; // 251957902
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApps_Statics::NewProp_FileDetailsResultDelegate = { "FileDetailsResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApps, FileDetailsResultDelegate), Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileDetailsResultDelegate_MetaData), NewProp_FileDetailsResultDelegate_MetaData) }; // 4067397280
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApps_Statics::NewProp_NewUrlLaunchParametersDelegate = { "NewUrlLaunchParametersDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApps, NewUrlLaunchParametersDelegate), Z_Construct_UDelegateFunction_SteamCore_OnNewUrlLaunchParametersDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewUrlLaunchParametersDelegate_MetaData), NewProp_NewUrlLaunchParametersDelegate_MetaData) }; // 1411441731
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApps_Statics::NewProp_TimedTrialStatusDelegate = { "TimedTrialStatusDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApps, TimedTrialStatusDelegate), Z_Construct_UDelegateFunction_SteamCore_OnTimedTrialStatusDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimedTrialStatusDelegate_MetaData), NewProp_TimedTrialStatusDelegate_MetaData) }; // 3159191569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApps_Statics::NewProp_DLCInstalled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApps_Statics::NewProp_FileDetailsResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApps_Statics::NewProp_NewUrlLaunchParametersDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApps_Statics::NewProp_TimedTrialStatusDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UApps_Statics::PropPointers) < 2048);
// ********** End Class UApps Property Definitions *************************************************
UObject* (*const Z_Construct_UClass_UApps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UApps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UApps_Statics::ClassParams = {
	&UApps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UApps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UApps_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UApps_Statics::Class_MetaDataParams), Z_Construct_UClass_UApps_Statics::Class_MetaDataParams)
};
void UApps::StaticRegisterNativesUApps()
{
	UClass* Class = UApps::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UApps_Statics::Funcs));
}
UClass* Z_Construct_UClass_UApps()
{
	if (!Z_Registration_Info_UClass_UApps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApps.OuterSingleton, Z_Construct_UClass_UApps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UApps.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UApps);
UApps::~UApps() {}
// ********** End Class UApps **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamApps_SteamApps_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UApps, UApps::StaticClass, TEXT("UApps"), &Z_Registration_Info_UClass_UApps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApps), 2465857076U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamApps_SteamApps_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamApps_SteamApps_h__Script_SteamCore_2076261300{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamApps_SteamApps_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCore_Public_SteamApps_SteamApps_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
