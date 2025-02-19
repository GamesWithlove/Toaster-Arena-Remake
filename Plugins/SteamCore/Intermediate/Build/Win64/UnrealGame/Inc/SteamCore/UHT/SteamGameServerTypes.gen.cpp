// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamGameServer/SteamGameServerTypes.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamGameServerTypes() {}
// Cross Module References
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
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSPolicyResponse;
class UScriptStruct* FGSPolicyResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSPolicyResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSPolicyResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSPolicyResponse, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GSPolicyResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GSPolicyResponse.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGSPolicyResponse>()
{
	return FGSPolicyResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSPolicyResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSecure_MetaData[];
#endif
		static void NewProp_bSecure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSPolicyResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure_SetBit(void* Obj)
	{
		((FGSPolicyResponse*)Obj)->bSecure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure = { "bSecure", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGSPolicyResponse), &Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GSPolicyResponse",
		sizeof(FGSPolicyResponse),
		alignof(FGSPolicyResponse),
		Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSPolicyResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GSPolicyResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSPolicyResponse.InnerSingleton, Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSPolicyResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSClientGroupStatus;
class UScriptStruct* FGSClientGroupStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSClientGroupStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSClientGroupStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSClientGroupStatus, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GSClientGroupStatus"));
	}
	return Z_Registration_Info_UScriptStruct_GSClientGroupStatus.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGSClientGroupStatus>()
{
	return FGSClientGroupStatus::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDGroup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMember_MetaData[];
#endif
		static void NewProp_bMember_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMember;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOfficer_MetaData[];
#endif
		static void NewProp_bOfficer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOfficer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSClientGroupStatus>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGSClientGroupStatus, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDUser_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDGroup_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDGroup = { "SteamIDGroup", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGSClientGroupStatus, SteamIDGroup), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDGroup_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember_SetBit(void* Obj)
	{
		((FGSClientGroupStatus*)Obj)->bMember = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember = { "bMember", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGSClientGroupStatus), &Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer_SetBit(void* Obj)
	{
		((FGSClientGroupStatus*)Obj)->bOfficer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer = { "bOfficer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGSClientGroupStatus), &Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GSClientGroupStatus",
		sizeof(FGSClientGroupStatus),
		alignof(FGSClientGroupStatus),
		Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSClientGroupStatus()
	{
		if (!Z_Registration_Info_UScriptStruct_GSClientGroupStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSClientGroupStatus.InnerSingleton, Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSClientGroupStatus.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssociateWithClanResult;
class UScriptStruct* FAssociateWithClanResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssociateWithClanResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssociateWithClanResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssociateWithClanResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("AssociateWithClanResult"));
	}
	return Z_Registration_Info_UScriptStruct_AssociateWithClanResult.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FAssociateWithClanResult>()
{
	return FAssociateWithClanResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssociateWithClanResult>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssociateWithClanResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result_MetaData)) }; // 2739532951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"AssociateWithClanResult",
		sizeof(FAssociateWithClanResult),
		alignof(FAssociateWithClanResult),
		Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssociateWithClanResult()
	{
		if (!Z_Registration_Info_UScriptStruct_AssociateWithClanResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssociateWithClanResult.InnerSingleton, Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssociateWithClanResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComputeNewPlayerCompatibilityResult;
class UScriptStruct* FComputeNewPlayerCompatibilityResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeNewPlayerCompatibilityResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComputeNewPlayerCompatibilityResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ComputeNewPlayerCompatibilityResult"));
	}
	return Z_Registration_Info_UScriptStruct_ComputeNewPlayerCompatibilityResult.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FComputeNewPlayerCompatibilityResult>()
{
	return FComputeNewPlayerCompatibilityResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayersThatDontLikeCandidate_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayersThatDontLikeCandidate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayersThatCandidateDoesntLike_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayersThatCandidateDoesntLike;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClanPlayersThatDontLikeCandidate_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ClanPlayersThatDontLikeCandidate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDCandidate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDCandidate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeNewPlayerCompatibilityResult>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatDontLikeCandidate_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatDontLikeCandidate = { "PlayersThatDontLikeCandidate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, PlayersThatDontLikeCandidate), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatDontLikeCandidate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatDontLikeCandidate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatCandidateDoesntLike_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatCandidateDoesntLike = { "PlayersThatCandidateDoesntLike", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, PlayersThatCandidateDoesntLike), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatCandidateDoesntLike_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatCandidateDoesntLike_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_ClanPlayersThatDontLikeCandidate_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_ClanPlayersThatDontLikeCandidate = { "ClanPlayersThatDontLikeCandidate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, ClanPlayersThatDontLikeCandidate), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_ClanPlayersThatDontLikeCandidate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_ClanPlayersThatDontLikeCandidate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_SteamIDCandidate_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_SteamIDCandidate = { "SteamIDCandidate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, SteamIDCandidate), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_SteamIDCandidate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_SteamIDCandidate_MetaData)) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatDontLikeCandidate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatCandidateDoesntLike,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_ClanPlayersThatDontLikeCandidate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_SteamIDCandidate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"ComputeNewPlayerCompatibilityResult",
		sizeof(FComputeNewPlayerCompatibilityResult),
		alignof(FComputeNewPlayerCompatibilityResult),
		Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ComputeNewPlayerCompatibilityResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComputeNewPlayerCompatibilityResult.InnerSingleton, Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComputeNewPlayerCompatibilityResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSClientApprove;
class UScriptStruct* FGSClientApprove::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSClientApprove.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSClientApprove.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSClientApprove, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GSClientApprove"));
	}
	return Z_Registration_Info_UScriptStruct_GSClientApprove.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGSClientApprove>()
{
	return FGSClientApprove::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSClientApprove_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerSteamID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerSteamID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientApprove_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSClientApprove>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_SteamID_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGSClientApprove, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_SteamID_MetaData)) }; // 1620016601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_OwnerSteamID_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_OwnerSteamID = { "OwnerSteamID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGSClientApprove, OwnerSteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_OwnerSteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_OwnerSteamID_MetaData)) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSClientApprove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_OwnerSteamID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSClientApprove_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GSClientApprove",
		sizeof(FGSClientApprove),
		alignof(FGSClientApprove),
		Z_Construct_UScriptStruct_FGSClientApprove_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientApprove_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientApprove_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientApprove_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSClientApprove()
	{
		if (!Z_Registration_Info_UScriptStruct_GSClientApprove.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSClientApprove.InnerSingleton, Z_Construct_UScriptStruct_FGSClientApprove_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSClientApprove.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSClientDeny;
class UScriptStruct* FGSClientDeny::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSClientDeny.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSClientDeny.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSClientDeny, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("GSClientDeny"));
	}
	return Z_Registration_Info_UScriptStruct_GSClientDeny.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGSClientDeny>()
{
	return FGSClientDeny::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSClientDeny_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DenyReason_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DenyReason_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DenyReason;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OptionalText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientDeny_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSClientDeny>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_SteamID_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGSClientDeny, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_SteamID_MetaData)) }; // 1620016601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason = { "DenyReason", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGSClientDeny, DenyReason), Z_Construct_UEnum_SteamCore_ESteamDenyReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason_MetaData)) }; // 2699660404
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_OptionalText_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_OptionalText = { "OptionalText", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGSClientDeny, OptionalText), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_OptionalText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_OptionalText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSClientDeny_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_SteamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_OptionalText,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GSClientDeny",
		sizeof(FGSClientDeny),
		alignof(FGSClientDeny),
		Z_Construct_UScriptStruct_FGSClientDeny_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientDeny_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSClientDeny()
	{
		if (!Z_Registration_Info_UScriptStruct_GSClientDeny.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSClientDeny.InnerSingleton, Z_Construct_UScriptStruct_FGSClientDeny_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSClientDeny.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnAssociateWithClan_Parms
		{
			FAssociateWithClanResult Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnAssociateWithClan_Parms, Data), Z_Construct_UScriptStruct_FAssociateWithClanResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 4036126614
	void Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnAssociateWithClan_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnAssociateWithClan_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnAssociateWithClan__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::_Script_SteamCore_eventOnAssociateWithClan_Parms), Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms
		{
			FComputeNewPlayerCompatibilityResult Data;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms, Data), Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3741243927
	void Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnComputeNewPlayerCompatibility__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::_Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms), Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGSPolicyResponse_Parms
		{
			FGSPolicyResponse Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnGSPolicyResponse_Parms, Data), Z_Construct_UScriptStruct_FGSPolicyResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1397527364
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGSPolicyResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::_Script_SteamCore_eventOnGSPolicyResponse_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGSClientGroupStatus_Parms
		{
			FGSClientGroupStatus Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnGSClientGroupStatus_Parms, Data), Z_Construct_UScriptStruct_FGSClientGroupStatus, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1876160584
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGSClientGroupStatus__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::_Script_SteamCore_eventOnGSClientGroupStatus_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGSValidateAuthTicketResponse_Parms
		{
			FValidateAuthTicketResponse Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnGSValidateAuthTicketResponse_Parms, Data), Z_Construct_UScriptStruct_FValidateAuthTicketResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 413646202
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGSValidateAuthTicketResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::_Script_SteamCore_eventOnGSValidateAuthTicketResponse_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGSClientApprove_Parms
		{
			FGSClientApprove Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnGSClientApprove_Parms, Data), Z_Construct_UScriptStruct_FGSClientApprove, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1713430383
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGSClientApprove__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::_Script_SteamCore_eventOnGSClientApprove_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGSClientDeny_Parms
		{
			FGSClientDeny Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnGSClientDeny_Parms, Data), Z_Construct_UScriptStruct_FGSClientDeny, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3852462068
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamGameServerTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGSClientDeny__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::_Script_SteamCore_eventOnGSClientDeny_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::FuncParams);
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
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_Statics::ScriptStructInfo[] = {
		{ FGSPolicyResponse::StaticStruct, Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewStructOps, TEXT("GSPolicyResponse"), &Z_Registration_Info_UScriptStruct_GSPolicyResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSPolicyResponse), 1397527364U) },
		{ FGSClientGroupStatus::StaticStruct, Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewStructOps, TEXT("GSClientGroupStatus"), &Z_Registration_Info_UScriptStruct_GSClientGroupStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSClientGroupStatus), 1876160584U) },
		{ FAssociateWithClanResult::StaticStruct, Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewStructOps, TEXT("AssociateWithClanResult"), &Z_Registration_Info_UScriptStruct_AssociateWithClanResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssociateWithClanResult), 4036126614U) },
		{ FComputeNewPlayerCompatibilityResult::StaticStruct, Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewStructOps, TEXT("ComputeNewPlayerCompatibilityResult"), &Z_Registration_Info_UScriptStruct_ComputeNewPlayerCompatibilityResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeNewPlayerCompatibilityResult), 3741243927U) },
		{ FGSClientApprove::StaticStruct, Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewStructOps, TEXT("GSClientApprove"), &Z_Registration_Info_UScriptStruct_GSClientApprove, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSClientApprove), 1713430383U) },
		{ FGSClientDeny::StaticStruct, Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewStructOps, TEXT("GSClientDeny"), &Z_Registration_Info_UScriptStruct_GSClientDeny, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSClientDeny), 3852462068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_4171881646(TEXT("/Script/SteamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamGameServer_SteamGameServerTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
