// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamGameServer/SteamGameServerTypes.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamGameServerTypes() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamDenyReason();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAssociateWithClanResult();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGSClientApprove();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGSClientDeny();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGSClientGroupStatus();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGSPolicyResponse();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FValidateAuthTicketResponse();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FGSPolicyResponse *************************************************
struct Z_Construct_UScriptStruct_FGSPolicyResponse_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FGSPolicyResponse); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGSPolicyResponse); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSecure_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGSPolicyResponse constinit property declarations *****************
	static void NewProp_bSecure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FGSPolicyResponse constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSPolicyResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FGSPolicyResponse_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGSPolicyResponse;
class UScriptStruct* FGSPolicyResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGSPolicyResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGSPolicyResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSPolicyResponse, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GSPolicyResponse"));
	}
	return Z_Registration_Info_UScriptStruct_FGSPolicyResponse.OuterSingleton;
	}

// ********** Begin ScriptStruct FGSPolicyResponse Property Definitions ****************************
void Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure_SetBit(void* Obj)
{
	((FGSPolicyResponse*)Obj)->bSecure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure = { "bSecure", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGSPolicyResponse), &Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSecure_MetaData), NewProp_bSecure_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FGSPolicyResponse Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"GSPolicyResponse",
	Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::PropPointers),
	sizeof(FGSPolicyResponse),
	alignof(FGSPolicyResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSPolicyResponse()
{
	if (!Z_Registration_Info_UScriptStruct_FGSPolicyResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGSPolicyResponse.InnerSingleton, Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGSPolicyResponse.InnerSingleton);
}
// ********** End ScriptStruct FGSPolicyResponse ***************************************************

// ********** Begin ScriptStruct FGSClientGroupStatus **********************************************
struct Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FGSClientGroupStatus); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGSClientGroupStatus); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDGroup_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMember_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOfficer_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGSClientGroupStatus constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGroup;
	static void NewProp_bMember_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMember;
	static void NewProp_bOfficer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOfficer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FGSClientGroupStatus constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSClientGroupStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGSClientGroupStatus;
class UScriptStruct* FGSClientGroupStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGSClientGroupStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGSClientGroupStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSClientGroupStatus, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GSClientGroupStatus"));
	}
	return Z_Registration_Info_UScriptStruct_FGSClientGroupStatus.OuterSingleton;
	}

// ********** Begin ScriptStruct FGSClientGroupStatus Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSClientGroupStatus, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDUser_MetaData), NewProp_SteamIDUser_MetaData) }; // 3382971600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDGroup = { "SteamIDGroup", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSClientGroupStatus, SteamIDGroup), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDGroup_MetaData), NewProp_SteamIDGroup_MetaData) }; // 3382971600
void Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember_SetBit(void* Obj)
{
	((FGSClientGroupStatus*)Obj)->bMember = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember = { "bMember", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGSClientGroupStatus), &Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMember_MetaData), NewProp_bMember_MetaData) };
void Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer_SetBit(void* Obj)
{
	((FGSClientGroupStatus*)Obj)->bOfficer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer = { "bOfficer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGSClientGroupStatus), &Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOfficer_MetaData), NewProp_bOfficer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FGSClientGroupStatus Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"GSClientGroupStatus",
	Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::PropPointers),
	sizeof(FGSClientGroupStatus),
	alignof(FGSClientGroupStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSClientGroupStatus()
{
	if (!Z_Registration_Info_UScriptStruct_FGSClientGroupStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGSClientGroupStatus.InnerSingleton, Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGSClientGroupStatus.InnerSingleton);
}
// ********** End ScriptStruct FGSClientGroupStatus ************************************************

// ********** Begin ScriptStruct FAssociateWithClanResult ******************************************
struct Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAssociateWithClanResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAssociateWithClanResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAssociateWithClanResult constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAssociateWithClanResult constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssociateWithClanResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAssociateWithClanResult;
class UScriptStruct* FAssociateWithClanResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAssociateWithClanResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAssociateWithClanResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssociateWithClanResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("AssociateWithClanResult"));
	}
	return Z_Registration_Info_UScriptStruct_FAssociateWithClanResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FAssociateWithClanResult Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssociateWithClanResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAssociateWithClanResult Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"AssociateWithClanResult",
	Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::PropPointers),
	sizeof(FAssociateWithClanResult),
	alignof(FAssociateWithClanResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssociateWithClanResult()
{
	if (!Z_Registration_Info_UScriptStruct_FAssociateWithClanResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAssociateWithClanResult.InnerSingleton, Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAssociateWithClanResult.InnerSingleton);
}
// ********** End ScriptStruct FAssociateWithClanResult ********************************************

// ********** Begin ScriptStruct FComputeNewPlayerCompatibilityResult ******************************
struct Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FComputeNewPlayerCompatibilityResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FComputeNewPlayerCompatibilityResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayersThatDontLikeCandidate_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayersThatCandidateDoesntLike_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClanPlayersThatDontLikeCandidate_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDCandidate_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FComputeNewPlayerCompatibilityResult constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersThatDontLikeCandidate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersThatCandidateDoesntLike;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClanPlayersThatDontLikeCandidate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDCandidate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FComputeNewPlayerCompatibilityResult constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeNewPlayerCompatibilityResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FComputeNewPlayerCompatibilityResult;
class UScriptStruct* FComputeNewPlayerCompatibilityResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FComputeNewPlayerCompatibilityResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FComputeNewPlayerCompatibilityResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ComputeNewPlayerCompatibilityResult"));
	}
	return Z_Registration_Info_UScriptStruct_FComputeNewPlayerCompatibilityResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FComputeNewPlayerCompatibilityResult Property Definitions *********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1466539257
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatDontLikeCandidate = { "PlayersThatDontLikeCandidate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, PlayersThatDontLikeCandidate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayersThatDontLikeCandidate_MetaData), NewProp_PlayersThatDontLikeCandidate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatCandidateDoesntLike = { "PlayersThatCandidateDoesntLike", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, PlayersThatCandidateDoesntLike), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayersThatCandidateDoesntLike_MetaData), NewProp_PlayersThatCandidateDoesntLike_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_ClanPlayersThatDontLikeCandidate = { "ClanPlayersThatDontLikeCandidate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, ClanPlayersThatDontLikeCandidate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClanPlayersThatDontLikeCandidate_MetaData), NewProp_ClanPlayersThatDontLikeCandidate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_SteamIDCandidate = { "SteamIDCandidate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, SteamIDCandidate), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDCandidate_MetaData), NewProp_SteamIDCandidate_MetaData) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatDontLikeCandidate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatCandidateDoesntLike,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_ClanPlayersThatDontLikeCandidate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_SteamIDCandidate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FComputeNewPlayerCompatibilityResult Property Definitions ***********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"ComputeNewPlayerCompatibilityResult",
	Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::PropPointers),
	sizeof(FComputeNewPlayerCompatibilityResult),
	alignof(FComputeNewPlayerCompatibilityResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult()
{
	if (!Z_Registration_Info_UScriptStruct_FComputeNewPlayerCompatibilityResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FComputeNewPlayerCompatibilityResult.InnerSingleton, Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FComputeNewPlayerCompatibilityResult.InnerSingleton);
}
// ********** End ScriptStruct FComputeNewPlayerCompatibilityResult ********************************

// ********** Begin ScriptStruct FGSClientApprove **************************************************
struct Z_Construct_UScriptStruct_FGSClientApprove_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FGSClientApprove); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGSClientApprove); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerSteamID_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGSClientApprove constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerSteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FGSClientApprove constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSClientApprove>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FGSClientApprove_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGSClientApprove;
class UScriptStruct* FGSClientApprove::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGSClientApprove.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGSClientApprove.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSClientApprove, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GSClientApprove"));
	}
	return Z_Registration_Info_UScriptStruct_FGSClientApprove.OuterSingleton;
	}

// ********** Begin ScriptStruct FGSClientApprove Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSClientApprove, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) }; // 3382971600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_OwnerSteamID = { "OwnerSteamID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSClientApprove, OwnerSteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerSteamID_MetaData), NewProp_OwnerSteamID_MetaData) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSClientApprove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_OwnerSteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientApprove_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FGSClientApprove Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSClientApprove_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"GSClientApprove",
	Z_Construct_UScriptStruct_FGSClientApprove_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientApprove_Statics::PropPointers),
	sizeof(FGSClientApprove),
	alignof(FGSClientApprove),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientApprove_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSClientApprove_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSClientApprove()
{
	if (!Z_Registration_Info_UScriptStruct_FGSClientApprove.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGSClientApprove.InnerSingleton, Z_Construct_UScriptStruct_FGSClientApprove_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGSClientApprove.InnerSingleton);
}
// ********** End ScriptStruct FGSClientApprove ****************************************************

// ********** Begin ScriptStruct FGSClientDeny *****************************************************
struct Z_Construct_UScriptStruct_FGSClientDeny_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FGSClientDeny); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGSClientDeny); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DenyReason_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalText_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGSClientDeny constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DenyReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DenyReason;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OptionalText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FGSClientDeny constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSClientDeny>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FGSClientDeny_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGSClientDeny;
class UScriptStruct* FGSClientDeny::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGSClientDeny.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGSClientDeny.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSClientDeny, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GSClientDeny"));
	}
	return Z_Registration_Info_UScriptStruct_FGSClientDeny.OuterSingleton;
	}

