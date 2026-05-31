// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRestRequestJSON.h"
#include "Engine/LatentActionManager.h"
#include "VaRestJsonObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeVaRestRequestJSON() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
UPackage* Z_Construct_UPackage__Script_VaRest();
VAREST_API UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister();
VAREST_API UClass* Z_Construct_UClass_UVaRestJsonValue_NoRegister();
VAREST_API UClass* Z_Construct_UClass_UVaRestRequestJSON();
VAREST_API UClass* Z_Construct_UClass_UVaRestRequestJSON_NoRegister();
VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestContentType();
VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestStatus();
VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestVerb();
VAREST_API UFunction* Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature();
VAREST_API UFunction* Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnRequestComplete ****************************************************
struct Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics
{
	struct _Script_VaRest_eventOnRequestComplete_Parms
	{
		UVaRestRequestJSON* Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Generate a delegates for callback events */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Generate a delegates for callback events" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestComplete constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRequestComplete constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRequestComplete Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VaRest_eventOnRequestComplete_Parms, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRequestComplete Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_VaRest, nullptr, "OnRequestComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::_Script_VaRest_eventOnRequestComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::_Script_VaRest_eventOnRequestComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRequestComplete, UVaRestRequestJSON* Request)
{
	struct _Script_VaRest_eventOnRequestComplete_Parms
	{
		UVaRestRequestJSON* Request;
	};
	_Script_VaRest_eventOnRequestComplete_Parms Parms;
	Parms.Request=Request;
	OnRequestComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestComplete ******************************************************

// ********** Begin Delegate FOnRequestFail ********************************************************
struct Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics
{
	struct _Script_VaRest_eventOnRequestFail_Parms
	{
		UVaRestRequestJSON* Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestFail constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRequestFail constinit property declarations **************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRequestFail Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VaRest_eventOnRequestFail_Parms, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRequestFail Property Definitions *************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_VaRest, nullptr, "OnRequestFail__DelegateSignature", 	Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::_Script_VaRest_eventOnRequestFail_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::_Script_VaRest_eventOnRequestFail_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestFail_DelegateWrapper(const FMulticastScriptDelegate& OnRequestFail, UVaRestRequestJSON* Request)
{
	struct _Script_VaRest_eventOnRequestFail_Parms
	{
		UVaRestRequestJSON* Request;
	};
	_Script_VaRest_eventOnRequestFail_Parms Parms;
	Parms.Request=Request;
	OnRequestFail.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestFail **********************************************************

// ********** Begin Class UVaRestRequestJSON Function AddTag ***************************************
struct Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics
{
	struct VaRestRequestJSON_eventAddTag_Parms
	{
		FName Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/** Add tag to this request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Add tag to this request" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddTag constinit property declarations ********************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddTag constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddTag Property Definitions *******************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventAddTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::PropPointers) < 2048);
// ********** End Function AddTag Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "AddTag", 	Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::VaRestRequestJSON_eventAddTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::VaRestRequestJSON_eventAddTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_AddTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execAddTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTag(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function AddTag *****************************************

// ********** Begin Class UVaRestRequestJSON Function ApplyURL *************************************
struct Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics
{
	struct VaRestRequestJSON_eventApplyURL_Parms
	{
		FString Url;
		UVaRestJsonObject* Result;
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Open URL in latent mode */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Open URL in latent mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyURL constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyURL constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyURL Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventApplyURL_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventApplyURL_Parms, Result), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventApplyURL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventApplyURL_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::PropPointers) < 2048);
// ********** End Function ApplyURL Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ApplyURL", 	Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::VaRestRequestJSON_eventApplyURL_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::VaRestRequestJSON_eventApplyURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execApplyURL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_GET_OBJECT_REF(UVaRestJsonObject,Z_Param_Out_Result);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyURL(Z_Param_Url,P_ARG_GC_BARRIER(Z_Param_Out_Result),Z_Param_WorldContextObject,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function ApplyURL ***************************************

// ********** Begin Class UVaRestRequestJSON Function Cancel ***************************************
struct Z_Construct_UFunction_UVaRestRequestJSON_Cancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Cancel latent response waiting  */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Cancel latent response waiting" },
	};
#endif // WITH_METADATA

// ********** Begin Function Cancel constinit property declarations ********************************
// ********** End Function Cancel constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_Cancel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "Cancel", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_Cancel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_Cancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_Cancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cancel();
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function Cancel *****************************************

// ********** Begin Class UVaRestRequestJSON Function ExecuteProcessRequest ************************
struct Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Check URL and execute process request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Check URL and execute process request" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExecuteProcessRequest constinit property declarations *****************
// ********** End Function ExecuteProcessRequest constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ExecuteProcessRequest", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execExecuteProcessRequest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteProcessRequest();
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function ExecuteProcessRequest **************************

// ********** Begin Class UVaRestRequestJSON Function GetAllResponseHeaders ************************
struct Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics
{
	struct VaRestRequestJSON_eventGetAllResponseHeaders_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Get list of all response headers */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get list of all response headers" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllResponseHeaders constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllResponseHeaders constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllResponseHeaders Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetAllResponseHeaders_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::PropPointers) < 2048);
// ********** End Function GetAllResponseHeaders Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetAllResponseHeaders", 	Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::VaRestRequestJSON_eventGetAllResponseHeaders_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::VaRestRequestJSON_eventGetAllResponseHeaders_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execGetAllResponseHeaders)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAllResponseHeaders();
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function GetAllResponseHeaders **************************

// ********** Begin Class UVaRestRequestJSON Function GetRequestObject *****************************
struct Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics
{
	struct VaRestRequestJSON_eventGetRequestObject_Parms
	{
		UVaRestJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Get the Request Json object */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get the Request Json object" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRequestObject constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRequestObject constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRequestObject Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetRequestObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::PropPointers) < 2048);
// ********** End Function GetRequestObject Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetRequestObject", 	Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::VaRestRequestJSON_eventGetRequestObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::VaRestRequestJSON_eventGetRequestObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execGetRequestObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVaRestJsonObject**)Z_Param__Result=P_THIS->GetRequestObject();
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function GetRequestObject *******************************

// ********** Begin Class UVaRestRequestJSON Function GetResponseCode ******************************
struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics
{
	struct VaRestRequestJSON_eventGetResponseCode_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Get the response code of the last query */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get the response code of the last query" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResponseCode constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResponseCode constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResponseCode Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseCode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::PropPointers) < 2048);
// ********** End Function GetResponseCode Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseCode", 	Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::VaRestRequestJSON_eventGetResponseCode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::VaRestRequestJSON_eventGetResponseCode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseCode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetResponseCode();
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function GetResponseCode ********************************

// ********** Begin Class UVaRestRequestJSON Function GetResponseContent ***************************
struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics
{
	struct VaRestRequestJSON_eventGetResponseContent_Parms
	{
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/**\n\x09 * Get the content payload of the request or response.\n\x09 *\n\x09 * @param Content - array that will be filled with the content.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get the content payload of the request or response.\n\n@param Content - array that will be filled with the content." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResponseContent constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResponseContent constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResponseContent Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseContent_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::PropPointers) < 2048);
// ********** End Function GetResponseContent Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseContent", 	Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::VaRestRequestJSON_eventGetResponseContent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::VaRestRequestJSON_eventGetResponseContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseContent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=P_THIS->GetResponseContent();
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function GetResponseContent *****************************

// ********** Begin Class UVaRestRequestJSON Function GetResponseContentAsString *******************
struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics
{
	struct VaRestRequestJSON_eventGetResponseContentAsString_Parms
	{
		bool bCacheResponseContent;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/**\n\x09 * Get request response stored as a string\n\x09 * @param bCacheResponseContent - Set true if you plan to use it few times to prevent deserialization each time\n\x09 */" },
		{ "CPP_Default_bCacheResponseContent", "true" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get request response stored as a string\n@param bCacheResponseContent - Set true if you plan to use it few times to prevent deserialization each time" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResponseContentAsString constinit property declarations ************
	static void NewProp_bCacheResponseContent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCacheResponseContent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResponseContentAsString constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResponseContentAsString Property Definitions ***********************
void Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_bCacheResponseContent_SetBit(void* Obj)
{
	((VaRestRequestJSON_eventGetResponseContentAsString_Parms*)Obj)->bCacheResponseContent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_bCacheResponseContent = { "bCacheResponseContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VaRestRequestJSON_eventGetResponseContentAsString_Parms), &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_bCacheResponseContent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseContentAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_bCacheResponseContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::PropPointers) < 2048);
// ********** End Function GetResponseContentAsString Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseContentAsString", 	Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::VaRestRequestJSON_eventGetResponseContentAsString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::VaRestRequestJSON_eventGetResponseContentAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseContentAsString)
{
	P_GET_UBOOL(Z_Param_bCacheResponseContent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetResponseContentAsString(Z_Param_bCacheResponseContent);
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function GetResponseContentAsString *********************

// ********** Begin Class UVaRestRequestJSON Function GetResponseContentLength *********************
struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics
{
	struct VaRestRequestJSON_eventGetResponseContentLength_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/**\n\x09 * Shortcut to get the Content-Length header value. Will not always return non-zero.\n\x09 * If you want the real length of the payload, get the payload and check it's length.\n\x09 *\n\x09 * @return the content length (if available)\n\x09 */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Shortcut to get the Content-Length header value. Will not always return non-zero.\nIf you want the real length of the payload, get the payload and check it's length.\n\n@return the content length (if available)" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResponseContentLength constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResponseContentLength constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResponseContentLength Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseContentLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::PropPointers) < 2048);
// ********** End Function GetResponseContentLength Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseContentLength", 	Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::VaRestRequestJSON_eventGetResponseContentLength_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::VaRestRequestJSON_eventGetResponseContentLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseContentLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetResponseContentLength();
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function GetResponseContentLength ***********************

// ********** Begin Class UVaRestRequestJSON Function GetResponseHeader ****************************
struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics
{
	struct VaRestRequestJSON_eventGetResponseHeader_Parms
	{
		FString HeaderName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Get value of desired response header */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get value of desired response header" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResponseHeader constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResponseHeader constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResponseHeader Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseHeader_Parms, HeaderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderName_MetaData), NewProp_HeaderName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseHeader_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_HeaderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::PropPointers) < 2048);
// ********** End Function GetResponseHeader Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseHeader", 	Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::VaRestRequestJSON_eventGetResponseHeader_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::VaRestRequestJSON_eventGetResponseHeader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseHeader)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HeaderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetResponseHeader(Z_Param_HeaderName);
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function GetResponseHeader ******************************

// ********** Begin Class UVaRestRequestJSON Function GetResponseObject ****************************
struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics
{
	struct VaRestRequestJSON_eventGetResponseObject_Parms
	{
		UVaRestJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Get the Response Json object */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get the Response Json object" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResponseObject constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResponseObject constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResponseObject Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::PropPointers) < 2048);
// ********** End Function GetResponseObject Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseObject", 	Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::VaRestRequestJSON_eventGetResponseObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::VaRestRequestJSON_eventGetResponseObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVaRestJsonObject**)Z_Param__Result=P_THIS->GetResponseObject();
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function GetResponseObject ******************************

// ********** Begin Class UVaRestRequestJSON Function GetResponseValue *****************************
struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics
{
	struct VaRestRequestJSON_eventGetResponseValue_Parms
	{
		UVaRestJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Get the Response Json value */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get the Response Json value" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetResponseValue constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResponseValue constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResponseValue Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseValue_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::PropPointers) < 2048);
// ********** End Function GetResponseValue Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseValue", 	Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::VaRestRequestJSON_eventGetResponseValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::VaRestRequestJSON_eventGetResponseValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVaRestJsonValue**)Z_Param__Result=P_THIS->GetResponseValue();
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function GetResponseValue *******************************

// ********** Begin Class UVaRestRequestJSON Function GetStatus ************************************
struct Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics
{
	struct VaRestRequestJSON_eventGetStatus_Parms
	{
		EVaRestRequestStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Get status of http request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get status of http request" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStatus constinit property declarations *****************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStatus constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStatus Property Definitions ****************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_VaRest_EVaRestRequestStatus, METADATA_PARAMS(0, nullptr) }; // 730143780
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::PropPointers) < 2048);
// ********** End Function GetStatus Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetStatus", 	Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::VaRestRequestJSON_eventGetStatus_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::VaRestRequestJSON_eventGetStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execGetStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EVaRestRequestStatus*)Z_Param__Result=P_THIS->GetStatus();
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function GetStatus **************************************

// ********** Begin Class UVaRestRequestJSON Function GetURL ***************************************
struct Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics
{
	struct VaRestRequestJSON_eventGetURL_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Get url of http request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get url of http request" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetURL constinit property declarations ********************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetURL constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetURL Property Definitions *******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetURL_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::PropPointers) < 2048);
// ********** End Function GetURL Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetURL", 	Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::VaRestRequestJSON_eventGetURL_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::VaRestRequestJSON_eventGetURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execGetURL)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetURL();
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function GetURL *****************************************

// ********** Begin Class UVaRestRequestJSON Function GetVerb **************************************
struct Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics
{
	struct VaRestRequestJSON_eventGetVerb_Parms
	{
		EVaRestRequestVerb ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Get verb to the request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get verb to the request" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVerb constinit property declarations *******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVerb constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVerb Property Definitions ******************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetVerb_Parms, ReturnValue), Z_Construct_UEnum_VaRest_EVaRestRequestVerb, METADATA_PARAMS(0, nullptr) }; // 2395183863
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::PropPointers) < 2048);
// ********** End Function GetVerb Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetVerb", 	Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::VaRestRequestJSON_eventGetVerb_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::VaRestRequestJSON_eventGetVerb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetVerb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execGetVerb)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EVaRestRequestVerb*)Z_Param__Result=P_THIS->GetVerb();
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function GetVerb ****************************************

// ********** Begin Class UVaRestRequestJSON Function HasTag ***************************************
struct Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics
{
	struct VaRestRequestJSON_eventHasTag_Parms
	{
		FName Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/** See if this request contains the supplied tag */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "See if this request contains the supplied tag" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasTag constinit property declarations ********************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasTag constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasTag Property Definitions *******************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventHasTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VaRestRequestJSON_eventHasTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VaRestRequestJSON_eventHasTag_Parms), &Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::PropPointers) < 2048);
// ********** End Function HasTag Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "HasTag", 	Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::VaRestRequestJSON_eventHasTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::VaRestRequestJSON_eventHasTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_HasTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execHasTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTag(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function HasTag *****************************************

// ********** Begin Class UVaRestRequestJSON Function ProcessURL ***********************************
struct Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics
{
	struct VaRestRequestJSON_eventProcessURL_Parms
	{
		FString Url;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Open URL with current setup */" },
		{ "CPP_Default_Url", "http://alyamkin.com" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Open URL with current setup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessURL constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessURL constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessURL Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventProcessURL_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::PropPointers) < 2048);
// ********** End Function ProcessURL Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ProcessURL", 	Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::VaRestRequestJSON_eventProcessURL_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::VaRestRequestJSON_eventProcessURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execProcessURL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessURL(Z_Param_Url);
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function ProcessURL *************************************

// ********** Begin Class UVaRestRequestJSON Function RemoveTag ************************************
struct Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics
{
	struct VaRestRequestJSON_eventRemoveTag_Parms
	{
		FName Tag;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/**\n\x09 * Remove tag from this request\n\x09 *\n\x09 * @return Number of removed elements\n\x09 */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Remove tag from this request\n\n@return Number of removed elements" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveTag constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveTag constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveTag Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventRemoveTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventRemoveTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::PropPointers) < 2048);
// ********** End Function RemoveTag Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "RemoveTag", 	Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::VaRestRequestJSON_eventRemoveTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::VaRestRequestJSON_eventRemoveTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execRemoveTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RemoveTag(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function RemoveTag **************************************

// ********** Begin Class UVaRestRequestJSON Function ResetData ************************************
struct Z_Construct_UFunction_UVaRestRequestJSON_ResetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/** Reset all internal saved data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Reset all internal saved data" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetData constinit property declarations *****************************
// ********** End Function ResetData constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ResetData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ResetData", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ResetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_ResetData_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ResetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ResetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execResetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetData();
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function ResetData **************************************

// ********** Begin Class UVaRestRequestJSON Function ResetRequestData *****************************
struct Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Reset saved request data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Reset saved request data" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetRequestData constinit property declarations **********************
// ********** End Function ResetRequestData constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ResetRequestData", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execResetRequestData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetRequestData();
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function ResetRequestData *******************************

// ********** Begin Class UVaRestRequestJSON Function ResetResponseData ****************************
struct Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Reset saved response data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Reset saved response data" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetResponseData constinit property declarations *********************
// ********** End Function ResetResponseData constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ResetResponseData", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execResetResponseData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetResponseData();
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function ResetResponseData ******************************

// ********** Begin Class UVaRestRequestJSON Function SetBinaryContentType *************************
struct Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics
{
	struct VaRestRequestJSON_eventSetBinaryContentType_Parms
	{
		FString ContentType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set content type of the request for binary post data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set content type of the request for binary post data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBinaryContentType constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBinaryContentType constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBinaryContentType Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetBinaryContentType_Parms, ContentType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentType_MetaData), NewProp_ContentType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::NewProp_ContentType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::PropPointers) < 2048);
// ********** End Function SetBinaryContentType Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetBinaryContentType", 	Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::VaRestRequestJSON_eventSetBinaryContentType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::VaRestRequestJSON_eventSetBinaryContentType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execSetBinaryContentType)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ContentType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBinaryContentType(Z_Param_ContentType);
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function SetBinaryContentType ***************************

// ********** Begin Class UVaRestRequestJSON Function SetBinaryRequestContent **********************
struct Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics
{
	struct VaRestRequestJSON_eventSetBinaryRequestContent_Parms
	{
		TArray<uint8> Content;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set content of the request for binary post data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set content of the request for binary post data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBinaryRequestContent constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Content_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Content;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBinaryRequestContent constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBinaryRequestContent Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetBinaryRequestContent_Parms, Content), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::PropPointers) < 2048);
// ********** End Function SetBinaryRequestContent Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetBinaryRequestContent", 	Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::VaRestRequestJSON_eventSetBinaryRequestContent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::VaRestRequestJSON_eventSetBinaryRequestContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execSetBinaryRequestContent)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBinaryRequestContent(Z_Param_Out_Content);
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function SetBinaryRequestContent ************************

// ********** Begin Class UVaRestRequestJSON Function SetContentType *******************************
struct Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics
{
	struct VaRestRequestJSON_eventSetContentType_Parms
	{
		EVaRestRequestContentType ContentType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set content type to the request. If you're using the x-www-form-urlencoded,\n\x09 * params/constaints should be defined as key=ValueString pairs from Json data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set content type to the request. If you're using the x-www-form-urlencoded,\nparams/constaints should be defined as key=ValueString pairs from Json data" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetContentType constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetContentType constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetContentType Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetContentType_Parms, ContentType), Z_Construct_UEnum_VaRest_EVaRestRequestContentType, METADATA_PARAMS(0, nullptr) }; // 2185392776
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::NewProp_ContentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::NewProp_ContentType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::PropPointers) < 2048);
// ********** End Function SetContentType Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetContentType", 	Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::VaRestRequestJSON_eventSetContentType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::VaRestRequestJSON_eventSetContentType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetContentType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execSetContentType)
{
	P_GET_ENUM(EVaRestRequestContentType,Z_Param_ContentType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetContentType(EVaRestRequestContentType(Z_Param_ContentType));
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function SetContentType *********************************

// ********** Begin Class UVaRestRequestJSON Function SetCustomVerb ********************************
struct Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics
{
	struct VaRestRequestJSON_eventSetCustomVerb_Parms
	{
		FString Verb;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set custom verb to the request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set custom verb to the request" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCustomVerb constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Verb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCustomVerb constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCustomVerb Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetCustomVerb_Parms, Verb), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::NewProp_Verb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::PropPointers) < 2048);
// ********** End Function SetCustomVerb Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetCustomVerb", 	Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::VaRestRequestJSON_eventSetCustomVerb_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::VaRestRequestJSON_eventSetCustomVerb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execSetCustomVerb)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Verb);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCustomVerb(Z_Param_Verb);
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function SetCustomVerb **********************************

// ********** Begin Class UVaRestRequestJSON Function SetHeader ************************************
struct Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics
{
	struct VaRestRequestJSON_eventSetHeader_Parms
	{
		FString HeaderName;
		FString HeaderValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Sets optional header info */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Sets optional header info" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHeader constinit property declarations *****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHeader constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHeader Property Definitions ****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetHeader_Parms, HeaderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderName_MetaData), NewProp_HeaderName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderValue = { "HeaderValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetHeader_Parms, HeaderValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderValue_MetaData), NewProp_HeaderValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::PropPointers) < 2048);
// ********** End Function SetHeader Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetHeader", 	Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::VaRestRequestJSON_eventSetHeader_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::VaRestRequestJSON_eventSetHeader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetHeader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execSetHeader)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HeaderName);
	P_GET_PROPERTY(FStrProperty,Z_Param_HeaderValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeader(Z_Param_HeaderName,Z_Param_HeaderValue);
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function SetHeader **************************************

// ********** Begin Class UVaRestRequestJSON Function SetRequestObject *****************************
struct Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics
{
	struct VaRestRequestJSON_eventSetRequestObject_Parms
	{
		UVaRestJsonObject* JsonObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set the Request Json object */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set the Request Json object" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRequestObject constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRequestObject constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRequestObject Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetRequestObject_Parms, JsonObject), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::NewProp_JsonObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::PropPointers) < 2048);
// ********** End Function SetRequestObject Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetRequestObject", 	Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::VaRestRequestJSON_eventSetRequestObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::VaRestRequestJSON_eventSetRequestObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execSetRequestObject)
{
	P_GET_OBJECT(UVaRestJsonObject,Z_Param_JsonObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequestObject(Z_Param_JsonObject);
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function SetRequestObject *******************************

// ********** Begin Class UVaRestRequestJSON Function SetResponseObject ****************************
struct Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics
{
	struct VaRestRequestJSON_eventSetResponseObject_Parms
	{
		UVaRestJsonObject* JsonObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Set the Response Json object */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set the Response Json object" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetResponseObject constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetResponseObject constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetResponseObject Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetResponseObject_Parms, JsonObject), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::NewProp_JsonObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::PropPointers) < 2048);
// ********** End Function SetResponseObject Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetResponseObject", 	Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::VaRestRequestJSON_eventSetResponseObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::VaRestRequestJSON_eventSetResponseObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execSetResponseObject)
{
	P_GET_OBJECT(UVaRestJsonObject,Z_Param_JsonObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResponseObject(Z_Param_JsonObject);
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function SetResponseObject ******************************

// ********** Begin Class UVaRestRequestJSON Function SetStringRequestContent **********************
struct Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics
{
	struct VaRestRequestJSON_eventSetStringRequestContent_Parms
	{
		FString Content;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set content of the request as a plain string */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set content of the request as a plain string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStringRequestContent constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStringRequestContent constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStringRequestContent Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetStringRequestContent_Parms, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::NewProp_Content,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::PropPointers) < 2048);
// ********** End Function SetStringRequestContent Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetStringRequestContent", 	Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::VaRestRequestJSON_eventSetStringRequestContent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::VaRestRequestJSON_eventSetStringRequestContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execSetStringRequestContent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStringRequestContent(Z_Param_Content);
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function SetStringRequestContent ************************

// ********** Begin Class UVaRestRequestJSON Function SetURL ***************************************
struct Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics
{
	struct VaRestRequestJSON_eventSetURL_Parms
	{
		FString Url;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Setting request URL */" },
		{ "CPP_Default_Url", "http://alyamkin.com" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Setting request URL" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetURL constinit property declarations ********************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetURL constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetURL Property Definitions *******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetURL_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::PropPointers) < 2048);
// ********** End Function SetURL Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetURL", 	Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::VaRestRequestJSON_eventSetURL_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::VaRestRequestJSON_eventSetURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execSetURL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetURL(Z_Param_Url);
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function SetURL *****************************************

// ********** Begin Class UVaRestRequestJSON Function SetVerb **************************************
struct Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics
{
	struct VaRestRequestJSON_eventSetVerb_Parms
	{
		EVaRestRequestVerb Verb;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set verb to the request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set verb to the request" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVerb constinit property declarations *******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVerb constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVerb Property Definitions ******************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetVerb_Parms, Verb), Z_Construct_UEnum_VaRest_EVaRestRequestVerb, METADATA_PARAMS(0, nullptr) }; // 2395183863
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::NewProp_Verb_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::NewProp_Verb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::PropPointers) < 2048);
// ********** End Function SetVerb Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetVerb", 	Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::VaRestRequestJSON_eventSetVerb_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::VaRestRequestJSON_eventSetVerb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetVerb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVaRestRequestJSON::execSetVerb)
{
	P_GET_ENUM(EVaRestRequestVerb,Z_Param_Verb);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVerb(EVaRestRequestVerb(Z_Param_Verb));
	P_NATIVE_END;
}
// ********** End Class UVaRestRequestJSON Function SetVerb ****************************************

// ********** Begin Class UVaRestRequestJSON *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UVaRestRequestJSON;
UClass* UVaRestRequestJSON::GetPrivateStaticClass()
{
	using TClass = UVaRestRequestJSON;
	if (!Z_Registration_Info_UClass_UVaRestRequestJSON.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("VaRestRequestJSON"),
			Z_Registration_Info_UClass_UVaRestRequestJSON.InnerSingleton,
			StaticRegisterNativesUVaRestRequestJSON,
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
	return Z_Registration_Info_UClass_UVaRestRequestJSON.InnerSingleton;
}
UClass* Z_Construct_UClass_UVaRestRequestJSON_NoRegister()
{
	return UVaRestRequestJSON::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVaRestRequestJSON_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * General helper class http requests via blueprints\n */" },
		{ "IncludePath", "VaRestRequestJSON.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "General helper class http requests via blueprints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestComplete_MetaData[] = {
		{ "Category", "VaRest|Event" },
		{ "Comment", "/** Event occured when the request has been completed */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Event occured when the request has been completed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestFail_MetaData[] = {
		{ "Category", "VaRest|Event" },
		{ "Comment", "/** Event occured when the request wasn't successfull */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Event occured when the request wasn't successfull" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseSize_MetaData[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Response size */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Response size" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseContent_MetaData[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** DEPRECATED: Please use GetResponseContentAsString() instead */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "DEPRECATED: Please use GetResponseContentAsString() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValidJsonResponse_MetaData[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Is the response valid JSON? */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Is the response valid JSON?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[] = {
		{ "Comment", "/** Internal request data stored as JSON */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Internal request data stored as JSON" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[] = {
		{ "Comment", "/** Response data stored as JSON */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Response data stored as JSON" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonValue_MetaData[] = {
		{ "Comment", "/** Response data stored as JSON value */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Response data stored as JSON value" },
	};
#endif // WITH_METADATA

// ********** Begin Class UVaRestRequestJSON constinit property declarations ***********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestFail;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResponseSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseContent;
	static void NewProp_bIsValidJsonResponse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidJsonResponse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestJsonObj;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseJsonObj;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseJsonValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UVaRestRequestJSON constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddTag"), .Pointer = &UVaRestRequestJSON::execAddTag },
		{ .NameUTF8 = UTF8TEXT("ApplyURL"), .Pointer = &UVaRestRequestJSON::execApplyURL },
		{ .NameUTF8 = UTF8TEXT("Cancel"), .Pointer = &UVaRestRequestJSON::execCancel },
		{ .NameUTF8 = UTF8TEXT("ExecuteProcessRequest"), .Pointer = &UVaRestRequestJSON::execExecuteProcessRequest },
		{ .NameUTF8 = UTF8TEXT("GetAllResponseHeaders"), .Pointer = &UVaRestRequestJSON::execGetAllResponseHeaders },
		{ .NameUTF8 = UTF8TEXT("GetRequestObject"), .Pointer = &UVaRestRequestJSON::execGetRequestObject },
		{ .NameUTF8 = UTF8TEXT("GetResponseCode"), .Pointer = &UVaRestRequestJSON::execGetResponseCode },
		{ .NameUTF8 = UTF8TEXT("GetResponseContent"), .Pointer = &UVaRestRequestJSON::execGetResponseContent },
		{ .NameUTF8 = UTF8TEXT("GetResponseContentAsString"), .Pointer = &UVaRestRequestJSON::execGetResponseContentAsString },
		{ .NameUTF8 = UTF8TEXT("GetResponseContentLength"), .Pointer = &UVaRestRequestJSON::execGetResponseContentLength },
		{ .NameUTF8 = UTF8TEXT("GetResponseHeader"), .Pointer = &UVaRestRequestJSON::execGetResponseHeader },
		{ .NameUTF8 = UTF8TEXT("GetResponseObject"), .Pointer = &UVaRestRequestJSON::execGetResponseObject },
		{ .NameUTF8 = UTF8TEXT("GetResponseValue"), .Pointer = &UVaRestRequestJSON::execGetResponseValue },
		{ .NameUTF8 = UTF8TEXT("GetStatus"), .Pointer = &UVaRestRequestJSON::execGetStatus },
		{ .NameUTF8 = UTF8TEXT("GetURL"), .Pointer = &UVaRestRequestJSON::execGetURL },
		{ .NameUTF8 = UTF8TEXT("GetVerb"), .Pointer = &UVaRestRequestJSON::execGetVerb },
		{ .NameUTF8 = UTF8TEXT("HasTag"), .Pointer = &UVaRestRequestJSON::execHasTag },
		{ .NameUTF8 = UTF8TEXT("ProcessURL"), .Pointer = &UVaRestRequestJSON::execProcessURL },
		{ .NameUTF8 = UTF8TEXT("RemoveTag"), .Pointer = &UVaRestRequestJSON::execRemoveTag },
		{ .NameUTF8 = UTF8TEXT("ResetData"), .Pointer = &UVaRestRequestJSON::execResetData },
		{ .NameUTF8 = UTF8TEXT("ResetRequestData"), .Pointer = &UVaRestRequestJSON::execResetRequestData },
		{ .NameUTF8 = UTF8TEXT("ResetResponseData"), .Pointer = &UVaRestRequestJSON::execResetResponseData },
		{ .NameUTF8 = UTF8TEXT("SetBinaryContentType"), .Pointer = &UVaRestRequestJSON::execSetBinaryContentType },
		{ .NameUTF8 = UTF8TEXT("SetBinaryRequestContent"), .Pointer = &UVaRestRequestJSON::execSetBinaryRequestContent },
		{ .NameUTF8 = UTF8TEXT("SetContentType"), .Pointer = &UVaRestRequestJSON::execSetContentType },
		{ .NameUTF8 = UTF8TEXT("SetCustomVerb"), .Pointer = &UVaRestRequestJSON::execSetCustomVerb },
		{ .NameUTF8 = UTF8TEXT("SetHeader"), .Pointer = &UVaRestRequestJSON::execSetHeader },
		{ .NameUTF8 = UTF8TEXT("SetRequestObject"), .Pointer = &UVaRestRequestJSON::execSetRequestObject },
		{ .NameUTF8 = UTF8TEXT("SetResponseObject"), .Pointer = &UVaRestRequestJSON::execSetResponseObject },
		{ .NameUTF8 = UTF8TEXT("SetStringRequestContent"), .Pointer = &UVaRestRequestJSON::execSetStringRequestContent },
		{ .NameUTF8 = UTF8TEXT("SetURL"), .Pointer = &UVaRestRequestJSON::execSetURL },
		{ .NameUTF8 = UTF8TEXT("SetVerb"), .Pointer = &UVaRestRequestJSON::execSetVerb },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaRestRequestJSON_AddTag, "AddTag" }, // 3311123293
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL, "ApplyURL" }, // 2117518074
		{ &Z_Construct_UFunction_UVaRestRequestJSON_Cancel, "Cancel" }, // 1593622363
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest, "ExecuteProcessRequest" }, // 3766309024
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders, "GetAllResponseHeaders" }, // 4208494164
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject, "GetRequestObject" }, // 441950292
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode, "GetResponseCode" }, // 4207863452
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent, "GetResponseContent" }, // 3481562415
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString, "GetResponseContentAsString" }, // 761551085
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength, "GetResponseContentLength" }, // 1769559321
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader, "GetResponseHeader" }, // 3431537528
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject, "GetResponseObject" }, // 364895221
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue, "GetResponseValue" }, // 3732977431
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetStatus, "GetStatus" }, // 1682217136
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetURL, "GetURL" }, // 3592800264
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetVerb, "GetVerb" }, // 3407082765
		{ &Z_Construct_UFunction_UVaRestRequestJSON_HasTag, "HasTag" }, // 2975233783
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL, "ProcessURL" }, // 3993356682
		{ &Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag, "RemoveTag" }, // 3462620333
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ResetData, "ResetData" }, // 2267338221
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData, "ResetRequestData" }, // 1746884637
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData, "ResetResponseData" }, // 2476934627
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType, "SetBinaryContentType" }, // 22812378
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent, "SetBinaryRequestContent" }, // 3998884601
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetContentType, "SetContentType" }, // 394714262
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb, "SetCustomVerb" }, // 3083622580
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetHeader, "SetHeader" }, // 445618750
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject, "SetRequestObject" }, // 3441924883
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject, "SetResponseObject" }, // 2165294438
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent, "SetStringRequestContent" }, // 805506707
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetURL, "SetURL" }, // 629524249
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetVerb, "SetVerb" }, // 152305274
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestRequestJSON>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UVaRestRequestJSON_Statics

// ********** Begin Class UVaRestRequestJSON Property Definitions **********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestComplete = { "OnRequestComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRestRequestJSON, OnRequestComplete), Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestComplete_MetaData), NewProp_OnRequestComplete_MetaData) }; // 190974270
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestFail = { "OnRequestFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRestRequestJSON, OnRequestFail), Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestFail_MetaData), NewProp_OnRequestFail_MetaData) }; // 2009070373
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseSize = { "ResponseSize", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRestRequestJSON, ResponseSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseSize_MetaData), NewProp_ResponseSize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseContent = { "ResponseContent", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRestRequestJSON, ResponseContent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseContent_MetaData), NewProp_ResponseContent_MetaData) };
void Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse_SetBit(void* Obj)
{
	((UVaRestRequestJSON*)Obj)->bIsValidJsonResponse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse = { "bIsValidJsonResponse", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVaRestRequestJSON), &Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValidJsonResponse_MetaData), NewProp_bIsValidJsonResponse_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRestRequestJSON, RequestJsonObj), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestJsonObj_MetaData), NewProp_RequestJsonObj_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRestRequestJSON, ResponseJsonObj), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseJsonObj_MetaData), NewProp_ResponseJsonObj_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonValue = { "ResponseJsonValue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRestRequestJSON, ResponseJsonValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseJsonValue_MetaData), NewProp_ResponseJsonValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaRestRequestJSON_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestFail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_RequestJsonObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::PropPointers) < 2048);
// ********** End Class UVaRestRequestJSON Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UVaRestRequestJSON_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVaRestRequestJSON_Statics::ClassParams = {
	&UVaRestRequestJSON::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVaRestRequestJSON_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::Class_MetaDataParams), Z_Construct_UClass_UVaRestRequestJSON_Statics::Class_MetaDataParams)
};
void UVaRestRequestJSON::StaticRegisterNativesUVaRestRequestJSON()
{
	UClass* Class = UVaRestRequestJSON::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UVaRestRequestJSON_Statics::Funcs));
}
UClass* Z_Construct_UClass_UVaRestRequestJSON()
{
	if (!Z_Registration_Info_UClass_UVaRestRequestJSON.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVaRestRequestJSON.OuterSingleton, Z_Construct_UClass_UVaRestRequestJSON_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVaRestRequestJSON.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UVaRestRequestJSON);
UVaRestRequestJSON::~UVaRestRequestJSON() {}
// ********** End Class UVaRestRequestJSON *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h__Script_VaRest_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVaRestRequestJSON, UVaRestRequestJSON::StaticClass, TEXT("UVaRestRequestJSON"), &Z_Registration_Info_UClass_UVaRestRequestJSON, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVaRestRequestJSON), 592007390U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h__Script_VaRest_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h__Script_VaRest_2746964718{
	TEXT("/Script/VaRest"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h__Script_VaRest_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h__Script_VaRest_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
