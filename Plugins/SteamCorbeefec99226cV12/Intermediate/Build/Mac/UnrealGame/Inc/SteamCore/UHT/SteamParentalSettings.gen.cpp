// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamParentalSettings/SteamParentalSettings.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamParentalSettings() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UClass* Z_Construct_UClass_UParentalSettings();
STEAMCORE_API UClass* Z_Construct_UClass_UParentalSettings_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamParentalFeature();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UParentalSettings Function BIsAppBlocked *********************************
struct Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics
{
	struct ParentalSettings_eventBIsAppBlocked_Parms
	{
		int32 AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|ParentalSettings" },
		{ "Comment", "/**\n\x09* Is app blocked\n\x09*\n\x09* @param\x09""AppID\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
		{ "ToolTip", "Is app blocked\n\n@param        AppID" },
	};
#endif // WITH_METADATA

// ********** Begin Function BIsAppBlocked constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsAppBlocked constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsAppBlocked Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParentalSettings_eventBIsAppBlocked_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParentalSettings_eventBIsAppBlocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParentalSettings_eventBIsAppBlocked_Parms), &Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::PropPointers) < 2048);
// ********** End Function BIsAppBlocked Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParentalSettings, nullptr, "BIsAppBlocked", 	Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::ParentalSettings_eventBIsAppBlocked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::ParentalSettings_eventBIsAppBlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParentalSettings_BIsAppBlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParentalSettings_BIsAppBlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParentalSettings::execBIsAppBlocked)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsAppBlocked(Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UParentalSettings Function BIsAppBlocked ***********************************

// ********** Begin Class UParentalSettings Function BIsAppInBlockList *****************************
struct Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics
{
	struct ParentalSettings_eventBIsAppInBlockList_Parms
	{
		int32 AppID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|ParentalSettings" },
		{ "Comment", "/**\n\x09* Is app blocked\n\x09*\n\x09* @param\x09""AppID\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
		{ "ToolTip", "Is app blocked\n\n@param        AppID" },
	};
#endif // WITH_METADATA

// ********** Begin Function BIsAppInBlockList constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsAppInBlockList constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsAppInBlockList Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParentalSettings_eventBIsAppInBlockList_Parms, AppID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParentalSettings_eventBIsAppInBlockList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParentalSettings_eventBIsAppInBlockList_Parms), &Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::PropPointers) < 2048);
// ********** End Function BIsAppInBlockList Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParentalSettings, nullptr, "BIsAppInBlockList", 	Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::ParentalSettings_eventBIsAppInBlockList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::ParentalSettings_eventBIsAppInBlockList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParentalSettings::execBIsAppInBlockList)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsAppInBlockList(Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class UParentalSettings Function BIsAppInBlockList *******************************

// ********** Begin Class UParentalSettings Function BIsFeatureBlocked *****************************
struct Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics
{
	struct ParentalSettings_eventBIsFeatureBlocked_Parms
	{
		ESteamParentalFeature Feature;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|ParentalSettings" },
		{ "Comment", "/**\n\x09* Is feature blocked\n\x09*\n\x09* @param\x09""Feature\x09\x09""feature\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
		{ "ToolTip", "Is feature blocked\n\n@param        Feature         feature" },
	};
#endif // WITH_METADATA

// ********** Begin Function BIsFeatureBlocked constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Feature_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Feature;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsFeatureBlocked constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsFeatureBlocked Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::NewProp_Feature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::NewProp_Feature = { "Feature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParentalSettings_eventBIsFeatureBlocked_Parms, Feature), Z_Construct_UEnum_SteamCore_ESteamParentalFeature, METADATA_PARAMS(0, nullptr) }; // 3651708259
void Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParentalSettings_eventBIsFeatureBlocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParentalSettings_eventBIsFeatureBlocked_Parms), &Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::NewProp_Feature_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::NewProp_Feature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::PropPointers) < 2048);
// ********** End Function BIsFeatureBlocked Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParentalSettings, nullptr, "BIsFeatureBlocked", 	Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::ParentalSettings_eventBIsFeatureBlocked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::ParentalSettings_eventBIsFeatureBlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParentalSettings::execBIsFeatureBlocked)
{
	P_GET_ENUM(ESteamParentalFeature,Z_Param_Feature);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsFeatureBlocked(ESteamParentalFeature(Z_Param_Feature));
	P_NATIVE_END;
}
// ********** End Class UParentalSettings Function BIsFeatureBlocked *******************************

// ********** Begin Class UParentalSettings Function BIsFeatureInBlockList *************************
struct Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics
{
	struct ParentalSettings_eventBIsFeatureInBlockList_Parms
	{
		ESteamParentalFeature Feature;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|ParentalSettings" },
		{ "Comment", "/**\n\x09* Is feature blocked\n\x09*\n\x09* @param\x09""Feature\x09\x09""feature\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
		{ "ToolTip", "Is feature blocked\n\n@param        Feature         feature" },
	};
#endif // WITH_METADATA

// ********** Begin Function BIsFeatureInBlockList constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Feature_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Feature;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsFeatureInBlockList constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsFeatureInBlockList Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::NewProp_Feature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::NewProp_Feature = { "Feature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParentalSettings_eventBIsFeatureInBlockList_Parms, Feature), Z_Construct_UEnum_SteamCore_ESteamParentalFeature, METADATA_PARAMS(0, nullptr) }; // 3651708259
void Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParentalSettings_eventBIsFeatureInBlockList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParentalSettings_eventBIsFeatureInBlockList_Parms), &Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::NewProp_Feature_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::NewProp_Feature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::PropPointers) < 2048);
// ********** End Function BIsFeatureInBlockList Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParentalSettings, nullptr, "BIsFeatureInBlockList", 	Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::ParentalSettings_eventBIsFeatureInBlockList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::ParentalSettings_eventBIsFeatureInBlockList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParentalSettings::execBIsFeatureInBlockList)
{
	P_GET_ENUM(ESteamParentalFeature,Z_Param_Feature);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsFeatureInBlockList(ESteamParentalFeature(Z_Param_Feature));
	P_NATIVE_END;
}
// ********** End Class UParentalSettings Function BIsFeatureInBlockList ***************************

// ********** Begin Class UParentalSettings Function BIsParentalLockEnabled ************************
struct Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics
{
	struct ParentalSettings_eventBIsParentalLockEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|ParentalSettings" },
		{ "Comment", "/**\n\x09* Is parental lock enabled\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
		{ "ToolTip", "Is parental lock enabled" },
	};
#endif // WITH_METADATA

// ********** Begin Function BIsParentalLockEnabled constinit property declarations ****************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsParentalLockEnabled constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsParentalLockEnabled Property Definitions ***************************
void Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParentalSettings_eventBIsParentalLockEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParentalSettings_eventBIsParentalLockEnabled_Parms), &Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::PropPointers) < 2048);
// ********** End Function BIsParentalLockEnabled Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParentalSettings, nullptr, "BIsParentalLockEnabled", 	Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::ParentalSettings_eventBIsParentalLockEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::ParentalSettings_eventBIsParentalLockEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParentalSettings::execBIsParentalLockEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsParentalLockEnabled();
	P_NATIVE_END;
}
// ********** End Class UParentalSettings Function BIsParentalLockEnabled **************************

