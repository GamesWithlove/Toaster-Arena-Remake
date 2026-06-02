// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRestTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeVaRestTypes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VaRest();
VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestHttpStatusCode();
VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestContentType();
VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestStatus();
VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestVerb();
VAREST_API UScriptStruct* Z_Construct_UScriptStruct_FVaRestURL();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVaRestRequestVerb ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVaRestRequestVerb;
static UEnum* EVaRestRequestVerb_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVaRestRequestVerb.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVaRestRequestVerb.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VaRest_EVaRestRequestVerb, (UObject*)Z_Construct_UPackage__Script_VaRest(), TEXT("EVaRestRequestVerb"));
	}
	return Z_Registration_Info_UEnum_EVaRestRequestVerb.OuterSingleton;
}
template<> VAREST_NON_ATTRIBUTED_API UEnum* StaticEnum<EVaRestRequestVerb>()
{
	return EVaRestRequestVerb_StaticEnum();
}
struct Z_Construct_UEnum_VaRest_EVaRestRequestVerb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Verb (GET, PUT, POST) used by the request */" },
#endif
		{ "CUSTOM.Comment", "/** Set CUSTOM verb by SetCustomVerb() function */" },
		{ "CUSTOM.Name", "EVaRestRequestVerb::CUSTOM" },
		{ "CUSTOM.ToolTip", "Set CUSTOM verb by SetCustomVerb() function" },
		{ "DEL.DisplayName", "DELETE" },
		{ "DEL.Name", "EVaRestRequestVerb::DEL" },
		{ "GET.Name", "EVaRestRequestVerb::GET" },
		{ "ModuleRelativePath", "Public/VaRestTypes.h" },
		{ "POST.Name", "EVaRestRequestVerb::POST" },
		{ "PUT.Name", "EVaRestRequestVerb::PUT" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Verb (GET, PUT, POST) used by the request" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVaRestRequestVerb::GET", (int64)EVaRestRequestVerb::GET },
		{ "EVaRestRequestVerb::POST", (int64)EVaRestRequestVerb::POST },
		{ "EVaRestRequestVerb::PUT", (int64)EVaRestRequestVerb::PUT },
		{ "EVaRestRequestVerb::DEL", (int64)EVaRestRequestVerb::DEL },
		{ "EVaRestRequestVerb::CUSTOM", (int64)EVaRestRequestVerb::CUSTOM },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_VaRest_EVaRestRequestVerb_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VaRest_EVaRestRequestVerb_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VaRest,
	nullptr,
	"EVaRestRequestVerb",
	"EVaRestRequestVerb",
	Z_Construct_UEnum_VaRest_EVaRestRequestVerb_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VaRest_EVaRestRequestVerb_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VaRest_EVaRestRequestVerb_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VaRest_EVaRestRequestVerb_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestVerb()
{
	if (!Z_Registration_Info_UEnum_EVaRestRequestVerb.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVaRestRequestVerb.InnerSingleton, Z_Construct_UEnum_VaRest_EVaRestRequestVerb_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVaRestRequestVerb.InnerSingleton;
}
// ********** End Enum EVaRestRequestVerb **********************************************************

// ********** Begin Enum EVaRestRequestContentType *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVaRestRequestContentType;
static UEnum* EVaRestRequestContentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVaRestRequestContentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVaRestRequestContentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VaRest_EVaRestRequestContentType, (UObject*)Z_Construct_UPackage__Script_VaRest(), TEXT("EVaRestRequestContentType"));
	}
	return Z_Registration_Info_UEnum_EVaRestRequestContentType.OuterSingleton;
}
template<> VAREST_NON_ATTRIBUTED_API UEnum* StaticEnum<EVaRestRequestContentType>()
{
	return EVaRestRequestContentType_StaticEnum();
}
struct Z_Construct_UEnum_VaRest_EVaRestRequestContentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "binary.Name", "EVaRestRequestContentType::binary" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Content type (json, urlencoded, etc.) used by the request */" },
#endif
		{ "json.Name", "EVaRestRequestContentType::json" },
		{ "ModuleRelativePath", "Public/VaRestTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Content type (json, urlencoded, etc.) used by the request" },
