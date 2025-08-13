// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowsCodePlugin/Public/EngineFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineFunctions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SHADOWSCODEPLUGIN_API UClass* Z_Construct_UClass_UEngineFunctions();
	SHADOWSCODEPLUGIN_API UClass* Z_Construct_UClass_UEngineFunctions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShadowsCodePlugin();
// End Cross Module References
	DEFINE_FUNCTION(UEngineFunctions::execValidateMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidateMontage(Z_Param_Montage,Z_Param_BoneName,Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEngineFunctions::execGetBoneTransformFromMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetBoneTransformFromMontage(Z_Param_Montage,Z_Param_BoneName,Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEngineFunctions::execK2_IsTearingDown)
	{
		P_GET_OBJECT(UObject,Z_Param_caller);
		P_GET_UBOOL_REF(Z_Param_Out_isTearingDown);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEngineFunctions::K2_IsTearingDown(Z_Param_caller,Z_Param_Out_isTearingDown);
		P_NATIVE_END;
	}
	void UEngineFunctions::StaticRegisterNativesUEngineFunctions()
	{
		UClass* Class = UEngineFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoneTransformFromMontage", &UEngineFunctions::execGetBoneTransformFromMontage },
			{ "K2_IsTearingDown", &UEngineFunctions::execK2_IsTearingDown },
			{ "ValidateMontage", &UEngineFunctions::execValidateMontage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics
	{
		struct EngineFunctions_eventGetBoneTransformFromMontage_Parms
		{
			UAnimMontage* Montage;
			FName BoneName;
			float Time;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EngineFunctions_eventGetBoneTransformFromMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EngineFunctions_eventGetBoneTransformFromMontage_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EngineFunctions_eventGetBoneTransformFromMontage_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EngineFunctions_eventGetBoneTransformFromMontage_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skeletal" },
		{ "Comment", "//Get the transform of a bone from a skeleton at a montage\n" },
		{ "DisplayName", "Get Montage Bones" },
		{ "ModuleRelativePath", "Public/EngineFunctions.h" },
		{ "ToolTip", "Get the transform of a bone from a skeleton at a montage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEngineFunctions, nullptr, "GetBoneTransformFromMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics::EngineFunctions_eventGetBoneTransformFromMontage_Parms), Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics
	{
		struct EngineFunctions_eventK2_IsTearingDown_Parms
		{
			UObject* caller;
			bool isTearingDown;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_caller;
		static void NewProp_isTearingDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isTearingDown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::NewProp_caller = { "caller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EngineFunctions_eventK2_IsTearingDown_Parms, caller), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::NewProp_isTearingDown_SetBit(void* Obj)
	{
		((EngineFunctions_eventK2_IsTearingDown_Parms*)Obj)->isTearingDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::NewProp_isTearingDown = { "isTearingDown", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EngineFunctions_eventK2_IsTearingDown_Parms), &Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::NewProp_isTearingDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::NewProp_caller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::NewProp_isTearingDown,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "WorldState" },
		{ "DefaultToSelf", "caller" },
		{ "DisplayName", "IsTearingDown" },
		{ "HidePin", "caller" },
		{ "ModuleRelativePath", "Public/EngineFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEngineFunctions, nullptr, "K2_IsTearingDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::EngineFunctions_eventK2_IsTearingDown_Parms), Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics
	{
		struct EngineFunctions_eventValidateMontage_Parms
		{
			UAnimMontage* Montage;
			FName BoneName;
			float Time;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EngineFunctions_eventValidateMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EngineFunctions_eventValidateMontage_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EngineFunctions_eventValidateMontage_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EngineFunctions_eventValidateMontage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EngineFunctions_eventValidateMontage_Parms), &Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skeletal" },
		{ "Comment", "//Validate if montage has same bones\n" },
		{ "DisplayName", "Validate montage bones" },
		{ "ModuleRelativePath", "Public/EngineFunctions.h" },
		{ "ToolTip", "Validate if montage has same bones" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEngineFunctions, nullptr, "ValidateMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::EngineFunctions_eventValidateMontage_Parms), Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEngineFunctions_ValidateMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEngineFunctions);
	UClass* Z_Construct_UClass_UEngineFunctions_NoRegister()
	{
		return UEngineFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UEngineFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEngineFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowsCodePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEngineFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEngineFunctions_GetBoneTransformFromMontage, "GetBoneTransformFromMontage" }, // 1434993389
		{ &Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown, "K2_IsTearingDown" }, // 3938519319
		{ &Z_Construct_UFunction_UEngineFunctions_ValidateMontage, "ValidateMontage" }, // 3499484279
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineFunctions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EngineFunctions.h" },
		{ "ModuleRelativePath", "Public/EngineFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEngineFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEngineFunctions_Statics::ClassParams = {
		&UEngineFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEngineFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEngineFunctions()
	{
		if (!Z_Registration_Info_UClass_UEngineFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEngineFunctions.OuterSingleton, Z_Construct_UClass_UEngineFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEngineFunctions.OuterSingleton;
	}
	template<> SHADOWSCODEPLUGIN_API UClass* StaticClass<UEngineFunctions>()
	{
		return UEngineFunctions::StaticClass();
	}
	UEngineFunctions::UEngineFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineFunctions);
	UEngineFunctions::~UEngineFunctions() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEngineFunctions, UEngineFunctions::StaticClass, TEXT("UEngineFunctions"), &Z_Registration_Info_UClass_UEngineFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEngineFunctions), 3621123217U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h_721691241(TEXT("/Script/ShadowsCodePlugin"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
