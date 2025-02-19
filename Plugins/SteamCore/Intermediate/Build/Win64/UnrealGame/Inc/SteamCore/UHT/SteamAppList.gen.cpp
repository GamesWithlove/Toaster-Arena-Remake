// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamAppList/SteamAppList.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAppList() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UAppList();
	STEAMCORE_API UClass* Z_Construct_UClass_UAppList_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	DEFINE_FUNCTION(UAppList::execGetAppBuildId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAppBuildId(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppList::execGetAppInstallDir)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Directory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAppInstallDir(Z_Param_AppID,Z_Param_Out_Directory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppList::execGetAppName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAppName(Z_Param_AppID,Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppList::execGetInstalledApps)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_AppIDs);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxAppIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInstalledApps(Z_Param_Out_AppIDs,Z_Param_MaxAppIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppList::execGetNumInstalledApps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumInstalledApps();
		P_NATIVE_END;
	}
	void UAppList::StaticRegisterNativesUAppList()
	{
		UClass* Class = UAppList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAppBuildId", &UAppList::execGetAppBuildId },
			{ "GetAppInstallDir", &UAppList::execGetAppInstallDir },
			{ "GetAppName", &UAppList::execGetAppName },
			{ "GetInstalledApps", &UAppList::execGetInstalledApps },
			{ "GetNumInstalledApps", &UAppList::execGetNumInstalledApps },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAppList_GetAppBuildId_Statics
	{
		struct AppList_eventGetAppBuildId_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppList_eventGetAppBuildId_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppList_eventGetAppBuildId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|AppList" },
		{ "Comment", "/**\n\x09* Return the buildid of this app, may change at any time based on backend updates to the game\n\x09*\n\x09* @param\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamAppList/SteamAppList.h" },
		{ "ToolTip", "Return the buildid of this app, may change at any time based on backend updates to the game\n\n@param" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppList, nullptr, "GetAppBuildId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::AppList_eventGetAppBuildId_Parms), Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppList_GetAppBuildId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics
	{
		struct AppList_eventGetAppInstallDir_Parms
		{
			int32 AppID;
			FString Directory;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Directory;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppList_eventGetAppInstallDir_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppList_eventGetAppInstallDir_Parms, Directory), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppList_eventGetAppInstallDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::NewProp_Directory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|AppList" },
		{ "Comment", "/**\n\x09* Get app install dir\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamAppList/SteamAppList.h" },
		{ "ToolTip", "Get app install dir" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppList, nullptr, "GetAppInstallDir", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::AppList_eventGetAppInstallDir_Parms), Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppList_GetAppInstallDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppList_GetAppName_Statics
	{
		struct AppList_eventGetAppName_Parms
		{
			int32 AppID;
			FString Name;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetAppName_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppList_eventGetAppName_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAppList_GetAppName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppList_eventGetAppName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetAppName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppList_eventGetAppName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppList_GetAppName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetAppName_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetAppName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetAppName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppList_GetAppName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|AppList" },
		{ "Comment", "/**\n\x09* Get App Name\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamAppList/SteamAppList.h" },
		{ "ToolTip", "Get App Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppList_GetAppName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppList, nullptr, "GetAppName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAppList_GetAppName_Statics::AppList_eventGetAppName_Parms), Z_Construct_UFunction_UAppList_GetAppName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetAppName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppList_GetAppName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetAppName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppList_GetAppName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppList_GetAppName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppList_GetInstalledApps_Statics
	{
		struct AppList_eventGetInstalledApps_Parms
		{
			TArray<int32> AppIDs;
			int32 MaxAppIDs;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppIDs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AppIDs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAppIDs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::NewProp_AppIDs_Inner = { "AppIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::NewProp_AppIDs = { "AppIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppList_eventGetInstalledApps_Parms, AppIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::NewProp_MaxAppIDs = { "MaxAppIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppList_eventGetInstalledApps_Parms, MaxAppIDs), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppList_eventGetInstalledApps_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::NewProp_AppIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::NewProp_AppIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::NewProp_MaxAppIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|AppList" },
		{ "Comment", "/**\n\x09* Get Installed Apps\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamAppList/SteamAppList.h" },
		{ "ToolTip", "Get Installed Apps" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppList, nullptr, "GetInstalledApps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::AppList_eventGetInstalledApps_Parms), Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppList_GetInstalledApps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics
	{
		struct AppList_eventGetNumInstalledApps_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppList_eventGetNumInstalledApps_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|AppList" },
		{ "Comment", "/**\n\x09* Get Number of Installed Apps\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamAppList/SteamAppList.h" },
		{ "ToolTip", "Get Number of Installed Apps" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppList, nullptr, "GetNumInstalledApps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::AppList_eventGetNumInstalledApps_Parms), Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppList_GetNumInstalledApps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAppList);
	UClass* Z_Construct_UClass_UAppList_NoRegister()
	{
		return UAppList::StaticClass();
	}
	struct Z_Construct_UClass_UAppList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamAppInstalled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamAppInstalled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamAppUninstalled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamAppUninstalled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAppList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAppList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAppList_GetAppBuildId, "GetAppBuildId" }, // 1656943338
		{ &Z_Construct_UFunction_UAppList_GetAppInstallDir, "GetAppInstallDir" }, // 2479120847
		{ &Z_Construct_UFunction_UAppList_GetAppName, "GetAppName" }, // 1965922627
		{ &Z_Construct_UFunction_UAppList_GetInstalledApps, "GetInstalledApps" }, // 251218889
		{ &Z_Construct_UFunction_UAppList_GetNumInstalledApps, "GetNumInstalledApps" }, // 2701475963
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppList_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamAppList/SteamAppList.h" },
		{ "ModuleRelativePath", "Public/SteamAppList/SteamAppList.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppInstalled_MetaData[] = {
		{ "Category", "SteamCore|AppList|Delegates" },
		{ "ModuleRelativePath", "Public/SteamAppList/SteamAppList.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppInstalled = { "SteamAppInstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppList, SteamAppInstalled), Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppInstalled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppInstalled_MetaData)) }; // 1221065507
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppUninstalled_MetaData[] = {
		{ "Category", "SteamCore|AppList|Delegates" },
		{ "ModuleRelativePath", "Public/SteamAppList/SteamAppList.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppUninstalled = { "SteamAppUninstalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppList, SteamAppUninstalled), Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppUninstalled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppUninstalled_MetaData)) }; // 4170527569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAppList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppInstalled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppUninstalled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAppList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAppList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAppList_Statics::ClassParams = {
		&UAppList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAppList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAppList_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAppList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAppList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAppList()
	{
		if (!Z_Registration_Info_UClass_UAppList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAppList.OuterSingleton, Z_Construct_UClass_UAppList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAppList.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<UAppList>()
	{
		return UAppList::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAppList);
	UAppList::~UAppList() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAppList, UAppList::StaticClass, TEXT("UAppList"), &Z_Registration_Info_UClass_UAppList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAppList), 99874128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_1791719770(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamAppList_SteamAppList_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