#endif
		{ "x_www_form_urlencoded_body.DisplayName", "x-www-form-urlencoded (Request Body)" },
		{ "x_www_form_urlencoded_body.Name", "EVaRestRequestContentType::x_www_form_urlencoded_body" },
		{ "x_www_form_urlencoded_url.DisplayName", "x-www-form-urlencoded (URL)" },
		{ "x_www_form_urlencoded_url.Name", "EVaRestRequestContentType::x_www_form_urlencoded_url" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVaRestRequestContentType::x_www_form_urlencoded_url", (int64)EVaRestRequestContentType::x_www_form_urlencoded_url },
		{ "EVaRestRequestContentType::x_www_form_urlencoded_body", (int64)EVaRestRequestContentType::x_www_form_urlencoded_body },
		{ "EVaRestRequestContentType::json", (int64)EVaRestRequestContentType::json },
		{ "EVaRestRequestContentType::binary", (int64)EVaRestRequestContentType::binary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_VaRest_EVaRestRequestContentType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VaRest_EVaRestRequestContentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VaRest,
	nullptr,
	"EVaRestRequestContentType",
	"EVaRestRequestContentType",
	Z_Construct_UEnum_VaRest_EVaRestRequestContentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VaRest_EVaRestRequestContentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VaRest_EVaRestRequestContentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VaRest_EVaRestRequestContentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestContentType()
{
	if (!Z_Registration_Info_UEnum_EVaRestRequestContentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVaRestRequestContentType.InnerSingleton, Z_Construct_UEnum_VaRest_EVaRestRequestContentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVaRestRequestContentType.InnerSingleton;
}
// ********** End Enum EVaRestRequestContentType ***************************************************

// ********** Begin Enum EVaRestRequestStatus ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVaRestRequestStatus;
static UEnum* EVaRestRequestStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVaRestRequestStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVaRestRequestStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VaRest_EVaRestRequestStatus, (UObject*)Z_Construct_UPackage__Script_VaRest(), TEXT("EVaRestRequestStatus"));
	}
	return Z_Registration_Info_UEnum_EVaRestRequestStatus.OuterSingleton;
}
template<> VAREST_NON_ATTRIBUTED_API UEnum* StaticEnum<EVaRestRequestStatus>()
{
	return EVaRestRequestStatus_StaticEnum();
}
struct Z_Construct_UEnum_VaRest_EVaRestRequestStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enumerates the current state of an Http request */" },
#endif
		{ "Failed.Comment", "/** Finished but failed */" },
		{ "Failed.Name", "EVaRestRequestStatus::Failed" },
		{ "Failed.ToolTip", "Finished but failed" },
		{ "Failed_ConnectionError.Comment", "/** Failed because it was unable to connect (safe to retry) */" },
		{ "Failed_ConnectionError.Name", "EVaRestRequestStatus::Failed_ConnectionError" },
		{ "Failed_ConnectionError.ToolTip", "Failed because it was unable to connect (safe to retry)" },
		{ "ModuleRelativePath", "Public/VaRestTypes.h" },
		{ "NotStarted.Comment", "/** Has not been started via ProcessRequest() */" },
		{ "NotStarted.Name", "EVaRestRequestStatus::NotStarted" },
		{ "NotStarted.ToolTip", "Has not been started via ProcessRequest()" },
		{ "Processing.Comment", "/** Currently being ticked and processed */" },
		{ "Processing.Name", "EVaRestRequestStatus::Processing" },
		{ "Processing.ToolTip", "Currently being ticked and processed" },
		{ "Succeeded.Comment", "/** Finished and was successful */" },
		{ "Succeeded.Name", "EVaRestRequestStatus::Succeeded" },
		{ "Succeeded.ToolTip", "Finished and was successful" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerates the current state of an Http request" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVaRestRequestStatus::NotStarted", (int64)EVaRestRequestStatus::NotStarted },
		{ "EVaRestRequestStatus::Processing", (int64)EVaRestRequestStatus::Processing },
		{ "EVaRestRequestStatus::Failed", (int64)EVaRestRequestStatus::Failed },
		{ "EVaRestRequestStatus::Failed_ConnectionError", (int64)EVaRestRequestStatus::Failed_ConnectionError },
		{ "EVaRestRequestStatus::Succeeded", (int64)EVaRestRequestStatus::Succeeded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_VaRest_EVaRestRequestStatus_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VaRest_EVaRestRequestStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VaRest,
	nullptr,
	"EVaRestRequestStatus",
	"EVaRestRequestStatus",
	Z_Construct_UEnum_VaRest_EVaRestRequestStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VaRest_EVaRestRequestStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VaRest_EVaRestRequestStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VaRest_EVaRestRequestStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestStatus()
{
	if (!Z_Registration_Info_UEnum_EVaRestRequestStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVaRestRequestStatus.InnerSingleton, Z_Construct_UEnum_VaRest_EVaRestRequestStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVaRestRequestStatus.InnerSingleton;
}
// ********** End Enum EVaRestRequestStatus ********************************************************

// ********** Begin Enum EVaRestHttpStatusCode *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVaRestHttpStatusCode;
static UEnum* EVaRestHttpStatusCode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVaRestHttpStatusCode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVaRestHttpStatusCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VaRest_EVaRestHttpStatusCode, (UObject*)Z_Construct_UPackage__Script_VaRest(), TEXT("EVaRestHttpStatusCode"));
	}
	return Z_Registration_Info_UEnum_EVaRestHttpStatusCode.OuterSingleton;
}
template<> VAREST_NON_ATTRIBUTED_API UEnum* StaticEnum<EVaRestHttpStatusCode::Type>()
{
	return EVaRestHttpStatusCode_StaticEnum();
}
struct Z_Construct_UEnum_VaRest_EVaRestHttpStatusCode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Accepted.Comment", "// the request has been accepted for processing, but the processing has not been completed.\n" },
		{ "Accepted.DisplayName", "Accepted = 202" },
		{ "Accepted.Name", "EVaRestHttpStatusCode::Accepted" },
		{ "Accepted.ToolTip", "the request has been accepted for processing, but the processing has not been completed." },
		{ "Ambiguous.Comment", "// the server couldn't decide what to return.\n" },
		{ "Ambiguous.DisplayName", "Ambiguous = 300" },
		{ "Ambiguous.Name", "EVaRestHttpStatusCode::Ambiguous" },
		{ "Ambiguous.ToolTip", "the server couldn't decide what to return." },
		{ "BadGateway.Comment", "// the server, while acting as a gateway or proxy, received an invalid response from the upstream server it accessed in attempting to fulfill the request.\n" },
		{ "BadGateway.DisplayName", "BadGateway = 502" },
		{ "BadGateway.Name", "EVaRestHttpStatusCode::BadGateway" },
		{ "BadGateway.ToolTip", "the server, while acting as a gateway or proxy, received an invalid response from the upstream server it accessed in attempting to fulfill the request." },
		{ "BadMethod.Comment", "// the http verb used is not allowed.\n" },
		{ "BadMethod.DisplayName", "BadMethod = 405" },
		{ "BadMethod.Name", "EVaRestHttpStatusCode::BadMethod" },
		{ "BadMethod.ToolTip", "the http verb used is not allowed." },
		{ "BadRequest.Comment", "// the request could not be processed by the server due to invalid syntax.\n" },
		{ "BadRequest.DisplayName", "BadRequest = 400" },
		{ "BadRequest.Name", "EVaRestHttpStatusCode::BadRequest" },
		{ "BadRequest.ToolTip", "the request could not be processed by the server due to invalid syntax." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Response codes that can come back from an Http request\n */" },
#endif
		{ "Conflict.Comment", "// the request could not be completed due to a conflict with the current state of the resource. the user should resubmit with more information.\n" },
		{ "Conflict.DisplayName", "Conflict = 409" },
		{ "Conflict.Name", "EVaRestHttpStatusCode::Conflict" },
		{ "Conflict.ToolTip", "the request could not be completed due to a conflict with the current state of the resource. the user should resubmit with more information." },
		{ "Continue.Comment", "// the request can be continued.\n" },
		{ "Continue.DisplayName", "Continue = 100" },
		{ "Continue.Name", "EVaRestHttpStatusCode::Continue" },
		{ "Continue.ToolTip", "the request can be continued." },
		{ "Created.Comment", "// the request has been fulfilled and resulted in the creation of a new resource.\n" },
		{ "Created.DisplayName", "Created = 201" },
		{ "Created.Name", "EVaRestHttpStatusCode::Created" },
		{ "Created.ToolTip", "the request has been fulfilled and resulted in the creation of a new resource." },
		{ "Denied.Comment", "// the requested resource requires user authentication.\n" },
		{ "Denied.DisplayName", "Denied = 401" },
		{ "Denied.Name", "EVaRestHttpStatusCode::Denied" },
		{ "Denied.ToolTip", "the requested resource requires user authentication." },
		{ "Forbidden.Comment", "// the server understood the request, but is refusing to fulfill it.\n" },
		{ "Forbidden.DisplayName", "Forbidden = 403" },
		{ "Forbidden.Name", "EVaRestHttpStatusCode::Forbidden" },
		{ "Forbidden.ToolTip", "the server understood the request, but is refusing to fulfill it." },
		{ "GatewayTimeout.Comment", "// the request was timed out waiting for a gateway.\n" },
		{ "GatewayTimeout.DisplayName", "GatewayTimeout = 504" },
		{ "GatewayTimeout.Name", "EVaRestHttpStatusCode::GatewayTimeout" },
		{ "GatewayTimeout.ToolTip", "the request was timed out waiting for a gateway." },
		{ "Gone.Comment", "// the requested resource is no longer available at the server, and no forwarding address is known.\n" },
		{ "Gone.DisplayName", "Gone = 410" },
		{ "Gone.Name", "EVaRestHttpStatusCode::Gone" },
		{ "Gone.ToolTip", "the requested resource is no longer available at the server, and no forwarding address is known." },
		{ "LengthRequired.Comment", "// the server refuses to accept the request without a defined content length.\n" },
		{ "LengthRequired.DisplayName", "LengthRequired = 411" },
		{ "LengthRequired.Name", "EVaRestHttpStatusCode::LengthRequired" },
		{ "LengthRequired.ToolTip", "the server refuses to accept the request without a defined content length." },
		{ "ModuleRelativePath", "Public/VaRestTypes.h" },
		{ "Moved.Comment", "// the requested resource has been assigned to a new permanent uri (uniform resource identifier), and any future references to this resource should be done using one of the returned uris.\n" },
		{ "Moved.DisplayName", "Moved = 301" },
		{ "Moved.Name", "EVaRestHttpStatusCode::Moved" },
		{ "Moved.ToolTip", "the requested resource has been assigned to a new permanent uri (uniform resource identifier), and any future references to this resource should be done using one of the returned uris." },
		{ "NoContent.Comment", "// the server has fulfilled the request, but there is no new information to send back.\n" },
		{ "NoContent.DisplayName", "NoContent = 204" },
		{ "NoContent.Name", "EVaRestHttpStatusCode::NoContent" },
		{ "NoContent.ToolTip", "the server has fulfilled the request, but there is no new information to send back." },
		{ "NoneAcceptable.Comment", "// no responses acceptable to the client were found.\n" },
		{ "NoneAcceptable.DisplayName", "NoneAcceptable = 406" },
		{ "NoneAcceptable.Name", "EVaRestHttpStatusCode::NoneAcceptable" },
		{ "NoneAcceptable.ToolTip", "no responses acceptable to the client were found." },
		{ "NotFound.Comment", "// the server has not found anything matching the requested uri (uniform resource identifier).\n" },
		{ "NotFound.DisplayName", "NotFound = 404" },
		{ "NotFound.Name", "EVaRestHttpStatusCode::NotFound" },
		{ "NotFound.ToolTip", "the server has not found anything matching the requested uri (uniform resource identifier)." },
		{ "NotModified.Comment", "// the requested resource has not been modified.\n" },
		{ "NotModified.DisplayName", "NotModified = 304" },
		{ "NotModified.Name", "EVaRestHttpStatusCode::NotModified" },
		{ "NotModified.ToolTip", "the requested resource has not been modified." },
		{ "NotSupported.Comment", "// the server does not support the functionality required to fulfill the request.\n" },
		{ "NotSupported.DisplayName", "NotSupported = 501" },
		{ "NotSupported.Name", "EVaRestHttpStatusCode::NotSupported" },
		{ "NotSupported.ToolTip", "the server does not support the functionality required to fulfill the request." },
		{ "Ok.Comment", "// the request completed successfully.\n" },
		{ "Ok.DisplayName", "Ok = 200" },
		{ "Ok.Name", "EVaRestHttpStatusCode::Ok" },
		{ "Ok.ToolTip", "the request completed successfully." },
		{ "Partial.Comment", "// the returned meta information in the entity-header is not the definitive set available from the origin server.\n" },
		{ "Partial.DisplayName", "Partial = 203" },
		{ "Partial.Name", "EVaRestHttpStatusCode::Partial" },
		{ "Partial.ToolTip", "the returned meta information in the entity-header is not the definitive set available from the origin server." },
		{ "PartialContent.Comment", "// the server has fulfilled the partial get request for the resource.\n" },
		{ "PartialContent.DisplayName", "PartialContent = 206" },
		{ "PartialContent.Name", "EVaRestHttpStatusCode::PartialContent" },
		{ "PartialContent.ToolTip", "the server has fulfilled the partial get request for the resource." },
		{ "PaymentReq.Comment", "// not currently implemented in the http protocol.\n" },
		{ "PaymentReq.DisplayName", "PaymentReq = 402" },
		{ "PaymentReq.Name", "EVaRestHttpStatusCode::PaymentReq" },
		{ "PaymentReq.ToolTip", "not currently implemented in the http protocol." },
		{ "PrecondFailed.Comment", "// the precondition given in one or more of the request header fields evaluated to false when it was tested on the server.\n" },
		{ "PrecondFailed.DisplayName", "PrecondFailed = 412" },
		{ "PrecondFailed.Name", "EVaRestHttpStatusCode::PrecondFailed" },
		{ "PrecondFailed.ToolTip", "the precondition given in one or more of the request header fields evaluated to false when it was tested on the server." },
		{ "ProxyAuthReq.Comment", "// proxy authentication required.\n" },
		{ "ProxyAuthReq.DisplayName", "ProxyAuthReq = 407" },
		{ "ProxyAuthReq.Name", "EVaRestHttpStatusCode::ProxyAuthReq" },
		{ "ProxyAuthReq.ToolTip", "proxy authentication required." },
		{ "Redirect.Comment", "// the requested resource resides temporarily under a different uri (uniform resource identifier).\n" },
		{ "Redirect.DisplayName", "Redirect = 302" },
		{ "Redirect.Name", "EVaRestHttpStatusCode::Redirect" },
		{ "Redirect.ToolTip", "the requested resource resides temporarily under a different uri (uniform resource identifier)." },
		{ "RedirectKeepVerb.Comment", "// the redirected request keeps the same http verb. http/1.1 behavior.\n" },
		{ "RedirectKeepVerb.DisplayName", "RedirectKeepVerb = 307" },
		{ "RedirectKeepVerb.Name", "EVaRestHttpStatusCode::RedirectKeepVerb" },
		{ "RedirectKeepVerb.ToolTip", "the redirected request keeps the same http verb. http/1.1 behavior." },
		{ "RedirectMethod.Comment", "// the response to the request can be found under a different uri (uniform resource identifier) and should be retrieved using a get http verb on that resource.\n" },
		{ "RedirectMethod.DisplayName", "RedirectMethod = 303" },
		{ "RedirectMethod.Name", "EVaRestHttpStatusCode::RedirectMethod" },
		{ "RedirectMethod.ToolTip", "the response to the request can be found under a different uri (uniform resource identifier) and should be retrieved using a get http verb on that resource." },
		{ "RequestTimeout.Comment", "// the server timed out waiting for the request.\n" },
		{ "RequestTimeout.DisplayName", "RequestTimeout = 408" },
		{ "RequestTimeout.Name", "EVaRestHttpStatusCode::RequestTimeout" },
		{ "RequestTimeout.ToolTip", "the server timed out waiting for the request." },
		{ "RequestTooLarge.Comment", "// the server is refusing to process a request because the request entity is larger than the server is willing or able to process.\n" },
		{ "RequestTooLarge.DisplayName", "RequestTooLarge = 413" },
		{ "RequestTooLarge.Name", "EVaRestHttpStatusCode::RequestTooLarge" },
		{ "RequestTooLarge.ToolTip", "the server is refusing to process a request because the request entity is larger than the server is willing or able to process." },
		{ "ResetContent.Comment", "// the request has been completed, and the client program should reset the document view that caused the request to be sent to allow the user to easily initiate another input action.\n" },
		{ "ResetContent.DisplayName", "ResetContent = 205" },
		{ "ResetContent.Name", "EVaRestHttpStatusCode::ResetContent" },
		{ "ResetContent.ToolTip", "the request has been completed, and the client program should reset the document view that caused the request to be sent to allow the user to easily initiate another input action." },
		{ "RetryWith.Comment", "// the request should be retried after doing the appropriate action.\n" },
		{ "RetryWith.DisplayName", "RetryWith = 449" },
		{ "RetryWith.Name", "EVaRestHttpStatusCode::RetryWith" },
		{ "RetryWith.ToolTip", "the request should be retried after doing the appropriate action." },
		{ "ServerError.Comment", "// the server encountered an unexpected condition that prevented it from fulfilling the request.\n" },
		{ "ServerError.DisplayName", "ServerError = 500" },
		{ "ServerError.Name", "EVaRestHttpStatusCode::ServerError" },
		{ "ServerError.ToolTip", "the server encountered an unexpected condition that prevented it from fulfilling the request." },
		{ "ServiceUnavail.Comment", "// the service is temporarily overloaded.\n" },
		{ "ServiceUnavail.DisplayName", "ServiceUnavail = 503" },
		{ "ServiceUnavail.Name", "EVaRestHttpStatusCode::ServiceUnavail" },
		{ "ServiceUnavail.ToolTip", "the service is temporarily overloaded." },
		{ "SwitchProtocol.Comment", "// the server has switched protocols in an upgrade header.\n" },
		{ "SwitchProtocol.DisplayName", "SwitchProtocol = 101" },
		{ "SwitchProtocol.Name", "EVaRestHttpStatusCode::SwitchProtocol" },
		{ "SwitchProtocol.ToolTip", "the server has switched protocols in an upgrade header." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Response codes that can come back from an Http request" },
#endif
		{ "TooManyRequests.Comment", "// too many requests, the server is throttling\n" },
		{ "TooManyRequests.DisplayName", "TooManyRequests = 429" },
		{ "TooManyRequests.Name", "EVaRestHttpStatusCode::TooManyRequests" },
		{ "TooManyRequests.ToolTip", "too many requests, the server is throttling" },
		{ "Unknown.Comment", "// status code not set yet\n" },
		{ "Unknown.DisplayName", "Unknown = 0" },
		{ "Unknown.Name", "EVaRestHttpStatusCode::Unknown" },
		{ "Unknown.ToolTip", "status code not set yet" },
		{ "UnsupportedMedia.Comment", "// the server is refusing to service the request because the entity of the request is in a format not supported by the requested resource for the requested method.\n" },
		{ "UnsupportedMedia.DisplayName", "UnsupportedMedia = 415" },
		{ "UnsupportedMedia.Name", "EVaRestHttpStatusCode::UnsupportedMedia" },
		{ "UnsupportedMedia.ToolTip", "the server is refusing to service the request because the entity of the request is in a format not supported by the requested resource for the requested method." },
		{ "UriTooLong.Comment", "// the server is refusing to service the request because the request uri (uniform resource identifier) is longer than the server is willing to interpret.\n" },
		{ "UriTooLong.DisplayName", "UriTooLong = 414" },
		{ "UriTooLong.Name", "EVaRestHttpStatusCode::UriTooLong" },
		{ "UriTooLong.ToolTip", "the server is refusing to service the request because the request uri (uniform resource identifier) is longer than the server is willing to interpret." },
		{ "UseProxy.Comment", "// the requested resource must be accessed through the proxy given by the location field.\n" },
		{ "UseProxy.DisplayName", "UseProxy = 305" },
		{ "UseProxy.Name", "EVaRestHttpStatusCode::UseProxy" },
		{ "UseProxy.ToolTip", "the requested resource must be accessed through the proxy given by the location field." },
		{ "VersionNotSup.Comment", "// the server does not support, or refuses to support, the http protocol version that was used in the request message.\n" },
		{ "VersionNotSup.DisplayName", "VersionNotSup = 505" },
		{ "VersionNotSup.Name", "EVaRestHttpStatusCode::VersionNotSup" },
		{ "VersionNotSup.ToolTip", "the server does not support, or refuses to support, the http protocol version that was used in the request message." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVaRestHttpStatusCode::Unknown", (int64)EVaRestHttpStatusCode::Unknown },
		{ "EVaRestHttpStatusCode::Continue", (int64)EVaRestHttpStatusCode::Continue },
		{ "EVaRestHttpStatusCode::SwitchProtocol", (int64)EVaRestHttpStatusCode::SwitchProtocol },
		{ "EVaRestHttpStatusCode::Ok", (int64)EVaRestHttpStatusCode::Ok },
		{ "EVaRestHttpStatusCode::Created", (int64)EVaRestHttpStatusCode::Created },
		{ "EVaRestHttpStatusCode::Accepted", (int64)EVaRestHttpStatusCode::Accepted },
		{ "EVaRestHttpStatusCode::Partial", (int64)EVaRestHttpStatusCode::Partial },
		{ "EVaRestHttpStatusCode::NoContent", (int64)EVaRestHttpStatusCode::NoContent },
		{ "EVaRestHttpStatusCode::ResetContent", (int64)EVaRestHttpStatusCode::ResetContent },
		{ "EVaRestHttpStatusCode::PartialContent", (int64)EVaRestHttpStatusCode::PartialContent },
		{ "EVaRestHttpStatusCode::Ambiguous", (int64)EVaRestHttpStatusCode::Ambiguous },
		{ "EVaRestHttpStatusCode::Moved", (int64)EVaRestHttpStatusCode::Moved },
		{ "EVaRestHttpStatusCode::Redirect", (int64)EVaRestHttpStatusCode::Redirect },
		{ "EVaRestHttpStatusCode::RedirectMethod", (int64)EVaRestHttpStatusCode::RedirectMethod },
		{ "EVaRestHttpStatusCode::NotModified", (int64)EVaRestHttpStatusCode::NotModified },
		{ "EVaRestHttpStatusCode::UseProxy", (int64)EVaRestHttpStatusCode::UseProxy },
		{ "EVaRestHttpStatusCode::RedirectKeepVerb", (int64)EVaRestHttpStatusCode::RedirectKeepVerb },
		{ "EVaRestHttpStatusCode::BadRequest", (int64)EVaRestHttpStatusCode::BadRequest },
		{ "EVaRestHttpStatusCode::Denied", (int64)EVaRestHttpStatusCode::Denied },
		{ "EVaRestHttpStatusCode::PaymentReq", (int64)EVaRestHttpStatusCode::PaymentReq },
		{ "EVaRestHttpStatusCode::Forbidden", (int64)EVaRestHttpStatusCode::Forbidden },
		{ "EVaRestHttpStatusCode::NotFound", (int64)EVaRestHttpStatusCode::NotFound },
		{ "EVaRestHttpStatusCode::BadMethod", (int64)EVaRestHttpStatusCode::BadMethod },
		{ "EVaRestHttpStatusCode::NoneAcceptable", (int64)EVaRestHttpStatusCode::NoneAcceptable },
		{ "EVaRestHttpStatusCode::ProxyAuthReq", (int64)EVaRestHttpStatusCode::ProxyAuthReq },
		{ "EVaRestHttpStatusCode::RequestTimeout", (int64)EVaRestHttpStatusCode::RequestTimeout },
		{ "EVaRestHttpStatusCode::Conflict", (int64)EVaRestHttpStatusCode::Conflict },
		{ "EVaRestHttpStatusCode::Gone", (int64)EVaRestHttpStatusCode::Gone },
		{ "EVaRestHttpStatusCode::LengthRequired", (int64)EVaRestHttpStatusCode::LengthRequired },
		{ "EVaRestHttpStatusCode::PrecondFailed", (int64)EVaRestHttpStatusCode::PrecondFailed },
		{ "EVaRestHttpStatusCode::RequestTooLarge", (int64)EVaRestHttpStatusCode::RequestTooLarge },
		{ "EVaRestHttpStatusCode::UriTooLong", (int64)EVaRestHttpStatusCode::UriTooLong },
		{ "EVaRestHttpStatusCode::UnsupportedMedia", (int64)EVaRestHttpStatusCode::UnsupportedMedia },
		{ "EVaRestHttpStatusCode::TooManyRequests", (int64)EVaRestHttpStatusCode::TooManyRequests },
		{ "EVaRestHttpStatusCode::RetryWith", (int64)EVaRestHttpStatusCode::RetryWith },
		{ "EVaRestHttpStatusCode::ServerError", (int64)EVaRestHttpStatusCode::ServerError },
		{ "EVaRestHttpStatusCode::NotSupported", (int64)EVaRestHttpStatusCode::NotSupported },
		{ "EVaRestHttpStatusCode::BadGateway", (int64)EVaRestHttpStatusCode::BadGateway },
		{ "EVaRestHttpStatusCode::ServiceUnavail", (int64)EVaRestHttpStatusCode::ServiceUnavail },
		{ "EVaRestHttpStatusCode::GatewayTimeout", (int64)EVaRestHttpStatusCode::GatewayTimeout },
		{ "EVaRestHttpStatusCode::VersionNotSup", (int64)EVaRestHttpStatusCode::VersionNotSup },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_VaRest_EVaRestHttpStatusCode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VaRest_EVaRestHttpStatusCode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VaRest,
	nullptr,
	"EVaRestHttpStatusCode",
	"EVaRestHttpStatusCode::Type",
	Z_Construct_UEnum_VaRest_EVaRestHttpStatusCode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VaRest_EVaRestHttpStatusCode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VaRest_EVaRestHttpStatusCode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VaRest_EVaRestHttpStatusCode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VaRest_EVaRestHttpStatusCode()
{
	if (!Z_Registration_Info_UEnum_EVaRestHttpStatusCode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVaRestHttpStatusCode.InnerSingleton, Z_Construct_UEnum_VaRest_EVaRestHttpStatusCode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVaRestHttpStatusCode.InnerSingleton;
}
// ********** End Enum EVaRestHttpStatusCode *******************************************************

// ********** Begin ScriptStruct FVaRestURL ********************************************************
struct Z_Construct_UScriptStruct_FVaRestURL_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FVaRestURL); }
	static inline consteval int16 GetStructAlignment() { return alignof(FVaRestURL); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FURL structure wrapper for BP access\n */" },
#endif
		{ "ModuleRelativePath", "Public/VaRestTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FURL structure wrapper for BP access" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[] = {
		{ "Category", "URL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Protocol, i.e. \"unreal\" or \"http\" */" },
#endif
		{ "ModuleRelativePath", "Public/VaRestTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Protocol, i.e. \"unreal\" or \"http\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[] = {
		{ "Category", "URL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional hostname, i.e. \"204.157.115.40\" or \"unreal.epicgames.com\", blank if local. */" },
#endif
		{ "ModuleRelativePath", "Public/VaRestTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional hostname, i.e. \"204.157.115.40\" or \"unreal.epicgames.com\", blank if local." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "Category", "URL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional host port */" },
#endif
		{ "ModuleRelativePath", "Public/VaRestTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional host port" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Valid_MetaData[] = {
		{ "Category", "URL" },
		{ "ModuleRelativePath", "Public/VaRestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[] = {
		{ "Category", "URL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Map name, i.e. \"SkyCity\", default is \"Entry\" */" },
#endif
		{ "ModuleRelativePath", "Public/VaRestTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map name, i.e. \"SkyCity\", default is \"Entry\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedirectURL_MetaData[] = {
		{ "Category", "URL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional place to download Map if client does not possess it */" },
#endif
		{ "ModuleRelativePath", "Public/VaRestTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional place to download Map if client does not possess it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Op_MetaData[] = {
		{ "Category", "URL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Options */" },
#endif
		{ "ModuleRelativePath", "Public/VaRestTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Options" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Portal_MetaData[] = {
		{ "Category", "URL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Portal to enter through, default is \"\" */" },
#endif
		{ "ModuleRelativePath", "Public/VaRestTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Portal to enter through, default is \"\"" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FVaRestURL constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Protocol;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Valid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Map;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RedirectURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Op_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Op;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Portal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FVaRestURL constinit property declarations **************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVaRestURL>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FVaRestURL_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVaRestURL;
class UScriptStruct* FVaRestURL::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVaRestURL.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVaRestURL.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVaRestURL, (UObject*)Z_Construct_UPackage__Script_VaRest(), TEXT("VaRestURL"));
	}
	return Z_Registration_Info_UScriptStruct_FVaRestURL.OuterSingleton;
	}

// ********** Begin ScriptStruct FVaRestURL Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVaRestURL, Protocol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Protocol_MetaData), NewProp_Protocol_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVaRestURL, Host), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Host_MetaData), NewProp_Host_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVaRestURL, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVaRestURL, Valid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Valid_MetaData), NewProp_Valid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVaRestURL, Map), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_MetaData), NewProp_Map_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_RedirectURL = { "RedirectURL", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVaRestURL, RedirectURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedirectURL_MetaData), NewProp_RedirectURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_Op_Inner = { "Op", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_Op = { "Op", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVaRestURL, Op), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Op_MetaData), NewProp_Op_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_Portal = { "Portal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVaRestURL, Portal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Portal_MetaData), NewProp_Portal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVaRestURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_Protocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_Host,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_Valid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_Map,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_RedirectURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_Op_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_Op,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRestURL_Statics::NewProp_Portal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRestURL_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FVaRestURL Property Definitions *************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVaRestURL_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
	nullptr,
	&NewStructOps,
	"VaRestURL",
	Z_Construct_UScriptStruct_FVaRestURL_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRestURL_Statics::PropPointers),
	sizeof(FVaRestURL),
	alignof(FVaRestURL),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRestURL_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVaRestURL_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVaRestURL()
{
	if (!Z_Registration_Info_UScriptStruct_FVaRestURL.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVaRestURL.InnerSingleton, Z_Construct_UScriptStruct_FVaRestURL_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FVaRestURL.InnerSingleton);
}
// ********** End ScriptStruct FVaRestURL **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestTypes_h__Script_VaRest_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVaRestRequestVerb_StaticEnum, TEXT("EVaRestRequestVerb"), &Z_Registration_Info_UEnum_EVaRestRequestVerb, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 561184087U) },
		{ EVaRestRequestContentType_StaticEnum, TEXT("EVaRestRequestContentType"), &Z_Registration_Info_UEnum_EVaRestRequestContentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3093726056U) },
		{ EVaRestRequestStatus_StaticEnum, TEXT("EVaRestRequestStatus"), &Z_Registration_Info_UEnum_EVaRestRequestStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4075920489U) },
		{ EVaRestHttpStatusCode_StaticEnum, TEXT("EVaRestHttpStatusCode"), &Z_Registration_Info_UEnum_EVaRestHttpStatusCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 361029757U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVaRestURL::StaticStruct, Z_Construct_UScriptStruct_FVaRestURL_Statics::NewStructOps, TEXT("VaRestURL"),&Z_Registration_Info_UScriptStruct_FVaRestURL, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVaRestURL), 3318765552U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestTypes_h__Script_VaRest_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestTypes_h__Script_VaRest_142548329{
	TEXT("/Script/VaRest"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestTypes_h__Script_VaRest_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestTypes_h__Script_VaRest_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestTypes_h__Script_VaRest_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VaRestRe6959ebc28060V9_Source_VaRest_Public_VaRestTypes_h__Script_VaRest_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
