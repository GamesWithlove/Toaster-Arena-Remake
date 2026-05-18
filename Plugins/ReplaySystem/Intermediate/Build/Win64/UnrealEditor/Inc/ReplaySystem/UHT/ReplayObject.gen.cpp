// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplayObject.h"
#include "ReplayStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeReplayObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UReplayObject();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UReplayObject_NoRegister();
REPLAYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature();
REPLAYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReplayInfo();
UPackage* Z_Construct_UPackage__Script_ReplaySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UReplayObject Function RequestEvents *************************************
struct Z_Construct_UFunction_UReplayObject_RequestEvents_Statics
{
	struct ReplayObject_eventRequestEvents_Parms
	{
		FString Group;
		int32 UserIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *  Gets the events of a loaded replay\n\x09 * @param Group \n\x09 * @param UserIndex \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ReplayObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the events of a loaded replay\n@param Group\n@param UserIndex" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RequestEvents constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Group;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestEvents constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestEvents Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplayObject_RequestEvents_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayObject_eventRequestEvents_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReplayObject_RequestEvents_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReplayObject_eventRequestEvents_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplayObject_RequestEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayObject_RequestEvents_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplayObject_RequestEvents_Statics::NewProp_UserIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayObject_RequestEvents_Statics::PropPointers) < 2048);
// ********** End Function RequestEvents Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplayObject_RequestEvents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UReplayObject, nullptr, "RequestEvents", 	Z_Construct_UFunction_UReplayObject_RequestEvents_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayObject_RequestEvents_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UReplayObject_RequestEvents_Statics::ReplayObject_eventRequestEvents_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReplayObject_RequestEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReplayObject_RequestEvents_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UReplayObject_RequestEvents_Statics::ReplayObject_eventRequestEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReplayObject_RequestEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplayObject_RequestEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReplayObject::execRequestEvents)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Group);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestEvents(Z_Param_Group,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class UReplayObject Function RequestEvents ***************************************

// ********** Begin Class UReplayObject ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UReplayObject;
UClass* UReplayObject::GetPrivateStaticClass()
{
	using TClass = UReplayObject;
	if (!Z_Registration_Info_UClass_UReplayObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ReplayObject"),
			Z_Registration_Info_UClass_UReplayObject.InnerSingleton,
			StaticRegisterNativesUReplayObject,
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
	return Z_Registration_Info_UClass_UReplayObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UReplayObject_NoRegister()
{
	return UReplayObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UReplayObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ReplayObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ReplayObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplayObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplayInfo_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplayObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestEventsComplete_MetaData[] = {
		{ "Category", "Replay|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// called once the events have been gotten\n" },
#endif
		{ "ModuleRelativePath", "Public/ReplayObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called once the events have been gotten" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UReplayObject constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplayInfo;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestEventsComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UReplayObject constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RequestEvents"), .Pointer = &UReplayObject::execRequestEvents },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReplayObject_RequestEvents, "RequestEvents" }, // 1316059953
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplayObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UReplayObject_Statics

// ********** Begin Class UReplayObject Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReplayObject_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplayObject, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplayObject_Statics::NewProp_ReplayInfo = { "ReplayInfo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplayObject, ReplayInfo), Z_Construct_UScriptStruct_FReplayInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplayInfo_MetaData), NewProp_ReplayInfo_MetaData) }; // 2733030706
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UReplayObject_Statics::NewProp_OnRequestEventsComplete = { "OnRequestEventsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReplayObject, OnRequestEventsComplete), Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestEventsComplete_MetaData), NewProp_OnRequestEventsComplete_MetaData) }; // 2458229898
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplayObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayObject_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayObject_Statics::NewProp_ReplayInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplayObject_Statics::NewProp_OnRequestEventsComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplayObject_Statics::PropPointers) < 2048);
// ********** End Class UReplayObject Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UReplayObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplayObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplayObject_Statics::ClassParams = {
	&UReplayObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UReplayObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UReplayObject_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplayObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UReplayObject_Statics::Class_MetaDataParams)
};
void UReplayObject::StaticRegisterNativesUReplayObject()
{
	UClass* Class = UReplayObject::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UReplayObject_Statics::Funcs));
}
UClass* Z_Construct_UClass_UReplayObject()
{
	if (!Z_Registration_Info_UClass_UReplayObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplayObject.OuterSingleton, Z_Construct_UClass_UReplayObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReplayObject.OuterSingleton;
}
UReplayObject::UReplayObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UReplayObject);
UReplayObject::~UReplayObject() {}
// ********** End Class UReplayObject **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayObject_h__Script_ReplaySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReplayObject, UReplayObject::StaticClass, TEXT("UReplayObject"), &Z_Registration_Info_UClass_UReplayObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplayObject), 2670781648U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayObject_h__Script_ReplaySystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayObject_h__Script_ReplaySystem_1959153915{
	TEXT("/Script/ReplaySystem"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayObject_h__Script_ReplaySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayObject_h__Script_ReplaySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
