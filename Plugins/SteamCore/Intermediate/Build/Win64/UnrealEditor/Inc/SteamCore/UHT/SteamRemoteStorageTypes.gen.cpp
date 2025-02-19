// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamRemoteStorage/SteamRemoteStorageTypes.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamRemoteStorageTypes() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
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
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileShareResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamRemoteStoragePlatform;
	static UEnum* ESteamRemoteStoragePlatform_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamRemoteStoragePlatform.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamRemoteStoragePlatform.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamRemoteStoragePlatform"));
		}
		return Z_Registration_Info_UEnum_ESteamRemoteStoragePlatform.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamRemoteStoragePlatform>()
	{
		return ESteamRemoteStoragePlatform_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform_Statics::Enumerators[] = {
		{ "ESteamRemoteStoragePlatform::None", (int64)ESteamRemoteStoragePlatform::None },
		{ "ESteamRemoteStoragePlatform::Windows", (int64)ESteamRemoteStoragePlatform::Windows },
		{ "ESteamRemoteStoragePlatform::OSX", (int64)ESteamRemoteStoragePlatform::OSX },
		{ "ESteamRemoteStoragePlatform::PS3", (int64)ESteamRemoteStoragePlatform::PS3 },
		{ "ESteamRemoteStoragePlatform::Linux", (int64)ESteamRemoteStoragePlatform::Linux },
		{ "ESteamRemoteStoragePlatform::Reserved2", (int64)ESteamRemoteStoragePlatform::Reserved2 },
		{ "ESteamRemoteStoragePlatform::All", (int64)ESteamRemoteStoragePlatform::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "ESteamRemoteStoragePlatform::All" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "Linux.Name", "ESteamRemoteStoragePlatform::Linux" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
		{ "None.Name", "ESteamRemoteStoragePlatform::None" },
		{ "OSX.Name", "ESteamRemoteStoragePlatform::OSX" },
		{ "PS3.Name", "ESteamRemoteStoragePlatform::PS3" },
		{ "Reserved2.Name", "ESteamRemoteStoragePlatform::Reserved2" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
		{ "Windows.Name", "ESteamRemoteStoragePlatform::Windows" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamRemoteStoragePlatform",
		"ESteamRemoteStoragePlatform",
		Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform()
	{
		if (!Z_Registration_Info_UEnum_ESteamRemoteStoragePlatform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamRemoteStoragePlatform.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamRemoteStoragePlatform.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamUGCReadAction;
	static UEnum* ESteamUGCReadAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamUGCReadAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamUGCReadAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamUGCReadAction, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamUGCReadAction"));
		}
		return Z_Registration_Info_UEnum_ESteamUGCReadAction.OuterSingleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamUGCReadAction>()
	{
		return ESteamUGCReadAction_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamCore_ESteamUGCReadAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamCore_ESteamUGCReadAction_Statics::Enumerators[] = {
		{ "ESteamUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished", (int64)ESteamUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished },
		{ "ESteamUGCReadAction::k_EUGCRead_ContinueReading", (int64)ESteamUGCReadAction::k_EUGCRead_ContinueReading },
		{ "ESteamUGCReadAction::k_EUGCRead_Close", (int64)ESteamUGCReadAction::k_EUGCRead_Close },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamCore_ESteamUGCReadAction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "k_EUGCRead_Close.Comment", "// Frees the file handle.  Use this when you're done reading the content.  \n// To read the file from Steam again you will need to call UGCDownload again. \n" },
		{ "k_EUGCRead_Close.Name", "ESteamUGCReadAction::k_EUGCRead_Close" },
		{ "k_EUGCRead_Close.ToolTip", "Frees the file handle.  Use this when you're done reading the content.\nTo read the file from Steam again you will need to call UGCDownload again." },
		{ "k_EUGCRead_ContinueReading.Comment", "// Keeps the file handle open.  Use this when using UGCRead to seek to different parts of the file.\n// When you are done seeking around the file, make a final call with k_EUGCRead_Close to close it.\n" },
		{ "k_EUGCRead_ContinueReading.Name", "ESteamUGCReadAction::k_EUGCRead_ContinueReading" },
		{ "k_EUGCRead_ContinueReading.ToolTip", "Keeps the file handle open.  Use this when using UGCRead to seek to different parts of the file.\nWhen you are done seeking around the file, make a final call with k_EUGCRead_Close to close it." },
		{ "k_EUGCRead_ContinueReadingUntilFinished.Comment", "// Keeps the file handle open unless the last byte is read.  You can use this when reading large files (over 100MB) in sequential chunks.\n// If the last byte is read, this will behave the same as k_EUGCRead_Close.  Otherwise, it behaves the same as k_EUGCRead_ContinueReading.\n// This value maintains the same behavior as before the EUGCReadAction parameter was introduced.\n" },
		{ "k_EUGCRead_ContinueReadingUntilFinished.Name", "ESteamUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished" },
		{ "k_EUGCRead_ContinueReadingUntilFinished.ToolTip", "Keeps the file handle open unless the last byte is read.  You can use this when reading large files (over 100MB) in sequential chunks.\nIf the last byte is read, this will behave the same as k_EUGCRead_Close.  Otherwise, it behaves the same as k_EUGCRead_ContinueReading.\nThis value maintains the same behavior as before the EUGCReadAction parameter was introduced." },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCore_ESteamUGCReadAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		"ESteamUGCReadAction",
		"ESteamUGCReadAction",
		Z_Construct_UEnum_SteamCore_ESteamUGCReadAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamUGCReadAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamCore_ESteamUGCReadAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCore_ESteamUGCReadAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamCore_ESteamUGCReadAction()
	{
		if (!Z_Registration_Info_UEnum_ESteamUGCReadAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamUGCReadAction.InnerSingleton, Z_Construct_UEnum_SteamCore_ESteamUGCReadAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamUGCReadAction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UGCFileWriteStreamHandle;
class UScriptStruct* FUGCFileWriteStreamHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UGCFileWriteStreamHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UGCFileWriteStreamHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("UGCFileWriteStreamHandle"));
	}
	return Z_Registration_Info_UScriptStruct_UGCFileWriteStreamHandle.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FUGCFileWriteStreamHandle>()
{
	return FUGCFileWriteStreamHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUGCFileWriteStreamHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"UGCFileWriteStreamHandle",
		sizeof(FUGCFileWriteStreamHandle),
		alignof(FUGCFileWriteStreamHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_UGCFileWriteStreamHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UGCFileWriteStreamHandle.InnerSingleton, Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UGCFileWriteStreamHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteStorageFileWriteAsyncComplete;
class UScriptStruct* FRemoteStorageFileWriteAsyncComplete::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStorageFileWriteAsyncComplete.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteStorageFileWriteAsyncComplete.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStorageFileWriteAsyncComplete"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteStorageFileWriteAsyncComplete.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStorageFileWriteAsyncComplete>()
{
	return FRemoteStorageFileWriteAsyncComplete::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageFileWriteAsyncComplete>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStorageFileWriteAsyncComplete, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result_MetaData)) }; // 2739532951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStorageFileWriteAsyncComplete",
		sizeof(FRemoteStorageFileWriteAsyncComplete),
		alignof(FRemoteStorageFileWriteAsyncComplete),
		Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteStorageFileWriteAsyncComplete.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteStorageFileWriteAsyncComplete.InnerSingleton, Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteStorageFileWriteAsyncComplete.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteStorageFileReadAsyncComplete;
class UScriptStruct* FRemoteStorageFileReadAsyncComplete::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStorageFileReadAsyncComplete.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteStorageFileReadAsyncComplete.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStorageFileReadAsyncComplete"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteStorageFileReadAsyncComplete.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStorageFileReadAsyncComplete>()
{
	return FRemoteStorageFileReadAsyncComplete::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Read_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Read;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageFileReadAsyncComplete>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStorageFileReadAsyncComplete, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStorageFileReadAsyncComplete, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Read_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Read = { "Read", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStorageFileReadAsyncComplete, Read), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Read_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Read_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Read,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStorageFileReadAsyncComplete",
		sizeof(FRemoteStorageFileReadAsyncComplete),
		alignof(FRemoteStorageFileReadAsyncComplete),
		Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteStorageFileReadAsyncComplete.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteStorageFileReadAsyncComplete.InnerSingleton, Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteStorageFileReadAsyncComplete.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteStorageFileShareResult;
class UScriptStruct* FRemoteStorageFileShareResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStorageFileShareResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteStorageFileShareResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStorageFileShareResult"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteStorageFileShareResult.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStorageFileShareResult>()
{
	return FRemoteStorageFileShareResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_File;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageFileShareResult>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStorageFileShareResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_File_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStorageFileShareResult, File), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_File_MetaData)) }; // 2878754911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Filename_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStorageFileShareResult, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Filename,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStorageFileShareResult",
		sizeof(FRemoteStorageFileShareResult),
		alignof(FRemoteStorageFileShareResult),
		Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileShareResult()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteStorageFileShareResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteStorageFileShareResult.InnerSingleton, Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteStorageFileShareResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteStorageUnsubscribePublishedFileResult;
class UScriptStruct* FRemoteStorageUnsubscribePublishedFileResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStorageUnsubscribePublishedFileResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteStorageUnsubscribePublishedFileResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStorageUnsubscribePublishedFileResult"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteStorageUnsubscribePublishedFileResult.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStorageUnsubscribePublishedFileResult>()
{
	return FRemoteStorageUnsubscribePublishedFileResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublishedFileId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageUnsubscribePublishedFileResult>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStorageUnsubscribePublishedFileResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_PublishedFileId_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStorageUnsubscribePublishedFileResult, PublishedFileId), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_PublishedFileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_PublishedFileId_MetaData)) }; // 661584633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_PublishedFileId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStorageUnsubscribePublishedFileResult",
		sizeof(FRemoteStorageUnsubscribePublishedFileResult),
		alignof(FRemoteStorageUnsubscribePublishedFileResult),
		Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteStorageUnsubscribePublishedFileResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteStorageUnsubscribePublishedFileResult.InnerSingleton, Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteStorageUnsubscribePublishedFileResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileUnsubscribed;
class UScriptStruct* FRemoteStoragePublishedFileUnsubscribed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileUnsubscribed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileUnsubscribed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStoragePublishedFileUnsubscribed"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileUnsubscribed.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStoragePublishedFileUnsubscribed>()
{
	return FRemoteStoragePublishedFileUnsubscribed::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublishedFileId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStoragePublishedFileUnsubscribed>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_PublishedFileId_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStoragePublishedFileUnsubscribed, PublishedFileId), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_PublishedFileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_PublishedFileId_MetaData)) }; // 661584633
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStoragePublishedFileUnsubscribed, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_AppID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_PublishedFileId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_AppID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStoragePublishedFileUnsubscribed",
		sizeof(FRemoteStoragePublishedFileUnsubscribed),
		alignof(FRemoteStoragePublishedFileUnsubscribed),
		Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileUnsubscribed.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileUnsubscribed.InnerSingleton, Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileUnsubscribed.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileSubscribed;
