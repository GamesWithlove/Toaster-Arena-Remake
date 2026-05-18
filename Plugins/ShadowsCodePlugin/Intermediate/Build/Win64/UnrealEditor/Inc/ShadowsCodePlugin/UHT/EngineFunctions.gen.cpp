// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EngineFunctions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEngineFunctions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
SHADOWSCODEPLUGIN_API UClass* Z_Construct_UClass_UEngineFunctions();
SHADOWSCODEPLUGIN_API UClass* Z_Construct_UClass_UEngineFunctions_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShadowsCodePlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEngineFunctions Function K2_IsTearingDown *******************************
struct Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics
{
	struct EngineFunctions_eventK2_IsTearingDown_Parms
	{
		UObject* caller;
		bool isTearingDown;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WorldState" },
		{ "DefaultToSelf", "caller" },
		{ "DisplayName", "IsTearingDown" },
		{ "HidePin", "caller" },
		{ "ModuleRelativePath", "Public/EngineFunctions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_IsTearingDown constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_caller;
	static void NewProp_isTearingDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isTearingDown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function K2_IsTearingDown constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function K2_IsTearingDown Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::NewProp_caller = { "caller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineFunctions_eventK2_IsTearingDown_Parms, caller), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::NewProp_isTearingDown_SetBit(void* Obj)
{
	((EngineFunctions_eventK2_IsTearingDown_Parms*)Obj)->isTearingDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::NewProp_isTearingDown = { "isTearingDown", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EngineFunctions_eventK2_IsTearingDown_Parms), &Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::NewProp_isTearingDown_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::NewProp_caller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::NewProp_isTearingDown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::PropPointers) < 2048);
// ********** End Function K2_IsTearingDown Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEngineFunctions, nullptr, "K2_IsTearingDown", 	Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::EngineFunctions_eventK2_IsTearingDown_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::EngineFunctions_eventK2_IsTearingDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UEngineFunctions Function K2_IsTearingDown *********************************

// ********** Begin Class UEngineFunctions Function ValidateAnimSequence ***************************
struct Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics
{
	struct EngineFunctions_eventValidateAnimSequence_Parms
	{
		UAnimSequenceBase* SequenceBase;
		USkeleton* VSkeleton;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SkeletalMisc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Validate if AnimSequence Base has same bones\n" },
#endif
		{ "DefaultToSelf", "EngineFunctions" },
		{ "DisplayName", "ValidatAnimSequenceBones" },
		{ "HidePin", "target" },
		{ "ModuleRelativePath", "Public/EngineFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Validate if AnimSequence Base has same bones" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ValidateAnimSequence constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SequenceBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VSkeleton;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ValidateAnimSequence constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ValidateAnimSequence Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::NewProp_SequenceBase = { "SequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineFunctions_eventValidateAnimSequence_Parms, SequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::NewProp_VSkeleton = { "VSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineFunctions_eventValidateAnimSequence_Parms, VSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EngineFunctions_eventValidateAnimSequence_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EngineFunctions_eventValidateAnimSequence_Parms), &Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::NewProp_SequenceBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::NewProp_VSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::PropPointers) < 2048);
// ********** End Function ValidateAnimSequence Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEngineFunctions, nullptr, "ValidateAnimSequence", 	Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::EngineFunctions_eventValidateAnimSequence_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::EngineFunctions_eventValidateAnimSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEngineFunctions::execValidateAnimSequence)
{
	P_GET_OBJECT(UAnimSequenceBase,Z_Param_SequenceBase);
	P_GET_OBJECT(USkeleton,Z_Param_VSkeleton);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEngineFunctions::ValidateAnimSequence(Z_Param_SequenceBase,Z_Param_VSkeleton);
	P_NATIVE_END;
}
// ********** End Class UEngineFunctions Function ValidateAnimSequence *****************************

// ********** Begin Class UEngineFunctions Function ValidateMontage ********************************
struct Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics
{
	struct EngineFunctions_eventValidateMontage_Parms
	{
		UAnimMontage* Montage;
		USkeleton* VSkeleton;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SkeletalMisc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Validate if montage has same bones\n" },
#endif
		{ "DefaultToSelf", "EngineFunctions" },
		{ "DisplayName", "ValidateMontageBones" },
		{ "HidePin", "target" },
		{ "ModuleRelativePath", "Public/EngineFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Validate if montage has same bones" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ValidateMontage constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VSkeleton;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ValidateMontage constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ValidateMontage Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineFunctions_eventValidateMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_VSkeleton = { "VSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineFunctions_eventValidateMontage_Parms, VSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EngineFunctions_eventValidateMontage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EngineFunctions_eventValidateMontage_Parms), &Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_VSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::PropPointers) < 2048);
// ********** End Function ValidateMontage Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEngineFunctions, nullptr, "ValidateMontage", 	Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::EngineFunctions_eventValidateMontage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::EngineFunctions_eventValidateMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEngineFunctions_ValidateMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEngineFunctions_ValidateMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEngineFunctions::execValidateMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_OBJECT(USkeleton,Z_Param_VSkeleton);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEngineFunctions::ValidateMontage(Z_Param_Montage,Z_Param_VSkeleton);
	P_NATIVE_END;
}
// ********** End Class UEngineFunctions Function ValidateMontage **********************************

// ********** Begin Class UEngineFunctions *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEngineFunctions;
UClass* UEngineFunctions::GetPrivateStaticClass()
{
	using TClass = UEngineFunctions;
	if (!Z_Registration_Info_UClass_UEngineFunctions.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EngineFunctions"),
			Z_Registration_Info_UClass_UEngineFunctions.InnerSingleton,
			StaticRegisterNativesUEngineFunctions,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UEngineFunctions.InnerSingleton;
}
UClass* Z_Construct_UClass_UEngineFunctions_NoRegister()
{
	return UEngineFunctions::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEngineFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EngineFunctions.h" },
		{ "ModuleRelativePath", "Public/EngineFunctions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEngineFunctions constinit property declarations *************************
// ********** End Class UEngineFunctions constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("K2_IsTearingDown"), .Pointer = &UEngineFunctions::execK2_IsTearingDown },
		{ .NameUTF8 = UTF8TEXT("ValidateAnimSequence"), .Pointer = &UEngineFunctions::execValidateAnimSequence },
		{ .NameUTF8 = UTF8TEXT("ValidateMontage"), .Pointer = &UEngineFunctions::execValidateMontage },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEngineFunctions_K2_IsTearingDown, "K2_IsTearingDown" }, // 889367664
		{ &Z_Construct_UFunction_UEngineFunctions_ValidateAnimSequence, "ValidateAnimSequence" }, // 2000067555
		{ &Z_Construct_UFunction_UEngineFunctions_ValidateMontage, "ValidateMontage" }, // 3171512782
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEngineFunctions_Statics
UObject* (*const Z_Construct_UClass_UEngineFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ShadowsCodePlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEngineFunctions_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEngineFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UEngineFunctions_Statics::Class_MetaDataParams)
};
void UEngineFunctions::StaticRegisterNativesUEngineFunctions()
{
	UClass* Class = UEngineFunctions::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UEngineFunctions_Statics::Funcs));
}
UClass* Z_Construct_UClass_UEngineFunctions()
{
	if (!Z_Registration_Info_UClass_UEngineFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEngineFunctions.OuterSingleton, Z_Construct_UClass_UEngineFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEngineFunctions.OuterSingleton;
}
UEngineFunctions::UEngineFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEngineFunctions);
UEngineFunctions::~UEngineFunctions() {}
// ********** End Class UEngineFunctions ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h__Script_ShadowsCodePlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEngineFunctions, UEngineFunctions::StaticClass, TEXT("UEngineFunctions"), &Z_Registration_Info_UClass_UEngineFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEngineFunctions), 1467924860U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h__Script_ShadowsCodePlugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h__Script_ShadowsCodePlugin_4249915317{
	TEXT("/Script/ShadowsCodePlugin"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h__Script_ShadowsCodePlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_EngineFunctions_h__Script_ShadowsCodePlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
