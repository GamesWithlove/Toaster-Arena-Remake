// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamApps/SteamApps.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamApps() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UApps();
	STEAMCORE_API UClass* Z_Construct_UClass_UApps_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	DEFINE_FUNCTION(UApps::execGetFileDetails)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFileDetails(FOnFileDetailsResult(Z_Param_Out_Callback),Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetAppBuildId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UApps::GetAppBuildId();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UApps::execGetLaunchQueryParam)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UApps::GetLaunchQueryParam(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetAppOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UApps::GetAppOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execUninstallDLC)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UApps::UninstallDLC(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execMarkContentCorrupt)
	{
		P_GET_UBOOL(Z_Param_bMissingFilesOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::MarkContentCorrupt(Z_Param_bMissingFilesOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsAppInstalled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsAppInstalled(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execInstallDLC)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UApps::InstallDLC(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetLaunchCommandLine)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_CommandLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UApps::GetLaunchCommandLine(Z_Param_Out_CommandLine);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UApps::execGetEarliestPurchaseUnixTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UApps::GetEarliestPurchaseUnixTime(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetDLCCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UApps::GetDLCCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetCurrentBetaName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::GetCurrentBetaName(Z_Param_Out_Name);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UApps::execBIsSubscribedFromFreeWeekend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsSubscribedFromFreeWeekend();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UApps::execBIsSubscribedFromFamilySharing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsSubscribedFromFamilySharing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsSubscribedApp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsSubscribedApp(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsVACBanned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsVACBanned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsDlcInstalled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsDlcInstalled(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetAvailableGameLanguages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UApps::GetAvailableGameLanguages();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetCurrentGameLanguage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UApps::GetCurrentGameLanguage();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UApps::execBIsCybercafe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsCybercafe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsLowViolence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsLowViolence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsSubscribed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsSubscribed();
		P_NATIVE_END;
	}
	void UApps::StaticRegisterNativesUApps()
	{
		UClass* Class = UApps::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BGetDLCDataByIndex", &UApps::execBGetDLCDataByIndex },
			{ "BIsAppInstalled", &UApps::execBIsAppInstalled },
			{ "BIsCybercafe", &UApps::execBIsCybercafe },
			{ "BIsDlcInstalled", &UApps::execBIsDlcInstalled },
			{ "BIsLowViolence", &UApps::execBIsLowViolence },
			{ "BIsSubscribed", &UApps::execBIsSubscribed },
			{ "BIsSubscribedApp", &UApps::execBIsSubscribedApp },
			{ "BIsSubscribedFromFamilySharing", &UApps::execBIsSubscribedFromFamilySharing },
			{ "BIsSubscribedFromFreeWeekend", &UApps::execBIsSubscribedFromFreeWeekend },
			{ "BIsTimedTrial", &UApps::execBIsTimedTrial },
			{ "BIsVACBanned", &UApps::execBIsVACBanned },
			{ "GetAppBuildId", &UApps::execGetAppBuildId },
			{ "GetAppInstallDir", &UApps::execGetAppInstallDir },
			{ "GetAppOwner", &UApps::execGetAppOwner },
			{ "GetAvailableGameLanguages", &UApps::execGetAvailableGameLanguages },
			{ "GetCurrentBetaName", &UApps::execGetCurrentBetaName },
			{ "GetCurrentGameLanguage", &UApps::execGetCurrentGameLanguage },
			{ "GetDLCCount", &UApps::execGetDLCCount },
			{ "GetDlcDownloadProgress", &UApps::execGetDlcDownloadProgress },
			{ "GetEarliestPurchaseUnixTime", &UApps::execGetEarliestPurchaseUnixTime },
			{ "GetFileDetails", &UApps::execGetFileDetails },
			{ "GetInstalledDepots", &UApps::execGetInstalledDepots },
			{ "GetLaunchCommandLine", &UApps::execGetLaunchCommandLine },
			{ "GetLaunchQueryParam", &UApps::execGetLaunchQueryParam },
			{ "InstallDLC", &UApps::execInstallDLC },
			{ "MarkContentCorrupt", &UApps::execMarkContentCorrupt },
			{ "UninstallDLC", &UApps::execUninstallDLC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FIntPropertyParams NewProp_DLC;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_bAvailable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvailable;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_DLC = { "DLC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventBGetDLCDataByIndex_Parms, DLC), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventBGetDLCDataByIndex_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable_SetBit(void* Obj)
	{
		((Apps_eventBGetDLCDataByIndex_Parms*)Obj)->bAvailable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable = { "bAvailable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Apps_eventBGetDLCDataByIndex_Parms), &Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventBGetDLCDataByIndex_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBGetDLCDataByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Apps_eventBGetDLCDataByIndex_Parms), &Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_DLC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Returns metadata for a DLC by index.\n\x09*\n\x09* @param\x09""DLC\x09\x09\x09\x09\x09index of the DLC to get between 0 and GetDLCCount.\n\x09* @param\x09""AppID\x09\x09\x09\x09Returns the App ID of the DLC.\n\x09* @param\x09""bAvailable\x09\x09\x09Returns whether the DLC is currently available.\n\x09* @param\x09Name\x09\x09\x09\x09Returns the name of the DLC by copying it into this buffer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Returns metadata for a DLC by index.\n\n@param        DLC                                     index of the DLC to get between 0 and GetDLCCount.\n@param        AppID                           Returns the App ID of the DLC.\n@param        bAvailable                      Returns whether the DLC is currently available.\n@param        Name                            Returns the name of the DLC by copying it into this buffer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BGetDLCDataByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::Apps_eventBGetDLCDataByIndex_Parms), Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BGetDLCDataByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsAppInstalled_Statics
	{
		struct Apps_eventBIsAppInstalled_Parms
		{
			int32 AppID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventBIsAppInstalled_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsAppInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Apps_eventBIsAppInstalled_Parms), &Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if a specific app is installed.\n\x09*\n\x09* The app may not actually be owned by the current user, they may have it left over from a free weekend, etc.\n\x09* This only works for base applications, not Downloadable Content (DLC). Use BIsDlcInstalled for DLC instead.\n\x09*\n\x09* @param\x09""AppID\x09The App ID of the application to check.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Checks if a specific app is installed.\n\nThe app may not actually be owned by the current user, they may have it left over from a free weekend, etc.\nThis only works for base applications, not Downloadable Content (DLC). Use BIsDlcInstalled for DLC instead.\n\n@param        AppID   The App ID of the application to check." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsAppInstalled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::Apps_eventBIsAppInstalled_Parms), Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsAppInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsCybercafe_Statics
	{
		struct Apps_eventBIsCybercafe_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_BIsCybercafe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsCybercafe_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsCybercafe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Apps_eventBIsCybercafe_Parms), &Z_Construct_UFunction_UApps_BIsCybercafe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsCybercafe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsCybercafe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsCybercafe_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks whether the current App ID is for Cyber Cafes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Checks whether the current App ID is for Cyber Cafes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsCybercafe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsCybercafe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_BIsCybercafe_Statics::Apps_eventBIsCybercafe_Parms), Z_Construct_UFunction_UApps_BIsCybercafe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsCybercafe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsCybercafe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsCybercafe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsCybercafe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsCybercafe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics
	{
		struct Apps_eventBIsDlcInstalled_Parms
		{
			int32 AppID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventBIsDlcInstalled_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsDlcInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Apps_eventBIsDlcInstalled_Parms), &Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the user owns a specific DLC and if the DLC is installed\n\x09*\n\x09* @param\x09""AppID\x09The App ID of the DLC to check.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Checks if the user owns a specific DLC and if the DLC is installed\n\n@param        AppID   The App ID of the DLC to check." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsDlcInstalled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::Apps_eventBIsDlcInstalled_Parms), Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsDlcInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsLowViolence_Statics
	{
		struct Apps_eventBIsLowViolence_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_BIsLowViolence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsLowViolence_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsLowViolence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Apps_eventBIsLowViolence_Parms), &Z_Construct_UFunction_UApps_BIsLowViolence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsLowViolence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsLowViolence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsLowViolence_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the license owned by the user provides low violence depots.\n\x09*\n\x09* Low violence depots are useful for copies sold in countries that have content restrictions.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Checks if the license owned by the user provides low violence depots.\n\nLow violence depots are useful for copies sold in countries that have content restrictions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsLowViolence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsLowViolence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_BIsLowViolence_Statics::Apps_eventBIsLowViolence_Parms), Z_Construct_UFunction_UApps_BIsLowViolence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsLowViolence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsLowViolence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsLowViolence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsLowViolence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsLowViolence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsSubscribed_Statics
	{
		struct Apps_eventBIsSubscribed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_BIsSubscribed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsSubscribed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsSubscribed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Apps_eventBIsSubscribed_Parms), &Z_Construct_UFunction_UApps_BIsSubscribed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsSubscribed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsSubscribed_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the active user is subscribed to the current App ID.\n\x09*\n\x09* This will always return true if you're using Steam DRM or calling SteamAPI_RestartAppIfNecessary.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Checks if the active user is subscribed to the current App ID.\n\nThis will always return true if you're using Steam DRM or calling SteamAPI_RestartAppIfNecessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsSubscribed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsSubscribed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_BIsSubscribed_Statics::Apps_eventBIsSubscribed_Parms), Z_Construct_UFunction_UApps_BIsSubscribed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsSubscribed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsSubscribed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsSubscribed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics
	{
		struct Apps_eventBIsSubscribedApp_Parms
		{
			int32 AppID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventBIsSubscribedApp_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsSubscribedApp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Apps_eventBIsSubscribedApp_Parms), &Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the active user is subscribed to a specified AppId.\n\x09*\n\x09* Only use this if you need to check ownership of another game related to yours, a demo for example.\n\x09*\n\x09* @param\x09""AppID\x09The App ID to check.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Checks if the active user is subscribed to a specified AppId.\n\nOnly use this if you need to check ownership of another game related to yours, a demo for example.\n\n@param        AppID   The App ID to check." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsSubscribedApp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::Apps_eventBIsSubscribedApp_Parms), Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsSubscribedApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics
	{
		struct Apps_eventBIsSubscribedFromFamilySharing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsSubscribedFromFamilySharing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Apps_eventBIsSubscribedFromFamilySharing_Parms), &Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the active user is accessing the current appID via a temporary Family Shared license owned by another user.\n\x09*\n\x09* If you need to determine the steamID of the permanent owner of the license, use GetAppOwner.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Checks if the active user is accessing the current appID via a temporary Family Shared license owned by another user.\n\nIf you need to determine the steamID of the permanent owner of the license, use GetAppOwner." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsSubscribedFromFamilySharing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::Apps_eventBIsSubscribedFromFamilySharing_Parms), Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics
	{
		struct Apps_eventBIsSubscribedFromFreeWeekend_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsSubscribedFromFreeWeekend_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Apps_eventBIsSubscribedFromFreeWeekend_Parms), &Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the user is subscribed to the current App ID through a free weekend.\n\x09*\n\x09* Before using this please contact a Valve technical account manager via the Steamworks Discussion Board to properly package and secure your free weekend.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Checks if the user is subscribed to the current App ID through a free weekend.\n\nBefore using this please contact a Valve technical account manager via the Steamworks Discussion Board to properly package and secure your free weekend." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsSubscribedFromFreeWeekend", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::Apps_eventBIsSubscribedFromFreeWeekend_Parms), Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsTimedTrial_Statics
	{
		struct Apps_eventBIsTimedTrial_Parms
		{
			int32 SecondsAllowed;
			int32 SecondsPlayed;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsAllowed;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsPlayed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_SecondsAllowed = { "SecondsAllowed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventBIsTimedTrial_Parms, SecondsAllowed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_SecondsPlayed = { "SecondsPlayed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventBIsTimedTrial_Parms, SecondsPlayed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsTimedTrial_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Apps_eventBIsTimedTrial_Parms), &Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_SecondsAllowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_SecondsPlayed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Check if game is a timed trial with limited playtime\n\x09*\n\x09* Notes: Only available in UE4.27+\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Check if game is a timed trial with limited playtime\n\nNotes: Only available in UE4.27+" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsTimedTrial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::Apps_eventBIsTimedTrial_Parms), Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsTimedTrial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsTimedTrial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsVACBanned_Statics
	{
		struct Apps_eventBIsVACBanned_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_BIsVACBanned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsVACBanned_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsVACBanned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Apps_eventBIsVACBanned_Parms), &Z_Construct_UFunction_UApps_BIsVACBanned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsVACBanned_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsVACBanned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsVACBanned_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the user has a VAC ban on their account\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Checks if the user has a VAC ban on their account" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsVACBanned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsVACBanned", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_BIsVACBanned_Statics::Apps_eventBIsVACBanned_Parms), Z_Construct_UFunction_UApps_BIsVACBanned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsVACBanned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsVACBanned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsVACBanned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsVACBanned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_BIsVACBanned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetAppBuildId_Statics
	{
		struct Apps_eventGetAppBuildId_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetAppBuildId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetAppBuildId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetAppBuildId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppBuildId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetAppBuildId_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the buildid of this app, may change at any time based on backend updates to the game.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Gets the buildid of this app, may change at any time based on backend updates to the game." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetAppBuildId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetAppBuildId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_GetAppBuildId_Statics::Apps_eventGetAppBuildId_Parms), Z_Construct_UFunction_UApps_GetAppBuildId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppBuildId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetAppBuildId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppBuildId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetAppBuildId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetAppBuildId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetAppInstallDir_Statics
	{
		struct Apps_eventGetAppInstallDir_Parms
		{
			int32 AppID;
			FString Folder;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Folder;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetAppInstallDir_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetAppInstallDir_Parms, Folder), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetAppInstallDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the install folder for a specific AppID.\n\x09*\n\x09* This works even if the application is not installed, based on where the game would be installed with the default Steam library location.\n\x09*\n\x09* @param\x09""AppID\x09\x09\x09The App ID to get the install dir for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Gets the install folder for a specific AppID.\n\nThis works even if the application is not installed, based on where the game would be installed with the default Steam library location.\n\n@param        AppID                   The App ID to get the install dir for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetAppInstallDir", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::Apps_eventGetAppInstallDir_Parms), Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetAppInstallDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetAppOwner_Statics
	{
		struct Apps_eventGetAppOwner_Parms
		{
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UApps_GetAppOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetAppOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetAppOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetAppOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the original owner of the current app. If it's different from the current user then it is borrowed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Gets the Steam ID of the original owner of the current app. If it's different from the current user then it is borrowed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetAppOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetAppOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_GetAppOwner_Statics::Apps_eventGetAppOwner_Parms), Z_Construct_UFunction_UApps_GetAppOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetAppOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetAppOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetAppOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics
	{
		struct Apps_eventGetAvailableGameLanguages_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetAvailableGameLanguages_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets a comma separated list of the languages the current app supports.\n\x09*\n\x09* For the full list of languages that may be returned see Localization and Languages.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Gets a comma separated list of the languages the current app supports.\n\nFor the full list of languages that may be returned see Localization and Languages." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetAvailableGameLanguages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::Apps_eventGetAvailableGameLanguages_Parms), Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetAvailableGameLanguages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics
	{
		struct Apps_eventGetCurrentBetaName_Parms
		{
			FString Name;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetCurrentBetaName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventGetCurrentBetaName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Apps_eventGetCurrentBetaName_Parms), &Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the user is running from a beta branch, and gets the name of the branch if they are.\n\x09*\n\x09* @param\x09Name\x09The buffer where the beta name will be copied in to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Checks if the user is running from a beta branch, and gets the name of the branch if they are.\n\n@param        Name    The buffer where the beta name will be copied in to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetCurrentBetaName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::Apps_eventGetCurrentBetaName_Parms), Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetCurrentBetaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics
	{
		struct Apps_eventGetCurrentGameLanguage_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetCurrentGameLanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the current language that the user has set.\n\x09*\n\x09* This falls back to the Steam UI language if the user hasn't explicitly picked a language for the title.\n\x09* For the full list of languages see Supported Languages.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Gets the current language that the user has set.\n\nThis falls back to the Steam UI language if the user hasn't explicitly picked a language for the title.\nFor the full list of languages see Supported Languages." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetCurrentGameLanguage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::Apps_eventGetCurrentGameLanguage_Parms), Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetCurrentGameLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetDLCCount_Statics
	{
		struct Apps_eventGetDLCCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetDLCCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetDLCCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetDLCCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDLCCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetDLCCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the number of DLC pieces for the current app.\n\x09*\n\x09* This is typically used to loop through each piece of DLC and get the info about each one with BGetDLCDataByIndex.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Gets the number of DLC pieces for the current app.\n\nThis is typically used to loop through each piece of DLC and get the info about each one with BGetDLCDataByIndex." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetDLCCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetDLCCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_GetDLCCount_Statics::Apps_eventGetDLCCount_Parms), Z_Construct_UFunction_UApps_GetDLCCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDLCCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetDLCCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDLCCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetDLCCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetDLCCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics
	{
		struct Apps_eventGetDlcDownloadProgress_Parms
		{
			int32 AppID;
			int32 BytesDownloaded;
			int32 BytesTotal;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesDownloaded;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesTotal;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetDlcDownloadProgress_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetDlcDownloadProgress_Parms, BytesDownloaded), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetDlcDownloadProgress_Parms, BytesTotal), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventGetDlcDownloadProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Apps_eventGetDlcDownloadProgress_Parms), &Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_BytesDownloaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_BytesTotal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the download progress for optional DLC.\n\x09*\n\x09* @param\x09""AppID\x09\x09\x09\x09The App ID of the DLC to monitor\n\x09* @param\x09""BytesDownloaded\x09\x09Returns the number of bytes downloaded.\n\x09* @param\x09""BytesTotal\x09\x09\x09Returns the total size of the download in bytes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Gets the download progress for optional DLC.\n\n@param        AppID                           The App ID of the DLC to monitor\n@param        BytesDownloaded         Returns the number of bytes downloaded.\n@param        BytesTotal                      Returns the total size of the download in bytes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetDlcDownloadProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::Apps_eventGetDlcDownloadProgress_Parms), Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetDlcDownloadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics
	{
		struct Apps_eventGetEarliestPurchaseUnixTime_Parms
		{
			int32 AppID;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetEarliestPurchaseUnixTime_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetEarliestPurchaseUnixTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the time of purchase of the specified app in Unix epoch format (time since Jan 1st, 1970).\n\x09*\n\x09* This is useful for rewarding users based on their initial purchase date.\n\x09*\n\x09* @param\x09""AppID\x09The App ID to get the purchase time for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Gets the time of purchase of the specified app in Unix epoch format (time since Jan 1st, 1970).\n\nThis is useful for rewarding users based on their initial purchase date.\n\n@param        AppID   The App ID to get the purchase time for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetEarliestPurchaseUnixTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::Apps_eventGetEarliestPurchaseUnixTime_Parms), Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetFileDetails_Statics
	{
		struct Apps_eventGetFileDetails_Parms
		{
			FScriptDelegate Callback;
			FString FileName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetFileDetails_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_Callback_MetaData)) }; // 1885880666
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetFileDetails_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetFileDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetFileDetails_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Asynchronously retrieves metadata details about a specific file in the depot manifest.\n\x09*\n\x09* Currently provides:\n\x09* The file size in bytes.\n\x09* The file's SHA1 hash.\n\x09* The file's flags.\n\x09*\n\x09* @param\x09""FileName\x09The absolute path and name to the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Asynchronously retrieves metadata details about a specific file in the depot manifest.\n\nCurrently provides:\nThe file size in bytes.\nThe file's SHA1 hash.\nThe file's flags.\n\n@param        FileName        The absolute path and name to the file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetFileDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetFileDetails", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_GetFileDetails_Statics::Apps_eventGetFileDetails_Parms), Z_Construct_UFunction_UApps_GetFileDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetFileDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetFileDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetFileDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetFileDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetFileDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetInstalledDepots_Statics
	{
		struct Apps_eventGetInstalledDepots_Parms
		{
			int32 AppID;
			int32 MaxDepots;
			TArray<int32> Depots;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDepots;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Depots_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Depots;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetInstalledDepots_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_MaxDepots = { "MaxDepots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetInstalledDepots_Parms, MaxDepots), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_Depots_Inner = { "Depots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_Depots = { "Depots", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetInstalledDepots_Parms, Depots), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetInstalledDepots_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_MaxDepots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_Depots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_Depots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets a list of all installed depots for a given App ID in mount order.\n\x09*\n\x09* @param\x09""AppID\x09\x09\x09The App to list the depots for.\n\x09* @param\x09MaxDepots\x09\x09The maximum number of depots to obtain, typically the size of pvecDepots.\n\x09* @param\x09""Depots\x09\x09\x09""A preallocated array that will be filled with the list of depots.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Gets a list of all installed depots for a given App ID in mount order.\n\n@param        AppID                   The App to list the depots for.\n@param        MaxDepots               The maximum number of depots to obtain, typically the size of pvecDepots.\n@param        Depots                  A preallocated array that will be filled with the list of depots." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetInstalledDepots", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::Apps_eventGetInstalledDepots_Parms), Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetInstalledDepots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics
	{
		struct Apps_eventGetLaunchCommandLine_Parms
		{
			FString CommandLine;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandLine;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::NewProp_CommandLine = { "CommandLine", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetLaunchCommandLine_Parms, CommandLine), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetLaunchCommandLine_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::NewProp_CommandLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the command line if the game was launched via Steam URL, e.g. steam://run/<appid>//<command line>/. \n\x09*\n\x09* This method is preferable to launching with a command line via the operating system, which can be a security risk.\n\x09* In order for rich presence joins to go through this and not be placed on the OS command line, you must enable \"Use launch command line\" from the Installation > General page on your app.\n\x09*\n\x09* @param\x09""CommandLine\x09\x09\x09The string buffer that the command line will be copied into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Gets the command line if the game was launched via Steam URL, e.g. steam://run/<appid>//<command line>/.\n\nThis method is preferable to launching with a command line via the operating system, which can be a security risk.\nIn order for rich presence joins to go through this and not be placed on the OS command line, you must enable \"Use launch command line\" from the Installation > General page on your app.\n\n@param        CommandLine                     The string buffer that the command line will be copied into." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetLaunchCommandLine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::Apps_eventGetLaunchCommandLine_Parms), Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetLaunchCommandLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics
	{
		struct Apps_eventGetLaunchQueryParam_Parms
		{
			FString Key;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetLaunchQueryParam_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventGetLaunchQueryParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the associated launch parameter if the game is run via steam://run/<appid>/?param1=value1;param2=value2;param3=value3 etc.\n\x09*\n\x09* Parameter names starting with the character '@' are reserved for internal use and will always return an empty string.\n\x09* Parameter names starting with an underscore '_' are reserved for steam features -- they can be queried by the game, but it is advised that you not param names beginning with an underscore for your own features.\n\x09*\n\x09* @param\x09Key\x09\x09The launch key to test for. Ex: param1\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Gets the associated launch parameter if the game is run via steam://run/<appid>/?param1=value1;param2=value2;param3=value3 etc.\n\nParameter names starting with the character '@' are reserved for internal use and will always return an empty string.\nParameter names starting with an underscore '_' are reserved for steam features -- they can be queried by the game, but it is advised that you not param names beginning with an underscore for your own features.\n\n@param        Key             The launch key to test for. Ex: param1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetLaunchQueryParam", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::Apps_eventGetLaunchQueryParam_Parms), Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetLaunchQueryParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_InstallDLC_Statics
	{
		struct Apps_eventInstallDLC_Parms
		{
			int32 AppID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_InstallDLC_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventInstallDLC_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_InstallDLC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_InstallDLC_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_InstallDLC_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Allows you to install an optional DLC.\n\x09*\n\x09* @param\x09""AppID\x09The DLC you want to install.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Allows you to install an optional DLC.\n\n@param        AppID   The DLC you want to install." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_InstallDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "InstallDLC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_InstallDLC_Statics::Apps_eventInstallDLC_Parms), Z_Construct_UFunction_UApps_InstallDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_InstallDLC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_InstallDLC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_InstallDLC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_InstallDLC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_InstallDLC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics
	{
		struct Apps_eventMarkContentCorrupt_Parms
		{
			bool bMissingFilesOnly;
			bool ReturnValue;
		};
		static void NewProp_bMissingFilesOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMissingFilesOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly_SetBit(void* Obj)
	{
		((Apps_eventMarkContentCorrupt_Parms*)Obj)->bMissingFilesOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly = { "bMissingFilesOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Apps_eventMarkContentCorrupt_Parms), &Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventMarkContentCorrupt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Apps_eventMarkContentCorrupt_Parms), &Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Allows you to force verify game content on next launch.\n\x09*\n\x09* If you detect the game is out-of-date (for example, by having the client detect a version mismatch with a server),\n\x09* you can call use MarkContentCorrupt to force a verify, show a message to the user, and then quit.\n\x09*\n\x09* @param\x09""bMissingFilesOnly\x09Only scan for missing files, don't verify the checksum of each file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Allows you to force verify game content on next launch.\n\nIf you detect the game is out-of-date (for example, by having the client detect a version mismatch with a server),\nyou can call use MarkContentCorrupt to force a verify, show a message to the user, and then quit.\n\n@param        bMissingFilesOnly       Only scan for missing files, don't verify the checksum of each file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "MarkContentCorrupt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::Apps_eventMarkContentCorrupt_Parms), Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_MarkContentCorrupt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_UninstallDLC_Statics
	{
		struct Apps_eventUninstallDLC_Parms
		{
			int32 AppID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_UninstallDLC_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Apps_eventUninstallDLC_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_UninstallDLC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_UninstallDLC_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_UninstallDLC_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Allows you to uninstall an optional DLC.\n\x09*\n\x09* @param\x09""AppID\x09The DLC you want to uninstall.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
		{ "ToolTip", "Allows you to uninstall an optional DLC.\n\n@param        AppID   The DLC you want to uninstall." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_UninstallDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "UninstallDLC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApps_UninstallDLC_Statics::Apps_eventUninstallDLC_Parms), Z_Construct_UFunction_UApps_UninstallDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_UninstallDLC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_UninstallDLC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_UninstallDLC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_UninstallDLC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApps_UninstallDLC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApps);
	UClass* Z_Construct_UClass_UApps_NoRegister()
	{
		return UApps::StaticClass();
	}
	struct Z_Construct_UClass_UApps_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DLCInstalled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DLCInstalled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileDetailsResultDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FileDetailsResultDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApps_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApps_BGetDLCDataByIndex, "BGetDLCDataByIndex" }, // 3675175940
		{ &Z_Construct_UFunction_UApps_BIsAppInstalled, "BIsAppInstalled" }, // 328644875
		{ &Z_Construct_UFunction_UApps_BIsCybercafe, "BIsCybercafe" }, // 1529425908
		{ &Z_Construct_UFunction_UApps_BIsDlcInstalled, "BIsDlcInstalled" }, // 3793194660
		{ &Z_Construct_UFunction_UApps_BIsLowViolence, "BIsLowViolence" }, // 2139144105
		{ &Z_Construct_UFunction_UApps_BIsSubscribed, "BIsSubscribed" }, // 771028937
		{ &Z_Construct_UFunction_UApps_BIsSubscribedApp, "BIsSubscribedApp" }, // 2443979027
		{ &Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing, "BIsSubscribedFromFamilySharing" }, // 566662581
		{ &Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend, "BIsSubscribedFromFreeWeekend" }, // 310632489
		{ &Z_Construct_UFunction_UApps_BIsTimedTrial, "BIsTimedTrial" }, // 1187398374
		{ &Z_Construct_UFunction_UApps_BIsVACBanned, "BIsVACBanned" }, // 521662036
		{ &Z_Construct_UFunction_UApps_GetAppBuildId, "GetAppBuildId" }, // 3940156328
		{ &Z_Construct_UFunction_UApps_GetAppInstallDir, "GetAppInstallDir" }, // 1548589973
		{ &Z_Construct_UFunction_UApps_GetAppOwner, "GetAppOwner" }, // 3839865218
		{ &Z_Construct_UFunction_UApps_GetAvailableGameLanguages, "GetAvailableGameLanguages" }, // 3170248403
		{ &Z_Construct_UFunction_UApps_GetCurrentBetaName, "GetCurrentBetaName" }, // 3634248985
		{ &Z_Construct_UFunction_UApps_GetCurrentGameLanguage, "GetCurrentGameLanguage" }, // 100516741
		{ &Z_Construct_UFunction_UApps_GetDLCCount, "GetDLCCount" }, // 1104218384
		{ &Z_Construct_UFunction_UApps_GetDlcDownloadProgress, "GetDlcDownloadProgress" }, // 228410924
		{ &Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime, "GetEarliestPurchaseUnixTime" }, // 2779637019
		{ &Z_Construct_UFunction_UApps_GetFileDetails, "GetFileDetails" }, // 26961130
		{ &Z_Construct_UFunction_UApps_GetInstalledDepots, "GetInstalledDepots" }, // 735344573
		{ &Z_Construct_UFunction_UApps_GetLaunchCommandLine, "GetLaunchCommandLine" }, // 975193
		{ &Z_Construct_UFunction_UApps_GetLaunchQueryParam, "GetLaunchQueryParam" }, // 2876939190
		{ &Z_Construct_UFunction_UApps_InstallDLC, "InstallDLC" }, // 3219400799
		{ &Z_Construct_UFunction_UApps_MarkContentCorrupt, "MarkContentCorrupt" }, // 2201454578
		{ &Z_Construct_UFunction_UApps_UninstallDLC, "UninstallDLC" }, // 3719596095
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamApps/SteamApps.h" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApps_Statics::NewProp_DLCInstalled_MetaData[] = {
		{ "Category", "SteamCore|Apps|Delegates" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApps_Statics::NewProp_DLCInstalled = { "DLCInstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApps, DLCInstalled), Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApps_Statics::NewProp_DLCInstalled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApps_Statics::NewProp_DLCInstalled_MetaData)) }; // 3842899155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApps_Statics::NewProp_FileDetailsResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|Apps|Delegates" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamApps.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApps_Statics::NewProp_FileDetailsResultDelegate = { "FileDetailsResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApps, FileDetailsResultDelegate), Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApps_Statics::NewProp_FileDetailsResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApps_Statics::NewProp_FileDetailsResultDelegate_MetaData)) }; // 3431948979
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApps_Statics::NewProp_DLCInstalled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApps_Statics::NewProp_FileDetailsResultDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApps>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UApps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApps()
	{
		if (!Z_Registration_Info_UClass_UApps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApps.OuterSingleton, Z_Construct_UClass_UApps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApps.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<UApps>()
	{
		return UApps::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApps);
	UApps::~UApps() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApps, UApps::StaticClass, TEXT("UApps"), &Z_Registration_Info_UClass_UApps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApps), 3959052299U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_2169876626(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamApps_SteamApps_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
