// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VaRestTypes.h"

#ifdef VAREST_VaRestTypes_generated_h
#error "VaRestTypes.generated.h already included, missing '#pragma once' in VaRestTypes.h"
#endif
#define VAREST_VaRestTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVaRestURL ********************************************************
struct Z_Construct_UScriptStruct_FVaRestURL_Statics;
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestTypes_h_149_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVaRestURL_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVaRestURL;
// ********** End ScriptStruct FVaRestURL **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestTypes_h

// ********** Begin Enum EVaRestRequestVerb ********************************************************
#define FOREACH_ENUM_EVARESTREQUESTVERB(op) \
	op(EVaRestRequestVerb::GET) \
	op(EVaRestRequestVerb::POST) \
	op(EVaRestRequestVerb::PUT) \
	op(EVaRestRequestVerb::DEL) \
	op(EVaRestRequestVerb::CUSTOM) 

enum class EVaRestRequestVerb : uint8;
template<> struct TIsUEnumClass<EVaRestRequestVerb> { enum { Value = true }; };
template<> VAREST_NON_ATTRIBUTED_API UEnum* StaticEnum<EVaRestRequestVerb>();
// ********** End Enum EVaRestRequestVerb **********************************************************

// ********** Begin Enum EVaRestRequestContentType *************************************************
#define FOREACH_ENUM_EVARESTREQUESTCONTENTTYPE(op) \
	op(EVaRestRequestContentType::x_www_form_urlencoded_url) \
	op(EVaRestRequestContentType::x_www_form_urlencoded_body) \
	op(EVaRestRequestContentType::json) \
	op(EVaRestRequestContentType::binary) 

enum class EVaRestRequestContentType : uint8;
template<> struct TIsUEnumClass<EVaRestRequestContentType> { enum { Value = true }; };
template<> VAREST_NON_ATTRIBUTED_API UEnum* StaticEnum<EVaRestRequestContentType>();
// ********** End Enum EVaRestRequestContentType ***************************************************

// ********** Begin Enum EVaRestRequestStatus ******************************************************
#define FOREACH_ENUM_EVARESTREQUESTSTATUS(op) \
	op(EVaRestRequestStatus::NotStarted) \
	op(EVaRestRequestStatus::Processing) \
	op(EVaRestRequestStatus::Failed) \
	op(EVaRestRequestStatus::Failed_ConnectionError) \
	op(EVaRestRequestStatus::Succeeded) 

enum class EVaRestRequestStatus : uint8;
template<> struct TIsUEnumClass<EVaRestRequestStatus> { enum { Value = true }; };
template<> VAREST_NON_ATTRIBUTED_API UEnum* StaticEnum<EVaRestRequestStatus>();
// ********** End Enum EVaRestRequestStatus ********************************************************

// ********** Begin Enum EVaRestHttpStatusCode *****************************************************
#define FOREACH_ENUM_EVARESTHTTPSTATUSCODE(op) \
	op(EVaRestHttpStatusCode::Unknown) \
	op(EVaRestHttpStatusCode::Continue) \
	op(EVaRestHttpStatusCode::SwitchProtocol) \
	op(EVaRestHttpStatusCode::Ok) \
	op(EVaRestHttpStatusCode::Created) \
	op(EVaRestHttpStatusCode::Accepted) \
	op(EVaRestHttpStatusCode::Partial) \
	op(EVaRestHttpStatusCode::NoContent) \
	op(EVaRestHttpStatusCode::ResetContent) \
	op(EVaRestHttpStatusCode::PartialContent) \
	op(EVaRestHttpStatusCode::Ambiguous) \
	op(EVaRestHttpStatusCode::Moved) \
	op(EVaRestHttpStatusCode::Redirect) \
	op(EVaRestHttpStatusCode::RedirectMethod) \
	op(EVaRestHttpStatusCode::NotModified) \
	op(EVaRestHttpStatusCode::UseProxy) \
	op(EVaRestHttpStatusCode::RedirectKeepVerb) \
	op(EVaRestHttpStatusCode::BadRequest) \
	op(EVaRestHttpStatusCode::Denied) \
	op(EVaRestHttpStatusCode::PaymentReq) \
	op(EVaRestHttpStatusCode::Forbidden) \
	op(EVaRestHttpStatusCode::NotFound) \
	op(EVaRestHttpStatusCode::BadMethod) \
	op(EVaRestHttpStatusCode::NoneAcceptable) \
	op(EVaRestHttpStatusCode::ProxyAuthReq) \
	op(EVaRestHttpStatusCode::RequestTimeout) \
	op(EVaRestHttpStatusCode::Conflict) \
	op(EVaRestHttpStatusCode::Gone) \
	op(EVaRestHttpStatusCode::LengthRequired) \
	op(EVaRestHttpStatusCode::PrecondFailed) \
	op(EVaRestHttpStatusCode::RequestTooLarge) \
	op(EVaRestHttpStatusCode::UriTooLong) \
	op(EVaRestHttpStatusCode::UnsupportedMedia) \
	op(EVaRestHttpStatusCode::TooManyRequests) \
	op(EVaRestHttpStatusCode::RetryWith) \
	op(EVaRestHttpStatusCode::ServerError) \
	op(EVaRestHttpStatusCode::NotSupported) \
	op(EVaRestHttpStatusCode::BadGateway) \
	op(EVaRestHttpStatusCode::ServiceUnavail) \
	op(EVaRestHttpStatusCode::GatewayTimeout) \
	op(EVaRestHttpStatusCode::VersionNotSup) 
// ********** End Enum EVaRestHttpStatusCode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