class UScriptStruct* FRemoteStoragePublishedFileSubscribed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileSubscribed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileSubscribed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStoragePublishedFileSubscribed"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileSubscribed.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStoragePublishedFileSubscribed>()
{
	return FRemoteStoragePublishedFileSubscribed::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublishedFileId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStoragePublishedFileSubscribed>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_PublishedFileId_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStoragePublishedFileSubscribed, PublishedFileId), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_PublishedFileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_PublishedFileId_MetaData)) }; // 661584633
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStoragePublishedFileSubscribed, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_AppID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_PublishedFileId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_AppID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStoragePublishedFileSubscribed",
		sizeof(FRemoteStoragePublishedFileSubscribed),
		alignof(FRemoteStoragePublishedFileSubscribed),
		Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileSubscribed.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileSubscribed.InnerSingleton, Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileSubscribed.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteStorageDownloadUGCResult;
class UScriptStruct* FRemoteStorageDownloadUGCResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteStorageDownloadUGCResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteStorageDownloadUGCResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult, (UObject*)Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStorageDownloadUGCResult"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteStorageDownloadUGCResult.OuterSingleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStorageDownloadUGCResult>()
{
	return FRemoteStorageDownloadUGCResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FileHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeInBytes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeInBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDOwner_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageDownloadUGCResult>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result_MetaData)) }; // 2739532951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_FileHandle_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_FileHandle = { "FileHandle", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, FileHandle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_FileHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_FileHandle_MetaData)) }; // 2878754911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "Comment", "// The handle to the file that was attempted to be downloaded.\n" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
		{ "ToolTip", "The handle to the file that was attempted to be downloaded." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SizeInBytes_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "Comment", "// ID of the app that created this file.\n" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
		{ "ToolTip", "ID of the app that created this file." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SizeInBytes = { "SizeInBytes", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, SizeInBytes), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SizeInBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SizeInBytes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Filename_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "Comment", "// The size of the file that was downloaded, in bytes.\n" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
		{ "ToolTip", "The size of the file that was downloaded, in bytes." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SteamIDOwner_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "Comment", "// The name of the file that was downloaded. \n" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
		{ "ToolTip", "The name of the file that was downloaded." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SteamIDOwner = { "SteamIDOwner", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, SteamIDOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SteamIDOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SteamIDOwner_MetaData)) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_FileHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_AppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SizeInBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SteamIDOwner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStorageDownloadUGCResult",
		sizeof(FRemoteStorageDownloadUGCResult),
		alignof(FRemoteStorageDownloadUGCResult),
		Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteStorageDownloadUGCResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteStorageDownloadUGCResult.InnerSingleton, Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteStorageDownloadUGCResult.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms
		{
			FRemoteStorageUnsubscribePublishedFileResult Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms, Data), Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3312140545
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::_Script_SteamCore_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRemoteStorageUnsubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageUnsubscribePublishedFileResult, FRemoteStorageUnsubscribePublishedFileResult const& Data)
{
	struct _Script_SteamCore_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms
	{
		FRemoteStorageUnsubscribePublishedFileResult Data;
	};
	_Script_SteamCore_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms Parms;
	Parms.Data=Data;
	OnRemoteStorageUnsubscribePublishedFileResult.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRemoteStorageSubscribePublishedFileResult_Parms
		{
			FRemoteStorageSubscribePublishedFileResult Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnRemoteStorageSubscribePublishedFileResult_Parms, Data), Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1148860848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRemoteStorageSubscribePublishedFileResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::_Script_SteamCore_eventOnRemoteStorageSubscribePublishedFileResult_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRemoteStorageSubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageSubscribePublishedFileResult, FRemoteStorageSubscribePublishedFileResult const& Data)
{
	struct _Script_SteamCore_eventOnRemoteStorageSubscribePublishedFileResult_Parms
	{
		FRemoteStorageSubscribePublishedFileResult Data;
	};
	_Script_SteamCore_eventOnRemoteStorageSubscribePublishedFileResult_Parms Parms;
	Parms.Data=Data;
	OnRemoteStorageSubscribePublishedFileResult.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRemoteStoragePublishedFileUnsubscribed_Parms
		{
			FRemoteStoragePublishedFileUnsubscribed Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnRemoteStoragePublishedFileUnsubscribed_Parms, Data), Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 3171979460
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::_Script_SteamCore_eventOnRemoteStoragePublishedFileUnsubscribed_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRemoteStoragePublishedFileUnsubscribed_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileUnsubscribed, FRemoteStoragePublishedFileUnsubscribed const& Data)
{
	struct _Script_SteamCore_eventOnRemoteStoragePublishedFileUnsubscribed_Parms
	{
		FRemoteStoragePublishedFileUnsubscribed Data;
	};
	_Script_SteamCore_eventOnRemoteStoragePublishedFileUnsubscribed_Parms Parms;
	Parms.Data=Data;
	OnRemoteStoragePublishedFileUnsubscribed.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRemoteStoragePublishedFileSubscribed_Parms
		{
			FRemoteStoragePublishedFileSubscribed Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnRemoteStoragePublishedFileSubscribed_Parms, Data), Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1898860980
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRemoteStoragePublishedFileSubscribed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::_Script_SteamCore_eventOnRemoteStoragePublishedFileSubscribed_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRemoteStoragePublishedFileSubscribed_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileSubscribed, FRemoteStoragePublishedFileSubscribed const& Data)
{
	struct _Script_SteamCore_eventOnRemoteStoragePublishedFileSubscribed_Parms
	{
		FRemoteStoragePublishedFileSubscribed Data;
	};
	_Script_SteamCore_eventOnRemoteStoragePublishedFileSubscribed_Parms Parms;
	Parms.Data=Data;
	OnRemoteStoragePublishedFileSubscribed.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnFileWriteAsync_Parms
		{
			FRemoteStorageFileWriteAsyncComplete Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnFileWriteAsync_Parms, Data), Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 501949797
	void Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnFileWriteAsync_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnFileWriteAsync_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFileWriteAsync__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::_Script_SteamCore_eventOnFileWriteAsync_Parms), Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFileWriteAsync_DelegateWrapper(const FScriptDelegate& OnFileWriteAsync, FRemoteStorageFileWriteAsyncComplete const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnFileWriteAsync_Parms
	{
		FRemoteStorageFileWriteAsyncComplete Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnFileWriteAsync_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFileWriteAsync.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnFileReadAsync_Parms
		{
			FRemoteStorageFileReadAsyncComplete Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnFileReadAsync_Parms, Data), Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 501377439
	void Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnFileReadAsync_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnFileReadAsync_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFileReadAsync__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::_Script_SteamCore_eventOnFileReadAsync_Parms), Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFileReadAsync_DelegateWrapper(const FScriptDelegate& OnFileReadAsync, FRemoteStorageFileReadAsyncComplete const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnFileReadAsync_Parms
	{
		FRemoteStorageFileReadAsyncComplete Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnFileReadAsync_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFileReadAsync.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnUGCDownloadAsync_Parms
		{
			FRemoteStorageDownloadUGCResult Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnUGCDownloadAsync_Parms, Data), Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 4030344951
	void Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnUGCDownloadAsync_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnUGCDownloadAsync_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUGCDownloadAsync__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::_Script_SteamCore_eventOnUGCDownloadAsync_Parms), Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUGCDownloadAsync_DelegateWrapper(const FScriptDelegate& OnUGCDownloadAsync, FRemoteStorageDownloadUGCResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnUGCDownloadAsync_Parms
	{
		FRemoteStorageDownloadUGCResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnUGCDownloadAsync_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnUGCDownloadAsync.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnUGCDownloadToLocationAsync_Parms
		{
			FRemoteStorageDownloadUGCResult Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnUGCDownloadToLocationAsync_Parms, Data), Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 4030344951
	void Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnUGCDownloadToLocationAsync_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnUGCDownloadToLocationAsync_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUGCDownloadToLocationAsync__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::_Script_SteamCore_eventOnUGCDownloadToLocationAsync_Parms), Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUGCDownloadToLocationAsync_DelegateWrapper(const FScriptDelegate& OnUGCDownloadToLocationAsync, FRemoteStorageDownloadUGCResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnUGCDownloadToLocationAsync_Parms
	{
		FRemoteStorageDownloadUGCResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnUGCDownloadToLocationAsync_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnUGCDownloadToLocationAsync.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnFileShareAsync_Parms
		{
			FRemoteStorageFileShareResult Data;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamCore_eventOnFileShareAsync_Parms, Data), Z_Construct_UScriptStruct_FRemoteStorageFileShareResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_Data_MetaData)) }; // 1333933013
	void Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnFileShareAsync_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SteamCore_eventOnFileShareAsync_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/SteamRemoteStorageTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFileShareAsync__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::_Script_SteamCore_eventOnFileShareAsync_Parms), Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFileShareAsync_DelegateWrapper(const FScriptDelegate& OnFileShareAsync, FRemoteStorageFileShareResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnFileShareAsync_Parms
	{
		FRemoteStorageFileShareResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnFileShareAsync_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFileShareAsync.ProcessDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_Statics::EnumInfo[] = {
		{ ESteamRemoteStoragePlatform_StaticEnum, TEXT("ESteamRemoteStoragePlatform"), &Z_Registration_Info_UEnum_ESteamRemoteStoragePlatform, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3195014589U) },
		{ ESteamUGCReadAction_StaticEnum, TEXT("ESteamUGCReadAction"), &Z_Registration_Info_UEnum_ESteamUGCReadAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4187715704U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_Statics::ScriptStructInfo[] = {
		{ FUGCFileWriteStreamHandle::StaticStruct, Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::NewStructOps, TEXT("UGCFileWriteStreamHandle"), &Z_Registration_Info_UScriptStruct_UGCFileWriteStreamHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUGCFileWriteStreamHandle), 1956713119U) },
		{ FRemoteStorageFileWriteAsyncComplete::StaticStruct, Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewStructOps, TEXT("RemoteStorageFileWriteAsyncComplete"), &Z_Registration_Info_UScriptStruct_RemoteStorageFileWriteAsyncComplete, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteStorageFileWriteAsyncComplete), 501949797U) },
		{ FRemoteStorageFileReadAsyncComplete::StaticStruct, Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewStructOps, TEXT("RemoteStorageFileReadAsyncComplete"), &Z_Registration_Info_UScriptStruct_RemoteStorageFileReadAsyncComplete, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteStorageFileReadAsyncComplete), 501377439U) },
		{ FRemoteStorageFileShareResult::StaticStruct, Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewStructOps, TEXT("RemoteStorageFileShareResult"), &Z_Registration_Info_UScriptStruct_RemoteStorageFileShareResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteStorageFileShareResult), 1333933013U) },
		{ FRemoteStorageUnsubscribePublishedFileResult::StaticStruct, Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewStructOps, TEXT("RemoteStorageUnsubscribePublishedFileResult"), &Z_Registration_Info_UScriptStruct_RemoteStorageUnsubscribePublishedFileResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteStorageUnsubscribePublishedFileResult), 3312140545U) },
		{ FRemoteStoragePublishedFileUnsubscribed::StaticStruct, Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewStructOps, TEXT("RemoteStoragePublishedFileUnsubscribed"), &Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileUnsubscribed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteStoragePublishedFileUnsubscribed), 3171979460U) },
		{ FRemoteStoragePublishedFileSubscribed::StaticStruct, Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewStructOps, TEXT("RemoteStoragePublishedFileSubscribed"), &Z_Registration_Info_UScriptStruct_RemoteStoragePublishedFileSubscribed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteStoragePublishedFileSubscribed), 1898860980U) },
		{ FRemoteStorageDownloadUGCResult::StaticStruct, Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewStructOps, TEXT("RemoteStorageDownloadUGCResult"), &Z_Registration_Info_UScriptStruct_RemoteStorageDownloadUGCResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteStorageDownloadUGCResult), 4030344951U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_3033776862(TEXT("/Script/SteamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
