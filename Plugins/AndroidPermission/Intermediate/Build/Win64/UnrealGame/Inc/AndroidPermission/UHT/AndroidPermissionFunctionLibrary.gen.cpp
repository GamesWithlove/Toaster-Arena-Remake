// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "E:/Ue4_projects/Toaster-Arena-Remake/Plugins/AndroidPermission/Source/AndroidPermission/Classes/AndroidPermissionFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidPermissionFunctionLibrary() {}
// Cross Module References
	ANDROIDPERMISSION_API UClass* Z_Construct_UClass_UAndroidPermissionCallbackProxy_NoRegister();
	ANDROIDPERMISSION_API UClass* Z_Construct_UClass_UAndroidPermissionFunctionLibrary();
	ANDROIDPERMISSION_API UClass* Z_Construct_UClass_UAndroidPermissionFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AndroidPermission();
// End Cross Module References
	DEFINE_FUNCTION(UAndroidPermissionFunctionLibrary::execAcquirePermissions)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_permissions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAndroidPermissionCallbackProxy**)Z_Param__Result=UAndroidPermissionFunctionLibrary::AcquirePermissions(Z_Param_Out_permissions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAndroidPermissionFunctionLibrary::execCheckPermission)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_permission);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAndroidPermissionFunctionLibrary::CheckPermission(Z_Param_permission);
		P_NATIVE_END;
	}
	void UAndroidPermissionFunctionLibrary::StaticRegisterNativesUAndroidPermissionFunctionLibrary()
	{
		UClass* Class = UAndroidPermissionFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcquirePermissions", &UAndroidPermissionFunctionLibrary::execAcquirePermissions },
			{ "CheckPermission", &UAndroidPermissionFunctionLibrary::execCheckPermission },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics
	{
		struct AndroidPermissionFunctionLibrary_eventAcquirePermissions_Parms
		{
			TArray<FString> permissions;
			UAndroidPermissionCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_permissions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_permissions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_permissions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions_Inner = { "permissions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions = { "permissions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AndroidPermissionFunctionLibrary_eventAcquirePermissions_Parms, permissions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AndroidPermissionFunctionLibrary_eventAcquirePermissions_Parms, ReturnValue), Z_Construct_UClass_UAndroidPermissionCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::Function_MetaDataParams[] = {
		{ "Category", "AndroidPermission" },
		{ "Comment", "/** try to acquire permissions and return a singleton callback proxy object containing OnPermissionsGranted delegate */" },
		{ "DisplayName", "Request Android Permissions" },
		{ "ModuleRelativePath", "Classes/AndroidPermissionFunctionLibrary.h" },
		{ "ToolTip", "try to acquire permissions and return a singleton callback proxy object containing OnPermissionsGranted delegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidPermissionFunctionLibrary, nullptr, "AcquirePermissions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::AndroidPermissionFunctionLibrary_eventAcquirePermissions_Parms), Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics
	{
		struct AndroidPermissionFunctionLibrary_eventCheckPermission_Parms
		{
			FString permission;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_permission_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_permission;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_permission_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_permission = { "permission", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AndroidPermissionFunctionLibrary_eventCheckPermission_Parms, permission), METADATA_PARAMS(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_permission_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_permission_MetaData)) };
	void Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AndroidPermissionFunctionLibrary_eventCheckPermission_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AndroidPermissionFunctionLibrary_eventCheckPermission_Parms), &Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_permission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::Function_MetaDataParams[] = {
		{ "Category", "AndroidPermission" },
		{ "Comment", "/** check if the permission is already granted */" },
		{ "DisplayName", "Check Android Permission" },
		{ "ModuleRelativePath", "Classes/AndroidPermissionFunctionLibrary.h" },
		{ "ToolTip", "check if the permission is already granted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidPermissionFunctionLibrary, nullptr, "CheckPermission", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::AndroidPermissionFunctionLibrary_eventCheckPermission_Parms), Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAndroidPermissionFunctionLibrary);
	UClass* Z_Construct_UClass_UAndroidPermissionFunctionLibrary_NoRegister()
	{
		return UAndroidPermissionFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidPermission,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions, "AcquirePermissions" }, // 580399180
		{ &Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission, "CheckPermission" }, // 835382743
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidPermissionFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/AndroidPermissionFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidPermissionFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::ClassParams = {
		&UAndroidPermissionFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidPermissionFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.OuterSingleton;
	}
	template<> ANDROIDPERMISSION_API UClass* StaticClass<UAndroidPermissionFunctionLibrary>()
	{
		return UAndroidPermissionFunctionLibrary::StaticClass();
	}
	UAndroidPermissionFunctionLibrary::UAndroidPermissionFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidPermissionFunctionLibrary);
	UAndroidPermissionFunctionLibrary::~UAndroidPermissionFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidPermissionFunctionLibrary, UAndroidPermissionFunctionLibrary::StaticClass, TEXT("UAndroidPermissionFunctionLibrary"), &Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidPermissionFunctionLibrary), 2646028698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_844447538(TEXT("/Script/AndroidPermission"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
