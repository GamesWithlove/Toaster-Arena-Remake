// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamRemoteStorage/SteamRemoteStorage.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
#include "SteamCore/Public/SteamRemoteStorage/SteamRemoteStorageTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamRemoteStorage() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_URemoteStorage();
	STEAMCORE_API UClass* Z_Construct_UClass_URemoteStorage_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUGCReadAction();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	DEFINE_FUNCTION(URemoteStorage::execSetSyncPlatforms)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_ENUM(ESteamRemoteStoragePlatform,Z_Param_RemoteStoragePlatform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::SetSyncPlatforms(Z_Param_File,ESteamRemoteStoragePlatform(Z_Param_RemoteStoragePlatform));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execSetCloudEnabledForApp)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		URemoteStorage::SetCloudEnabledForApp(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execIsCloudEnabledForApp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::IsCloudEnabledForApp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execIsCloudEnabledForAccount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::IsCloudEnabledForAccount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetUGCDownloadProgress)
	{
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesDownloaded);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesExpected);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::GetUGCDownloadProgress(Z_Param_Handle,Z_Param_Out_BytesDownloaded,Z_Param_Out_BytesExpected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execUGCDownloadToLocation)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_Content);
		P_GET_PROPERTY(FStrProperty,Z_Param_Location);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UGCDownloadToLocation(FOnUGCDownloadToLocationAsync(Z_Param_Out_Callback),Z_Param_Content,Z_Param_Location,Z_Param_Priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execUGCRead)
	{
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_Content);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutData);
		P_GET_PROPERTY(FIntProperty,Z_Param_DataToRead);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_ENUM(ESteamUGCReadAction,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URemoteStorage::UGCRead(Z_Param_Content,Z_Param_Out_OutData,Z_Param_DataToRead,Z_Param_Offset,ESteamUGCReadAction(Z_Param_Action));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execUGCDownload)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_Content);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UGCDownload(FOnUGCDownloadAsync(Z_Param_Out_Callback),Z_Param_Content,Z_Param_Priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetUGCDetails)
	{
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FileSizeInBytes);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::GetUGCDetails(Z_Param_Handle,Z_Param_Out_AppID,Z_Param_Out_Name,Z_Param_Out_FileSizeInBytes,Z_Param_Out_SteamIDOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetSyncPlatforms)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamRemoteStoragePlatform*)Z_Param__Result=URemoteStorage::GetSyncPlatforms(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetQuota)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TotalBytes);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AvailableBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::GetQuota(Z_Param_Out_TotalBytes,Z_Param_Out_AvailableBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetFileTimestamp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URemoteStorage::GetFileTimestamp(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetFileSize)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URemoteStorage::GetFileSize(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetFileNameAndSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_File);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FileSizeInBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URemoteStorage::GetFileNameAndSize(Z_Param_File,Z_Param_Out_FileSizeInBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetFileCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URemoteStorage::GetFileCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetCachedUGCHandle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ICachedContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamUGCHandle*)Z_Param__Result=URemoteStorage::GetCachedUGCHandle(Z_Param_ICachedContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetCachedUGCCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URemoteStorage::GetCachedUGCCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWriteStreamWriteChunk)
	{
		P_GET_STRUCT(FUGCFileWriteStreamHandle,Z_Param_Handle);
		P_GET_TARRAY(uint8,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileWriteStreamWriteChunk(Z_Param_Handle,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWriteStreamOpen)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCFileWriteStreamHandle*)Z_Param__Result=URemoteStorage::FileWriteStreamOpen(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWriteStreamClose)
	{
		P_GET_STRUCT(FUGCFileWriteStreamHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileWriteStreamClose(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWriteStreamCancel)
	{
		P_GET_STRUCT(FUGCFileWriteStreamHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileWriteStreamCancel(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWriteAsync)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_TARRAY(uint8,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FileWriteAsync(FOnFileWriteAsync(Z_Param_Out_Callback),Z_Param_File,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWrite)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_TARRAY(uint8,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileWrite(Z_Param_File,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileShare)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FileShare(FOnFileShareAsync(Z_Param_Out_Callback),Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileReadAsyncComplete)
	{
		P_GET_STRUCT(FRemoteStorageFileReadAsyncComplete,Z_Param_ReadCall);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
		P_GET_PROPERTY(FIntProperty,Z_Param_BytesToRead);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileReadAsyncComplete(Z_Param_ReadCall,Z_Param_Out_Buffer,Z_Param_BytesToRead);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileReadAsync)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_BytesToRead);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FileReadAsync(FOnFileReadAsync(Z_Param_Out_Callback),Z_Param_File,Z_Param_Offset,Z_Param_BytesToRead);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileRead)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
		P_GET_PROPERTY(FIntProperty,Z_Param_DataToRead);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URemoteStorage::FileRead(Z_Param_File,Z_Param_Out_Buffer,Z_Param_DataToRead);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFilePersisted)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FilePersisted(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileForget)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileForget(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileExists(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileDelete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileDelete(Z_Param_File);
		P_NATIVE_END;
	}
	void URemoteStorage::StaticRegisterNativesURemoteStorage()
	{
		UClass* Class = URemoteStorage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FileDelete", &URemoteStorage::execFileDelete },
			{ "FileExists", &URemoteStorage::execFileExists },
			{ "FileForget", &URemoteStorage::execFileForget },
			{ "FilePersisted", &URemoteStorage::execFilePersisted },
			{ "FileRead", &URemoteStorage::execFileRead },
			{ "FileReadAsync", &URemoteStorage::execFileReadAsync },
			{ "FileReadAsyncComplete", &URemoteStorage::execFileReadAsyncComplete },
			{ "FileShare", &URemoteStorage::execFileShare },
			{ "FileWrite", &URemoteStorage::execFileWrite },
			{ "FileWriteAsync", &URemoteStorage::execFileWriteAsync },
			{ "FileWriteStreamCancel", &URemoteStorage::execFileWriteStreamCancel },
			{ "FileWriteStreamClose", &URemoteStorage::execFileWriteStreamClose },
			{ "FileWriteStreamOpen", &URemoteStorage::execFileWriteStreamOpen },
			{ "FileWriteStreamWriteChunk", &URemoteStorage::execFileWriteStreamWriteChunk },
			{ "GetCachedUGCCount", &URemoteStorage::execGetCachedUGCCount },
			{ "GetCachedUGCHandle", &URemoteStorage::execGetCachedUGCHandle },
			{ "GetFileCount", &URemoteStorage::execGetFileCount },
			{ "GetFileNameAndSize", &URemoteStorage::execGetFileNameAndSize },
			{ "GetFileSize", &URemoteStorage::execGetFileSize },
			{ "GetFileTimestamp", &URemoteStorage::execGetFileTimestamp },
			{ "GetQuota", &URemoteStorage::execGetQuota },
			{ "GetSyncPlatforms", &URemoteStorage::execGetSyncPlatforms },
			{ "GetUGCDetails", &URemoteStorage::execGetUGCDetails },
			{ "GetUGCDownloadProgress", &URemoteStorage::execGetUGCDownloadProgress },
			{ "IsCloudEnabledForAccount", &URemoteStorage::execIsCloudEnabledForAccount },
			{ "IsCloudEnabledForApp", &URemoteStorage::execIsCloudEnabledForApp },
			{ "SetCloudEnabledForApp", &URemoteStorage::execSetCloudEnabledForApp },
			{ "SetSyncPlatforms", &URemoteStorage::execSetSyncPlatforms },
			{ "UGCDownload", &URemoteStorage::execUGCDownload },
			{ "UGCDownloadToLocation", &URemoteStorage::execUGCDownloadToLocation },
			{ "UGCRead", &URemoteStorage::execUGCRead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URemoteStorage_FileDelete_Statics
	{
		struct RemoteStorage_eventFileDelete_Parms
		{
			FString File;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileDelete_Parms, File), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileDelete_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteStorage_eventFileDelete_Parms), &Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Deletes a file from the local disk, and propagates that delete to the cloud.\n\x09*\n\x09* This is meant to be used when a user actively deletes a file. Use FileForget if you want to remove a file from the Steam Cloud but retain it on the users local disk.\n\x09* When a file has been deleted it can be re-written with FileWrite to reupload it to the Steam Cloud.\n\x09*\n\x09* @param\x09""File\x09The name of the file that will be deleted.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Deletes a file from the local disk, and propagates that delete to the cloud.\n\nThis is meant to be used when a user actively deletes a file. Use FileForget if you want to remove a file from the Steam Cloud but retain it on the users local disk.\nWhen a file has been deleted it can be re-written with FileWrite to reupload it to the Steam Cloud.\n\n@param        File    The name of the file that will be deleted." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileDelete", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::RemoteStorage_eventFileDelete_Parms), Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileExists_Statics
	{
		struct RemoteStorage_eventFileExists_Parms
		{
			FString File;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileExists_Parms, File), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteStorage_eventFileExists_Parms), &Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileExists_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Checks whether the specified file exists.\n\x09*\n\x09* @param\x09""File\x09The name of the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Checks whether the specified file exists.\n\n@param        File    The name of the file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileExists", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_FileExists_Statics::RemoteStorage_eventFileExists_Parms), Z_Construct_UFunction_URemoteStorage_FileExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileForget_Statics
	{
		struct RemoteStorage_eventFileForget_Parms
		{
			FString File;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileForget_Parms, File), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileForget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteStorage_eventFileForget_Parms), &Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileForget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileForget_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Deletes the file from remote storage, but leaves it on the local disk and remains accessible from the API.\n\x09*\n\x09* When you are out of Cloud space, this can be used to allow calls to FileWrite to keep working without needing to make the user delete files.\n\x09* How you decide which files to forget are up to you. It could be a simple Least Recently Used (LRU) queue or something more complicated.\n\x09* Requiring the user to manage their Cloud-ized files for a game, while is possible to do, it is never recommended. \n\x09* For instance, \"Which file would you like to delete so that you may store this new one?\" removes a significant advantage of using the Cloud in the first place: its transparency.\n\x09* Once a file has been deleted or forgotten, calling FileWrite will resynchronize it in the Cloud. Rewriting a forgotten file is the only way to make it persisted again.\n\x09*\n\x09* @param\x09""File\x09The name of the file that will be forgotten.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Deletes the file from remote storage, but leaves it on the local disk and remains accessible from the API.\n\nWhen you are out of Cloud space, this can be used to allow calls to FileWrite to keep working without needing to make the user delete files.\nHow you decide which files to forget are up to you. It could be a simple Least Recently Used (LRU) queue or something more complicated.\nRequiring the user to manage their Cloud-ized files for a game, while is possible to do, it is never recommended.\nFor instance, \"Which file would you like to delete so that you may store this new one?\" removes a significant advantage of using the Cloud in the first place: its transparency.\nOnce a file has been deleted or forgotten, calling FileWrite will resynchronize it in the Cloud. Rewriting a forgotten file is the only way to make it persisted again.\n\n@param        File    The name of the file that will be forgotten." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileForget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileForget", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_FileForget_Statics::RemoteStorage_eventFileForget_Parms), Z_Construct_UFunction_URemoteStorage_FileForget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileForget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileForget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileForget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileForget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileForget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics
	{
		struct RemoteStorage_eventFilePersisted_Parms
		{
			FString File;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFilePersisted_Parms, File), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFilePersisted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteStorage_eventFilePersisted_Parms), &Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Checks if a specific file is persisted in the steam cloud.\n\x09*\n\x09* @param\x09""File\x09The name of the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Checks if a specific file is persisted in the steam cloud.\n\n@param        File    The name of the file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FilePersisted", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::RemoteStorage_eventFilePersisted_Parms), Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FilePersisted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileRead_Statics
	{
		struct RemoteStorage_eventFileRead_Parms
		{
			FString File;
			TArray<uint8> Buffer;
			int32 DataToRead;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataToRead;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileRead_Parms, File), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileRead_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_DataToRead = { "DataToRead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileRead_Parms, DataToRead), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileRead_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileRead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_DataToRead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileRead_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Opens a binary file, reads the contents of the file into a byte array, and then closes the file.\n\x09*\n\x09* NOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block.\n\x09* To avoid \"hitching\" due to a busy disk on the client machine using FileReadAsync, the asynchronous version of this API is recommended.\n\x09*\n\x09* @param\x09""File\x09\x09\x09The name of the file to read from.\n\x09* @param\x09""Buffer\x09\x09\x09The buffer that the file will be read into. This buffer must be at least the same size provided to cubDataToRead.\n\x09* @param\x09""DataToRead\x09\x09The amount of bytes to read. Generally obtained from GetFileSize or GetFileTimestamp.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Opens a binary file, reads the contents of the file into a byte array, and then closes the file.\n\nNOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block.\nTo avoid \"hitching\" due to a busy disk on the client machine using FileReadAsync, the asynchronous version of this API is recommended.\n\n@param        File                    The name of the file to read from.\n@param        Buffer                  The buffer that the file will be read into. This buffer must be at least the same size provided to cubDataToRead.\n@param        DataToRead              The amount of bytes to read. Generally obtained from GetFileSize or GetFileTimestamp." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileRead", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_FileRead_Statics::RemoteStorage_eventFileRead_Parms), Z_Construct_UFunction_URemoteStorage_FileRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics
	{
		struct RemoteStorage_eventFileReadAsync_Parms
		{
			FScriptDelegate Callback;
			FString File;
			int32 Offset;
			int32 BytesToRead;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesToRead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileReadAsync_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_Callback_MetaData)) }; // 1232839433
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileReadAsync_Parms, File), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileReadAsync_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_BytesToRead = { "BytesToRead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileReadAsync_Parms, BytesToRead), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_BytesToRead,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Starts an asynchronous read from a file.\n\x09*\n\x09* The offset and amount to read should be valid for the size of the file, as indicated by GetFileSize or GetFileTimestamp.\n\x09*\n\x09* Returns k_uAPICallInvalid under the following conditions:\n\x09* You tried to read from invalid path or filename. Because Steam Cloud is cross platform the files need to have valid names on all supported OSes and file systems. See Microsoft's documentation on Naming Files, Paths, and Namespaces.\n\x09* The file doesn't exist.\n\x09* cubDataToRead is <= 0 bytes. You need to be able to read something!\n\x09* The combination of pvData and cubDataToRead would read past the end of the file.\n\x09* You have an async read in progress on this file already.\n\x09*\n\x09* Upon completion of the read request you will receive the call result, if the value of m_eResult within the call result is k_EResultOK you can then call FileReadAsyncComplete to read the requested data into your buffer.\n\x09* The hReadCall parameter should match the return value of this function, and the amount to read should generally be equal to the amount requested as indicated by m_nOffset and m_cubRead.\n\x09*\n\x09* @param\x09""File\x09\x09\x09\x09The name of the file to read from.\n\x09* @param\x09Offset\x09\x09\x09\x09The offset in bytes into the file where the read will start from. 0 if you're reading the whole file in one chunk.\n\x09* @param\x09""BytesToRead\x09\x09\x09The amount of bytes to read starting from nOffset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Starts an asynchronous read from a file.\n\nThe offset and amount to read should be valid for the size of the file, as indicated by GetFileSize or GetFileTimestamp.\n\nReturns k_uAPICallInvalid under the following conditions:\nYou tried to read from invalid path or filename. Because Steam Cloud is cross platform the files need to have valid names on all supported OSes and file systems. See Microsoft's documentation on Naming Files, Paths, and Namespaces.\nThe file doesn't exist.\ncubDataToRead is <= 0 bytes. You need to be able to read something!\nThe combination of pvData and cubDataToRead would read past the end of the file.\nYou have an async read in progress on this file already.\n\nUpon completion of the read request you will receive the call result, if the value of m_eResult within the call result is k_EResultOK you can then call FileReadAsyncComplete to read the requested data into your buffer.\nThe hReadCall parameter should match the return value of this function, and the amount to read should generally be equal to the amount requested as indicated by m_nOffset and m_cubRead.\n\n@param        File                            The name of the file to read from.\n@param        Offset                          The offset in bytes into the file where the read will start from. 0 if you're reading the whole file in one chunk.\n@param        BytesToRead                     The amount of bytes to read starting from nOffset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileReadAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::RemoteStorage_eventFileReadAsync_Parms), Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileReadAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics
	{
		struct RemoteStorage_eventFileReadAsyncComplete_Parms
		{
			FRemoteStorageFileReadAsyncComplete ReadCall;
			TArray<uint8> Buffer;
			int32 BytesToRead;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReadCall;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesToRead;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReadCall = { "ReadCall", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileReadAsyncComplete_Parms, ReadCall), Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete, METADATA_PARAMS(nullptr, 0) }; // 501377439
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileReadAsyncComplete_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_BytesToRead = { "BytesToRead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileReadAsyncComplete_Parms, BytesToRead), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileReadAsyncComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteStorage_eventFileReadAsyncComplete_Parms), &Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReadCall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_BytesToRead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Copies the bytes from a file which was asynchronously read with FileReadAsync into a byte array.\n\x09*\n\x09* This should never be called outside of the context of a RemoteStorageFileReadAsyncComplete_t call result.\n\x09*\n\x09* @param\x09ReadCall\x09\x09\x09The call result handle obtained from RemoteStorageFileReadAsyncComplete_t.\n\x09* @param\x09""Buffer\x09\x09\x09\x09The buffer that the file will be read into.\n\x09* @param\x09""BytesToRead\x09\x09\x09The number of bytes to copy. This should usually be the m_cubRead value from RemoteStorageFileReadAsyncComplete_t\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Copies the bytes from a file which was asynchronously read with FileReadAsync into a byte array.\n\nThis should never be called outside of the context of a RemoteStorageFileReadAsyncComplete_t call result.\n\n@param        ReadCall                        The call result handle obtained from RemoteStorageFileReadAsyncComplete_t.\n@param        Buffer                          The buffer that the file will be read into.\n@param        BytesToRead                     The number of bytes to copy. This should usually be the m_cubRead value from RemoteStorageFileReadAsyncComplete_t" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileReadAsyncComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::RemoteStorage_eventFileReadAsyncComplete_Parms), Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileShare_Statics
	{
		struct RemoteStorage_eventFileShare_Parms
		{
			FScriptDelegate Callback;
			FString File;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileShare_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_Callback_MetaData)) }; // 4163166195
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileShare_Parms, File), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileShare_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileShare_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Copies the bytes from a file which was asynchronously read with FileReadAsync into a byte array.\n\x09*\n\x09* This should never be called outside of the context of a RemoteStorageFileReadAsyncComplete_t call result.\n\x09*\n\x09* @param\x09""File\x09\x09\x09The name of the file to share.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Copies the bytes from a file which was asynchronously read with FileReadAsync into a byte array.\n\nThis should never be called outside of the context of a RemoteStorageFileReadAsyncComplete_t call result.\n\n@param        File                    The name of the file to share." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileShare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileShare", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::RemoteStorage_eventFileShare_Parms), Z_Construct_UFunction_URemoteStorage_FileShare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileShare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileShare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWrite_Statics
	{
		struct RemoteStorage_eventFileWrite_Parms
		{
			FString File;
			TArray<uint8> Data;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileWrite_Parms, File), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileWrite_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileWrite_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteStorage_eventFileWrite_Parms), &Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Creates a new file, writes the bytes to the file, and then closes the file. If the target file already exists, it is overwritten.\n\x09*\n\x09* NOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block. \n\x09* To avoid \"hitching\" due to a busy disk on the client machine using FileWriteAsync, the asynchronous version of this API is recommended.\n\x09*\n\x09* @param\x09""File\x09\x09The name of the file to write to.\n\x09* @param\x09""Data\x09\x09The bytes to write to the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Creates a new file, writes the bytes to the file, and then closes the file. If the target file already exists, it is overwritten.\n\nNOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block.\nTo avoid \"hitching\" due to a busy disk on the client machine using FileWriteAsync, the asynchronous version of this API is recommended.\n\n@param        File            The name of the file to write to.\n@param        Data            The bytes to write to the file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWrite", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::RemoteStorage_eventFileWrite_Parms), Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWrite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics
	{
		struct RemoteStorage_eventFileWriteAsync_Parms
		{
			FScriptDelegate Callback;
			FString File;
			TArray<uint8> Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileWriteAsync_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Callback_MetaData)) }; // 1856230232
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileWriteAsync_Parms, File), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileWriteAsync_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Creates a new file and asynchronously writes the raw byte data to the Steam Cloud, and then closes the file. If the target file already exists, it is overwritten.\n\x09*\n\x09* @param\x09""File\x09\x09The name of the file to write to.\n\x09* @param\x09""Data\x09\x09The bytes to write to the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Creates a new file and asynchronously writes the raw byte data to the Steam Cloud, and then closes the file. If the target file already exists, it is overwritten.\n\n@param        File            The name of the file to write to.\n@param        Data            The bytes to write to the file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWriteAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::RemoteStorage_eventFileWriteAsync_Parms), Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWriteAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics
	{
		struct RemoteStorage_eventFileWriteStreamCancel_Parms
		{
			FUGCFileWriteStreamHandle Handle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamCancel_Parms, Handle), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(nullptr, 0) }; // 1956713119
	void Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileWriteStreamCancel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteStorage_eventFileWriteStreamCancel_Parms), &Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Cancels a file write stream that was started by FileWriteStreamOpen.\n\x09*\n\x09* This trashes all of the data written and closes the write stream, but if there was an existing file with this name, it remains untouched.\n\x09*\n\x09* @param\x09Handle\x09\x09The file write stream to cancel.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Cancels a file write stream that was started by FileWriteStreamOpen.\n\nThis trashes all of the data written and closes the write stream, but if there was an existing file with this name, it remains untouched.\n\n@param        Handle          The file write stream to cancel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWriteStreamCancel", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::RemoteStorage_eventFileWriteStreamCancel_Parms), Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics
	{
		struct RemoteStorage_eventFileWriteStreamClose_Parms
		{
			FUGCFileWriteStreamHandle Handle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamClose_Parms, Handle), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(nullptr, 0) }; // 1956713119
	void Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileWriteStreamClose_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteStorage_eventFileWriteStreamClose_Parms), &Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Closes a file write stream that was started by FileWriteStreamOpen.\n\x09*\n\x09* This flushes the stream to the disk, overwriting the existing file if there was one.\n\x09*\n\x09* @param\x09Handle\x09\x09\x09The file write stream to close.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Closes a file write stream that was started by FileWriteStreamOpen.\n\nThis flushes the stream to the disk, overwriting the existing file if there was one.\n\n@param        Handle                  The file write stream to close." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWriteStreamClose", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::RemoteStorage_eventFileWriteStreamClose_Parms), Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics
	{
		struct RemoteStorage_eventFileWriteStreamOpen_Parms
		{
			FString File;
			FUGCFileWriteStreamHandle ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamOpen_Parms, File), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamOpen_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(nullptr, 0) }; // 1956713119
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Creates a new file output stream allowing you to stream out data to the Steam Cloud file in chunks. If the target file already exists, it is not overwritten until FileWriteStreamClose has been called.\n\x09*\n\x09* To write data out to this stream you can use FileWriteStreamWriteChunk, and then to close or cancel you use FileWriteStreamClose and FileWriteStreamCancel respectively.\n\x09*\n\x09* @param\x09""File\x09The name of the file to write to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Creates a new file output stream allowing you to stream out data to the Steam Cloud file in chunks. If the target file already exists, it is not overwritten until FileWriteStreamClose has been called.\n\nTo write data out to this stream you can use FileWriteStreamWriteChunk, and then to close or cancel you use FileWriteStreamClose and FileWriteStreamCancel respectively.\n\n@param        File    The name of the file to write to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWriteStreamOpen", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::RemoteStorage_eventFileWriteStreamOpen_Parms), Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics
	{
		struct RemoteStorage_eventFileWriteStreamWriteChunk_Parms
		{
			FUGCFileWriteStreamHandle Handle;
			TArray<uint8> Data;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamWriteChunk_Parms, Handle), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(nullptr, 0) }; // 1956713119
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamWriteChunk_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileWriteStreamWriteChunk_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteStorage_eventFileWriteStreamWriteChunk_Parms), &Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Writes a blob of data to the file write stream.\n\x09*\n\x09* @param\x09Handle\x09\x09The file write stream to write to.\n\x09* @param\x09""Data\x09\x09The data to write to the stream.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Writes a blob of data to the file write stream.\n\n@param        Handle          The file write stream to write to.\n@param        Data            The data to write to the stream." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWriteStreamWriteChunk", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::RemoteStorage_eventFileWriteStreamWriteChunk_Parms), Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics
	{
		struct RemoteStorage_eventGetCachedUGCCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetCachedUGCCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetCachedUGCCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::RemoteStorage_eventGetCachedUGCCount_Parms), Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics
	{
		struct RemoteStorage_eventGetCachedUGCHandle_Parms
		{
			int32 ICachedContent;
			FSteamUGCHandle ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ICachedContent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::NewProp_ICachedContent = { "ICachedContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetCachedUGCHandle_Parms, ICachedContent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetCachedUGCHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) }; // 2878754911
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::NewProp_ICachedContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetCachedUGCHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::RemoteStorage_eventGetCachedUGCHandle_Parms), Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics
	{
		struct RemoteStorage_eventGetFileCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetFileCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the total number of local files synchronized by Steam Cloud.\n\x09*\n\x09* Used for enumeration with GetFileNameAndSize.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Gets the total number of local files synchronized by Steam Cloud.\n\nUsed for enumeration with GetFileNameAndSize." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetFileCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::RemoteStorage_eventGetFileCount_Parms), Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetFileCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics
	{
		struct RemoteStorage_eventGetFileNameAndSize_Parms
		{
			int32 File;
			int32 FileSizeInBytes;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_File;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FileSizeInBytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetFileNameAndSize_Parms, File), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_FileSizeInBytes = { "FileSizeInBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetFileNameAndSize_Parms, FileSizeInBytes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetFileNameAndSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_FileSizeInBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the file name and size of a file from the index.\n\x09*\n\x09* @param\x09""File\x09\x09\x09\x09The index of the file, this should be between 0 and GetFileCount.\n\x09* @param\x09""FileSizeInBytes\x09\x09Returns the file size in bytes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Gets the file name and size of a file from the index.\n\n@param        File                            The index of the file, this should be between 0 and GetFileCount.\n@param        FileSizeInBytes         Returns the file size in bytes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetFileNameAndSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::RemoteStorage_eventGetFileNameAndSize_Parms), Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics
	{
		struct RemoteStorage_eventGetFileSize_Parms
		{
			FString File;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetFileSize_Parms, File), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetFileSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the specified files size in bytes.\n\x09*\n\x09* @param\x09""File\x09\x09The name of the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Gets the specified files size in bytes.\n\n@param        File            The name of the file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetFileSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::RemoteStorage_eventGetFileSize_Parms), Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetFileSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics
	{
		struct RemoteStorage_eventGetFileTimestamp_Parms
		{
			FString File;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetFileTimestamp_Parms, File), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetFileTimestamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the specified file's last modified timestamp in Unix epoch format (seconds since Jan 1st 1970).\n\x09*\n\x09* @param\x09""File\x09\x09The name of the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Gets the specified file's last modified timestamp in Unix epoch format (seconds since Jan 1st 1970).\n\n@param        File            The name of the file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetFileTimestamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::RemoteStorage_eventGetFileTimestamp_Parms), Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetFileTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetQuota_Statics
	{
		struct RemoteStorage_eventGetQuota_Parms
		{
			int32 TotalBytes;
			int32 AvailableBytes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalBytes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AvailableBytes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_TotalBytes = { "TotalBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetQuota_Parms, TotalBytes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_AvailableBytes = { "AvailableBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetQuota_Parms, AvailableBytes), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventGetQuota_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteStorage_eventGetQuota_Parms), &Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_TotalBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_AvailableBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the number of bytes available, and used on the users Steam Cloud storage.\n\x09*\n\x09* @param\x09TotalBytes\n\x09* @param\x09""AvailableBytes\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Gets the number of bytes available, and used on the users Steam Cloud storage.\n\n@param        TotalBytes\n@param        AvailableBytes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetQuota", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::RemoteStorage_eventGetQuota_Parms), Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetQuota()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics
	{
		struct RemoteStorage_eventGetSyncPlatforms_Parms
		{
			FString File;
			ESteamRemoteStoragePlatform ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetSyncPlatforms_Parms, File), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetSyncPlatforms_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform, METADATA_PARAMS(nullptr, 0) }; // 3195014589
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Obtains the platforms that the specified file will syncronize to.\n\x09*\n\x09* @param\x09""File\x09The name of the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Obtains the platforms that the specified file will syncronize to.\n\n@param        File    The name of the file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetSyncPlatforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::RemoteStorage_eventGetSyncPlatforms_Parms), Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics
	{
		struct RemoteStorage_eventGetUGCDetails_Parms
		{
			FSteamUGCHandle Handle;
			int32 AppID;
			FString Name;
			int32 FileSizeInBytes;
			FSteamID SteamIDOwner;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FileSizeInBytes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDOwner;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetUGCDetails_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) }; // 2878754911
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetUGCDetails_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetUGCDetails_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_FileSizeInBytes = { "FileSizeInBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetUGCDetails_Parms, FileSizeInBytes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_SteamIDOwner = { "SteamIDOwner", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetUGCDetails_Parms, SteamIDOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventGetUGCDetails_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteStorage_eventGetUGCDetails_Parms), &Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_FileSizeInBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_SteamIDOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets metadata for a file after it has been downloaded. \n\x09*\n\x09* This is the same metadata given in the RemoteStorageDownloadUGCResult_t call result\n\x09*\n\x09* @param\x09Handle\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Gets metadata for a file after it has been downloaded.\n\nThis is the same metadata given in the RemoteStorageDownloadUGCResult_t call result\n\n@param        Handle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetUGCDetails", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::RemoteStorage_eventGetUGCDetails_Parms), Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetUGCDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics
	{
		struct RemoteStorage_eventGetUGCDownloadProgress_Parms
		{
			FSteamUGCHandle Handle;
			int32 BytesDownloaded;
			int32 BytesExpected;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesDownloaded;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BytesExpected;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetUGCDownloadProgress_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) }; // 2878754911
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetUGCDownloadProgress_Parms, BytesDownloaded), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_BytesExpected = { "BytesExpected", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventGetUGCDownloadProgress_Parms, BytesExpected), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventGetUGCDownloadProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteStorage_eventGetUGCDownloadProgress_Parms), &Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_BytesDownloaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_BytesExpected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the amount of data downloaded so far for a piece of content. pnBytesExpected can be 0 if function returns false\n\x09* or if the transfer hasn't started yet, so be careful to check for that before dividing to get a percentage\n\x09*\n\x09* @param\x09Handle\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Gets the amount of data downloaded so far for a piece of content. pnBytesExpected can be 0 if function returns false\nor if the transfer hasn't started yet, so be careful to check for that before dividing to get a percentage\n\n@param        Handle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetUGCDownloadProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::RemoteStorage_eventGetUGCDownloadProgress_Parms), Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics
	{
		struct RemoteStorage_eventIsCloudEnabledForAccount_Parms
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
	void Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventIsCloudEnabledForAccount_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteStorage_eventIsCloudEnabledForAccount_Parms), &Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Checks if the account wide Steam Cloud setting is enabled for this user; or if they disabled it in the Settings->Cloud dialog.\n\x09*\n\x09* Ensure that you are also checking IsCloudEnabledForApp, as these two options are mutually exclusive.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Checks if the account wide Steam Cloud setting is enabled for this user; or if they disabled it in the Settings->Cloud dialog.\n\nEnsure that you are also checking IsCloudEnabledForApp, as these two options are mutually exclusive." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "IsCloudEnabledForAccount", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::RemoteStorage_eventIsCloudEnabledForAccount_Parms), Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics
	{
		struct RemoteStorage_eventIsCloudEnabledForApp_Parms
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
	void Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventIsCloudEnabledForApp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteStorage_eventIsCloudEnabledForApp_Parms), &Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Checks if the per game Steam Cloud setting is enabled for this user; or if they disabled it in the Game Properties->Update dialog.\n\x09*\n\x09* Ensure that you are also checking IsCloudEnabledForAccount, as these two options are mutually exclusive.\n\x09* It's generally recommended that you allow the user to toggle this setting within your in-game options, you can toggle it with SetCloudEnabledForApp.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Checks if the per game Steam Cloud setting is enabled for this user; or if they disabled it in the Game Properties->Update dialog.\n\nEnsure that you are also checking IsCloudEnabledForAccount, as these two options are mutually exclusive.\nIt's generally recommended that you allow the user to toggle this setting within your in-game options, you can toggle it with SetCloudEnabledForApp." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "IsCloudEnabledForApp", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::RemoteStorage_eventIsCloudEnabledForApp_Parms), Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics
	{
		struct RemoteStorage_eventSetCloudEnabledForApp_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((RemoteStorage_eventSetCloudEnabledForApp_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteStorage_eventSetCloudEnabledForApp_Parms), &Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Toggles whether the Steam Cloud is enabled for your application.\n\x09*\n\x09* This setting can be queried with IsCloudEnabledForApp.\n\x09*\n\x09* @param\x09""bEnabled\x09""Enable (true) or disable (false) the Steam Cloud for this application?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Toggles whether the Steam Cloud is enabled for your application.\n\nThis setting can be queried with IsCloudEnabledForApp.\n\n@param        bEnabled        Enable (true) or disable (false) the Steam Cloud for this application?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "SetCloudEnabledForApp", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::RemoteStorage_eventSetCloudEnabledForApp_Parms), Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics
	{
		struct RemoteStorage_eventSetSyncPlatforms_Parms
		{
			FString File;
			ESteamRemoteStoragePlatform RemoteStoragePlatform;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RemoteStoragePlatform_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RemoteStoragePlatform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventSetSyncPlatforms_Parms, File), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform = { "RemoteStoragePlatform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventSetSyncPlatforms_Parms, RemoteStoragePlatform), Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform, METADATA_PARAMS(nullptr, 0) }; // 3195014589
	void Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventSetSyncPlatforms_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteStorage_eventSetSyncPlatforms_Parms), &Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Allows you to specify which operating systems a file will be synchronized to.\n\x09*\n\x09* Use this if you have a multiplatform game but have data which is incompatible between platforms.\n\x09* Files default to k_ERemoteStoragePlatformAll when they are first created. You can use the bitwise OR operator, \"|\" to specify multiple platforms.\n\x09*\n\x09* @param\x09""File\x09\x09\x09\x09\x09\x09The name of the file.\n\x09* @param\x09RemoteStoragePlatform\x09\x09The platforms that the file will be syncronized to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Allows you to specify which operating systems a file will be synchronized to.\n\nUse this if you have a multiplatform game but have data which is incompatible between platforms.\nFiles default to k_ERemoteStoragePlatformAll when they are first created. You can use the bitwise OR operator, \"|\" to specify multiple platforms.\n\n@param        File                                            The name of the file.\n@param        RemoteStoragePlatform           The platforms that the file will be syncronized to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "SetSyncPlatforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::RemoteStorage_eventSetSyncPlatforms_Parms), Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics
	{
		struct RemoteStorage_eventUGCDownload_Parms
		{
			FScriptDelegate Callback;
			FSteamUGCHandle Content;
			int32 Priority;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Content;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventUGCDownload_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Callback_MetaData)) }; // 2825668118
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventUGCDownload_Parms, Content), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) }; // 2878754911
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventUGCDownload_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Priority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Downloads a UGC file.  A priority value of 0 will download the file immediately,\n\x09* otherwise it will wait to download the file until all downloads with a lower priority\n\x09* value are completed.  Downloads with equal priority will occur simultaneously.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "Downloads a UGC file.  A priority value of 0 will download the file immediately,\notherwise it will wait to download the file until all downloads with a lower priority\nvalue are completed.  Downloads with equal priority will occur simultaneously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "UGCDownload", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::RemoteStorage_eventUGCDownload_Parms), Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_UGCDownload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics
	{
		struct RemoteStorage_eventUGCDownloadToLocation_Parms
		{
			FScriptDelegate Callback;
			FSteamUGCHandle Content;
			FString Location;
			int32 Priority;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Content;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Location;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventUGCDownloadToLocation_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Callback_MetaData)) }; // 1413727271
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventUGCDownloadToLocation_Parms, Content), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) }; // 2878754911
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventUGCDownloadToLocation_Parms, Location), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventUGCDownloadToLocation_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Priority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "UGCDownloadToLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::RemoteStorage_eventUGCDownloadToLocation_Parms), Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_UGCRead_Statics
	{
		struct RemoteStorage_eventUGCRead_Parms
		{
			FSteamUGCHandle Content;
			TArray<uint8> OutData;
			int32 DataToRead;
			int32 Offset;
			ESteamUGCReadAction Action;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Content;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataToRead;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventUGCRead_Parms, Content), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) }; // 2878754911
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_OutData_Inner = { "OutData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventUGCRead_Parms, OutData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_DataToRead = { "DataToRead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventUGCRead_Parms, DataToRead), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventUGCRead_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventUGCRead_Parms, Action), Z_Construct_UEnum_SteamCore_ESteamUGCReadAction, METADATA_PARAMS(nullptr, 0) }; // 4187715704
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteStorage_eventUGCRead_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_OutData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_OutData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_DataToRead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_Action_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* After download, gets the content of the file.\n\x09* Small files can be read all at once by calling this function with an offset of 0 and cubDataToRead equal to the size of the file.\n\x09* Larger files can be read in chunks to reduce memory usage (since both sides of the IPC client and the game itself must allocate\n\x09* enough memory for each chunk).  Once the last byte is read, the file is implicitly closed and further calls to UGCRead will fail unless UGCDownload is called again.\n\x09* \n\x09* For especially large files (anything over 100MB) it is a requirement that the file is read in chunks.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ToolTip", "After download, gets the content of the file.\nSmall files can be read all at once by calling this function with an offset of 0 and cubDataToRead equal to the size of the file.\nLarger files can be read in chunks to reduce memory usage (since both sides of the IPC client and the game itself must allocate\nenough memory for each chunk).  Once the last byte is read, the file is implicitly closed and further calls to UGCRead will fail unless UGCDownload is called again.\n\nFor especially large files (anything over 100MB) it is a requirement that the file is read in chunks." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "UGCRead", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::RemoteStorage_eventUGCRead_Parms), Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_UGCRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteStorage);
	UClass* Z_Construct_UClass_URemoteStorage_NoRegister()
	{
		return URemoteStorage::StaticClass();
	}
	struct Z_Construct_UClass_URemoteStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteStorageUnsubscribePublishedFileResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RemoteStorageUnsubscribePublishedFileResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteStorageSubscribePublishedFileResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RemoteStorageSubscribePublishedFileResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteStoragePublishedFileUnsubscribed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RemoteStoragePublishedFileUnsubscribed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteStoragePublishedFileSubscribed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RemoteStoragePublishedFileSubscribed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URemoteStorage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URemoteStorage_FileDelete, "FileDelete" }, // 2915257187
		{ &Z_Construct_UFunction_URemoteStorage_FileExists, "FileExists" }, // 1787344402
		{ &Z_Construct_UFunction_URemoteStorage_FileForget, "FileForget" }, // 1289130533
		{ &Z_Construct_UFunction_URemoteStorage_FilePersisted, "FilePersisted" }, // 874480649
		{ &Z_Construct_UFunction_URemoteStorage_FileRead, "FileRead" }, // 291467575
		{ &Z_Construct_UFunction_URemoteStorage_FileReadAsync, "FileReadAsync" }, // 1839341947
		{ &Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete, "FileReadAsyncComplete" }, // 2799677296
		{ &Z_Construct_UFunction_URemoteStorage_FileShare, "FileShare" }, // 514581271
		{ &Z_Construct_UFunction_URemoteStorage_FileWrite, "FileWrite" }, // 1531841683
		{ &Z_Construct_UFunction_URemoteStorage_FileWriteAsync, "FileWriteAsync" }, // 3371031994
		{ &Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel, "FileWriteStreamCancel" }, // 1867638200
		{ &Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose, "FileWriteStreamClose" }, // 2664303762
		{ &Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen, "FileWriteStreamOpen" }, // 1531286683
		{ &Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk, "FileWriteStreamWriteChunk" }, // 2022876933
		{ &Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount, "GetCachedUGCCount" }, // 4130531862
		{ &Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle, "GetCachedUGCHandle" }, // 2123663832
		{ &Z_Construct_UFunction_URemoteStorage_GetFileCount, "GetFileCount" }, // 3597727641
		{ &Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize, "GetFileNameAndSize" }, // 3038458685
		{ &Z_Construct_UFunction_URemoteStorage_GetFileSize, "GetFileSize" }, // 1120159030
		{ &Z_Construct_UFunction_URemoteStorage_GetFileTimestamp, "GetFileTimestamp" }, // 568733438
		{ &Z_Construct_UFunction_URemoteStorage_GetQuota, "GetQuota" }, // 2290654897
		{ &Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms, "GetSyncPlatforms" }, // 3426607918
		{ &Z_Construct_UFunction_URemoteStorage_GetUGCDetails, "GetUGCDetails" }, // 2770406772
		{ &Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress, "GetUGCDownloadProgress" }, // 3061343382
		{ &Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount, "IsCloudEnabledForAccount" }, // 3690486758
		{ &Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp, "IsCloudEnabledForApp" }, // 3520711615
		{ &Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp, "SetCloudEnabledForApp" }, // 3002489403
		{ &Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms, "SetSyncPlatforms" }, // 107125165
		{ &Z_Construct_UFunction_URemoteStorage_UGCDownload, "UGCDownload" }, // 449050870
		{ &Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation, "UGCDownloadToLocation" }, // 1955583163
		{ &Z_Construct_UFunction_URemoteStorage_UGCRead, "UGCRead" }, // 3183582499
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteStorage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamRemoteStorage/SteamRemoteStorage.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageUnsubscribePublishedFileResult_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageUnsubscribePublishedFileResult = { "RemoteStorageUnsubscribePublishedFileResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteStorage, RemoteStorageUnsubscribePublishedFileResult), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageUnsubscribePublishedFileResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageUnsubscribePublishedFileResult_MetaData)) }; // 3580691114
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageSubscribePublishedFileResult_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageSubscribePublishedFileResult = { "RemoteStorageSubscribePublishedFileResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteStorage, RemoteStorageSubscribePublishedFileResult), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageSubscribePublishedFileResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageSubscribePublishedFileResult_MetaData)) }; // 3192515416
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileUnsubscribed_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileUnsubscribed = { "RemoteStoragePublishedFileUnsubscribed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteStorage, RemoteStoragePublishedFileUnsubscribed), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileUnsubscribed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileUnsubscribed_MetaData)) }; // 2852763817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileSubscribed_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorage.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileSubscribed = { "RemoteStoragePublishedFileSubscribed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteStorage, RemoteStoragePublishedFileSubscribed), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileSubscribed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileSubscribed_MetaData)) }; // 1270676392
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteStorage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageUnsubscribePublishedFileResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageSubscribePublishedFileResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileUnsubscribed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileSubscribed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteStorage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteStorage_Statics::ClassParams = {
		&URemoteStorage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URemoteStorage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteStorage()
	{
		if (!Z_Registration_Info_UClass_URemoteStorage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteStorage.OuterSingleton, Z_Construct_UClass_URemoteStorage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteStorage.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<URemoteStorage>()
	{
		return URemoteStorage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteStorage);
	URemoteStorage::~URemoteStorage() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteStorage, URemoteStorage::StaticClass, TEXT("URemoteStorage"), &Z_Registration_Info_UClass_URemoteStorage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteStorage), 4279879948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_1783370130(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