// ********** Begin ScriptStruct FGSClientDeny Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSClientDeny, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) }; // 3382971600
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason = { "DenyReason", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSClientDeny, DenyReason), Z_Construct_UEnum_SteamCore_ESteamDenyReason, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DenyReason_MetaData), NewProp_DenyReason_MetaData) }; // 3898653394
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_OptionalText = { "OptionalText", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSClientDeny, OptionalText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalText_MetaData), NewProp_OptionalText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSClientDeny_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_OptionalText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FGSClientDeny Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	nullptr,
	&NewStructOps,
	"GSClientDeny",
	Z_Construct_UScriptStruct_FGSClientDeny_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::PropPointers),
	sizeof(FGSClientDeny),
	alignof(FGSClientDeny),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSClientDeny_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGSClientDeny()
{
	if (!Z_Registration_Info_UScriptStruct_FGSClientDeny.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGSClientDeny.InnerSingleton, Z_Construct_UScriptStruct_FGSClientDeny_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGSClientDeny.InnerSingleton);
}
// ********** End ScriptStruct FGSClientDeny *******************************************************

// ********** Begin Delegate FOnAssociateWithClan **************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnAssociateWithClan_Parms
	{
		FAssociateWithClanResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAssociateWithClan constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnAssociateWithClan constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnAssociateWithClan Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnAssociateWithClan_Parms, Data), Z_Construct_UScriptStruct_FAssociateWithClanResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1027411979
void Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnAssociateWithClan_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnAssociateWithClan_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnAssociateWithClan Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnAssociateWithClan__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::_Script_SteamCore_eventOnAssociateWithClan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::_Script_SteamCore_eventOnAssociateWithClan_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAssociateWithClan_DelegateWrapper(const FScriptDelegate& OnAssociateWithClan, FAssociateWithClanResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnAssociateWithClan_Parms
	{
		FAssociateWithClanResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnAssociateWithClan_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnAssociateWithClan.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAssociateWithClan ****************************************************

// ********** Begin Delegate FOnComputeNewPlayerCompatibility **************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms
	{
		FComputeNewPlayerCompatibilityResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnComputeNewPlayerCompatibility constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnComputeNewPlayerCompatibility constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnComputeNewPlayerCompatibility Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms, Data), Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 124327583
void Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnComputeNewPlayerCompatibility Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnComputeNewPlayerCompatibility__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::_Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::_Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnComputeNewPlayerCompatibility_DelegateWrapper(const FScriptDelegate& OnComputeNewPlayerCompatibility, FComputeNewPlayerCompatibilityResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms
	{
		FComputeNewPlayerCompatibilityResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnComputeNewPlayerCompatibility.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnComputeNewPlayerCompatibility ****************************************

// ********** Begin Delegate FOnGSPolicyResponse ***************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnGSPolicyResponse_Parms
	{
		FGSPolicyResponse Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGSPolicyResponse constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGSPolicyResponse constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGSPolicyResponse Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGSPolicyResponse_Parms, Data), Z_Construct_UScriptStruct_FGSPolicyResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2750318485
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGSPolicyResponse Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGSPolicyResponse__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::_Script_SteamCore_eventOnGSPolicyResponse_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::_Script_SteamCore_eventOnGSPolicyResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGSPolicyResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGSPolicyResponse, FGSPolicyResponse const& Data)
{
	struct _Script_SteamCore_eventOnGSPolicyResponse_Parms
	{
		FGSPolicyResponse Data;
	};
	_Script_SteamCore_eventOnGSPolicyResponse_Parms Parms;
	Parms.Data=Data;
	OnGSPolicyResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGSPolicyResponse *****************************************************

// ********** Begin Delegate FOnGSClientGroupStatus ************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnGSClientGroupStatus_Parms
	{
		FGSClientGroupStatus Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGSClientGroupStatus constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGSClientGroupStatus constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGSClientGroupStatus Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGSClientGroupStatus_Parms, Data), Z_Construct_UScriptStruct_FGSClientGroupStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 897677749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGSClientGroupStatus Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGSClientGroupStatus__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::_Script_SteamCore_eventOnGSClientGroupStatus_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::_Script_SteamCore_eventOnGSClientGroupStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGSClientGroupStatus_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientGroupStatus, FGSClientGroupStatus const& Data)
{
	struct _Script_SteamCore_eventOnGSClientGroupStatus_Parms
	{
		FGSClientGroupStatus Data;
	};
	_Script_SteamCore_eventOnGSClientGroupStatus_Parms Parms;
	Parms.Data=Data;
	OnGSClientGroupStatus.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGSClientGroupStatus **************************************************

// ********** Begin Delegate FOnGSValidateAuthTicketResponse ***************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnGSValidateAuthTicketResponse_Parms
	{
		FValidateAuthTicketResponse Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGSValidateAuthTicketResponse constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGSValidateAuthTicketResponse constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGSValidateAuthTicketResponse Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGSValidateAuthTicketResponse_Parms, Data), Z_Construct_UScriptStruct_FValidateAuthTicketResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1516683318
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGSValidateAuthTicketResponse Property Definitions ********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGSValidateAuthTicketResponse__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::_Script_SteamCore_eventOnGSValidateAuthTicketResponse_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::_Script_SteamCore_eventOnGSValidateAuthTicketResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGSValidateAuthTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGSValidateAuthTicketResponse, FValidateAuthTicketResponse const& Data)
{
	struct _Script_SteamCore_eventOnGSValidateAuthTicketResponse_Parms
	{
		FValidateAuthTicketResponse Data;
	};
	_Script_SteamCore_eventOnGSValidateAuthTicketResponse_Parms Parms;
	Parms.Data=Data;
	OnGSValidateAuthTicketResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGSValidateAuthTicketResponse *****************************************

// ********** Begin Delegate FOnGSClientApprove ****************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnGSClientApprove_Parms
	{
		FGSClientApprove Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGSClientApprove constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGSClientApprove constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGSClientApprove Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGSClientApprove_Parms, Data), Z_Construct_UScriptStruct_FGSClientApprove, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2405571947
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGSClientApprove Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGSClientApprove__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::_Script_SteamCore_eventOnGSClientApprove_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::_Script_SteamCore_eventOnGSClientApprove_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGSClientApprove_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientApprove, FGSClientApprove const& Data)
{
	struct _Script_SteamCore_eventOnGSClientApprove_Parms
	{
		FGSClientApprove Data;
	};
	_Script_SteamCore_eventOnGSClientApprove_Parms Parms;
	Parms.Data=Data;
	OnGSClientApprove.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGSClientApprove ******************************************************

// ********** Begin Delegate FOnGSClientDeny *******************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnGSClientDeny_Parms
	{
		FGSClientDeny Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGSClientDeny constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGSClientDeny constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGSClientDeny Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGSClientDeny_Parms, Data), Z_Construct_UScriptStruct_FGSClientDeny, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1710812860
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGSClientDeny Property Definitions ************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGSClientDeny__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::_Script_SteamCore_eventOnGSClientDeny_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::_Script_SteamCore_eventOnGSClientDeny_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGSClientDeny_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientDeny, FGSClientDeny const& Data)
{
	struct _Script_SteamCore_eventOnGSClientDeny_Parms
	{
		FGSClientDeny Data;
	};
	_Script_SteamCore_eventOnGSClientDeny_Parms Parms;
	Parms.Data=Data;
	OnGSClientDeny.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGSClientDeny *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h__Script_SteamCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGSPolicyResponse::StaticStruct, Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewStructOps, TEXT("GSPolicyResponse"),&Z_Registration_Info_UScriptStruct_FGSPolicyResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSPolicyResponse), 2750318485U) },
		{ FGSClientGroupStatus::StaticStruct, Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewStructOps, TEXT("GSClientGroupStatus"),&Z_Registration_Info_UScriptStruct_FGSClientGroupStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSClientGroupStatus), 897677749U) },
		{ FAssociateWithClanResult::StaticStruct, Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewStructOps, TEXT("AssociateWithClanResult"),&Z_Registration_Info_UScriptStruct_FAssociateWithClanResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssociateWithClanResult), 1027411979U) },
		{ FComputeNewPlayerCompatibilityResult::StaticStruct, Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewStructOps, TEXT("ComputeNewPlayerCompatibilityResult"),&Z_Registration_Info_UScriptStruct_FComputeNewPlayerCompatibilityResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeNewPlayerCompatibilityResult), 124327583U) },
		{ FGSClientApprove::StaticStruct, Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewStructOps, TEXT("GSClientApprove"),&Z_Registration_Info_UScriptStruct_FGSClientApprove, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSClientApprove), 2405571947U) },
		{ FGSClientDeny::StaticStruct, Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewStructOps, TEXT("GSClientDeny"),&Z_Registration_Info_UScriptStruct_FGSClientDeny, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSClientDeny), 1710812860U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h__Script_SteamCore_3444136956{
	TEXT("/Script/SteamCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h__Script_SteamCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h__Script_SteamCore_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