// ********** Begin Class UParentalSettings Function BIsParentalLockLocked *************************
struct Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics
{
	struct ParentalSettings_eventBIsParentalLockLocked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|ParentalSettings" },
		{ "Comment", "/**\n\x09* Is parental lock locked\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
		{ "ToolTip", "Is parental lock locked" },
	};
#endif // WITH_METADATA

// ********** Begin Function BIsParentalLockLocked constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BIsParentalLockLocked constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BIsParentalLockLocked Property Definitions ****************************
void Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParentalSettings_eventBIsParentalLockLocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParentalSettings_eventBIsParentalLockLocked_Parms), &Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::PropPointers) < 2048);
// ********** End Function BIsParentalLockLocked Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UParentalSettings, nullptr, "BIsParentalLockLocked", 	Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::ParentalSettings_eventBIsParentalLockLocked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::ParentalSettings_eventBIsParentalLockLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UParentalSettings::execBIsParentalLockLocked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BIsParentalLockLocked();
	P_NATIVE_END;
}
// ********** End Class UParentalSettings Function BIsParentalLockLocked ***************************

// ********** Begin Class UParentalSettings ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UParentalSettings;
UClass* UParentalSettings::GetPrivateStaticClass()
{
	using TClass = UParentalSettings;
	if (!Z_Registration_Info_UClass_UParentalSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ParentalSettings"),
			Z_Registration_Info_UClass_UParentalSettings.InnerSingleton,
			StaticRegisterNativesUParentalSettings,
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
	return Z_Registration_Info_UClass_UParentalSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UParentalSettings_NoRegister()
{
	return UParentalSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UParentalSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamParentalSettings/SteamParentalSettings.h" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UParentalSettings constinit property declarations ************************
// ********** End Class UParentalSettings constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BIsAppBlocked"), .Pointer = &UParentalSettings::execBIsAppBlocked },
		{ .NameUTF8 = UTF8TEXT("BIsAppInBlockList"), .Pointer = &UParentalSettings::execBIsAppInBlockList },
		{ .NameUTF8 = UTF8TEXT("BIsFeatureBlocked"), .Pointer = &UParentalSettings::execBIsFeatureBlocked },
		{ .NameUTF8 = UTF8TEXT("BIsFeatureInBlockList"), .Pointer = &UParentalSettings::execBIsFeatureInBlockList },
		{ .NameUTF8 = UTF8TEXT("BIsParentalLockEnabled"), .Pointer = &UParentalSettings::execBIsParentalLockEnabled },
		{ .NameUTF8 = UTF8TEXT("BIsParentalLockLocked"), .Pointer = &UParentalSettings::execBIsParentalLockLocked },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UParentalSettings_BIsAppBlocked, "BIsAppBlocked" }, // 15344420
		{ &Z_Construct_UFunction_UParentalSettings_BIsAppInBlockList, "BIsAppInBlockList" }, // 3347438562
		{ &Z_Construct_UFunction_UParentalSettings_BIsFeatureBlocked, "BIsFeatureBlocked" }, // 4277132497
		{ &Z_Construct_UFunction_UParentalSettings_BIsFeatureInBlockList, "BIsFeatureInBlockList" }, // 477000330
		{ &Z_Construct_UFunction_UParentalSettings_BIsParentalLockEnabled, "BIsParentalLockEnabled" }, // 1294492504
		{ &Z_Construct_UFunction_UParentalSettings_BIsParentalLockLocked, "BIsParentalLockLocked" }, // 2630576451
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParentalSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UParentalSettings_Statics
UObject* (*const Z_Construct_UClass_UParentalSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParentalSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParentalSettings_Statics::ClassParams = {
	&UParentalSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParentalSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UParentalSettings_Statics::Class_MetaDataParams)
};
void UParentalSettings::StaticRegisterNativesUParentalSettings()
{
	UClass* Class = UParentalSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UParentalSettings_Statics::Funcs));
}
UClass* Z_Construct_UClass_UParentalSettings()
{
	if (!Z_Registration_Info_UClass_UParentalSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParentalSettings.OuterSingleton, Z_Construct_UClass_UParentalSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParentalSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UParentalSettings);
UParentalSettings::~UParentalSettings() {}
// ********** End Class UParentalSettings **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettings_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParentalSettings, UParentalSettings::StaticClass, TEXT("UParentalSettings"), &Z_Registration_Info_UClass_UParentalSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParentalSettings), 314646340U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettings_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettings_h__Script_SteamCore_2243967678{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettings_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamParentalSettings_SteamParentalSettings_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
